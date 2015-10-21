package exight.customviews;


import android.content.Context;
import android.util.AttributeSet;
import android.view.Gravity;
import android.widget.ImageView;
import android.widget.LinearLayout;

import com.threedpaper.app108adult.R;

import exight.common.Utility;

public class DotPageStatusView extends LinearLayout{
	public DotPageStatusView(Context context) {
		super(context);
		// TODO Auto-generated constructor stub
		init();
	}
	
	public DotPageStatusView(Context context, AttributeSet attrs) {
		super(context, attrs);
		// TODO Auto-generated constructor stub
		init();
	}

	private void init(){
		setLayoutParams(new LinearLayout.LayoutParams(LayoutParams.MATCH_PARENT, LayoutParams.WRAP_CONTENT));
		setGravity(Gravity.CENTER);
	}
	
	public void setMaxcount(int maxCount){
		LayoutParams lp = new LinearLayout.LayoutParams(LayoutParams.WRAP_CONTENT, LayoutParams.WRAP_CONTENT);
		lp.leftMargin = Utility.getPixelByDp(getContext(), 12);
		lp.rightMargin = Utility.getPixelByDp(getContext(), 12);
		
		this.removeAllViews();
		
		for(int i = 0; i < maxCount; i++){
			ImageView ivDot = new ImageView(getContext());
			ivDot.setLayoutParams(lp);
			ivDot.setBackgroundResource(R.drawable.help_howtouse_dot);
			addView(ivDot);
		}
		
		if(getChildCount() > 0){
			ImageView ivFirstDot = (ImageView)getChildAt(0);
			ivFirstDot.setBackgroundResource(R.drawable.help_howtouse_dot_act);
		}
		
	}
	
	/** ?úÏÑ±?îÎê† ?ÑÏù¥???§Ï†ï */
	public void setPos(int pos){
		for(int i = 0; i < getChildCount(); i++){
			ImageView ivFirstDot = (ImageView)getChildAt(i);
			ivFirstDot.setBackgroundResource(R.drawable.help_howtouse_dot);
			if(i == pos){
				ivFirstDot.setBackgroundResource(R.drawable.help_howtouse_dot_act);
			}
		}
		
	}
	
	

}
