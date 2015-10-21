package exight.lib;

import android.util.Log;


public class MyLogger {
	private static String tag = "sktelecom_manager";
	public static void Log(String message){
		try{
			Log.d(tag, message + "");
		}catch (Exception e) {
			;
		}
	}
	
	public static void error(String message){
		try{
			Log.e(tag, message + "");
		}catch (Exception e) {
			;
		}
	}
}
