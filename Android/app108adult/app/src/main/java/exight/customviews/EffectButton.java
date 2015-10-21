package exight.customviews;

import android.content.Context;
import android.media.MediaPlayer;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.animation.Animation;
import android.view.animation.ScaleAnimation;
import android.widget.Button;

import com.threedpaper.app108adult.R;

public class EffectButton extends Button{
	
	private static MediaPlayer mp;
	
	public EffectButton(Context context, AttributeSet attrs, int defStyle) {
		super(context, attrs, defStyle);
		init(context);
	}
	public EffectButton(Context context) {
		super(context);
		init(context);
	}
	public EffectButton(Context context, AttributeSet attrs) {
		super(context, attrs);
		init(context);
	}

	private ScaleAnimation anim;
	private void init(Context context){
		anim = initAnimation();
		
	}
	boolean isDown = false;
	@Override
	public boolean onTouchEvent(MotionEvent event) {
		switch(event.getAction()){
		case MotionEvent.ACTION_DOWN:
			isDown = true;
			break;
		case MotionEvent.ACTION_OUTSIDE:
			break;
		case MotionEvent.ACTION_UP:
			onClick();
			break;
		}
		return super.onTouchEvent(event);
	}
	
	private void onClick(){
		doEffectOfAnim();
		doEffectOfSound();
	}
	

	
	//애니메이션 설정
	private ScaleAnimation initAnimation(){
		ScaleAnimation anim;
		anim = new ScaleAnimation(1.0f, 1.1f, 1.0f, 1.1f, ScaleAnimation.RELATIVE_TO_SELF, 0.5f, ScaleAnimation.RELATIVE_TO_SELF, 0.5f);
		anim.setDuration(100);
		anim.setRepeatCount(1);
		anim.setRepeatMode(Animation.REVERSE);
		anim.setFillAfter(true);
		anim.setFillEnabled(false);
		
		return anim;
		
	}
	
	private void doEffectOfAnim(){
		this.startAnimation(anim);
	}
	
	private void doEffectOfSound(){
		if(mp != null){
			mp.seekTo(0);
			mp.start();
			
		}else{
			mp = MediaPlayer.create(getContext(), R.raw.click);
			mp.setLooping(false);
			mp.setVolume(1f, 1f);
			mp.start();
		}
//		
	}

}
