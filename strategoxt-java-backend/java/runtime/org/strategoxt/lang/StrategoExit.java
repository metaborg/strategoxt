package org.strategoxt.lang;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class StrategoExit extends StrategoException {

	private static final long serialVersionUID = -5910970147929213790L;
	
    private final int value;
    
    public static final int SUCCESS = 0;
    
    public StrategoExit(int value) {
        super("Legal exit: return code " + valueToString(value));
        this.value = value;
    }
    
    public StrategoExit(int value, Throwable cause) {
    	super("Legal exit: return code " + valueToString(value), cause);
    	this.value = value;
    }

    private static Object valueToString(int value) {
        return (value == SUCCESS ? "0 (success)" : value);
    }
    
    public int getValue() {
        return value;
    }
}
