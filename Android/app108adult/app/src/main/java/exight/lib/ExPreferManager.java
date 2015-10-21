package exight.lib;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.SharedPreferences.Editor;

public class ExPreferManager {
	//오토로그인용 상수
	
	public final static String TAG_USER_ID = "0x0000001";
	public final static String TAG_USER_PASS = "0x0000002";
	public final static String TAG_LOGIN_DATETIME = "0x005";
	public final static String TAG_USER_TYPE = "0x006";
	
	private Editor editor;
	
	private SharedPreferences settings;
	private ExPreferManager Instance;
	
	
	public ExPreferManager(Context context){
		Instance = this;
		 
		
		settings = context.getSharedPreferences("S", 1);
		editor = settings.edit();
		//값을 받는당
	}
	
	//단축
	public static String getMyId(Context context){
		ExPreferManager e = new ExPreferManager(context);
		return e.getItem(TAG_USER_ID);
	}
	
	
	
	public static void setMyId(Context context, String value){
		ExPreferManager e = new ExPreferManager(context);
		e.putItem(ExPreferManager.TAG_USER_ID, value);		
	}
	
	public static String getRadius(Context context){
		ExPreferManager e = new ExPreferManager(context);
		String radi = e.getItem("radius");
		if(radi.equals("")){
			return "2"; //기본 반경
		}else{
			return radi;
		}
		
	}
	
	public static void setRadius(Context context, String value){
		ExPreferManager e = new ExPreferManager(context);
		e.putItem("radius", value);		
	}
	
	public static String getMyPass(Context context){
		ExPreferManager e = new ExPreferManager(context);
		return e.getItem(TAG_USER_PASS);
	}
	
	public static void setMyPass(Context context, String value){
		ExPreferManager e = new ExPreferManager(context);
		e.putItem(ExPreferManager.TAG_USER_PASS, value);		
	}
	
	//공용
	public static String getItem(Context context, String tag){
		ExPreferManager e = new ExPreferManager(context);
		return e.getItem(tag);
	}
	
	public static void setItem(Context context, String tag, String value){
		ExPreferManager e = new ExPreferManager(context);
		e.putItem(tag, value);	
		
	}
	
	public static int getItemInteger(Context context, String tag){
		ExPreferManager e = new ExPreferManager(context);
		return e.getIntegerItem(tag);
	}
	
	public static void setItemInteger(Context context, String tag, int value){
		ExPreferManager e = new ExPreferManager(context);
		e.putIntegerItem(tag, value);
		
	}
	
	public ExPreferManager getInstance(){
		return Instance;
	}
	
	public void putItem(String TAG, String value){
		editor.putString(TAG, value);
		editor.commit();
	}
	
	public String getItem(String TAG){
		return settings.getString(TAG, "");
	}
	
	public void putIntegerItem(String TAG, int value){
		editor.putInt(TAG, value);
		editor.commit();

	}	
	public int getIntegerItem(String TAG){
		return settings.getInt(TAG, 0);
	}
	
	public boolean getBooleanItem(String TAG){
		return settings.getBoolean(TAG, false);
	}
	
	public void putBooleanItem(String TAG, boolean flag){
		editor.putBoolean(TAG, flag);
		editor.commit();
	}
	
	
	
			
}
