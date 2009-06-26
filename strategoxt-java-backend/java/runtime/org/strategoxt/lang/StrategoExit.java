package org.strategoxt.lang;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class StrategoExit extends StrategoException {

	private static final long serialVersionUID = -5910970147929213790L;
	
    private final int value;
    
    public static final int SUCCESS = 0;
    
    public StrategoExit(int value) {
        super("Legal exit");
        this.value = value;
    }
    
    public StrategoExit(int value, Throwable cause) {
    	super("Legal exit", cause);
    	this.value = value;
    }
    
    public int getValue() {
        return value;
    }
}
