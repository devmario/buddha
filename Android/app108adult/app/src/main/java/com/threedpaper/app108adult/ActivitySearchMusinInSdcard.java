package com.threedpaper.app108adult;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import android.content.Context;
import android.content.Intent;
import android.database.Cursor;
import android.os.Bundle;
import android.provider.MediaStore;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.ViewGroup;
import android.widget.ListView;
import android.widget.TextView;
import exight.lib.TooSimpleArrayAdater;

public class ActivitySearchMusinInSdcard extends ActivityForBgm {

	/** Called when the activity is first created. */
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_searchmusic_insdcard);
		
		init();
		initViews();
		List list = loadlist();
		adapterMusicList.setListItems(list);
		adapterMusicList.notifyDataSetChanged();
	}
	
	private void init(){
		 
	}
	ListView lvItems;
	AdapterMusicList adapterMusicList;
	private void initViews(){
		lvItems = (ListView)findViewById(R.id.searchMusicInSdcard_lv);
		adapterMusicList = new AdapterMusicList(this);
		lvItems.setAdapter(adapterMusicList);
	}

	private List<Map> loadlist(){
		Map<String, Object> map;
		List<Map> list = new ArrayList<Map>();
		int cnt = 0;
		String[] mcursor = new String[]{
				MediaStore.Audio.Media._ID,
				MediaStore.Audio.Media.DATA,
				MediaStore.Audio.Media.DISPLAY_NAME};
		Cursor cur = getContentResolver().query(MediaStore.Audio.Media.EXTERNAL_CONTENT_URI, mcursor, null,null,null);
		if (cur.moveToFirst()){
			String title, path;
			int titlecolumn = cur.getColumnIndex(MediaStore.Audio.Media.DISPLAY_NAME);
			int dataColumn = cur.getColumnIndex(MediaStore.Audio.Media.DATA);
			do{
				map = new HashMap<String, Object>();
				map.put("title", cur.getString(titlecolumn));
				map.put("path", cur.getString(dataColumn));
				
				list.add(map);
				cnt ++;
			} while(cur.moveToNext());
		}

		return list;
	}
	
	class AdapterMusicList extends TooSimpleArrayAdater implements OnClickListener{

		public AdapterMusicList(Context context) {
			super(context);
			// TODO Auto-generated constructor stub
		}

		@Override
		public View getView(int position, View convertView, ViewGroup parent) {
			View v = convertView;
			if(v == null){
				v = getLayoutInflater().inflate(android.R.layout.simple_list_item_1, null);
			}
			
			Map<String, Object> map = (Map<String, Object>)getListItems().get(position);
			((TextView)v).setText((String)map.get("title"));
//			
			v.setOnClickListener(this);
			v.setTag(map.get("path"));
			return v;
		}
		
		@Override
		public void onClick(View v) {
			String path = (String)v.getTag();
			Intent i = new Intent();
			setResult(RESULT_OK, i.putExtra("soundPath", path));
			finish();
		}
		
	}

}
