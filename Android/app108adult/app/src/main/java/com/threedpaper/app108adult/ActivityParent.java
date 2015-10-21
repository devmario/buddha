package com.threedpaper.app108adult;

import exight.common.Variables;
import android.app.Activity;
import android.os.Bundle;

public abstract class ActivityParent extends ActivityForBgm{
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		onSettingContentsView();
		init();
		initViews();
	}
	
	abstract public void onSettingContentsView();
	abstract public void init();
	abstract public void initViews();
		
	
	
	
}
