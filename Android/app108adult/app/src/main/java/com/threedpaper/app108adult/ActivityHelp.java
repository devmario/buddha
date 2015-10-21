package com.threedpaper.app108adult;

import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.animation.AlphaAnimation;
import android.widget.Button;

import com.threedpaper.app108adult.tabitem.TabItemHowto;
import com.threedpaper.app108adult.tabitem.TabItemMirror;
import com.threedpaper.app108adult.tabitem.TabItemUsage;

import exight.lib.ExightTabLayerChanger;
import exight.lib.ExightTabLayerChanger.TabChangeListener;

public class ActivityHelp extends ActivityParent implements OnClickListener{
	
 

    ExightTabLayerChanger tabLayerChanger;
 
    @Override
    public void onSettingContentsView() {
    	setContentView(R.layout.activity_help);
    }
    
    AlphaAnimation anim1, anim2;
	@Override
	public void init() {
		anim1 = new AlphaAnimation(1.0f, 0.5f);
		anim1.setDuration(0);
		anim1.setRepeatCount(0);
		anim1.setFillAfter(true);
		
		anim2 = new AlphaAnimation(0.5f, 1.0f);
		anim2.setDuration(0);
		anim2.setRepeatCount(0);
		anim2.setFillAfter(true);
		
		tabLayerChanger = new ExightTabLayerChanger(this, R.id.help_rlContent, new TabChangeListener() {
			
			@Override
			public void onTabResume(int pos, View v) {
				Button btn = (Button)v;
				
				btn.startAnimation(anim2);
				switch(v.getId()){
				case R.id.help_btnMirror:
					break;
				case R.id.help_btnHowto:
					break;
				case R.id.help_btnUsage:
					break;
				}
			}
			
			@Override
			public void onTabPause(int pos, View v) {
				Button btn = (Button)v;
				btn.startAnimation(anim1);
				switch(v.getId()){
				case R.id.help_btnMirror:
					break;
				case R.id.help_btnHowto:
					break;
				case R.id.help_btnUsage:
					break;
				}				
			}
		});
		tabLayerChanger.newTabItem(0, new TabItemMirror(this), R.id.help_btnMirror);
		tabLayerChanger.newTabItem(1, new TabItemHowto(this), R.id.help_btnHowto);
		tabLayerChanger.newTabItem(2, new TabItemUsage(this), R.id.help_btnUsage);
		
		tabLayerChanger.setCurrentTab(0);
	}

	@Override
	public void initViews() {
		findViewById(R.id.help_btnClose).setOnClickListener(this);
	}
	
	@Override
	public void onClick(View v) {
		switch(v.getId()){
		case R.id.help_btnClose:
			finish();
			break;
		}
	}
    
	@Override
	protected void onPause() {
		// TODO Auto-generated method stub
		super.onPause();
		tabLayerChanger.onPause();
	}
}
