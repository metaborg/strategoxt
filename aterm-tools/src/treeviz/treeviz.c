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
ATerm term_g_16;
ATerm term_w_15;
ATerm term_h_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_d_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_j_9;
ATerm term_t_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_r_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_g_6;
ATerm term_e_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_u_5;
ATerm term_f_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_x_4;
void init_constant_terms (void)
{
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("[ ]", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_f_7, term_r_7);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_7);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_f_5);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_f_5);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_f_5);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_v_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__3, term_u_13, term_v_13, (ATerm) ATempty);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm BuildNode_0 (ATerm);
ATerm quote_1 (ATerm, ATerm l_67 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm BuildEdge_0 (ATerm);
ATerm MkEdges_2 (ATerm, ATerm m_84 (ATerm), ATerm n_84 (ATerm));
ATerm TreeViz_0 (ATerm);
ATerm new_0 (ATerm);
ATerm NewNodeName_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm NodeName_0 (ATerm);
ATerm treeviz_0 (ATerm);
ATerm _2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_65 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm y_62 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_69 (ATerm), ATerm m_69 (ATerm));
ATerm crush_2 (ATerm, ATerm d_71 (ATerm), ATerm e_71 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_62 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_64 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_67 (ATerm), ATerm a_68 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_64 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm b_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm e_49 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_49 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_83 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_61 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_61 (ATerm));
ATerm iowrap_4 (ATerm, ATerm k_64 (ATerm), ATerm l_64 (ATerm), ATerm m_64 (ATerm), ATerm n_64 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm g_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_64 (ATerm), ATerm d_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_63 (ATerm));
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
ATerm quote_1 (ATerm t, ATerm l_67 (ATerm))
{
  ATerm k_2 = NULL;
  ATerm m_2 = NULL,o_2 = NULL;
  k_2 = t;
  {
    ATerm l_4;
    l_4 = t;
    {
      ATerm n_2 = NULL;
      t = l_67(t);
      {
        n_2 = t;
        if(((m_2 != NULL) && (m_2 != n_2)))
          _fail(n_2);
        else
          m_2 = n_2;
      }
    }
    t = l_4;
    {
      ATerm p_2 = NULL;
      t = not_null(k_2);
      {
        t = explode_string_0(t);
        {
          p_2 = t;
          if(((o_2 != NULL) && (o_2 != p_2)))
            _fail(p_2);
          else
            o_2 = p_2;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(m_2))), not_null(o_2)), (ATerm) ATinsert(ATempty, not_null(m_2)));
        {
          t = concat_0(t);
          t = implode_string_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_x_4;
    return(t);
  }
  t = quote_1(t, c_0);
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  w_2 :
  if(((ATgetType(y_2) == AT_LIST) && ((ATermList) y_2 != ATempty)))
    {
      z_2 = ATgetFirst((ATermList) y_2);
      a_3 = (ATerm) ATgetNext((ATermList) y_2);
      x_2 :
      if(match_int(z_2, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_3)), term_z_4), term_y_4);
        }
      else
        {
          if(match_int(z_2, 92))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_3)), term_y_4), term_y_4);
            }
          else
            {
              if(match_int(z_2, 34))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_3)), term_x_4), term_y_4);
                }
              else
                {
                  _fail(t);
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
ATerm escape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm h_3 (ATerm t)
    {
      ATerm a_5 = t;
      int b_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm d_0 (ATerm t)
            {
              t = Cons_2(t, _id, h_3);
              return(t);
            }
            t = Cons_2(t, _id, d_0);
          }
          LocalPopChoice(b_5);
        }
      else
        {
          t = a_5;
          {
            ATerm c_5 = t;
            int d_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, h_3);
                LocalPopChoice(d_5);
              }
            else
              {
                t = c_5;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = h_3(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm BuildEdge_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
  m_3 = t;
  l_3 :
  if(match_cons(m_3, sym__2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      {
        ATerm r_3 = NULL,s_3 = NULL;
        ATerm t_3 = NULL;
        t = not_null(n_3);
        {
          t = NodeName_0(t);
          {
            t = escape_0(t);
            {
              ATerm u_3 = NULL;
              t = double_quote_0(t);
              {
                t_3 = t;
                {
                  if(((r_3 != NULL) && (r_3 != t_3)))
                    _fail(t_3);
                  else
                    r_3 = t_3;
                  {
                    t = not_null(o_3);
                    {
                      t = NodeName_0(t);
                      {
                        t = escape_0(t);
                        {
                          t = double_quote_0(t);
                          {
                            u_3 = t;
                            if(((s_3 != NULL) && (s_3 != u_3)))
                              _fail(u_3);
                            else
                              s_3 = u_3;
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
        t = (ATerm) ATmakeAppl(sym_edge1_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_target_1, not_null(s_3))), (ATerm) ATmakeAppl(sym_source_1, not_null(r_3))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkEdges_2 (ATerm t, ATerm m_84 (ATerm), ATerm n_84 (ATerm))
{
  ATerm g_4 = NULL;
  ATerm i_4 = NULL,j_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  g_4 = t;
  {
    ATerm e_5;
    e_5 = t;
    {
      ATerm k_4 = NULL;
      ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
      t = not_null(g_4);
      {
        k_4 = t;
        {
          t = SSL_explode_term(not_null(k_4));
          {
            m_4 = t;
            b_4 :
            if(match_cons(m_4, sym__2))
              {
                n_4 = ATgetArgument(m_4, 0);
                o_4 = ATgetArgument(m_4, 1);
                {
                  if(((i_4 != NULL) && (i_4 != n_4)))
                    _fail(n_4);
                  else
                    i_4 = n_4;
                  if(((j_4 != NULL) && (j_4 != o_4)))
                    _fail(o_4);
                  else
                    j_4 = o_4;
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
    t = e_5;
    {
      ATerm s_4 = NULL;
      t = not_null(i_4);
      {
        t = NodeName_0(t);
        {
          ATerm t_4 = NULL,v_4 = NULL;
          t = NewNodeName_0(t);
          {
            s_4 = t;
            {
              if(((q_4 != NULL) && (q_4 != s_4)))
                _fail(s_4);
              else
                q_4 = s_4;
              {
                ATerm u_4 = NULL;
                t = term_f_5;
                {
                  t = m_84(t);
                  {
                    u_4 = t;
                    if(((t_4 != NULL) && (t_4 != u_4)))
                      _fail(u_4);
                    else
                      t_4 = u_4;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), not_null(t_4));
                  {
                    ATerm w_4 = NULL;
                    t = BuildEdge_0(t);
                    {
                      v_4 = t;
                      {
                        if(((p_4 != NULL) && (p_4 != v_4)))
                          _fail(v_4);
                        else
                          p_4 = v_4;
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(q_4), not_null(i_4), not_null(j_4));
                          {
                            t = n_84(t);
                            {
                              w_4 = t;
                              if(((r_4 != NULL) && (r_4 != w_4)))
                                _fail(w_4);
                              else
                                r_4 = w_4;
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
      t = (ATerm) ATinsert(CheckATermList(not_null(r_4)), not_null(p_4));
    }
  }
  return(t);
}
ATerm TreeViz_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,r_5 = NULL;
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,t_5 = NULL;
  ATerm x_5 (ATerm t)
  {
    if(((m_5 != NULL) && (m_5 != o_5)))
      _fail(o_5);
    else
      m_5 = o_5;
    {
      if(((k_5 != NULL) && (k_5 != p_5)))
        _fail(p_5);
      else
        k_5 = p_5;
      {
        if(((l_5 != NULL) && (l_5 != q_5)))
          _fail(q_5);
        else
          l_5 = q_5;
        {
          t = not_null(l_5);
          {
            ATerm e_0 (ATerm t)
            {
              ATerm f_0 (ATerm t)
              {
                t = not_null(m_5);
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
  n_5 = t;
  g_5 :
  if(match_cons(n_5, sym__3))
    {
      o_5 = ATgetArgument(n_5, 0);
      p_5 = ATgetArgument(n_5, 1);
      q_5 = ATgetArgument(n_5, 2);
      h_5 :
      if(((ATermList) q_5 == ATempty))
        {
          {
            ATerm i_5 = t;
            int j_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((m_5 != NULL) && (m_5 != o_5)))
                  _fail(o_5);
                else
                  m_5 = o_5;
                {
                  if(((k_5 != NULL) && (k_5 != p_5)))
                    _fail(p_5);
                  else
                    k_5 = p_5;
                  t = (ATerm) ATempty;
                }
                LocalPopChoice(j_5);
              }
            else
              {
                t = i_5;
                t = x_5(t);
              }
          }
        }
      else
        {
          t = x_5(t);
        }
    }
  else
    {
      _fail(t);
    }
  {
    r_5 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), not_null(k_5));
      {
        t = BuildNode_0(t);
        {
          t_5 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(r_5)), not_null(t_5));
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
  ATerm f_6 = NULL;
  ATerm h_6 = NULL,j_6 = NULL;
  f_6 = t;
  {
    ATerm s_5;
    s_5 = t;
    {
      ATerm i_6 = NULL;
      t = term_f_5;
      {
        t = new_0(t);
        {
          i_6 = t;
          if(((h_6 != NULL) && (h_6 != i_6)))
            _fail(i_6);
          else
            h_6 = i_6;
        }
      }
    }
    t = s_5;
    {
      ATerm l_6 = NULL;
      t = not_null(f_6);
      {
        t = explode_string_0(t);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm p_0 (ATerm t)
            {
              ATerm k_6 = NULL;
              k_6 = t;
              d_6 :
              if(match_int(k_6, 10))
                {
                  t = term_u_5;
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, p_0);
            return(t);
          }
          t = map_1(t, o_0);
          {
            t = implode_string_0(t);
            {
              l_6 = t;
              if(((j_6 != NULL) && (j_6 != l_6)))
                _fail(l_6);
              else
                j_6 = l_6;
            }
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_6)), not_null(h_6));
        t = concat_strings_0(t);
      }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm r_6 = NULL;
  r_6 = t;
  t = SSL_int_to_string(not_null(r_6));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm v_6 = NULL;
  v_6 = t;
  t = SSL_is_int(not_null(v_6));
  return(t);
}
ATerm NodeName_0 (ATerm t)
{
  ATerm a_7 = NULL;
  ATerm c_7 = NULL;
  a_7 = t;
  {
    ATerm d_7 = NULL;
    ATerm q_0 (ATerm t)
    {
      ATerm v_5 = t;
      int w_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0(t);
          t = int_to_string_0(t);
          LocalPopChoice(w_5);
        }
      else
        {
          t = v_5;
          {
            t = Nil_0(t);
            t = term_y_5;
          }
        }
      return(t);
    }
    t = try_1(t, q_0);
    {
      d_7 = t;
      if(((c_7 != NULL) && (c_7 != d_7)))
        _fail(d_7);
      else
        c_7 = d_7;
    }
    t = not_null(c_7);
  }
  return(t);
}
ATerm treeviz_0 (ATerm t)
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL,p_7 = NULL,v_7 = NULL,w_7 = NULL;
  m_7 = t;
  {
    ATerm z_5;
    z_5 = t;
    {
      ATerm q_7 = NULL;
      ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
      t = not_null(m_7);
      {
        q_7 = t;
        {
          t = SSL_explode_term(not_null(q_7));
          {
            s_7 = t;
            j_7 :
            if(match_cons(s_7, sym__2))
              {
                t_7 = ATgetArgument(s_7, 0);
                u_7 = ATgetArgument(s_7, 1);
                {
                  if(((o_7 != NULL) && (o_7 != t_7)))
                    _fail(t_7);
                  else
                    o_7 = t_7;
                  if(((p_7 != NULL) && (p_7 != u_7)))
                    _fail(u_7);
                  else
                    p_7 = u_7;
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
    t = z_5;
    {
      ATerm x_7 = NULL;
      t = not_null(o_7);
      {
        t = NodeName_0(t);
        {
          ATerm y_7 = NULL;
          t = NewNodeName_0(t);
          {
            x_7 = t;
            {
              if(((v_7 != NULL) && (v_7 != x_7)))
                _fail(x_7);
              else
                v_7 = x_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_7), not_null(o_7), not_null(p_7));
                {
                  t = TreeViz_0(t);
                  {
                    y_7 = t;
                    if(((w_7 != NULL) && (w_7 != y_7)))
                      _fail(y_7);
                    else
                      w_7 = y_7;
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_GraphXML_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_graph_2, (ATerm)ATempty, not_null(w_7))));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm))
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym__2))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      {
        ATerm q_8 = NULL,s_8 = NULL;
        ATerm r_8 = NULL;
        t = SSLgetAnnotations(not_null(k_8));
        {
          r_8 = t;
          if(((q_8 != NULL) && (q_8 != r_8)))
            _fail(r_8);
          else
            q_8 = r_8;
        }
        {
          t = not_null(l_8);
          {
            ATerm u_8 = NULL;
            t = q_47(t);
            {
              s_8 = t;
              {
                t = not_null(m_8);
                {
                  ATerm w_8 = NULL;
                  t = r_47(t);
                  {
                    u_8 = t;
                    {
                      ATerm x_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_8), not_null(u_8)), not_null(q_8));
                      {
                        x_8 = t;
                        if(((w_8 != NULL) && (w_8 != x_8)))
                          _fail(x_8);
                        else
                          w_8 = x_8;
                      }
                      t = not_null(w_8);
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
  ATerm f_9 = NULL;
  ATerm a_6;
  a_6 = t;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm g_9 = NULL,h_9 = NULL;
      g_9 = t;
      e_9 :
      if(match_cons(g_9, sym_Program_1))
        {
          h_9 = ATgetArgument(g_9, 0);
          if(((f_9 != NULL) && (f_9 != h_9)))
            _fail(h_9);
          else
            f_9 = h_9;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, r_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_6), not_null(f_9)), term_c_6));
      {
        t = printnl_0(t);
        {
          t = term_g_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym__2))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      {
        ATerm m_6;
        m_6 = t;
        t = SSL_printnl(not_null(m_9), not_null(n_9));
        t = m_6;
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
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  t_9 = t;
  s_9 :
  if(match_cons(t_9, sym__2))
    {
      u_9 = ATgetArgument(t_9, 0);
      v_9 = ATgetArgument(t_9, 1);
      {
        t = not_null(u_9);
        {
          ATerm s_0 (ATerm t)
          {
            t = not_null(v_9);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm n_6;
  n_6 = t;
  {
    ATerm b_10 = NULL,d_10 = NULL;
    ATerm o_6;
    o_6 = t;
    {
      ATerm c_10 = NULL;
      t = o_65(t);
      {
        c_10 = t;
        if(((b_10 != NULL) && (b_10 != c_10)))
          _fail(c_10);
        else
          b_10 = c_10;
      }
    }
    t = o_6;
    {
      ATerm e_10 = NULL;
      e_10 = t;
      if(((d_10 != NULL) && (d_10 != e_10)))
        _fail(e_10);
      else
        d_10 = e_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_10)), not_null(b_10)));
        t = printnl_0(t);
      }
    }
  }
  t = n_6;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  t = SSL_is_string(not_null(i_10));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      {
        ATerm s_6 = t;
        int t_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_0);
            LocalPopChoice(t_6);
          }
        else
          {
            t = s_6;
            {
              ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
              r_10 = t;
              q_10 :
              if(match_cons(r_10, sym_Path_1))
                {
                  s_10 = ATgetArgument(r_10, 0);
                  t = not_null(s_10);
                }
              else
                {
                  if(match_cons(r_10, sym_Var_1))
                    {
                      s_10 = ATgetArgument(r_10, 0);
                      {
                        t = not_null(s_10);
                        {
                          ATerm u_6 = t;
                          int w_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_6);
                            }
                          else
                            {
                              t = u_6;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_x_6;
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
                      if(match_cons(r_10, sym_Prefix_2))
                        {
                          s_10 = ATgetArgument(r_10, 0);
                          t_10 = ATgetArgument(r_10, 1);
                          {
                            ATerm y_10 = NULL,a_11 = NULL;
                            ATerm y_6;
                            y_6 = t;
                            {
                              ATerm z_10 = NULL;
                              t = not_null(s_10);
                              {
                                t = eval_config_0(t);
                                {
                                  z_10 = t;
                                  if(((y_10 != NULL) && (y_10 != z_10)))
                                    _fail(z_10);
                                  else
                                    y_10 = z_10;
                                }
                              }
                            }
                            t = y_6;
                            {
                              ATerm b_11 = NULL;
                              t = not_null(t_10);
                              {
                                t = eval_config_0(t);
                                {
                                  b_11 = t;
                                  if(((a_11 != NULL) && (a_11 != b_11)))
                                    _fail(b_11);
                                  else
                                    a_11 = b_11;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_10), not_null(a_11));
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
  ATerm j_11 = NULL;
  j_11 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_6, not_null(j_11));
    {
      t = table_get_0(t);
      {
        ATerm v_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm b_7;
            b_7 = t;
            {
              ATerm l_11 = NULL;
              ATerm m_11 = NULL;
              m_11 = t;
              if(((l_11 != NULL) && (l_11 != m_11)))
                _fail(m_11);
              else
                l_11 = m_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_6, not_null(j_11), not_null(l_11));
                t = table_put_0(t);
              }
            }
            t = b_7;
          }
          return(t);
        }
        t = try_1(t, v_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm e_7;
    e_7 = t;
    {
      ATerm q_11 = NULL;
      ATerm r_11 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), term_g_7);
        t = geq_0(t);
      }
    }
    t = e_7;
    t = y_62(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, term_h_7));
  {
    t = printnl_0(t);
    {
      t = term_g_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  t = SSL_TicksToSeconds(not_null(u_11));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym__2))
    {
      a_12 = ATgetArgument(z_11, 0);
      b_12 = ATgetArgument(z_11, 1);
      {
        ATerm i_7 = t;
        int k_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_12), not_null(b_12));
            LocalPopChoice(k_7);
          }
        else
          {
            t = i_7;
            t = SSL_addr(not_null(a_12), not_null(b_12));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_69 (ATerm), ATerm m_69 (ATerm))
{
  ATerm l_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_69(t);
      LocalPopChoice(n_7);
    }
  else
    {
      t = l_7;
      {
        ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
        i_12 = t;
        h_12 :
        if(((ATgetType(i_12) == AT_LIST) && ((ATermList) i_12 != ATempty)))
          {
            j_12 = ATgetFirst((ATermList) i_12);
            k_12 = (ATerm) ATgetNext((ATermList) i_12);
            {
              ATerm n_12 = NULL;
              ATerm o_12 = NULL;
              t = not_null(k_12);
              {
                t = foldr_2(t, l_69, m_69);
                {
                  o_12 = t;
                  if(((n_12 != NULL) && (n_12 != o_12)))
                    _fail(o_12);
                  else
                    n_12 = o_12;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_12), not_null(n_12));
                t = m_69(t);
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
ATerm crush_2 (ATerm t, ATerm d_71 (ATerm), ATerm e_71 (ATerm))
{
  ATerm v_12 = NULL;
  ATerm x_12 = NULL;
  v_12 = t;
  {
    ATerm y_12 = NULL;
    ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
    t = not_null(v_12);
    {
      y_12 = t;
      {
        t = SSL_explode_term(not_null(y_12));
        {
          a_13 = t;
          u_12 :
          if(match_cons(a_13, sym__2))
            {
              b_13 = ATgetArgument(a_13, 0);
              c_13 = ATgetArgument(a_13, 1);
              if(((x_12 != NULL) && (x_12 != c_13)))
                _fail(c_13);
              else
                x_12 = c_13;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_12);
      t = foldr_2(t, d_71, e_71);
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
    ATerm x_0 (ATerm t)
    {
      t = term_r_7;
      return(t);
    }
    t = crush_2(t, x_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym__2))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_13 = ATgetArgument(i_13, 1);
      {
        ATerm z_7;
        z_7 = t;
        {
          ATerm a_8 = t;
          int b_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_13), not_null(k_13));
              LocalPopChoice(b_8);
            }
          else
            {
              t = a_8;
              t = SSL_gtr(not_null(j_13), not_null(k_13));
            }
        }
        t = z_7;
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
  ATerm q_13 = NULL;
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
      r_13 = t;
      p_13 :
      if(match_cons(r_13, sym__2))
        {
          s_13 = ATgetArgument(r_13, 0);
          t_13 = ATgetArgument(r_13, 1);
          {
            if(((q_13 != NULL) && (q_13 != s_13)))
              _fail(s_13);
            else
              q_13 = s_13;
            if(((q_13 != NULL) && (q_13 != t_13)))
              _fail(t_13);
            else
              q_13 = t_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm e_8;
    e_8 = t;
    {
      ATerm w_13 = NULL;
      ATerm x_13 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          x_13 = t;
          if(((w_13 != NULL) && (w_13 != x_13)))
            _fail(x_13);
          else
            w_13 = x_13;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), term_g_6);
        t = geq_0(t);
      }
    }
    t = e_8;
    t = x_62(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm b_14 = NULL,d_14 = NULL;
    ATerm f_8;
    f_8 = t;
    {
      ATerm c_14 = NULL;
      t = run_time_0(t);
      {
        c_14 = t;
        if(((b_14 != NULL) && (b_14 != c_14)))
          _fail(c_14);
        else
          b_14 = c_14;
      }
    }
    t = f_8;
    {
      ATerm e_14 = NULL;
      t = term_g_8;
      {
        t = get_config_0(t);
        {
          e_14 = t;
          if(((d_14 != NULL) && (d_14 != e_14)))
            _fail(e_14);
          else
            d_14 = e_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_8), not_null(b_14)), term_h_8), not_null(d_14)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_0);
  {
    t = term_r_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym__2))
    {
      k_14 = ATgetArgument(j_14, 0);
      l_14 = ATgetArgument(j_14, 1);
      t = SSL_WriteToTextFile(not_null(k_14), not_null(l_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      t = SSL_WriteToBinaryFile(not_null(s_14), not_null(t_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_15 = NULL;
  ATerm n_8;
  n_8 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm o_8 = t;
      int p_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_15 = NULL,d_15 = NULL;
            c_15 = t;
            y_14 :
            if(match_cons(c_15, sym_Output_1))
              {
                d_15 = ATgetArgument(c_15, 0);
                if(((b_15 != NULL) && (b_15 != d_15)))
                  _fail(d_15);
                else
                  b_15 = d_15;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, b_1);
          LocalPopChoice(p_8);
        }
      else
        {
          t = o_8;
          {
            ATerm e_15 = NULL;
            t = term_t_8;
            {
              e_15 = t;
              if(((b_15 != NULL) && (b_15 != e_15)))
                _fail(e_15);
              else
                b_15 = e_15;
            }
          }
        }
      return(t);
    }
    t = _2(t, a_1, _id);
  }
  t = n_8;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm d_1 (ATerm t)
      {
        t = not_null(b_15);
        return(t);
      }
      t = split_2(t, d_1, _id);
      return(t);
    }
    t = _2(t, _id, c_1);
    {
      ATerm v_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              ATerm f_15 = NULL;
              f_15 = t;
              a_15 :
              if(!(match_cons(f_15, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, f_1);
            return(t);
          }
          t = _2(t, e_1, WriteToBinaryFile_0);
          LocalPopChoice(y_8);
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
ATerm apply_strategy_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm l_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  ATerm z_8;
  z_8 = t;
  t = dtime_0(t);
  t = z_8;
  {
    t = y_64(t);
    {
      ATerm a_9;
      a_9 = t;
      {
        ATerm m_15 = NULL;
        t = dtime_0(t);
        {
          m_15 = t;
          if(((l_15 != NULL) && (l_15 != m_15)))
            _fail(m_15);
          else
            l_15 = m_15;
        }
      }
      t = a_9;
      {
        n_15 = t;
        k_15 :
        if(match_cons(n_15, sym__2))
          {
            o_15 = ATgetArgument(n_15, 0);
            p_15 = ATgetArgument(n_15, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_15)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_15))), not_null(p_15));
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
  ATerm v_15 = NULL;
  v_15 = t;
  t = SSL_ReadFromFile(not_null(v_15));
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_67 (ATerm), ATerm a_68 (ATerm))
{
  ATerm a_16 = NULL,c_16 = NULL;
  ATerm b_9;
  b_9 = t;
  {
    ATerm b_16 = NULL;
    t = z_67(t);
    {
      b_16 = t;
      if(((a_16 != NULL) && (a_16 != b_16)))
        _fail(b_16);
      else
        a_16 = b_16;
    }
  }
  t = b_9;
  {
    ATerm d_16 = NULL;
    t = a_68(t);
    {
      d_16 = t;
      if(((c_16 != NULL) && (c_16 != d_16)))
        _fail(d_16);
      else
        c_16 = d_16;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), not_null(c_16));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_16 = NULL;
  ATerm c_9;
  c_9 = t;
  {
    ATerm d_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 (ATerm t)
        {
          ATerm k_16 = NULL,l_16 = NULL;
          k_16 = t;
          h_16 :
          if(match_cons(k_16, sym_Input_1))
            {
              l_16 = ATgetArgument(k_16, 0);
              if(((j_16 != NULL) && (j_16 != l_16)))
                _fail(l_16);
              else
                j_16 = l_16;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, g_1);
        LocalPopChoice(i_9);
      }
    else
      {
        t = d_9;
        {
          ATerm m_16 = NULL;
          t = term_j_9;
          {
            m_16 = t;
            if(((j_16 != NULL) && (j_16 != m_16)))
              _fail(m_16);
            else
              j_16 = m_16;
          }
        }
      }
  }
  t = c_9;
  {
    ATerm k_1 (ATerm t)
    {
      t = not_null(j_16);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym_Version_0))
    {
      ATerm v_16 = NULL,x_16 = NULL;
      ATerm o_9;
      o_9 = t;
      {
        ATerm w_16 = NULL;
        t = SSLgetAnnotations(not_null(t_16));
        {
          w_16 = t;
          if(((v_16 != NULL) && (v_16 != w_16)))
            _fail(w_16);
          else
            v_16 = w_16;
        }
      }
      t = o_9;
      {
        ATerm y_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_16));
        {
          y_16 = t;
          if(((x_16 != NULL) && (x_16 != y_16)))
            _fail(y_16);
          else
            x_16 = y_16;
        }
        t = not_null(x_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        {
          ATerm r_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_9);
            }
          else
            {
              t = r_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_1);
  t = w_64(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  t = SSL_table_create(not_null(d_17));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_17 = NULL;
  h_17 = t;
  {
    ATerm x_9;
    x_9 = t;
    {
      t = term_y_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_9, term_z_9, not_null(h_17));
          t = table_put_0(t);
        }
      }
    }
    t = x_9;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  t = SSL_string_to_int(not_null(l_17));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  t_17 = t;
  r_17 :
  if(match_string(t_17, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(t_17) == AT_LIST) && ((ATermList) t_17 != ATempty)))
        {
          u_17 = ATgetFirst((ATermList) t_17);
          v_17 = (ATerm) ATgetNext((ATermList) t_17);
          s_17 :
          if(((ATgetType(v_17) == AT_LIST) && ((ATermList) v_17 != ATempty)))
            {
              w_17 = ATgetFirst((ATermList) v_17);
              x_17 = (ATerm) ATgetNext((ATermList) v_17);
              {
                ATerm b_18 = NULL;
                ATerm a_10;
                a_10 = t;
                {
                  t = not_null(u_17);
                  t = l_0(t);
                }
                t = a_10;
                {
                  ATerm c_18 = NULL;
                  t = not_null(w_17);
                  {
                    t = m_0(t);
                    {
                      c_18 = t;
                      if(((b_18 != NULL) && (b_18 != c_18)))
                        _fail(c_18);
                      else
                        b_18 = c_18;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_17)), not_null(b_18));
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
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm v_18 = NULL;
        v_18 = t;
        g_18 :
        if(!(match_string(v_18, "-i")))
          {
            if(!(match_string(v_18, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        ATerm y_18 = NULL;
        ATerm h_10;
        h_10 = t;
        {
          ATerm w_18 = NULL;
          ATerm x_18 = NULL;
          x_18 = t;
          if(((w_18 != NULL) && (w_18 != x_18)))
            _fail(x_18);
          else
            w_18 = x_18;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(w_18));
            t = set_config_0(t);
          }
        }
        t = h_10;
        {
          ATerm z_18 = NULL;
          z_18 = t;
          if(((y_18 != NULL) && (y_18 != z_18)))
            _fail(z_18);
          else
            y_18 = z_18;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_18));
        }
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_k_10;
        return(t);
      }
      t = ArgOption_3(t, m_1, n_1, o_1);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm a_19 = NULL;
              a_19 = t;
              j_18 :
              if(!(match_string(a_19, "-o")))
                {
                  if(!(match_string(a_19, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm d_19 = NULL;
              ATerm n_10;
              n_10 = t;
              {
                ATerm b_19 = NULL;
                ATerm c_19 = NULL;
                c_19 = t;
                if(((b_19 != NULL) && (b_19 != c_19)))
                  _fail(c_19);
                else
                  b_19 = c_19;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(b_19));
                  t = set_config_0(t);
                }
              }
              t = n_10;
              {
                ATerm e_19 = NULL;
                e_19 = t;
                if(((d_19 != NULL) && (d_19 != e_19)))
                  _fail(e_19);
                else
                  d_19 = e_19;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_19));
              }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_p_10;
              return(t);
            }
            t = ArgOption_3(t, p_1, q_1, r_1);
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            {
              ATerm u_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    ATerm f_19 = NULL;
                    f_19 = t;
                    m_18 :
                    if(!(match_string(f_19, "-S")))
                      {
                        if(!(match_string(f_19, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_1 (ATerm t)
                  {
                    t = term_w_10;
                    t = set_config_0(t);
                    t = term_x_10;
                    return(t);
                  }
                  ATerm v_1 (ATerm t)
                  {
                    t = term_c_11;
                    return(t);
                  }
                  t = Option_3(t, s_1, t_1, v_1);
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = u_10;
                  {
                    ATerm d_11 = t;
                    int e_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_1 (ATerm t)
                        {
                          ATerm g_19 = NULL;
                          g_19 = t;
                          n_18 :
                          if(!(match_string(g_19, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          ATerm j_19 = NULL;
                          ATerm f_11;
                          f_11 = t;
                          {
                            ATerm h_19 = NULL;
                            ATerm i_19 = NULL;
                            t = string_to_int_0(t);
                            {
                              i_19 = t;
                              if(((h_19 != NULL) && (h_19 != i_19)))
                                _fail(i_19);
                              else
                                h_19 = i_19;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(h_19));
                              t = set_config_0(t);
                            }
                          }
                          t = f_11;
                          {
                            ATerm k_19 = NULL;
                            k_19 = t;
                            if(((j_19 != NULL) && (j_19 != k_19)))
                              _fail(k_19);
                            else
                              j_19 = k_19;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_19));
                          }
                          return(t);
                        }
                        ATerm y_1 (ATerm t)
                        {
                          t = term_g_11;
                          return(t);
                        }
                        t = ArgOption_3(t, w_1, x_1, y_1);
                        LocalPopChoice(e_11);
                      }
                    else
                      {
                        t = d_11;
                        {
                          ATerm h_11 = t;
                          int i_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_1 (ATerm t)
                              {
                                ATerm l_19 = NULL;
                                l_19 = t;
                                q_18 :
                                if(!(match_string(l_19, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm e_2 (ATerm t)
                              {
                                ATerm k_11;
                                k_11 = t;
                                {
                                  ATerm m_19 = NULL;
                                  ATerm n_19 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    n_19 = t;
                                    if(((m_19 != NULL) && (m_19 != n_19)))
                                      _fail(n_19);
                                    else
                                      m_19 = n_19;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_n_11, not_null(m_19));
                                    t = set_config_0(t);
                                  }
                                }
                                t = k_11;
                                return(t);
                              }
                              ATerm f_2 (ATerm t)
                              {
                                t = term_o_11;
                                return(t);
                              }
                              t = ArgOption_3(t, z_1, e_2, f_2);
                              LocalPopChoice(i_11);
                            }
                          else
                            {
                              t = h_11;
                              {
                                ATerm p_11 = t;
                                int s_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_2 (ATerm t)
                                    {
                                      ATerm o_19 = NULL;
                                      o_19 = t;
                                      s_18 :
                                      if(!(match_string(o_19, "-v")))
                                        {
                                          if(!(match_string(o_19, "--version")))
                                            {
                                              _fail(t);
                                            }
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
                                    ATerm i_2 (ATerm t)
                                    {
                                      t = term_x_11;
                                      return(t);
                                    }
                                    t = Option_3(t, g_2, h_2, i_2);
                                    LocalPopChoice(s_11);
                                  }
                                else
                                  {
                                    t = p_11;
                                    {
                                      ATerm c_12 = t;
                                      int d_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_2 (ATerm t)
                                          {
                                            ATerm p_19 = NULL;
                                            p_19 = t;
                                            t_18 :
                                            if(!(match_string(p_19, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm l_2 (ATerm t)
                                          {
                                            t = term_f_12;
                                            t = set_config_0(t);
                                            t = term_g_12;
                                            return(t);
                                          }
                                          ATerm q_2 (ATerm t)
                                          {
                                            t = term_l_12;
                                            return(t);
                                          }
                                          t = Option_3(t, j_2, l_2, q_2);
                                          LocalPopChoice(d_12);
                                        }
                                      else
                                        {
                                          t = c_12;
                                          {
                                            ATerm r_2 (ATerm t)
                                            {
                                              ATerm q_19 = NULL;
                                              q_19 = t;
                                              u_18 :
                                              if(!(match_string(q_19, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = term_p_12;
                                              t = set_config_0(t);
                                              t = term_q_12;
                                              return(t);
                                            }
                                            ATerm t_2 (ATerm t)
                                            {
                                              t = term_r_12;
                                              return(t);
                                            }
                                            t = Option_3(t, r_2, s_2, t_2);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  t = SSL_table_destroy(not_null(z_19));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  t = SSL_exit(not_null(d_20));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  t = SSL_implode_string(not_null(h_20));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm k_20 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_20);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        {
          t = Nil_0(t);
          t = q_75(t);
        }
      }
    return(t);
  }
  t = k_20(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = w_12;
      {
        ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
        n_20 = t;
        m_20 :
        if(((ATgetType(n_20) == AT_LIST) && ((ATermList) n_20 != ATempty)))
          {
            o_20 = ATgetFirst((ATermList) n_20);
            p_20 = (ATerm) ATgetNext((ATermList) n_20);
            {
              t = not_null(o_20);
              {
                ATerm u_2 (ATerm t)
                {
                  t = not_null(p_20);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_2);
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
  ATerm v_20 = NULL;
  v_20 = t;
  t = SSL_explode_string(not_null(v_20));
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
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATempty, term_d_13);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm y_20 (ATerm t)
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = Cons_2(t, b_75, y_20);
      }
    return(t);
  }
  t = y_20(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  h_21 = t;
  e_21 :
  if(((ATgetType(h_21) == AT_LIST) && ((ATermList) h_21 != ATempty)))
    {
      f_21 = ATgetFirst((ATermList) h_21);
      g_21 = (ATerm) ATgetNext((ATermList) h_21);
      {
        ATerm k_21 = NULL;
        t = not_null(g_21);
        {
          ATerm g_13;
          g_13 = t;
          {
            ATerm l_21 = NULL,n_21 = NULL,p_21 = NULL;
            ATerm l_13;
            l_13 = t;
            {
              ATerm m_21 = NULL;
              t = j_0(t);
              {
                m_21 = t;
                if(((l_21 != NULL) && (l_21 != m_21)))
                  _fail(m_21);
                else
                  l_21 = m_21;
              }
            }
            t = l_13;
            {
              ATerm o_21 = NULL;
              t = not_null(f_21);
              {
                t = i_0(t);
                {
                  o_21 = t;
                  if(((n_21 != NULL) && (n_21 != o_21)))
                    _fail(o_21);
                  else
                    n_21 = o_21;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_21)), not_null(n_21));
                {
                  p_21 = t;
                  if(((k_21 != NULL) && (k_21 != p_21)))
                    _fail(p_21);
                  else
                    k_21 = p_21;
                }
              }
            }
          }
          t = g_13;
          {
            ATerm v_2 (ATerm t)
            {
              t = not_null(k_21);
              return(t);
            }
            t = reverse_acc_2(t, i_0, v_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) h_21 == ATempty))
        {
          {
            t = term_f_5;
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
  ATerm b_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm d_22 = NULL;
  ATerm e_22 = NULL;
  t = term_f_5;
  {
    t = h_0(t);
    {
      e_22 = t;
      if(((d_22 != NULL) && (d_22 != e_22)))
        _fail(e_22);
      else
        d_22 = e_22;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_13), not_null(d_22)), term_m_13);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_49 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Program_1))
    {
      m_22 = ATgetArgument(l_22, 0);
      {
        ATerm s_22 = NULL,u_22 = NULL;
        ATerm t_22 = NULL;
        t = SSLgetAnnotations(not_null(l_22));
        {
          t_22 = t;
          if(((s_22 != NULL) && (s_22 != t_22)))
            _fail(t_22);
          else
            s_22 = t_22;
        }
        {
          t = not_null(m_22);
          {
            ATerm w_22 = NULL;
            t = e_49(t);
            {
              u_22 = t;
              {
                ATerm x_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_22)), not_null(s_22));
                {
                  x_22 = t;
                  if(((w_22 != NULL) && (w_22 != x_22)))
                    _fail(x_22);
                  else
                    w_22 = x_22;
                }
                t = not_null(w_22);
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
  ATerm g_23 = NULL;
  ATerm c_3 (ATerm t)
  {
    ATerm d_3 (ATerm t)
    {
      ATerm h_23 = NULL;
      h_23 = t;
      if(((g_23 != NULL) && (g_23 != h_23)))
        _fail(h_23);
      else
        g_23 = h_23;
      return(t);
    }
    t = Program_1(t, d_3);
    return(t);
  }
  t = option_defined_1(t, c_3);
  {
    ATerm e_3 (ATerm t)
    {
      ATerm i_23 = NULL;
      ATerm k_23 = NULL;
      t = term_f_5;
      {
        ATerm f_3 (ATerm t)
        {
          t = not_null(g_23);
          return(t);
        }
        t = short_description_1(t, f_3);
        {
          t = concat_strings_0(t);
          {
            k_23 = t;
            if(((i_23 != NULL) && (i_23 != k_23)))
              _fail(k_23);
            else
              i_23 = k_23;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, not_null(i_23)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, term_o_13));
      {
        t = printnl_0(t);
        {
          t = term_y_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm l_23 = NULL;
                  l_23 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_23)), term_z_13));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_3);
                {
                  ATerm i_3 (ATerm t)
                  {
                    ATerm n_23 = NULL;
                    ATerm o_23 = NULL;
                    t = term_f_5;
                    {
                      ATerm j_3 (ATerm t)
                      {
                        t = not_null(g_23);
                        return(t);
                      }
                      t = long_description_1(t, j_3);
                      {
                        t = concat_strings_0(t);
                        {
                          o_23 = t;
                          if(((n_23 != NULL) && (n_23 != o_23)))
                            _fail(o_23);
                          else
                            n_23 = o_23;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_23)), term_a_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_3);
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
ATerm Undefined_1 (ATerm t, ATerm f_49 (ATerm))
{
  ATerm y_23 = NULL,z_23 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym_Undefined_1))
    {
      z_23 = ATgetArgument(y_23, 0);
      {
        ATerm c_24 = NULL,e_24 = NULL;
        ATerm d_24 = NULL;
        t = SSLgetAnnotations(not_null(y_23));
        {
          d_24 = t;
          if(((c_24 != NULL) && (c_24 != d_24)))
            _fail(d_24);
          else
            c_24 = d_24;
        }
        {
          t = not_null(z_23);
          {
            ATerm g_24 = NULL;
            t = f_49(t);
            {
              e_24 = t;
              {
                ATerm h_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_24)), not_null(c_24));
                {
                  h_24 = t;
                  if(((g_24 != NULL) && (g_24 != h_24)))
                    _fail(h_24);
                  else
                    g_24 = h_24;
                }
                t = not_null(g_24);
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
ATerm fetch_1 (ATerm t, ATerm k_75 (ATerm))
{
  ATerm m_24 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_75, _id);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = Cons_2(t, _id, m_24);
      }
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_62 (ATerm))
{
  t = fetch_1(t, v_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym_Help_0))
    {
      ATerm t_24 = NULL,v_24 = NULL;
      ATerm h_14;
      h_14 = t;
      {
        ATerm u_24 = NULL;
        t = SSLgetAnnotations(not_null(r_24));
        {
          u_24 = t;
          if(((t_24 != NULL) && (t_24 != u_24)))
            _fail(u_24);
          else
            t_24 = u_24;
        }
      }
      t = h_14;
      {
        ATerm e_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_24));
        {
          e_25 = t;
          if(((v_24 != NULL) && (v_24 != e_25)))
            _fail(e_25);
          else
            v_24 = e_25;
        }
        t = not_null(v_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_83 (ATerm))
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_83(t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,o_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym__2))
    {
      l_25 = ATgetArgument(k_25, 0);
      o_25 = ATgetArgument(k_25, 1);
      t = SSL_table_get(not_null(l_25), not_null(o_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym__3))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      y_25 = ATgetArgument(v_25, 2);
      {
        ATerm o_14;
        o_14 = t;
        {
          ATerm e_26 = NULL;
          ATerm f_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), not_null(x_25));
          {
            ATerm p_14 = t;
            int u_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_14);
              }
            else
              {
                t = p_14;
                t = (ATerm) ATempty;
              }
            {
              f_26 = t;
              if(((e_26 != NULL) && (e_26 != f_26)))
                _fail(f_26);
              else
                e_26 = f_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_25), not_null(x_25), (ATerm) ATinsert(CheckATermList(not_null(e_26)), not_null(y_25)));
            t = table_put_0(t);
          }
        }
        t = o_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm j_26 = NULL;
  ATerm q_26 = NULL;
  t = term_f_5;
  {
    t = v_61(t);
    {
      q_26 = t;
      if(((j_26 != NULL) && (j_26 != q_26)))
        _fail(q_26);
      else
        j_26 = q_26;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_13, term_v_13, not_null(j_26));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_string(c_27, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(c_27) == AT_LIST) && ((ATermList) c_27 != ATempty)))
        {
          d_27 = ATgetFirst((ATermList) c_27);
          e_27 = (ATerm) ATgetNext((ATermList) c_27);
          {
            ATerm i_27 = NULL;
            ATerm v_14;
            v_14 = t;
            {
              t = not_null(d_27);
              t = a_0(t);
            }
            t = v_14;
            {
              ATerm j_27 = NULL;
              t = term_f_5;
              {
                t = b_0(t);
                {
                  j_27 = t;
                  if(((i_27 != NULL) && (i_27 != j_27)))
                    _fail(j_27);
                  else
                    i_27 = j_27;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_27)), not_null(i_27));
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
  ATerm k_3 (ATerm t)
  {
    ATerm o_27 = NULL;
    o_27 = t;
    n_27 :
    if(!(match_string(o_27, "--help")))
      {
        if(!(match_string(o_27, "-h")))
          {
            if(!(match_string(o_27, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_w_14;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_x_14;
    return(t);
  }
  t = Option_3(t, k_3, p_3, q_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(((ATgetType(r_27) == AT_LIST) && ((ATermList) r_27 != ATempty)))
    {
      s_27 = ATgetFirst((ATermList) r_27);
      t_27 = (ATerm) ATgetNext((ATermList) r_27);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_27)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_27)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  c_28 :
  if(((ATgetType(d_28) == AT_LIST) && ((ATermList) d_28 != ATempty)))
    {
      e_28 = ATgetFirst((ATermList) d_28);
      f_28 = (ATerm) ATgetNext((ATermList) d_28);
      {
        ATerm j_28 = NULL,l_28 = NULL;
        ATerm k_28 = NULL;
        t = SSLgetAnnotations(not_null(d_28));
        {
          k_28 = t;
          if(((j_28 != NULL) && (j_28 != k_28)))
            _fail(k_28);
          else
            j_28 = k_28;
        }
        {
          t = not_null(e_28);
          {
            ATerm n_28 = NULL;
            t = q_57(t);
            {
              l_28 = t;
              {
                t = not_null(f_28);
                {
                  ATerm p_28 = NULL;
                  t = r_57(t);
                  {
                    n_28 = t;
                    {
                      ATerm q_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_28)), not_null(l_28)), not_null(j_28));
                      {
                        q_28 = t;
                        if(((p_28 != NULL) && (p_28 != q_28)))
                          _fail(q_28);
                        else
                          p_28 = q_28;
                      }
                      t = not_null(p_28);
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
  ATerm a_29 = NULL;
  a_29 = t;
  z_28 :
  if(((ATermList) a_29 == ATempty))
    {
      {
        ATerm c_29 = NULL,e_29 = NULL;
        ATerm z_14;
        z_14 = t;
        {
          ATerm d_29 = NULL;
          t = SSLgetAnnotations(not_null(a_29));
          {
            d_29 = t;
            if(((c_29 != NULL) && (c_29 != d_29)))
              _fail(d_29);
            else
              c_29 = d_29;
          }
        }
        t = z_14;
        {
          ATerm f_29 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_29));
          {
            f_29 = t;
            if(((e_29 != NULL) && (e_29 != f_29)))
              _fail(f_29);
            else
              e_29 = f_29;
          }
          t = not_null(e_29);
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
  ATerm n_29 = NULL,o_29 = NULL,u_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym__2))
    {
      o_29 = ATgetArgument(n_29, 0);
      u_29 = ATgetArgument(n_29, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_6, not_null(o_29), not_null(u_29));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm g_15;
  g_15 = t;
  {
    ATerm v_3 (ATerm t)
    {
      t = term_h_15;
      t = t_61(t);
      return(t);
    }
    t = try_1(t, v_3);
  }
  t = g_15;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm c_30 = NULL;
      ATerm i_15;
      i_15 = t;
      {
        ATerm a_30 = NULL;
        ATerm b_30 = NULL;
        b_30 = t;
        if(((a_30 != NULL) && (a_30 != b_30)))
          _fail(b_30);
        else
          a_30 = b_30;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(a_30));
          t = set_config_0(t);
        }
      }
      t = i_15;
      {
        ATerm d_30 = NULL;
        d_30 = t;
        if(((c_30 != NULL) && (c_30 != d_30)))
          _fail(d_30);
        else
          c_30 = d_30;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_30));
      }
      return(t);
    }
    ATerm x_3 (ATerm t)
    {
      ATerm j_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(s_15);
            }
          else
            {
              t = r_15;
              {
                t = t_61(t);
                t = Cons_2(t, _id, x_3);
              }
            }
          LocalPopChoice(q_15);
        }
      else
        {
          t = j_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_3, x_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  ATerm t_15;
  t_15 = t;
  {
    ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
    m_30 = t;
    i_30 :
    if(match_cons(m_30, sym__3))
      {
        n_30 = ATgetArgument(m_30, 0);
        o_30 = ATgetArgument(m_30, 1);
        p_30 = ATgetArgument(m_30, 2);
        {
          if(((j_30 != NULL) && (j_30 != n_30)))
            _fail(n_30);
          else
            j_30 = n_30;
          {
            if(((k_30 != NULL) && (k_30 != o_30)))
              _fail(o_30);
            else
              k_30 = o_30;
            {
              if(((l_30 != NULL) && (l_30 != p_30)))
                _fail(p_30);
              else
                l_30 = p_30;
              t = SSL_table_put(not_null(j_30), not_null(k_30), not_null(l_30));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm v_30 = NULL;
  ATerm u_15;
  u_15 = t;
  {
    t = term_w_15;
    t = table_put_0(t);
  }
  t = u_15;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm x_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_61(t);
          LocalPopChoice(y_15);
        }
      else
        {
          t = x_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, y_3);
    {
      ATerm z_3 (ATerm t)
      {
        ATerm z_15 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_r_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(e_16);
          }
        else
          {
            t = z_15;
            {
              ATerm a_4 (ATerm t)
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm w_30 = NULL;
                  w_30 = t;
                  if(((v_30 != NULL) && (v_30 != w_30)))
                    _fail(w_30);
                  else
                    v_30 = w_30;
                  return(t);
                }
                t = Undefined_1(t, c_4);
                return(t);
              }
              t = option_defined_1(t, a_4);
              {
                ATerm f_16;
                f_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_30)), term_g_16));
                  t = printnl_0(t);
                }
                t = f_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, z_3);
      {
        ATerm i_16;
        i_16 = t;
        {
          t = term_u_13;
          t = table_destroy_0(t);
        }
        t = i_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm k_64 (ATerm), ATerm l_64 (ATerm), ATerm m_64 (ATerm), ATerm n_64 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_64(t);
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, d_4);
  {
    t = store_options_0(t);
    {
      t = n_64(t);
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_64);
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            {
              ATerm r_16 = t;
              int u_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, k_64);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(u_16);
                }
              else
                {
                  t = r_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm g_64 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm z_16;
      z_16 = t;
      {
        ATerm z_30 = NULL;
        ATerm a_31 = NULL;
        t = term_g_8;
        {
          t = get_config_0(t);
          {
            a_31 = t;
            if(((z_30 != NULL) && (z_30 != a_31)))
              _fail(a_31);
            else
              z_30 = a_31;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, not_null(z_30)));
          t = printnl_0(t);
        }
      }
      t = z_16;
      return(t);
    }
    t = if_verbose2_1(t, f_4);
    return(t);
  }
  t = iowrap_4(t, e_64, f_64, g_64, e_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_64 (ATerm), ATerm d_64 (ATerm))
{
  t = iowrap_3(t, c_64, d_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    t = _2(t, _id, z_63);
    return(t);
  }
  t = iowrap_2(t, h_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iowrap_1(t, treeviz_0);
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      t = treeviz_0(t);
    }
  return(t);
}
