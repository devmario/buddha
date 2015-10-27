package com.buddha;

public class ActivityState {
	public boolean Destroyed = false;
	public MainLoop MainLoop;

	public ActivityState(AppState appState) {
		MainLoop = new MainLoop(appState);
	}
}
