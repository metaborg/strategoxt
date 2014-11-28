package org.strategoxt.lang.compat.stratego_rtg_compat;

import org.strategoxt.lang.SRTS_EXT_repeat_1_0;
import org.strategoxt.lang.StrategyCollector;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class strrtg_repeat_1_0 extends SRTS_EXT_repeat_1_0 {
	
	public static final strrtg_repeat_1_0 instance = new strrtg_repeat_1_0();
	
    public void registerImplementators(StrategyCollector collector) { 
      collector.registerStrategyImplementator("strrtg-repeat", instance);
    }
	
    public void bindExecutors(StrategyCollector collector) { 
    }

}
