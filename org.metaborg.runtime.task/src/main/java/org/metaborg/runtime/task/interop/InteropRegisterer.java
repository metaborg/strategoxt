package org.metaborg.runtime.task.interop;

import org.strategoxt.lang.JavaInteropRegisterer;
import org.strategoxt.lang.Strategy;

public class InteropRegisterer extends JavaInteropRegisterer {
	public InteropRegisterer() {
		super(new Strategy[] {
			task_add_task_0_3.instance,
			task_evaluate_1_0.instance,
			task_get_result_0_1.instance,
			task_set_result_0_2.instance,
			task_setup_0_1.instance,
			task_start_collection_0_1.instance,
			task_start_collection_0_1.instance });
	}
}
