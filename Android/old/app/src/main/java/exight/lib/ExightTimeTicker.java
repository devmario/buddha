package exight.lib;

import java.util.ArrayList;
import java.util.List;

import android.os.Handler;

public class ExightTimeTicker {
	
	public ExightTimeTicker() {
		listOnTimeListeners = new ArrayList<ExightTimeTicker.OnTimeListener>();
	}
	
	public void start(){
		handler.sendEmptyMessage(0);
	}
	
	public void stop(){
		handler.removeMessages(0);
	}
	
	public void addNewOnTimeListener(OnTimeListener onTimeListener){
		listOnTimeListeners.add(onTimeListener);
	}
	
	Handler handler = new Handler(){
		public void dispatchMessage(android.os.Message msg) {
			if(msg.what == 0){
				this.sendEmptyMessageDelayed(0, 1000);
				for(OnTimeListener l : listOnTimeListeners){
					l.onSecondPassed();
				}
			}else{
				
			}
		};
	};
	
	private List<OnTimeListener> listOnTimeListeners;
	
	public interface OnTimeListener{
		public void onSecondPassed();
	}
}
