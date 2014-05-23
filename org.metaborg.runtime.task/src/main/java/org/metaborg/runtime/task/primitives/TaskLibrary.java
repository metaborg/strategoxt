package org.metaborg.runtime.task.primitives;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;

public class TaskLibrary extends AbstractStrategoOperatorRegistry {
	public static final String REGISTRY_NAME = "TASK";

	public TaskLibrary() {
		add(task_api_add_message_0_2.instance);
		add(task_api_add_read_0_2.instance);
		add(task_api_add_task_0_6.instance);
		add(task_api_clear_partition_0_1.instance);
		add(task_api_debug_info_0_1.instance);
		add(task_api_delay_0_1.instance);
		add(task_api_evaluate_now_3_1.instance);
		add(task_api_evaluate_scheduled_3_0.instance);
		add(task_api_get_dependencies_0_1.instance);
		add(task_api_get_messages_0_1.instance);
		add(task_api_get_readers_0_1.instance);
		add(task_api_get_results_0_1.instance);
		add(task_api_has_failed_0_1.instance);
		add(task_api_invalidate_task_reads_0_1.instance);
		add(task_api_merge_0_0.instance);
		add(task_api_sources_of_0_1.instance);
		add(task_api_persist_0_0.instance);
		add(task_api_pop_0_0.instance);
		add(task_api_push_0_0.instance);
		add(task_api_recover_0_0.instance);
		add(task_api_reset_0_0.instance);
		add(task_api_result_combinations_2_2.instance);
		add(task_api_setup_0_1.instance);
		add(task_api_start_collection_0_1.instance);
		add(task_api_stop_collection_0_1.instance);
		add(task_api_task_id_0_1.instance);
		add(task_api_unload_0_1.instance);
	}

	@Override
	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}
}
