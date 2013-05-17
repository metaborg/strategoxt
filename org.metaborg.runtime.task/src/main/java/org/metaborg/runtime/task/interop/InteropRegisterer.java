package org.metaborg.runtime.task.interop;

import org.strategoxt.lang.JavaInteropRegisterer;
import org.strategoxt.lang.Strategy;

public class InteropRegisterer extends JavaInteropRegisterer {
	public InteropRegisterer() {
		super(new Strategy[] { task_api_add_dependency_0_2.instance, task_api_add_message_0_2.instance,
			task_api_add_read_0_2.instance, task_api_add_task_0_3.instance, task_api_evaluate_2_1.instance,
			task_api_get_messages_0_1.instance, task_api_get_result_0_1.instance, task_api_has_failed_0_1.instance,
			task_api_persist_0_0.instance, task_api_reset_0_0.instance, task_api_setup_0_1.instance,
			task_api_start_collection_0_1.instance, task_api_start_collection_0_1.instance,
			task_api_task_id_0_1.instance, task_api_unload_0_1.instance, task_api_debug_info_0_1.instance });
	}
}
