package com.threedpaper.app108adult.tabitem;

import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;

import com.threedpaper.app108adult.R;

import exight.customviews.DotPageStatusView;
import exight.customviews.HorizontalPager;
import exight.customviews.HorizontalPager.OnScreenSwitchListener;
import exight.lib.ExightTabItem;

public class TabItemUsage extends ExightTabItem{

	public TabItemUsage(Activity activity) {
		super(activity);
	}

	HorizontalPager horizontalPager;
	DotPageStatusView dotPageStatusView;
	
	@Override
	public View setContentView(Activity activity) {
		View v = activity.getLayoutInflater().inflate(R.layout.tabitem_usage, null);
		
		horizontalPager = (HorizontalPager)v.findViewById(R.id.helpHowtouse_pager);
		dotPageStatusView = (DotPageStatusView)v.findViewById(R.id.helpHowtouse_dot);
		
		horizontalPager.setOnScreenSwitchListener(new OnScreenSwitchListener() {
			
			@Override
			public void onScreenSwitched(int screen) {
				dotPageStatusView.setPos(screen);
			}
		});
		return v;
	}

	@Override
	public void onCreate() {
		final int pageIds[] = new int[]{R.drawable.help_howtouse, R.drawable.help_howtouse2, R.drawable.help_howtouse3};
		for(int resId : pageIds){
			View v = getActivity().getLayoutInflater().inflate(R.layout.percent_iv, null);
			ImageView iv = (ImageView)v.findViewById(R.id.innerIV);
			iv.setBackgroundResource(resId);
			
			horizontalPager.addView(v);
		}
		
		dotPageStatusView.setMaxcount(pageIds.length);
	}

	@Override
	public void onPause() {
		
	}

	@Override
	public void onResume() {
		
	}

}
