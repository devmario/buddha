package exight.lib;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;

import android.content.Context;
import android.os.Handler;
import android.os.Message;
import exight.common.Utility;

public class ExightFileDownloader extends Thread {
	private File cacheDir;
	private StatusListener statusListener;
	private String imageUrl;

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

	public static void DownloadFile(String downloadPath, String imageUrl, StatusListener statusListener){
		int pivotPos = imageUrl.lastIndexOf("/");

		String encodedUrl = imageUrl.substring(pivotPos + 1);
		String encodeUrlHead = imageUrl.substring(0, pivotPos + 1);

		String newUrl = encodeUrlHead + Utility.encodeToUTF8(encodedUrl);
		ExightFileDownloader exightImageDownloader = new ExightFileDownloader(downloadPath, newUrl);
		exightImageDownloader.setOnStatusListener(statusListener);

		exightImageDownloader.start();

	}

	public ExightFileDownloader(String downloadPath, String imageUrl) {
		this.imageUrl = imageUrl;
		cacheDir = new File(downloadPath);
	}

	public void setOnStatusListener(StatusListener statusListener){
		this.statusListener = statusListener;
	}

	@Override
	public void run() {
		downloadBitmap(imageUrl);

	}


	public void downloadBitmap(String url)
	{
		Message message;

		int pivotPos = url.lastIndexOf("/");

		String encodedUrl = url.substring(pivotPos + 1);
		String encodeUrlHead = url.substring(0, pivotPos + 1);

		String newUrl = encodeUrlHead + Utility.encodeToUTF8(encodedUrl);

		String filename = String.valueOf(newUrl.hashCode());

		File f = new File(cacheDir, filename);

//		Bitmap b = decodeFileOriginalSize(f);

//		if(f.isFile()){
//			//*****************SEND MESSAGE ******************//
//			message = new Message();
//			message.obj = f;
//			message.what = 1;
//			handlerDownloadStatus.sendMessage(message);
//			//*****************SEND MESSAGE ******************//
//			return;
//		}

		//占쏙옙占쏙옙占쏙옙 占쌨깍옙
		try {
			//Bitmap bitmap=null;
			URL targetUrl = new URL(url);

			HttpURLConnection httpConn = (HttpURLConnection) targetUrl.openConnection();
			int fileSize = httpConn.getContentLength();


			//InputStream inStream = httpConn.getInputStream()
			InputStream is= httpConn.getInputStream();
			OutputStream os = new FileOutputStream(f);
			copyStream(is, os, fileSize);
			os.close();

			//bitmap = decodeFileOriginalSize(f);

			//*****************SEND MESSAGE ******************//
			message = new Message();
			message.obj = f;
			message.what = 1;
			handlerDownloadStatus.sendMessage(message);
			//*****************SEND MESSAGE ******************//

		}catch(FileNotFoundException fe){

			Message m = new Message();
			m.what = 3;
			m.obj = fe.toString();
			handlerDownloadStatus.sendMessage(m);
		}
		catch (Exception ex){

			ex.printStackTrace();
			Message m = new Message();
			m.what = 3;
			m.obj = ex.toString();
			handlerDownloadStatus.sendMessage(m);
		}
	}

	/** 占쏙옙占쏙옙占쏙옙 sd카占쏙옙占?占쏙옙占쏙옙 占쏙옙占쏙옙 */
	private long copyStream(InputStream is, OutputStream os, long fileSize)
	{
		long totalSize = 0;
		final int buffer_size=1024;
		try
		{

			byte[] bytes=new byte[buffer_size];
			for(;;)
			{
				int count=is.read(bytes, 0, buffer_size);

				if(count==-1)
					break;

				totalSize += count;
				os.write(bytes, 0, count);
				//*****************SEND MESSAGE ******************//
				Message m = new Message();
				m.what = 2;
				m.obj = new StructTwoLongType(totalSize, fileSize);

				handlerDownloadStatus.sendMessage(m);
				//*****************SEND MESSAGE ******************//
			}

		}
		catch(Exception ex){}

		return totalSize;

	}

	private Handler handlerDownloadStatus = new Handler(){
		public void handleMessage(android.os.Message msg) {
			switch(msg.what){
				case 1:
					//download successfully complete
					File file = (File) msg.obj;
					statusListener.onDownloadComplete(file);
					break;

				case 2:
					StructTwoLongType structTwoLongType = (StructTwoLongType)msg.obj;
					statusListener.onChangeProgressOfDownload(structTwoLongType.currentLoadedFileSize, structTwoLongType.fileSize);
					break;

				case 3:
					statusListener.onError(msg.obj.toString());
					break;
			}
		}
	};



	public interface StatusListener{

		public void onChangeProgressOfDownload(long downloadedFileByte, long fileSize);
		public void onDownloadComplete(File file);
		public void onError(String msg);

	}

	class StructTwoLongType{
		public long currentLoadedFileSize;
		public long fileSize;

		public StructTwoLongType(long currentLoadedFileSize, long fileSize) {
			this.currentLoadedFileSize = currentLoadedFileSize;
			this.fileSize = fileSize;
		}

	}
}
