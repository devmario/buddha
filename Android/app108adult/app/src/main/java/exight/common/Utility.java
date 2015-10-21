package exight.common;

import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.net.URLEncoder;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.sql.Timestamp;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.PendingIntent;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.PackageManager.NameNotFoundException;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Bitmap.CompressFormat;
import android.graphics.Bitmap.Config;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.PorterDuffXfermode;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.provider.MediaStore;
import android.provider.MediaStore.MediaColumns;
import android.telephony.TelephonyManager;
import android.text.Spannable;
import android.text.SpannableStringBuilder;
import android.text.style.ForegroundColorSpan;
import android.view.View;
import android.view.View.MeasureSpec;
import android.view.inputmethod.InputMethodManager;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;


public class Utility {

	public static int getPrevMonth(int prevCount){
		int month = Calendar.getInstance().get(Calendar.MONTH) + 1;
		int r = month - prevCount;
		if(r <= 0){
			r = 12 - r;
		}
		return r;
	}

	/**핸드폰 번호 가져오긔*/
	public static String getPhoneNumber(Context context){
		TelephonyManager mTelephonyMgr = (TelephonyManager) context.getSystemService(Context.TELEPHONY_SERVICE);
		String imsi = mTelephonyMgr.getSubscriberId();
		String imei = mTelephonyMgr.getDeviceId();
		String phoneNumber = mTelephonyMgr.getLine1Number();

		phoneNumber = phoneNumber.replace("+82", "0");

		return phoneNumber;
	}

