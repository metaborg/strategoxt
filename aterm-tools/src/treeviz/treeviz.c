#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_GraphXML_2;
Symbol sym_graph_2;
Symbol sym_vendor_1;
Symbol sym_version_1;
Symbol sym_Id_1;
Symbol sym_class_1;
Symbol sym_preferredlayout_1;
Symbol sym_icon_2;
Symbol sym_edit_2;
Symbol sym_action_1;
Symbol sym_class_1;
Symbol sym_edit_bundle_2;
Symbol sym_class_1;
Symbol sym_node_2;
Symbol sym_node1_1;
Symbol sym_name_1;
Symbol sym_isMetanode_1;
Symbol sym_class_1;
Symbol sym_edge_2;
Symbol sym_edge1_1;
Symbol sym_name_1;
Symbol sym_source_1;
Symbol sym_target_1;
Symbol sym_class_1;
Symbol sym_isDirected_1;
Symbol sym_properties_2;
Symbol sym_class_1;
Symbol sym_label_2;
Symbol sym_class_1;
Symbol sym_data_2;
Symbol sym_class_1;
Symbol sym_dataref_2;
Symbol sym_class_1;
Symbol sym_ref_2;
Symbol sym_class_1;
Symbol sym_position_2;
Symbol sym_x_1;
Symbol sym_y_1;
Symbol sym_z_1;
Symbol sym_class_1;
Symbol sym_size_2;
Symbol sym_width_1;
Symbol sym_height_1;
Symbol sym_depth_1;
Symbol sym_class_1;
Symbol sym_path_2;
Symbol sym_type_1;
Symbol sym_class_1;
Symbol sym_transform_2;
Symbol sym_matrix_1;
Symbol sym_class_1;
Symbol sym_style_2;
Symbol sym_subgraph_style_2;
Symbol sym_line_2;
Symbol sym_tag_1;
Symbol sym_class_1;
Symbol sym_color_1;
Symbol sym_colour_1;
Symbol sym_colour__start_1;
Symbol sym_colour__end_1;
Symbol sym_color__start_1;
Symbol sym_color__end_1;
Symbol sym_linestyle_1;
Symbol sym_linewidth_1;
Symbol sym_fill_2;
Symbol sym_tag_1;
Symbol sym_class_1;
Symbol sym_color_1;
Symbol sym_colour_1;
Symbol sym_fillstyle_1;
Symbol sym_imagefill_1;
Symbol sym_implementation_2;
Symbol sym_tag_1;
Symbol sym_class_1;
Symbol sym_scriptname_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_GraphXML_2 = ATmakeSymbol("GraphXML", 2, ATfalse);
  ATprotectSymbol(sym_GraphXML_2);
  sym_graph_2 = ATmakeSymbol("graph", 2, ATfalse);
  ATprotectSymbol(sym_graph_2);
  sym_vendor_1 = ATmakeSymbol("vendor", 1, ATfalse);
  ATprotectSymbol(sym_vendor_1);
  sym_version_1 = ATmakeSymbol("version", 1, ATfalse);
  ATprotectSymbol(sym_version_1);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_preferredlayout_1 = ATmakeSymbol("preferredlayout", 1, ATfalse);
  ATprotectSymbol(sym_preferredlayout_1);
  sym_icon_2 = ATmakeSymbol("icon", 2, ATfalse);
  ATprotectSymbol(sym_icon_2);
  sym_edit_2 = ATmakeSymbol("edit", 2, ATfalse);
  ATprotectSymbol(sym_edit_2);
  sym_action_1 = ATmakeSymbol("action", 1, ATfalse);
  ATprotectSymbol(sym_action_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_edit_bundle_2 = ATmakeSymbol("edit-bundle", 2, ATfalse);
  ATprotectSymbol(sym_edit_bundle_2);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_node_2 = ATmakeSymbol("node", 2, ATfalse);
  ATprotectSymbol(sym_node_2);
  sym_node1_1 = ATmakeSymbol("node1", 1, ATfalse);
  ATprotectSymbol(sym_node1_1);
  sym_name_1 = ATmakeSymbol("name", 1, ATfalse);
  ATprotectSymbol(sym_name_1);
  sym_isMetanode_1 = ATmakeSymbol("isMetanode", 1, ATfalse);
  ATprotectSymbol(sym_isMetanode_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_edge_2 = ATmakeSymbol("edge", 2, ATfalse);
  ATprotectSymbol(sym_edge_2);
  sym_edge1_1 = ATmakeSymbol("edge1", 1, ATfalse);
  ATprotectSymbol(sym_edge1_1);
  sym_name_1 = ATmakeSymbol("name", 1, ATfalse);
  ATprotectSymbol(sym_name_1);
  sym_source_1 = ATmakeSymbol("source", 1, ATfalse);
  ATprotectSymbol(sym_source_1);
  sym_target_1 = ATmakeSymbol("target", 1, ATfalse);
  ATprotectSymbol(sym_target_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_isDirected_1 = ATmakeSymbol("isDirected", 1, ATfalse);
  ATprotectSymbol(sym_isDirected_1);
  sym_properties_2 = ATmakeSymbol("properties", 2, ATfalse);
  ATprotectSymbol(sym_properties_2);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_data_2 = ATmakeSymbol("data", 2, ATfalse);
  ATprotectSymbol(sym_data_2);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_dataref_2 = ATmakeSymbol("dataref", 2, ATfalse);
  ATprotectSymbol(sym_dataref_2);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_ref_2 = ATmakeSymbol("ref", 2, ATfalse);
  ATprotectSymbol(sym_ref_2);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_position_2 = ATmakeSymbol("position", 2, ATfalse);
  ATprotectSymbol(sym_position_2);
  sym_x_1 = ATmakeSymbol("x", 1, ATfalse);
  ATprotectSymbol(sym_x_1);
  sym_y_1 = ATmakeSymbol("y", 1, ATfalse);
  ATprotectSymbol(sym_y_1);
  sym_z_1 = ATmakeSymbol("z", 1, ATfalse);
  ATprotectSymbol(sym_z_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_size_2 = ATmakeSymbol("size", 2, ATfalse);
  ATprotectSymbol(sym_size_2);
  sym_width_1 = ATmakeSymbol("width", 1, ATfalse);
  ATprotectSymbol(sym_width_1);
  sym_height_1 = ATmakeSymbol("height", 1, ATfalse);
  ATprotectSymbol(sym_height_1);
  sym_depth_1 = ATmakeSymbol("depth", 1, ATfalse);
  ATprotectSymbol(sym_depth_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_path_2 = ATmakeSymbol("path", 2, ATfalse);
  ATprotectSymbol(sym_path_2);
  sym_type_1 = ATmakeSymbol("type", 1, ATfalse);
  ATprotectSymbol(sym_type_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_transform_2 = ATmakeSymbol("transform", 2, ATfalse);
  ATprotectSymbol(sym_transform_2);
  sym_matrix_1 = ATmakeSymbol("matrix", 1, ATfalse);
  ATprotectSymbol(sym_matrix_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_style_2 = ATmakeSymbol("style", 2, ATfalse);
  ATprotectSymbol(sym_style_2);
  sym_subgraph_style_2 = ATmakeSymbol("subgraph-style", 2, ATfalse);
  ATprotectSymbol(sym_subgraph_style_2);
  sym_line_2 = ATmakeSymbol("line", 2, ATfalse);
  ATprotectSymbol(sym_line_2);
  sym_tag_1 = ATmakeSymbol("tag", 1, ATfalse);
  ATprotectSymbol(sym_tag_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_color_1 = ATmakeSymbol("color", 1, ATfalse);
  ATprotectSymbol(sym_color_1);
  sym_colour_1 = ATmakeSymbol("colour", 1, ATfalse);
  ATprotectSymbol(sym_colour_1);
  sym_colour__start_1 = ATmakeSymbol("colour_start", 1, ATfalse);
  ATprotectSymbol(sym_colour__start_1);
  sym_colour__end_1 = ATmakeSymbol("colour_end", 1, ATfalse);
  ATprotectSymbol(sym_colour__end_1);
  sym_color__start_1 = ATmakeSymbol("color_start", 1, ATfalse);
  ATprotectSymbol(sym_color__start_1);
  sym_color__end_1 = ATmakeSymbol("color_end", 1, ATfalse);
  ATprotectSymbol(sym_color__end_1);
  sym_linestyle_1 = ATmakeSymbol("linestyle", 1, ATfalse);
  ATprotectSymbol(sym_linestyle_1);
  sym_linewidth_1 = ATmakeSymbol("linewidth", 1, ATfalse);
  ATprotectSymbol(sym_linewidth_1);
  sym_fill_2 = ATmakeSymbol("fill", 2, ATfalse);
  ATprotectSymbol(sym_fill_2);
  sym_tag_1 = ATmakeSymbol("tag", 1, ATfalse);
  ATprotectSymbol(sym_tag_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_color_1 = ATmakeSymbol("color", 1, ATfalse);
  ATprotectSymbol(sym_color_1);
  sym_colour_1 = ATmakeSymbol("colour", 1, ATfalse);
  ATprotectSymbol(sym_colour_1);
  sym_fillstyle_1 = ATmakeSymbol("fillstyle", 1, ATfalse);
  ATprotectSymbol(sym_fillstyle_1);
  sym_imagefill_1 = ATmakeSymbol("imagefill", 1, ATfalse);
  ATprotectSymbol(sym_imagefill_1);
  sym_implementation_2 = ATmakeSymbol("implementation", 2, ATfalse);
  ATprotectSymbol(sym_implementation_2);
  sym_tag_1 = ATmakeSymbol("tag", 1, ATfalse);
  ATprotectSymbol(sym_tag_1);
  sym_class_1 = ATmakeSymbol("class", 1, ATfalse);
  ATprotectSymbol(sym_class_1);
  sym_scriptname_1 = ATmakeSymbol("scriptname", 1, ATfalse);
  ATprotectSymbol(sym_scriptname_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  init_constant_terms();
}
ATerm term_s_18;
ATerm term_f_18;
ATerm term_p_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_v_16;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_o_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_o_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_n_9;
ATerm term_i_9;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_o_6;
ATerm term_k_6;
ATerm term_f_6;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_r_3;
void init_constant_terms (void)
{
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("[ ]", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_f_6);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_f_6);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_f_6);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_j_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_v_16, term_f_6);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__3, term_i_15, term_j_15, (ATerm) ATempty);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm BuildNode_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm double_quote_0 (ATerm);
ATerm Escape_linefeed_0 (ATerm);
ATerm Escape_backslash_0 (ATerm);
ATerm Escape_double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm s_81 (ATerm));
ATerm escape_0 (ATerm);
ATerm BuildEdge_0 (ATerm);
ATerm MkEdges_2 (ATerm, ATerm q_63 (ATerm), ATerm r_63 (ATerm));
ATerm TreeViz_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm NewNodeName_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm NodeName_0 (ATerm);
ATerm treeviz_0 (ATerm);
ATerm _2 (ATerm, ATerm x_52 (ATerm), ATerm y_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_85 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_83 (ATerm));
ATerm debug_1 (ATerm, ATerm q_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_78 (ATerm), ATerm h_78 (ATerm));
ATerm crush_2 (ATerm, ATerm e_77 (ATerm), ATerm f_77 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_85 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_83 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm s_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm e_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_82 (ATerm));
ATerm Undefined_1 (ATerm, ATerm f_63 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_54 (ATerm), ATerm h_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_84 (ATerm), ATerm i_84 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_84 (ATerm));
ATerm main_0 (ATerm);
ATerm BuildNode_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,u_1 = NULL;
  i_1 = t;
  h_1 :
  if(match_cons(i_1, sym__2))
    {
      j_1 = ATgetArgument(i_1, 0);
      u_1 = ATgetArgument(i_1, 1);
      {
        ATerm a_2 = NULL,b_2 = NULL;
        ATerm c_2 = NULL;
        t = not_null(j_1);
        {
          t = NodeName_0(t);
          {
            t = escape_0(t);
            {
              ATerm d_2 = NULL;
              t = double_quote_0(t);
              {
                c_2 = t;
                {
                  if(((a_2 != NULL) && (a_2 != c_2)))
                    _fail(c_2);
                  else
                    a_2 = c_2;
                  {
                    t = not_null(u_1);
                    {
                      t = NodeName_0(t);
                      {
                        t = escape_0(t);
                        {
                          t = double_quote_0(t);
                          {
                            d_2 = t;
                            if(((b_2 != NULL) && (b_2 != d_2)))
                              _fail(d_2);
                            else
                              b_2 = d_2;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_node_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_name_1, not_null(a_2))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_label_2, (ATerm)ATempty, not_null(b_2))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  j_2 = t;
  i_2 :
  if(match_cons(j_2, sym__2))
    {
      k_2 = ATgetArgument(j_2, 0);
      l_2 = ATgetArgument(j_2, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_2)), not_null(k_2)), (ATerm) ATinsert(ATempty, not_null(k_2)));
        t = conc_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm q_2 = NULL;
  ATerm r_2 = NULL;
  r_2 = t;
  if(((q_2 != NULL) && (q_2 != r_2)))
    _fail(r_2);
  else
    q_2 = r_2;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_3, not_null(q_2));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  w_2 = t;
  u_2 :
  if(((ATgetType(w_2) == AT_LIST) && !(ATisEmpty(w_2))))
    {
      x_2 = ATgetFirst((ATermList) w_2);
      y_2 = (ATerm) ATgetNext((ATermList) w_2);
      v_2 :
      if(match_int(x_2, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_2)), term_k_5), term_j_5);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_backslash_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
  e_3 = t;
  c_3 :
  if(((ATgetType(e_3) == AT_LIST) && !(ATisEmpty(e_3))))
    {
      f_3 = ATgetFirst((ATermList) e_3);
      g_3 = (ATerm) ATgetNext((ATermList) e_3);
      d_3 :
      if(match_int(f_3, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_3)), term_j_5), term_j_5);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_double_quote_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
  m_3 = t;
  k_3 :
  if(((ATgetType(m_3) == AT_LIST) && !(ATisEmpty(m_3))))
    {
      n_3 = ATgetFirst((ATermList) m_3);
      o_3 = (ATerm) ATgetNext((ATermList) m_3);
      l_3 :
      if(match_int(n_3, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_3)), term_r_3), term_j_5);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm l_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(m_5);
    }
  else
    {
      t = l_5;
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(o_5);
          }
        else
          {
            t = n_5;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm p_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm b_0 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, b_0);
      }
      ;
      LocalPopChoice(s_5);
    }
  else
    {
      t = p_5;
      {
        ATerm t_5 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(c_6);
          }
        else
          {
            t = t_5;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm s_81 (ATerm))
{
  t = explode_string_0(t);
  {
    t = s_81(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  t = string_as_chars_1(t, escape_chars_0);
  return(t);
}
ATerm BuildEdge_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym__2))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      {
        ATerm b_4 = NULL,c_4 = NULL;
        ATerm d_4 = NULL;
        t = not_null(x_3);
        {
          t = NodeName_0(t);
          {
            t = escape_0(t);
            {
              ATerm e_4 = NULL;
              t = double_quote_0(t);
              {
                d_4 = t;
                {
                  if(((b_4 != NULL) && (b_4 != d_4)))
                    _fail(d_4);
                  else
                    b_4 = d_4;
                  {
                    t = not_null(y_3);
                    {
                      t = NodeName_0(t);
                      {
                        t = escape_0(t);
                        {
                          t = double_quote_0(t);
                          {
                            e_4 = t;
                            if(((c_4 != NULL) && (c_4 != e_4)))
                              _fail(e_4);
                            else
                              c_4 = e_4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_edge1_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_target_1, not_null(c_4))), (ATerm) ATmakeAppl(sym_source_1, not_null(b_4))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkEdges_2 (ATerm t, ATerm q_63 (ATerm), ATerm r_63 (ATerm))
{
  ATerm q_4 = NULL;
  ATerm s_4 = NULL,t_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  q_4 = t;
  {
    ATerm e_6;
    e_6 = t;
    {
      ATerm u_4 = NULL;
      ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
      t = not_null(q_4);
      {
        u_4 = t;
        {
          t = SSL_explode_term(not_null(u_4));
          {
            w_4 = t;
            l_4 :
            if(match_cons(w_4, sym__2))
              {
                x_4 = ATgetArgument(w_4, 0);
                y_4 = ATgetArgument(w_4, 1);
                {
                  if(((s_4 != NULL) && (s_4 != x_4)))
                    _fail(x_4);
                  else
                    s_4 = x_4;
                  if(((t_4 != NULL) && (t_4 != y_4)))
                    _fail(y_4);
                  else
                    t_4 = y_4;
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = e_6;
    {
      ATerm c_5 = NULL;
      t = not_null(s_4);
      {
        t = NodeName_0(t);
        {
          ATerm d_5 = NULL,f_5 = NULL;
          t = NewNodeName_0(t);
          {
            c_5 = t;
            {
              if(((a_5 != NULL) && (a_5 != c_5)))
                _fail(c_5);
              else
                a_5 = c_5;
              {
                ATerm e_5 = NULL;
                t = term_f_6;
                {
                  t = q_63(t);
                  {
                    e_5 = t;
                    if(((d_5 != NULL) && (d_5 != e_5)))
                      _fail(e_5);
                    else
                      d_5 = e_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), not_null(d_5));
                  {
                    ATerm g_5 = NULL;
                    t = BuildEdge_0(t);
                    {
                      f_5 = t;
                      {
                        if(((z_4 != NULL) && (z_4 != f_5)))
                          _fail(f_5);
                        else
                          z_4 = f_5;
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(a_5), not_null(s_4), not_null(t_4));
                          {
                            t = r_63(t);
                            {
                              g_5 = t;
                              if(((b_5 != NULL) && (b_5 != g_5)))
                                _fail(g_5);
                              else
                                b_5 = g_5;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(b_5)), not_null(z_4));
    }
  }
  return(t);
}
ATerm TreeViz_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,b_6 = NULL;
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,d_6 = NULL;
  ATerm h_6 (ATerm t)
  {
    if(((w_5 != NULL) && (w_5 != y_5)))
      _fail(y_5);
    else
      w_5 = y_5;
    {
      if(((u_5 != NULL) && (u_5 != z_5)))
        _fail(z_5);
      else
        u_5 = z_5;
      {
        if(((v_5 != NULL) && (v_5 != a_6)))
          _fail(a_6);
        else
          v_5 = a_6;
        {
          t = not_null(v_5);
          {
            ATerm c_0 (ATerm t)
            {
              ATerm e_0 (ATerm t)
              {
                t = not_null(w_5);
                return(t);
              }
              t = MkEdges_2(t, e_0, TreeViz_0);
              return(t);
            }
            t = map_1(t, c_0);
            t = concat_0(t);
          }
        }
      }
    }
    return(t);
  }
  x_5 = t;
  q_5 :
  if(match_cons(x_5, sym__3))
    {
      y_5 = ATgetArgument(x_5, 0);
      z_5 = ATgetArgument(x_5, 1);
      a_6 = ATgetArgument(x_5, 2);
      r_5 :
      if(((ATgetType(a_6) == AT_LIST) && ATisEmpty(a_6)))
        {
          {
            ATerm g_6 = t;
            int i_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((w_5 != NULL) && (w_5 != y_5)))
                  _fail(y_5);
                else
                  w_5 = y_5;
                {
                  if(((u_5 != NULL) && (u_5 != z_5)))
                    _fail(z_5);
                  else
                    u_5 = z_5;
                  t = (ATerm) ATempty;
                }
                ;
                LocalPopChoice(i_6);
              }
            else
              {
                t = g_6;
                t = h_6(t);
              }
          }
        }
      else
        {
          t = h_6(t);
        }
    }
  else
    {
      _fail(t);
    }
  {
    b_6 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_5), not_null(u_5));
      {
        t = BuildNode_0(t);
        {
          d_6 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(b_6)), not_null(d_6));
        }
      }
    }
  }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm NewNodeName_0 (ATerm t)
{
  ATerm p_6 = NULL;
  ATerm r_6 = NULL,t_6 = NULL;
  p_6 = t;
  {
    ATerm j_6;
    j_6 = t;
    {
      ATerm s_6 = NULL;
      t = term_f_6;
      {
        t = new_0(t);
        {
          s_6 = t;
          if(((r_6 != NULL) && (r_6 != s_6)))
            _fail(s_6);
          else
            r_6 = s_6;
        }
      }
    }
    t = j_6;
    {
      ATerm v_6 = NULL;
      t = not_null(p_6);
      {
        t = explode_string_0(t);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm o_0 (ATerm t)
            {
              ATerm u_6 = NULL;
              u_6 = t;
              n_6 :
              if(match_int(u_6, 10))
                {
                  t = term_k_6;
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, o_0);
            return(t);
          }
          t = map_1(t, f_0);
          {
            t = implode_string_0(t);
            {
              v_6 = t;
              if(((t_6 != NULL) && (t_6 != v_6)))
                _fail(v_6);
              else
                t_6 = v_6;
            }
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_6)), not_null(r_6));
        t = concat_strings_0(t);
      }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  t = SSL_int_to_string(not_null(b_7));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  t = SSL_is_int(not_null(f_7));
  return(t);
}
ATerm NodeName_0 (ATerm t)
{
  ATerm k_7 = NULL;
  ATerm m_7 = NULL;
  k_7 = t;
  {
    ATerm n_7 = NULL;
    ATerm p_0 (ATerm t)
    {
      ATerm l_6 = t;
      int m_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0(t);
          t = int_to_string_0(t);
          ;
          LocalPopChoice(m_6);
        }
      else
        {
          t = l_6;
          {
            t = Nil_0(t);
            t = term_o_6;
          }
        }
      return(t);
    }
    t = try_1(t, p_0);
    {
      n_7 = t;
      if(((m_7 != NULL) && (m_7 != n_7)))
        _fail(n_7);
      else
        m_7 = n_7;
    }
    t = not_null(m_7);
  }
  return(t);
}
ATerm treeviz_0 (ATerm t)
{
  ATerm w_7 = NULL;
  ATerm y_7 = NULL,z_7 = NULL,f_8 = NULL,g_8 = NULL;
  w_7 = t;
  {
    ATerm q_6;
    q_6 = t;
    {
      ATerm a_8 = NULL;
      ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
      t = not_null(w_7);
      {
        a_8 = t;
        {
          t = SSL_explode_term(not_null(a_8));
          {
            c_8 = t;
            t_7 :
            if(match_cons(c_8, sym__2))
              {
                d_8 = ATgetArgument(c_8, 0);
                e_8 = ATgetArgument(c_8, 1);
                {
                  if(((y_7 != NULL) && (y_7 != d_8)))
                    _fail(d_8);
                  else
                    y_7 = d_8;
                  if(((z_7 != NULL) && (z_7 != e_8)))
                    _fail(e_8);
                  else
                    z_7 = e_8;
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = q_6;
    {
      ATerm h_8 = NULL;
      t = not_null(y_7);
      {
        t = NodeName_0(t);
        {
          ATerm i_8 = NULL;
          t = NewNodeName_0(t);
          {
            h_8 = t;
            {
              if(((f_8 != NULL) && (f_8 != h_8)))
                _fail(h_8);
              else
                f_8 = h_8;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_8), not_null(y_7), not_null(z_7));
                {
                  t = TreeViz_0(t);
                  {
                    i_8 = t;
                    if(((g_8 != NULL) && (g_8 != i_8)))
                      _fail(i_8);
                    else
                      g_8 = i_8;
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_GraphXML_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_graph_2, (ATerm)ATempty, not_null(g_8))));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_52 (ATerm), ATerm y_52 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym__2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      {
        ATerm a_9 = NULL,c_9 = NULL;
        ATerm b_9 = NULL;
        t = SSLgetAnnotations(not_null(u_8));
        {
          b_9 = t;
          if(((a_9 != NULL) && (a_9 != b_9)))
            _fail(b_9);
          else
            a_9 = b_9;
        }
        {
          t = not_null(v_8);
          {
            ATerm e_9 = NULL;
            t = x_52(t);
            {
              c_9 = t;
              {
                t = not_null(w_8);
                {
                  ATerm g_9 = NULL;
                  t = y_52(t);
                  {
                    e_9 = t;
                    {
                      ATerm h_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_9), not_null(e_9)), not_null(a_9));
                      {
                        h_9 = t;
                        if(((g_9 != NULL) && (g_9 != h_9)))
                          _fail(h_9);
                        else
                          g_9 = h_9;
                      }
                      t = not_null(g_9);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm p_9 = NULL;
  ATerm w_6;
  w_6 = t;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm q_9 = NULL,r_9 = NULL;
      q_9 = t;
      o_9 :
      if(match_cons(q_9, sym_Program_1))
        {
          r_9 = ATgetArgument(q_9, 0);
          if(((p_9 != NULL) && (p_9 != r_9)))
            _fail(r_9);
          else
            p_9 = r_9;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, q_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_6), not_null(p_9)), term_y_6));
      {
        t = printnl_0(t);
        {
          t = term_a_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym__2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        ATerm c_7;
        c_7 = t;
        t = SSL_printnl(not_null(w_9), not_null(x_9));
        t = c_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_10 = NULL;
  c_10 = t;
  t = SSL_implode_string(not_null(c_10));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
        h_10 = t;
        g_10 :
        if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
          {
            i_10 = ATgetFirst((ATermList) h_10);
            j_10 = (ATerm) ATgetNext((ATermList) h_10);
            {
              t = not_null(i_10);
              {
                ATerm r_0 (ATerm t)
                {
                  t = not_null(j_10);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, r_0);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm t_10 = NULL;
  ATerm v_10 = NULL;
  t_10 = t;
  {
    ATerm w_10 = NULL;
    ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
    t = not_null(t_10);
    {
      w_10 = t;
      {
        t = SSL_explode_term(not_null(w_10));
        {
          y_10 = t;
          r_10 :
          if(match_cons(y_10, sym__2))
            {
              z_10 = ATgetArgument(y_10, 0);
              a_11 = ATgetArgument(y_10, 1);
              s_10 :
              if(match_string(z_10, ""))
                {
                  if(((v_10 != NULL) && (v_10 != a_11)))
                    _fail(a_11);
                  else
                    v_10 = a_11;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_10);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm e_11 (ATerm t)
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_11);
        ;
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        {
          t = Nil_0(t);
          t = h_72(t);
        }
      }
    return(t);
  }
  t = e_11(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      {
        t = not_null(i_11);
        {
          ATerm s_0 (ATerm t)
          {
            t = not_null(j_11);
            return(t);
          }
          t = at_end_1(t, s_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  t = SSL_explode_string(not_null(o_11));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  t = SSL_is_string(not_null(s_11));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = l_7;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_0);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            {
              ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
              b_12 = t;
              a_12 :
              if(match_cons(b_12, sym_Path_1))
                {
                  c_12 = ATgetArgument(b_12, 0);
                  t = not_null(c_12);
                }
              else
                {
                  if(match_cons(b_12, sym_Var_1))
                    {
                      c_12 = ATgetArgument(b_12, 0);
                      {
                        t = not_null(c_12);
                        {
                          ATerm r_7 = t;
                          int s_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(s_7);
                            }
                          else
                            {
                              t = r_7;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_u_7;
                                  return(t);
                                }
                                t = debug_1(t, u_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_12, sym_Prefix_2))
                        {
                          c_12 = ATgetArgument(b_12, 0);
                          d_12 = ATgetArgument(b_12, 1);
                          {
                            ATerm i_12 = NULL,k_12 = NULL;
                            ATerm v_7;
                            v_7 = t;
                            {
                              ATerm j_12 = NULL;
                              t = not_null(c_12);
                              {
                                t = eval_config_0(t);
                                {
                                  j_12 = t;
                                  if(((i_12 != NULL) && (i_12 != j_12)))
                                    _fail(j_12);
                                  else
                                    i_12 = j_12;
                                }
                              }
                            }
                            t = v_7;
                            {
                              ATerm l_12 = NULL;
                              t = not_null(d_12);
                              {
                                t = eval_config_0(t);
                                {
                                  l_12 = t;
                                  if(((k_12 != NULL) && (k_12 != l_12)))
                                    _fail(l_12);
                                  else
                                    k_12 = l_12;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_12), not_null(k_12));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_7, not_null(t_12));
    {
      t = table_get_0(t);
      {
        ATerm v_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm b_8;
            b_8 = t;
            {
              ATerm v_12 = NULL;
              ATerm w_12 = NULL;
              w_12 = t;
              if(((v_12 != NULL) && (v_12 != w_12)))
                _fail(w_12);
              else
                v_12 = w_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(t_12), not_null(v_12));
                t = table_put_0(t);
              }
            }
            t = b_8;
          }
          return(t);
        }
        t = try_1(t, v_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm j_8;
    j_8 = t;
    {
      ATerm a_13 = NULL;
      ATerm b_13 = NULL;
      t = term_k_8;
      {
        t = get_config_0(t);
        {
          b_13 = t;
          if(((a_13 != NULL) && (a_13 != b_13)))
            _fail(b_13);
          else
            a_13 = b_13;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), term_l_8);
        t = geq_0(t);
      }
    }
    t = j_8;
    t = n_85(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym__2))
    {
      g_13 = ATgetArgument(f_13, 0);
      h_13 = ATgetArgument(f_13, 1);
      t = SSL_WriteToTextFile(not_null(g_13), not_null(h_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym__2))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      t = SSL_WriteToBinaryFile(not_null(o_13), not_null(p_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_13 = NULL;
  ATerm m_8;
  m_8 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm y_13 = NULL,z_13 = NULL;
            y_13 = t;
            u_13 :
            if(match_cons(y_13, sym_Output_1))
              {
                z_13 = ATgetArgument(y_13, 0);
                if(((x_13 != NULL) && (x_13 != z_13)))
                  _fail(z_13);
                else
                  x_13 = z_13;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_0);
          ;
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
          {
            ATerm a_14 = NULL;
            t = term_p_8;
            {
              a_14 = t;
              if(((x_13 != NULL) && (x_13 != a_14)))
                _fail(a_14);
              else
                x_13 = a_14;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_0, _id);
  }
  t = m_8;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = not_null(x_13);
        return(t);
      }
      t = split_2(t, a_1, _id);
      return(t);
    }
    t = _2(t, _id, z_0);
    {
      ATerm q_8 = t;
      int r_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              ATerm b_14 = NULL;
              b_14 = t;
              w_13 :
              if(!(match_cons(b_14, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_1);
            return(t);
          }
          t = _2(t, b_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(r_8);
        }
      else
        {
          t = q_8;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm u_83 (ATerm))
{
  ATerm h_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  ATerm s_8;
  s_8 = t;
  t = dtime_0(t);
  t = s_8;
  {
    t = u_83(t);
    {
      ATerm x_8;
      x_8 = t;
      {
        ATerm i_14 = NULL;
        t = dtime_0(t);
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
      }
      t = x_8;
      {
        j_14 = t;
        g_14 :
        if(match_cons(j_14, sym__2))
          {
            k_14 = ATgetArgument(j_14, 0);
            l_14 = ATgetArgument(j_14, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_14)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_14))), not_null(l_14));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_82 (ATerm))
{
  ATerm y_8;
  y_8 = t;
  {
    ATerm s_14 = NULL,u_14 = NULL;
    ATerm z_8;
    z_8 = t;
    {
      ATerm t_14 = NULL;
      t = q_82(t);
      {
        t_14 = t;
        if(((s_14 != NULL) && (s_14 != t_14)))
          _fail(t_14);
        else
          s_14 = t_14;
      }
    }
    t = z_8;
    {
      ATerm v_14 = NULL;
      v_14 = t;
      if(((u_14 != NULL) && (u_14 != v_14)))
        _fail(v_14);
      else
        u_14 = v_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), not_null(s_14)));
        t = printnl_0(t);
      }
    }
  }
  t = y_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm z_14 = NULL;
  ATerm d_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_15 = NULL;
      a_15 = t;
      {
        if(((z_14 != NULL) && (z_14 != a_15)))
          _fail(a_15);
        else
          z_14 = a_15;
        t = SSL_ReadFromFile(not_null(z_14));
      }
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = d_9;
      {
        ATerm d_1 (ATerm t)
        {
          t = term_i_9;
          return(t);
        }
        t = debug_1(t, d_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm e_15 = NULL,g_15 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm f_15 = NULL;
    t = v_79(t);
    {
      f_15 = t;
      if(((e_15 != NULL) && (e_15 != f_15)))
        _fail(f_15);
      else
        e_15 = f_15;
    }
  }
  t = j_9;
  {
    ATerm h_15 = NULL;
    t = w_79(t);
    {
      h_15 = t;
      if(((g_15 != NULL) && (g_15 != h_15)))
        _fail(h_15);
      else
        g_15 = h_15;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), not_null(g_15));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_15 = NULL;
  ATerm k_9;
  k_9 = t;
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
        {
          ATerm o_15 = NULL,p_15 = NULL;
          o_15 = t;
          l_15 :
          if(match_cons(o_15, sym_Input_1))
            {
              p_15 = ATgetArgument(o_15, 0);
              if(((n_15 != NULL) && (n_15 != p_15)))
                _fail(p_15);
              else
                n_15 = p_15;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_1);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm q_15 = NULL;
          t = term_n_9;
          {
            q_15 = t;
            if(((n_15 != NULL) && (n_15 != q_15)))
              _fail(q_15);
            else
              n_15 = q_15;
          }
        }
      }
  }
  t = k_9;
  {
    ATerm f_1 (ATerm t)
    {
      t = not_null(n_15);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm u_15 = NULL;
    u_15 = t;
    t_15 :
    if(!(match_string(u_15, "-v")))
      {
        if(!(match_string(u_15, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = term_t_9;
    t = set_config_0(t);
    t = term_y_9;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_z_9;
    return(t);
  }
  t = Option_3(t, g_1, k_1, l_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm x_15 = NULL;
    x_15 = t;
    v_15 :
    if(!(match_string(x_15, "-k")))
      {
        if(!(match_string(x_15, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm a_10;
    a_10 = t;
    {
      ATerm y_15 = NULL;
      ATerm z_15 = NULL;
      t = string_to_int_0(t);
      {
        z_15 = t;
        if(((y_15 != NULL) && (y_15 != z_15)))
          _fail(z_15);
        else
          y_15 = z_15;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, not_null(y_15));
        t = set_config_0(t);
      }
    }
    t = a_10;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_d_10;
    return(t);
  }
  t = ArgOption_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = SSL_string_to_int(not_null(c_16));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm k_16 = NULL;
        k_16 = t;
        f_16 :
        if(!(match_string(k_16, "-S")))
          {
            if(!(match_string(k_16, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        t = term_l_10;
        t = set_config_0(t);
        t = term_m_10;
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        t = term_n_10;
        return(t);
      }
      t = Option_3(t, p_1, q_1, r_1);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm l_16 = NULL;
              l_16 = t;
              g_16 :
              if(!(match_string(l_16, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_1 (ATerm t)
            {
              ATerm o_16 = NULL;
              ATerm q_10;
              q_10 = t;
              {
                ATerm m_16 = NULL;
                ATerm n_16 = NULL;
                t = string_to_int_0(t);
                {
                  n_16 = t;
                  if(((m_16 != NULL) && (m_16 != n_16)))
                    _fail(n_16);
                  else
                    m_16 = n_16;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(m_16));
                  t = set_config_0(t);
                }
              }
              t = q_10;
              {
                ATerm p_16 = NULL;
                p_16 = t;
                if(((o_16 != NULL) && (o_16 != p_16)))
                  _fail(p_16);
                else
                  o_16 = p_16;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_16));
              }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_u_10;
              return(t);
            }
            t = ArgOption_3(t, s_1, t_1, v_1);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm w_1 (ATerm t)
              {
                ATerm q_16 = NULL;
                q_16 = t;
                j_16 :
                if(!(match_string(q_16, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_1 (ATerm t)
              {
                t = term_b_11;
                t = set_config_0(t);
                t = term_c_11;
                return(t);
              }
              ATerm y_1 (ATerm t)
              {
                t = term_d_11;
                return(t);
              }
              t = Option_3(t, w_1, x_1, y_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm f_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = f_11;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm w_16 = NULL;
    w_16 = t;
    t_16 :
    if(!(match_string(w_16, "-o")))
      {
        if(!(match_string(w_16, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm z_16 = NULL;
    ATerm n_11;
    n_11 = t;
    {
      ATerm x_16 = NULL;
      ATerm y_16 = NULL;
      y_16 = t;
      if(((x_16 != NULL) && (x_16 != y_16)))
        _fail(y_16);
      else
        x_16 = y_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(x_16));
        t = set_config_0(t);
      }
    }
    t = n_11;
    {
      ATerm a_17 = NULL;
      a_17 = t;
      if(((z_16 != NULL) && (z_16 != a_17)))
        _fail(a_17);
      else
        z_16 = a_17;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_16));
    }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_q_11;
    return(t);
  }
  t = ArgOption_3(t, z_1, e_2, f_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = r_11;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm e_17 = NULL;
          e_17 = t;
          d_17 :
          if(!(match_string(e_17, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = term_v_11;
          t = set_config_0(t);
          t = term_w_11;
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_x_11;
          return(t);
        }
        t = Option_3(t, g_2, h_2, m_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  k_17 = t;
  i_17 :
  if(match_string(k_17, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
        {
          l_17 = ATgetFirst((ATermList) k_17);
          m_17 = (ATerm) ATgetNext((ATermList) k_17);
          j_17 :
          if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
            {
              n_17 = ATgetFirst((ATermList) m_17);
              o_17 = (ATerm) ATgetNext((ATermList) m_17);
              {
                ATerm s_17 = NULL;
                ATerm y_11;
                y_11 = t;
                {
                  t = not_null(l_17);
                  t = l_0(t);
                }
                t = y_11;
                {
                  ATerm t_17 = NULL;
                  t = not_null(n_17);
                  {
                    t = m_0(t);
                    {
                      t_17 = t;
                      if(((s_17 != NULL) && (s_17 != t_17)))
                        _fail(t_17);
                      else
                        s_17 = t_17;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_17)), not_null(s_17));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm a_18 = NULL;
    a_18 = t;
    x_17 :
    if(!(match_string(a_18, "-i")))
      {
        if(!(match_string(a_18, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm d_18 = NULL;
    ATerm z_11;
    z_11 = t;
    {
      ATerm b_18 = NULL;
      ATerm c_18 = NULL;
      c_18 = t;
      if(((b_18 != NULL) && (b_18 != c_18)))
        _fail(c_18);
      else
        b_18 = c_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(b_18));
        t = set_config_0(t);
      }
    }
    t = z_11;
    {
      ATerm e_18 = NULL;
      e_18 = t;
      if(((d_18 != NULL) && (d_18 != e_18)))
        _fail(e_18);
      else
        d_18 = e_18;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_18));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_f_12;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATempty, term_o_12));
  {
    t = printnl_0(t);
    {
      t = term_a_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_18 = NULL;
  i_18 = t;
  t = SSL_TicksToSeconds(not_null(i_18));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_18), not_null(p_18));
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = SSL_addr(not_null(o_18), not_null(p_18));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_78 (ATerm), ATerm h_78 (ATerm))
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_78(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
        ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
        w_18 = t;
        v_18 :
        if(((ATgetType(w_18) == AT_LIST) && !(ATisEmpty(w_18))))
          {
            x_18 = ATgetFirst((ATermList) w_18);
            y_18 = (ATerm) ATgetNext((ATermList) w_18);
            {
              ATerm b_19 = NULL;
              ATerm c_19 = NULL;
              t = not_null(y_18);
              {
                t = foldr_2(t, g_78, h_78);
                {
                  c_19 = t;
                  if(((b_19 != NULL) && (b_19 != c_19)))
                    _fail(c_19);
                  else
                    b_19 = c_19;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(b_19));
                t = h_78(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm e_77 (ATerm), ATerm f_77 (ATerm))
{
  ATerm j_19 = NULL;
  ATerm l_19 = NULL;
  j_19 = t;
  {
    ATerm m_19 = NULL;
    ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
    t = not_null(j_19);
    {
      m_19 = t;
      {
        t = SSL_explode_term(not_null(m_19));
        {
          o_19 = t;
          i_19 :
          if(match_cons(o_19, sym__2))
            {
              p_19 = ATgetArgument(o_19, 0);
              q_19 = ATgetArgument(o_19, 1);
              if(((l_19 != NULL) && (l_19 != q_19)))
                _fail(q_19);
              else
                l_19 = q_19;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_19);
      t = foldr_2(t, e_77, f_77);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm s_2 (ATerm t)
    {
      t = term_k_10;
      return(t);
    }
    t = crush_2(t, s_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym__2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm u_12;
        u_12 = t;
        {
          ATerm x_12 = t;
          int y_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_19), not_null(y_19));
              ;
              LocalPopChoice(y_12);
            }
          else
            {
              t = x_12;
              t = SSL_gtr(not_null(x_19), not_null(y_19));
            }
        }
        t = u_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm e_20 = NULL;
  ATerm z_12 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
      f_20 = t;
      d_20 :
      if(match_cons(f_20, sym__2))
        {
          g_20 = ATgetArgument(f_20, 0);
          h_20 = ATgetArgument(f_20, 1);
          {
            if(((e_20 != NULL) && (e_20 != g_20)))
              _fail(g_20);
            else
              e_20 = g_20;
            if(((e_20 != NULL) && (e_20 != h_20)))
              _fail(h_20);
            else
              e_20 = h_20;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = z_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm d_13;
    d_13 = t;
    {
      ATerm k_20 = NULL;
      ATerm l_20 = NULL;
      t = term_k_8;
      {
        t = get_config_0(t);
        {
          l_20 = t;
          if(((k_20 != NULL) && (k_20 != l_20)))
            _fail(l_20);
          else
            k_20 = l_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), term_a_7);
        t = geq_0(t);
      }
    }
    t = d_13;
    t = m_85(t);
    return(t);
  }
  t = try_1(t, t_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm p_20 = NULL,r_20 = NULL;
    ATerm i_13;
    i_13 = t;
    {
      ATerm q_20 = NULL;
      t = run_time_0(t);
      {
        q_20 = t;
        if(((p_20 != NULL) && (p_20 != q_20)))
          _fail(q_20);
        else
          p_20 = q_20;
      }
    }
    t = i_13;
    {
      ATerm s_20 = NULL;
      t = term_j_13;
      {
        t = get_config_0(t);
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_13), not_null(p_20)), term_k_13), not_null(r_20)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_2);
  {
    t = term_k_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_Version_0))
    {
      ATerm b_21 = NULL,d_21 = NULL;
      ATerm q_13;
      q_13 = t;
      {
        ATerm c_21 = NULL;
        t = SSLgetAnnotations(not_null(z_20));
        {
          c_21 = t;
          if(((b_21 != NULL) && (b_21 != c_21)))
            _fail(c_21);
          else
            b_21 = c_21;
        }
      }
      t = q_13;
      {
        ATerm e_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_21));
        {
          e_21 = t;
          if(((d_21 != NULL) && (d_21 != e_21)))
            _fail(e_21);
          else
            d_21 = e_21;
        }
        t = not_null(d_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        {
          ATerm t_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(v_13);
            }
          else
            {
              t = t_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_3);
  t = s_83(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  t = SSL_table_create(not_null(j_21));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
  {
    ATerm c_14;
    c_14 = t;
    {
      t = term_d_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_14, term_e_14, not_null(n_21));
          t = table_put_0(t);
        }
      }
    }
    t = c_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  t = SSL_table_destroy(not_null(r_21));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  t = SSL_exit(not_null(v_21));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(((ATgetType(y_22) == AT_LIST) && ATisEmpty(y_22)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
        {
          z_22 = ATgetFirst((ATermList) y_22);
          a_23 = (ATerm) ATgetNext((ATermList) y_22);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm f_14;
  f_14 = t;
  {
    ATerm d_23 = NULL;
    ATerm g_23 = NULL;
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          ATerm e_23 = NULL;
          ATerm f_23 = NULL;
          f_23 = t;
          if(((e_23 != NULL) && (e_23 != f_23)))
            _fail(f_23);
          else
            e_23 = f_23;
          t = (ATerm) ATinsert(ATempty, not_null(e_23));
        }
      }
    {
      g_23 = t;
      if(((d_23 != NULL) && (d_23 != g_23)))
        _fail(g_23);
      else
        d_23 = g_23;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(d_23));
      t = printnl_0(t);
    }
  }
  t = f_14;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATempty, term_o_14);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm j_23 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = Cons_2(t, s_71, j_23);
      }
    return(t);
  }
  t = j_23(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  s_23 = t;
  p_23 :
  if(((ATgetType(s_23) == AT_LIST) && !(ATisEmpty(s_23))))
    {
      q_23 = ATgetFirst((ATermList) s_23);
      r_23 = (ATerm) ATgetNext((ATermList) s_23);
      {
        ATerm v_23 = NULL;
        t = not_null(r_23);
        {
          ATerm r_14;
          r_14 = t;
          {
            ATerm w_23 = NULL,y_23 = NULL,a_24 = NULL;
            ATerm w_14;
            w_14 = t;
            {
              ATerm x_23 = NULL;
              t = j_0(t);
              {
                x_23 = t;
                if(((w_23 != NULL) && (w_23 != x_23)))
                  _fail(x_23);
                else
                  w_23 = x_23;
              }
            }
            t = w_14;
            {
              ATerm z_23 = NULL;
              t = not_null(q_23);
              {
                t = i_0(t);
                {
                  z_23 = t;
                  if(((y_23 != NULL) && (y_23 != z_23)))
                    _fail(z_23);
                  else
                    y_23 = z_23;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_23)), not_null(y_23));
                {
                  a_24 = t;
                  if(((v_23 != NULL) && (v_23 != a_24)))
                    _fail(a_24);
                  else
                    v_23 = a_24;
                }
              }
            }
          }
          t = r_14;
          {
            ATerm b_3 (ATerm t)
            {
              t = not_null(v_23);
              return(t);
            }
            t = reverse_acc_2(t, i_0, b_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(s_23) == AT_LIST) && ATisEmpty(s_23)))
        {
          {
            t = term_f_6;
            t = j_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm m_24 = NULL;
  ATerm n_24 = NULL;
  t = term_f_6;
  {
    t = h_0(t);
    {
      n_24 = t;
      if(((m_24 != NULL) && (m_24 != n_24)))
        _fail(n_24);
      else
        m_24 = n_24;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_14), not_null(m_24)), term_x_14);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_Program_1))
    {
      v_24 = ATgetArgument(u_24, 0);
      {
        ATerm y_24 = NULL,d_25 = NULL;
        ATerm z_24 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
        {
          t = not_null(v_24);
          {
            ATerm f_25 = NULL;
            t = e_63(t);
            {
              d_25 = t;
              {
                ATerm g_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_25)), not_null(y_24));
                {
                  g_25 = t;
                  if(((f_25 != NULL) && (f_25 != g_25)))
                    _fail(g_25);
                  else
                    f_25 = g_25;
                }
                t = not_null(f_25);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm p_25 = NULL;
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_25 = NULL;
      t = term_j_13;
      {
        t = get_config_0(t);
        {
          q_25 = t;
          if(((p_25 != NULL) && (p_25 != q_25)))
            _fail(q_25);
          else
            p_25 = q_25;
        }
      }
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm j_3 (ATerm t)
          {
            ATerm r_25 = NULL;
            r_25 = t;
            if(((p_25 != NULL) && (p_25 != r_25)))
              _fail(r_25);
            else
              p_25 = r_25;
            return(t);
          }
          t = Program_1(t, j_3);
          return(t);
        }
        t = option_defined_1(t, i_3);
      }
    }
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(p_25);
        return(t);
      }
      t = short_description_1(t, q_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_3);
    {
      t = term_d_15;
      {
        t = echo_0(t);
        {
          t = term_k_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm s_25 = NULL;
                  ATerm t_25 = NULL;
                  t_25 = t;
                  if(((s_25 != NULL) && (s_25 != t_25)))
                    _fail(t_25);
                  else
                    s_25 = t_25;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), term_m_15);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm u_25 = NULL;
                    ATerm v_25 = NULL;
                    ATerm u_3 (ATerm t)
                    {
                      t = not_null(p_25);
                      return(t);
                    }
                    t = long_description_1(t, u_3);
                    {
                      v_25 = t;
                      if(((u_25 != NULL) && (u_25 != v_25)))
                        _fail(v_25);
                      else
                        u_25 = v_25;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(u_25)), term_r_15);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_3);
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm s_15;
  s_15 = t;
  {
    ATerm b_26 = NULL;
    ATerm c_26 = NULL;
    c_26 = t;
    if(((b_26 != NULL) && (b_26 != c_26)))
      _fail(c_26);
    else
      b_26 = c_26;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATempty, not_null(b_26)));
      t = printnl_0(t);
    }
  }
  t = s_15;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_82 (ATerm))
{
  ATerm w_15;
  w_15 = t;
  {
    t = r_82(t);
    t = debug_0(t);
  }
  t = w_15;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_Undefined_1))
    {
      k_26 = ATgetArgument(j_26, 0);
      {
        ATerm n_26 = NULL,p_26 = NULL;
        ATerm o_26 = NULL;
        t = SSLgetAnnotations(not_null(j_26));
        {
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
        }
        {
          t = not_null(k_26);
          {
            ATerm r_26 = NULL;
            t = f_63(t);
            {
              p_26 = t;
              {
                ATerm s_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_26)), not_null(n_26));
                {
                  s_26 = t;
                  if(((r_26 != NULL) && (r_26 != s_26)))
                    _fail(s_26);
                  else
                    r_26 = s_26;
                }
                t = not_null(r_26);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm x_26 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_72, _id);
        ;
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = Cons_2(t, _id, x_26);
      }
    return(t);
  }
  t = x_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_86 (ATerm))
{
  t = fetch_1(t, p_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Help_0))
    {
      ATerm e_27 = NULL,g_27 = NULL;
      ATerm d_16;
      d_16 = t;
      {
        ATerm f_27 = NULL;
        t = SSLgetAnnotations(not_null(c_27));
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
      }
      t = d_16;
      {
        ATerm h_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
        t = not_null(g_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm e_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_63(t);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = e_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  m_27 :
  if(match_cons(n_27, sym__2))
    {
      o_27 = ATgetArgument(n_27, 0);
      p_27 = ATgetArgument(n_27, 1);
      t = SSL_table_get(not_null(o_27), not_null(p_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym__3))
    {
      x_27 = ATgetArgument(w_27, 0);
      y_27 = ATgetArgument(w_27, 1);
      z_27 = ATgetArgument(w_27, 2);
      {
        ATerm i_16;
        i_16 = t;
        {
          ATerm d_28 = NULL;
          ATerm e_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), not_null(y_27));
          {
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_16);
              }
            else
              {
                t = r_16;
                t = (ATerm) ATempty;
              }
            {
              e_28 = t;
              if(((d_28 != NULL) && (d_28 != e_28)))
                _fail(e_28);
              else
                d_28 = e_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_27), not_null(y_27), (ATerm) ATinsert(CheckATermList(not_null(d_28)), not_null(z_27)));
            t = table_put_0(t);
          }
        }
        t = i_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_87 (ATerm))
{
  ATerm i_28 = NULL;
  ATerm j_28 = NULL;
  t = term_f_6;
  {
    t = u_87(t);
    {
      j_28 = t;
      if(((i_28 != NULL) && (i_28 != j_28)))
        _fail(j_28);
      else
        i_28 = j_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_15, term_j_15, not_null(i_28));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_string(p_28, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
        {
          q_28 = ATgetFirst((ATermList) p_28);
          r_28 = (ATerm) ATgetNext((ATermList) p_28);
          {
            ATerm u_28 = NULL;
            ATerm u_16;
            u_16 = t;
            {
              t = not_null(q_28);
              t = a_0(t);
            }
            t = u_16;
            {
              ATerm v_28 = NULL;
              t = term_f_6;
              {
                t = d_0(t);
                {
                  v_28 = t;
                  if(((u_28 != NULL) && (u_28 != v_28)))
                    _fail(v_28);
                  else
                    u_28 = v_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_28)), not_null(u_28));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_29 = NULL;
    a_29 = t;
    z_28 :
    if(!(match_string(a_29, "--help")))
      {
        if(!(match_string(a_29, "-h")))
          {
            if(!(match_string(a_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_b_17;
    {
      t = set_config_0(t);
      t = term_c_17;
    }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_f_17;
    return(t);
  }
  t = Option_3(t, z_3, a_4, f_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  c_29 :
  if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
    {
      e_29 = ATgetFirst((ATermList) d_29);
      f_29 = (ATerm) ATgetNext((ATermList) d_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_54 (ATerm), ATerm h_54 (ATerm))
{
  ATerm p_29 = NULL,r_29 = NULL,s_29 = NULL;
  p_29 = t;
  o_29 :
  if(((ATgetType(p_29) == AT_LIST) && !(ATisEmpty(p_29))))
    {
      r_29 = ATgetFirst((ATermList) p_29);
      s_29 = (ATerm) ATgetNext((ATermList) p_29);
      {
        ATerm w_29 = NULL,y_29 = NULL;
        ATerm x_29 = NULL;
        t = SSLgetAnnotations(not_null(p_29));
        {
          x_29 = t;
          if(((w_29 != NULL) && (w_29 != x_29)))
            _fail(x_29);
          else
            w_29 = x_29;
        }
        {
          t = not_null(r_29);
          {
            ATerm a_30 = NULL;
            t = g_54(t);
            {
              y_29 = t;
              {
                t = not_null(s_29);
                {
                  ATerm c_30 = NULL;
                  t = h_54(t);
                  {
                    a_30 = t;
                    {
                      ATerm d_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_30)), not_null(y_29)), not_null(w_29));
                      {
                        d_30 = t;
                        if(((c_30 != NULL) && (c_30 != d_30)))
                          _fail(d_30);
                        else
                          c_30 = d_30;
                      }
                      t = not_null(c_30);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  o_30 :
  if(((ATgetType(p_30) == AT_LIST) && ATisEmpty(p_30)))
    {
      {
        ATerm r_30 = NULL,t_30 = NULL;
        ATerm g_17;
        g_17 = t;
        {
          ATerm s_30 = NULL;
          t = SSLgetAnnotations(not_null(p_30));
          {
            s_30 = t;
            if(((r_30 != NULL) && (r_30 != s_30)))
              _fail(s_30);
            else
              r_30 = s_30;
          }
        }
        t = g_17;
        {
          ATerm u_30 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_30));
          {
            u_30 = t;
            if(((t_30 != NULL) && (t_30 != u_30)))
              _fail(u_30);
            else
              t_30 = u_30;
          }
          t = not_null(t_30);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym__2))
    {
      b_31 = ATgetArgument(a_31, 0);
      c_31 = ATgetArgument(a_31, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(b_31), not_null(c_31));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm h_17;
  h_17 = t;
  {
    ATerm g_4 (ATerm t)
    {
      t = term_p_17;
      t = s_87(t);
      return(t);
    }
    t = try_1(t, g_4);
  }
  t = h_17;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm k_31 = NULL;
      ATerm q_17;
      q_17 = t;
      {
        ATerm i_31 = NULL;
        ATerm j_31 = NULL;
        j_31 = t;
        if(((i_31 != NULL) && (i_31 != j_31)))
          _fail(j_31);
        else
          i_31 = j_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(i_31));
          t = set_config_0(t);
        }
      }
      t = q_17;
      {
        ATerm l_31 = NULL;
        l_31 = t;
        if(((k_31 != NULL) && (k_31 != l_31)))
          _fail(l_31);
        else
          k_31 = l_31;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_31));
      }
      return(t);
    }
    ATerm i_4 (ATerm t)
    {
      ATerm r_17 = t;
      int u_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              {
                t = s_87(t);
                t = Cons_2(t, _id, i_4);
              }
            }
          ;
          LocalPopChoice(u_17);
        }
      else
        {
          t = r_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_4, i_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  ATerm y_17;
  y_17 = t;
  {
    ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
    u_31 = t;
    q_31 :
    if(match_cons(u_31, sym__3))
      {
        v_31 = ATgetArgument(u_31, 0);
        w_31 = ATgetArgument(u_31, 1);
        x_31 = ATgetArgument(u_31, 2);
        {
          if(((r_31 != NULL) && (r_31 != v_31)))
            _fail(v_31);
          else
            r_31 = v_31;
          {
            if(((s_31 != NULL) && (s_31 != w_31)))
              _fail(w_31);
            else
              s_31 = w_31;
            {
              if(((t_31 != NULL) && (t_31 != x_31)))
                _fail(x_31);
              else
                t_31 = x_31;
              t = SSL_table_put(not_null(r_31), not_null(s_31), not_null(t_31));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm a_32 = NULL;
  ATerm z_17;
  z_17 = t;
  {
    t = term_f_18;
    t = table_put_0(t);
  }
  t = z_17;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm g_18 = t;
      int h_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_87(t);
          ;
          LocalPopChoice(h_18);
        }
      else
        {
          t = g_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_4);
    {
      ATerm k_4 (ATerm t)
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_18;
            l_18 = t;
            {
              ATerm q_18 = t;
              int r_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_16;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(r_18);
                }
              else
                {
                  t = q_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = l_18;
            {
              t = system_usage_0(t);
              {
                t = term_k_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            {
              ATerm m_4 (ATerm t)
              {
                ATerm n_4 (ATerm t)
                {
                  ATerm b_32 = NULL;
                  b_32 = t;
                  if(((a_32 != NULL) && (a_32 != b_32)))
                    _fail(b_32);
                  else
                    a_32 = b_32;
                  return(t);
                }
                t = Undefined_1(t, n_4);
                return(t);
              }
              t = option_defined_1(t, m_4);
              {
                ATerm o_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_32)), term_s_18);
                  return(t);
                }
                t = say_1(t, o_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_4);
      {
        ATerm t_18;
        t_18 = t;
        {
          t = term_i_15;
          t = table_destroy_0(t);
        }
        t = t_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm))
{
  t = parse_options_1(t, y_83);
  {
    t = store_options_0(t);
    {
      t = a_84(t);
      {
        ATerm u_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_83);
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = u_18;
            {
              ATerm a_19 = t;
              int d_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_84(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(d_19);
                }
              else
                {
                  t = a_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_84(t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, p_84);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, p_4, r_84, s_84, r_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm g_19;
      g_19 = t;
      {
        ATerm e_32 = NULL;
        ATerm f_32 = NULL;
        t = term_j_13;
        {
          t = get_config_0(t);
          {
            f_32 = t;
            if(((e_32 != NULL) && (e_32 != f_32)))
              _fail(f_32);
            else
              e_32 = f_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATempty, not_null(e_32)));
          t = printnl_0(t);
        }
      }
      t = g_19;
      return(t);
    }
    t = if_verbose2_1(t, h_5);
    return(t);
  }
  t = iowrap_4(t, j_84, k_84, l_84, v_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_84 (ATerm), ATerm i_84 (ATerm))
{
  t = iowrap_3(t, h_84, i_84, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    t = _2(t, _id, e_84);
    return(t);
  }
  t = iowrap_2(t, i_5, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm h_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = treeviz_0(t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = h_19;
      t = iowrap_1(t, treeviz_0);
    }
  return(t);
}
