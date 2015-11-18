package com.threedpaper.app108adult;

import android.app.Activity;
import android.os.Build;
import android.os.Handler;
import android.support.v4.app.FragmentActivity;
import android.view.View;

import exight.common.Variables;

public abstract class ActivityForBgm extends FragmentActivity{
	
	private static int alivedActivityCount = 0;

	public void setupFull() {
		if (Build.VERSION.SDK_INT >= 11) {
			final View decorView = getWindow().getDecorView();
			final int flags = View.SYSTEM_UI_FLAG_LAYOUT_STABLE
					| View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
					| View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
					| View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
					| View.SYSTEM_UI_FLAG_FULLSCREEN
					| View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY;
			decorView.setOnSystemUiVisibilityChangeListener(new View.OnSystemUiVisibilityChangeListener() {
				@Override
				public void onSystemUiVisibilityChange(int i) {
					if (Build.VERSION.SDK_INT >= 11) {
						decorView.setSystemUiVisibility(flags);
					}
				}
			});
			decorView.setSystemUiVisibility(flags);
		}
	}
	
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
		setupFull();
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
