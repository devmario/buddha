package com.threedpaper.app108adult;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.animation.AlphaAnimation;
import android.widget.TextView;
import exight.common.Utility;
import exight.common.Variables;
import exight.customviews.EffectButton;
import exight.lib.ExPreferManager;

public class ActivitySetting extends ActivityForBgm implements OnClickListener{

	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_setting);
		anim1 = new AlphaAnimation(1.0f, 0.5f);
		anim1.setDuration(0);
		anim1.setRepeatCount(0);
		anim1.setFillAfter(true);

		anim2 = new AlphaAnimation(0.5f, 1.0f);
		anim2.setDuration(0);
		anim2.setRepeatCount(0);
		anim2.setFillAfter(true);

		initViews();
		setViews();
		setupFull();
	}

	protected void onResume() {
		super.onResume();
		Variables.BGM_MANAGER.resume();
	};

	protected void onPause() {
		super.onPause();
	};
	AlphaAnimation anim1, anim2;

	EffectButton btnBgmWater, btnBgmBug, btnBgmMusic, btnBgmBird;
	EffectButton btnVoiceWoman, btnVoiceWoman2, btnVoiceMan;
	EffectButton btnFoldingSpeedUp, btnFoldingSpeedDown;
	EffectButton btnModeContinue, btnModeFirstPage;
	EffectButton btnVoiceVolumnUp, btnVoiceVolumnDown;
	EffectButton btnBgVolumnUp, btnBgVolumnDown;


	TextView tvFoldingSpeed, tvVoiceVolumn, tvBgVolumn;

	private void initViews(){
		//배경음 타입
		btnBgmBird = (EffectButton)findViewById(R.id.setting_btnBgmBird);
		btnBgmBug = (EffectButton)findViewById(R.id.setting_btnBgmBug);
		btnBgmMusic = (EffectButton)findViewById(R.id.setting_btnBgmMusic);
		btnBgmWater = (EffectButton)findViewById(R.id.setting_btnBgmWater);
		btnBgmBird.setOnClickListener(onClickListenerForBgType);
		btnBgmBug.setOnClickListener(onClickListenerForBgType);
		btnBgmMusic.setOnClickListener(onClickListenerForBgType);
		btnBgmWater.setOnClickListener(onClickListenerForBgType);

		//목소리타입
		btnVoiceMan = (EffectButton)findViewById(R.id.setting_btnVoiceMan);
		btnVoiceWoman = (EffectButton)findViewById(R.id.setting_btnVoiceWoman);
		btnVoiceWoman2 = (EffectButton)findViewById(R.id.setting_btnVoiceWoman2);
		btnVoiceMan.setOnClickListener(onClickListenerForVoiceType);
		btnVoiceWoman.setOnClickListener(onClickListenerForVoiceType);
		btnVoiceWoman2.setOnClickListener(onClickListenerForVoiceType);

		btnModeContinue = (EffectButton)findViewById(R.id.setting_btnIsModeOfContinue);
		btnModeFirstPage = (EffectButton)findViewById(R.id.setting_btnIsModeOfFirstPage);
		btnModeContinue.setOnClickListener(onClickListenerForStartType);
		btnModeFirstPage.setOnClickListener(onClickListenerForStartType);

		//브금볼륨
		btnBgVolumnUp = (EffectButton)findViewById(R.id.setting_btnBgmVolumeDown);
		btnBgVolumnDown = (EffectButton)findViewById(R.id.setting_btnBgmVolumeUp);
		btnBgVolumnUp.setOnClickListener(onClickListenerForBgVolumn);
		btnBgVolumnDown.setOnClickListener(onClickListenerForBgVolumn);

		//절속도
		btnFoldingSpeedDown = (EffectButton)findViewById(R.id.setting_btnFrameSpaceSpeedDown);
		btnFoldingSpeedUp = (EffectButton)findViewById(R.id.setting_btnFrameSpaceSpeedUp);
		btnFoldingSpeedDown.setOnClickListener(onClickListenerForFoldingSpeed);
		btnFoldingSpeedUp.setOnClickListener(onClickListenerForFoldingSpeed);

		//목소리 볼륨
		btnVoiceVolumnUp = (EffectButton)findViewById(R.id.setting_btnVoiceVolumeDown);
		btnVoiceVolumnDown = (EffectButton)findViewById(R.id.setting_btnVoiceVolumeUp);
		btnVoiceVolumnUp.setOnClickListener(onClickListenerForVoiceVolumn);
		btnVoiceVolumnDown.setOnClickListener(onClickListenerForVoiceVolumn);

		findViewById(R.id.setting_btnClose).setOnClickListener(this);
		findViewById(R.id.setting_btnRemoveHistory).setOnClickListener(this);

		tvFoldingSpeed = (TextView)findViewById(R.id.setting_tvFrameSpaceSpeed);
		tvBgVolumn= (TextView)findViewById(R.id.setting_tvBgmVolumne);
		tvVoiceVolumn = (TextView)findViewById(R.id.setting_tvVoiceVolume);

		//리스너설정
	}

	private void setViews(){
		int foldingSpeed = ExPreferManager.getItemInteger(this, "foldingSpeed");
		int startType = ExPreferManager.getItemInteger(this, "startType");
		int voiceType = ExPreferManager.getItemInteger(this, "voiceType");
		int voiceVolumn = ExPreferManager.getItemInteger(this, "voiceVolumn");
		int bgType = ExPreferManager.getItemInteger(this, "bgType");
		int bgVolumn = ExPreferManager.getItemInteger(this, "bgVolumn");

		//볼륨,절속도
		tvBgVolumn.setText(bgVolumn +"");
		tvVoiceVolumn.setText(voiceVolumn + "");
		tvFoldingSpeed.setText(foldingSpeed + "");

		//이어서재생하기?
		if(startType == Variables.START_TYPE_CONTINUE){
			btnModeContinue.startAnimation(anim2);
			btnModeFirstPage.startAnimation(anim1);
		}else{
			btnModeContinue.startAnimation(anim1);
			btnModeFirstPage.startAnimation(anim2);
		}


		//목소리 타입
		btnVoiceMan.startAnimation(anim1);
		btnVoiceWoman.startAnimation(anim1);
		btnVoiceWoman2.startAnimation(anim1);
		switch(voiceType){
			case Variables.VOICE_TYPE_MAN:
				btnVoiceMan.startAnimation(anim2);
				break;
			case Variables.VOICE_TYPE_WOMAN:
				btnVoiceWoman.startAnimation(anim2);
				break;
			case Variables.VOICE_TYPE_WOMAN2:
				btnVoiceWoman2.startAnimation(anim2);
				break;
		}

		//배경ㄴ
		btnBgmBird.startAnimation(anim1);
		btnBgmBug.startAnimation(anim1);
		btnBgmMusic.startAnimation(anim1);
		btnBgmWater.startAnimation(anim1);
		switch(bgType){
			case Variables.BG_TYPE_BIRD:
				btnBgmBird.startAnimation(anim2);
				break;
			case Variables.BG_TYPE_BUG:
				btnBgmBug.startAnimation(anim2);
				break;
			case Variables.BG_TYPE_MUSIC:
				btnBgmMusic.startAnimation(anim2);
				break;
			case Variables.BG_TYPE_STREAM:
				btnBgmWater.startAnimation(anim2);
				break;
		}
	}

	@Override
	public void onClick(View v) {
		switch(v.getId()){
			case R.id.setting_btnClose:
				finish();
				break;

			case R.id.setting_btnRemoveHistory:
				Utility.makeYesNoDialog(ActivitySetting.this, "절한 기록을 지우시겠습니까?", "확인", "취소", new Utility.DialogChoiceYesNo() {

					@Override
					public boolean choiceYes() {
						FoldingHistoryManager.removeAllHistory(ActivitySetting.this);
						Utility.makeToast(ActivitySetting.this, "기록을 모두 지웠습니다.");
						return false;
					}

					@Override
					public boolean choiceNo() {
						return false;
					}
				});
				break;
		}
	}


	//절하기속도 버튼
	OnClickListener onClickListenerForFoldingSpeed = new OnClickListener() {

		@Override
		public void onClick(View v) {
			int foldingSpeed = ExPreferManager.getItemInteger(ActivitySetting.this, "foldingSpeed");
			int before = foldingSpeed;
			if(v == btnFoldingSpeedUp){
				foldingSpeed --;
			}else{
				foldingSpeed ++;
			}

			if(foldingSpeed <= 0 || foldingSpeed > 5){
				foldingSpeed = before;
			}

			tvFoldingSpeed.setText(foldingSpeed + "");
			ExPreferManager.setItemInteger(ActivitySetting.this, "foldingSpeed", foldingSpeed);
		}
	};

	//시작위치 버튼
	OnClickListener onClickListenerForStartType = new OnClickListener() {

		@Override
		public void onClick(View v) {
			if(v == btnModeContinue){
				ExPreferManager.setItemInteger(ActivitySetting.this, "startType", Variables.START_TYPE_CONTINUE);
			}else{
				ExPreferManager.setItemInteger(ActivitySetting.this, "startType", Variables.START_TYPE_FIRST);
			}

			setViews();
		}
	};

	//목소리버튼
	OnClickListener onClickListenerForVoiceType = new OnClickListener() {

		@Override
		public void onClick(View v) {
			if(v == btnVoiceMan){
				ExPreferManager.setItemInteger(ActivitySetting.this, "voiceType", Variables.VOICE_TYPE_MAN);
			}else if(v == btnVoiceWoman){
				ExPreferManager.setItemInteger(ActivitySetting.this, "voiceType", Variables.VOICE_TYPE_WOMAN);
			}else{
				ExPreferManager.setItemInteger(ActivitySetting.this, "voiceType", Variables.VOICE_TYPE_WOMAN2);
			}

			setViews();
		}
	};

	//배경음 속성 버튼
	OnClickListener onClickListenerForBgType = new OnClickListener() {

		@Override
		public void onClick(View v) {
			int resId = 0;
			if(v == btnBgmBird){
				ExPreferManager.setItemInteger(ActivitySetting.this, "bgType", Variables.BG_TYPE_BIRD);
				resId = R.raw.birdbgm;
			}else if(v == btnBgmBug){
				ExPreferManager.setItemInteger(ActivitySetting.this, "bgType", Variables.BG_TYPE_BUG);
				resId = R.raw.bugbgm;
			}else if(v == btnBgmWater){
				ExPreferManager.setItemInteger(ActivitySetting.this, "bgType", Variables.BG_TYPE_STREAM);
				resId = R.raw.waterbgm;
			}else{
				resId = 0;
				startActivityForResult(new Intent(ActivitySetting.this, ActivitySearchMusinInSdcard.class), 1000);
				//music
			}

			setViews();
			if(resId != 0){
				Variables.BGM_MANAGER.play(resId);
			}
		}
	};

	//목소리 볼륨
	OnClickListener onClickListenerForVoiceVolumn = new OnClickListener() {

		@Override
		public void onClick(View v) {
			int voiceVolumn = ExPreferManager.getItemInteger(ActivitySetting.this, "voiceVolumn");
			int before = voiceVolumn;
			if(v == btnVoiceVolumnUp){
				voiceVolumn ++;
			}else{
				voiceVolumn --;
			}

			if(voiceVolumn < 0 || voiceVolumn > 10){
				voiceVolumn = before;
			}

			ExPreferManager.setItemInteger(ActivitySetting.this, "voiceVolumn", voiceVolumn);
			setViews();
		}
	};

	//배경음 속성 버튼
	OnClickListener onClickListenerForBgVolumn = new OnClickListener() {

		@Override
		public void onClick(View v) {
			int bgVolumn = ExPreferManager.getItemInteger(ActivitySetting.this, "bgVolumn");
			int before = bgVolumn;
			if(v == btnBgVolumnUp){
				bgVolumn ++;
			}else{
				bgVolumn --;
			}

			if(bgVolumn < 0 || bgVolumn > 10){
				bgVolumn = before;
			}

			ExPreferManager.setItemInteger(ActivitySetting.this, "bgVolumn", bgVolumn);
			setViews();

			Variables.BGM_MANAGER.setVolumn(bgVolumn);
		}
	};

	protected void onActivityResult(int requestCode, int resultCode, Intent data) {
		if(requestCode == 1000){
			if(resultCode == RESULT_OK){
				//성공
				String path = data.getStringExtra("soundPath");
				try{
					Variables.BGM_MANAGER.playFromSdcard(path);
					ExPreferManager.setItem(ActivitySetting.this, "soundPath", path);
					ExPreferManager.setItemInteger(ActivitySetting.this, "bgType", Variables.BG_TYPE_MUSIC);
				}catch(Exception e){
					Utility.makeToast(ActivitySetting.this, path + "\n" + "지원하지 않는 파일 입니다.");
					startActivityForResult(new Intent(ActivitySetting.this, ActivitySearchMusinInSdcard.class), 1000);
				}
			}else{
				//취소
			}
		}
		setViews();
	};
}
