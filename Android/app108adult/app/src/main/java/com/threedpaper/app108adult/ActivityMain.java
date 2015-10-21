package com.threedpaper.app108adult;

import android.content.Intent;
import android.media.MediaPlayer;
import android.media.SoundPool;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.view.WindowManager;
import android.view.View.OnClickListener;
import exight.common.Utility;
import exight.common.Variables;
import exight.lib.ExPreferManager;
import exight.lib.ExightSoundPool;

public class ActivityMain extends ActivityForBgm implements OnClickListener{


	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
		//������ �ʱ�ȭ
		Variables.INIT_LIST_MODEL_FRAMES();
		
		
		init();
		initViews();
		
		
		
		
	}

	public void init(){
		
		Variables.BGM_MANAGER = new BgmManager(this);
		int bgType = ExPreferManager.getItemInteger(this, "bgType");
		int bgId = 0;
		switch(bgType){
		case Variables.BG_TYPE_BIRD:
			bgId = R.raw.birdbgm;
			break;
		case Variables.BG_TYPE_BUG:
			bgId = R.raw.bugbgm;
			break;
		case Variables.BG_TYPE_STREAM:
			bgId = R.raw.waterbgm;
			break; 
		case Variables.BG_TYPE_MUSIC:
			bgId = 0;
			String soundPath = ExPreferManager.getItem(this, "soundPath");
			try{
				Variables.BGM_MANAGER.playFromSdcard(soundPath);
				
			}catch(Exception e){
				Utility.makeToast(this, soundPath + "\n" + "������ �������� �ʽ��ϴ�. �ٸ� ������ �������ּ���");
				startActivityForResult(new Intent(this, ActivitySearchMusinInSdcard.class), 1000);
				;
			}
			
			return;
		}
		
		if(bgId > 0){
			Variables.BGM_MANAGER.play(bgId);
		}
		
		
	}

	@Override
	protected void onPause() {
		super.onPause();

	}

	@Override
	protected void onStop() {
		// TODO Auto-generated method stub
		super.onStop();
		//    	Variables.BGM_MANAGER
	}


	@Override
	protected void onResume() {
		// TODO Auto-generated method stub
		super.onResume();
	}

	@Override
	protected void onDestroy() {
		super.onDestroy();

	}

	public void initViews(){
		findViewById(R.id.main_btnHelp).setOnClickListener(this);
		findViewById(R.id.main_btnRecord).setOnClickListener(this);
		findViewById(R.id.main_btnSetting).setOnClickListener(this);
		findViewById(R.id.main_btnStart).setOnClickListener(this);
		

	}

	@Override
	public void onClick(View v) {
		switch(v.getId()){

		case R.id.main_btnHelp:
			startActivity(new Intent(this, ActivityHelp.class));
			break;
		case R.id.main_btnRecord:
			startActivity(new Intent(this, ActivityRecord.class));
			break;
		case R.id.main_btnSetting:
			startActivity(new Intent(this, ActivitySetting.class));

			break;
		case R.id.main_btnStart: 
			startActivity(new Intent(this, ActivityScreen.class));
			break;
		}
	}
	
	protected void onActivityResult(int requestCode, int resultCode, Intent data) {
		if(requestCode == 1000){
			if(resultCode == RESULT_OK){
				//����
				String path = data.getStringExtra("soundPath");
				try{
					Variables.BGM_MANAGER.playFromSdcard(path);
					ExPreferManager.setItem(this, "soundPath", path);
				}catch(Exception e){
					Utility.makeToast(this, path + "\n" + "������ �������� �ʽ��ϴ�");
					startActivityForResult(new Intent(this, ActivitySearchMusinInSdcard.class), 1000);
					;
				}
			}else{
				//���
			}
		}
	};
}
