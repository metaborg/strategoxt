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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Some_1;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Graph_0;
Symbol sym_Tree_0;
Symbol sym_DotDigraph_2;
Symbol sym_AttrId_2;
Symbol sym_Node_2;
Symbol sym_Id_1;
Symbol sym_Attrs_1;
Symbol sym_EdgeNoAttrs_2;
Symbol sym_Arrow_1;
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
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Graph_0 = ATmakeSymbol("Graph", 0, ATfalse);
  ATprotectSymbol(sym_Graph_0);
  sym_Tree_0 = ATmakeSymbol("Tree", 0, ATfalse);
  ATprotectSymbol(sym_Tree_0);
  sym_DotDigraph_2 = ATmakeSymbol("DotDigraph", 2, ATfalse);
  ATprotectSymbol(sym_DotDigraph_2);
  sym_AttrId_2 = ATmakeSymbol("AttrId", 2, ATfalse);
  ATprotectSymbol(sym_AttrId_2);
  sym_Node_2 = ATmakeSymbol("Node", 2, ATfalse);
  ATprotectSymbol(sym_Node_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_Attrs_1 = ATmakeSymbol("Attrs", 1, ATfalse);
  ATprotectSymbol(sym_Attrs_1);
  sym_EdgeNoAttrs_2 = ATmakeSymbol("EdgeNoAttrs", 2, ATfalse);
  ATprotectSymbol(sym_EdgeNoAttrs_2);
  sym_Arrow_1 = ATmakeSymbol("Arrow", 1, ATfalse);
  ATprotectSymbol(sym_Arrow_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_u_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_m_31;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_v_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_k_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_l_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_r_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_i_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_j_12;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_r_9;
void init_constant_terms (void)
{
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_g_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_q_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_w_9, term_e_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_b_16, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_9, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_j_17, term_n_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_v_17, term_w_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_g_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_q_18, term_r_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_a_19, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_g_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_m_19, term_p_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_w_19, term_x_19);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_g_20, term_h_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_p_20, term_r_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_20, term_w_20, term_x_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_c_21, term_d_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_r_21, term_s_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_22, term_b_22, term_c_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_22, term_g_22, term_h_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_AttrId_2, term_l_24, term_s_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_29);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__3, term_r_31, term_s_31, term_s_26);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm w_81 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm g_68 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm c_84 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm v_72 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm f_67 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm t_63 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Escape_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm s_81 (ATerm), ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm ListEdgeToDot_0_0 (ATerm);
ATerm graph_to_adot_0_0 (ATerm);
ATerm NodeId_0_0 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm);
ATerm union_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm crush_3_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm q_68 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm assert_1_0 (ATerm a_83 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm j_68 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm term_to_adot_options_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm b_86 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm c_86 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm);
ATerm crush_2_0 (ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_83 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_64 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm t_72 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_72 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm c_68 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_72 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm d_90 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_90 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm a_90 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm);
ATerm term_to_dot_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_transform_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(q_86, c_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  t = SSL_table_keys(g_1);
  {
    ATerm n_0 (ATerm t)
    {
      ATerm h_1 = NULL,l_1 = NULL;
      h_1 = t;
      t = SSL_table_get(g_1, h_1);
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_1, l_1);
      return(t);
    }
    t = map_1_0(n_0, t);
  }
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, p_1));
  {
    ATerm o_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((q_1 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          s_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(o_0, t);
    t = not_null(s_1);
  }
  return(t);
}
ATerm filter_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm m_8 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = m_8;
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = filter_1_0(c_80, t);
              return(t);
            }
            t = Cons_2_0(c_80, p_0, t);
            ;
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            {
              ATerm w_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_9 = ATgetFirst((ATermList) t);
                  w_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = w_1;
              t = filter_1_0(c_80, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = w_81(t);
      t = y_1(t);
      return(t);
    }
    t = try_1_0(q_0, t);
    return(t);
  }
  t = y_1(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  {
    ATerm r_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm q_9 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_9;
          }
      }
      return(t);
    }
    t = repeat_1_0(r_0, t);
    t = z_1;
  }
  return(t);
}
ATerm say_1_0 (ATerm g_68 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_0 = NULL;
  d_2 = t;
  t = g_68(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
  t = d_2;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm e_2 = NULL,f_2 = NULL;
    e_2 = t;
    t = term_r_9;
    t = get_config_0_0(t);
    f_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_2, term_v_9);
    t = geq_0_0(t);
    t = e_2;
    t = a_84(t);
    return(t);
  }
  t = try_1_0(s_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm g_2 = NULL,h_2 = NULL;
    g_2 = t;
    t = term_r_9;
    t = get_config_0_0(t);
    h_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_2, term_w_9);
    t = geq_0_0(t);
    t = g_2;
    t = c_84(t);
    return(t);
  }
  t = try_1_0(t_0, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm w_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
  if(match_cons(t, sym__3))
    {
      w_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
      a_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_2, y_2);
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_9 = ATgetArgument(t, 0);
            ATerm a_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_2, y_2);
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = (ATerm) ATempty;
      }
    b_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_3, a_3);
    t = union_0_0(t);
    c_3 = t;
    t = SSL_table_put(w_2, y_2, c_3);
    t = (ATerm) ATmakeAppl(sym__3, w_2, y_2, a_3);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      l_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_3;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm m_3 = NULL,n_3 = NULL;
      if(match_cons(t, sym__2))
        {
          m_3 = ATgetArgument(t, 0);
          n_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, l_3, m_3, n_3);
      t = l_84(t);
      return(t);
    }
    t = map_1_0(u_0, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 = NULL;
      b_1 = t;
      t = SSL_access(b_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(d_10);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_10;
      {
        ATerm e_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_10 = t;
            if((PushChoice() == 0))
              {
                ATerm d_1 = NULL;
                d_1 = t;
                t = SSL_access(d_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_10;
              }
            {
              ATerm v_0 (ATerm t)
              {
                t = term_q_10;
                return(t);
              }
              t = debug_1_0(v_0, t);
            }
            ;
            LocalPopChoice(g_10);
          }
        else
          {
            t = e_10;
            {
              ATerm w_0 (ATerm t)
              {
                t = term_s_10;
                return(t);
              }
              t = debug_1_0(w_0, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
  p_3 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_0 (ATerm t)
      {
        t = term_u_10;
        return(t);
      }
      t = debug_1_0(y_0, t);
      return(t);
    }
    t = if_verbose5_1_0(x_0, t);
    {
      ATerm w_10 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, p_3));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_10;
        }
      q_3 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, p_3));
      t = q_3;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            t = term_b_11;
            return(t);
          }
          t = debug_1_0(a_1, t);
          return(t);
        }
        t = if_verbose4_1_0(z_0, t);
        t = read_repository_file_0_0(t);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              t = term_c_11;
              return(t);
            }
            t = say_1_0(e_1, t);
            return(t);
          }
          t = if_verbose6_1_0(c_1, t);
          r_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_11, r_3);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm f_1 (ATerm t)
            {
              ATerm k_1 (ATerm t)
              {
                t = term_g_11;
                return(t);
              }
              t = say_1_0(k_1, t);
              return(t);
            }
            t = if_verbose6_1_0(f_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, p_3), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_d_11, (ATerm)ATmakeAppl(sym_Imported_1, p_3), (ATerm) ATempty);
            {
              ATerm m_1 (ATerm t)
              {
                ATerm n_1 (ATerm t)
                {
                  t = term_c_11;
                  return(t);
                }
                t = say_1_0(n_1, t);
                return(t);
              }
              t = if_verbose4_1_0(m_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = h_11;
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_3 = NULL;
  ATerm o_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      t = term_x_11;
      return(t);
    }
    t = debug_1_0(r_1, t);
    return(t);
  }
  t = if_verbose5_1_0(o_1, t);
  s_3 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = s_3;
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          t = term_c_12;
          return(t);
        }
        t = debug_1_0(u_1, t);
        return(t);
      }
      t = if_verbose5_1_0(t_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = term_j_12;
          return(t);
        }
        t = debug_1_0(x_1, t);
        return(t);
      }
      t = if_verbose5_1_0(v_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm i_1 = NULL,j_1 = NULL;
              i_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, i_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_12 = ATgetFirst((ATermList) t);
                  if(match_cons(m_12, sym__2))
                    {
                      ATerm a_13 = ATgetArgument(m_12, 0);
                      j_1 = ATgetArgument(m_12, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_12 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = j_1;
            }
          }
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_2 (ATerm t)
            {
              t = term_j_12;
              return(t);
            }
            t = debug_1_0(b_2, t);
            return(t);
          }
          t = if_verbose5_1_0(a_2, t);
        }
      }
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm t_3 = NULL;
        t_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), t_3), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_13), t_3), term_b_13);
        {
          ATerm c_2 (ATerm t)
          {
            t = term_d_11;
            t = table_getlist_0_0(t);
            {
              ATerm i_2 (ATerm t)
              {
                t = term_e_13;
                return(t);
              }
              t = debug_1_0(i_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(c_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(y_86, z_86, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,w_4 = NULL,y_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_4 = ATgetArgument(t, 0);
      {
        ATerm j_2 = NULL;
        t = SSL_int_to_string(t_4);
        j_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_13), j_2), term_i_13);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm x_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_4 = ATgetArgument(t, 0);
          w_4 = ATgetArgument(t, 1);
          y_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_4);
      x_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_4), term_u_13), x_2), term_q_13), t_4);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_72 (ATerm), ATerm t)
{
  ATerm b_5 = NULL;
  ATerm k_2 (ATerm t)
  {
    t = v_72(t);
    b_5 = t;
    return(t);
  }
  t = fetch_1_0(k_2, t);
  t = not_null(b_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_22), term_d_22), term_z_21), term_i_21), term_y_20), term_u_20), term_n_20), term_y_19), term_s_19), term_h_19), term_d_19), term_x_18), term_m_18), term_c_18), term_o_17), term_e_17), term_z_16), term_t_16), term_k_16), term_d_16), term_x_15), term_t_15), term_p_15), term_l_15), term_h_15), term_c_15), term_l_14), term_a_14);
        {
          ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm j_22 = ATgetArgument(t, 0);
                if((c_5 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm n_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(l_2, t);
        }
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, c_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_5 = NULL;
  e_5 = t;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm h_5 = NULL,i_5 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm o_22 = ATgetArgument(t, 0);
          h_5 = ATgetArgument(t, 1);
          {
            ATerm p_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_5;
      {
        ATerm q_22 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_22;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        i_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_r_22, (ATerm) ATinsert(ATinsert(ATempty, i_5), term_s_22));
      }
      return(t);
    }
    t = try_1_0(m_2, t);
    t = e_5;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL;
  l_5 = t;
  t = fork_0_0(t);
  m_5 = t;
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_5;
        t = d_67(t);
        ;
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATmakeAppl(sym__2, m_5, l_5);
        t = e_67(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm f_67 (ATerm), ATerm t)
{
  ATerm o_5 = NULL;
  ATerm n_2 (ATerm t)
  {
    ATerm q_5 = NULL;
    if(match_cons(t, sym__2))
      {
        q_5 = ATgetArgument(t, 0);
        o_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(q_5);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm z_22 = ATgetArgument(t, 0);
        if(((ATgetType(z_22) != AT_INT) || (ATgetInt((ATermInt) z_22) != 0)))
          _fail(t);
        {
          ATerm a_23 = ATgetArgument(t, 1);
        }
        {
          ATerm f_23 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = o_5;
    return(t);
  }
  t = fork_2_0(f_67, n_2, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_2 (ATerm t)
    {
      t = SSL_execvp(r_5, s_5);
      return(t);
    }
    t = fork_and_wait_1_0(o_2, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  t_5 = t;
  t = p_86(t);
  t = xtc_find_warning_0_0(t);
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_5, t_5);
  t = call_0_0(t);
  t = t_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL;
  v_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_3 = NULL,e_3 = NULL;
      t = v_6;
      t = xtc_new_file_0_0(t);
      d_3 = t;
      t = m_0(t);
      e_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATinsert(ATempty, d_3), term_g_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(d_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_3);
    }
  else
    {
      ATerm j_3 = NULL,k_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_6;
      t = xtc_new_file_0_0(t);
      j_3 = t;
      t = m_0(t);
      k_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_3), term_g_23), w_6), term_h_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(j_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_3);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm t_63 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,i_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_7);
  d_7 = t;
  t = e_7;
  t = t_63(t);
  i_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, i_7), d_7);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23 = t;
      int p_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(p_23);
        }
      else
        {
          t = o_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(k_23);
      t = xtc_transform_file_2_0(r_86, s_86, t);
    }
  else
    {
      t = i_23;
      t = xtc_transform_term_2_0(r_86, s_86, t);
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm c_8 = NULL;
  ATerm p_2 (ATerm t)
  {
    ATerm d_8 = NULL;
    d_8 = t;
    t = SSL_explode_string(d_8);
    return(t);
  }
  t = map_1_0(p_2, t);
  t = concat_0_0(t);
  c_8 = t;
  t = SSL_implode_string(c_8);
  return(t);
}
ATerm Escape_0_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_8 = ATgetFirst((ATermList) t);
      i_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_8;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(i_8), term_z_23), term_r_23);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(i_8), term_r_23), term_r_23);
        }
      else
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(i_8), term_a_24), term_r_23);
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0_0(t);
      {
        ATerm q_2 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, q_2, t);
      }
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm d_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(e_24);
          }
        else
          {
            t = d_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  t = string_as_chars_1_0(escape_chars_0_0, t);
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_8), o_8), (ATerm) ATinsert(ATempty, o_8));
  t = conc_0_0(t);
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_23, p_8);
  t = quote_chars_0_0(t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  q_8 = t;
  t = SSL_explode_string(q_8);
  t = s_81(t);
  r_8 = t;
  t = SSL_implode_string(r_8);
  return(t);
}
ATerm double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(double_quote_chars_0_0, t);
  return(t);
}
ATerm EdgeToDot_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,g_4 = NULL;
        t = SSL_explode_term(o_9);
        if(match_cons(t, sym__2))
          {
            a_4 = ATgetArgument(t, 0);
            b_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_4;
        t = escape_0_0(t);
        t = double_quote_0_0(t);
        c_4 = t;
        t = b_4;
        {
          ATerm r_2 (ATerm t)
          {
            ATerm m_4 = NULL;
            m_4 = t;
            t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, n_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, m_4))));
            return(t);
          }
          t = map_1_0(r_2, t);
          g_4 = t;
          t = (ATerm) ATinsert(CheckATermList(g_4), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, n_9), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_l_24, c_4))))));
        }
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = h_24;
        {
          ATerm f_5 = NULL,g_5 = NULL;
          t = SSL_is_int(o_9);
          t = SSL_int_to_string(o_9);
          t = escape_0_0(t);
          f_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_24), f_5), term_m_24);
          t = concat_strings_0_0(t);
          g_5 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, n_9), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_l_24, g_5))))));
        }
      }
  }
  return(t);
}
ATerm ListEdgeToDot_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_9;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm n_24 = ATgetFirst((ATermList) t);
          ATerm o_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_9;
    }
  t = t_9;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm b_10 = NULL;
      b_10 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, s_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, b_10))));
      return(t);
    }
    t = map_1_0(s_2, t);
    u_9 = t;
    t = (ATerm) ATinsert(CheckATermList(u_9), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, s_9), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_t_24)))));
  }
  return(t);
}
ATerm graph_to_adot_0_0 (ATerm t)
{
  ATerm f_10 = NULL;
  ATerm t_2 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = ListEdgeToDot_0_0(t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = EdgeToDot_0_0(t);
      }
    return(t);
  }
  t = map_1_0(t_2, t);
  t = concat_0_0(t);
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_x_24, f_10);
  return(t);
}
ATerm NodeId_0_0 (ATerm t)
{
  ATerm h_10 = NULL,j_10 = NULL;
  h_10 = t;
  t = SSL_int_to_string(h_10);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, j_10);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm term_to_graph_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  k_10 = t;
  t = SSL_address(k_10);
  t = NodeId_0_0(t);
  l_10 = t;
  t = k_10;
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_2 (ATerm t)
        {
          ATerm o_10 = NULL;
          o_10 = t;
          t = SSL_address(o_10);
          t = NodeId_0_0(t);
          return(t);
        }
        t = map_1_0(u_2, t);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          ATerm v_2 (ATerm t)
          {
            ATerm p_10 = NULL;
            p_10 = t;
            t = SSL_address(p_10);
            t = NodeId_0_0(t);
            return(t);
          }
          t = SRTS_all(v_2, t);
        }
      }
    m_10 = t;
    t = k_10;
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3_0(z_2, union_0_0, term_to_graph_0_0, t);
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          {
            ATerm f_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3_0(f_3, union_0_0, term_to_graph_0_0, t);
          }
        }
      n_10 = t;
      t = (ATerm) ATinsert(CheckATermList(n_10), (ATerm) ATmakeAppl(sym__2, l_10, m_10));
    }
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,t_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_10 = ATgetFirst((ATermList) t);
      t_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_76(t);
  {
    ATerm g_3 (ATerm t)
    {
      ATerm v_10 = NULL;
      v_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_10, v_10);
      t = q_76(t);
      return(t);
    }
    t = fetch_1_0(g_3, t);
    t = t_10;
  }
  return(t);
}
ATerm union_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL;
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10;
  {
    ATerm z_10 (ATerm t)
    {
      ATerm e_25 = t;
      int f_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_10;
          ;
          LocalPopChoice(f_25);
        }
      else
        {
          t = e_25;
          {
            ATerm g_25 = t;
            int h_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_3 (ATerm t)
                {
                  t = x_10;
                  return(t);
                }
                t = HdMember_p__2_0(m_76, i_3, t);
                t = z_10(t);
                ;
                LocalPopChoice(h_25);
              }
            else
              {
                t = g_25;
                t = Cons_2_0(_id, z_10, t);
              }
          }
        }
      return(t);
    }
    t = z_10(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm a_11 = NULL;
    if(match_cons(t, sym__2))
      {
        a_11 = ATgetArgument(t, 0);
        if((a_11 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(o_3, t);
  return(t);
}
ATerm crush_3_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  t = SSL_explode_term(e_11);
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11;
  t = foldr_3_0(z_76, a_77, b_77, t);
  return(t);
}
ATerm foldr_3_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_79(t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm i_11 = NULL,j_11 = NULL,m_11 = NULL,n_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_11 = ATgetFirst((ATermList) t);
            j_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_11;
        t = d_79(t);
        m_11 = t;
        t = j_11;
        t = foldr_3_0(b_79, c_79, d_79, t);
        n_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_11, n_11);
        t = c_79(t);
      }
    }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm q_11 = NULL,r_11 = NULL;
    q_11 = t;
    t = term_r_9;
    t = get_config_0_0(t);
    r_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_11, term_c_21);
    t = geq_0_0(t);
    t = q_11;
    t = b_84(t);
    return(t);
  }
  t = try_1_0(u_3, t);
  return(t);
}
ATerm term_to_tree_0_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  ATerm v_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      t = term_l_25;
      return(t);
    }
    t = debug_1_0(w_3, t);
    return(t);
  }
  t = if_verbose5_1_0(v_3, t);
  s_11 = t;
  t = new_0_0(t);
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_11, s_11);
  {
    ATerm f_12 (ATerm t)
    {
      ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,e_6 = NULL;
      ATerm x_3 (ATerm t)
      {
        ATerm m_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm a_12 = NULL,b_12 = NULL;
              a_12 = t;
              t = new_0_0(t);
              b_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_12, a_12);
              return(t);
            }
            t = map_1_0(y_3, t);
            ;
            LocalPopChoice(n_25);
          }
        else
          {
            t = m_25;
            {
              ATerm z_3 (ATerm t)
              {
                ATerm d_12 = NULL,e_12 = NULL;
                d_12 = t;
                t = new_0_0(t);
                e_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_12, d_12);
                return(t);
              }
              t = SRTS_all(z_3, t);
            }
          }
        return(t);
      }
      t = _2_0(_id, x_3, t);
      u_11 = t;
      {
        ATerm d_4 (ATerm t)
        {
          ATerm o_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_4 (ATerm t)
              {
                ATerm p_5 = NULL,v_5 = NULL;
                p_5 = t;
                t = SSL_explode_term(p_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_25 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_25) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm r_25 = ATgetArgument(t, 1);
                      if(((ATgetType(r_25) == AT_LIST) && !(ATisEmpty(r_25))))
                        {
                          v_5 = ATgetFirst((ATermList) r_25);
                          {
                            ATerm s_25 = (ATerm) ATgetNext((ATermList) r_25);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = v_5;
                return(t);
              }
              t = map_1_0(e_4, t);
              ;
              LocalPopChoice(p_25);
            }
          else
            {
              t = o_25;
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm y_5 = NULL,z_5 = NULL;
                  y_5 = t;
                  t = SSL_explode_term(y_5);
                  if(match_cons(t, sym__2))
                    {
                      ATerm t_25 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) t_25) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm u_25 = ATgetArgument(t, 1);
                        if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
                          {
                            z_5 = ATgetFirst((ATermList) u_25);
                            {
                              ATerm v_25 = (ATerm) ATgetNext((ATermList) u_25);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = z_5;
                  return(t);
                }
                t = SRTS_all(f_4, t);
              }
            }
          return(t);
        }
        t = _2_0(_id, d_4, t);
        v_11 = t;
        t = SSL_explode_term(u_11);
        if(match_cons(t, sym__2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_25 = ATgetArgument(t, 1);
              if(((ATgetType(x_25) == AT_LIST) && !(ATisEmpty(x_25))))
                {
                  ATerm y_25 = ATgetFirst((ATermList) x_25);
                  ATerm z_25 = (ATerm) ATgetNext((ATermList) x_25);
                  if(((ATgetType(z_25) == AT_LIST) && !(ATisEmpty(z_25))))
                    {
                      e_6 = ATgetFirst((ATermList) z_25);
                      {
                        ATerm a_26 = (ATerm) ATgetNext((ATermList) z_25);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_6;
        {
          ATerm b_26 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_4 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = foldr_3_0(h_4, union_0_0, f_12, t);
              ;
              LocalPopChoice(c_26);
            }
          else
            {
              t = b_26;
              {
                ATerm i_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(i_4, union_0_0, f_12, t);
              }
            }
          w_11 = t;
          t = (ATerm) ATinsert(CheckATermList(w_11), v_11);
        }
      }
      return(t);
    }
    t = f_12(t);
  }
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_26;
        t = get_config_0_0(t);
        t = g_12;
        t = term_to_tree_0_0(t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = term_g_26;
        t = get_config_0_0(t);
        t = g_12;
        t = term_to_graph_0_0(t);
      }
    t = graph_to_adot_0_0(t);
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_68 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_12, term_h_26);
  t = open_stream_0_0(t);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_12, o_12);
  t = q_68(t);
  t = fclose_0_0(t);
  t = o_12;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_26 = ATgetArgument(t, 0);
        if(match_cons(i_26, sym_Stream_1))
          {
            q_12 = ATgetArgument(i_26, 0);
          }
        else
          _fail(t);
        r_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(q_12, r_12);
    s_12 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, s_12);
    return(t);
  }
  t = WriteToFile_1_0(j_4, t);
  return(t);
}
ATerm assert_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_83(t);
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_12, t_12, u_12);
  t = table_push_0_0(t);
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(v_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_12 = ATgetFirst((ATermList) t);
        x_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(v_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(x_12), (ATerm) ATinsert(CheckATermList(w_12), t_12)));
    t = (ATerm) ATmakeAppl(sym__2, t_12, u_12);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm j_68 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  t = j_68(t);
  {
    ATerm k_4 (ATerm t)
    {
      t = term_l_26;
      return(t);
    }
    t = debug_1_0(k_4, t);
    t = y_12;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm n_13 (ATerm c_13, ATerm t)
  {
    t = c_13;
    {
      ATerm m_26 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm n_26 = ATgetArgument(t, 0);
              ATerm o_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_26;
        }
      {
        ATerm l_4 (ATerm t)
        {
          t = term_p_26;
          return(t);
        }
        t = obsolete_1_0(l_4, t);
        t = (ATerm) ATmakeAppl(sym__2, c_13, term_h_26);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm o_13 (ATerm f_13, ATerm g_13, ATerm h_13, ATerm t)
  {
    t = SSL_open_file(f_13, g_13);
    return(t);
  }
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym__2))
    {
      l_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_13(k_13, t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = o_13(l_13, m_13, k_13, t);
          }
      }
    }
  else
    {
      t = n_13(k_13, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm p_13 = NULL;
  t = term_s_26;
  t = new_0_0(t);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_13, term_t_26);
  t = conc_strings_0_0(t);
  {
    ATerm n_4 (ATerm t)
    {
      ATerm h_6 = NULL;
      h_6 = t;
      t = SSL_access(h_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(n_4, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_13 = NULL;
  t = new_file_0_0(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_13, term_h_26);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, r_13, term_s_26);
  {
    ATerm o_4 (ATerm t)
    {
      t = term_u_26;
      return(t);
    }
    t = assert_1_0(o_4, t);
    t = r_13;
  }
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  s_13 = t;
  t = xtc_new_file_0_0(t);
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_13, s_13);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(t_13);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_14 (ATerm b_14, ATerm t)
  {
    t = SSL_fclose(b_14);
    return(t);
  }
  ATerm e_14 = NULL,f_14 = NULL;
  f_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_14 = ATgetArgument(t, 0);
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_14);
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            t = h_14(f_14, t);
          }
      }
    }
  else
    {
      t = h_14(f_14, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_14 = NULL;
  t = SSL_stdin_stream();
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_14 = NULL;
  t = SSL_stdout_stream();
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  t = SSL_stderr_stream();
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_14);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      ATerm y_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL,x_6 = NULL;
        u_6 = t;
        t = SSL_explode_term(u_6);
        if(match_cons(t, sym__2))
          {
            ATerm b_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_27) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_27 = ATgetArgument(t, 1);
              if(((ATgetType(c_27) == AT_LIST) && !(ATisEmpty(c_27))))
                {
                  x_6 = ATgetFirst((ATermList) c_27);
                  {
                    ATerm d_27 = (ATerm) ATgetNext((ATermList) c_27);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_6;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_14 = NULL,r_14 = NULL,s_14 = NULL;
              ATerm p_4 (ATerm t)
              {
                ATerm t_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    t_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_14;
                return(t);
              }
              t = _2_0(p_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_14 = ATgetArgument(t, 0);
                  r_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_14, r_14);
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
              ;
              LocalPopChoice(f_27);
            }
          else
            {
              t = e_27;
              {
                ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
                ATerm q_4 (ATerm t)
                {
                  ATerm x_14 = NULL;
                  x_14 = t;
                  t = SSL_is_string(x_14);
                  return(t);
                }
                t = _2_0(q_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_14 = ATgetArgument(t, 0);
                    v_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_14, v_14);
                w_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_15 = NULL;
      b_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_15, term_i_27);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm r_4 (ATerm t)
        {
          t = term_j_27;
          return(t);
        }
        t = debug_1_0(r_4, t);
        _fail(t);
      }
    }
  y_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_15);
  z_14 = t;
  t = y_14;
  t = fclose_0_0(t);
  t = z_14;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  f_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = f_15;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          g_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(g_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = a_87(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_m_27;
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        t = term_n_27;
        return(t);
      }
      t = Option_3_0(u_4, v_4, x_4, t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      {
        ATerm z_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm a_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_o_27;
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          t = term_p_27;
          return(t);
        }
        t = Option_3_0(z_4, a_5, d_5, t);
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = z_15;
        t = k_0(t);
        s_7 = t;
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(a_16, s_7);
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_16);
        }
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm u_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL;
              t = z_15;
              t = k_0(t);
              w_7 = t;
              {
                ATerm w_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_27 = t;
                    int y_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(y_27);
                      }
                    else
                      {
                        t = x_27;
                        {
                          ATerm z_27 = t;
                          int a_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(a_28);
                            }
                          else
                            {
                              t = z_27;
                              {
                                ATerm x_7 = NULL;
                                x_7 = t;
                                if((a_16 != t))
                                  {
                                    _fail(t);
                                  }
                                t = x_7;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_27;
                  }
                t = SSL_copy(a_16, w_7);
                t = (ATerm) ATmakeAppl(sym_FILE_1, a_16);
              }
              ;
              LocalPopChoice(v_27);
            }
          else
            {
              t = u_27;
              t = z_15;
              t = k_0(t);
              if((a_16 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_16);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_28 = ATgetArgument(t, 0);
            ATerm e_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_16, h_16);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_28 = ATgetFirst((ATermList) t);
            b_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_8;
        ;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATempty;
      }
    i_16 = t;
    t = SSL_table_put(g_16, h_16, i_16);
    t = (ATerm) ATmakeAppl(sym__2, g_16, h_16);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  o_16 = t;
  t = x_82(t);
  p_16 = t;
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(p_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_16 = ATgetFirst((ATermList) t);
        q_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(p_16, (ATerm)ATmakeAppl(sym_Scopes_0), q_16);
    t = r_16;
    {
      ATerm j_5 (ATerm t)
      {
        ATerm s_16 = NULL;
        s_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_16, s_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(j_5, t);
      t = o_16;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_83(t);
      t = t_83(t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      t = t_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  t = w_82(t);
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_16, term_k_28);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_28 = ATgetArgument(t, 0);
            ATerm o_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATempty;
      }
    x_16 = t;
    t = SSL_table_put(w_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(x_16), (ATerm) ATempty));
    t = v_16;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm d_17 = NULL;
  ATerm k_5 (ATerm t)
  {
    t = term_u_26;
    return(t);
  }
  t = begin_scope_1_0(k_5, t);
  {
    ATerm n_5 (ATerm t)
    {
      ATerm f_17 = NULL;
      f_17 = t;
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_17 = ATgetFirst((ATermList) t);
            {
              ATerm r_28 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = d_17;
        {
          ATerm w_5 (ATerm t)
          {
            ATerm x_5 (ATerm t)
            {
              ATerm h_17 = NULL;
              h_17 = t;
              t = SSL_remove(h_17);
              return(t);
            }
            t = try_1_0(x_5, t);
            return(t);
          }
          t = map_1_0(w_5, t);
          t = f_17;
          {
            ATerm a_6 (ATerm t)
            {
              t = term_u_26;
              return(t);
            }
            t = end_scope_1_0(a_6, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(b_86, n_5, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_17 = NULL;
        t = term_h_23;
        t = get_config_0_0(t);
        i_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_17);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = term_u_28;
      }
    t = c_86(t);
    {
      ATerm c_6 (ATerm t)
      {
        ATerm v_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_23;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = v_28;
            t = term_x_28;
          }
        return(t);
      }
      t = copy_to_1_0(c_6, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(b_6, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm k_17 = NULL;
    k_17 = t;
    if(match_string(t, "-k"))
      {
        t = k_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = k_17;
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    ATerm l_17 = NULL,m_17 = NULL;
    l_17 = t;
    t = SSL_string_to_int(l_17);
    m_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), m_17);
    t = l_17;
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_y_28;
    return(t);
  }
  t = ArgOption_3_0(d_6, f_6, g_6, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_6 (ATerm t)
      {
        ATerm p_17 = NULL;
        p_17 = t;
        if(match_string(t, "-S"))
          {
            t = p_17;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = p_17;
          }
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_c_29;
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        t = term_d_29;
        return(t);
      }
      t = Option_3_0(i_6, j_6, k_6, t);
      ;
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm m_6 (ATerm t)
            {
              ATerm q_17 = NULL,r_17 = NULL;
              q_17 = t;
              t = SSL_string_to_int(q_17);
              r_17 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_17);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, q_17);
              return(t);
            }
            ATerm n_6 (ATerm t)
            {
              t = term_g_29;
              return(t);
            }
            t = ArgOption_3_0(l_6, m_6, n_6, t);
            ;
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            {
              ATerm o_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_h_29;
                return(t);
              }
              ATerm q_6 (ATerm t)
              {
                t = term_i_29;
                return(t);
              }
              t = Option_3_0(o_6, p_6, q_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm t_17 = NULL;
    t_17 = t;
    if(match_string(t, "-o"))
      {
        t = t_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = t_17;
      }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    ATerm u_17 = NULL;
    u_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_17);
    t = (ATerm) ATmakeAppl(sym_Output_1, u_17);
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = term_l_29;
    return(t);
  }
  t = ArgOption_3_0(r_6, s_6, t_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm y_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_o_29;
          return(t);
        }
        ATerm a_7 (ATerm t)
        {
          t = term_p_29;
          return(t);
        }
        t = Option_3_0(y_6, z_6, a_7, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  x_17 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = x_17;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm f_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_17 = ATgetFirst((ATermList) t);
          z_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_18 = ATgetFirst((ATermList) t);
          b_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_17;
      t = h_0(t);
      t = a_18;
      t = i_0(t);
      f_18 = t;
      t = (ATerm) ATinsert(CheckATermList(b_18), f_18);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm h_18 = NULL;
    h_18 = t;
    if(match_string(t, "-i"))
      {
        t = h_18;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = h_18;
      }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    ATerm i_18 = NULL;
    i_18 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), i_18);
    t = (ATerm) ATmakeAppl(sym_Input_1, i_18);
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_q_29;
    return(t);
  }
  t = ArgOption_3_0(b_7, c_7, f_7, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  j_18 = t;
  t = term_s_26;
  t = whoami_0_0(t);
  k_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_18), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = j_18;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_18 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_26;
  t = whoami_0_0(t);
  l_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), l_18));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_29;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_78(t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm o_18 = NULL,p_18 = NULL,s_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_18 = ATgetFirst((ATermList) t);
            p_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_18;
        t = foldr_2_0(z_78, a_79, t);
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_18, s_18);
        t = a_79(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  t_18 = t;
  t = SSL_explode_term(t_18);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_18;
  t = foldr_2_0(x_76, y_76, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_18 = NULL;
  t = times_0_0(t);
  {
    ATerm g_7 (ATerm t)
    {
      t = term_b_29;
      return(t);
    }
    ATerm h_7 (ATerm t)
    {
      ATerm w_18 = NULL,z_18 = NULL;
      if(match_cons(t, sym__2))
        {
          w_18 = ATgetArgument(t, 0);
          z_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(w_18, z_18);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = SSL_addr(w_18, z_18);
          }
      }
      return(t);
    }
    t = crush_2_0(g_7, h_7, t);
    v_18 = t;
    t = SSL_TicksToSeconds(v_18);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  if(match_cons(t, sym__2))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_19;
        if((j_19 != t))
          {
            _fail(t);
          }
        t = i_19;
        ;
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = i_19;
        {
          ATerm d_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_19, k_19);
              ;
              LocalPopChoice(e_30);
            }
          else
            {
              t = d_30;
              t = SSL_gtr(j_19, k_19);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_19, k_19);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm n_19 = NULL,o_19 = NULL;
    n_19 = t;
    t = term_r_9;
    t = get_config_0_0(t);
    o_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_19, term_y_13);
    t = geq_0_0(t);
    t = n_19;
    t = x_83(t);
    return(t);
  }
  t = try_1_0(k_7, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm q_19 = NULL,r_19 = NULL;
    t = run_time_0_0(t);
    q_19 = t;
    t = term_s_26;
    t = whoami_0_0(t);
    r_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), q_19), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), r_19));
    t = (ATerm) ATmakeAppl(sym__2, term_r_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_30), q_19), term_q_13), r_19));
    return(t);
  }
  t = if_verbose1_1_0(l_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
      {
        ATerm m_7 (ATerm t)
        {
          ATerm j_30 = t;
          int k_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(k_30);
            }
          else
            {
              t = j_30;
              {
                ATerm l_30 = t;
                int m_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(m_30);
                  }
                else
                  {
                    t = l_30;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(m_7, t);
      }
    }
  t = d_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_19 = ATgetFirst((ATermList) t);
      v_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_19 = NULL,a_20 = NULL;
        t = v_19;
        t = g_0(t);
        z_19 = t;
        t = u_19;
        t = f_0(t);
        a_20 = t;
        t = v_19;
        {
          ATerm n_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_19), a_20);
            return(t);
          }
          t = reverse_acc_2_0(f_0, n_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_26;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, o_7, t);
  return(t);
}
ATerm Program_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  e_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_20);
  b_20 = t;
  t = c_20;
  t = a_64(t);
  d_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, d_20), b_20);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      {
        ATerm p_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(p_7, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_p_30;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm q_7 (ATerm t)
    {
      ATerm i_20 = NULL;
      i_20 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, i_20), term_q_30);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(q_7, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm b_64 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_20);
  j_20 = t;
  t = k_20;
  t = b_64(t);
  l_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_20), j_20);
  return(t);
}
ATerm fetch_1_0 (ATerm t_72 (ATerm), ATerm t)
{
  ATerm q_20 (ATerm t)
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_72, _id, t);
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = Cons_2_0(_id, q_20, t);
      }
    return(t);
  }
  t = q_20(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  t = fetch_1_0(y_88, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL;
  s_20 = t;
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_30 = ATgetFirst((ATermList) t);
                ATerm w_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_20;
          }
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = (ATerm) ATinsert(ATempty, s_20);
      }
    t_20 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), t_20);
    t = s_20;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_29;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
        ATerm z_20 = NULL,a_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_20 = ATgetFirst((ATermList) t);
            a_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_20;
        {
          ATerm r_7 (ATerm t)
          {
            t = a_21;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  e_21 = t;
  t = SSL_explode_term(e_21);
  if(match_cons(t, sym__2))
    {
      ATerm z_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_21;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_72 (ATerm), ATerm t)
{
  ATerm g_21 (ATerm t)
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_21, t);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_72(t);
      }
    return(t);
  }
  t = g_21(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_21;
  {
    ATerm t_7 (ATerm t)
    {
      t = h_21;
      return(t);
    }
    t = at_end_1_0(t_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  p_21 = t;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_21);
  k_21 = t;
  t = l_21;
  t = l_57(t);
  n_21 = t;
  t = m_21;
  t = m_57(t);
  o_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, n_21, o_21), k_21);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm t_21 = NULL;
  ATerm u_7 (ATerm t)
  {
    ATerm u_21 = NULL;
    u_21 = t;
    t = SSL_explode_string(u_21);
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    ATerm v_21 = NULL;
    v_21 = t;
    t = SSL_explode_string(v_21);
    return(t);
  }
  t = _2_0(u_7, v_7, t);
  t = conc_0_0(t);
  t_21 = t;
  t = SSL_implode_string(t_21);
  return(t);
}
ATerm debug_1_0 (ATerm c_68 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  w_21 = t;
  t = c_68(t);
  x_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_21), x_21));
  t = w_21;
  return(t);
}
ATerm map_1_0 (ATerm j_72 (ATerm), ATerm t)
{
  ATerm y_21 (ATerm t)
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = Cons_2_0(j_72, y_21, t);
      }
    return(t);
  }
  t = y_21(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_22 = NULL;
      e_22 = t;
      t = SSL_is_string(e_22);
      ;
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(y_7, t);
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            {
              ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
              k_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_22 = ATgetArgument(t, 0);
                  t = l_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_22 = ATgetArgument(t, 0);
                      t = l_22;
                      {
                        ATerm k_31 = t;
                        int l_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_31);
                          }
                        else
                          {
                            t = k_31;
                            {
                              ATerm z_7 (ATerm t)
                              {
                                t = term_m_31;
                                return(t);
                              }
                              t = debug_1_0(z_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm t_22 = NULL,u_22 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_22 = ATgetArgument(t, 0);
                          m_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_22;
                      t = eval_config_0_0(t);
                      t_22 = t;
                      t = m_22;
                      t = eval_config_0_0(t);
                      u_22 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm x_22 = NULL;
  x_22 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_22);
  {
    ATerm a_8 (ATerm t)
    {
      ATerm y_22 = NULL;
      t = eval_config_0_0(t);
      y_22 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_22, y_22);
      t = y_22;
      return(t);
    }
    t = try_1_0(a_8, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_83(t);
      ;
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm f_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_t_31;
        return(t);
      }
      ATerm g_8 (ATerm t)
      {
        t = term_u_31;
        return(t);
      }
      t = Option_3_0(e_8, f_8, g_8, t);
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm j_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_31;
          return(t);
        }
        ATerm l_8 (ATerm t)
        {
          t = term_w_31;
          return(t);
        }
        t = Option_3_0(j_8, k_8, l_8, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym__3))
    {
      b_23 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
      d_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_23, c_23);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_31 = ATgetArgument(t, 0);
            ATerm a_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_23, c_23);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATempty;
      }
    e_23 = t;
    t = SSL_table_put(b_23, c_23, (ATerm) ATinsert(CheckATermList(e_23), d_23));
    t = (ATerm) ATmakeAppl(sym__3, b_23, c_23, d_23);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm j_23 = NULL;
  t = term_s_26;
  t = d_90(t);
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_32, term_c_32, j_23);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = l_23;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm q_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_23 = ATgetFirst((ATermList) t);
          n_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_23;
      t = a_0(t);
      t = term_s_26;
      t = b_0(t);
      q_23 = t;
      t = (ATerm) ATinsert(CheckATermList(n_23), q_23);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm s_23 = NULL;
    s_23 = t;
    if(match_string(t, "--help"))
      {
        t = s_23;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = s_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = s_23;
          }
      }
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_d_32;
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    t = term_e_32;
    return(t);
  }
  t = Option_3_0(s_8, t_8, u_8, t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  y_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_23 = ATgetFirst((ATermList) t);
      v_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_23);
  t_23 = t;
  t = u_23;
  t = u_58(t);
  w_23 = t;
  t = v_23;
  t = v_58(t);
  x_23 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_23), w_23), t_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  {
    ATerm v_8 (ATerm t)
    {
      t = term_f_32;
      t = b_90(t);
      return(t);
    }
    t = try_1_0(v_8, t);
    t = f_24;
    {
      ATerm w_8 (ATerm t)
      {
        ATerm g_24 = NULL;
        g_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_24);
        t = (ATerm) ATmakeAppl(sym_Program_1, g_24);
        return(t);
      }
      ATerm x_8 (ATerm t)
      {
        ATerm g_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_32 = t;
            int j_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(j_32);
              }
            else
              {
                t = i_32;
                t = b_90(t);
                t = Cons_2_0(_id, x_8, t);
              }
            ;
            LocalPopChoice(h_32);
          }
        else
          {
            t = g_32;
            {
              ATerm i_24 = NULL,j_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_24 = ATgetFirst((ATermList) t);
                  j_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_24), (ATerm) ATmakeAppl(sym_Undefined_1, i_24));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_8, x_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = p_24;
  {
    ATerm y_8 (ATerm t)
    {
      ATerm k_32 = t;
      int l_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_90(t);
          ;
          LocalPopChoice(l_32);
        }
      else
        {
          t = k_32;
          {
            ATerm m_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_32);
              }
            else
              {
                t = m_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_8, t);
    {
      ATerm z_8 (ATerm t)
      {
        ATerm o_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_24 = NULL;
            w_24 = t;
            {
              ATerm q_32 = t;
              int r_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_24;
                  {
                    ATerm s_32 = t;
                    int t_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_i_30;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(t_32);
                      }
                    else
                      {
                        t = s_32;
                        {
                          ATerm a_9 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(a_9, t);
                        }
                      }
                    t = w_24;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(r_32);
                }
              else
                {
                  t = q_32;
                  t = term_s_31;
                  t = get_config_0_0(t);
                  t = w_24;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(p_32);
          }
        else
          {
            t = o_32;
            {
              ATerm b_9 (ATerm t)
              {
                ATerm c_9 (ATerm t)
                {
                  q_24 = t;
                  return(t);
                }
                t = Undefined_1_0(c_9, t);
                return(t);
              }
              t = option_defined_1_0(b_9, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_r_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), term_u_32));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(z_8, t);
      r_24 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = r_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm t)
{
  ATerm b_19 = NULL;
  t = parse_options_1_0(f_88, t);
  b_19 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), b_19);
  t = b_19;
  t = h_88(t);
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_88, t);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_88(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_32);
            }
          else
            {
              t = x_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t)
{
  t = option_wrap_4_0(j_88, default_usage_0_0, _id, k_88, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm t)
{
  ATerm d_9 (ATerm t)
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_86(t);
        ;
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    t = xtc_io_1_0(h_86, t);
    return(t);
  }
  t = option_wrap_2_0(d_9, e_9, t);
  return(t);
}
ATerm term_to_dot_0_0 (ATerm t)
{
  ATerm f_9 (ATerm t)
  {
    t = xtc_io_transform_1_0(to_adot_0_0, t);
    {
      ATerm g_9 (ATerm t)
      {
        t = term_b_33;
        return(t);
      }
      ATerm h_9 (ATerm t)
      {
        ATerm z_24 = NULL;
        t = term_c_33;
        t = xtc_find_0_0(t);
        z_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, z_24), term_d_33);
        return(t);
      }
      t = xtc_transform_2_0(g_9, h_9, t);
      {
        ATerm i_9 (ATerm t)
        {
          t = term_e_33;
          return(t);
        }
        t = xtc_transform_1_0(i_9, t);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_2_0(term_to_adot_options_0_0, f_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = term_to_dot_0_0(t);
  return(t);
}
