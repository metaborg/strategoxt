#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "xtc-conf.h"
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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_p_17;
ATerm term_j_17;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_z_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_p_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_y_8;
ATerm term_l_8;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_q_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_c_6;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_r_3;
void init_constant_terms (void)
{
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("[ ]", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_v_7, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_c_6);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_c_6);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_c_6);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_r_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__3, term_q_14, term_r_14, (ATerm) ATempty);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm string_as_chars_1 (ATerm, ATerm y_67 (ATerm));
ATerm escape_0 (ATerm);
ATerm BuildEdge_0 (ATerm);
ATerm MkEdges_2 (ATerm, ATerm r_85 (ATerm), ATerm s_85 (ATerm));
ATerm TreeViz_0 (ATerm);
ATerm new_0 (ATerm);
ATerm NewNodeName_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm NodeName_0 (ATerm);
ATerm treeviz_0 (ATerm);
ATerm _2 (ATerm, ATerm k_48 (ATerm), ATerm l_48 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm p_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_63 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_70 (ATerm), ATerm r_70 (ATerm));
ATerm crush_2 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_63 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_65 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm g_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_76 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm y_49 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_49 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_63 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_85 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_62 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_58 (ATerm), ATerm l_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_62 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_62 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_64 (ATerm), ATerm v_64 (ATerm), ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm o_65 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_65 (ATerm), ATerm e_65 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_65 (ATerm));
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
  if(((ATgetType(w_2) == AT_LIST) && ((ATermList) w_2 != ATempty)))
    {
      x_2 = ATgetFirst((ATermList) w_2);
      y_2 = (ATerm) ATgetNext((ATermList) w_2);
      v_2 :
      if(match_int(x_2, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_2)), term_i_5), term_h_5);
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
  if(((ATgetType(e_3) == AT_LIST) && ((ATermList) e_3 != ATempty)))
    {
      f_3 = ATgetFirst((ATermList) e_3);
      g_3 = (ATerm) ATgetNext((ATermList) e_3);
      d_3 :
      if(match_int(f_3, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_3)), term_h_5), term_h_5);
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
  if(((ATgetType(m_3) == AT_LIST) && ((ATermList) m_3 != ATempty)))
    {
      n_3 = ATgetFirst((ATermList) m_3);
      o_3 = (ATerm) ATgetNext((ATermList) m_3);
      l_3 :
      if(match_int(n_3, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_3)), term_r_3), term_h_5);
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
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      {
        ATerm l_5 = t;
        int m_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(m_5);
          }
        else
          {
            t = l_5;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm n_5 = t;
  int o_5 = stack_ptr;
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
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      {
        ATerm p_5 = t;
        int s_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(s_5);
          }
        else
          {
            t = p_5;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm y_67 (ATerm))
{
  t = explode_string_0(t);
  {
    t = y_67(t);
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
ATerm MkEdges_2 (ATerm t, ATerm r_85 (ATerm), ATerm s_85 (ATerm))
{
  ATerm q_4 = NULL;
  ATerm s_4 = NULL,t_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  q_4 = t;
  {
    ATerm t_5;
    t_5 = t;
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
    t = t_5;
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
                t = term_c_6;
                {
                  t = r_85(t);
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
                            t = s_85(t);
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
            ATerm d_0 (ATerm t)
            {
              ATerm e_0 (ATerm t)
              {
                t = not_null(w_5);
                return(t);
              }
              t = MkEdges_2(t, e_0, TreeViz_0);
              return(t);
            }
            t = map_1(t, d_0);
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
      if(((ATermList) a_6 == ATempty))
        {
          {
            ATerm e_6 = t;
            int f_6 = stack_ptr;
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
                LocalPopChoice(f_6);
              }
            else
              {
                t = e_6;
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
    ATerm g_6;
    g_6 = t;
    {
      ATerm s_6 = NULL;
      t = term_c_6;
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
    t = g_6;
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
                  t = term_i_6;
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
      ATerm j_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0(t);
          t = int_to_string_0(t);
          LocalPopChoice(k_6);
        }
      else
        {
          t = j_6;
          {
            t = Nil_0(t);
            t = term_l_6;
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
    ATerm m_6;
    m_6 = t;
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
    t = m_6;
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
ATerm _2 (ATerm t, ATerm k_48 (ATerm), ATerm l_48 (ATerm))
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
            t = k_48(t);
            {
              c_9 = t;
              {
                t = not_null(w_8);
                {
                  ATerm g_9 = NULL;
                  t = l_48(t);
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
  ATerm o_6;
  o_6 = t;
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
      t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), not_null(p_9)), term_w_6));
      {
        t = printnl_0(t);
        {
          t = term_y_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_6;
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
        ATerm z_6;
        z_6 = t;
        t = SSL_printnl(not_null(w_9), not_null(x_9));
        t = z_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm g_10 = NULL;
  ATerm i_10 = NULL;
  g_10 = t;
  {
    ATerm j_10 = NULL;
    ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
    t = not_null(g_10);
    {
      j_10 = t;
      {
        t = SSL_explode_term(not_null(j_10));
        {
          l_10 = t;
          e_10 :
          if(match_cons(l_10, sym__2))
            {
              m_10 = ATgetArgument(l_10, 0);
              n_10 = ATgetArgument(l_10, 1);
              f_10 :
              if(match_string(m_10, ""))
                {
                  if(((i_10 != NULL) && (i_10 != n_10)))
                    _fail(n_10);
                  else
                    i_10 = n_10;
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
      t = not_null(i_10);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym__2))
    {
      u_10 = ATgetArgument(t_10, 0);
      v_10 = ATgetArgument(t_10, 1);
      {
        t = not_null(u_10);
        {
          ATerm r_0 (ATerm t)
          {
            t = not_null(v_10);
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
  ATerm a_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(c_7);
    }
  else
    {
      t = a_7;
      t = conc_more_lists_0(t);
    }
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
ATerm debug_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm d_7;
  d_7 = t;
  {
    ATerm b_11 = NULL,d_11 = NULL;
    ATerm e_7;
    e_7 = t;
    {
      ATerm c_11 = NULL;
      t = p_66(t);
      {
        c_11 = t;
        if(((b_11 != NULL) && (b_11 != c_11)))
          _fail(c_11);
        else
          b_11 = c_11;
      }
    }
    t = e_7;
    {
      ATerm e_11 = NULL;
      e_11 = t;
      if(((d_11 != NULL) && (d_11 != e_11)))
        _fail(e_11);
      else
        d_11 = e_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_11)), not_null(b_11)));
        t = printnl_0(t);
      }
    }
  }
  t = d_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_11 = NULL;
  i_11 = t;
  t = SSL_is_string(not_null(i_11));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_0);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
              r_11 = t;
              q_11 :
              if(match_cons(r_11, sym_Path_1))
                {
                  s_11 = ATgetArgument(r_11, 0);
                  t = not_null(s_11);
                }
              else
                {
                  if(match_cons(r_11, sym_Var_1))
                    {
                      s_11 = ATgetArgument(r_11, 0);
                      {
                        t = not_null(s_11);
                        {
                          ATerm l_7 = t;
                          int o_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(o_7);
                            }
                          else
                            {
                              t = l_7;
                              {
                                ATerm t_0 (ATerm t)
                                {
                                  t = term_p_7;
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
                      if(match_cons(r_11, sym_Prefix_2))
                        {
                          s_11 = ATgetArgument(r_11, 0);
                          t_11 = ATgetArgument(r_11, 1);
                          {
                            ATerm y_11 = NULL,a_12 = NULL;
                            ATerm q_7;
                            q_7 = t;
                            {
                              ATerm z_11 = NULL;
                              t = not_null(s_11);
                              {
                                t = eval_config_0(t);
                                {
                                  z_11 = t;
                                  if(((y_11 != NULL) && (y_11 != z_11)))
                                    _fail(z_11);
                                  else
                                    y_11 = z_11;
                                }
                              }
                            }
                            t = q_7;
                            {
                              ATerm b_12 = NULL;
                              t = not_null(t_11);
                              {
                                t = eval_config_0(t);
                                {
                                  b_12 = t;
                                  if(((a_12 != NULL) && (a_12 != b_12)))
                                    _fail(b_12);
                                  else
                                    a_12 = b_12;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_11), not_null(a_12));
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
  ATerm j_12 = NULL;
  j_12 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_7, not_null(j_12));
    {
      t = table_get_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm s_7;
            s_7 = t;
            {
              ATerm l_12 = NULL;
              ATerm m_12 = NULL;
              m_12 = t;
              if(((l_12 != NULL) && (l_12 != m_12)))
                _fail(m_12);
              else
                l_12 = m_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_r_7, not_null(j_12), not_null(l_12));
                t = table_put_0(t);
              }
            }
            t = s_7;
          }
          return(t);
        }
        t = try_1(t, u_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_63 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm u_7;
    u_7 = t;
    {
      ATerm q_12 = NULL;
      ATerm r_12 = NULL;
      t = term_v_7;
      {
        t = get_config_0(t);
        {
          r_12 = t;
          if(((q_12 != NULL) && (q_12 != r_12)))
            _fail(r_12);
          else
            q_12 = r_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), term_x_7);
        t = geq_0(t);
      }
    }
    t = u_7;
    t = t_63(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym__2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      t = SSL_WriteToTextFile(not_null(w_12), not_null(x_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym__2))
    {
      e_13 = ATgetArgument(d_13, 0);
      f_13 = ATgetArgument(d_13, 1);
      t = SSL_WriteToBinaryFile(not_null(e_13), not_null(f_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_13 = NULL;
  ATerm b_8;
  b_8 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            ATerm o_13 = NULL,p_13 = NULL;
            o_13 = t;
            k_13 :
            if(match_cons(o_13, sym_Output_1))
              {
                p_13 = ATgetArgument(o_13, 0);
                if(((n_13 != NULL) && (n_13 != p_13)))
                  _fail(p_13);
                else
                  n_13 = p_13;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_0);
          LocalPopChoice(k_8);
        }
      else
        {
          t = j_8;
          {
            ATerm q_13 = NULL;
            t = term_l_8;
            {
              q_13 = t;
              if(((n_13 != NULL) && (n_13 != q_13)))
                _fail(q_13);
              else
                n_13 = q_13;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_0, _id);
  }
  t = b_8;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm z_0 (ATerm t)
      {
        t = not_null(n_13);
        return(t);
      }
      t = split_2(t, z_0, _id);
      return(t);
    }
    t = _2(t, _id, y_0);
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm r_13 = NULL;
              r_13 = t;
              m_13 :
              if(!(match_cons(r_13, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, b_1);
            return(t);
          }
          t = _2(t, a_1, WriteToBinaryFile_0);
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm x_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  ATerm o_8;
  o_8 = t;
  t = dtime_0(t);
  t = o_8;
  {
    t = z_65(t);
    {
      ATerm p_8;
      p_8 = t;
      {
        ATerm y_13 = NULL;
        t = dtime_0(t);
        {
          y_13 = t;
          if(((x_13 != NULL) && (x_13 != y_13)))
            _fail(y_13);
          else
            x_13 = y_13;
        }
      }
      t = p_8;
      {
        z_13 = t;
        w_13 :
        if(match_cons(z_13, sym__2))
          {
            a_14 = ATgetArgument(z_13, 0);
            b_14 = ATgetArgument(z_13, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_14)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_13))), not_null(b_14));
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  t = SSL_ReadFromFile(not_null(h_14));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  ATerm m_14 = NULL,o_14 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm n_14 = NULL;
    t = e_69(t);
    {
      n_14 = t;
      if(((m_14 != NULL) && (m_14 != n_14)))
        _fail(n_14);
      else
        m_14 = n_14;
    }
  }
  t = q_8;
  {
    ATerm p_14 = NULL;
    t = f_69(t);
    {
      p_14 = t;
      if(((o_14 != NULL) && (o_14 != p_14)))
        _fail(p_14);
      else
        o_14 = p_14;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), not_null(o_14));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_14 = NULL;
  ATerm r_8;
  r_8 = t;
  {
    ATerm s_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 (ATerm t)
        {
          ATerm w_14 = NULL,x_14 = NULL;
          w_14 = t;
          t_14 :
          if(match_cons(w_14, sym_Input_1))
            {
              x_14 = ATgetArgument(w_14, 0);
              if(((v_14 != NULL) && (v_14 != x_14)))
                _fail(x_14);
              else
                v_14 = x_14;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_1);
        LocalPopChoice(x_8);
      }
    else
      {
        t = s_8;
        {
          ATerm y_14 = NULL;
          t = term_y_8;
          {
            y_14 = t;
            if(((v_14 != NULL) && (v_14 != y_14)))
              _fail(y_14);
            else
              v_14 = y_14;
          }
        }
      }
  }
  t = r_8;
  {
    ATerm d_1 (ATerm t)
    {
      t = not_null(v_14);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  t = SSL_string_to_int(not_null(c_15));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  k_15 = t;
  i_15 :
  if(match_string(k_15, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(k_15) == AT_LIST) && ((ATermList) k_15 != ATempty)))
        {
          l_15 = ATgetFirst((ATermList) k_15);
          m_15 = (ATerm) ATgetNext((ATermList) k_15);
          j_15 :
          if(((ATgetType(m_15) == AT_LIST) && ((ATermList) m_15 != ATempty)))
            {
              n_15 = ATgetFirst((ATermList) m_15);
              o_15 = (ATerm) ATgetNext((ATermList) m_15);
              {
                ATerm s_15 = NULL;
                ATerm z_8;
                z_8 = t;
                {
                  t = not_null(l_15);
                  t = l_0(t);
                }
                t = z_8;
                {
                  ATerm t_15 = NULL;
                  t = not_null(n_15);
                  {
                    t = m_0(t);
                    {
                      t_15 = t;
                      if(((s_15 != NULL) && (s_15 != t_15)))
                        _fail(t_15);
                      else
                        s_15 = t_15;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_15)), not_null(s_15));
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
ATerm io_options_0 (ATerm t)
{
  ATerm d_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm m_16 = NULL;
        m_16 = t;
        x_15 :
        if(!(match_string(m_16, "-i")))
          {
            if(!(match_string(m_16, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        ATerm p_16 = NULL;
        ATerm i_9;
        i_9 = t;
        {
          ATerm n_16 = NULL;
          ATerm o_16 = NULL;
          o_16 = t;
          if(((n_16 != NULL) && (n_16 != o_16)))
            _fail(o_16);
          else
            n_16 = o_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(n_16));
            t = set_config_0(t);
          }
        }
        t = i_9;
        {
          ATerm q_16 = NULL;
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_16));
        }
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = term_k_9;
        return(t);
      }
      t = ArgOption_3(t, e_1, f_1, g_1);
      LocalPopChoice(f_9);
    }
  else
    {
      t = d_9;
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm r_16 = NULL;
              r_16 = t;
              a_16 :
              if(!(match_string(r_16, "-o")))
                {
                  if(!(match_string(r_16, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              ATerm u_16 = NULL;
              ATerm n_9;
              n_9 = t;
              {
                ATerm s_16 = NULL;
                ATerm t_16 = NULL;
                t_16 = t;
                if(((s_16 != NULL) && (s_16 != t_16)))
                  _fail(t_16);
                else
                  s_16 = t_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(s_16));
                  t = set_config_0(t);
                }
              }
              t = n_9;
              {
                ATerm v_16 = NULL;
                v_16 = t;
                if(((u_16 != NULL) && (u_16 != v_16)))
                  _fail(v_16);
                else
                  u_16 = v_16;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_16));
              }
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              t = term_t_9;
              return(t);
            }
            t = ArgOption_3(t, k_1, l_1, m_1);
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_1 (ATerm t)
                  {
                    ATerm w_16 = NULL;
                    w_16 = t;
                    d_16 :
                    if(!(match_string(w_16, "-S")))
                      {
                        if(!(match_string(w_16, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm o_1 (ATerm t)
                  {
                    t = term_b_10;
                    t = set_config_0(t);
                    t = term_c_10;
                    return(t);
                  }
                  ATerm p_1 (ATerm t)
                  {
                    t = term_d_10;
                    return(t);
                  }
                  t = Option_3(t, n_1, o_1, p_1);
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  {
                    ATerm h_10 = t;
                    int k_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_1 (ATerm t)
                        {
                          ATerm x_16 = NULL;
                          x_16 = t;
                          e_16 :
                          if(!(match_string(x_16, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm r_1 (ATerm t)
                        {
                          ATerm a_17 = NULL;
                          ATerm o_10;
                          o_10 = t;
                          {
                            ATerm y_16 = NULL;
                            ATerm z_16 = NULL;
                            t = string_to_int_0(t);
                            {
                              z_16 = t;
                              if(((y_16 != NULL) && (y_16 != z_16)))
                                _fail(z_16);
                              else
                                y_16 = z_16;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(y_16));
                              t = set_config_0(t);
                            }
                          }
                          t = o_10;
                          {
                            ATerm b_17 = NULL;
                            b_17 = t;
                            if(((a_17 != NULL) && (a_17 != b_17)))
                              _fail(b_17);
                            else
                              a_17 = b_17;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_17));
                          }
                          return(t);
                        }
                        ATerm s_1 (ATerm t)
                        {
                          t = term_p_10;
                          return(t);
                        }
                        t = ArgOption_3(t, q_1, r_1, s_1);
                        LocalPopChoice(k_10);
                      }
                    else
                      {
                        t = h_10;
                        {
                          ATerm q_10 = t;
                          int r_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_1 (ATerm t)
                              {
                                ATerm c_17 = NULL;
                                c_17 = t;
                                h_16 :
                                if(!(match_string(c_17, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm v_1 (ATerm t)
                              {
                                ATerm w_10;
                                w_10 = t;
                                {
                                  ATerm d_17 = NULL;
                                  ATerm e_17 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    e_17 = t;
                                    if(((d_17 != NULL) && (d_17 != e_17)))
                                      _fail(e_17);
                                    else
                                      d_17 = e_17;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_x_10, not_null(d_17));
                                    t = set_config_0(t);
                                  }
                                }
                                t = w_10;
                                return(t);
                              }
                              ATerm w_1 (ATerm t)
                              {
                                t = term_y_10;
                                return(t);
                              }
                              t = ArgOption_3(t, t_1, v_1, w_1);
                              LocalPopChoice(r_10);
                            }
                          else
                            {
                              t = q_10;
                              {
                                ATerm z_10 = t;
                                int a_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_1 (ATerm t)
                                    {
                                      ATerm f_17 = NULL;
                                      f_17 = t;
                                      j_16 :
                                      if(!(match_string(f_17, "-v")))
                                        {
                                          if(!(match_string(f_17, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm y_1 (ATerm t)
                                    {
                                      t = term_g_11;
                                      t = set_config_0(t);
                                      t = term_h_11;
                                      return(t);
                                    }
                                    ATerm z_1 (ATerm t)
                                    {
                                      t = term_j_11;
                                      return(t);
                                    }
                                    t = Option_3(t, x_1, y_1, z_1);
                                    LocalPopChoice(a_11);
                                  }
                                else
                                  {
                                    t = z_10;
                                    {
                                      ATerm k_11 = t;
                                      int l_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_2 (ATerm t)
                                          {
                                            ATerm g_17 = NULL;
                                            g_17 = t;
                                            k_16 :
                                            if(!(match_string(g_17, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm f_2 (ATerm t)
                                          {
                                            t = term_n_11;
                                            t = set_config_0(t);
                                            t = term_o_11;
                                            return(t);
                                          }
                                          ATerm g_2 (ATerm t)
                                          {
                                            t = term_p_11;
                                            return(t);
                                          }
                                          t = Option_3(t, e_2, f_2, g_2);
                                          LocalPopChoice(l_11);
                                        }
                                      else
                                        {
                                          t = k_11;
                                          {
                                            ATerm h_2 (ATerm t)
                                            {
                                              ATerm h_17 = NULL;
                                              h_17 = t;
                                              l_16 :
                                              if(!(match_string(h_17, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm m_2 (ATerm t)
                                            {
                                              t = term_v_11;
                                              t = set_config_0(t);
                                              t = term_w_11;
                                              return(t);
                                            }
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_x_11;
                                              return(t);
                                            }
                                            t = Option_3(t, h_2, m_2, n_2);
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
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, term_c_12));
  {
    t = printnl_0(t);
    {
      t = term_y_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_17 = NULL;
  q_17 = t;
  t = SSL_TicksToSeconds(not_null(q_17));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym__2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_17), not_null(x_17));
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            t = SSL_addr(not_null(w_17), not_null(x_17));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_70 (ATerm), ATerm r_70 (ATerm))
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_70(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
        e_18 = t;
        d_18 :
        if(((ATgetType(e_18) == AT_LIST) && ((ATermList) e_18 != ATempty)))
          {
            f_18 = ATgetFirst((ATermList) e_18);
            g_18 = (ATerm) ATgetNext((ATermList) e_18);
            {
              ATerm j_18 = NULL;
              ATerm k_18 = NULL;
              t = not_null(g_18);
              {
                t = foldr_2(t, q_70, r_70);
                {
                  k_18 = t;
                  if(((j_18 != NULL) && (j_18 != k_18)))
                    _fail(k_18);
                  else
                    j_18 = k_18;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(j_18));
                t = r_70(t);
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
ATerm crush_2 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm))
{
  ATerm r_18 = NULL;
  ATerm t_18 = NULL;
  r_18 = t;
  {
    ATerm u_18 = NULL;
    ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
    t = not_null(r_18);
    {
      u_18 = t;
      {
        t = SSL_explode_term(not_null(u_18));
        {
          w_18 = t;
          q_18 :
          if(match_cons(w_18, sym__2))
            {
              x_18 = ATgetArgument(w_18, 0);
              y_18 = ATgetArgument(w_18, 1);
              if(((t_18 != NULL) && (t_18 != y_18)))
                _fail(y_18);
              else
                t_18 = y_18;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_18);
      t = foldr_2(t, i_72, j_72);
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
    ATerm o_2 (ATerm t)
    {
      t = term_a_10;
      return(t);
    }
    t = crush_2(t, o_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym__2))
    {
      f_19 = ATgetArgument(e_19, 0);
      g_19 = ATgetArgument(e_19, 1);
      {
        ATerm h_12;
        h_12 = t;
        {
          ATerm i_12 = t;
          int k_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_19), not_null(g_19));
              LocalPopChoice(k_12);
            }
          else
            {
              t = i_12;
              t = SSL_gtr(not_null(f_19), not_null(g_19));
            }
        }
        t = h_12;
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
  ATerm m_19 = NULL;
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
      n_19 = t;
      l_19 :
      if(match_cons(n_19, sym__2))
        {
          o_19 = ATgetArgument(n_19, 0);
          p_19 = ATgetArgument(n_19, 1);
          {
            if(((m_19 != NULL) && (m_19 != o_19)))
              _fail(o_19);
            else
              m_19 = o_19;
            if(((m_19 != NULL) && (m_19 != p_19)))
              _fail(p_19);
            else
              m_19 = p_19;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_63 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm p_12;
    p_12 = t;
    {
      ATerm s_19 = NULL;
      ATerm t_19 = NULL;
      t = term_v_7;
      {
        t = get_config_0(t);
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), term_y_6);
        t = geq_0(t);
      }
    }
    t = p_12;
    t = s_63(t);
    return(t);
  }
  t = try_1(t, p_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm x_19 = NULL,z_19 = NULL;
    ATerm s_12;
    s_12 = t;
    {
      ATerm y_19 = NULL;
      t = run_time_0(t);
      {
        y_19 = t;
        if(((x_19 != NULL) && (x_19 != y_19)))
          _fail(y_19);
        else
          x_19 = y_19;
      }
    }
    t = s_12;
    {
      ATerm a_20 = NULL;
      t = term_t_12;
      {
        t = get_config_0(t);
        {
          a_20 = t;
          if(((z_19 != NULL) && (z_19 != a_20)))
            _fail(a_20);
          else
            z_19 = a_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_12), not_null(x_19)), term_y_12), not_null(z_19)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_2);
  {
    t = term_a_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym_Version_0))
    {
      ATerm j_20 = NULL,l_20 = NULL;
      ATerm a_13;
      a_13 = t;
      {
        ATerm k_20 = NULL;
        t = SSLgetAnnotations(not_null(h_20));
        {
          k_20 = t;
          if(((j_20 != NULL) && (j_20 != k_20)))
            _fail(k_20);
          else
            j_20 = k_20;
        }
      }
      t = a_13;
      {
        ATerm m_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_20));
        {
          m_20 = t;
          if(((l_20 != NULL) && (l_20 != m_20)))
            _fail(m_20);
          else
            l_20 = m_20;
        }
        t = not_null(l_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm b_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = b_13;
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_2);
  t = x_65(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_20 = NULL;
  r_20 = t;
  t = SSL_table_create(not_null(r_20));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_20 = NULL;
  v_20 = t;
  {
    ATerm j_13;
    j_13 = t;
    {
      t = term_l_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_13, term_s_13, not_null(v_20));
          t = table_put_0(t);
        }
      }
    }
    t = j_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  t = SSL_table_destroy(not_null(z_20));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_21 = NULL;
  d_21 = t;
  t = SSL_exit(not_null(d_21));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATempty, term_t_13);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm g_21 (ATerm t)
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = Cons_2(t, g_76, g_21);
      }
    return(t);
  }
  t = g_21(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  p_21 = t;
  m_21 :
  if(((ATgetType(p_21) == AT_LIST) && ((ATermList) p_21 != ATempty)))
    {
      n_21 = ATgetFirst((ATermList) p_21);
      o_21 = (ATerm) ATgetNext((ATermList) p_21);
      {
        ATerm s_21 = NULL;
        t = not_null(o_21);
        {
          ATerm c_14;
          c_14 = t;
          {
            ATerm t_21 = NULL,v_21 = NULL,x_21 = NULL;
            ATerm d_14;
            d_14 = t;
            {
              ATerm u_21 = NULL;
              t = j_0(t);
              {
                u_21 = t;
                if(((t_21 != NULL) && (t_21 != u_21)))
                  _fail(u_21);
                else
                  t_21 = u_21;
              }
            }
            t = d_14;
            {
              ATerm w_21 = NULL;
              t = not_null(n_21);
              {
                t = i_0(t);
                {
                  w_21 = t;
                  if(((v_21 != NULL) && (v_21 != w_21)))
                    _fail(w_21);
                  else
                    v_21 = w_21;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_21)), not_null(v_21));
                {
                  x_21 = t;
                  if(((s_21 != NULL) && (s_21 != x_21)))
                    _fail(x_21);
                  else
                    s_21 = x_21;
                }
              }
            }
          }
          t = c_14;
          {
            ATerm z_2 (ATerm t)
            {
              t = not_null(s_21);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) p_21 == ATempty))
        {
          {
            t = term_c_6;
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
  ATerm a_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_3);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  t = SSL_implode_string(not_null(l_22));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_76 (ATerm))
{
  ATerm o_22 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_22);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          t = Nil_0(t);
          t = v_76(t);
        }
      }
    return(t);
  }
  t = o_22(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_14);
    }
  else
    {
      t = g_14;
      {
        ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
        r_22 = t;
        q_22 :
        if(((ATgetType(r_22) == AT_LIST) && ((ATermList) r_22 != ATempty)))
          {
            s_22 = ATgetFirst((ATermList) r_22);
            t_22 = (ATerm) ATgetNext((ATermList) r_22);
            {
              t = not_null(s_22);
              {
                ATerm b_3 (ATerm t)
                {
                  t = not_null(t_22);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_3);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm c_23 = NULL;
  c_23 = t;
  t = SSL_explode_string(not_null(c_23));
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
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm g_23 = NULL;
  ATerm h_23 = NULL;
  t = term_c_6;
  {
    t = h_0(t);
    {
      h_23 = t;
      if(((g_23 != NULL) && (g_23 != h_23)))
        _fail(h_23);
      else
        g_23 = h_23;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_14), not_null(g_23)), term_j_14);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym_Program_1))
    {
      p_23 = ATgetArgument(o_23, 0);
      {
        ATerm s_23 = NULL,u_23 = NULL;
        ATerm t_23 = NULL;
        t = SSLgetAnnotations(not_null(o_23));
        {
          t_23 = t;
          if(((s_23 != NULL) && (s_23 != t_23)))
            _fail(t_23);
          else
            s_23 = t_23;
        }
        {
          t = not_null(p_23);
          {
            ATerm x_23 = NULL;
            t = y_49(t);
            {
              u_23 = t;
              {
                ATerm y_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_23)), not_null(s_23));
                {
                  y_23 = t;
                  if(((x_23 != NULL) && (x_23 != y_23)))
                    _fail(y_23);
                  else
                    x_23 = y_23;
                }
                t = not_null(x_23);
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
  ATerm h_24 = NULL;
  ATerm h_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      ATerm i_24 = NULL;
      i_24 = t;
      if(((h_24 != NULL) && (h_24 != i_24)))
        _fail(i_24);
      else
        h_24 = i_24;
      return(t);
    }
    t = Program_1(t, i_3);
    return(t);
  }
  t = option_defined_1(t, h_3);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm j_24 = NULL;
      ATerm k_24 = NULL;
      t = term_c_6;
      {
        ATerm p_3 (ATerm t)
        {
          t = not_null(h_24);
          return(t);
        }
        t = short_description_1(t, p_3);
        {
          t = concat_strings_0(t);
          {
            k_24 = t;
            if(((j_24 != NULL) && (j_24 != k_24)))
              _fail(k_24);
            else
              j_24 = k_24;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATempty, not_null(j_24)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, j_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATempty, term_l_14));
      {
        t = printnl_0(t);
        {
          t = term_s_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_3 (ATerm t)
                {
                  ATerm l_24 = NULL;
                  ATerm m_24 = NULL;
                  m_24 = t;
                  if(((l_24 != NULL) && (l_24 != m_24)))
                    _fail(m_24);
                  else
                    l_24 = m_24;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_24)), term_u_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_3);
                {
                  ATerm s_3 (ATerm t)
                  {
                    ATerm n_24 = NULL;
                    ATerm o_24 = NULL;
                    ATerm t_3 (ATerm t)
                    {
                      t = not_null(h_24);
                      return(t);
                    }
                    t = long_description_1(t, t_3);
                    {
                      o_24 = t;
                      if(((n_24 != NULL) && (n_24 != o_24)))
                        _fail(o_24);
                      else
                        n_24 = o_24;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(CheckATermList(not_null(n_24)), term_z_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_3);
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
ATerm Undefined_1 (ATerm t, ATerm z_49 (ATerm))
{
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym_Undefined_1))
    {
      z_24 = ATgetArgument(y_24, 0);
      {
        ATerm c_25 = NULL,e_25 = NULL;
        ATerm d_25 = NULL;
        t = SSLgetAnnotations(not_null(y_24));
        {
          d_25 = t;
          if(((c_25 != NULL) && (c_25 != d_25)))
            _fail(d_25);
          else
            c_25 = d_25;
        }
        {
          t = not_null(z_24);
          {
            ATerm g_25 = NULL;
            t = z_49(t);
            {
              e_25 = t;
              {
                ATerm h_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_25)), not_null(c_25));
                {
                  h_25 = t;
                  if(((g_25 != NULL) && (g_25 != h_25)))
                    _fail(h_25);
                  else
                    g_25 = h_25;
                }
                t = not_null(g_25);
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
ATerm fetch_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm t_25 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_76, _id);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = Cons_2(t, _id, t_25);
      }
    return(t);
  }
  t = t_25(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_63 (ATerm))
{
  t = fetch_1(t, q_63);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym_Help_0))
    {
      ATerm c_26 = NULL,e_26 = NULL;
      ATerm d_15;
      d_15 = t;
      {
        ATerm d_26 = NULL;
        t = SSLgetAnnotations(not_null(a_26));
        {
          d_26 = t;
          if(((c_26 != NULL) && (c_26 != d_26)))
            _fail(d_26);
          else
            c_26 = d_26;
        }
      }
      t = d_15;
      {
        ATerm f_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_26));
        {
          f_26 = t;
          if(((e_26 != NULL) && (e_26 != f_26)))
            _fail(f_26);
          else
            e_26 = f_26;
        }
        t = not_null(e_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_85 (ATerm))
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_85(t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_26 = NULL,o_26 = NULL,p_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym__2))
    {
      o_26 = ATgetArgument(l_26, 0);
      p_26 = ATgetArgument(l_26, 1);
      t = SSL_table_get(not_null(o_26), not_null(p_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym__3))
    {
      j_27 = ATgetArgument(c_27, 0);
      k_27 = ATgetArgument(c_27, 1);
      l_27 = ATgetArgument(c_27, 2);
      {
        ATerm g_15;
        g_15 = t;
        {
          ATerm p_27 = NULL;
          ATerm q_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(k_27));
          {
            ATerm h_15 = t;
            int p_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_15);
              }
            else
              {
                t = h_15;
                t = (ATerm) ATempty;
              }
            {
              q_27 = t;
              if(((p_27 != NULL) && (p_27 != q_27)))
                _fail(q_27);
              else
                p_27 = q_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_27), not_null(k_27), (ATerm) ATinsert(CheckATermList(not_null(p_27)), not_null(l_27)));
            t = table_put_0(t);
          }
        }
        t = g_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm v_27 = NULL;
  ATerm w_27 = NULL;
  t = term_c_6;
  {
    t = q_62(t);
    {
      w_27 = t;
      if(((v_27 != NULL) && (v_27 != w_27)))
        _fail(w_27);
      else
        v_27 = w_27;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_14, term_r_14, not_null(v_27));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_string(c_28, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(c_28) == AT_LIST) && ((ATermList) c_28 != ATempty)))
        {
          d_28 = ATgetFirst((ATermList) c_28);
          e_28 = (ATerm) ATgetNext((ATermList) c_28);
          {
            ATerm h_28 = NULL;
            ATerm q_15;
            q_15 = t;
            {
              t = not_null(d_28);
              t = a_0(t);
            }
            t = q_15;
            {
              ATerm i_28 = NULL;
              t = term_c_6;
              {
                t = b_0(t);
                {
                  i_28 = t;
                  if(((h_28 != NULL) && (h_28 != i_28)))
                    _fail(i_28);
                  else
                    h_28 = i_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_28)), not_null(h_28));
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
  ATerm u_3 (ATerm t)
  {
    ATerm n_28 = NULL;
    n_28 = t;
    m_28 :
    if(!(match_string(n_28, "--help")))
      {
        if(!(match_string(n_28, "-h")))
          {
            if(!(match_string(n_28, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_r_15;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_u_15;
    return(t);
  }
  t = Option_3(t, u_3, z_3, a_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  p_28 :
  if(((ATgetType(q_28) == AT_LIST) && ((ATermList) q_28 != ATempty)))
    {
      r_28 = ATgetFirst((ATermList) q_28);
      s_28 = (ATerm) ATgetNext((ATermList) q_28);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_28)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_28)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_58 (ATerm), ATerm l_58 (ATerm))
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(((ATgetType(c_29) == AT_LIST) && ((ATermList) c_29 != ATempty)))
    {
      d_29 = ATgetFirst((ATermList) c_29);
      e_29 = (ATerm) ATgetNext((ATermList) c_29);
      {
        ATerm i_29 = NULL,k_29 = NULL;
        ATerm j_29 = NULL;
        t = SSLgetAnnotations(not_null(c_29));
        {
          j_29 = t;
          if(((i_29 != NULL) && (i_29 != j_29)))
            _fail(j_29);
          else
            i_29 = j_29;
        }
        {
          t = not_null(d_29);
          {
            ATerm m_29 = NULL;
            t = k_58(t);
            {
              k_29 = t;
              {
                t = not_null(e_29);
                {
                  ATerm o_29 = NULL;
                  t = l_58(t);
                  {
                    m_29 = t;
                    {
                      ATerm p_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_29)), not_null(k_29)), not_null(i_29));
                      {
                        p_29 = t;
                        if(((o_29 != NULL) && (o_29 != p_29)))
                          _fail(p_29);
                        else
                          o_29 = p_29;
                      }
                      t = not_null(o_29);
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
  ATerm g_30 = NULL;
  g_30 = t;
  f_30 :
  if(((ATermList) g_30 == ATempty))
    {
      {
        ATerm i_30 = NULL,k_30 = NULL;
        ATerm v_15;
        v_15 = t;
        {
          ATerm j_30 = NULL;
          t = SSLgetAnnotations(not_null(g_30));
          {
            j_30 = t;
            if(((i_30 != NULL) && (i_30 != j_30)))
              _fail(j_30);
            else
              i_30 = j_30;
          }
        }
        t = v_15;
        {
          ATerm l_30 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_30));
          {
            l_30 = t;
            if(((k_30 != NULL) && (k_30 != l_30)))
              _fail(l_30);
            else
              k_30 = l_30;
          }
          t = not_null(k_30);
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
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  q_30 :
  if(match_cons(r_30, sym__2))
    {
      s_30 = ATgetArgument(r_30, 0);
      t_30 = ATgetArgument(r_30, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_7, not_null(s_30), not_null(t_30));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm w_15;
  w_15 = t;
  {
    ATerm f_4 (ATerm t)
    {
      t = term_y_15;
      t = o_62(t);
      return(t);
    }
    t = try_1(t, f_4);
  }
  t = w_15;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm b_31 = NULL;
      ATerm z_15;
      z_15 = t;
      {
        ATerm z_30 = NULL;
        ATerm a_31 = NULL;
        a_31 = t;
        if(((z_30 != NULL) && (z_30 != a_31)))
          _fail(a_31);
        else
          z_30 = a_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(z_30));
          t = set_config_0(t);
        }
      }
      t = z_15;
      {
        ATerm c_31 = NULL;
        c_31 = t;
        if(((b_31 != NULL) && (b_31 != c_31)))
          _fail(c_31);
        else
          b_31 = c_31;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_31));
      }
      return(t);
    }
    ATerm h_4 (ATerm t)
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              {
                t = o_62(t);
                t = Cons_2(t, _id, h_4);
              }
            }
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_4, h_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  ATerm i_16;
  i_16 = t;
  {
    ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
    o_31 = t;
    k_31 :
    if(match_cons(o_31, sym__3))
      {
        p_31 = ATgetArgument(o_31, 0);
        q_31 = ATgetArgument(o_31, 1);
        r_31 = ATgetArgument(o_31, 2);
        {
          if(((l_31 != NULL) && (l_31 != p_31)))
            _fail(p_31);
          else
            l_31 = p_31;
          {
            if(((m_31 != NULL) && (m_31 != q_31)))
              _fail(q_31);
            else
              m_31 = q_31;
            {
              if(((n_31 != NULL) && (n_31 != r_31)))
                _fail(r_31);
              else
                n_31 = r_31;
              t = SSL_table_put(not_null(l_31), not_null(m_31), not_null(n_31));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm u_31 = NULL;
  ATerm i_17;
  i_17 = t;
  {
    t = term_j_17;
    t = table_put_0(t);
  }
  t = i_17;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm k_17 = t;
      int l_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_62(t);
          LocalPopChoice(l_17);
        }
      else
        {
          t = k_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_4);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm m_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_a_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            {
              ATerm k_4 (ATerm t)
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm v_31 = NULL;
                  v_31 = t;
                  if(((u_31 != NULL) && (u_31 != v_31)))
                    _fail(v_31);
                  else
                    u_31 = v_31;
                  return(t);
                }
                t = Undefined_1(t, m_4);
                return(t);
              }
              t = option_defined_1(t, k_4);
              {
                ATerm o_17;
                o_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_31)), term_p_17));
                  t = printnl_0(t);
                }
                t = o_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_4);
      {
        ATerm r_17;
        r_17 = t;
        {
          t = term_q_14;
          t = table_destroy_0(t);
        }
        t = r_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_64 (ATerm), ATerm v_64 (ATerm), ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  t = parse_options_1(t, u_64);
  {
    t = store_options_0(t);
    {
      t = w_64(t);
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_64);
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            {
              ATerm y_17 = t;
              int z_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_64(t);
                  t = report_success_0(t);
                  LocalPopChoice(z_17);
                }
              else
                {
                  t = y_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm o_65 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_65(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_65);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_4, n_65, o_65, o_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm r_4 (ATerm t)
    {
      ATerm c_18;
      c_18 = t;
      {
        ATerm y_31 = NULL;
        ATerm z_31 = NULL;
        t = term_t_12;
        {
          t = get_config_0(t);
          {
            z_31 = t;
            if(((y_31 != NULL) && (y_31 != z_31)))
              _fail(z_31);
            else
              y_31 = z_31;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, not_null(y_31)));
          t = printnl_0(t);
        }
      }
      t = c_18;
      return(t);
    }
    t = if_verbose2_1(t, r_4);
    return(t);
  }
  t = iowrap_4(t, f_65, g_65, h_65, p_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_65 (ATerm), ATerm e_65 (ATerm))
{
  t = iowrap_3(t, d_65, e_65, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    t = _2(t, _id, a_65);
    return(t);
  }
  t = iowrap_2(t, v_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iowrap_1(t, treeviz_0);
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      t = treeviz_0(t);
    }
  return(t);
}
