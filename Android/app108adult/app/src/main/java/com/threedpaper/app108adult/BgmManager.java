package com.threedpaper.app108adult;

import exight.common.Variables;
import exight.lib.ExPreferManager;
import android.app.Activity;
import android.media.MediaPlayer;
import android.net.Uri;

public class BgmManager {
	MediaPlayer mp;
	private Activity activity;
	public BgmManager(Activity activity) {
		this.activity = activity;
	}
	
	
	public void play(int soundId){
		release();
		
		mp = MediaPlayer.create(activity, soundId);
		mp.setLooping(true);
		int vol = ExPreferManager.getItemInteger(activity, "bgVolumn");
		float v = ((float)vol) * 0.1f;
		mp.setVolume(v, v);
		mp.start();
	}
	
	public void playFromSdcard(String path) throws Exception{
		release();
		
		mp = MediaPlayer.create(activity, Uri.parse(path));
		mp.setLooping(true);
		int vol = ExPreferManager.getItemInteger(activity, "bgVolumn");
		float v = ((float)vol) * 0.1f;
		mp.setVolume(v, v);
		mp.start();
	}
	
	
	public void resume(){
		try{
			mp.start();
		}catch(Exception e){
			;
		}
		
	}
	
	public void pause(){
		try{
			mp.pause();
		}catch(Exception e){
			;
		}
	}
	
	public void setVolumn(int volumn){
		float vol = ((float)volumn) * 0.1f;
		mp.setVolume(vol, vol);
	}
	
	public void release(){
		if(mp != null){
			mp.release();
		}
	}
	
}	
