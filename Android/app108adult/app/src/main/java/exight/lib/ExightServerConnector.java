package exight.lib;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.net.URL;
import java.net.URLConnection;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.List;

import org.apache.http.HttpEntity;
import org.apache.http.HttpResponse;
import org.apache.http.NameValuePair;
import org.apache.http.client.HttpClient;
import org.apache.http.client.entity.UrlEncodedFormEntity;
import org.apache.http.client.methods.HttpPost;
import org.apache.http.impl.client.DefaultHttpClient;
import org.apache.http.message.BasicNameValuePair;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.EntityUtils;

import android.os.Handler;
import android.os.Message;
import android.util.Log;

public class ExightServerConnector extends Handler implements Runnable{	

	public final static int LOAD_POST = 1;
	public final static int LOAD_GET = 2;


	private List<String> listParams = new ArrayList<String>();	//�߰� �Ķ���� ���� ����Ʈ
	private String url;
	private ServerConnectorListener connectorListener;	


	public ExightServerConnector(String url, ServerConnectorListener connectorListener) {
		this.url = url;
		this.connectorListener = connectorListener;

	}

	public ExightServerConnector(String url, ServerConnectorListener connectorListener, String ... params) {
		this.url = url;
		this.connectorListener = connectorListener;
		setParams(params);
	}

	private int loadType = LOAD_GET;
	private boolean isRunOnThread = true;

	public void setRunOnThread(boolean isRunOnThread) {
		this.isRunOnThread = isRunOnThread;
	}

	public void setLoadType(int loadType){
		this.loadType = loadType;
	}

	//������ ����
	public void loadPage(){

		if(isRunOnThread == false){
			openUrlConnection();	
		}else{
			new Thread(this).start();
		}

	}


	/**������ �ε�. get, post����, �����忡�� ����Ǵ��� ����*/
	public void loadPage(int loadType, boolean runOnThread){
		this.loadType = loadType;
		this.isRunOnThread = runOnThread;

		loadPage();

	}

	public void setParams(String... params){
		if(params == null)
			return;
		for(String s : params){
			if(s == null) s = "";
			listParams.add(s);	
		}		
	}

	@Override
	public void run() {
		openUrlConnection();
	}

	private void openUrlConnection(){
		Object result = "";
		Message m = new Message();
		try {
			if(loadType == LOAD_GET){
				result = urlOpen();	
			}else{
				result = urlOpenByPost();
			}

			m.what = PARSE_SUCCESS;

		}catch (Exception e) {
			result = e.getMessage();
			m.what = PARSE_FAILED;
		}			

		m.obj = result;
		sendMessage(m);
	}

	private final static int PARSE_SUCCESS = 1;
	private final static int PARSE_FAILED = 2;

	@Override
	public void dispatchMessage(Message msg) {
		switch(msg.what){
		case PARSE_FAILED:
			connectorListener.onLoadFinish(false, (String)msg.obj);
			break;
		case PARSE_SUCCESS:
			connectorListener.onLoadFinish(true, (String)msg.obj);
			break;
		}
	}

	/**����Ʈ ������� url ����*/
	private String urlOpenByPost() throws Exception{
		Log.d("exightUrl", url);
		HttpClient client = new DefaultHttpClient();   

		HttpPost post = new HttpPost(url); 


		List<NameValuePair> params = getAllUserParams();
		UrlEncodedFormEntity ent = new UrlEncodedFormEntity(params,HTTP.UTF_8); 
		post.setEntity(ent); 
		HttpResponse responsePOST = client.execute(post);   
		HttpEntity resEntity = responsePOST.getEntity(); 

		if(resEntity == null)
			return "";

		String line = "";
		String result = "";
		BufferedReader bf = new BufferedReader(new InputStreamReader(resEntity.getContent(), "utf-8"));
		while ((line = bf.readLine()) != null)
		{
			result += line;
		}

		return result;

	}

	/**GET������� url����*/
	private String urlOpen() throws Exception{
		String url = this.url;
		
		//param setting
		url = getUrlWithParam(url);
		Log.d("exightUrl", url);
		//open connection
		URLConnection urlConnection = new URL(url).openConnection();
		urlConnection.setReadTimeout(10000);
		InputStream is = urlConnection.getInputStream();
		BufferedReader input = new BufferedReader(new InputStreamReader(is, "utf-8"));
		String line = "";
		String result = "";

		//setting result message
		while ((line = input.readLine()) != null)
		{
			result += line;
		}

		return result;
	}


	/** �Ķ���� �߰�. �Ķ���� �̸��� ���� ������ �Է�. ���������� post�� �޴´�.*/
	public void addParams(String paramName, String paramValue){
		listParams.add(paramName);
		listParams.add(paramValue);		
	}

	/**����Ʈ�� ���� ����*/
	private List<NameValuePair> getAllUserParams(){

		List<NameValuePair> params = new ArrayList<NameValuePair>();

		for(int i = 0; i < listParams.size(); i+=2){
			String key = listParams.get(i);			
			String value = listParams.get(i+1);
			if(value == null) value = "";


			params.add(new BasicNameValuePair(key, value) );			


		}

		return params;
	}

	/** �Է¹��� �Ķ���� �������� GET��� url����� */
	private String getUrlWithParam(String url){
		String sUrl = url;
		for(int i = 0; i < listParams.size(); i+=2){
			String key = listParams.get(i);			
			String value = listParams.get(i+1);
			if(value == null) value = "";

			if(i == 0){
				sUrl += "/";
			}else{
				sUrl += "&";
			}

			sUrl += listParams.get(i) + "=" + encodeUTF8WithoutException(listParams.get(i+1));
		}

		return sUrl;

	}
	/**GET�� ���� ����*/

	public interface ServerConnectorListener{
		public void onLoadFinish(boolean isSuccess, String result);
	}


	private String encodeUTF8WithoutException(String s){
		try {
			return URLEncoder.encode(s, "UTF-8");
		} catch (UnsupportedEncodingException e) {
			// TODO Auto-generated catch block
			return "";
		}

	}



}
