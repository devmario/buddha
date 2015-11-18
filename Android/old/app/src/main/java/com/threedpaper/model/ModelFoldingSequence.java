package com.threedpaper.model;

import android.content.Context;
import android.util.Log;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import java.text.DecimalFormat;
import java.text.NumberFormat;

/**
 * Created by jangwonhee on 15. 11. 17..
 */
public class ModelFoldingSequence {
    public String content;
    public int[] imgFrameIds;
    public int soundId;

    public ModelFoldingSequence(Context context, JSONObject how_to, int index) {
        try {
            JSONArray desc = how_to.getJSONArray("desc");
            JSONArray seq = how_to.getJSONArray("seq");
            this.content = desc.getString(index);
            this.soundId = context.getResources().getIdentifier("folding" + String.valueOf(index + 1), "raw", context.getPackageName());
            Log.d("ModelFoldingSequence", this.content);
            int start = Integer.valueOf(seq.getString(index));
            int end = Integer.valueOf(seq.getString(index + 1));
            imgFrameIds = new int[end - start + 1];
            NumberFormat nf = new DecimalFormat("00");
            int cnt = 0;
            for(int i = start; i <= end; i++) {
                imgFrameIds[cnt] = context.getResources().getIdentifier("yong" + nf.format(i), "drawable", context.getPackageName());
                cnt++;
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }
}