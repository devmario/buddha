package com.threedpaper.app108adult;

import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

import android.app.Activity;
import android.content.Context;

import com.threedpaper.model.ModelFoldingHistory;

import exight.common.Utility;
import exight.lib.ExPreferManager;

public class FoldingHistoryManager {

	private final static String KEY_FOLDING_COUNT = "folding_count";
	private final static String KEY_FOLDING_DATELIST = "folding_date_list";

	//기록남기기 횟수
	public static void setTodayFoldingCount(Context c, int record_id, int count) {
		ExPreferManager.setItemInteger(c, KEY_FOLDING_COUNT + record_id, count);
	}

	//내역 다 지움.
	public static void removeAllHistory(Context c){
		int i = 0;
		ExPreferManager e = new ExPreferManager(c);
		String foldingdate = e.getItem(c, KEY_FOLDING_DATELIST);
		StringTokenizer st = new StringTokenizer(foldingdate, "*");
		while (st.hasMoreTokens()) {
			String date = st.nextToken();
			e.removeItem(KEY_FOLDING_COUNT + i);
			i++;
		}
		e.setItem(c, KEY_FOLDING_DATELIST, "");
		e.removeItem(c, KEY_FOLDING_COUNT);
		e.commit();
	}

	//내역 불러오기
	public static List<ModelFoldingHistory> loadHistory(Context c){
		List<ModelFoldingHistory> listModelFoldingHistory = new ArrayList<ModelFoldingHistory>();

		String foldingdate = ExPreferManager.getItem(c, KEY_FOLDING_DATELIST);
		StringTokenizer st = new StringTokenizer(foldingdate, "*");
		int i = 0;
		while(st.hasMoreTokens()){
			String date = st.nextToken();
			int count = ExPreferManager.getItemInteger(c, KEY_FOLDING_COUNT + i);
			listModelFoldingHistory.add(new ModelFoldingHistory(date, count, i));
			i++;
		}

		return listModelFoldingHistory;
	}

	public static int newFoldingDate(Context c, String tDate){
		int length = ExPreferManager.getItemInteger(c, KEY_FOLDING_COUNT);
		int id = length;
		length++;
		ExPreferManager.setItemInteger(c, KEY_FOLDING_COUNT, length);

		String foldingdate = ExPreferManager.getItem(c, KEY_FOLDING_DATELIST);
		foldingdate = foldingdate + "*" + tDate;
		ExPreferManager.setItem(c, KEY_FOLDING_DATELIST, foldingdate);
		return id;
	}


}
