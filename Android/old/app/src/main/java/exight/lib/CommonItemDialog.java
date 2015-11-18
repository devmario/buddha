package exight.lib;

import java.util.ArrayList;

import android.content.Context;
import android.content.DialogInterface.OnClickListener;

public class CommonItemDialog extends ExightDialogBuilder{


	public CommonItemDialog(Context context, String title,	ArrayList<String> items, OnClickListener dialoglistener) {
		super(context, title, items, dialoglistener);
	}

	
	public static void makeCommonDialog(Context context, String title, OnClickListener itemClickListener, String...strings){
		ArrayList<String> arr = new ArrayList<String>();
		for(String s : strings){
			arr.add(s);
		}
		
		new CommonItemDialog(context, title, arr, itemClickListener).show();
		
	}
	
	



}

