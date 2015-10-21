package exight.lib;

import android.app.Activity;
import android.os.Handler;
import android.widget.Toast;

public class ExightDelayedFinishManager {
	
	private static boolean isPressed = false;
	private static String defaultAlertMessage = "�ѹ��� �����ø� �����մϴ�";
	public static void onBackkeyPressed(Activity activity){
		onBackkeyPressed(activity, defaultAlertMessage);
	}
	
	public static void onBackkeyPressed(Activity activity, String message){
		if(isPressed == false){
			isPressed = true;
			
			new Handler(){
				public void dispatchMessage(android.os.Message msg) {
					isPressed = false;
				};
			}.sendEmptyMessageDelayed(0, 1000);
			
			Toast.makeText(activity, message, 1000).show();
		}else{
			isPressed = false;
			activity.finish();
		}
	}
}
