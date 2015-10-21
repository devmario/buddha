package exight.lib;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.view.View.OnClickListener;


//�Ǿ�Ƽ��Ƽó�� ������Ű������.
public class ExightTabLayerChanger implements OnClickListener{
	
	private ViewGroup containerView;
	private Activity activity;
	private TabChangeListener tabChangeListener;
	private HashMap<Integer, ExightTabItem> hashTabItems = new HashMap<Integer, ExightTabItem>();
	
	/**�� �׷� ���̵� �Ѱܶ�*/
	public ExightTabLayerChanger(Activity activity, int containerId, TabChangeListener tabChangeListener) {
		containerView = (ViewGroup)activity.findViewById(containerId);
		this.activity = activity;
		
		this.tabChangeListener = tabChangeListener;
	}
	
	/**�� �׷츸 �ȴ�*/
	public ExightTabLayerChanger(Activity activity, ViewGroup containerView, TabChangeListener tabChangeListener) {
		this.containerView = containerView;
		this.activity = activity;
		
		this.tabChangeListener = tabChangeListener;
	}
	
	public void newTabItem(int no, ExightTabItem tabItem){
		hashTabItems.put(no, tabItem);
		tabItem.getContentView().setVisibility(View.GONE);
		containerView.addView(tabItem.getContentView());
	}
	
	private Map<Integer, View> hashButtonSet = new HashMap<Integer, View>();
	public void newTabItem(int no, ExightTabItem tabItem, int buttonId){
		hashTabItems.put(no, tabItem);
		tabItem.getContentView().setVisibility(View.GONE);
		containerView.addView(tabItem.getContentView());
		
		View btn = activity.findViewById(buttonId);
		btn.setOnClickListener(this);
		btn.setTag(no);
		
		hashButtonSet.put(no, btn);
	}
	
	private int currentNo = 0;
	public void setCurrentTab(int no){
		//step1. ��δ� invisible�� �ٲ�.
		currentNo = no;
		Iterator itr = hashTabItems.keySet().iterator();
		while(itr.hasNext()){
			Integer key = (Integer)itr.next();
			ExightTabItem tabItem = (ExightTabItem)hashTabItems.get(key);
			
			if(no == key){
				tabItem.getContentView().setVisibility(View.VISIBLE);
				//create�� ������������ resume
				if(tabItem.isCreated()){
					tabItem.onResume();
					
					tabChangeListener.onTabResume(key, hashButtonSet.get(key));
				}else{
					tabItem.setCreated(true);
					//create��Ŵ.
					tabItem.onCreate();
					tabItem.onResume();
					tabChangeListener.onTabResume(key, hashButtonSet.get(key));
				}
				
			}else{
				tabItem.onPause();
				tabItem.getContentView().setVisibility(View.GONE);
				
				tabChangeListener.onTabPause(key, hashButtonSet.get(key));
			}
		}
	}
	
	public void onPause(){
		Iterator itr = hashTabItems.keySet().iterator();
		while(itr.hasNext()){
			Integer key = (Integer)itr.next();
			ExightTabItem tabItem = (ExightTabItem)hashTabItems.get(key);
			tabItem.onPause();
		}
	}
	
	public void onResume(){
		hashTabItems.get(currentNo).onResume();
	}
	
	@Override
	public void onClick(View v) {
		Integer no = (Integer)v.getTag();
		this.setCurrentTab(no);
	}
	
	
	public interface TabChangeListener{
		public void onTabResume(int pos, View v);
		public void onTabPause(int pos, View v);
	}

}
