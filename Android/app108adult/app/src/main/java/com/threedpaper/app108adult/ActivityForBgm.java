package com.threedpaper.app108adult;

import android.app.Activity;
import android.os.Handler;
import exight.common.Variables;

public abstract class ActivityForBgm extends Activity{
	
	private static int alivedActivityCount = 0;
	
	@Override
	protected void onPause() {
		super.onPause();
		alivedActivityCount--;
		new Handler(){
			public void dispatchMessage(android.os.Message msg) {
				if(alivedActivityCount <= 0){
					Variables.BGM_MANAGER.pause();
				}
			};
		}.sendEmptyMessageDelayed(0, 300);
		
	}
	
	@Override
	protected void onResume() {
		super.onResume(); 
		alivedActivityCount++;
		try{
			if(Variables.BGM_MANAGER.mp.isPlaying() == false){
				Variables.BGM_MANAGER.resume();
			}
		}catch(Exception e){
			;
		}
		
	}
	
	
	
		
	
	
	
}
