package com.threedpaper.app108adult;

import android.content.Context;
import android.content.Intent;
import android.graphics.Typeface;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.WindowManager;
import android.view.animation.AlphaAnimation;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.ScaleAnimation;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

import exight.common.Utility;
import exight.common.Variables;
import exight.customviews.EffectButton;
import exight.lib.ExPreferManager;
import exight.lib.ExightSoundPool;

public class ActivityScreen extends ActivityForBgm {

	ExightSoundPool soundPool;
	private int pausedScenePos = 0;

	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_screen);
		getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

		soundPool = new ExightSoundPool(this);
		//        Variables.INIT_FRAMES_SOUND(soundPool);

		init();

		frameControllerFor108.playAll();
		setupFull();
	}

	@Override
	protected void onPause() {
		super.onPause();

		frameControllerFor108.pause();

	}

	@Override
	protected void onResume() {
		super.onResume();
		if(frameControllerFor108.isStopping == true){
			frameControllerFor108.resume();

		}
	}

	private FrameControllerFor108 frameControllerFor108;
	private JingSoundPlayer jingSoundPlayer;
	public int record_id = -1;

	private void init(){
		jingSoundPlayer = new JingSoundPlayer(this);
		int scenePos = 0;
		scenePos = getIntent().getIntExtra("pausedScenePos", 0);

		if(scenePos > 0){
			//pause눌러서 된건지 확인
		}else{
			scenePos = getIntent().getIntExtra("pos", 0);
		}
		record_id = getIntent().getIntExtra("record_id", -1);
		if(record_id == -1) {
			String tDate = Utility.getCurrentDate();
			record_id = FoldingHistoryManager.newFoldingDate(this, tDate);
		}

		frameControllerFor108 = new FrameControllerFor108(scenePos){
			@Override
			public void onFinish() {
				finish();
				ExPreferManager.setItemInteger(ActivityScreen.this, "continuedScenePos", 0);
				Toast.makeText(ActivityScreen.this, "108배가 완료되었습니다", 1000).show();
			}
		};
		initViews();
	}

	private TextView tvContentTitle, tvContentContent;
	private View vGroupContent;
	private View llForTvContentContent;
	private ImageView ivBg, ivBgBefore;
	private EffectButton btnPause;
	private void initViews(){
		btnPause = (EffectButton)findViewById(R.id.screen_btnPause);
		ivBg = (ImageView)findViewById(R.id.screen_ivBg);
		ivBgBefore = (ImageView)findViewById(R.id.screen_ivBgBefore);
		tvContentContent = (TextView)findViewById(R.id.screen_tvContentContent);
		tvContentTitle = (TextView)findViewById(R.id.screen_tvContentTitle);
		llForTvContentContent = findViewById(R.id.screen_llForTvContentContent);
		vGroupContent = findViewById(R.id.screen_llContent);
		Typeface typeface = Typeface.createFromAsset(getAssets(), "fonts/nanumpen.otf");
//		Typeface typeface2 = Typeface.createFromAsset(getAssets(), "fonts/nanumpen.otf");
		tvContentContent.setTypeface(typeface);
		tvContentTitle.setTypeface(typeface);

		tvContentTitle.setText("");
		tvContentContent.setText("");


		btnPause.setTag(true);
		btnPause.setOnClickListener(new OnClickListener() {

			@Override
			public void onClick(View v) {
				boolean flag = (Boolean)v.getTag();
				if(flag){
					flag = false;

					finish();
					startActivity(new Intent(ActivityScreen.this, ActivityPause.class).putExtra("record_id", record_id).putExtra("pausedScenePos", frameControllerFor108.getCurrentPos()));
					//					frameControllerFor108.pausAe();
				}else{
					flag = true;
					//					frameControllerFor108.resume();
				}
				v.setTag(flag);
			}
		});
	}

	//컨트롤러
	abstract class FrameControllerFor108{
		int delay = 0;
		int currentScenePos = 0;
		AlphaAnimation animForFadeIn, animForFadeOut;
		ScaleAnimation animForText;

		Handler a, b, c;

		public FrameControllerFor108(int currentScenePos) {
			delay = ExPreferManager.getItemInteger(ActivityScreen.this, "foldingSpeed") * 1000;
			this.currentScenePos = currentScenePos;
			animForFadeIn = new AlphaAnimation(0.0f, 1.0f);
			animForFadeIn.setDuration(2000);
			animForFadeIn.setRepeatCount(0);
			animForFadeIn.setFillEnabled(true);

			animForFadeOut =  new AlphaAnimation(1.0f, 0.0f);
			animForFadeOut.setDuration(2000);
			animForFadeOut.setRepeatCount(0);
			animForFadeOut.setFillAfter(true);
			animForFadeOut.setFillEnabled(false);

			animForText = new ScaleAnimation(1.3f, 1.0f, 1.3f, 1.0f, ScaleAnimation.RELATIVE_TO_SELF, 0.5f, ScaleAnimation.RELATIVE_TO_SELF, 0.5f);
			animForText.setInterpolator(new DecelerateInterpolator(2.0f));
			animForText.setDuration(5000);
			animForText.setRepeatCount(0);
			animForText.setFillAfter(true);
			animForText.setFillEnabled(false);

		}

		public int getCurrentPos(){
			return currentScenePos;
		}

		private boolean nextScene(){
			if(Variables.LIST_MODEL_FRAMES.size() > currentScenePos + 1){
				currentScenePos++;

				ExPreferManager.setItemInteger(ActivityScreen.this, "continuedScenePos", currentScenePos);
				//기록횟수 증가
				FoldingHistoryManager.increaseTodayFoldingCount(ActivityScreen.this, record_id);

				return true;
			}else{
				return false;
			}
		}

		boolean isStopping = false;

		public void playAll(){
			if(isStopping == true){
				return;
			}


			playTitleFrame();


			//타이틀 재생 중지 3초뒤
			a = new Handler(){
				public void dispatchMessage(Message msg) {
					if(isStopping == true){
						return;
					}

					stopTitleFrame();
					playContentFrame();


					//본문재생 10초뒤
					b = new Handler(){
						public void dispatchMessage(Message msg) {

							if(isStopping == true){
								return;
							}

							boolean hasNext = nextScene();

							if(hasNext){

								//본문 재생 끝났음을 알림
								stopContentFrame();
								playAll();

							}else{
								onFinish();
							}


						};
						//다음거로 넘어가는 시간
					};
					b.sendEmptyMessageDelayed(0, 10000 + delay);

				}
			};
			a.sendEmptyMessageDelayed(0, 3000);


			//
		}

		public void pause(){
			isStopping = true;
//			soundPool.play(Variables.LIST_MODEL_FRAMES.get(currentScenePos).getProperSoundId(ActivityScreen.this));
			soundPool.pause(Variables.LIST_MODEL_FRAMES.get(currentScenePos).getProperSoundId(ActivityScreen.this));

			if(a != null){
				a.removeMessages(0);
			}

			if(b != null){
				b.removeMessages(0);
			}

			if(c != null){
				c.removeMessages(0);
			}

		}

		public void resume(){
			isStopping = false;
			//			soundPool.resume(Variables.LIST_MODEL_FRAMES.get(currentScenePos).getProperSoundId(ActivityScreen.this));
			playAll();
		}

		private void playTitleFrame(){

			jingSoundPlayer.play();

			//사운드 재생. n번째 절입니다
			soundPool.addSound(Variables.LIST_MODEL_FRAMES.get(currentScenePos).getProperSoundId(ActivityScreen.this));
			c = new Handler(){
				public void dispatchMessage(Message msg) {
					soundPool.play(Variables.LIST_MODEL_FRAMES.get(currentScenePos).getProperSoundId(ActivityScreen.this));

				};
			};
			c.sendEmptyMessageDelayed(0, 2000);

			if(currentScenePos == 0){
				ivBgBefore.startAnimation(animForFadeOut);

				ivBg.setBackgroundResource(Variables.LIST_MODEL_FRAMES.get(currentScenePos).imgId);
				ivBg.setVisibility(View.VISIBLE);
				ivBg.startAnimation(animForFadeIn);

			}else{
				ivBgBefore.setBackgroundResource(Variables.LIST_MODEL_FRAMES.get(currentScenePos-1).imgId);
				ivBgBefore.setVisibility(View.VISIBLE);
				//    			ivBgBefore.startAnimation(animForFadeOut);

				ivBg.setBackgroundResource(Variables.LIST_MODEL_FRAMES.get(currentScenePos).imgId);
				ivBg.setVisibility(View.VISIBLE);
				ivBg.startAnimation(animForFadeIn);
			}

		}

		private void stopTitleFrame(){
			//    		vGroupTitle.setVisibility(View.INVISIBLE);
		}

		private void playContentFrame(){
			//사운드 재생. 나는 ~~ 입니다.
			vGroupContent.setVisibility(View.VISIBLE);
			vGroupContent.startAnimation(animForFadeIn);


			String title = Variables.LIST_MODEL_FRAMES.get(currentScenePos).title;
			String content = Variables.LIST_MODEL_FRAMES.get(currentScenePos).content;

			tvContentContent.setText(content);

//			tvContentContent.setText("내 자신을 올바르게 가꾸고 지켜서 \n내 자신을 올바르게 가꾸고 지켜서 \n삶을 행복하게 만들어 가겠습니다.\n내 자신을 올바르게 가꾸고 지켜서 \n삶을 행복하게 만들어 가겠습니다.\n");

			tvContentTitle.setText("-" + title + "-");

			llForTvContentContent.startAnimation(animForText);
		}

		private void stopContentFrame(){

			//    		vGroupContent.setVisibility(View.INVISIBLE);
			vGroupContent.startAnimation(animForFadeOut);



		}
		public abstract void onFinish();



	}

	@Override
	protected void onDestroy() {
		super.onDestroy();

		frameControllerFor108.pause();
		soundPool.release();
		jingSoundPlayer.release();

	}


	public class JingSoundPlayer{
		MediaPlayer mp;
		private Context context;
		public JingSoundPlayer(Context context) {
			this.context = context;
			mp = MediaPlayer.create(context, R.raw.jong);
			mp.setAudioStreamType(AudioManager.STREAM_MUSIC);
			mp.setLooping(false);
			mp.setVolume(1.0f, 1.0f);
		}

		public void release() {
			if(mp != null){
				mp.release();
			}
		}

		public void play(){
			if(mp != null){
				try{
					mp.start();
				}catch(Exception e){
					;
				}

			}
		}
	}
}
