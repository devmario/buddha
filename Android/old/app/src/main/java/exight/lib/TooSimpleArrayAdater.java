package exight.lib;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;

public abstract class TooSimpleArrayAdater extends BaseAdapter{
	
	private List listItems;
	private Context context;
	private LayoutInflater lf;
	public TooSimpleArrayAdater(Context context, List listItems) {
		this.listItems = listItems;
		this.context = context;
		init();
	}	
	
	public TooSimpleArrayAdater(Context context) {		
		this.context = context;
		listItems = new ArrayList();
		init();
	}
	
	private void init(){
		lf = (LayoutInflater)context.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
	}
	
	public LayoutInflater getLayoutInflater(){
		return lf;
	}
	
	public void setListItems(List listItems) {
		this.listItems = listItems;
		notifyDataSetChanged();
	}
	
	public Context getContext() {
		return context;
	}
	
	public List getListItems() {
		return listItems;
	}
	
	public void addListToFront(List listItems){
		List tempListItems = this.listItems;
		tempListItems.addAll(0, listItems);		
		setListItems(tempListItems);
	}
	
	public void addListToBottom(List listItems){
		List tempListItems = this.listItems;
		tempListItems.addAll(listItems);		
		setListItems(tempListItems);
	}	
	
	@Override
	public int getCount(){
		return listItems.size();
	}

	@Override
	final public Object getItem(int position) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	final public long getItemId(int position) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	abstract public View getView(int position, View convertView, ViewGroup parent);

}
