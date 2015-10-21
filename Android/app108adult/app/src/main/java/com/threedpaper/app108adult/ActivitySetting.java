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
		//����� Ÿ��
		btnBgmBird = (EffectButton)findViewById(R.id.setting_btnBgmBird);
		btnBgmBug = (EffectButton)findViewById(R.id.setting_btnBgmBug);
		btnBgmMusic = (EffectButton)findViewById(R.id.setting_btnBgmMusic);
		btnBgmWater = (EffectButton)findViewById(R.id.setting_btnBgmWater);
		btnBgmBird.setOnClickListener(onClickListenerForBgType);
		btnBgmBug.setOnClickListener(onClickListenerForBgType);
		btnBgmMusic.setOnClickListener(onClickListenerForBgType);
		btnBgmWater.setOnClickListener(onClickListenerForBgType);
		
		//��Ҹ�Ÿ��
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

		//��ݺ���
		btnBgVolumnUp = (EffectButton)findViewById(R.id.setting_btnBgmVolumeDown);
		btnBgVolumnDown = (EffectButton)findViewById(R.id.setting_btnBgmVolumeUp);
		btnBgVolumnUp.setOnClickListener(onClickListenerForBgVolumn);
		btnBgVolumnDown.setOnClickListener(onClickListenerForBgVolumn);

		//���ӵ�
		btnFoldingSpeedDown = (EffectButton)findViewById(R.id.setting_btnFrameSpaceSpeedDown);
		btnFoldingSpeedUp = (EffectButton)findViewById(R.id.setting_btnFrameSpaceSpeedUp);
		btnFoldingSpeedDown.setOnClickListener(onClickListenerForFoldingSpeed);
		btnFoldingSpeedUp.setOnClickListener(onClickListenerForFoldingSpeed);

		//��Ҹ� ����
		btnVoiceVolumnUp = (EffectButton)findViewById(R.id.setting_btnVoiceVolumeDown);
		btnVoiceVolumnDown = (EffectButton)findViewById(R.id.setting_btnVoiceVolumeUp);
		btnVoiceVolumnUp.setOnClickListener(onClickListenerForVoiceVolumn);
		btnVoiceVolumnDown.setOnClickListener(onClickListenerForVoiceVolumn);
		
		findViewById(R.id.setting_btnClose).setOnClickListener(this);
		findViewById(R.id.setting_btnRemoveHistory).setOnClickListener(this);

		tvFoldingSpeed = (TextView)findViewById(R.id.setting_tvFrameSpaceSpeed);
		tvBgVolumn= (TextView)findViewById(R.id.setting_tvBgmVolumne);
		tvVoiceVolumn = (TextView)findViewById(R.id.setting_tvVoiceVolume);
		
		//�����ʼ���
	}

	private void setViews(){
		int foldingSpeed = ExPreferManager.getItemInteger(this, "foldingSpeed");
		int startType = ExPreferManager.getItemInteger(this, "startType");
		int voiceType = ExPreferManager.getItemInteger(this, "voiceType");
		int voiceVolumn = ExPreferManager.getItemInteger(this, "voiceVolumn");
		int bgType = ExPreferManager.getItemInteger(this, "bgType");
		int bgVolumn = ExPreferManager.getItemInteger(this, "bgVolumn");

		//����,���ӵ�
		tvBgVolumn.setText(bgVolumn +"");
		tvVoiceVolumn.setText(voiceVolumn + "");
		tvFoldingSpeed.setText(foldingSpeed + "");

		//�̾����ϱ�?
		if(startType == Variables.START_TYPE_CONTINUE){
			btnModeContinue.startAnimation(anim2);
			btnModeFirstPage.startAnimation(anim1);
		}else{
			btnModeContinue.startAnimation(anim1);
			btnModeFirstPage.startAnimation(anim2);
		}


		//��Ҹ� Ÿ��
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

		//��椤
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
			Utility.makeYesNoDialog(ActivitySetting.this, "���� ����� ����ðڽ��ϱ�?", "Ȯ��", "���", new Utility.DialogChoiceYesNo() {
				
				@Override
				public boolean choiceYes() {
					FoldingHistoryManager.removeAllHistory(ActivitySetting.this);
					Utility.makeToast(ActivitySetting.this, "����� ��� �������ϴ�.");
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


	//���ϱ�ӵ� ��ư
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

	//������ġ ��ư
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

	//��Ҹ���ư
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

	//����� �Ӽ� ��ư
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
				ExPreferManager.setItemInteger(ActivitySetting.this, "bgType", Variables.BG_TYPE_MUSIC);
				startActivityForResult(new Intent(ActivitySetting.this, ActivitySearchMusinInSdcard.class), 1000);
				//music
			}
			
			setViews();
			if(resId != 0){
				Variables.BGM_MANAGER.play(resId);
			}
		}
	};

	//��Ҹ� ����
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
	
	//����� �Ӽ� ��ư
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
				//����
				String path = data.getStringExtra("soundPath");
				try{
					Variables.BGM_MANAGER.playFromSdcard(path);
					ExPreferManager.setItem(ActivitySetting.this, "soundPath", path);
				}catch(Exception e){
					Utility.makeToast(ActivitySetting.this, path + "\n" + "������ �������� �ʽ��ϴ�");
					startActivityForResult(new Intent(ActivitySetting.this, ActivitySearchMusinInSdcard.class), 1000);
					;
				}
			}else{
				//���
			}
		}
	};
}
