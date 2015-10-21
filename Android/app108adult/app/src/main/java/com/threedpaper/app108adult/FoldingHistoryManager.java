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
	
	//��ϳ���� Ƚ��
	public static void increaseTodayFoldingCount(Activity activity){
		
		String tDate = Utility.getCurrentDate();
		
		newFoldingDate(activity, tDate);
		int count = ExPreferManager.getItemInteger(activity, KEY_FOLDING_COUNT + tDate);
		count++;
		ExPreferManager.setItemInteger(activity, KEY_FOLDING_COUNT + tDate, count);

	}
	
	//���� �� ����.
	public static void removeAllHistory(Activity activity){
		String foldingdate = ExPreferManager.getItem(activity, KEY_FOLDING_DATELIST);
		StringTokenizer st = new StringTokenizer(foldingdate, "*");
		while(st.hasMoreTokens()){
			String date = st.nextToken();
			ExPreferManager.setItemInteger(activity, KEY_FOLDING_COUNT + date, 0);
		}
		
		ExPreferManager.setItem(activity, KEY_FOLDING_DATELIST, "");
	}
	
	//���� �ҷ�����
	public static List<ModelFoldingHistory> loadHistory(Activity activity){
		List<ModelFoldingHistory> listModelFoldingHistory = new ArrayList<ModelFoldingHistory>();
		
		String foldingdate = ExPreferManager.getItem(activity, KEY_FOLDING_DATELIST);
		StringTokenizer st = new StringTokenizer(foldingdate, "*");
		while(st.hasMoreTokens()){
			String date = st.nextToken();
			int count = ExPreferManager.getItemInteger(activity, KEY_FOLDING_COUNT + date);
			listModelFoldingHistory.add(new ModelFoldingHistory(date, count));
			
		}
		
		return listModelFoldingHistory;
	}
	
	private static void newFoldingDate(Activity activity, String tDate){
		if(!isWroteFoldingDate(activity, tDate)){
			String foldingdate = ExPreferManager.getItem(activity, KEY_FOLDING_DATELIST);
			foldingdate = foldingdate + "*" + tDate;
			ExPreferManager.setItem(activity, KEY_FOLDING_DATELIST, foldingdate);
		}
	}


	//�̹� ��ϵ� ���� ����������.
	private static boolean isWroteFoldingDate(Activity activity, String tDate){
		String foldingdate = ExPreferManager.getItem(activity, KEY_FOLDING_DATELIST);
		StringTokenizer st = new StringTokenizer(foldingdate, "*");
		while(st.hasMoreTokens()){
			String date = st.nextToken();
			if(date.equals(tDate)){
				return true;
			}
		}

		return false;
	}
	
	
}
