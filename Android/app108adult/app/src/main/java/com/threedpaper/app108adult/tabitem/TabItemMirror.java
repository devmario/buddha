package com.threedpaper.app108adult.tabitem;

import android.app.Activity;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.view.View;

import com.threedpaper.app108adult.R;

import exight.lib.ExightTabItem;

public class TabItemMirror extends ExightTabItem{

	public TabItemMirror(Activity activity) {
		super(activity);
	}

	@Override
	public View setContentView(Activity activity) {
		View v = activity.getLayoutInflater().inflate(R.layout.tabitem_mirror, null);
		return v;
	}

	@Override
	public void onCreate() {
		
	}

	@Override
	public void onPause() {
		if(mp != null){
//			mp.stop();
			mp.release();
		}
	}
	public MediaPlayer mp;
	@Override
	public void onResume() {
		mp = MediaPlayer.create(getActivity(), R.raw.mindmirror);
		mp.setAudioStreamType(AudioManager.STREAM_MUSIC);
		mp.setVolume(1f, 1f);
		mp.setLooping(false);
		mp.start();
	}

}
