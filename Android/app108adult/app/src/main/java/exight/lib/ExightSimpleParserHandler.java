package exight.lib;



import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.helpers.DefaultHandler;



public abstract class ExightSimpleParserHandler extends DefaultHandler{
	private boolean isInTag = false;
	protected String startTagName;
	
	
	
	
	// Text ? ì™?™èºï¿½å ?™ì˜™? ì™?™å ?™ì˜™ ? ì™??
	@Override
	public void characters(char[] ch, int start, int length)
	throws SAXException {
		
		if(isInTag == true){
			String text = new String(ch, start, length); 
			parseInText(text);
		}
		
	}

	@Override
	public void startElement(String uri, String localName, String qName,
			Attributes attributes) throws SAXException {
		// TODO Auto-generated method stub
		if( !isInTag ) isInTag = true; 
		this.startTagName = qName;
		
		parseInStartTag(qName);
		parseInStartTag(qName, attributes);
		
	}

	@Override
	public void endElement(String uri, String localName, String qName)
	throws SAXException {
		// TODO Auto-generated method stub
		if ( isInTag ) isInTag = false;
		
		parseInEndTag(qName);
					
	}
	
	public String getStartTagName(){
		return startTagName;
	}
	
	//? ì™?™å ?™ì˜™??? ì™??? ì™?™å ?™ì˜™
	abstract public void parseInText(String text);
	
	public void parseInStartTag(String localName){};
	public void parseInStartTag(String localName, Attributes attr){};
	public void parseInEndTag(String localName){};
	
}


