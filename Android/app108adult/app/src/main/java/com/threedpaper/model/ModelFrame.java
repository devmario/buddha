package com.threedpaper.model;

import android.content.Context;
import exight.common.Variables;
import exight.lib.ExPreferManager;

public class ModelFrame {
	public String title;
	public String content;
	public int imgId;
	public int soundIdOfMan;
	public int soundIdOfWoman;
	public int soundIdOfChild;
	
	public ModelFrame(String title, String content, int imgId, int soundIdOfChild, int soundIdOfMan, int soundIdOfWoman) {
		this.title = title;
		this.content = content;
		this.imgId = imgId;
		this.soundIdOfMan = soundIdOfMan;
		this.soundIdOfWoman = soundIdOfWoman;
		this.soundIdOfChild = soundIdOfChild;
	}
	
	public int getProperSoundId(Context context){
		int voiceType = ExPreferManager.getItemInteger(context, "voiceType");
		switch(voiceType){
		case Variables.VOICE_TYPE_MAN:
			return soundIdOfMan;
		case Variables.VOICE_TYPE_WOMAN:
			return soundIdOfWoman;			
		case Variables.VOICE_TYPE_WOMAN2:
			return soundIdOfChild;
		}
		
		return soundIdOfMan;
		
	}
}
