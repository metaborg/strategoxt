package org.strategoxt.eclipse.ant;

import org.eclipse.ant.core.IAntPropertyValueProvider;

public class StrategoMinJarAntPropertyProvider implements IAntPropertyValueProvider {

    public String getAntPropertyValue(String antPropertyName) {
        return org.strategoxt.stratego_lib_generic.stratego_lib_generic.class.getProtectionDomain().getCodeSource().getLocation().getFile();
    }
}
