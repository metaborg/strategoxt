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
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
ATerm term_y_18;
ATerm term_h_18;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_s_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_r_8;
ATerm term_n_8;
ATerm term_m_8;
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
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_f_6);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_a_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_f_6);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_f_6);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_m_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_f_6);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__3, term_l_16, term_m_16, (ATerm) ATempty);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm string_as_chars_1 (ATerm, ATerm w_84 (ATerm));
ATerm escape_0 (ATerm);
ATerm BuildEdge_0 (ATerm);
ATerm MkEdges_2 (ATerm, ATerm y_67 (ATerm), ATerm z_67 (ATerm));
ATerm TreeViz_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm NewNodeName_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm NodeName_0 (ATerm);
ATerm Treeviz_0 (ATerm);
ATerm _2 (ATerm, ATerm z_56 (ATerm), ATerm a_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm y_88 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm u_87 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_90 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_87 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm));
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
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_81 (ATerm), ATerm l_81 (ATerm));
ATerm crush_2 (ATerm, ATerm d_85 (ATerm), ATerm e_85 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_88 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_91 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm n_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm r_67 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_68 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_93 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_58 (ATerm), ATerm j_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm h_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_91 (ATerm), ATerm e_91 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_91 (ATerm));
ATerm treeviz_0 (ATerm);
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
        ATerm c_0 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, c_0);
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
ATerm string_as_chars_1 (ATerm t, ATerm w_84 (ATerm))
{
  t = explode_string_0(t);
  {
    t = w_84(t);
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
ATerm MkEdges_2 (ATerm t, ATerm y_67 (ATerm), ATerm z_67 (ATerm))
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
                  t = y_67(t);
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
                            t = z_67(t);
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
            ATerm e_0 (ATerm t)
            {
              ATerm f_0 (ATerm t)
              {
                t = not_null(w_5);
                return(t);
              }
              t = MkEdges_2(t, f_0, TreeViz_0);
              return(t);
            }
            t = map_1(t, e_0);
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
          ATerm h_0 (ATerm t)
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
          t = map_1(t, h_0);
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
ATerm Treeviz_0 (ATerm t)
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
ATerm _2 (ATerm t, ATerm z_56 (ATerm), ATerm a_57 (ATerm))
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
            t = z_56(t);
            {
              c_9 = t;
              {
                t = not_null(w_8);
                {
                  ATerm g_9 = NULL;
                  t = a_57(t);
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
  ATerm w_6;
  w_6 = t;
  {
    ATerm o_9 = NULL;
    ATerm p_9 = NULL;
    t = term_f_6;
    {
      t = whoami_0(t);
      {
        p_9 = t;
        if(((o_9 != NULL) && (o_9 != p_9)))
          _fail(p_9);
        else
          o_9 = p_9;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_6), not_null(o_9)), term_y_6));
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
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  t_9 = t;
  s_9 :
  if(match_cons(t_9, sym__2))
    {
      u_9 = ATgetArgument(t_9, 0);
      v_9 = ATgetArgument(t_9, 1);
      {
        ATerm c_7;
        c_7 = t;
        t = SSL_printnl(not_null(u_9), not_null(v_9));
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
  ATerm a_10 = NULL;
  a_10 = t;
  t = SSL_implode_string(not_null(a_10));
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
        ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
        f_10 = t;
        e_10 :
        if(((ATgetType(f_10) == AT_LIST) && !(ATisEmpty(f_10))))
          {
            g_10 = ATgetFirst((ATermList) f_10);
            h_10 = (ATerm) ATgetNext((ATermList) f_10);
            {
              t = not_null(g_10);
              {
                ATerm q_0 (ATerm t)
                {
                  t = not_null(h_10);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm r_10 = NULL;
  ATerm t_10 = NULL;
  r_10 = t;
  {
    ATerm u_10 = NULL;
    ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
    t = not_null(r_10);
    {
      u_10 = t;
      {
        t = SSL_explode_term(not_null(u_10));
        {
          w_10 = t;
          p_10 :
          if(match_cons(w_10, sym__2))
            {
              x_10 = ATgetArgument(w_10, 0);
              y_10 = ATgetArgument(w_10, 1);
              q_10 :
              if(match_string(x_10, ""))
                {
                  if(((t_10 != NULL) && (t_10 != y_10)))
                    _fail(y_10);
                  else
                    t_10 = y_10;
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
      t = not_null(t_10);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_76 (ATerm))
{
  ATerm c_11 (ATerm t)
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_11);
        ;
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        {
          t = Nil_0(t);
          t = c_76(t);
        }
      }
    return(t);
  }
  t = c_11(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym__2))
    {
      g_11 = ATgetArgument(f_11, 0);
      h_11 = ATgetArgument(f_11, 1);
      {
        t = not_null(g_11);
        {
          ATerm r_0 (ATerm t)
          {
            t = not_null(h_11);
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
  ATerm m_11 = NULL;
  m_11 = t;
  t = SSL_explode_string(not_null(m_11));
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
            ATerm s_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_0);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            {
              ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
              v_11 = t;
              u_11 :
              if(match_cons(v_11, sym_Path_1))
                {
                  w_11 = ATgetArgument(v_11, 0);
                  t = not_null(w_11);
                }
              else
                {
                  if(match_cons(v_11, sym_Var_1))
                    {
                      w_11 = ATgetArgument(v_11, 0);
                      {
                        t = not_null(w_11);
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
                                ATerm t_0 (ATerm t)
                                {
                                  t = term_u_7;
                                  return(t);
                                }
                                t = debug_1(t, t_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_11, sym_Prefix_2))
                        {
                          w_11 = ATgetArgument(v_11, 0);
                          x_11 = ATgetArgument(v_11, 1);
                          {
                            ATerm c_12 = NULL,e_12 = NULL;
                            ATerm v_7;
                            v_7 = t;
                            {
                              ATerm d_12 = NULL;
                              t = not_null(w_11);
                              {
                                t = eval_config_0(t);
                                {
                                  d_12 = t;
                                  if(((c_12 != NULL) && (c_12 != d_12)))
                                    _fail(d_12);
                                  else
                                    c_12 = d_12;
                                }
                              }
                            }
                            t = v_7;
                            {
                              ATerm f_12 = NULL;
                              t = not_null(x_11);
                              {
                                t = eval_config_0(t);
                                {
                                  f_12 = t;
                                  if(((e_12 != NULL) && (e_12 != f_12)))
                                    _fail(f_12);
                                  else
                                    e_12 = f_12;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), not_null(e_12));
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
  ATerm n_12 = NULL;
  n_12 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_7, not_null(n_12));
    {
      t = table_get_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm b_8;
            b_8 = t;
            {
              ATerm p_12 = NULL;
              ATerm q_12 = NULL;
              q_12 = t;
              if(((p_12 != NULL) && (p_12 != q_12)))
                _fail(q_12);
              else
                p_12 = q_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(n_12), not_null(p_12));
                t = table_put_0(t);
              }
            }
            t = b_8;
          }
          return(t);
        }
        t = try_1(t, u_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm j_8;
    j_8 = t;
    {
      ATerm u_12 = NULL;
      ATerm v_12 = NULL;
      t = term_k_8;
      {
        t = get_config_0(t);
        {
          v_12 = t;
          if(((u_12 != NULL) && (u_12 != v_12)))
            _fail(v_12);
          else
            u_12 = v_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), term_l_8);
        t = geq_0(t);
      }
    }
    t = j_8;
    t = y_88(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  b_13 = t;
  z_12 :
  if(match_cons(b_13, sym__2))
    {
      c_13 = ATgetArgument(b_13, 0);
      d_13 = ATgetArgument(b_13, 1);
      a_13 :
      if(match_cons(d_13, sym_Stream_1))
        {
          e_13 = ATgetArgument(d_13, 0);
          {
            ATerm h_13 = NULL;
            t = SSL_fputc(not_null(c_13), not_null(e_13));
            {
              ATerm i_13 = NULL;
              i_13 = t;
              if(((h_13 != NULL) && (h_13 != i_13)))
                _fail(i_13);
              else
                h_13 = i_13;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_13));
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
  return(t);
}
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  p_13 = t;
  n_13 :
  if(match_cons(p_13, sym__2))
    {
      q_13 = ATgetArgument(p_13, 0);
      s_13 = ATgetArgument(p_13, 1);
      o_13 :
      if(match_cons(q_13, sym_Stream_1))
        {
          r_13 = ATgetArgument(q_13, 0);
          {
            ATerm v_13 = NULL;
            t = SSL_write_term_to_stream_text(not_null(r_13), not_null(s_13));
            {
              ATerm w_13 = NULL;
              w_13 = t;
              if(((v_13 != NULL) && (v_13 != w_13)))
                _fail(w_13);
              else
                v_13 = w_13;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_13));
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
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm a_14 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm b_14 = NULL;
      b_14 = t;
      if(((a_14 != NULL) && (a_14 != b_14)))
        _fail(b_14);
      else
        a_14 = b_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(a_14));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, w_0);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  h_14 = t;
  f_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      k_14 = ATgetArgument(h_14, 1);
      g_14 :
      if(match_cons(i_14, sym_Stream_1))
        {
          j_14 = ATgetArgument(i_14, 0);
          {
            ATerm n_14 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(j_14), not_null(k_14));
            {
              ATerm o_14 = NULL;
              o_14 = t;
              if(((n_14 != NULL) && (n_14 != o_14)))
                _fail(o_14);
              else
                n_14 = o_14;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_14));
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
  return(t);
}
ATerm WriteToFile_1 (ATerm t, ATerm u_87 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym__2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      {
        ATerm a_15 = NULL,c_15 = NULL;
        t = not_null(w_14);
        {
          ATerm b_15 = NULL;
          b_15 = t;
          if(((a_15 != NULL) && (a_15 != b_15)))
            _fail(b_15);
          else
            a_15 = b_15;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), term_n_8);
            {
              t = open_stream_0(t);
              {
                ATerm d_15 = NULL;
                d_15 = t;
                if(((c_15 != NULL) && (c_15 != d_15)))
                  _fail(d_15);
                else
                  c_15 = d_15;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_15), not_null(x_14));
                  {
                    t = u_87(t);
                    {
                      t = fclose_0(t);
                      t = not_null(x_14);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_15 = NULL;
  ATerm o_8;
  o_8 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm p_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm m_15 = NULL,n_15 = NULL;
            m_15 = t;
            i_15 :
            if(match_cons(m_15, sym_Output_1))
              {
                n_15 = ATgetArgument(m_15, 0);
                if(((l_15 != NULL) && (l_15 != n_15)))
                  _fail(n_15);
                else
                  l_15 = n_15;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_0);
          ;
          LocalPopChoice(q_8);
        }
      else
        {
          t = p_8;
          {
            ATerm o_15 = NULL;
            t = term_r_8;
            {
              o_15 = t;
              if(((l_15 != NULL) && (l_15 != o_15)))
                _fail(o_15);
              else
                l_15 = o_15;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_0, _id);
  }
  t = o_8;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = not_null(l_15);
        return(t);
      }
      t = split_2(t, a_1, _id);
      return(t);
    }
    t = _2(t, _id, z_0);
    {
      ATerm s_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              ATerm p_15 = NULL;
              p_15 = t;
              k_15 :
              if(!(match_cons(p_15, sym_Binary_0)))
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
          LocalPopChoice(x_8);
        }
      else
        {
          t = s_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_90 (ATerm))
{
  ATerm v_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  ATerm y_8;
  y_8 = t;
  t = dtime_0(t);
  t = y_8;
  {
    t = w_90(t);
    {
      ATerm z_8;
      z_8 = t;
      {
        ATerm w_15 = NULL;
        t = dtime_0(t);
        {
          w_15 = t;
          if(((v_15 != NULL) && (v_15 != w_15)))
            _fail(w_15);
          else
            v_15 = w_15;
        }
      }
      t = z_8;
      {
        x_15 = t;
        u_15 :
        if(match_cons(x_15, sym__2))
          {
            y_15 = ATgetArgument(x_15, 0);
            z_15 = ATgetArgument(x_15, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_15)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_15))), not_null(z_15));
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
ATerm fclose_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL;
  ATerm o_16 (ATerm t)
  {
    t = SSL_fclose(not_null(i_16));
    return(t);
  }
  i_16 = t;
  g_16 :
  if(match_cons(i_16, sym_Stream_1))
    {
      h_16 = ATgetArgument(i_16, 0);
      {
        ATerm d_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(h_16));
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = d_9;
            t = o_16(t);
          }
      }
    }
  else
    {
      t = o_16(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_Stream_1))
    {
      s_16 = ATgetArgument(r_16, 0);
      t = SSL_read_term_from_stream(not_null(s_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm i_9;
  i_9 = t;
  {
    ATerm x_16 = NULL,z_16 = NULL;
    ATerm j_9;
    j_9 = t;
    {
      ATerm y_16 = NULL;
      t = g_87(t);
      {
        y_16 = t;
        if(((x_16 != NULL) && (x_16 != y_16)))
          _fail(y_16);
        else
          x_16 = y_16;
      }
    }
    t = j_9;
    {
      ATerm a_17 = NULL;
      a_17 = t;
      if(((z_16 != NULL) && (z_16 != a_17)))
        _fail(a_17);
      else
        z_16 = a_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_16)), not_null(x_16)));
        t = printnl_0(t);
      }
    }
  }
  t = i_9;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      {
        ATerm l_17 = NULL;
        t = SSL_fopen(not_null(h_17), not_null(i_17));
        {
          ATerm m_17 = NULL;
          m_17 = t;
          if(((l_17 != NULL) && (l_17 != m_17)))
            _fail(m_17);
          else
            l_17 = m_17;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_17));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_17 = NULL;
  q_17 = t;
  t = SSL_is_string(not_null(q_17));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm v_17 = NULL;
    v_17 = t;
    if(((u_17 != NULL) && (u_17 != v_17)))
      _fail(v_17);
    else
      u_17 = v_17;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_17));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm y_17 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm z_17 = NULL;
    z_17 = t;
    if(((y_17 != NULL) && (y_17 != z_17)))
      _fail(z_17);
    else
      y_17 = z_17;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_17));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm c_18 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm d_18 = NULL;
    d_18 = t;
    if(((c_18 != NULL) && (c_18 != d_18)))
      _fail(d_18);
    else
      c_18 = d_18;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_18));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(j_18, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(j_18, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm t_18 = NULL;
  ATerm v_18 = NULL,w_18 = NULL;
  t_18 = t;
  {
    ATerm x_18 = NULL;
    ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
    t = not_null(t_18);
    {
      x_18 = t;
      {
        t = SSL_explode_term(not_null(x_18));
        {
          z_18 = t;
          q_18 :
          if(match_cons(z_18, sym__2))
            {
              a_19 = ATgetArgument(z_18, 0);
              b_19 = ATgetArgument(z_18, 1);
              r_18 :
              if(match_string(a_19, ""))
                {
                  s_18 :
                  if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
                    {
                      c_19 = ATgetFirst((ATermList) b_19);
                      d_19 = (ATerm) ATgetNext((ATermList) b_19);
                      {
                        if(((w_18 != NULL) && (w_18 != c_19)))
                          _fail(c_19);
                        else
                          w_18 = c_19;
                        if(((v_18 != NULL) && (v_18 != d_19)))
                          _fail(d_19);
                        else
                          v_18 = d_19;
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
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(w_18);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            {
              ATerm m_9 = t;
              int n_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    ATerm o_19 = NULL,p_19 = NULL;
                    o_19 = t;
                    j_19 :
                    if(match_cons(o_19, sym_Path_1))
                      {
                        p_19 = ATgetArgument(o_19, 0);
                        t = not_null(p_19);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, d_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(n_9);
                }
              else
                {
                  t = m_9;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_19 = NULL;
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_19 = NULL;
      ATerm w_19 = NULL;
      w_19 = t;
      if(((v_19 != NULL) && (v_19 != w_19)))
        _fail(w_19);
      else
        v_19 = w_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), term_w_9);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_x_9;
          return(t);
        }
        t = debug_1(t, e_1);
        _fail(t);
      }
    }
  {
    ATerm y_9;
    y_9 = t;
    {
      ATerm y_19 = NULL;
      t = read_from_stream_0(t);
      {
        y_19 = t;
        if(((x_19 != NULL) && (x_19 != y_19)))
          _fail(y_19);
        else
          x_19 = y_19;
      }
    }
    t = y_9;
    {
      t = fclose_0(t);
      t = not_null(x_19);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm))
{
  ATerm d_20 = NULL,f_20 = NULL;
  ATerm z_9;
  z_9 = t;
  {
    ATerm e_20 = NULL;
    t = z_82(t);
    {
      e_20 = t;
      if(((d_20 != NULL) && (d_20 != e_20)))
        _fail(e_20);
      else
        d_20 = e_20;
    }
  }
  t = z_9;
  {
    ATerm g_20 = NULL;
    t = a_83(t);
    {
      g_20 = t;
      if(((f_20 != NULL) && (f_20 != g_20)))
        _fail(g_20);
      else
        f_20 = g_20;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(f_20));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_20 = NULL;
  ATerm b_10;
  b_10 = t;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          ATerm n_20 = NULL,o_20 = NULL;
          n_20 = t;
          k_20 :
          if(match_cons(n_20, sym_Input_1))
            {
              o_20 = ATgetArgument(n_20, 0);
              if(((m_20 != NULL) && (m_20 != o_20)))
                _fail(o_20);
              else
                m_20 = o_20;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_1);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        {
          ATerm p_20 = NULL;
          t = term_i_10;
          {
            p_20 = t;
            if(((m_20 != NULL) && (m_20 != p_20)))
              _fail(p_20);
            else
              m_20 = p_20;
          }
        }
      }
  }
  t = b_10;
  {
    ATerm g_1 (ATerm t)
    {
      t = not_null(m_20);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm t_20 = NULL;
    t_20 = t;
    s_20 :
    if(!(match_string(t_20, "-v")))
      {
        if(!(match_string(t_20, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_k_10;
    t = set_config_0(t);
    t = term_l_10;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_m_10;
    return(t);
  }
  t = Option_3(t, k_1, l_1, m_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm w_20 = NULL;
    w_20 = t;
    u_20 :
    if(!(match_string(w_20, "-k")))
      {
        if(!(match_string(w_20, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm n_10;
    n_10 = t;
    {
      ATerm x_20 = NULL;
      ATerm y_20 = NULL;
      t = string_to_int_0(t);
      {
        y_20 = t;
        if(((x_20 != NULL) && (x_20 != y_20)))
          _fail(y_20);
        else
          x_20 = y_20;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(x_20));
        t = set_config_0(t);
      }
    }
    t = n_10;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_s_10;
    return(t);
  }
  t = ArgOption_3(t, n_1, o_1, p_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  t = SSL_string_to_int(not_null(b_21));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm j_21 = NULL;
        j_21 = t;
        e_21 :
        if(!(match_string(j_21, "-S")))
          {
            if(!(match_string(j_21, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        t = term_b_11;
        t = set_config_0(t);
        t = term_d_11;
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_i_11;
        return(t);
      }
      t = Option_3(t, q_1, r_1, s_1);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = v_10;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              ATerm k_21 = NULL;
              k_21 = t;
              f_21 :
              if(!(match_string(k_21, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              ATerm n_21 = NULL;
              ATerm l_11;
              l_11 = t;
              {
                ATerm l_21 = NULL;
                ATerm m_21 = NULL;
                t = string_to_int_0(t);
                {
                  m_21 = t;
                  if(((l_21 != NULL) && (l_21 != m_21)))
                    _fail(m_21);
                  else
                    l_21 = m_21;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(l_21));
                  t = set_config_0(t);
                }
              }
              t = l_11;
              {
                ATerm o_21 = NULL;
                o_21 = t;
                if(((n_21 != NULL) && (n_21 != o_21)))
                  _fail(o_21);
                else
                  n_21 = o_21;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_21));
              }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              t = term_n_11;
              return(t);
            }
            t = ArgOption_3(t, t_1, v_1, w_1);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            {
              ATerm x_1 (ATerm t)
              {
                ATerm p_21 = NULL;
                p_21 = t;
                i_21 :
                if(!(match_string(p_21, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_1 (ATerm t)
              {
                t = term_p_11;
                t = set_config_0(t);
                t = term_q_11;
                return(t);
              }
              ATerm z_1 (ATerm t)
              {
                t = term_r_11;
                return(t);
              }
              t = Option_3(t, x_1, y_1, z_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm v_21 = NULL;
    v_21 = t;
    s_21 :
    if(!(match_string(v_21, "-o")))
      {
        if(!(match_string(v_21, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm y_21 = NULL;
    ATerm a_12;
    a_12 = t;
    {
      ATerm w_21 = NULL;
      ATerm x_21 = NULL;
      x_21 = t;
      if(((w_21 != NULL) && (w_21 != x_21)))
        _fail(x_21);
      else
        w_21 = x_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(w_21));
        t = set_config_0(t);
      }
    }
    t = a_12;
    {
      ATerm z_21 = NULL;
      z_21 = t;
      if(((y_21 != NULL) && (y_21 != z_21)))
        _fail(z_21);
      else
        y_21 = z_21;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_21));
    }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_g_12;
    return(t);
  }
  t = ArgOption_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm h_2 (ATerm t)
        {
          ATerm d_22 = NULL;
          d_22 = t;
          c_22 :
          if(!(match_string(d_22, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_k_12;
          t = set_config_0(t);
          t = term_l_12;
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = term_m_12;
          return(t);
        }
        t = Option_3(t, h_2, m_2, n_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  j_22 = t;
  h_22 :
  if(match_string(j_22, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
        {
          k_22 = ATgetFirst((ATermList) j_22);
          l_22 = (ATerm) ATgetNext((ATermList) j_22);
          i_22 :
          if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
            {
              m_22 = ATgetFirst((ATermList) l_22);
              n_22 = (ATerm) ATgetNext((ATermList) l_22);
              {
                ATerm q_23 = NULL;
                ATerm o_12;
                o_12 = t;
                {
                  t = not_null(k_22);
                  t = l_0(t);
                }
                t = o_12;
                {
                  ATerm r_23 = NULL;
                  t = not_null(m_22);
                  {
                    t = m_0(t);
                    {
                      r_23 = t;
                      if(((q_23 != NULL) && (q_23 != r_23)))
                        _fail(r_23);
                      else
                        q_23 = r_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_22)), not_null(q_23));
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
  ATerm o_2 (ATerm t)
  {
    ATerm y_23 = NULL;
    y_23 = t;
    v_23 :
    if(!(match_string(y_23, "-i")))
      {
        if(!(match_string(y_23, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm b_24 = NULL;
    ATerm r_12;
    r_12 = t;
    {
      ATerm z_23 = NULL;
      ATerm a_24 = NULL;
      a_24 = t;
      if(((z_23 != NULL) && (z_23 != a_24)))
        _fail(a_24);
      else
        z_23 = a_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(z_23));
        t = set_config_0(t);
      }
    }
    t = r_12;
    {
      ATerm c_24 = NULL;
      c_24 = t;
      if(((b_24 != NULL) && (b_24 != c_24)))
        _fail(c_24);
      else
        b_24 = c_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_24));
    }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_t_12;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, s_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm y_12 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = y_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm g_24 = NULL;
  t = report_run_time_0(t);
  {
    ATerm h_24 = NULL;
    t = term_f_6;
    {
      t = whoami_0(t);
      {
        h_24 = t;
        if(((g_24 != NULL) && (g_24 != h_24)))
          _fail(h_24);
        else
          g_24 = h_24;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, term_g_13), not_null(g_24)));
      {
        t = printnl_0(t);
        {
          t = term_a_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_j_13;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  t = SSL_TicksToSeconds(not_null(k_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym__2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_24), not_null(r_24));
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = SSL_addr(not_null(q_24), not_null(r_24));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_81 (ATerm), ATerm l_81 (ATerm))
{
  ATerm m_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_81(t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = m_13;
      {
        ATerm y_24 = NULL,e_25 = NULL,f_25 = NULL;
        y_24 = t;
        x_24 :
        if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
          {
            e_25 = ATgetFirst((ATermList) y_24);
            f_25 = (ATerm) ATgetNext((ATermList) y_24);
            {
              ATerm i_25 = NULL;
              ATerm j_25 = NULL;
              t = not_null(f_25);
              {
                t = foldr_2(t, k_81, l_81);
                {
                  j_25 = t;
                  if(((i_25 != NULL) && (i_25 != j_25)))
                    _fail(j_25);
                  else
                    i_25 = j_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), not_null(i_25));
                t = l_81(t);
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
ATerm crush_2 (ATerm t, ATerm d_85 (ATerm), ATerm e_85 (ATerm))
{
  ATerm q_25 = NULL;
  ATerm v_25 = NULL;
  q_25 = t;
  {
    ATerm w_25 = NULL;
    ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
    t = not_null(q_25);
    {
      w_25 = t;
      {
        t = SSL_explode_term(not_null(w_25));
        {
          y_25 = t;
          p_25 :
          if(match_cons(y_25, sym__2))
            {
              z_25 = ATgetArgument(y_25, 0);
              a_26 = ATgetArgument(y_25, 1);
              if(((v_25 != NULL) && (v_25 != a_26)))
                _fail(a_26);
              else
                v_25 = a_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_25);
      t = foldr_2(t, d_85, e_85);
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
    ATerm t_2 (ATerm t)
    {
      t = term_a_11;
      return(t);
    }
    t = crush_2(t, t_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_cons(g_26, sym__2))
    {
      h_26 = ATgetArgument(g_26, 0);
      i_26 = ATgetArgument(g_26, 1);
      {
        ATerm u_13;
        u_13 = t;
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_26), not_null(i_26));
              ;
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              t = SSL_gtr(not_null(h_26), not_null(i_26));
            }
        }
        t = u_13;
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
  ATerm o_26 = NULL;
  ATerm z_13 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
      p_26 = t;
      n_26 :
      if(match_cons(p_26, sym__2))
        {
          q_26 = ATgetArgument(p_26, 0);
          r_26 = ATgetArgument(p_26, 1);
          {
            if(((o_26 != NULL) && (o_26 != q_26)))
              _fail(q_26);
            else
              o_26 = q_26;
            if(((o_26 != NULL) && (o_26 != r_26)))
              _fail(r_26);
            else
              o_26 = r_26;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = z_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_88 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm d_14;
    d_14 = t;
    {
      ATerm u_26 = NULL;
      ATerm v_26 = NULL;
      t = term_k_8;
      {
        t = get_config_0(t);
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), term_a_7);
        t = geq_0(t);
      }
    }
    t = d_14;
    t = x_88(t);
    return(t);
  }
  t = try_1(t, z_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm z_26 = NULL,b_27 = NULL;
    ATerm e_14;
    e_14 = t;
    {
      ATerm a_27 = NULL;
      t = run_time_0(t);
      {
        a_27 = t;
        if(((z_26 != NULL) && (z_26 != a_27)))
          _fail(a_27);
        else
          z_26 = a_27;
      }
    }
    t = e_14;
    {
      ATerm c_27 = NULL;
      t = term_f_6;
      {
        t = whoami_0(t);
        {
          c_27 = t;
          if(((b_27 != NULL) && (b_27 != c_27)))
            _fail(c_27);
          else
            b_27 = c_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_14), not_null(z_26)), term_l_14), not_null(b_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_a_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym_Version_0))
    {
      ATerm l_27 = NULL,n_27 = NULL;
      ATerm p_14;
      p_14 = t;
      {
        ATerm m_27 = NULL;
        t = SSLgetAnnotations(not_null(j_27));
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
      }
      t = p_14;
      {
        ATerm o_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_27));
        {
          o_27 = t;
          if(((n_27 != NULL) && (n_27 != o_27)))
            _fail(o_27);
          else
            n_27 = o_27;
        }
        t = not_null(n_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_91 (ATerm))
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_14;
      t = get_config_0(t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm t_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(y_14);
            }
          else
            {
              t = t_14;
              {
                ATerm z_14 = t;
                int e_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(e_15);
                  }
                else
                  {
                    t = z_14;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, b_3);
      }
    }
  t = u_91(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  t = SSL_table_create(not_null(t_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  {
    ATerm f_15;
    f_15 = t;
    {
      t = term_g_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_15, term_h_15, not_null(x_27));
          t = table_put_0(t);
        }
      }
    }
    t = f_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  t = SSL_table_destroy(not_null(b_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  t = SSL_exit(not_null(f_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  i_28 :
  if(((ATgetType(j_28) == AT_LIST) && ATisEmpty(j_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_28) == AT_LIST) && !(ATisEmpty(j_28))))
        {
          k_28 = ATgetFirst((ATermList) j_28);
          l_28 = (ATerm) ATgetNext((ATermList) j_28);
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
  ATerm j_15;
  j_15 = t;
  {
    ATerm o_28 = NULL;
    ATerm r_28 = NULL;
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        {
          ATerm p_28 = NULL;
          ATerm q_28 = NULL;
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
          t = (ATerm) ATinsert(ATempty, not_null(p_28));
        }
      }
    {
      r_28 = t;
      if(((o_28 != NULL) && (o_28 != r_28)))
        _fail(r_28);
      else
        o_28 = r_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_8, not_null(o_28));
      t = printnl_0(t);
    }
  }
  t = j_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATempty, term_s_15);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm u_28 (ATerm t)
  {
    ATerm t_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = t_15;
        t = Cons_2(t, n_75, u_28);
      }
    return(t);
  }
  t = u_28(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  d_29 = t;
  a_29 :
  if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
    {
      b_29 = ATgetFirst((ATermList) d_29);
      c_29 = (ATerm) ATgetNext((ATermList) d_29);
      {
        ATerm g_29 = NULL;
        t = not_null(c_29);
        {
          ATerm b_16;
          b_16 = t;
          {
            ATerm h_29 = NULL,j_29 = NULL,l_29 = NULL;
            ATerm c_16;
            c_16 = t;
            {
              ATerm i_29 = NULL;
              t = j_0(t);
              {
                i_29 = t;
                if(((h_29 != NULL) && (h_29 != i_29)))
                  _fail(i_29);
                else
                  h_29 = i_29;
              }
            }
            t = c_16;
            {
              ATerm k_29 = NULL;
              t = not_null(b_29);
              {
                t = i_0(t);
                {
                  k_29 = t;
                  if(((j_29 != NULL) && (j_29 != k_29)))
                    _fail(k_29);
                  else
                    j_29 = k_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_29)), not_null(j_29));
                {
                  l_29 = t;
                  if(((g_29 != NULL) && (g_29 != l_29)))
                    _fail(l_29);
                  else
                    g_29 = l_29;
                }
              }
            }
          }
          t = b_16;
          {
            ATerm h_3 (ATerm t)
            {
              t = not_null(g_29);
              return(t);
            }
            t = reverse_acc_2(t, i_0, h_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_29) == AT_LIST) && ATisEmpty(d_29)))
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
  ATerm i_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm s_29 = NULL;
  ATerm t_29 = NULL;
  t = term_f_6;
  {
    t = g_0(t);
    {
      t_29 = t;
      if(((s_29 != NULL) && (s_29 != t_29)))
        _fail(t_29);
      else
        s_29 = t_29;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_16), not_null(s_29)), term_d_16);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_67 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Program_1))
    {
      b_30 = ATgetArgument(a_30, 0);
      {
        ATerm e_30 = NULL,g_30 = NULL;
        ATerm f_30 = NULL;
        t = SSLgetAnnotations(not_null(a_30));
        {
          f_30 = t;
          if(((e_30 != NULL) && (e_30 != f_30)))
            _fail(f_30);
          else
            e_30 = f_30;
        }
        {
          t = not_null(b_30);
          {
            ATerm i_30 = NULL;
            t = r_67(t);
            {
              g_30 = t;
              {
                ATerm j_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_30)), not_null(e_30));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm s_30 = NULL;
  ATerm f_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_30 = NULL;
      t = term_j_13;
      {
        t = get_config_0(t);
        {
          t_30 = t;
          if(((s_30 != NULL) && (s_30 != t_30)))
            _fail(t_30);
          else
            s_30 = t_30;
        }
      }
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = f_16;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm p_3 (ATerm t)
          {
            ATerm u_30 = NULL;
            u_30 = t;
            if(((s_30 != NULL) && (s_30 != u_30)))
              _fail(u_30);
            else
              s_30 = u_30;
            return(t);
          }
          t = Program_1(t, p_3);
          return(t);
        }
        t = option_defined_1(t, j_3);
      }
    }
  {
    ATerm q_3 (ATerm t)
    {
      ATerm s_3 (ATerm t)
      {
        t = not_null(s_30);
        return(t);
      }
      t = short_description_1(t, s_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, q_3);
    {
      t = term_k_16;
      {
        t = echo_0(t);
        {
          t = term_n_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm v_30 = NULL;
                  ATerm w_30 = NULL;
                  w_30 = t;
                  if(((v_30 != NULL) && (v_30 != w_30)))
                    _fail(w_30);
                  else
                    v_30 = w_30;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_30)), term_p_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_3);
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm x_30 = NULL;
                    ATerm y_30 = NULL;
                    ATerm z_3 (ATerm t)
                    {
                      t = not_null(s_30);
                      return(t);
                    }
                    t = long_description_1(t, z_3);
                    {
                      y_30 = t;
                      if(((x_30 != NULL) && (x_30 != y_30)))
                        _fail(y_30);
                      else
                        x_30 = y_30;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(x_30)), term_t_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_3);
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
ATerm Undefined_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm k_31 = NULL,l_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym_Undefined_1))
    {
      l_31 = ATgetArgument(k_31, 0);
      {
        ATerm o_31 = NULL,q_31 = NULL;
        ATerm p_31 = NULL;
        t = SSLgetAnnotations(not_null(k_31));
        {
          p_31 = t;
          if(((o_31 != NULL) && (o_31 != p_31)))
            _fail(p_31);
          else
            o_31 = p_31;
        }
        {
          t = not_null(l_31);
          {
            ATerm s_31 = NULL;
            t = s_67(t);
            {
              q_31 = t;
              {
                ATerm t_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_31)), not_null(o_31));
                {
                  t_31 = t;
                  if(((s_31 != NULL) && (s_31 != t_31)))
                    _fail(t_31);
                  else
                    s_31 = t_31;
                }
                t = not_null(s_31);
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
ATerm fetch_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm y_31 (ATerm t)
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_75, _id);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        t = Cons_2(t, _id, y_31);
      }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_92 (ATerm))
{
  t = fetch_1(t, u_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym_Help_0))
    {
      ATerm f_32 = NULL,h_32 = NULL;
      ATerm w_16;
      w_16 = t;
      {
        ATerm g_32 = NULL;
        t = SSLgetAnnotations(not_null(d_32));
        {
          g_32 = t;
          if(((f_32 != NULL) && (f_32 != g_32)))
            _fail(g_32);
          else
            f_32 = g_32;
        }
      }
      t = w_16;
      {
        ATerm i_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_32));
        {
          i_32 = t;
          if(((h_32 != NULL) && (h_32 != i_32)))
            _fail(i_32);
          else
            h_32 = i_32;
        }
        t = not_null(h_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_68 (ATerm))
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_68(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  o_32 = t;
  n_32 :
  if(match_cons(o_32, sym__2))
    {
      p_32 = ATgetArgument(o_32, 0);
      q_32 = ATgetArgument(o_32, 1);
      t = SSL_table_get(not_null(p_32), not_null(q_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym__3))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      c_33 = ATgetArgument(z_32, 2);
      {
        ATerm d_17;
        d_17 = t;
        {
          ATerm g_33 = NULL;
          ATerm h_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), not_null(b_33));
          {
            ATerm e_17 = t;
            int j_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(j_17);
              }
            else
              {
                t = e_17;
                t = (ATerm) ATempty;
              }
            {
              h_33 = t;
              if(((g_33 != NULL) && (g_33 != h_33)))
                _fail(h_33);
              else
                g_33 = h_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_33), not_null(b_33), (ATerm) ATinsert(CheckATermList(not_null(g_33)), not_null(c_33)));
            t = table_put_0(t);
          }
        }
        t = d_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_93 (ATerm))
{
  ATerm l_33 = NULL;
  ATerm m_33 = NULL;
  t = term_f_6;
  {
    t = z_93(t);
    {
      m_33 = t;
      if(((l_33 != NULL) && (l_33 != m_33)))
        _fail(m_33);
      else
        l_33 = m_33;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_16, term_m_16, not_null(l_33));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  r_33 :
  if(match_string(s_33, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
        {
          t_33 = ATgetFirst((ATermList) s_33);
          u_33 = (ATerm) ATgetNext((ATermList) s_33);
          {
            ATerm x_33 = NULL;
            ATerm k_17;
            k_17 = t;
            {
              t = not_null(t_33);
              t = a_0(t);
            }
            t = k_17;
            {
              ATerm y_33 = NULL;
              t = term_f_6;
              {
                t = b_0(t);
                {
                  y_33 = t;
                  if(((x_33 != NULL) && (x_33 != y_33)))
                    _fail(y_33);
                  else
                    x_33 = y_33;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_33)), not_null(x_33));
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
  ATerm a_4 (ATerm t)
  {
    ATerm d_34 = NULL;
    d_34 = t;
    c_34 :
    if(!(match_string(d_34, "--help")))
      {
        if(!(match_string(d_34, "-h")))
          {
            if(!(match_string(d_34, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_n_17;
    {
      t = set_config_0(t);
      t = term_o_17;
    }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  t = Option_3(t, a_4, f_4, g_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
    {
      h_34 = ATgetFirst((ATermList) g_34);
      i_34 = (ATerm) ATgetNext((ATermList) g_34);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_34)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_34)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_58 (ATerm), ATerm j_58 (ATerm))
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
    {
      t_34 = ATgetFirst((ATermList) s_34);
      u_34 = (ATerm) ATgetNext((ATermList) s_34);
      {
        ATerm y_34 = NULL,a_35 = NULL;
        ATerm z_34 = NULL;
        t = SSLgetAnnotations(not_null(s_34));
        {
          z_34 = t;
          if(((y_34 != NULL) && (y_34 != z_34)))
            _fail(z_34);
          else
            y_34 = z_34;
        }
        {
          t = not_null(t_34);
          {
            ATerm c_35 = NULL;
            t = i_58(t);
            {
              a_35 = t;
              {
                t = not_null(u_34);
                {
                  ATerm e_35 = NULL;
                  t = j_58(t);
                  {
                    c_35 = t;
                    {
                      ATerm f_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_35)), not_null(a_35)), not_null(y_34));
                      {
                        f_35 = t;
                        if(((e_35 != NULL) && (e_35 != f_35)))
                          _fail(f_35);
                        else
                          e_35 = f_35;
                      }
                      t = not_null(e_35);
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
  ATerm p_35 = NULL;
  p_35 = t;
  o_35 :
  if(((ATgetType(p_35) == AT_LIST) && ATisEmpty(p_35)))
    {
      {
        ATerm r_35 = NULL,t_35 = NULL;
        ATerm r_17;
        r_17 = t;
        {
          ATerm s_35 = NULL;
          t = SSLgetAnnotations(not_null(p_35));
          {
            s_35 = t;
            if(((r_35 != NULL) && (r_35 != s_35)))
              _fail(s_35);
            else
              r_35 = s_35;
          }
        }
        t = r_17;
        {
          ATerm u_35 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_35));
          {
            u_35 = t;
            if(((t_35 != NULL) && (t_35 != u_35)))
              _fail(u_35);
            else
              t_35 = u_35;
          }
          t = not_null(t_35);
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
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_cons(a_36, sym__2))
    {
      b_36 = ATgetArgument(a_36, 0);
      c_36 = ATgetArgument(a_36, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(b_36), not_null(c_36));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_93 (ATerm))
{
  ATerm s_17;
  s_17 = t;
  {
    ATerm h_4 (ATerm t)
    {
      t = term_t_17;
      t = x_93(t);
      return(t);
    }
    t = try_1(t, h_4);
  }
  t = s_17;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm k_36 = NULL;
      ATerm w_17;
      w_17 = t;
      {
        ATerm i_36 = NULL;
        ATerm j_36 = NULL;
        j_36 = t;
        if(((i_36 != NULL) && (i_36 != j_36)))
          _fail(j_36);
        else
          i_36 = j_36;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(i_36));
          t = set_config_0(t);
        }
      }
      t = w_17;
      {
        ATerm l_36 = NULL;
        l_36 = t;
        if(((k_36 != NULL) && (k_36 != l_36)))
          _fail(l_36);
        else
          k_36 = l_36;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_36));
      }
      return(t);
    }
    ATerm j_4 (ATerm t)
    {
      ATerm x_17 = t;
      int a_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_18);
            }
          else
            {
              t = b_18;
              {
                t = x_93(t);
                t = Cons_2(t, _id, j_4);
              }
            }
          ;
          LocalPopChoice(a_18);
        }
      else
        {
          t = x_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_4, j_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  ATerm f_18;
  f_18 = t;
  {
    ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
    u_36 = t;
    q_36 :
    if(match_cons(u_36, sym__3))
      {
        v_36 = ATgetArgument(u_36, 0);
        w_36 = ATgetArgument(u_36, 1);
        x_36 = ATgetArgument(u_36, 2);
        {
          if(((r_36 != NULL) && (r_36 != v_36)))
            _fail(v_36);
          else
            r_36 = v_36;
          {
            if(((s_36 != NULL) && (s_36 != w_36)))
              _fail(w_36);
            else
              s_36 = w_36;
            {
              if(((t_36 != NULL) && (t_36 != x_36)))
                _fail(x_36);
              else
                t_36 = x_36;
              t = SSL_table_put(not_null(r_36), not_null(s_36), not_null(t_36));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_93 (ATerm))
{
  ATerm a_37 = NULL;
  ATerm g_18;
  g_18 = t;
  {
    t = term_h_18;
    t = table_put_0(t);
  }
  t = g_18;
  {
    ATerm k_4 (ATerm t)
    {
      ATerm k_18 = t;
      int l_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_93(t);
          ;
          LocalPopChoice(l_18);
        }
      else
        {
          t = k_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_4);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_18;
            o_18 = t;
            {
              ATerm p_18 = t;
              int u_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_s_14;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(u_18);
                }
              else
                {
                  t = p_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = o_18;
            {
              t = system_usage_0(t);
              {
                t = term_a_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            {
              ATerm n_4 (ATerm t)
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm d_37 = NULL;
                  d_37 = t;
                  if(((a_37 != NULL) && (a_37 != d_37)))
                    _fail(d_37);
                  else
                    a_37 = d_37;
                  return(t);
                }
                t = Undefined_1(t, o_4);
                return(t);
              }
              t = option_defined_1(t, n_4);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_37)), term_y_18));
                {
                  t = printnl_0(t);
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
          }
        return(t);
      }
      t = try_1(t, m_4);
      {
        ATerm e_19;
        e_19 = t;
        {
          t = term_l_16;
          t = table_destroy_0(t);
        }
        t = e_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm))
{
  t = parse_options_1(t, w_91);
  {
    t = store_options_0(t);
    {
      t = y_91(t);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_91);
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            {
              ATerm h_19 = t;
              int i_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_91(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_19);
                }
              else
                {
                  t = h_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_91(t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_91);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, p_4, n_91, o_91, r_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm h_91 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm s_19;
      s_19 = t;
      {
        ATerm h_37 = NULL;
        ATerm k_37 = NULL;
        t = term_j_13;
        {
          t = get_config_0(t);
          {
            k_37 = t;
            if(((h_37 != NULL) && (h_37 != k_37)))
              _fail(k_37);
            else
              h_37 = k_37;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATempty, not_null(h_37)));
          t = printnl_0(t);
        }
      }
      t = s_19;
      return(t);
    }
    t = if_verbose2_1(t, h_5);
    return(t);
  }
  t = iowrap_4(t, f_91, g_91, h_91, v_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_91 (ATerm), ATerm e_91 (ATerm))
{
  t = iowrap_3(t, d_91, e_91, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_91 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    t = _2(t, _id, a_91);
    return(t);
  }
  t = iowrap_2(t, i_5, _fail);
  return(t);
}
ATerm treeviz_0 (ATerm t)
{
  t = iowrap_1(t, Treeviz_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = treeviz_0(t);
  return(t);
}
