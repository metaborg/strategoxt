package org.strategoxt.strj.cleardep_interface;

import org.sugarj.common.cleardep.BuildSchedule;

public class BuildScheduleContainer extends ObjectWrapperTerm<BuildSchedule> {
	
	/**
	 * 
	 */
	private static final long serialVersionUID = -1999863655151031277L;

	public static int TYPE = 4372;
	
	protected BuildScheduleContainer(BuildSchedule schedule) {
		super(schedule, TYPE);
	}

}
