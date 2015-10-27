package com.buddha;

import android.annotation.SuppressLint;
import android.annotation.TargetApi;
import android.os.Build;

public class MainLoop
{
    private final boolean resurrected;

    public MainLoop(AppState appState)
    {
    	resurrected = appState.HasCreated;
    }

    public void Start()
    {
        ActivityNativeEntryPoints.cppOnStartMainLoop(false, false, resurrected);
    }

    public void ForceForNFrames(int n) {
        com.buddha.ActivityNativeEntryPoints.cppForceRedraw(5);
    }
}
