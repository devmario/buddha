package com.threedpaper.app108adult.tabitem;

import java.io.File;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import android.app.Activity;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.ImageView;
import android.widget.TextView;

import com.threedpaper.app108adult.R;
import com.threedpaper.model.ModelFoldingSequence;

import exight.common.Variables;
import exight.lib.ExightTabItem;

public class TabItemHowto extends ExightTabItem implements OnClickListener{

	public TabItemHowto(Activity activity) {
		super(activity);
	}

	@Override
	public View setContentView(Activity activity) {
		View v = activity.getLayoutInflater().inflate(R.layout.tabitem_howto, null);
		v.findViewById(R.id.tabItemHowtoFold_btnLeft).setOnClickListener(this);
		v.findViewById(R.id.tabItemHowtoFold_btnRight).setOnClickListener(this);
		v.findViewById(R.id.tabItemHowtoFold_btnMid).setOnClickListener(this);
		return v;
	}

	public void updateDisable() {
		View l = findViewById(R.id.tabItemHowtoFold_btnLeft);
		View m = findViewById(R.id.tabItemHowtoFold_btnMid);
		View r = findViewById(R.id.tabItemHowtoFold_btnRight);
		if(foldingPlayer.getIsAllSequenceMode()) {
			l.setAlpha(1.0f);
			m.setAlpha(0.5f);
			r.setAlpha(1.0f);
		} else {
			if(foldingPlayer.getCurrentSequence() == 0) {
				l.setAlpha(0.5f);
				m.setAlpha(1.0f);
				r.setAlpha(1.0f);
			} else if(foldingPlayer.getSequenceLength() - 1 == foldingPlayer.getCurrentSequence()) {
				l.setAlpha(1.0f);
				m.setAlpha(1.0f);
				r.setAlpha(0.5f);
			} else {
				l.setAlpha(1.0f);
				m.setAlpha(1.0f);
				r.setAlpha(1.0f);
			}
		}

	}

	@Override
	public void onClick(View v) {
		switch(v.getId()){
			case R.id.tabItemHowtoFold_btnLeft:
				foldingPlayer.prevSequencePublic();
				break;
			case R.id.tabItemHowtoFold_btnMid:
				foldingPlayer.playAllSequece();
				break;
			case R.id.tabItemHowtoFold_btnRight:
				foldingPlayer.nextSequencePublic();
				break;
		}
		updateDisable();
	}

	private FoldingPlayer foldingPlayer;
	@Override
	public void onCreate() {
		foldingPlayer = new FoldingPlayer(getActivity(), R.id.tabItemHowtoFold_ivContent, R.id.tabItemHowtoFold_tvContent);
		updateDisable();
	}

	@Override
	public void onPause() {
		if(foldingPlayer != null){
			foldingPlayer.stop();
		}
	}

	@Override
	public void onResume() {
		foldingPlayer.setFirstFrame();
		foldingPlayer.playSequenceWithSetOneSequenceMode();
	}

	class FoldingPlayer{

		public int getSequenceLength() {
			return Variables.LIST_MODEL_SEQUENCE.size();
		}

		private Activity activity;
		public FoldingPlayer(Activity activity, int ivContentId, int tvContentId) {
			this.activity = activity;
			ivTarget = (ImageView) activity.findViewById(ivContentId);
			tvContent = (TextView) activity.findViewById(tvContentId);
		}

		private TextView tvContent;
		private ImageView ivTarget;

		private int currentSequence = 0;
		private MediaPlayer mp;

		public void stop(){
			if(mp != null){
				//				mp.stop();
				mp.release();
			}
		}

		public int getCurrentSequence() {
			return currentSequence;
		}

		public void setFirstFrame(){
			currentSequence = 0;
		}

		boolean isAllSequenceMode = false;

		public boolean getIsAllSequenceMode() {
			return isAllSequenceMode;
		}

		public void playAllSequece(){
			setFirstFrame();
			isAllSequenceMode = true;
			playSequence();

		}

		public void playSequenceWithSetOneSequenceMode(){
			isAllSequenceMode = false;
			playSequence();
		}

		//내부용
		private void playSequence(){
			ModelFoldingSequence f = Variables.LIST_MODEL_SEQUENCE.get(currentSequence);
			//사운드 재생
			if(mp != null){
				mp.release();
			}

			if(!isAllSequenceMode){
				mp = MediaPlayer.create(activity, f.soundId);
				mp.setAudioStreamType(AudioManager.STREAM_MUSIC);
				mp.setVolume(1.0f, 1.0f);
				mp.setLooping(false);
				mp.start();

				//텍스트 변경

				tvContent.setVisibility(View.VISIBLE);
			}else{
				tvContent.setVisibility(View.INVISIBLE);
				;
			}
			tvContent.setText(f.content);

			//이미지 첫프레임으로 ㄱㄱ
			ivTarget.setImageResource(f.imgFrameIds[0]);

			playImageFrame(f.imgFrameIds);
		}

		private boolean nextSequence(){
			if(Variables.LIST_MODEL_SEQUENCE.size() > currentSequence + 1){
				currentSequence ++;
			}else{
				return false;
			}

			playSequence();

			return true;
		}

		//다음 프레임들 재생
		public boolean nextSequencePublic(){
			if(isAllSequenceMode) {
				currentSequence = -1;
			}
			isAllSequenceMode = false;
			return nextSequence();

		}

		//전 프레임들 재생
		public boolean prevSequence(){
			if(currentSequence > 0){
				currentSequence --;
			}else{
				return false;
			}
			playSequence();
			return true;
		}

		//이전 프레임들 재생
		public boolean prevSequencePublic(){
			if(isAllSequenceMode) {
				currentSequence = 0;
			}
			isAllSequenceMode = false;
			return prevSequence();

		}


		private void playImageFrame(int[] imgFrames){
			Map<String, Object> params = new HashMap<String, Object>();
			Message m = new Message();
			m.what = 2;
			m.obj = params;

			params.put("pos", 0);
			params.put("data", imgFrames);

			handlerForFrame.removeMessages(2);
			handlerForFrame.sendMessage(m);
		}

		private Handler handlerForFrame = new Handler(){
			public void dispatchMessage(android.os.Message msg) {
				switch(msg.what){
					//play
					case 2:
						Map<String, Object> params = (Map<String, Object>)msg.obj;
						int[] imgFrames = (int[])params.get("data");
						int pos = (Integer)params.get("pos");

						ivTarget.setImageResource(imgFrames[pos]);
						pos++;
						if(imgFrames.length > pos){

							Message m = new Message();
							m.what = 2;
							m.obj = params;
							params.put("pos", pos);

							this.sendMessageDelayed(m, 100);
						}else{
							//전체 모드잉가?
							if(isAllSequenceMode){
								nextSequence();
							}
							;
						}
						break;
				}
			};
		};

		class FoldingSequence{
			public String content;
			public int[] imgFrameIds;
			public int soundId;

			public FoldingSequence(String content, int soundId, int ... imgFrameIds) {
				this.content = content;
				this.soundId = soundId;
				this.imgFrameIds = imgFrameIds;
			}
		}


	}

}
