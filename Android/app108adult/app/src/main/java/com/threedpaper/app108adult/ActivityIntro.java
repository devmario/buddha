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

        int isFirstLoad = ExPreferManager.getItemInteger(this, "isFirstLoad");
        if(isFirstLoad <= 0){
            //처음이다
            ExPreferManager.setItemInteger(this, "foldingSpeed", 3);
            ExPreferManager.setItemInteger(this, "startType", Variables.START_TYPE_CONTINUE);
            ExPreferManager.setItemInteger(this, "voiceType", Variables.VOICE_TYPE_MAN);
            ExPreferManager.setItemInteger(this, "voiceVolumn", 5);
            ExPreferManager.setItemInteger(this, "bgType", Variables.BG_TYPE_BIRD);
            ExPreferManager.setItemInteger(this, "bgVolumn", 5);
            ExPreferManager.setItemInteger(this, "isFirstLoad", 1);
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
