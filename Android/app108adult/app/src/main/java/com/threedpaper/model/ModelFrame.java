package com.threedpaper.model;

import android.content.Context;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.HashMap;
import java.util.Map;

import exight.common.Variables;
import exight.lib.ExPreferManager;

public class ModelFrame {
	public String title;
	public String content;
	public int imgId;
	public Map<String, Integer> soundMap = new HashMap<String, Integer>();
	public int soundIdOfMan;
	public int soundIdOfWoman;
	public int soundIdOfChild;

	public ModelFrame(Context context, JSONObject json, int index, JSONArray voice) {
		try {
			this.title = json.getString("title");
			this.content = json.getString("sub_title");
			NumberFormat nf = new DecimalFormat("000");
			imgId = context.getResources().getIdentifier("inner_bg_" + nf.format(index + 1), "drawable", context.getPackageName());
			for(int i = 0; i < voice.length(); i++) {
				soundMap.put(voice.getString(i), new Integer(
						context.getResources().getIdentifier(voice.getString(i) + nf.format(index + 1), "raw", context.getPackageName())
				));
			}
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}
	
	public int getProperSoundId(Context context){
		String voiceType = ExPreferManager.getItem(context, "voice");
		return soundMap.get(voiceType);
		
	}
}
