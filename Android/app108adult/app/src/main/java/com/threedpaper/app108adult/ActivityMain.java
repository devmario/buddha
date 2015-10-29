package com.threedpaper.app108adult;

import android.app.ActionBar;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.DialogFragment;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.database.Cursor;
import android.graphics.Color;
import android.media.MediaPlayer;
import android.media.SoundPool;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.provider.MediaStore;
import android.support.v4.app.FragmentManager;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.ListView;
import android.widget.TextView;

import com.threedpaper.model.ModelFrame;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import exight.common.Utility;
import exight.common.Variables;
import exight.lib.ExPreferManager;
import exight.lib.TooSimpleArrayAdater;

public class ActivityMain extends ActivityForBgm implements OnClickListener{

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		//컨텐츠 초기화
		Variables.INIT_LIST_MODEL_FRAMES();
		init();
		initViews();
		setupFull();
	}

	public void init(){

		Variables.BGM_MANAGER = new BgmManager(getApplicationContext());
		int bgType = ExPreferManager.getItemInteger(getApplicationContext(), "bgType");
		int bgId = 0;
		switch(bgType){
			case Variables.BG_TYPE_BIRD:
				bgId = R.raw.birdbgm;
				break;
			case Variables.BG_TYPE_BUG:
				bgId = R.raw.bugbgm;
				break;
			case Variables.BG_TYPE_STREAM:
				bgId = R.raw.waterbgm;
				break;
			case Variables.BG_TYPE_MUSIC:
				bgId = 0;
				String soundPath = ExPreferManager.getItem(getApplicationContext(), "soundPath");
				if(soundPath == "") {
					bgId = R.raw.birdbgm;
					ExPreferManager.setItemInteger(getApplicationContext(),"bgType",bgId);
				}
				try{
					Variables.BGM_MANAGER.playFromSdcard(soundPath);
				}catch (Exception e){
					bgId = R.raw.birdbgm;
					ExPreferManager.setItemInteger(getApplicationContext(),"bgType",Variables.BG_TYPE_BIRD);
//					Utility.makeToast(this, soundPath + "\n" + "파일이 존재하지 않습니다. 다른 음악을 선택해주세요");
//					startActivityForResult(new Intent(this, ActivitySearchMusinInSdcard.class), 1000);
				}
				return;
		}

		if(bgId > 0){
			Variables.BGM_MANAGER.play(bgId);
		}


	}

	@Override
	protected void onPause() {
		super.onPause();

	}

	@Override
	protected void onStop() {
		// TODO Auto-generated method stub
		super.onStop();
		//    	Variables.BGM_MANAGER
	}


	@Override
	protected void onResume() {
		// TODO Auto-generated method stub
		super.onResume();
	}

	@Override
	protected void onDestroy() {
		super.onDestroy();

	}

	public void initViews(){
		findViewById(R.id.main_btnHelp).setOnClickListener(this);
		findViewById(R.id.main_btnRecord).setOnClickListener(this);
		findViewById(R.id.main_btnSetting).setOnClickListener(this);
		findViewById(R.id.main_btnStart).setOnClickListener(this);
	}

    AdapterSelect adapterSelect;
    ListView selectList;
    AlertDialog selectDialog;

    class AdapterSelect extends TooSimpleArrayAdater implements OnClickListener{

        public AdapterSelect(Context context) {
            super(context);
            // TODO Auto-generated constructor stub
        }

        @Override
        public View getView(int position, View convertView, ViewGroup parent) {
            View v = convertView;
            if(v == null){
                v = getLayoutInflater().inflate(R.layout.cell_dialog_select, parent, false);
            }
            Map<String, Object> map = (Map<String, Object>)getListItems().get(position);
            int i = Integer.valueOf((String)map.get("pos"));
            if(map.containsKey("title")) {
                ((TextView) v.findViewById(R.id.select_text)).setText((String) map.get("title"));
            } else {
                ((TextView) v.findViewById(R.id.select_text)).setText(String.valueOf(i + 1) + "배");
            }
            v.setOnClickListener(this);
            v.setOnTouchListener(new View.OnTouchListener() {
                @Override
                public boolean onTouch(View v, MotionEvent event) {
                    if(event.getActionMasked() == MotionEvent.ACTION_DOWN) {
                        v.setBackgroundColor(Color.parseColor("#CCCCCC"));
                    } else if(event.getActionMasked() == MotionEvent.ACTION_UP || event.getActionMasked() == MotionEvent.ACTION_CANCEL) {
                        v.setBackgroundColor(Color.parseColor("#ffffff"));
                    }
                    return false;
                }
            });
            v.setTag(map);
            return v;
        }

        @Override
        public void onClick(View v) {
            if(selectDialog != null) {
                selectDialog.dismiss();
                selectDialog = null;
            }
            Intent i = new Intent(getContext(), ActivityScreen.class);
            Map<String, Object> map = (Map<String, Object>)v.getTag();
            i.putExtra("record_id", -1);
            i.putExtra("pos", Integer.valueOf((String)map.get("pos")));
            startActivity(i);
        }

    }

    private List<Map> loadlist(boolean isNumber){
        Map<String, Object> map;
        List<Map> list = new ArrayList<Map>();
        Variables.INIT_LIST_MODEL_FRAMES();
        String lastTitle = "";
        for(int i = 0; i < Variables.LIST_MODEL_FRAMES.size(); i++) {
            ModelFrame m = Variables.LIST_MODEL_FRAMES.get(i);
            if(!isNumber) {
                if (lastTitle == m.title) {
                    continue;
                }
                lastTitle = m.title;
            }
            map = new HashMap<String, Object>();
            if(!isNumber) {
                map.put("title", m.title);
            }
            map.put("pos", String.valueOf(i));
            list.add(map);
        }
        return list;
    }


    @Override
	public void onClick(View v) {
		switch(v.getId()){

			case R.id.main_btnHelp:
				startActivity(new Intent(this, ActivityHelp.class));
				break;
			case R.id.main_btnRecord:
				startActivity(new Intent(this, ActivityRecord.class));
				break;
			case R.id.main_btnSetting:
				startActivity(new Intent(this, ActivitySetting.class));

				break;
			case R.id.main_btnStart:
				AlertDialog.Builder builder = new AlertDialog.Builder(this);
				// Get the layout inflater
				LayoutInflater inflater = getLayoutInflater();

				// Inflate and set the layout for the dialog
				// Pass null as the parent view because its going in the dialog layout
                View dialogView = inflater.inflate(R.layout.dialog_select, null);
                selectList = (ListView)dialogView.findViewById(R.id.select_list);
                adapterSelect = new AdapterSelect(this);
                selectList.setAdapter(adapterSelect);
                adapterSelect.setListItems(loadlist(false));
                adapterSelect.notifyDataSetChanged();
                Button b = (Button)dialogView.findViewById(R.id.tab_pos);
                b.setOnClickListener(new OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        adapterSelect.setListItems(loadlist(true));
                        adapterSelect.notifyDataSetChanged();
                        selectList.setSelectionAfterHeaderView();
                    }
                });
                b = (Button)dialogView.findViewById(R.id.tab_title);
                b.setOnClickListener(new OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        adapterSelect.setListItems(loadlist(false));
                        adapterSelect.notifyDataSetChanged();
                        selectList.setSelectionAfterHeaderView();
                    }
                });
				builder.setView(dialogView)
						// Add action buttons
						.setNegativeButton("취소", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int id) {
                                // sign in the user ...
                            }
                        });
                builder.setInverseBackgroundForced(true);
                selectDialog = builder.create();
                selectDialog.getWindow().setFlags(WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE, WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE);
                selectDialog.show();
                selectDialog.getWindow().getDecorView().setSystemUiVisibility(getWindow().getDecorView().getSystemUiVisibility());
                selectDialog.getWindow().clearFlags(WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE);
                //startActivity(new Intent(this, ActivityScreen.class));
				break;
		}
	}

	protected void onActivityResult(int requestCode, int resultCode, Intent data) {
		if(requestCode == 1000){
			if(resultCode == RESULT_OK){
				//성공
				String path = data.getStringExtra("soundPath");
				try{
					Variables.BGM_MANAGER.playFromSdcard(path);
					ExPreferManager.setItem(getApplicationContext(), "soundPath", path);
				}catch(Exception e){
					Utility.makeToast(this, path + "\n" + "파일이 존재하지 않습니다");
					startActivityForResult(new Intent(this, ActivitySearchMusinInSdcard.class), 1000);
					;
				}
			}else{
				//취소
			}
		}
	};
}
