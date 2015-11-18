package exight.lib;
import java.io.FileReader;
import java.io.StringReader;
import java.net.URL;

import javax.xml.parsers.SAXParser;
import javax.xml.parsers.SAXParserFactory;

import org.xml.sax.InputSource;


public class ExightSimpleParser{
	
	private String url;
	private ExightSimpleParserHandler saxHandler;
	public boolean isText = false;
	public static void Parse(String xmlString, ExightSimpleParserHandler saxHandler){
		try {
			new ExightSimpleParser(xmlString, saxHandler).doParse();
					
		} catch (Exception e) {
			e.printStackTrace();
		}
		
	}
	
	public static void ParseFile(String url, ExightSimpleParserHandler saxHandler) throws Exception{
		
		ExightSimpleParser m = new ExightSimpleParser(url, saxHandler);
		m.isText = true;
		m.doParse();
	}
	
	public ExightSimpleParser(String url, ExightSimpleParserHandler saxHandler) {
		
		this.url = url;
		this.saxHandler = saxHandler;		
	}
	
	public void doParse() throws Exception{

		SAXParser saxParser = SAXParserFactory.newInstance().newSAXParser();
		InputSource inputSource ;
		
		inputSource = new InputSource(new StringReader(url));
		//
		inputSource.setEncoding("utf-8");
	
		saxParser.parse(inputSource, saxHandler);
	}

		
	public interface CallBacker{
		public void onParseFinish(Object object);
	}
	



}
