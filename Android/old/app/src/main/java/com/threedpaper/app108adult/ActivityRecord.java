package com.threedpaper.app108adult;

import java.util.Collection;
import java.util.Collections;
import java.util.List;

import android.content.Context;
import android.content.Intent;
import android.media.effect.Effect;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.ViewGroup;
import android.widget.ListView;

import com.threedpaper.model.ModelFoldingHistory;

import exight.common.Utility;
import exight.customviews.EffectButton;
import exight.lib.TooSimpleArrayAdater;

public class ActivityRecord extends ActivityForBgm {

	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_record);

		init();
		initViews();

		loadHistory();
		setupFull();
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
		List<ModelFoldingHistory> list = FoldingHistoryManager.loadHistory(getApplicationContext());
		Collections.reverse(list);
		if(list.size() == 0) {
			list.add(new ModelFoldingHistory(null, 0, 0));
		}
		adapterHist.setListItems(list);
		adapterHist.notifyDataSetChanged();
	}

	@Override
	protected void onResume() {
		super.onResume();
		loadHistory();
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
			EffectButton bt = ((EffectButton)v.findViewById(R.id.record_bt_cell));
			if(m.date == null) {
				bt.setText("시작하기");
				Utility.findTextViewById(v, R.id.cellFoldingCount_tvCount).setText("");
                Utility.findTextViewById(v, R.id.cellFoldingCount_tvDate).setText("기록이 없습니다.");
			} else {
				bt.setAlpha(m.count + 1 == 108 ? 0.5f : 1.0f);
				bt.setText(m.count + 1 == 108 ? "완료" : "이어하기");
				Utility.findTextViewById(v, R.id.cellFoldingCount_tvCount).setText((m.count + 1) + "배");
				Utility.findTextViewById(v, R.id.cellFoldingCount_tvDate).setText(m.date);
			}
			final ModelFoldingHistory fm = m;
			bt.setOnClickListener(new OnClickListener() {
				@Override
				public void onClick(View view) {
                    Intent i;
                    if(fm.date != null) {
                        if (fm.count >= 107)
                            return;
                        i = new Intent(getContext(), ActivityScreen.class);
                        i.putExtra("record_id", fm.record_id);
                        i.putExtra("pos", fm.count);
                    } else {
                        i = new Intent(getContext(), ActivityScreen.class);
                        i.putExtra("record_id", -1);
                        i.putExtra("pos", 0);
                    }
					startActivity(i);
				}
			});

			return v;
		}
	}

}