	public static final void writeMessageToSdcard(Activity activity, File parentPath, String message){
		message = "facebook error : " + message + " / " + Utility.getCurrentDateTime() + "\n";
		File f = new File(parentPath, "error_report.txt");
		FileOutputStream fos;
		try {
			fos = new FileOutputStream(f, true);
			fos.write(message.getBytes());
			fos.close();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

	public static String getMoneyString(int value){
		return getMoneyString(value + "");
	}
	/**4자리수마다 쉼표가 포함된 문자열 리턴*/
	public static String getMoneyStringWithWon(String str){
		return getMoneyString(str) + "원";
	}
	public static String getMoneyStringWithWon(int value){
		return getMoneyString(value) + "원";
	}
	public static String getMoneyString(String str){

		try{
			int commaCount = str.length() / 3;
			int remainder = str.length() % 3;
			if(remainder == 0){
				commaCount --;
			}

			System.out.println(commaCount  + "");

			char[] strParsed = new char[str.length() + commaCount];
			for(int i = str.length() - 1 , count = 1, z = strParsed.length - 1; z >= 0; z--, count++){

				if(count % 4 == 0 && count != 0){
					strParsed[z] = ',';
				}else{
					strParsed[z] = str.charAt(i);
					i--;
				}
			}
			String s = new String(strParsed);

			return s;
		}catch (Exception e) {
			return "-";
		}
	}
	public static ProgressDialog showModalDialog(Context context, String message){
		ProgressDialog pd =  ProgressDialog.show(context, "", message);
		pd.setCancelable(true);
		return pd;
	}

	static Typeface typeFaceNanum;
	static Typeface typeFaceNanumBold;

	public static Typeface getNanumBoldTypeface(Context context){
		if( typeFaceNanumBold == null ){
			typeFaceNanumBold = Typeface.createFromAsset(context.getAssets(), "fonts/NanumGothicBold.ttf");
		}
		return typeFaceNanumBold;
	}
	public static Typeface getNanumTypeface(Context context){
		if( typeFaceNanum == null){
			typeFaceNanum = Typeface.createFromAsset(context.getAssets(), "fonts/NanumGothic.ttf");
		}
		return typeFaceNanum;
	}

	public static String getNetworkConnectionType(Context context){

		ConnectivityManager cManager;
		NetworkInfo mobile;
		NetworkInfo wifi;

		cManager=(ConnectivityManager)context.getSystemService(Context.CONNECTIVITY_SERVICE);
		mobile = cManager.getNetworkInfo(ConnectivityManager.TYPE_MOBILE);
		wifi = cManager.getNetworkInfo(ConnectivityManager.TYPE_WIFI);

		if(mobile.isConnected()){
			return "3g";
		}else if(wifi.isConnected()){
			return "wifi";
		}else{
			return null;
		}

	}

	public static void openMarketDownloadPage(Context context){
		Uri uri = Uri.parse("market://details?id=" + getPackageName(context));
		Intent intent = new Intent(Intent.ACTION_VIEW, uri);
		context.startActivity(intent);
	}

	//	占싱뱄옙占쏙옙 占쏙옙占쏙옙

	public static Bitmap getRoundedCornerBitmap(Bitmap bitmap) {
		Bitmap output = Bitmap.createBitmap(bitmap.getWidth(),
				bitmap.getHeight(), Config.ARGB_4444);
		Canvas canvas = new Canvas(output);
		final int color = 0xff424242;
		final Paint paint = new Paint();
		final Rect rect = new Rect(0, 0, bitmap.getWidth(), bitmap.getHeight());
		final RectF rectF = new RectF(rect);
		final float roundPx = 14;
		paint.setAntiAlias(true);
		canvas.drawARGB(0, 0, 0, 0);
		paint.setColor(color);
		canvas.drawRoundRect(rectF, roundPx, roundPx, paint);
		paint.setXfermode(new PorterDuffXfermode(android.graphics.PorterDuff.Mode.SRC_IN));
		canvas.drawBitmap(bitmap, rect, rect, paint);
		return output;
	}


	public static TextView findTextViewById(Activity v, int id){
		return (TextView)v.findViewById(id);
	}

	public static ImageView findImageViewById(Activity v, int id){
		return (ImageView)v.findViewById(id);
	}

	public static TextView findTextViewById(Dialog v, int id){
		return (TextView)v.findViewById(id);
	}

	public static TextView findTextViewById(View v, int id){
		return (TextView)v.findViewById(id);
	}

	public static ImageView findImageViewById(View v, int id){
		return (ImageView)v.findViewById(id);
	}

	/**캐占쏙옙占실댐옙 占쏙옙占?占쏙옙占쏙옙占쏙옙占쏙옙*/
	public static File getCacheDir(Context context, String tempDirPath){
		File cacheDir;
		if (android.os.Environment.getExternalStorageState().equals(android.os.Environment.MEDIA_MOUNTED))
			cacheDir=new File(android.os.Environment.getExternalStorageDirectory(), tempDirPath);
		else
			cacheDir= context.getApplicationContext().getCacheDir();
		if(!cacheDir.exists())
			cacheDir.mkdirs();

		return cacheDir;
	}

	/** 占쌕뱄옙占쏙옙 占쏙옙티占쏙옙티 호占쏙옙*/
	public static void callImageAlbumIntent(Activity activity, int id){
		Intent intent = new Intent(
				MediaStore.ACTION_IMAGE_CAPTURE);
		intent.setAction(Intent.ACTION_GET_CONTENT);
		intent.setType("image/*");

		activity.startActivityForResult(intent, id);
	}

	/** 占쏙옙占쏙옙트키占쏙옙占쏙옙 占승울옙占쏙옙*/
	public static void setSoftKeyboardVisiblity(Context context, EditText etTarget, boolean on){
		if(on == true){
			InputMethodManager imm = (InputMethodManager)context.getSystemService(Context.INPUT_METHOD_SERVICE);
			imm.showSoftInput(etTarget, InputMethodManager.SHOW_FORCED);
			//imm.toggleSoftInput(InputMethodManager.SHOW_FORCED, InputMethodManager.HIDE_IMPLICIT_ONLY);	
		}else{
			InputMethodManager imm = (InputMethodManager)context.getSystemService(Context.INPUT_METHOD_SERVICE);
			imm.hideSoftInputFromWindow(etTarget.getWindowToken(), 0);

		}

	}

	/** 占쏙옙占쏙옙 占쏙옙占쏙옙占?1dp占쏙옙 占쏙옙占싫쇽옙占쏙옙占쏙옙 占쏙옙환*/
	public static float getSystemPixelByDp(Context context){
		return context.getResources().getDisplayMetrics().density; //1dp占쏙옙 占쏙옙 占쏙옙pixel占싸곤옙.
	}

	/**占쌉력뱄옙占쏙옙 占쏙옙치占쏙옙 dp占쏙옙 占쏙옙환*/
	public static int getPixelByDp(Context context, int dp){
		return (int)getSystemPixelByDp(context) * dp;
	}

	public static void makeToast(Context context, String text){
		Toast.makeText(context, text, 1000).show();
	}

	public static String getRealPathFromURI(Activity act, Uri contentUri){
		String [] proj={MediaColumns.DATA};
		Cursor cursor = act.managedQuery( contentUri, proj, null, null, null);
		int column_index = cursor.getColumnIndexOrThrow(MediaColumns.DATA);
		cursor.moveToFirst();
		return cursor.getString(column_index);
	}

	//占쌤몌옙占쏙옙 占쏙옙占쏙옙占쏙옙 占쏙옙占쏙옙占쏙옙占쏙옙
	public static String getDeviceID(Context context) {
		TelephonyManager tManager = (TelephonyManager)context.getSystemService(Context.TELEPHONY_SERVICE);
		return tManager.getDeviceId();
	}

	//占쏙옙占쏙옙 占시곤옙 占쏙옙占쏙옙占쏙옙占쏙옙 0000-00-00 00:00:00
	public static String getCurrentDateTime(){
		SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");

		return dateFormat.format(Calendar.getInstance().getTime());

	}

	public static String getCurrentDate(){
		SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");

		return dateFormat.format(Calendar.getInstance().getTime());

	}

	public static void setTextViewBold(TextView tv){
		tv.setPaintFlags(tv.getPaintFlags() | Paint.FAKE_BOLD_TEXT_FLAG);
	}

	/**format占쏙옙 yyyy-MM-dd HH:mm:ss 占쏙옙占쏙옙占쏙옙占?占싼깍옙占쏙옙*/
	public static String getDateFromSecond(int sec, String format){

		SimpleDateFormat dateFormat = new SimpleDateFormat(format);
		String s = dateFormat.format(new Date(1000 * sec));

		return s;

	}

	public static void unRegisterC2DM(Context context){
		Intent unregIntent = new Intent("com.google.android.c2dm.intent.UNREGISTER");

		unregIntent.putExtra("app", PendingIntent.getBroadcast(context, 0, new Intent(), 0));

		context.startService(unregIntent);
	}



	//decodes image and scales it to reduce memory consumption 
	public static Bitmap decodeImageAndReduceSize(File f, int targetSize){
		try {
			// Decode image size     
			BitmapFactory.Options o = new BitmapFactory.Options();
			o.inJustDecodeBounds = true;
			BitmapFactory.decodeStream(new FileInputStream(f),null,o);

			//The new size we want to scale to 
			final int REQUIRED_SIZE=targetSize;

			//Find the correct scale value. It should be the power of 2. 
			int width_tmp=o.outWidth, height_tmp=o.outHeight;
			int scale=1;
			while(true){
				if(width_tmp / 2 < REQUIRED_SIZE )
					break;

				width_tmp/=2;
				height_tmp/=2;
				scale*=2;
			}          //Decode with inSampleSize    

			BitmapFactory.Options o2 = new BitmapFactory.Options();
			o2.inSampleSize=scale;

			return BitmapFactory.decodeStream(new FileInputStream(f), null, o2);

		} catch (FileNotFoundException e) {

		}
		return null;
	}

	public static Bitmap decodeImageAndReduceSizeOri(File f, int targetSize){
		try {
			// Decode image size     
			BitmapFactory.Options o = new BitmapFactory.Options();
			o.inJustDecodeBounds = true;
			BitmapFactory.decodeStream(new FileInputStream(f),null,o);

			//The new size we want to scale to 
			final int REQUIRED_SIZE=targetSize;

			//Find the correct scale value. It should be the power of 2. 
			int width_tmp=o.outWidth, height_tmp=o.outHeight;
			int scale=1;
			while(true){
				if(width_tmp / 2 < REQUIRED_SIZE || height_tmp / 2 < REQUIRED_SIZE)
					break;

				width_tmp/=2;
				height_tmp/=2;
				scale*=2;
			}          //Decode with inSampleSize    

			BitmapFactory.Options o2 = new BitmapFactory.Options();
			o2.inSampleSize=scale;

			return BitmapFactory.decodeStream(new FileInputStream(f), null, o2);

		} catch (FileNotFoundException e) {

		}
		return null;
	}

	public static Bitmap decodeImageAndReduceSize(InputStream inputStreamSrc){
		try {

			// Decode image size     
			BitmapFactory.Options o = new BitmapFactory.Options();
			o.inJustDecodeBounds = true;
			BitmapFactory.decodeStream(inputStreamSrc,null,o);

			//The new size we want to scale to 
			final int REQUIRED_SIZE=70;

			//Find the correct scale value. It should be the power of 2. 
			int width_tmp=o.outWidth, height_tmp=o.outHeight;
			int scale=1;
			while(true){
				if(width_tmp/2<REQUIRED_SIZE || height_tmp/2<REQUIRED_SIZE)
					break;

				width_tmp/=2;
				height_tmp/=2;
				scale*=2;
			}          //Decode with inSampleSize    

			BitmapFactory.Options o2 = new BitmapFactory.Options();
			o2.inSampleSize=scale;

			return BitmapFactory.decodeStream(inputStreamSrc, null, o2);

		} catch (Exception e) {

		}
		return null;
	}




	//File -> Bitmap
	public static Bitmap getBitmapFromFile(File f){
		return BitmapFactory.decodeFile(f.getPath());
	}

	//Bitmap -> Drawable
	public static Drawable getDrawableFromBitmap(Bitmap bitmap){
		return (Drawable)new BitmapDrawable(bitmap);
	}


	public static Bitmap imageDownLoad(String imageUrl){
		try {
			URL url = new URL(imageUrl);
			URLConnection conn = url.openConnection();
			conn.connect();
			BufferedInputStream  bis = new BufferedInputStream(conn.getInputStream());
			Bitmap bm = BitmapFactory.decodeStream(bis);
			bis.close();
			return bm;

		} catch (Exception e) {
			return null;

		}
	}

	public static Bitmap getBitmapFromWeb(String httpAddress){
		Bitmap bm = null;

		try {
			URL aURL = new URL(httpAddress);
			URLConnection conn = aURL.openConnection();
			conn.connect();
			InputStream is = conn.getInputStream();
			BufferedInputStream bis = new BufferedInputStream(is);
			bm = BitmapFactory.decodeStream(bis);
			bis.close();
			is.close();

		} catch (IOException e) {

		}

		return bm;
	}


	public static void sendInquireEmail(Context context, String email, String subject, String text){

		Intent i = new Intent(Intent.ACTION_VIEW, Uri.parse("mailto:"+email));

		i.putExtra(Intent.EXTRA_SUBJECT, subject);
		i.putExtra(Intent.EXTRA_TEXT,
				text  );


		context.startActivity(i);

	}

	public static void openUrlWithNewPage(Activity act, String url){
		Intent i = new Intent(Intent.ACTION_VIEW, Uri.parse(url));
		act.startActivity(i);
	}

	public static void openPhoneCallIntent(Context context, String phone){
		Intent intent = new Intent(Intent.ACTION_CALL, Uri.parse("tel:" + phone));

		context.startActivity(intent);

	}

	public static Timestamp getCurrentTimeStamp(){
		Calendar calendar = Calendar.getInstance();
		return new java.sql.Timestamp(calendar.getTime().getTime());
	}

	public interface DialogChoiceYes {
		public boolean choiceYes();

	}

	public static void makeYesDialog(Context context, String title, String yesString, final DialogChoiceYes dialogChoiceYes) {
		AlertDialog.Builder builder = new AlertDialog.Builder(context);

		if(title.equals("")){

		}else{
			builder.setMessage(title);
		}

		builder.setCancelable(false)
				.setPositiveButton(yesString,
						new DialogInterface.OnClickListener() {
							public void onClick(DialogInterface dialog, int id) {
								if(dialogChoiceYes.choiceYes() == true){
									dialog.dismiss();
								}
							}
						})
		;
		AlertDialog alert = builder.create();
		alert.show();
	}


	public interface DialogChoiceYesNo {
		public boolean choiceYes();
		public boolean choiceNo();

	}

	public static void makeYesNoDialog(Context context, String title, String yesString, String noString, final DialogChoiceYesNo dialogChoiceYesNo) {
		AlertDialog.Builder builder = new AlertDialog.Builder(context);

		if(title.equals("")){

		}else{
			builder.setMessage(title);
		}


		builder.setCancelable(false)
				.setPositiveButton(yesString,
						new DialogInterface.OnClickListener() {
							public void onClick(DialogInterface dialog, int id) {
								if(dialogChoiceYesNo.choiceYes() == true){
									dialog.dismiss();
								}
							}
						})
				.setNegativeButton(noString,
						new DialogInterface.OnClickListener() {
							public void onClick(DialogInterface dialog, int id) {
								if(dialogChoiceYesNo.choiceNo() == true){
									dialog.dismiss();
								}
							}
						});
		AlertDialog alert = builder.create();
		alert.show();
	}

	public static void copyStream(InputStream is, OutputStream os)
	{
		final int buffer_size=1024;
		try
		{
			byte[] bytes=new byte[buffer_size];
			for(;;)
			{
				int count=is.read(bytes, 0, buffer_size);
				if(count==-1)
					break;
				os.write(bytes, 0, count);
			}
		}
		catch(Exception ex){}
	}

	public static String encodeToUTF8(String src){

		if(src == null)
			return null;

		String dest = null;
		try{
			dest = URLEncoder.encode(src, "UTF-8");
		}catch(Exception e){
			dest = null;
		}
		return dest;
	}

	/** 占십몌옙 00:00占쏙옙占승뤄옙 占쏙옙환 */
	public static String getMinuteStringFromSecond(int mSec){
		int min = mSec / 60;
		int sec = mSec % 60;

		String rMin = min + "";
		String rSec = sec + "";

		if(min < 10){
			rMin = "0" + rMin;
		}

		if(sec < 10){
			rSec = "0" + rSec;
		}
		return rMin + ":" + rSec;
	}

	//占쏙옙占쏙옙 占쏙옙占싸듸옙
	//HttpFileUpload("http://shituation.net/rightnow/upload_user_image.php", "", filePath, "thisfile");
	public static String httpFileUpload(String urlString, String params, String fileName, String nameToBeChanged) {
		FileInputStream mFileInputStream = null;
		URL connectUrl = null;

		String lineEnd = "\r\n";
		String twoHyphens = "--";
		String boundary = "*****";


		String name = nameToBeChanged;
		String returnString = null;
		try {

			mFileInputStream = new FileInputStream(fileName);
			connectUrl = new URL(urlString);

			// open connection 
			HttpURLConnection conn = (HttpURLConnection)connectUrl.openConnection();
			conn.setDoInput(true);
			conn.setDoOutput(true);
			conn.setUseCaches(false);
			conn.setRequestMethod("POST");
			conn.setRequestProperty("Connection", "Keep-Alive");
			conn.setRequestProperty("Content-Type", "multipart/form-data;boundary=" + boundary );

			// write data
			DataOutputStream dos = new DataOutputStream(conn.getOutputStream());
			dos.writeBytes(twoHyphens + boundary + lineEnd);
			dos.writeBytes("Content-Disposition: form-data; name=\"" + "nick" + "\"" + lineEnd);
			dos.writeBytes(lineEnd);

			dos.writeBytes( URLEncoder.encode(name, "utf-8") );
			//
			dos.writeBytes(lineEnd);
			dos.writeBytes(twoHyphens + boundary + lineEnd);
			dos.writeBytes("Content-Disposition: form-data; name=\"uploadedfile\";filename=\"" + fileName+"\"" + lineEnd);
			dos.writeBytes(lineEnd);

			int bytesAvailable = mFileInputStream.available();
			int maxBufferSize = 1024;
			int bufferSize = Math.min(bytesAvailable, maxBufferSize);

			byte[] buffer = new byte[bufferSize];
			int bytesRead = mFileInputStream.read(buffer, 0, bufferSize);

			// read image
			while (bytesRead > 0) {
				dos.write(buffer, 0, bufferSize);
				bytesAvailable = mFileInputStream.available();
				bufferSize = Math.min(bytesAvailable, maxBufferSize);
				bytesRead = mFileInputStream.read(buffer, 0, bufferSize);
			}

			dos.writeBytes(lineEnd);
			dos.writeBytes(twoHyphens + boundary + twoHyphens + lineEnd);

			// close streams
			mFileInputStream.close();
			dos.flush(); // finish upload...			

			// get response
			int ch;
			InputStream is = conn.getInputStream();
			StringBuffer b =new StringBuffer();
			while( ( ch = is.read() ) != -1 ){
				b.append( (char)ch );
			}
			returnString = b.toString();
			dos.close();

		} catch (Exception e) {
			returnString = "false";
		}

		return returnString;

	}

	static public String getRealFileNameWithFrontString(String fileName, String frontString){

		Calendar calendar = Calendar.getInstance();
		String time = (new java.sql.Timestamp(calendar.getTime().getTime()) ).toString();
		//time = time.substring(time.indexOf(" ")+1);
		time = time.substring(0, time.indexOf("."));
		time = time.replaceAll(":", "-");
		time = time.replaceAll(" ", "-");

		String fileExtensionName = "";

		fileExtensionName = fileName.substring(fileName.lastIndexOf('.'));


		return frontString + time + fileExtensionName;

	}


	//占쏙옙트占쏙옙占쏙옙 占쏙옙占쏙옙트占쌘듸옙占?占쏙옙환
	public static byte[] bitmapToByteArray( Bitmap $bitmap ) {
		ByteArrayOutputStream stream = new ByteArrayOutputStream() ;
		$bitmap.compress( CompressFormat.JPEG, 100, stream) ;
		byte[] byteArray = stream.toByteArray() ;
		return byteArray ;
	}

	//占쏙옙占쏙옙트占쌘드를 占쏙옙트占쏙옙占쏙옙占쏙옙 占쏙옙환
	public static Bitmap byteArrayToBitmap( byte[] $byteArray ) {
		Bitmap bitmap = BitmapFactory.decodeByteArray( $byteArray, 0, $byteArray.length ) ;
		return bitmap ;
	}

	//특占쏙옙 占썰를 캡占쏙옙
	public static Bitmap getSnapshotFromView(View v){
		v.setDrawingCacheEnabled(true);  // 占싱곤옙 占쏙옙占쏙옙占쏙옙 占싫듸옙.  


		v.measure(MeasureSpec.makeMeasureSpec(0, MeasureSpec.UNSPECIFIED),  MeasureSpec.makeMeasureSpec(0, MeasureSpec.UNSPECIFIED));
		v.layout(0, 0, v.getMeasuredWidth(), v.getMeasuredHeight());
		v.buildDrawingCache(true);

		Bitmap b = Bitmap.createBitmap(v.getDrawingCache());

		v.setDrawingCacheEnabled(false); // clear drawing cache
		return b;
	}


	public static long getDateTimeByStringFormat(String dateTime){
		SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
		long timeMs = 0;
		try {
			timeMs = dateFormat.parse(dateTime).getTime();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return timeMs;
	}

	public static void startActivity(Context context, Class<?> cls){
		Intent i = new Intent(context, cls);
		context.startActivity(i);
	}

	public static SpannableStringBuilder setStringColor(String character, String color){
		final SpannableStringBuilder sp = new SpannableStringBuilder(character);
		sp.setSpan(new ForegroundColorSpan(Color.parseColor(color)), 0, character.length(), Spannable.SPAN_EXCLUSIVE_EXCLUSIVE);

		return sp;

	}

	//占쏙옙占쏙옙 占시곤옙 占쏙옙占쏙옙占쏙옙占쏙옙 0000-00-00 00:00:00
	public static String getTimeStringByLongTime(String time, String dateFormat){
		try{
			SimpleDateFormat dateFor = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
			long timeMs = 0;

			timeMs = dateFor.parse(time).getTime();

			dateFor = new SimpleDateFormat(dateFormat);
			return dateFor.format(timeMs);
		}catch(Exception e){
			return "null";
		}

	}

	public static String getAgeByBirth(String birthday) throws Exception{
		SimpleDateFormat format = new SimpleDateFormat("yyyy.MM.dd");
		Date birthdate = null;
		try {
			birthdate = format.parse(birthday);
		} catch (ParseException e) {
			e.printStackTrace();
		}

		Calendar birth = new GregorianCalendar();
		Calendar today = new GregorianCalendar();

		birth.setTime(birthdate);
		today.setTime(new Date());

		int age = today.get(Calendar.YEAR) - birth.get(Calendar.YEAR);

		return Integer.toString(age);

	}

	public static String getAppVersion(Activity context) {

		PackageManager pm = context.getPackageManager();
		try {
			PackageInfo packageInfo = pm.getPackageInfo(context.getPackageName(), 0);
			return Integer.toString(packageInfo.versionCode);

		} catch (NameNotFoundException e) {
			return "占쏙옙占쏙옙확占싸울옙占쏙옙";
		}

	}

	/**占쏙옙키占쏙옙 占싱몌옙占쏙옙 占쏙옙占쏙옙占승댐옙*/
	public static String getPackageName(Context context) {
		return context.getPackageName();

	}

	public static String getAppVersionName(Activity context) {

		PackageManager pm = context.getPackageManager();
		try {
			PackageInfo packageInfo = pm.getPackageInfo(context.getPackageName(), 0);
			return (packageInfo.versionName);

		} catch (NameNotFoundException e) {
			return "占쏙옙占쏙옙확占싸울옙占쏙옙";
		}

	}

	public static String md5(String in) {

		MessageDigest digest;

		try {

			digest = MessageDigest.getInstance("MD5");

			digest.reset();

			digest.update(in.getBytes());

			byte[] a = digest.digest();

			int len = a.length;

			StringBuilder sb = new StringBuilder(len << 1);

			for (int i = 0; i < len; i++) {

				sb.append(Character.forDigit((a[i] & 0xf0) >> 4, 16));

				sb.append(Character.forDigit(a[i] & 0x0f, 16));

			}

			return sb.toString();

		} catch (NoSuchAlgorithmException e) { e.printStackTrace(); }

		return null;

	}

	public static String encryptDataWithMD5(String str) {

		StringBuilder sb = new StringBuilder();

		try{

			MessageDigest md5 = MessageDigest.getInstance("MD5");
			md5.update(str.getBytes());
			byte[] md5encrypt = md5.digest();

			for(int i = 0 ; i < md5encrypt.length ; i++){

				sb.append(Integer.toHexString((int)md5encrypt[i] & 0xFF));

			}

		} catch (Exception e) {

			e.printStackTrace();

		}

		return sb.toString();

	}

	public static String getDayOfTheWeekFromDate(String date, String format){
		SimpleDateFormat dateFormat = new SimpleDateFormat(format);
		try{
			long time = dateFormat.parse(date).getTime();
			Calendar c = Calendar.getInstance();
			c.setTimeInMillis(time);
			String conversionDay = "";

			switch (c.get(Calendar.DAY_OF_WEEK)) {
				case 1 :
					conversionDay = "占쏙옙" ;
					break ;
				case 2 :
					conversionDay = "占쏙옙" ;
					break ;
				case 3 :
					conversionDay = "화" ;
					break ;
				case 4 :
					conversionDay = "占쏙옙" ;
					break ;
				case 5 :
					conversionDay = "占쏙옙" ;
					break ;
				case 6 :
					conversionDay = "占쏙옙" ;
					break ;
				case 7 :
					conversionDay = "占쏙옙" ;
			}
			return conversionDay;

		}catch(Exception e){

		}
		return "";
	}

	/** yyyy-MM-dd HH:mm:ss 占쏙옙占쏙옙占?占쏙옙占쏙옙 占쌨아쇽옙 yyyy-MM-dd 占십뤄옙 占쏙옙占쏙옙占쏙옙*/
	public static String getTimeDifferece(String date1, String date2){
		String dateTime = date1;
		String dateTime2 = date2;
		SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
		long timeMs = 0;
		long timeMs2 = 0;

		try {
			timeMs = dateFormat.parse(dateTime).getTime();
			timeMs2 = dateFormat.parse(dateTime2).getTime();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		/*
		Date date = new Date(timeMs - timeMs2);
		Calendar calendar = Calendar.getInstance();		
		calendar.setTime(date);

		String diff = calendar.get(Calendar.YEAR) + "-" + (calendar.get(Calendar.MONTH) + 1) + "-" + calendar.get(Calendar.DATE) + " " + 
		calendar.get(Calendar.HOUR) + ":" + calendar.get(Calendar.MINUTE) + ":" + calendar.get(Calendar.SECOND) + "";
		 */

		long diffSec = (timeMs - timeMs2) / 1000;
		int min = (int)diffSec / 60;
		int sec = (int)diffSec % 60;

		if(min == 0){
			return sec + " seconds ago";

		}else{
			if(min <= 60){
				return min + " minutes ago";
			}else{
				int hour = min / 60;
				int day = hour / 24;

				if(day > 0){
					return day + " days ago";
				}else{
					return hour + " hours ago";
				}
			}

		}


		//return min + "占쏙옙 " + sec + "占쏙옙";


	}



}
