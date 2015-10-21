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
						"������ �����ϰ� ��������� �� ���� ������ ������ �ٸ��� ���ϴ�. �̰��� �����̶� �մϴ�.", 
						R.raw.folding1, 
						R.drawable.yong00)
				,

				new FoldingSequence(
						"������ �� ä �λ縦 �ϵ� õõ�� �㸮�� ������ ����ϴ�. �̰��� �ݹ�� �ϴµ� ���� ������ ���� ���� ������ �׻� �ݹ踦 �մϴ�.", 
						R.raw.folding2, 
						R.drawable.yong01,R.drawable.yong02,R.drawable.yong03,R.drawable.yong04,R.drawable.yong05,R.drawable.yong06,R.drawable.yong07,R.drawable.yong08,R.drawable.yong09,R.drawable.yong10,R.drawable.yong11,R.drawable.yong12,R.drawable.yong13,R.drawable.yong14,R.drawable.yong15,R.drawable.yong16,R.drawable.yong17,R.drawable.yong18,R.drawable.yong19)
				,

				new FoldingSequence(
						"�μ��� ������ ���� ä �㸮�� ��¦ �����鼭 ������ ������ �ɽ��ϴ�. �ڼ��� ��Ʈ������ �Ѿ��� �� ������ õõ�� �߽��� ������ �ɽ��ϴ�.", 
						R.raw.folding3, 
						R.drawable.yong20,R.drawable.yong21,R.drawable.yong22,R.drawable.yong23,R.drawable.yong24,R.drawable.yong25,R.drawable.yong26,R.drawable.yong27,R.drawable.yong28,R.drawable.yong29)
				,

				new FoldingSequence(
						"�����̿� �� �ڲ�ġ�� �´��� ���� ��ü�� ������ ���̸鼭 �������� �ٴڿ� ���������ϴ�. ���� �ڿ������� �������� �޹� ���� �ö󰡰� �մϴ�. �����հ� ������ �޼��� ���������� �̸��� �ٴڿ� ���� ������ ���Դϴ�. ��ó�� �̸�, ���� �Ȳ�ġ�� ������ ��� �ٴڿ� ���� ���� ��ü������ �մϴ�.", 
						R.raw.folding4, 
						R.drawable.yong30,R.drawable.yong31,R.drawable.yong32,R.drawable.yong33,R.drawable.yong34,R.drawable.yong35,R.drawable.yong36,R.drawable.yong37)
				,

				new FoldingSequence(
						"���� �Ȳ�ġ�� �ٴڿ� �� ä �� �չٴ��� �ϴ��� ���ϵ��� �������鼭 ���� �Ϳ����� ��¦ ���ø��ϴ�. �̰��� �� �ڻ��� ���߰� ���� ��� ���縦 ������ �������� ������ ���� �����ϰڴٴ� �����Դϴ�.", 
						R.raw.folding5, 
						R.drawable.yong38,R.drawable.yong39,R.drawable.yong40,R.drawable.yong41)
				,

				new FoldingSequence(
						"�ٽ� �� ���� �ٴ��� ���� ������ �Ӹ� ������ �������� ���������� ��ü���� �ڼ��� ���մϴ�.", 
						R.raw.folding6, 
						R.drawable.yong42,R.drawable.yong43,R.drawable.yong44,R.drawable.yong45,R.drawable.yong46)
				,

				new FoldingSequence(
						"���� �㸮�� ���� �ڼ��� ��鼭 �޼հ� �������� ���ʷ� ���� ������ �����ϴ�. �̷��� �ϸ� �����ϸ� ���� �ڼ��� �˴ϴ�.", 
						R.raw.folding7, 
						R.drawable.yong47,R.drawable.yong48,R.drawable.yong49,R.drawable.yong50,R.drawable.yong51,R.drawable.yong52,R.drawable.yong53,R.drawable.yong54,R.drawable.yong55)
				,
				new FoldingSequence(
						"���� ���Ҵ� ����� �������� Ǯ�鼭 �����̸� ��¦ ��� �ø��� �Ͼ�ϴ�. ���� ������ ���� �ڼ�ó�� ���� ���� �������� ������ �� ���� ���� ������ ��� �ٸ��� ���ϴ�. �� �ڼ����� ������ ������ �ٽ� ���ϴ� ������ �ݺ��մϴ�.108��° ���� ������ ���� �� �踦 �ϸ� �� ������ �������մϴ�.", 
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

		//���ο�
		private void playSequence(){
			FoldingSequence f = foldingSequencesForTeen[currentSequence];
			//���� ���
			if(mp != null){
				mp.release();
			}

			if(!isAllSequenceMode){
				mp = MediaPlayer.create(activity, f.soundId);
				mp.setVolume(1.0f, 1.0f);
				mp.setLooping(false);
				mp.start();

				//�ؽ�Ʈ ����
					
				tvContent.setVisibility(View.VISIBLE);
			}else{
				tvContent.setVisibility(View.INVISIBLE);
				;
			}
			tvContent.setText(f.content);

			//�̹��� ù���������� ����
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

		//���� �����ӵ� ���
		public boolean nextSequencePublic(){
			isAllSequenceMode = false;
			return nextSequence();

		}

		//�� �����ӵ� ���
		public boolean prevSequence(){
			if(currentSequence > 0){
				currentSequence --;
			}else{
				return false;
			}
			playSequence();
			return true;
		}

		//���� �����ӵ� ���
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
						//��ü ����װ�?
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
