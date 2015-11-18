package exight.lib;

import java.util.HashMap;
import java.util.Map;

import android.content.Context;
import android.media.AudioManager;
import android.media.SoundPool;

public class ExightSoundPool {
	
	private SoundPool soundPool;
	private Map<Integer, Integer> mapSound;
	private Context context;
	public ExightSoundPool(Context context) {
		this.context = context;
		soundPool = new SoundPool(5, AudioManager.STREAM_MUSIC, 0);
		mapSound = new HashMap<Integer, Integer>();
	}
	
	public void addSound(int resId){
		int id = soundPool.load(context, resId, 1);
		mapSound.put(resId, id);
	}
	
	public void play(int resId){
		soundPool.play(mapSound.get(resId), 1, 1, 1, 0, 1);
	}
	
	public void playForever(int resId){
		soundPool.play(mapSound.get(resId), 1, 1, 1, -1, 1);
	}
	
	
	public void stopSound(int resId){
		soundPool.stop(mapSound.get(resId));
		
	}
	
	public void pause(int resId){
		soundPool.pause(mapSound.get(resId));
	}
	
	public void resume(int resId){
		soundPool.resume(mapSound.get(resId));
	}
	
	public void release(){
		soundPool.release();
	}
	
	
	
}
