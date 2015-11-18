package exight.lib;

import android.app.Activity;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup.LayoutParams;
import android.widget.RelativeLayout;

import com.threedpaper.app108adult.R;

public abstract class ExightTabItem {
	private Activity activity;
	private View contentView;
	private View vLoading;
	private boolean isCreated = false;
	
	public ExightTabItem(Activity activity) {
		this.activity = activity;
		RelativeLayout rl = new RelativeLayout(activity);
		rl.setLayoutParams(new RelativeLayout.LayoutParams(LayoutParams.MATCH_PARENT, LayoutParams.MATCH_PARENT));
		rl.setGravity(Gravity.CENTER_HORIZONTAL);
		rl.addView(setContentView(activity));
//		vLoading = makeProgressView(activity); 
//		rl.addView(vLoading);

		contentView = rl;
	
		
	}
	
//425f6e88
	public void showProgressBar() {
		vLoading.setVisibility(View.VISIBLE);
	}
	
	public void hideProgressbar(){
		vLoading.setVisibility(View.GONE);
	}
	
	public abstract View setContentView(Activity activity);
	
	public Activity getActivity() {
		return activity;
	}
	
	public View getContentView(){
		return contentView;
	}
	
	public boolean isCreated() {
		return isCreated;
	}
	
	public void setCreated(boolean isCreated) {
		this.isCreated = isCreated;
	}
	
	public abstract void onCreate();
	public abstract void onPause();	
	public abstract void onResume();
	public View findViewById(int id){
		return contentView.findViewById(id);
	}
}
