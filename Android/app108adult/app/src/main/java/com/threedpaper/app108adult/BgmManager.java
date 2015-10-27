package com.threedpaper.app108adult;

import exight.common.Variables;
import exight.lib.ExPreferManager;
import android.app.Activity;
import android.content.Context;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.net.Uri;

public class BgmManager {
	MediaPlayer mp;
	private Context c;
	public BgmManager(Context c) {
		this.c = c;
	}
	
	
	public void play(int soundId){
		release();
		
		mp = MediaPlayer.create(c, soundId);
		mp.setAudioStreamType(AudioManager.STREAM_MUSIC);
		mp.setLooping(true);
		int vol = ExPreferManager.getItemInteger(c, "bgVolumn");
		float v = ((float)vol) * 0.1f;
		mp.setVolume(v, v);
		mp.start();
	}
	
	public void playFromSdcard(String path) throws Exception{
		release();
		
		mp = MediaPlayer.create(c, Uri.parse(path));
		mp.setAudioStreamType(AudioManager.STREAM_MUSIC);
		mp.setLooping(true);
		int vol = ExPreferManager.getItemInteger(c, "bgVolumn");
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
