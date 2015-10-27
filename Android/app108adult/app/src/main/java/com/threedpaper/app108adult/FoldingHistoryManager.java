package com.threedpaper.app108adult;

import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

import android.app.Activity;

import com.threedpaper.model.ModelFoldingHistory;

import exight.common.Utility;
import exight.lib.ExPreferManager;

public class FoldingHistoryManager {

	private final static String KEY_FOLDING_COUNT = "foldingcount";
	private final static String KEY_FOLDING_DATELIST = "foldingdatelist";

	//기록남기기 횟수
	public static void increaseTodayFoldingCount(Activity activity, int record_id){
		int count = ExPreferManager.getItemInteger(activity, KEY_FOLDING_COUNT + record_id);
		count++;
		ExPreferManager.setItemInteger(activity, KEY_FOLDING_COUNT + record_id, count);
	}

	//내역 다 지움.
	public static void removeAllHistory(Activity activity){
		String foldingdate = ExPreferManager.getItem(activity, KEY_FOLDING_DATELIST);
		StringTokenizer st = new StringTokenizer(foldingdate, "*");
		int i = 0;
		while(st.hasMoreTokens()){
			ExPreferManager.setItemInteger(activity, KEY_FOLDING_COUNT + i, 0);
			i++;
		}

		ExPreferManager.setItem(activity, KEY_FOLDING_DATELIST, "");
	}

	//내역 불러오기
	public static List<ModelFoldingHistory> loadHistory(Activity activity){
		List<ModelFoldingHistory> listModelFoldingHistory = new ArrayList<ModelFoldingHistory>();

		String foldingdate = ExPreferManager.getItem(activity, KEY_FOLDING_DATELIST);
		StringTokenizer st = new StringTokenizer(foldingdate, "*");
		int i = 0;
		while(st.hasMoreTokens()){
			String date = st.nextToken();
			int count = ExPreferManager.getItemInteger(activity, KEY_FOLDING_COUNT + i);
			listModelFoldingHistory.add(new ModelFoldingHistory(date, count, i));
			i++;
		}

		return listModelFoldingHistory;
	}

	public static int newFoldingDate(Activity activity, String tDate){
		int length = ExPreferManager.getItemInteger(activity, KEY_FOLDING_COUNT);
		int id = length;
		length++;
		ExPreferManager.setItemInteger(activity, KEY_FOLDING_COUNT, length);

		String foldingdate = ExPreferManager.getItem(activity, KEY_FOLDING_DATELIST);
		foldingdate = foldingdate + "*" + tDate;
		ExPreferManager.setItem(activity, KEY_FOLDING_DATELIST, foldingdate);
		return id;
	}


}
