package com.threedpaper.app108adult;

import android.content.Context;
import android.content.Intent;
import android.graphics.Typeface;
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

	private void init(){
		jingSoundPlayer = new JingSoundPlayer(this);
		int scenePos = 0;
		scenePos = getIntent().getIntExtra("pausedScenePos", 0);

		if(scenePos > 0){
			//pause������ �Ȱ��� Ȯ��
			;
		}else{
			try{
				if(ExPreferManager.getItemInteger(this, "startType") == Variables.START_TYPE_CONTINUE){
					scenePos = ExPreferManager.getItemInteger(this, "continuedScenePos");
				}
				
//				scenePos = Integer.parseInt(ExPreferManager.getItem(this, "continuedScenePos"));
			}catch (Exception e) {
				;
			}
		}

		frameControllerFor108 = new FrameControllerFor108(scenePos){
			@Override
			public void onFinish() {
				finish();
				ExPreferManager.setItemInteger(ActivityScreen.this, "continuedScenePos", 0);
				Toast.makeText(ActivityScreen.this, "108�谡 �Ϸ�Ǿ����ϴ�", 1000).show();
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
					startActivity(new Intent(ActivityScreen.this, ActivityPause.class).putExtra("pausedScenePos", frameControllerFor108.getCurrentPos()));
					//					frameControllerFor108.pausAe();
				}else{
					flag = true;
					//					frameControllerFor108.resume();
				}
				v.setTag(flag);
			}
		});
	}

	//��Ʈ�ѷ�
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
				//���Ƚ�� ����
				FoldingHistoryManager.increaseTodayFoldingCount(ActivityScreen.this);
				
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


			//Ÿ��Ʋ ��� ���� 3�ʵ�
			a = new Handler(){
				public void dispatchMessage(Message msg) {
					if(isStopping == true){
						return;
					}

					stopTitleFrame();
					playContentFrame();


					//������� 10�ʵ�
					b = new Handler(){
						public void dispatchMessage(Message msg) {

							if(isStopping == true){
								return;
							}

							boolean hasNext = nextScene();

							if(hasNext){

								//���� ��� �������� �˸�
								stopContentFrame();
								playAll();	

							}else{
								onFinish();
							}


						};
						//�����ŷ� �Ѿ�� �ð�
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
			
			//���� ���. n��° ���Դϴ�
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
			//���� ���. ���� ~~ �Դϴ�.
			vGroupContent.setVisibility(View.VISIBLE);
			vGroupContent.startAnimation(animForFadeIn);


			String title = Variables.LIST_MODEL_FRAMES.get(currentScenePos).title;
			String content = Variables.LIST_MODEL_FRAMES.get(currentScenePos).content;

			tvContentContent.setText(content);
			
//			tvContentContent.setText("�� �ڽ��� �ùٸ��� ���ٰ� ���Ѽ� \n�� �ڽ��� �ùٸ��� ���ٰ� ���Ѽ� \n���� �ູ�ϰ� ����� ���ڽ��ϴ�.\n�� �ڽ��� �ùٸ��� ���ٰ� ���Ѽ� \n���� �ູ�ϰ� ����� ���ڽ��ϴ�.\n");
			
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