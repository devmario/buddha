package com.threedpaper.app108adult;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;

public class ActivityPause extends ActivityForBgm implements android.view.View.OnClickListener{


	int pausedScenePos;
	int record_id;
	@Override
	public void onCreate(Bundle savedInstanceState) {
	    super.onCreate(savedInstanceState);
	    setContentView(R.layout.activity_pause);

		pausedScenePos = getIntent().getIntExtra("pausedScenePos", 0);
		record_id = getIntent().getIntExtra("record_id", -1);
	    init();
		setupFull();
	}
	
	private void init(){
		initViews();
	}
	
	private void initViews(){
		findViewById(R.id.pause_btnExit).setOnClickListener(this);
		findViewById(R.id.pause_btnReplay).setOnClickListener(this);
	}

	@Override
	public void onClick(View v) {
		switch(v.getId()){
		case R.id.pause_btnExit:
			finish();
			break;
		case R.id.pause_btnReplay:
			finish();
			startActivity(new Intent(this, ActivityScreen.class).putExtra("pausedScenePos", pausedScenePos).putExtra("record_id", record_id));
			break;
		}
	}
	
	

}
