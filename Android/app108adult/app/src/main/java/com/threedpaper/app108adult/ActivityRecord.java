package com.threedpaper.app108adult;

import java.util.List;

import android.content.Context;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.ViewGroup;
import android.widget.ListView;

import com.threedpaper.model.ModelFoldingHistory;

import exight.common.Utility;
import exight.lib.TooSimpleArrayAdater;

public class ActivityRecord extends ActivityForBgm {
	
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_record);
        
        init();
        initViews();
        
        loadHistory();
    }
    
    ListView lvItems;
    AdapterHist adapterHist;
    private void init(){
    	adapterHist = new AdapterHist(this);
    }
    
    private void initViews(){
    	lvItems = (ListView)findViewById(R.id.hist_lvItems);
    	lvItems.setAdapter(adapterHist);
    	
    	findViewById(R.id.hist_btnX).setOnClickListener(new OnClickListener() {
			
			@Override
			public void onClick(View v) {
				finish();
			}
		});
    }
    
    private void loadHistory(){
    	List<ModelFoldingHistory> list = FoldingHistoryManager.loadHistory(this);
    	adapterHist.setListItems(list);
    	adapterHist.notifyDataSetChanged();
    }
    
    class AdapterHist extends TooSimpleArrayAdater{
    	
    	public AdapterHist(Context context) {
			super(context);
		}

		@Override
    	public View getView(int position, View convertView, ViewGroup parent) {
			View v = convertView;
			if(v == null){
				v = getLayoutInflater().inflate(R.layout.cell_folding_history, null);
			}
			
			ModelFoldingHistory m = (ModelFoldingHistory)getListItems().get(position);
			Utility.findTextViewById(v, R.id.cellFoldingCount_tvCount).setText(m.count + "น่");
			Utility.findTextViewById(v, R.id.cellFoldingCount_tvDate).setText(m.date);
			
			return v;
    	}
    }
    
}
