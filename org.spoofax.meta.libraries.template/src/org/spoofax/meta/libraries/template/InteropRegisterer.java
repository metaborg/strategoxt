/**
 * 
 */
package org.spoofax.meta.libraries.template;

import org.strategoxt.lang.JavaInteropRegisterer;
import org.strategoxt.lang.Strategy;

/**
 * @author Vlad Vergu <v.a.vergu add tudelft.nl>
 *
 */
public class InteropRegisterer extends JavaInteropRegisterer {

	public InteropRegisterer() {
		super(new Strategy[] { library_strategy_0_0.instance });
	}
}
