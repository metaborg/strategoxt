#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
ATerm term_r_19;
ATerm term_x_18;
ATerm term_k_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_l_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_b_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_n_9;
ATerm term_u_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_j_6;
ATerm term_t_5;
ATerm term_n_5;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_l_4;
void init_constant_terms (void)
{
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("[ ]", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_n_5);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_n_5);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_n_5);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_a_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_n_5);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__3, term_w_15, term_a_16, (ATerm) ATempty);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm string_as_chars_1 (ATerm, ATerm d_81 (ATerm));
ATerm escape_0 (ATerm);
ATerm BuildEdge_0 (ATerm);
ATerm MkEdges_2 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm TreeViz_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm NewNodeName_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm NodeName_0 (ATerm);
ATerm treeviz_0 (ATerm);
ATerm _2 (ATerm, ATerm p_52 (ATerm), ATerm q_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_71 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm y_84 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_83 (ATerm));
ATerm debug_1 (ATerm, ATerm b_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_79 (ATerm), ATerm h_79 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm));
ATerm crush_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_83 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm d_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm w_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_82 (ATerm));
ATerm Undefined_1 (ATerm, ATerm x_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm));
ATerm iowrap_4 (ATerm, ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_83 (ATerm), ATerm t_83 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_83 (ATerm));
ATerm main_0 (ATerm);
ATerm BuildNode_0 (ATerm t)
{
  ATerm i_1 = NULL,u_1 = NULL,w_1 = NULL;
  i_1 = t;
  h_1 :
  if(match_cons(i_1, sym__2))
    {
      u_1 = ATgetArgument(i_1, 0);
      w_1 = ATgetArgument(i_1, 1);
      {
        ATerm c_2 = NULL,e_2 = NULL;
        ATerm f_2 = NULL;
        t = not_null(u_1);
        {
          t = NodeName_0(t);
          {
            t = string_as_chars_1(t, escape_chars_0);
            {
              ATerm g_2 = NULL;
              t = string_as_chars_1(t, double_quote_chars_0);
              {
                f_2 = t;
                {
                  if(((c_2 != NULL) && (c_2 != f_2)))
                    _fail(f_2);
                  else
                    c_2 = f_2;
                  {
                    t = not_null(w_1);
                    {
                      t = NodeName_0(t);
                      {
                        t = string_as_chars_1(t, escape_chars_0);
                        {
                          t = string_as_chars_1(t, double_quote_chars_0);
                          {
                            g_2 = t;
                            if(((e_2 != NULL) && (e_2 != g_2)))
                              _fail(g_2);
                            else
                              e_2 = g_2;
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
        t = (ATerm) ATmakeAppl(sym_node_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_name_1, not_null(c_2))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_label_2, (ATerm)ATempty, not_null(e_2))));
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
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL;
  n_2 = t;
  m_2 :
  if(match_cons(n_2, sym__2))
    {
      o_2 = ATgetArgument(n_2, 0);
      p_2 = ATgetArgument(n_2, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_2)), not_null(o_2)), (ATerm) ATinsert(ATempty, not_null(o_2)));
        {
          ATerm v_3 = t;
          int k_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(k_4);
            }
          else
            {
              t = v_3;
              t = conc_more_lists_0(t);
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
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm u_2 = NULL;
  ATerm v_2 = NULL;
  v_2 = t;
  if(((u_2 != NULL) && (u_2 != v_2)))
    _fail(v_2);
  else
    u_2 = v_2;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_4, not_null(u_2));
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
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
  a_3 = t;
  y_2 :
  if(((ATgetType(a_3) == AT_LIST) && !(ATisEmpty(a_3))))
    {
      b_3 = ATgetFirst((ATermList) a_3);
      c_3 = (ATerm) ATgetNext((ATermList) a_3);
      z_2 :
      if(match_int(b_3, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_3)), term_n_4), term_m_4);
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
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
  i_3 = t;
  g_3 :
  if(((ATgetType(i_3) == AT_LIST) && !(ATisEmpty(i_3))))
    {
      j_3 = ATgetFirst((ATermList) i_3);
      k_3 = (ATerm) ATgetNext((ATermList) i_3);
      h_3 :
      if(match_int(j_3, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_3)), term_m_4), term_m_4);
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
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
  q_3 = t;
  o_3 :
  if(((ATgetType(q_3) == AT_LIST) && !(ATisEmpty(q_3))))
    {
      r_3 = ATgetFirst((ATermList) q_3);
      s_3 = (ATerm) ATgetNext((ATermList) q_3);
      p_3 :
      if(match_int(r_3, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(s_3)), term_l_4), term_m_4);
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
  ATerm o_4 = t;
  int q_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(q_4);
    }
  else
    {
      t = o_4;
      {
        ATerm r_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(s_4);
          }
        else
          {
            t = r_4;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm t_4 = t;
  int v_4 = stack_ptr;
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
      LocalPopChoice(v_4);
    }
  else
    {
      t = t_4;
      {
        ATerm z_4 = t;
        int l_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(l_5);
          }
        else
          {
            t = z_4;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm d_81 (ATerm))
{
  t = explode_string_0(t);
  {
    t = d_81(t);
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
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym__2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      {
        ATerm f_4 = NULL,g_4 = NULL;
        ATerm h_4 = NULL;
        t = not_null(b_4);
        {
          t = NodeName_0(t);
          {
            t = string_as_chars_1(t, escape_chars_0);
            {
              ATerm i_4 = NULL;
              t = string_as_chars_1(t, double_quote_chars_0);
              {
                h_4 = t;
                {
                  if(((f_4 != NULL) && (f_4 != h_4)))
                    _fail(h_4);
                  else
                    f_4 = h_4;
                  {
                    t = not_null(c_4);
                    {
                      t = NodeName_0(t);
                      {
                        t = string_as_chars_1(t, escape_chars_0);
                        {
                          t = string_as_chars_1(t, double_quote_chars_0);
                          {
                            i_4 = t;
                            if(((g_4 != NULL) && (g_4 != i_4)))
                              _fail(i_4);
                            else
                              g_4 = i_4;
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
        t = (ATerm) ATmakeAppl(sym_edge1_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_target_1, not_null(g_4))), (ATerm) ATmakeAppl(sym_source_1, not_null(f_4))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkEdges_2 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm))
{
  ATerm u_4 = NULL;
  ATerm w_4 = NULL,x_4 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  u_4 = t;
  {
    ATerm m_5;
    m_5 = t;
    {
      ATerm y_4 = NULL;
      ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
      t = not_null(u_4);
      {
        y_4 = t;
        {
          t = SSL_explode_term(not_null(y_4));
          {
            a_5 = t;
            p_4 :
            if(match_cons(a_5, sym__2))
              {
                b_5 = ATgetArgument(a_5, 0);
                c_5 = ATgetArgument(a_5, 1);
                {
                  if(((w_4 != NULL) && (w_4 != b_5)))
                    _fail(b_5);
                  else
                    w_4 = b_5;
                  if(((x_4 != NULL) && (x_4 != c_5)))
                    _fail(c_5);
                  else
                    x_4 = c_5;
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
    t = m_5;
    {
      ATerm g_5 = NULL;
      t = not_null(w_4);
      {
        t = NodeName_0(t);
        {
          ATerm h_5 = NULL,j_5 = NULL;
          t = NewNodeName_0(t);
          {
            g_5 = t;
            {
              if(((e_5 != NULL) && (e_5 != g_5)))
                _fail(g_5);
              else
                e_5 = g_5;
              {
                ATerm i_5 = NULL;
                t = term_n_5;
                {
                  t = i_63(t);
                  {
                    i_5 = t;
                    if(((h_5 != NULL) && (h_5 != i_5)))
                      _fail(i_5);
                    else
                      h_5 = i_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_5), not_null(h_5));
                  {
                    ATerm k_5 = NULL;
                    t = BuildEdge_0(t);
                    {
                      j_5 = t;
                      {
                        if(((d_5 != NULL) && (d_5 != j_5)))
                          _fail(j_5);
                        else
                          d_5 = j_5;
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(e_5), not_null(w_4), not_null(x_4));
                          {
                            t = j_63(t);
                            {
                              k_5 = t;
                              if(((f_5 != NULL) && (f_5 != k_5)))
                                _fail(k_5);
                              else
                                f_5 = k_5;
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
      t = (ATerm) ATinsert(CheckATermList(not_null(f_5)), not_null(d_5));
    }
  }
  return(t);
}
ATerm TreeViz_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,f_6 = NULL;
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,h_6 = NULL;
  ATerm l_6 (ATerm t)
  {
    if(((a_6 != NULL) && (a_6 != c_6)))
      _fail(c_6);
    else
      a_6 = c_6;
    {
      if(((y_5 != NULL) && (y_5 != d_6)))
        _fail(d_6);
      else
        y_5 = d_6;
      {
        if(((z_5 != NULL) && (z_5 != e_6)))
          _fail(e_6);
        else
          z_5 = e_6;
        {
          t = not_null(z_5);
          {
            ATerm c_0 (ATerm t)
            {
              ATerm e_0 (ATerm t)
              {
                t = not_null(a_6);
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
  b_6 = t;
  u_5 :
  if(match_cons(b_6, sym__3))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      e_6 = ATgetArgument(b_6, 2);
      v_5 :
      if(((ATgetType(e_6) == AT_LIST) && ATisEmpty(e_6)))
        {
          {
            ATerm o_5 = t;
            int p_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((a_6 != NULL) && (a_6 != c_6)))
                  _fail(c_6);
                else
                  a_6 = c_6;
                {
                  if(((y_5 != NULL) && (y_5 != d_6)))
                    _fail(d_6);
                  else
                    y_5 = d_6;
                  t = (ATerm) ATempty;
                }
                LocalPopChoice(p_5);
              }
            else
              {
                t = o_5;
                t = l_6(t);
              }
          }
        }
      else
        {
          t = l_6(t);
        }
    }
  else
    {
      _fail(t);
    }
  {
    f_6 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), not_null(y_5));
      {
        t = BuildNode_0(t);
        {
          h_6 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(f_6)), not_null(h_6));
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
  ATerm t_6 = NULL;
  ATerm v_6 = NULL,x_6 = NULL;
  t_6 = t;
  {
    ATerm q_5;
    q_5 = t;
    {
      ATerm w_6 = NULL;
      t = term_n_5;
      {
        t = new_0(t);
        {
          w_6 = t;
          if(((v_6 != NULL) && (v_6 != w_6)))
            _fail(w_6);
          else
            v_6 = w_6;
        }
      }
    }
    t = q_5;
    {
      ATerm z_6 = NULL;
      t = not_null(t_6);
      {
        t = explode_string_0(t);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm r_5 = t;
            int s_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_6 = NULL;
                y_6 = t;
                r_6 :
                if(match_int(y_6, 10))
                  {
                    t = term_t_5;
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(s_5);
              }
            else
              {
                t = r_5;
                {
                }
              }
            return(t);
          }
          t = map_1(t, f_0);
          {
            t = implode_string_0(t);
            {
              z_6 = t;
              if(((x_6 != NULL) && (x_6 != z_6)))
                _fail(z_6);
              else
                x_6 = z_6;
            }
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_6)), not_null(v_6));
        t = concat_strings_0(t);
      }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  t = SSL_int_to_string(not_null(f_7));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm j_7 = NULL;
  j_7 = t;
  t = SSL_is_int(not_null(j_7));
  return(t);
}
ATerm NodeName_0 (ATerm t)
{
  ATerm o_7 = NULL;
  ATerm q_7 = NULL;
  o_7 = t;
  {
    ATerm r_7 = NULL;
    ATerm w_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_int_0(t);
        t = int_to_string_0(t);
        LocalPopChoice(x_5);
      }
    else
      {
        t = w_5;
        {
          ATerm g_6 = t;
          int i_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              t = term_j_6;
              LocalPopChoice(i_6);
            }
          else
            {
              t = g_6;
              {
              }
            }
        }
      }
    {
      r_7 = t;
      if(((q_7 != NULL) && (q_7 != r_7)))
        _fail(r_7);
      else
        q_7 = r_7;
    }
    t = not_null(q_7);
  }
  return(t);
}
ATerm treeviz_0 (ATerm t)
{
  ATerm a_8 = NULL;
  ATerm c_8 = NULL,d_8 = NULL,j_8 = NULL,k_8 = NULL;
  a_8 = t;
  {
    ATerm k_6;
    k_6 = t;
    {
      ATerm e_8 = NULL;
      ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
      t = not_null(a_8);
      {
        e_8 = t;
        {
          t = SSL_explode_term(not_null(e_8));
          {
            g_8 = t;
            x_7 :
            if(match_cons(g_8, sym__2))
              {
                h_8 = ATgetArgument(g_8, 0);
                i_8 = ATgetArgument(g_8, 1);
                {
                  if(((c_8 != NULL) && (c_8 != h_8)))
                    _fail(h_8);
                  else
                    c_8 = h_8;
                  if(((d_8 != NULL) && (d_8 != i_8)))
                    _fail(i_8);
                  else
                    d_8 = i_8;
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
    t = k_6;
    {
      ATerm l_8 = NULL;
      t = not_null(c_8);
      {
        t = NodeName_0(t);
        {
          ATerm m_8 = NULL;
          t = NewNodeName_0(t);
          {
            l_8 = t;
            {
              if(((j_8 != NULL) && (j_8 != l_8)))
                _fail(l_8);
              else
                j_8 = l_8;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_8), not_null(c_8), not_null(d_8));
                {
                  t = TreeViz_0(t);
                  {
                    m_8 = t;
                    if(((k_8 != NULL) && (k_8 != m_8)))
                      _fail(m_8);
                    else
                      k_8 = m_8;
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_GraphXML_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_graph_2, (ATerm)ATempty, not_null(k_8))));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_52 (ATerm), ATerm q_52 (ATerm))
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym__2))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      {
        ATerm e_9 = NULL,g_9 = NULL;
        ATerm f_9 = NULL;
        t = SSLgetAnnotations(not_null(y_8));
        {
          f_9 = t;
          if(((e_9 != NULL) && (e_9 != f_9)))
            _fail(f_9);
          else
            e_9 = f_9;
        }
        {
          t = not_null(z_8);
          {
            ATerm i_9 = NULL;
            t = p_52(t);
            {
              g_9 = t;
              {
                t = not_null(a_9);
                {
                  ATerm k_9 = NULL;
                  t = q_52(t);
                  {
                    i_9 = t;
                    {
                      ATerm l_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_9), not_null(i_9)), not_null(e_9));
                      {
                        l_9 = t;
                        if(((k_9 != NULL) && (k_9 != l_9)))
                          _fail(l_9);
                        else
                          k_9 = l_9;
                      }
                      t = not_null(k_9);
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
  ATerm t_9 = NULL;
  ATerm m_6;
  m_6 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm u_9 = NULL,v_9 = NULL;
      u_9 = t;
      s_9 :
      if(match_cons(u_9, sym_Program_1))
        {
          v_9 = ATgetArgument(u_9, 0);
          if(((t_9 != NULL) && (t_9 != v_9)))
            _fail(v_9);
          else
            t_9 = v_9;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, o_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_6), not_null(t_9)), term_o_6));
      {
        t = printnl_0(t);
        {
          t = term_q_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym__2))
    {
      a_10 = ATgetArgument(z_9, 0);
      b_10 = ATgetArgument(z_9, 1);
      {
        ATerm s_6;
        s_6 = t;
        t = SSL_printnl(not_null(a_10), not_null(b_10));
        t = s_6;
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
  ATerm g_10 = NULL;
  g_10 = t;
  t = SSL_implode_string(not_null(g_10));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_7);
    }
  else
    {
      t = u_6;
      {
        ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
        l_10 = t;
        k_10 :
        if(((ATgetType(l_10) == AT_LIST) && !(ATisEmpty(l_10))))
          {
            m_10 = ATgetFirst((ATermList) l_10);
            n_10 = (ATerm) ATgetNext((ATermList) l_10);
            {
              t = not_null(m_10);
              {
                ATerm p_0 (ATerm t)
                {
                  t = not_null(n_10);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_0);
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
  ATerm x_10 = NULL;
  ATerm z_10 = NULL;
  x_10 = t;
  {
    ATerm a_11 = NULL;
    ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
    t = not_null(x_10);
    {
      a_11 = t;
      {
        t = SSL_explode_term(not_null(a_11));
        {
          c_11 = t;
          v_10 :
          if(match_cons(c_11, sym__2))
            {
              d_11 = ATgetArgument(c_11, 0);
              e_11 = ATgetArgument(c_11, 1);
              w_10 :
              if(match_string(d_11, ""))
                {
                  if(((z_10 != NULL) && (z_10 != e_11)))
                    _fail(e_11);
                  else
                    z_10 = e_11;
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
      t = not_null(z_10);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm i_11 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_11);
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        {
          t = Nil_0(t);
          t = s_71(t);
        }
      }
    return(t);
  }
  t = i_11(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym__2))
    {
      m_11 = ATgetArgument(l_11, 0);
      n_11 = ATgetArgument(l_11, 1);
      {
        t = not_null(m_11);
        {
          ATerm q_0 (ATerm t)
          {
            t = not_null(n_11);
            return(t);
          }
          t = at_end_1(t, q_0);
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
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  t = SSL_explode_string(not_null(s_11));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  t = SSL_is_string(not_null(w_11));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_7);
    }
  else
    {
      t = i_7;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              ATerm n_7 = t;
              int p_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(p_7);
                }
              else
                {
                  t = n_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, r_0);
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
              f_12 = t;
              e_12 :
              if(match_cons(f_12, sym_Path_1))
                {
                  g_12 = ATgetArgument(f_12, 0);
                  t = not_null(g_12);
                }
              else
                {
                  if(match_cons(f_12, sym_Var_1))
                    {
                      g_12 = ATgetArgument(f_12, 0);
                      {
                        t = not_null(g_12);
                        {
                          ATerm s_7 = t;
                          int t_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(t_7);
                            }
                          else
                            {
                              t = s_7;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_u_7;
                                  return(t);
                                }
                                t = debug_1(t, s_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_12, sym_Prefix_2))
                        {
                          g_12 = ATgetArgument(f_12, 0);
                          h_12 = ATgetArgument(f_12, 1);
                          {
                            ATerm m_12 = NULL,o_12 = NULL;
                            ATerm v_7;
                            v_7 = t;
                            {
                              ATerm n_12 = NULL;
                              t = not_null(g_12);
                              {
                                t = eval_config_0(t);
                                {
                                  n_12 = t;
                                  if(((m_12 != NULL) && (m_12 != n_12)))
                                    _fail(n_12);
                                  else
                                    m_12 = n_12;
                                }
                              }
                            }
                            t = v_7;
                            {
                              ATerm p_12 = NULL;
                              t = not_null(h_12);
                              {
                                t = eval_config_0(t);
                                {
                                  p_12 = t;
                                  if(((o_12 != NULL) && (o_12 != p_12)))
                                    _fail(p_12);
                                  else
                                    o_12 = p_12;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), not_null(o_12));
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
  ATerm x_12 = NULL;
  x_12 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(x_12));
    {
      t = table_get_0(t);
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm b_8;
              b_8 = t;
              {
                ATerm z_12 = NULL;
                ATerm a_13 = NULL;
                a_13 = t;
                if(((z_12 != NULL) && (z_12 != a_13)))
                  _fail(a_13);
                else
                  z_12 = a_13;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(x_12), not_null(z_12));
                  t = table_put_0(t);
                }
              }
              t = b_8;
            }
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm f_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_8;
      o_8 = t;
      {
        ATerm e_13 = NULL;
        ATerm f_13 = NULL;
        t = term_p_8;
        {
          t = get_config_0(t);
          {
            f_13 = t;
            if(((e_13 != NULL) && (e_13 != f_13)))
              _fail(f_13);
            else
              e_13 = f_13;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_q_8);
          t = geq_0(t);
        }
      }
      t = o_8;
      t = y_84(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = f_8;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym__2))
    {
      k_13 = ATgetArgument(j_13, 0);
      l_13 = ATgetArgument(j_13, 1);
      t = SSL_WriteToTextFile(not_null(k_13), not_null(l_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  q_13 :
  if(match_cons(r_13, sym__2))
    {
      s_13 = ATgetArgument(r_13, 0);
      t_13 = ATgetArgument(r_13, 1);
      t = SSL_WriteToBinaryFile(not_null(s_13), not_null(t_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_14 = NULL;
  ATerm r_8;
  r_8 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm s_8 = t;
      int t_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            ATerm c_14 = NULL,d_14 = NULL;
            c_14 = t;
            y_13 :
            if(match_cons(c_14, sym_Output_1))
              {
                d_14 = ATgetArgument(c_14, 0);
                if(((b_14 != NULL) && (b_14 != d_14)))
                  _fail(d_14);
                else
                  b_14 = d_14;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, u_0);
          LocalPopChoice(t_8);
        }
      else
        {
          t = s_8;
          {
            ATerm e_14 = NULL;
            t = term_u_8;
            {
              e_14 = t;
              if(((b_14 != NULL) && (b_14 != e_14)))
                _fail(e_14);
              else
                b_14 = e_14;
            }
          }
        }
      return(t);
    }
    t = _2(t, t_0, _id);
  }
  t = r_8;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm w_0 (ATerm t)
      {
        t = not_null(b_14);
        return(t);
      }
      t = split_2(t, w_0, _id);
      return(t);
    }
    t = _2(t, _id, v_0);
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            ATerm y_0 (ATerm t)
            {
              ATerm f_14 = NULL;
              f_14 = t;
              a_14 :
              if(!(match_cons(f_14, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, y_0);
            return(t);
          }
          t = _2(t, x_0, WriteToBinaryFile_0);
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_83 (ATerm))
{
  ATerm l_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  ATerm b_9;
  b_9 = t;
  t = dtime_0(t);
  t = b_9;
  {
    t = f_83(t);
    {
      ATerm c_9;
      c_9 = t;
      {
        ATerm m_14 = NULL;
        t = dtime_0(t);
        {
          m_14 = t;
          if(((l_14 != NULL) && (l_14 != m_14)))
            _fail(m_14);
          else
            l_14 = m_14;
        }
      }
      t = c_9;
      {
        n_14 = t;
        k_14 :
        if(match_cons(n_14, sym__2))
          {
            o_14 = ATgetArgument(n_14, 0);
            p_14 = ATgetArgument(n_14, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_14)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_14))), not_null(p_14));
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
ATerm debug_1 (ATerm t, ATerm b_82 (ATerm))
{
  ATerm d_9;
  d_9 = t;
  {
    ATerm w_14 = NULL,y_14 = NULL;
    ATerm h_9;
    h_9 = t;
    {
      ATerm x_14 = NULL;
      t = b_82(t);
      {
        x_14 = t;
        if(((w_14 != NULL) && (w_14 != x_14)))
          _fail(x_14);
        else
          w_14 = x_14;
      }
    }
    t = h_9;
    {
      ATerm z_14 = NULL;
      z_14 = t;
      if(((y_14 != NULL) && (y_14 != z_14)))
        _fail(z_14);
      else
        y_14 = z_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_14)), not_null(w_14)));
        t = printnl_0(t);
      }
    }
  }
  t = d_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_15 = NULL;
  ATerm j_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_15 = NULL;
      e_15 = t;
      {
        if(((d_15 != NULL) && (d_15 != e_15)))
          _fail(e_15);
        else
          d_15 = e_15;
        t = SSL_ReadFromFile(not_null(d_15));
      }
      LocalPopChoice(m_9);
    }
  else
    {
      t = j_9;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_n_9;
          return(t);
        }
        t = debug_1(t, z_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  ATerm i_15 = NULL,k_15 = NULL;
  ATerm o_9;
  o_9 = t;
  {
    ATerm j_15 = NULL;
    t = g_79(t);
    {
      j_15 = t;
      if(((i_15 != NULL) && (i_15 != j_15)))
        _fail(j_15);
      else
        i_15 = j_15;
    }
  }
  t = o_9;
  {
    ATerm l_15 = NULL;
    t = h_79(t);
    {
      l_15 = t;
      if(((k_15 != NULL) && (k_15 != l_15)))
        _fail(l_15);
      else
        k_15 = l_15;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), not_null(k_15));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm p_9;
  p_9 = t;
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 (ATerm t)
        {
          ATerm s_15 = NULL,t_15 = NULL;
          s_15 = t;
          p_15 :
          if(match_cons(s_15, sym_Input_1))
            {
              t_15 = ATgetArgument(s_15, 0);
              if(((r_15 != NULL) && (r_15 != t_15)))
                _fail(t_15);
              else
                r_15 = t_15;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, a_1);
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        {
          ATerm u_15 = NULL;
          t = term_w_9;
          {
            u_15 = t;
            if(((r_15 != NULL) && (r_15 != u_15)))
              _fail(u_15);
            else
              r_15 = u_15;
          }
        }
      }
  }
  t = p_9;
  {
    ATerm b_1 (ATerm t)
    {
      t = not_null(r_15);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm y_15 = NULL;
    y_15 = t;
    x_15 :
    if(!(match_string(y_15, "-v")))
      {
        if(!(match_string(y_15, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_c_10;
    t = set_config_0(t);
    t = term_d_10;
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_e_10;
    return(t);
  }
  t = Option_3(t, c_1, d_1, e_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm b_16 = NULL;
    b_16 = t;
    z_15 :
    if(!(match_string(b_16, "-k")))
      {
        if(!(match_string(b_16, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm c_16 = NULL;
      ATerm d_16 = NULL;
      t = string_to_int_0(t);
      {
        d_16 = t;
        if(((c_16 != NULL) && (c_16 != d_16)))
          _fail(d_16);
        else
          c_16 = d_16;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(c_16));
        t = set_config_0(t);
      }
    }
    t = f_10;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_i_10;
    return(t);
  }
  t = ArgOption_3(t, f_1, g_1, j_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_16 = NULL;
  g_16 = t;
  t = SSL_string_to_int(not_null(g_16));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm j_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm o_16 = NULL;
        o_16 = t;
        j_16 :
        if(!(match_string(o_16, "-S")))
          {
            if(!(match_string(o_16, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_q_10;
        t = set_config_0(t);
        t = term_r_10;
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_s_10;
        return(t);
      }
      t = Option_3(t, k_1, l_1, m_1);
      LocalPopChoice(o_10);
    }
  else
    {
      t = j_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm p_16 = NULL;
              p_16 = t;
              k_16 :
              if(!(match_string(p_16, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm s_16 = NULL;
              ATerm y_10;
              y_10 = t;
              {
                ATerm q_16 = NULL;
                ATerm r_16 = NULL;
                t = string_to_int_0(t);
                {
                  r_16 = t;
                  if(((q_16 != NULL) && (q_16 != r_16)))
                    _fail(r_16);
                  else
                    q_16 = r_16;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(q_16));
                  t = set_config_0(t);
                }
              }
              t = y_10;
              {
                ATerm t_16 = NULL;
                t_16 = t;
                if(((s_16 != NULL) && (s_16 != t_16)))
                  _fail(t_16);
                else
                  s_16 = t_16;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_16));
              }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              t = term_b_11;
              return(t);
            }
            t = ArgOption_3(t, n_1, o_1, p_1);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm q_1 (ATerm t)
              {
                ATerm u_16 = NULL;
                u_16 = t;
                n_16 :
                if(!(match_string(u_16, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_1 (ATerm t)
              {
                t = term_g_11;
                t = set_config_0(t);
                t = term_h_11;
                return(t);
              }
              ATerm s_1 (ATerm t)
              {
                t = term_j_11;
                return(t);
              }
              t = Option_3(t, q_1, r_1, s_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm a_17 = NULL;
    a_17 = t;
    x_16 :
    if(!(match_string(a_17, "-o")))
      {
        if(!(match_string(a_17, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm d_17 = NULL;
    ATerm t_11;
    t_11 = t;
    {
      ATerm b_17 = NULL;
      ATerm c_17 = NULL;
      c_17 = t;
      if(((b_17 != NULL) && (b_17 != c_17)))
        _fail(c_17);
      else
        b_17 = c_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(b_17));
        t = set_config_0(t);
      }
    }
    t = t_11;
    {
      ATerm e_17 = NULL;
      e_17 = t;
      if(((d_17 != NULL) && (d_17 != e_17)))
        _fail(e_17);
      else
        d_17 = e_17;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_17));
    }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_v_11;
    return(t);
  }
  t = ArgOption_3(t, t_1, v_1, x_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm y_1 (ATerm t)
        {
          ATerm i_17 = NULL;
          i_17 = t;
          h_17 :
          if(!(match_string(i_17, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_1 (ATerm t)
        {
          t = term_a_12;
          t = set_config_0(t);
          t = term_b_12;
          return(t);
        }
        ATerm a_2 (ATerm t)
        {
          t = term_c_12;
          return(t);
        }
        t = Option_3(t, y_1, z_1, a_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  o_17 = t;
  m_17 :
  if(match_string(o_17, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(o_17) == AT_LIST) && !(ATisEmpty(o_17))))
        {
          p_17 = ATgetFirst((ATermList) o_17);
          q_17 = (ATerm) ATgetNext((ATermList) o_17);
          n_17 :
          if(((ATgetType(q_17) == AT_LIST) && !(ATisEmpty(q_17))))
            {
              r_17 = ATgetFirst((ATermList) q_17);
              s_17 = (ATerm) ATgetNext((ATermList) q_17);
              {
                ATerm w_17 = NULL;
                ATerm d_12;
                d_12 = t;
                {
                  t = not_null(p_17);
                  t = l_0(t);
                }
                t = d_12;
                {
                  ATerm x_17 = NULL;
                  t = not_null(r_17);
                  {
                    t = m_0(t);
                    {
                      x_17 = t;
                      if(((w_17 != NULL) && (w_17 != x_17)))
                        _fail(x_17);
                      else
                        w_17 = x_17;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_17)), not_null(w_17));
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
  ATerm b_2 (ATerm t)
  {
    ATerm e_18 = NULL;
    e_18 = t;
    b_18 :
    if(!(match_string(e_18, "-i")))
      {
        if(!(match_string(e_18, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm h_18 = NULL;
    ATerm i_12;
    i_12 = t;
    {
      ATerm f_18 = NULL;
      ATerm g_18 = NULL;
      g_18 = t;
      if(((f_18 != NULL) && (f_18 != g_18)))
        _fail(g_18);
      else
        f_18 = g_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_12, not_null(f_18));
        t = set_config_0(t);
      }
    }
    t = i_12;
    {
      ATerm i_18 = NULL;
      i_18 = t;
      if(((h_18 != NULL) && (h_18 != i_18)))
        _fail(i_18);
      else
        h_18 = i_18;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_18));
    }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_k_12;
    return(t);
  }
  t = ArgOption_3(t, b_2, d_2, h_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = l_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATempty, term_t_12));
  {
    t = printnl_0(t);
    {
      t = term_q_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  t = SSL_TicksToSeconds(not_null(m_18));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_18), not_null(t_18));
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = SSL_addr(not_null(s_18), not_null(t_18));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm))
{
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_77(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = w_12;
      {
        ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
        a_19 = t;
        z_18 :
        if(((ATgetType(a_19) == AT_LIST) && !(ATisEmpty(a_19))))
          {
            b_19 = ATgetFirst((ATermList) a_19);
            c_19 = (ATerm) ATgetNext((ATermList) a_19);
            {
              ATerm f_19 = NULL;
              ATerm g_19 = NULL;
              t = not_null(c_19);
              {
                t = foldr_2(t, r_77, s_77);
                {
                  g_19 = t;
                  if(((f_19 != NULL) && (f_19 != g_19)))
                    _fail(g_19);
                  else
                    f_19 = g_19;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(f_19));
                t = s_77(t);
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
ATerm crush_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm n_19 = NULL;
  ATerm p_19 = NULL;
  n_19 = t;
  {
    ATerm q_19 = NULL;
    ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
    t = not_null(n_19);
    {
      q_19 = t;
      {
        t = SSL_explode_term(not_null(q_19));
        {
          s_19 = t;
          m_19 :
          if(match_cons(s_19, sym__2))
            {
              t_19 = ATgetArgument(s_19, 0);
              u_19 = ATgetArgument(s_19, 1);
              if(((p_19 != NULL) && (p_19 != u_19)))
                _fail(u_19);
              else
                p_19 = u_19;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_19);
      t = foldr_2(t, p_76, q_76);
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
    ATerm i_2 (ATerm t)
    {
      t = term_p_10;
      return(t);
    }
    t = crush_2(t, i_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
  a_20 = t;
  z_19 :
  if(match_cons(a_20, sym__2))
    {
      b_20 = ATgetArgument(a_20, 0);
      c_20 = ATgetArgument(a_20, 1);
      {
        ATerm b_13;
        b_13 = t;
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_20), not_null(c_20));
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              t = SSL_gtr(not_null(b_20), not_null(c_20));
            }
        }
        t = b_13;
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
  ATerm i_20 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
      j_20 = t;
      h_20 :
      if(match_cons(j_20, sym__2))
        {
          k_20 = ATgetArgument(j_20, 0);
          l_20 = ATgetArgument(j_20, 1);
          {
            if(((i_20 != NULL) && (i_20 != k_20)))
              _fail(k_20);
            else
              i_20 = k_20;
            if(((i_20 != NULL) && (i_20 != l_20)))
              _fail(l_20);
            else
              i_20 = l_20;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_84 (ATerm))
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13;
      o_13 = t;
      {
        ATerm o_20 = NULL;
        ATerm p_20 = NULL;
        t = term_p_8;
        {
          t = get_config_0(t);
          {
            p_20 = t;
            if(((o_20 != NULL) && (o_20 != p_20)))
              _fail(p_20);
            else
              o_20 = p_20;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), term_q_6);
          t = geq_0(t);
        }
      }
      t = o_13;
      t = x_84(t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm t_20 = NULL,v_20 = NULL;
    ATerm p_13;
    p_13 = t;
    {
      ATerm u_20 = NULL;
      t = run_time_0(t);
      {
        u_20 = t;
        if(((t_20 != NULL) && (t_20 != u_20)))
          _fail(u_20);
        else
          t_20 = u_20;
      }
    }
    t = p_13;
    {
      ATerm w_20 = NULL;
      t = term_u_13;
      {
        t = get_config_0(t);
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_13), not_null(t_20)), term_v_13), not_null(v_20)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_2);
  {
    t = term_p_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym_Version_0))
    {
      ATerm f_21 = NULL,h_21 = NULL;
      ATerm x_13;
      x_13 = t;
      {
        ATerm g_21 = NULL;
        t = SSLgetAnnotations(not_null(d_21));
        {
          g_21 = t;
          if(((f_21 != NULL) && (f_21 != g_21)))
            _fail(g_21);
          else
            f_21 = g_21;
        }
      }
      t = x_13;
      {
        ATerm i_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_21));
        {
          i_21 = t;
          if(((h_21 != NULL) && (h_21 != i_21)))
            _fail(i_21);
          else
            h_21 = i_21;
        }
        t = not_null(h_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm z_13 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = z_13;
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, k_2);
  t = d_83(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
  t = SSL_table_create(not_null(n_21));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  {
    ATerm j_14;
    j_14 = t;
    {
      t = term_q_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_14, term_r_14, not_null(r_21));
          t = table_put_0(t);
        }
      }
    }
    t = j_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_table_destroy(not_null(u_22));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  t = SSL_exit(not_null(y_22));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  b_23 :
  if(((ATgetType(c_23) == AT_LIST) && ATisEmpty(c_23)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
        {
          d_23 = ATgetFirst((ATermList) c_23);
          e_23 = (ATerm) ATgetNext((ATermList) c_23);
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
  ATerm s_14;
  s_14 = t;
  {
    ATerm h_23 = NULL;
    ATerm k_23 = NULL;
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        {
          ATerm i_23 = NULL;
          ATerm j_23 = NULL;
          j_23 = t;
          if(((i_23 != NULL) && (i_23 != j_23)))
            _fail(j_23);
          else
            i_23 = j_23;
          t = (ATerm) ATinsert(ATempty, not_null(i_23));
        }
      }
    {
      k_23 = t;
      if(((h_23 != NULL) && (h_23 != k_23)))
        _fail(k_23);
      else
        h_23 = k_23;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_8, not_null(h_23));
      t = printnl_0(t);
    }
  }
  t = s_14;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATempty, term_v_14);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_71 (ATerm))
{
  ATerm n_23 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = Cons_2(t, d_71, n_23);
      }
    return(t);
  }
  t = n_23(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  w_23 = t;
  t_23 :
  if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
    {
      u_23 = ATgetFirst((ATermList) w_23);
      v_23 = (ATerm) ATgetNext((ATermList) w_23);
      {
        ATerm z_23 = NULL;
        t = not_null(v_23);
        {
          ATerm c_15;
          c_15 = t;
          {
            ATerm f_24 = NULL,h_24 = NULL,j_24 = NULL;
            ATerm f_15;
            f_15 = t;
            {
              ATerm g_24 = NULL;
              t = j_0(t);
              {
                g_24 = t;
                if(((f_24 != NULL) && (f_24 != g_24)))
                  _fail(g_24);
                else
                  f_24 = g_24;
              }
            }
            t = f_15;
            {
              ATerm i_24 = NULL;
              t = not_null(u_23);
              {
                t = i_0(t);
                {
                  i_24 = t;
                  if(((h_24 != NULL) && (h_24 != i_24)))
                    _fail(i_24);
                  else
                    h_24 = i_24;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_24)), not_null(h_24));
                {
                  j_24 = t;
                  if(((z_23 != NULL) && (z_23 != j_24)))
                    _fail(j_24);
                  else
                    z_23 = j_24;
                }
              }
            }
          }
          t = c_15;
          {
            ATerm l_2 (ATerm t)
            {
              t = not_null(z_23);
              return(t);
            }
            t = reverse_acc_2(t, i_0, l_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_23) == AT_LIST) && ATisEmpty(w_23)))
        {
          {
            t = term_n_5;
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
  ATerm q_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm q_24 = NULL;
  ATerm r_24 = NULL;
  t = term_n_5;
  {
    t = h_0(t);
    {
      r_24 = t;
      if(((q_24 != NULL) && (q_24 != r_24)))
        _fail(r_24);
      else
        q_24 = r_24;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_15), not_null(q_24)), term_g_15);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm b_25 = NULL,c_25 = NULL;
  b_25 = t;
  a_25 :
  if(match_cons(b_25, sym_Program_1))
    {
      c_25 = ATgetArgument(b_25, 0);
      {
        ATerm f_25 = NULL,h_25 = NULL;
        ATerm g_25 = NULL;
        t = SSLgetAnnotations(not_null(b_25));
        {
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
        }
        {
          t = not_null(c_25);
          {
            ATerm j_25 = NULL;
            t = w_62(t);
            {
              h_25 = t;
              {
                ATerm k_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_25)), not_null(f_25));
                {
                  k_25 = t;
                  if(((j_25 != NULL) && (j_25 != k_25)))
                    _fail(k_25);
                  else
                    j_25 = k_25;
                }
                t = not_null(j_25);
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
  ATerm t_25 = NULL;
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_25 = NULL;
      t = term_u_13;
      {
        t = get_config_0(t);
        {
          u_25 = t;
          if(((t_25 != NULL) && (t_25 != u_25)))
            _fail(u_25);
          else
            t_25 = u_25;
        }
      }
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm s_2 (ATerm t)
          {
            ATerm v_25 = NULL;
            v_25 = t;
            if(((t_25 != NULL) && (t_25 != v_25)))
              _fail(v_25);
            else
              t_25 = v_25;
            return(t);
          }
          t = Program_1(t, s_2);
          return(t);
        }
        t = fetch_1(t, r_2);
      }
    }
  {
    ATerm o_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 (ATerm t)
        {
          t = not_null(t_25);
          return(t);
        }
        t = short_description_1(t, t_2);
        t = echo_0(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = o_15;
        {
        }
      }
    {
      t = term_v_15;
      {
        t = echo_0(t);
        {
          t = term_e_16;
          {
            t = table_get_0(t);
            {
              ATerm w_2 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, w_2);
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm w_25 = NULL;
                  ATerm x_25 = NULL;
                  x_25 = t;
                  if(((w_25 != NULL) && (w_25 != x_25)))
                    _fail(x_25);
                  else
                    w_25 = x_25;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_25)), term_f_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_2);
                {
                  ATerm h_16 = t;
                  int i_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_25 = NULL;
                      ATerm z_25 = NULL;
                      t = (ATerm) ATinsert(ATempty, term_v_14);
                      {
                        z_25 = t;
                        if(((y_25 != NULL) && (y_25 != z_25)))
                          _fail(z_25);
                        else
                          y_25 = z_25;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(y_25)), term_l_16);
                        t = echo_0(t);
                      }
                      LocalPopChoice(i_16);
                    }
                  else
                    {
                      t = h_16;
                      {
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
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm m_16;
  m_16 = t;
  {
    ATerm f_26 = NULL;
    ATerm g_26 = NULL;
    g_26 = t;
    if(((f_26 != NULL) && (f_26 != g_26)))
      _fail(g_26);
    else
      f_26 = g_26;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATempty, not_null(f_26)));
      t = printnl_0(t);
    }
  }
  t = m_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm v_16;
  v_16 = t;
  {
    t = c_82(t);
    t = debug_0(t);
  }
  t = v_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_Undefined_1))
    {
      o_26 = ATgetArgument(n_26, 0);
      {
        ATerm r_26 = NULL,t_26 = NULL;
        ATerm s_26 = NULL;
        t = SSLgetAnnotations(not_null(n_26));
        {
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
        }
        {
          t = not_null(o_26);
          {
            ATerm v_26 = NULL;
            t = x_62(t);
            {
              t_26 = t;
              {
                ATerm w_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_26)), not_null(r_26));
                {
                  w_26 = t;
                  if(((v_26 != NULL) && (v_26 != w_26)))
                    _fail(w_26);
                  else
                    v_26 = w_26;
                }
                t = not_null(v_26);
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
ATerm fetch_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm b_27 (ATerm t)
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_71, _id);
        LocalPopChoice(y_16);
      }
    else
      {
        t = w_16;
        t = Cons_2(t, _id, b_27);
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_86 (ATerm))
{
  t = fetch_1(t, a_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_Help_0))
    {
      ATerm i_27 = NULL,k_27 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm j_27 = NULL;
        t = SSLgetAnnotations(not_null(g_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
      }
      t = z_16;
      {
        ATerm l_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_27));
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
        t = not_null(k_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_63(t);
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym__2))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      t = SSL_table_get(not_null(s_27), not_null(t_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym__3))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      d_28 = ATgetArgument(a_28, 2);
      {
        ATerm j_17;
        j_17 = t;
        {
          ATerm h_28 = NULL;
          ATerm i_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), not_null(c_28));
          {
            ATerm k_17 = t;
            int l_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_17);
              }
            else
              {
                t = k_17;
                t = (ATerm) ATempty;
              }
            {
              i_28 = t;
              if(((h_28 != NULL) && (h_28 != i_28)))
                _fail(i_28);
              else
                h_28 = i_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_28), not_null(c_28), (ATerm) ATinsert(CheckATermList(not_null(h_28)), not_null(d_28)));
            t = table_put_0(t);
          }
        }
        t = j_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm m_28 = NULL;
  ATerm n_28 = NULL;
  t = term_n_5;
  {
    t = f_87(t);
    {
      n_28 = t;
      if(((m_28 != NULL) && (m_28 != n_28)))
        _fail(n_28);
      else
        m_28 = n_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_15, term_a_16, not_null(m_28));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  s_28 :
  if(match_string(t_28, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(t_28) == AT_LIST) && !(ATisEmpty(t_28))))
        {
          u_28 = ATgetFirst((ATermList) t_28);
          v_28 = (ATerm) ATgetNext((ATermList) t_28);
          {
            ATerm y_28 = NULL;
            ATerm t_17;
            t_17 = t;
            {
              t = not_null(u_28);
              t = a_0(t);
            }
            t = t_17;
            {
              ATerm z_28 = NULL;
              t = term_n_5;
              {
                t = d_0(t);
                {
                  z_28 = t;
                  if(((y_28 != NULL) && (y_28 != z_28)))
                    _fail(z_28);
                  else
                    y_28 = z_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_28)), not_null(y_28));
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
  ATerm d_3 (ATerm t)
  {
    ATerm e_29 = NULL;
    e_29 = t;
    d_29 :
    if(!(match_string(e_29, "--help")))
      {
        if(!(match_string(e_29, "-h")))
          {
            if(!(match_string(e_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_v_17;
    {
      t = set_config_0(t);
      t = term_y_17;
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_z_17;
    return(t);
  }
  t = Option_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,k_29 = NULL;
  h_29 = t;
  g_29 :
  if(((ATgetType(h_29) == AT_LIST) && !(ATisEmpty(h_29))))
    {
      i_29 = ATgetFirst((ATermList) h_29);
      k_29 = (ATerm) ATgetNext((ATermList) h_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  t_29 :
  if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
    {
      v_29 = ATgetFirst((ATermList) u_29);
      w_29 = (ATerm) ATgetNext((ATermList) u_29);
      {
        ATerm a_30 = NULL,c_30 = NULL;
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(u_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
        {
          t = not_null(v_29);
          {
            ATerm e_30 = NULL;
            t = y_53(t);
            {
              c_30 = t;
              {
                t = not_null(w_29);
                {
                  ATerm i_30 = NULL;
                  t = z_53(t);
                  {
                    e_30 = t;
                    {
                      ATerm j_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_30)), not_null(c_30)), not_null(a_30));
                      {
                        j_30 = t;
                        if(((i_30 != NULL) && (i_30 != j_30)))
                          _fail(j_30);
                        else
                          i_30 = j_30;
                      }
                      t = not_null(i_30);
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
  ATerm t_30 = NULL;
  t_30 = t;
  s_30 :
  if(((ATgetType(t_30) == AT_LIST) && ATisEmpty(t_30)))
    {
      {
        ATerm v_30 = NULL,x_30 = NULL;
        ATerm a_18;
        a_18 = t;
        {
          ATerm w_30 = NULL;
          t = SSLgetAnnotations(not_null(t_30));
          {
            w_30 = t;
            if(((v_30 != NULL) && (v_30 != w_30)))
              _fail(w_30);
            else
              v_30 = w_30;
          }
        }
        t = a_18;
        {
          ATerm y_30 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_30));
          {
            y_30 = t;
            if(((x_30 != NULL) && (x_30 != y_30)))
              _fail(y_30);
            else
              x_30 = y_30;
          }
          t = not_null(x_30);
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
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym__2))
    {
      f_31 = ATgetArgument(e_31, 0);
      g_31 = ATgetArgument(e_31, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(f_31), not_null(g_31));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm c_18;
  c_18 = t;
  {
    ATerm d_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_18;
        t = d_87(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = d_18;
        {
        }
      }
  }
  t = c_18;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm o_31 = NULL;
      ATerm l_18;
      l_18 = t;
      {
        ATerm m_31 = NULL;
        ATerm n_31 = NULL;
        n_31 = t;
        if(((m_31 != NULL) && (m_31 != n_31)))
          _fail(n_31);
        else
          m_31 = n_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_13, not_null(m_31));
          t = set_config_0(t);
        }
      }
      t = l_18;
      {
        ATerm p_31 = NULL;
        p_31 = t;
        if(((o_31 != NULL) && (o_31 != p_31)))
          _fail(p_31);
        else
          o_31 = p_31;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_31));
      }
      return(t);
    }
    ATerm m_3 (ATerm t)
    {
      ATerm n_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_18);
            }
          else
            {
              t = p_18;
              {
                t = d_87(t);
                t = Cons_2(t, _id, m_3);
              }
            }
          LocalPopChoice(o_18);
        }
      else
        {
          t = n_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_3, m_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
    y_31 = t;
    u_31 :
    if(match_cons(y_31, sym__3))
      {
        z_31 = ATgetArgument(y_31, 0);
        a_32 = ATgetArgument(y_31, 1);
        b_32 = ATgetArgument(y_31, 2);
        {
          if(((v_31 != NULL) && (v_31 != z_31)))
            _fail(z_31);
          else
            v_31 = z_31;
          {
            if(((w_31 != NULL) && (w_31 != a_32)))
              _fail(a_32);
            else
              w_31 = a_32;
            {
              if(((x_31 != NULL) && (x_31 != b_32)))
                _fail(b_32);
              else
                x_31 = b_32;
              t = SSL_table_put(not_null(v_31), not_null(w_31), not_null(x_31));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm e_32 = NULL;
  ATerm w_18;
  w_18 = t;
  {
    t = term_x_18;
    t = table_put_0(t);
  }
  t = w_18;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm y_18 = t;
      int d_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          LocalPopChoice(d_19);
        }
      else
        {
          t = y_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_3);
    {
      ATerm e_19 = t;
      int h_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_19;
          i_19 = t;
          {
            ATerm j_19 = t;
            int k_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_u_17;
                t = get_config_0(t);
                LocalPopChoice(k_19);
              }
            else
              {
                t = j_19;
                t = fetch_1(t, Help_0);
              }
          }
          t = i_19;
          {
            t = system_usage_0(t);
            {
              t = term_p_10;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_19);
        }
      else
        {
          t = e_19;
          {
            ATerm l_19 = t;
            int o_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm f_32 = NULL;
                    f_32 = t;
                    if(((e_32 != NULL) && (e_32 != f_32)))
                      _fail(f_32);
                    else
                      e_32 = f_32;
                    return(t);
                  }
                  t = Undefined_1(t, u_3);
                  return(t);
                }
                t = fetch_1(t, t_3);
                {
                  ATerm w_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_32)), term_r_19);
                    return(t);
                  }
                  t = say_1(t, w_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_q_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(o_19);
              }
            else
              {
                t = l_19;
                {
                }
              }
          }
        }
      {
        ATerm v_19;
        v_19 = t;
        {
          t = term_w_15;
          t = table_destroy_0(t);
        }
        t = v_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  t = parse_options_1(t, j_83);
  {
    t = store_options_0(t);
    {
      t = l_83(t);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_83);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              ATerm y_19 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_83(t);
                  t = report_success_0(t);
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = y_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_84(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, a_84);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, x_3, c_84, d_84, y_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm g_20;
      g_20 = t;
      {
        ATerm i_32 = NULL;
        ATerm j_32 = NULL;
        t = term_u_13;
        {
          t = get_config_0(t);
          {
            j_32 = t;
            if(((i_32 != NULL) && (i_32 != j_32)))
              _fail(j_32);
            else
              i_32 = j_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATempty, not_null(i_32)));
          t = printnl_0(t);
        }
      }
      t = g_20;
      return(t);
    }
    t = if_verbose2_1(t, e_4);
    return(t);
  }
  t = iowrap_4(t, u_83, v_83, w_83, d_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_83 (ATerm), ATerm t_83 (ATerm))
{
  t = iowrap_3(t, s_83, t_83, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_83 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    t = _2(t, _id, p_83);
    return(t);
  }
  t = iowrap_2(t, j_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = treeviz_0(t);
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      t = iowrap_1(t, treeviz_0);
    }
  return(t);
}
