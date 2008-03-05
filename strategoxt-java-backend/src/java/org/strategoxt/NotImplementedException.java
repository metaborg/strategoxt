/*
 * Created on 17. sep.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk@ii.uib.no>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt;

public class NotImplementedException extends RuntimeException {

    private final String message;
    
    public NotImplementedException() {
        message = "Not Implemented";
    }
    
    public NotImplementedException(String message) {
        this.message = message;
    }

    private static final long serialVersionUID = -1028814795329444374L;

    @Override
    public String toString() {
        return message;
    }
}
