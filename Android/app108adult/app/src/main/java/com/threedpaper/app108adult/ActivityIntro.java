package com.threedpaper.app108adult;

import exight.common.Variables;
import exight.lib.ExPreferManager;
import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;

public class ActivityIntro extends Activity {

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_intro);

        int isFirstLoad = ExPreferManager.getItemInteger(getApplicationContext(), "isFirstLoad");
        if(isFirstLoad <= 0){
            //처음이다
            ExPreferManager.setItemInteger(getApplicationContext(), "foldingSpeed", 3);
            ExPreferManager.setItemInteger(getApplicationContext(), "startType", Variables.START_TYPE_CONTINUE);
            ExPreferManager.setItemInteger(getApplicationContext(), "voiceType", Variables.VOICE_TYPE_MAN);
            ExPreferManager.setItemInteger(getApplicationContext(), "voiceVolumn", 5);
            ExPreferManager.setItemInteger(getApplicationContext(), "bgType", Variables.BG_TYPE_BIRD);
            ExPreferManager.setItemInteger(getApplicationContext(), "bgVolumn", 5);
            ExPreferManager.setItemInteger(getApplicationContext(), "isFirstLoad", 1);
        }else{
            ;
        }

        new Handler(){
            public void dispatchMessage(android.os.Message msg) {
                goMain();
                finish();
            };
        }.sendEmptyMessageDelayed(0, 0);
    }

    public void goMain(){
        startActivity(new Intent(this, ActivityMain.class));
    }

}
