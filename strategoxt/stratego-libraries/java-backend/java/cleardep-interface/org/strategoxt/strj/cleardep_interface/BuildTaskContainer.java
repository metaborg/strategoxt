package org.strategoxt.strj.cleardep_interface;

import org.sugarj.common.cleardep.BuildSchedule;

public class BuildTaskContainer extends ObjectWrapperTerm<BuildSchedule.Task> {

	/**
	 * 
	 */
	private static final long serialVersionUID = -5365799241874932818L;
	public static final int TYPE = 83722;
	
	public BuildTaskContainer(BuildSchedule.Task task) {
		super(task, TYPE);
	}

}
