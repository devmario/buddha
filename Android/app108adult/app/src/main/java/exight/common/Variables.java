package exight.common;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.Field;
import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.media.MediaPlayer;
import android.util.Log;

import com.threedpaper.app108adult.BgmManager;
import com.threedpaper.app108adult.R;
import com.threedpaper.model.ModelFrame;

import org.json.JSONArray;
import org.json.JSONObject;

import exight.lib.ExightSoundPool;


public class Variables {
	
	public static BgmManager BGM_MANAGER;
	
	public final static int VOICE_TYPE_MAN   	= 0;
	public final static int VOICE_TYPE_WOMAN 	= 1;
	public final static int VOICE_TYPE_WOMAN2 	= 2;
	
	public final static int BG_TYPE_BIRD	 	= 0;
	public final static int BG_TYPE_BUG		 	= 1;
	public final static int BG_TYPE_STREAM	 	= 2;
	public final static int BG_TYPE_MUSIC	 	= 3;
	
	public final static int START_TYPE_CONTINUE = 0;
	public final static int START_TYPE_FIRST   	= 1;

	public static boolean inited = false;

	public static JSONObject json = null;
	
	public static final List<ModelFrame> LIST_MODEL_FRAMES = new ArrayList<ModelFrame>();

	private final static boolean LOAD_JSON(Context context) {
		if(Variables.inited)
			return true;

		InputStream inputStream = context.getResources().openRawResource(R.raw.data);
		ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();

		int ctr;
		try {
			ctr = inputStream.read();
			while (ctr != -1) {
				byteArrayOutputStream.write(ctr);
				ctr = inputStream.read();
			}
			inputStream.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
		String jsonString = byteArrayOutputStream.toString();

		try {
			json = new JSONObject(jsonString);
			json = json.getJSONObject(json.getString("name"));

			JSONArray voice = json.getJSONArray("voice");

			JSONArray scene = json.getJSONArray("scene");
			for(int i = 0; i < scene.length(); i++) {
				JSONObject it = scene.getJSONObject(i);
				NumberFormat nf = new DecimalFormat("000");
				LIST_MODEL_FRAMES.add(
						new ModelFrame(
								it.getString("title"),
								it.getString("sub_title"),
								context.getResources().getIdentifier("inner_bg_" + nf.format(i + 1), "drawable", context.getPackageName()),
								context.getResources().getIdentifier(voice.getString(0) + nf.format(i + 1), "raw", context.getPackageName()),
								context.getResources().getIdentifier(voice.getString(1) + nf.format(i + 1), "raw", context.getPackageName()),
								context.getResources().getIdentifier(voice.getString(2) + nf.format(i + 1), "raw", context.getPackageName())));
			}
		} catch (Exception e) {
			e.printStackTrace();
		}

		Variables.inited = true;
		return true;
	}

	public final static void INIT_LIST_MODEL_FRAMES(Context context){
		LOAD_JSON(context);
	}
	
	public final static void INIT_FRAMES_SOUND(ExightSoundPool soundPool){
		soundPool.addSound(R.raw.bell);
		soundPool.addSound(R.raw.click);
		
		
		for(ModelFrame m : LIST_MODEL_FRAMES){
			soundPool.addSound(m.soundIdOfChild);
			soundPool.addSound(m.soundIdOfMan);
			soundPool.addSound(m.soundIdOfWoman);
		}
	}
	
}
