package exight.lib;

import java.util.ArrayList;

import android.app.AlertDialog.Builder;
import android.content.Context;
import android.content.DialogInterface;
import android.content.DialogInterface.OnClickListener;
import android.widget.ArrayAdapter;

import com.threedpaper.app108adult.R;

public class ExightDialogBuilder extends Builder {

	private Context context;
	private ArrayAdapter<String> adapter;


	public static void makeCommonDialog(final Context context, String title, 
			final ExightDialogItemClickListener exightDialogItemClickListener, String...strings){
		
		final ArrayList<String> arr = new ArrayList<String>();
		
		for(String s : strings){
			arr.add(s);
		}
		
		new ExightDialogBuilder(context, title, arr, new DialogInterface.OnClickListener() {
			
			@Override
			public void onClick(DialogInterface dialog, int which) {
				exightDialogItemClickListener.onItemClick(arr.get(which), which);	
			}
			
		}).show();
		
	}
	
	public ExightDialogBuilder(Context context, String title, ArrayList<String> items, OnClickListener dialoglistener) {
		super(context);
		if (title != null) setTitle(title);

		ArrayAdapter<String> adapter = new ArrayAdapter<String>(context, R.layout.dialog_textview, items);
		setAdapter(adapter, dialoglistener);
	}

	public ExightDialogBuilder(Context context) {
		super(context);
		this.context = context;
	}

	public void setItems(ArrayList<String> items, OnClickListener listener) {
		//객체 재활용점검 및 textview 가져오는 불편함
		adapter = new ArrayAdapter<String>(context, R.layout.dialog_textview, items);
		setAdapter(adapter, listener);
	}


	public interface ExightDialogItemClickListener{
		public void onItemClick(String str, int which);
	}


}
