package com.threedpaper.app108adult.tabitem;

import java.io.File;
import java.util.HashMap;
import java.util.Map;

import android.app.Activity;
import android.media.MediaPlayer;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.ImageView;
import android.widget.TextView;

import com.threedpaper.app108adult.R;

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
	}

	private FoldingPlayer foldingPlayer;
	@Override
	public void onCreate() {
		foldingPlayer = new FoldingPlayer(getActivity(), R.id.tabItemHowtoFold_ivContent, R.id.tabItemHowtoFold_tvContent);

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

		private final FoldingSequence[] foldingSequencesForTeen = new FoldingSequence[]{
				new FoldingSequence(
						"마음을 차분하게 가라앉히고 두 손을 가슴에 모으며 바르게 섭니다. 이것을 합장이라 합니다.",
						R.raw.folding1,
						R.drawable.yong00)
				,

				new FoldingSequence(
						"합장을 한 채 인사를 하듯 천천히 허리를 숙였다 세웁니다. 이것을 반배라 하는데 절을 시작할 때와 끝날 때에는 항상 반배를 합니다.",
						R.raw.folding2,
						R.drawable.yong01,R.drawable.yong02,R.drawable.yong03,R.drawable.yong04,R.drawable.yong05,R.drawable.yong06,R.drawable.yong07,R.drawable.yong08,R.drawable.yong09,R.drawable.yong10,R.drawable.yong11,R.drawable.yong12,R.drawable.yong13,R.drawable.yong14,R.drawable.yong15,R.drawable.yong16,R.drawable.yong17,R.drawable.yong18,R.drawable.yong19)
				,

				new FoldingSequence(
						"두손을 가슴에 모은 채 허리를 살짝 굽히면서 무릎을 꿇으며 앉습니다. 자세가 흐트러지면 넘어질 수 있으니 천천히 중심을 잡으며 앉습니다.",
						R.raw.folding3,
						R.drawable.yong20,R.drawable.yong21,R.drawable.yong22,R.drawable.yong23,R.drawable.yong24,R.drawable.yong25,R.drawable.yong26,R.drawable.yong27,R.drawable.yong28,R.drawable.yong29)
				,

				new FoldingSequence(
						"엉덩이와 발 뒤꿈치가 맞닿을 때쯤 상체를 앞으로 숙이면서 오른손을 바닥에 내려놓습니다. 발은 자연스럽게 오른발이 왼발 위로 올라가게 합니다. 오른손과 나란히 왼손을 내려놓으며 이마가 바닥에 닿을 정도로 숙입니다. 이처럼 이마, 양쪽 팔꿈치와 무릎이 모두 바닥에 닿은 것을 오체투지라 합니다.",
						R.raw.folding4,
						R.drawable.yong30,R.drawable.yong31,R.drawable.yong32,R.drawable.yong33,R.drawable.yong34,R.drawable.yong35,R.drawable.yong36,R.drawable.yong37)
				,

				new FoldingSequence(
						"양쪽 팔꿈치를 바닥에 댄 채 두 손바닥이 하늘을 향하도록 뒤집으면서 양쪽 귀옆으로 살짝 들어올립니다. 이것은 나 자산을 낮추고 세상 모든 존재를 지극한 마음으로 정성을 다해 존중하겠다는 다짐입니다.",
						R.raw.folding5,
						R.drawable.yong38,R.drawable.yong39,R.drawable.yong40,R.drawable.yong41)
				,

				new FoldingSequence(
						"다시 두 손을 바닥을 향해 뒤집어 머리 옆으로 가지런히 내려놓으며 오체투지 자세를 취합니다.",
						R.raw.folding6,
						R.drawable.yong42,R.drawable.yong43,R.drawable.yong44,R.drawable.yong45,R.drawable.yong46)
				,

				new FoldingSequence(
						"고개와 허리를 곧은 자세로 들면서 왼손과 오른손을 차례로 가슴 쪽으로 모읍니다. 이렇게 하면 합장하며 앉은 자세가 됩니다.",
						R.raw.folding7,
						R.drawable.yong47,R.drawable.yong48,R.drawable.yong49,R.drawable.yong50,R.drawable.yong51,R.drawable.yong52,R.drawable.yong53,R.drawable.yong54,R.drawable.yong55)
				,
				new FoldingSequence(
						"포개 놓았던 양발을 가지런히 풀면서 엉덩이를 살짝 들어 올리며 일어납니다. 절을 시작할 때의 자세처럼 양쪽 발은 가지런히 모으고 두 손은 가슴 쪽으로 모아 바르게 섭니다. 이 자세에서 무릎을 굽히며 다시 절하는 동작을 반복합니다.108번째 절을 마쳤을 때엔 반 배를 하며 절 수행을 마무리합니다.",
						R.raw.folding8,
						R.drawable.yong56,R.drawable.yong57,R.drawable.yong58,R.drawable.yong59, R.drawable.yong60,R.drawable.yong61,R.drawable.yong62,R.drawable.yong63,R.drawable.yong64,R.drawable.yong65,R.drawable.yong66,R.drawable.yong67)
		};

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

		public void setFirstFrame(){
			currentSequence = 0;
		}

		boolean isAllSequenceMode = false;
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
			FoldingSequence f = foldingSequencesForTeen[currentSequence];
			//사운드 재생
			if(mp != null){
				mp.release();
			}

			if(!isAllSequenceMode){
				mp = MediaPlayer.create(activity, f.soundId);
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
			if(foldingSequencesForTeen.length > currentSequence + 1){
				currentSequence ++;
			}else{
				return false;
			}

			playSequence();

			return true;
		}

		//다음 프레임들 재생
		public boolean nextSequencePublic(){
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
