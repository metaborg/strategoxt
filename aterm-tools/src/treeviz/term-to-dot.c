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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
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
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_v_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_b_38;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_w_36;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_r_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_g_32;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_o_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_r_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_h_27;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_b_24;
ATerm term_w_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_p_10;
ATerm term_f_10;
void init_constant_terms (void)
{
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_x_12, term_y_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_d_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_k_13, term_l_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_h_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_v_14, term_w_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_c_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_k_17, term_l_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_i_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_u_18, term_v_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_19, term_c_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_u_19);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_b_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_k_22);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_AttrId_2, term_d_25, term_l_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_j_29);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_d_33);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_w_29);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_w_29);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_w_29);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_c_34);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_w_29);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym__2, term_n_38, term_w_29);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_w_29);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__2, term_g_40, term_w_29);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_term_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm);
ATerm b_7 (ATerm a_26, ATerm b_26, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm y_73 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose4_1_0 (ATerm c_91 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_91 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm z_6 (ATerm r_47, ATerm s_47, ATerm t_47, ATerm);
ATerm a_7 (ATerm g_91 (ATerm), ATerm b_48, ATerm a_48, ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm r_88 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm b_2 (ATerm);
ATerm u_9 (ATerm b_9, ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm p_11 (ATerm y_10, ATerm);
ATerm conc_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm h_7 (ATerm n_60, ATerm o_60, ATerm);
ATerm t_2 (ATerm);
ATerm graph_to_adot_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm i_7 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm h_36, ATerm g_36, ATerm);
ATerm j_7 (ATerm g_83 (ATerm), ATerm d_36, ATerm c_36, ATerm);
ATerm foldr_3_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm d_91 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm k_7 (ATerm e_29, ATerm f_29, ATerm);
ATerm l_7 (ATerm j_75 (ATerm), ATerm t_184, ATerm m_29, ATerm);
ATerm m_7 (ATerm v_89 (ATerm), ATerm d_46, ATerm b_46, ATerm);
ATerm l_18 (ATerm a_18, ATerm);
ATerm m_18 (ATerm c_18, ATerm d_18, ATerm e_18, ATerm);
ATerm c_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm i_20 (ATerm c_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm n_7 (ATerm k_29, ATerm);
ATerm o_7 (ATerm g_50, ATerm h_50, ATerm);
ATerm _2_0 (ATerm y_60 (ATerm), ATerm z_60 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm p_7 (ATerm y_49, ATerm z_49, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm q_7 (ATerm g_26, ATerm h_26, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm r_7 (ATerm z_46, ATerm a_47, ATerm);
ATerm end_scope_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm w_92 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm xtc_io_1_0 (ATerm x_92 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm f_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm z_7 (ATerm u_48, ATerm v_48, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_7 (ATerm u_46, ATerm v_46, ATerm t_46, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm term_to_adot_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_7 (ATerm p_44, ATerm q_44, ATerm);
ATerm foldr_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_90 (ATerm), ATerm);
ATerm c_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_9 (ATerm);
ATerm need_help_1_0 (ATerm y_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_70 (ATerm), ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_70 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm m_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_7 (ATerm l_43, ATerm m_43, ATerm);
ATerm debug_1_0 (ATerm h_75 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm r_9 (ATerm);
ATerm t_9 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm w_7 (ATerm l_48, ATerm m_48, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm a_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_96 (ATerm), ATerm);
ATerm o_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm parse_options_1_0 (ATerm v_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm);
ATerm x_10 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm term_to_dot_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(t_93, u_93, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm b_7 (ATerm a_26, ATerm b_26, ATerm t)
{
  t = SSL_execvp(a_26, b_26);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
  w_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_1 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(y_1);
        p_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_10), p_0), term_f_10);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm b_1 = NULL,c_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_1 = ATgetArgument(t, 0);
          z_1 = ATgetArgument(t, 1);
          a_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_1);
      b_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_2), term_w_11), b_1), term_v_11), y_1);
      c_1 = t;
      t = SSL_concat_strings(c_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm d_2 = NULL;
  ATerm x_0 (ATerm t)
  {
    t = o_79(t);
    if(((d_2 != NULL) && (d_2 != t)))
      _fail(t);
    else
      d_2 = t;
    return(t);
  }
  t = fetch_1_0(x_0, t);
  t = not_null(d_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm f_2 = NULL;
  f_2 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_19), term_r_19), term_n_19), term_j_19), term_f_19), term_w_18), term_q_18), term_b_18), term_v_17), term_g_17), term_k_16), term_d_16), term_x_15), term_p_15), term_k_15), term_q_14), term_k_14), term_c_14), term_x_13), term_t_13), term_m_13), term_e_13), term_a_13), term_t_12), term_p_12), term_l_12), term_h_12), term_c_12);
        {
          ATerm y_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm w_19 = ATgetArgument(t, 0);
                if((f_2 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm x_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(y_0, t);
        }
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, f_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_2 = NULL;
  k_2 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_2 = NULL,x_1 = NULL,e_2 = NULL,g_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_20 = ATgetArgument(t, 0);
            s_2 = ATgetArgument(t, 1);
            {
              ATerm b_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_2;
        {
          ATerm d_20 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_20;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          x_1 = t;
          t = term_e_20;
          e_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, x_1), term_h_20);
          g_2 = t;
          t = SSL_printnl(e_2, g_2);
          t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(ATinsert(ATempty, x_1), term_h_20));
        }
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
      }
    t = k_2;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL;
  b_3 = t;
  t = fork_0_0(t);
  d_3 = t;
  {
    ATerm j_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = b_3;
        t = y_73(t);
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = j_20;
        t = SSL_waitpid(d_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_20 = ATgetArgument(t, 0);
            if(((ATgetType(m_20) != AT_INT) || (ATgetInt((ATermInt) m_20) != 0)))
              _fail(t);
            {
              ATerm q_20 = ATgetArgument(t, 1);
            }
            {
              ATerm r_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = b_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL;
  l_3 = t;
  t = k_93(t);
  t = xtc_find_0_0(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, l_3);
  {
    ATerm z_0 (ATerm t)
    {
      ATerm n_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_3, l_3);
      t = b_7(m_3, l_3, t);
      t = term_v_20;
      n_3 = t;
      t = SSL_exit(n_3);
      return(t);
    }
    t = fork_and_wait_1_0(z_0, t);
    t = l_3;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL;
  m_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_2 = NULL,u_2 = NULL;
      t = m_4;
      t = xtc_new_file_0_0(t);
      j_2 = t;
      t = m_0(t);
      u_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_2, (ATerm) ATinsert(ATinsert(ATempty, j_2), term_w_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(j_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
    }
  else
    {
      ATerm a_3 = NULL,c_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_4;
      t = xtc_new_file_0_0(t);
      a_3 = t;
      t = m_0(t);
      c_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_w_20), n_4), term_x_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(a_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_3);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,t_4 = NULL,u_4 = NULL,w_4 = NULL,b_0 = NULL,f_0 = NULL;
  w_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_4);
  r_4 = t;
  t = t_4;
  t = m_70(t);
  u_4 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_4);
  b_0 = t;
  t = SSLsetAnnotations(b_0, r_4);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_5 = NULL;
  a_5 = t;
  t = SSL_table_keys(a_5);
  {
    ATerm a_1 (ATerm t)
    {
      ATerm c_5 = NULL,d_5 = NULL;
      c_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_5, c_5);
      t = w_7(a_5, c_5, t);
      d_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_5, d_5);
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_91 (ATerm), ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,g_5 = NULL;
      e_5 = t;
      t = term_a_21;
      t = get_config_0_0(t);
      g_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, term_h_14);
      t = geq_0_0(t);
      t = e_5;
      t = c_91(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_91 (ATerm), ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 = NULL,o_5 = NULL;
      h_5 = t;
      t = term_a_21;
      t = get_config_0_0(t);
      o_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_5, term_n_12);
      t = geq_0_0(t);
      t = h_5;
      t = e_91(t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm a_6 = NULL;
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      if((a_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm r_47, ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
  {
    ATerm d_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            ATerm j_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
        t = w_7(r_47, s_47, t);
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATempty;
      }
    r_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_5, t_47);
    t = j_7(d_1, r_5, t_47, t);
    s_5 = t;
    t = SSL_table_put(r_47, s_47, s_5);
    t = q_5;
  }
  return(t);
}
ATerm a_7 (ATerm g_91 (ATerm), ATerm b_48, ATerm a_48, ATerm t)
{
  t = a_48;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm b_6 = NULL,c_6 = NULL;
      if(match_cons(t, sym__2))
        {
          b_6 = ATgetArgument(t, 0);
          c_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, b_48, b_6, c_6);
      t = g_91(t);
      return(t);
    }
    t = map_1_0(e_1, t);
  }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 = NULL,e_6 = NULL;
      d_6 = t;
      t = (ATerm) ATinsert(ATempty, term_q_21);
      e_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_6, (ATerm) ATinsert(ATempty, term_q_21));
      t = p_7(d_6, e_6, t);
      LocalPopChoice(n_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_21;
      {
        ATerm r_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_21 = t;
            if((PushChoice() == 0))
              {
                ATerm f_6 = NULL,i_6 = NULL;
                f_6 = t;
                t = (ATerm) ATinsert(ATempty, term_z_21);
                i_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_6, (ATerm) ATinsert(ATempty, term_z_21));
                t = p_7(f_6, i_6, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_21;
              }
            t = debug_1_0(f_1, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = r_21;
            t = debug_1_0(g_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm y_7 = NULL,a_8 = NULL,b_8 = NULL;
  y_7 = t;
  t = term_e_20;
  a_8 = t;
  t = (ATerm) ATinsert(ATempty, term_g_22);
  b_8 = t;
  t = SSL_printnl(a_8, b_8);
  t = y_7;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym__3))
    {
      c_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
      e_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_6(c_8, d_8, e_8, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  t = term_e_20;
  g_8 = t;
  t = (ATerm) ATinsert(ATempty, term_h_22);
  h_8 = t;
  t = SSL_printnl(g_8, h_8);
  t = f_8;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  t = term_e_20;
  j_8 = t;
  t = (ATerm) ATinsert(ATempty, term_g_22);
  k_8 = t;
  t = SSL_printnl(j_8, k_8);
  t = i_8;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_6 = NULL,m_6 = NULL,n_6 = NULL,q_6 = NULL,r_6 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  k_6 = t;
  t = if_verbose5_1_0(h_1, t);
  {
    ATerm i_22 = t;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL,u_7 = NULL;
        t = term_j_22;
        t_7 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_6);
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATmakeAppl(sym_Imported_1, k_6));
        t = w_7(t_7, u_7, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_22;
      }
    m_6 = t;
    t = term_j_22;
    q_6 = t;
    t = term_k_22;
    r_6 = t;
    t = (ATerm) ATinsert(ATempty, k_6);
    c_7 = t;
    t = SSL_table_put(q_6, r_6, c_7);
    t = m_6;
    t = if_verbose4_1_0(j_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(l_1, t);
    n_6 = t;
    t = term_j_22;
    d_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_22, n_6);
    t = a_7(m_1, d_7, n_6, t);
    t = if_verbose6_1_0(n_1, t);
    t = term_j_22;
    e_7 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, k_6);
    f_7 = t;
    t = (ATerm) ATempty;
    g_7 = t;
    t = SSL_table_put(e_7, f_7, g_7);
    t = (ATerm) ATmakeAppl(sym__3, term_j_22, (ATerm)ATmakeAppl(sym_Imported_1, k_6), (ATerm) ATempty);
    t = if_verbose4_1_0(o_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm l_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = l_22;
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              t = filter_1_0(x_86, t);
              return(t);
            }
            t = Cons_2_0(x_86, p_1, t);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            {
              ATerm o_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_22 = ATgetFirst((ATermList) t);
                  o_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_8;
              t = filter_1_0(x_86, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_88(t);
        t = q_8(t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
      }
    return(t);
  }
  t = q_8(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 = NULL;
            t = term_z_22;
            r_8 = t;
            t = SSL_getenv(r_8);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  t = term_j_22;
  w_8 = t;
  t = term_b_23;
  x_8 = t;
  t = term_c_23;
  t = w_7(w_8, x_8, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_23;
      }
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_8 = NULL;
  t = if_verbose5_1_0(q_1, t);
  s_8 = t;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL,u_8 = NULL;
        t = term_j_22;
        t_8 = t;
        t = term_k_22;
        u_8 = t;
        t = term_h_23;
        t = w_7(t_8, u_8, t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          ATerm v_8 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_8 = t;
          t = repeat_1_0(s_1, t);
          t = v_8;
        }
      }
    t = s_8;
    t = if_verbose5_1_0(t_1, t);
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm u_9 (ATerm b_9, ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  t = term_j_22;
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_9);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATmakeAppl(sym_Tool_1, b_9));
  t = w_7(e_9, f_9, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_23 = ATgetFirst((ATermList) t);
      if(match_cons(j_23, sym__2))
        {
          ATerm l_23 = ATgetArgument(j_23, 0);
          d_9 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      {
        ATerm k_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_9;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_j_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(v_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
        i_9 = t;
        if(match_cons(t, sym__2))
          {
            g_9 = ATgetArgument(t, 0);
            h_9 = ATgetArgument(t, 1);
            {
              ATerm r_23 = t;
              int t_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
                  t = term_j_22;
                  m_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, g_9);
                  n_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATmakeAppl(sym_Tool_1, g_9));
                  t = w_7(m_9, n_9, t);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((h_9 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((l_9 != NULL) && (l_9 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            l_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(c_2, t);
                    t = not_null(l_9);
                  }
                  ;
                  LocalPopChoice(t_23);
                }
              else
                {
                  t = r_23;
                  t = u_9(i_9, t);
                }
            }
          }
        else
          {
            t = u_9(i_9, t);
          }
        t = if_verbose5_1_0(h_2, t);
      }
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm s_9 = NULL,j_3 = NULL,k_3 = NULL;
        s_9 = t;
        t = term_e_20;
        j_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_24), s_9), term_w_23);
        k_3 = t;
        t = SSL_printnl(j_3, k_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_24), s_9), term_w_23);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm b_10 = NULL,c_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_10 = ATgetFirst((ATermList) t);
            c_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_10;
        {
          ATerm n_2 (ATerm t)
          {
            t = c_10;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_2, t);
        }
      }
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_10 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm l_24 = ATgetFirst((ATermList) t);
              if(((ATgetType(l_24) != AT_INT) || (ATgetInt((ATermInt) l_24) != 34)))
                _fail(t);
              i_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(i_10), term_o_24), term_n_24);
          ;
          LocalPopChoice(j_24);
        }
      else
        {
          t = i_24;
          {
            ATerm k_10 = NULL,m_10 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_10 = ATgetFirst((ATermList) t);
                m_10 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_10;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_10), term_n_24), term_n_24);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_10), term_p_24), term_n_24);
              }
          }
        }
      t = Cons_2_0(_id, o_2, t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm r_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(t_24);
          }
        else
          {
            t = r_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm t_10 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_10, t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_79(t);
      }
    return(t);
  }
  t = t_10(t);
  return(t);
}
ATerm p_11 (ATerm y_10, ATerm t)
{
  ATerm h_11 = NULL;
  t = SSL_explode_term(y_10);
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              t = j_11;
              return(t);
            }
            t = i_11;
            t = at_end_1_0(p_2, t);
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            t = p_11(k_11, t);
          }
      }
    }
  else
    {
      t = p_11(k_11, t);
    }
  return(t);
}
ATerm EdgeToDot_0_0 (ATerm t)
{
  ATerm z_12 = NULL,i_13 = NULL,j_13 = NULL;
  z_12 = t;
  if(match_cons(t, sym__2))
    {
      i_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 = NULL,s_4 = NULL,v_4 = NULL,y_4 = NULL,p_5 = NULL,u_5 = NULL,w_5 = NULL,g_6 = NULL;
        t = SSL_explode_term(j_13);
        if(match_cons(t, sym__2))
          {
            o_4 = ATgetArgument(t, 0);
            s_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_explode_string(o_4);
        t = escape_chars_0_0(t);
        p_5 = t;
        t = SSL_implode_string(p_5);
        u_5 = t;
        t = SSL_explode_string(u_5);
        g_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_6), term_o_24), (ATerm) ATinsert(ATempty, term_o_24));
        t = conc_0_0(t);
        w_5 = t;
        t = SSL_implode_string(w_5);
        v_4 = t;
        t = s_4;
        {
          ATerm q_2 (ATerm t)
          {
            ATerm i_5 = NULL;
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, i_13), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, i_5))));
            return(t);
          }
          t = map_1_0(q_2, t);
          y_4 = t;
          t = (ATerm) ATinsert(CheckATermList(y_4), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, i_13), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_d_25, v_4))))));
        }
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = a_25;
        {
          ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,y_6 = NULL,l_8 = NULL;
          t = SSL_is_int(j_13);
          t = SSL_int_to_string(j_13);
          y_6 = t;
          t = SSL_explode_string(y_6);
          t = escape_chars_0_0(t);
          l_8 = t;
          t = SSL_implode_string(l_8);
          s_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_25), s_6), term_e_25);
          u_6 = t;
          t = SSL_concat_strings(u_6);
          t_6 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, i_13), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_d_25, t_6))))));
        }
      }
  }
  return(t);
}
ATerm h_7 (ATerm n_60, ATerm o_60, ATerm t)
{
  ATerm s_13 = NULL;
  t = o_60;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_60;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm f_25 = ATgetFirst((ATermList) t);
          ATerm k_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_60;
    }
  t = o_60;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm z_13 = NULL;
      z_13 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, n_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, z_13))));
      return(t);
    }
    t = map_1_0(r_2, t);
    s_13 = t;
    t = (ATerm) ATinsert(CheckATermList(s_13), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, n_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_m_25)))));
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm n_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14 = NULL,g_14 = NULL,i_14 = NULL;
      f_14 = t;
      if(match_cons(t, sym__2))
        {
          g_14 = ATgetArgument(t, 0);
          i_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_14;
      t = h_7(g_14, i_14, t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = n_25;
      t = EdgeToDot_0_0(t);
    }
  return(t);
}
ATerm graph_to_adot_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = map_1_0(t_2, t);
  t = concat_0_0(t);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_w_25, e_14);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  b_15 = t;
  t = SSL_address(b_15);
  z_14 = t;
  t = SSL_int_to_string(z_14);
  a_15 = t;
  t = term_x_25;
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, a_15);
  t = v_7(c_15, a_15, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  f_15 = t;
  t = SSL_address(f_15);
  d_15 = t;
  t = SSL_int_to_string(d_15);
  e_15 = t;
  t = term_x_25;
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, e_15);
  t = v_7(g_15, e_15, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(z_2, h_15, i_15, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm j_15 = NULL;
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      if((j_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(g_3, y_9, z_9, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      if((g_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_graph_0_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,x_14 = NULL,y_14 = NULL;
  o_14 = t;
  t = SSL_address(o_14);
  u_14 = t;
  t = SSL_int_to_string(u_14);
  x_14 = t;
  t = term_x_25;
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, x_14);
  t = v_7(y_14, x_14, t);
  p_14 = t;
  t = o_14;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = map_1_0(v_2, t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = SRTS_all(w_2, t);
      }
    s_14 = t;
    t = o_14;
    {
      ATerm i_26 = t;
      int k_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = foldr_3_0(x_2, y_2, term_to_graph_0_0, t);
          ;
          LocalPopChoice(k_26);
        }
      else
        {
          t = i_26;
          {
            ATerm a_9 = NULL;
            t = SSL_explode_term(o_14);
            if(match_cons(t, sym__2))
              {
                ATerm l_26 = ATgetArgument(t, 0);
                a_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_9;
            t = foldr_3_0(e_3, f_3, term_to_graph_0_0, t);
          }
        }
      t_14 = t;
      t = (ATerm) ATinsert(CheckATermList(t_14), (ATerm) ATmakeAppl(sym__2, p_14, s_14));
    }
  }
  return(t);
}
ATerm i_7 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm h_36, ATerm g_36, ATerm t)
{
  t = k_83(t);
  {
    ATerm h_3 (ATerm t)
    {
      ATerm o_15 = NULL;
      o_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_36, o_15);
      t = j_83(t);
      return(t);
    }
    t = fetch_1_0(h_3, t);
    t = g_36;
  }
  return(t);
}
ATerm j_7 (ATerm g_83 (ATerm), ATerm d_36, ATerm c_36, ATerm t)
{
  t = d_36;
  {
    ATerm v_15 (ATerm t)
    {
      ATerm o_26 = t;
      int p_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_36;
          ;
          LocalPopChoice(p_26);
        }
      else
        {
          t = o_26;
          {
            ATerm v_26 = t;
            int w_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
                q_15 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_15 = ATgetFirst((ATermList) t);
                    s_15 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_15;
                {
                  ATerm i_3 (ATerm t)
                  {
                    t = c_36;
                    return(t);
                  }
                  t = i_7(g_83, i_3, r_15, s_15, t);
                  t = v_15(t);
                }
                ;
                LocalPopChoice(w_26);
              }
            else
              {
                t = v_26;
                t = Cons_2_0(_id, v_15, t);
              }
          }
        }
      return(t);
    }
    t = v_15(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_85(t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm a_16 = NULL,b_16 = NULL,e_16 = NULL,f_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_16 = ATgetFirst((ATermList) t);
            b_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_16;
        t = y_85(t);
        e_16 = t;
        t = b_16;
        t = foldr_3_0(w_85, x_85, y_85, t);
        f_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_16, f_16);
        t = x_85(t);
      }
    }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_91 (ATerm), ATerm t)
{
  ATerm d_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_16 = NULL,l_16 = NULL;
      j_16 = t;
      t = term_a_21;
      t = get_config_0_0(t);
      l_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_16, term_h_19);
      t = geq_0_0(t);
      t = j_16;
      t = d_91(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = d_27;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = debug_1_0(p_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  r_16 = t;
  t = new_0_0(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_16, r_16);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  t_16 = t;
  t = new_0_0(t);
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_16, t_16);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  v_16 = t;
  t = SSL_explode_term(v_16);
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
          {
            w_16 = ATgetFirst((ATermList) j_27);
            {
              ATerm k_27 = (ATerm) ATgetNext((ATermList) j_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_16;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  t = SSL_explode_term(x_16);
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(((ATgetType(n_27) == AT_LIST) && !(ATisEmpty(n_27))))
          {
            y_16 = ATgetFirst((ATermList) n_27);
            {
              ATerm r_27 = (ATerm) ATgetNext((ATermList) n_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_16;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(y_3, a_17, b_17, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      d_17 = ATgetArgument(t, 0);
      if((d_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      z_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(b_4, z_10, a_11, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      b_11 = ATgetArgument(t, 0);
      if((b_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_tree_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  t = if_verbose5_1_0(o_3, t);
  m_16 = t;
  t = new_0_0(t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_16, m_16);
  {
    ATerm i_17 (ATerm t)
    {
      ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,l_10 = NULL;
      ATerm q_3 (ATerm t)
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_3, t);
            ;
            LocalPopChoice(w_27);
          }
        else
          {
            t = v_27;
            t = SRTS_all(s_3, t);
          }
        return(t);
      }
      t = _2_0(_id, q_3, t);
      o_16 = t;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map_1_0(u_3, t);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              t = SRTS_all(v_3, t);
            }
          return(t);
        }
        t = _2_0(_id, t_3, t);
        p_16 = t;
        t = SSL_explode_term(o_16);
        if(match_cons(t, sym__2))
          {
            ATerm z_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_27) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_28 = ATgetArgument(t, 1);
              if(((ATgetType(a_28) == AT_LIST) && !(ATisEmpty(a_28))))
                {
                  ATerm b_28 = ATgetFirst((ATermList) a_28);
                  ATerm c_28 = (ATerm) ATgetNext((ATermList) a_28);
                  if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
                    {
                      l_10 = ATgetFirst((ATermList) c_28);
                      {
                        ATerm k_28 = (ATerm) ATgetNext((ATermList) c_28);
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
        t = l_10;
        {
          ATerm l_28 = t;
          int m_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = foldr_3_0(w_3, x_3, i_17, t);
              ;
              LocalPopChoice(m_28);
            }
          else
            {
              t = l_28;
              {
                ATerm u_10 = NULL;
                t = SSL_explode_term(l_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_28 = ATgetArgument(t, 0);
                    u_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_10;
                t = foldr_3_0(z_3, a_4, i_17, t);
              }
            }
          q_16 = t;
          t = (ATerm) ATinsert(CheckATermList(q_16), p_16);
        }
      }
      return(t);
    }
    t = i_17(t);
  }
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm j_17 = NULL;
  j_17 = t;
  {
    ATerm p_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_28;
        t = get_config_0_0(t);
        t = j_17;
        t = term_to_tree_0_0(t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = p_28;
        t = term_y_28;
        t = get_config_0_0(t);
        t = j_17;
        t = term_to_graph_0_0(t);
      }
    t = graph_to_adot_0_0(t);
  }
  return(t);
}
ATerm k_7 (ATerm e_29, ATerm f_29, ATerm t)
{
  ATerm m_17 = NULL;
  t = SSL_write_term_to_stream_baf(e_29, f_29);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_17);
  return(t);
}
ATerm l_7 (ATerm j_75 (ATerm), ATerm t_184, ATerm m_29, ATerm t)
{
  ATerm n_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_184, term_g_29);
  t = open_stream_0_0(t);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_17, m_29);
  t = j_75(t);
  t = fclose_0_0(t);
  t = m_29;
  return(t);
}
ATerm m_7 (ATerm v_89 (ATerm), ATerm d_46, ATerm b_46, ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  o_17 = t;
  t = v_89(t);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_17, d_46, b_46);
  t = x_7(p_17, d_46, b_46, t);
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_17 = NULL;
        t = term_j_29;
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_17, term_j_29);
        t = w_7(p_17, u_17, t);
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_17 = ATgetFirst((ATermList) t);
        r_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_29;
    s_17 = t;
    t = (ATerm) ATinsert(CheckATermList(r_17), (ATerm) ATinsert(CheckATermList(q_17), d_46));
    t_17 = t;
    t = SSL_table_put(p_17, s_17, t_17);
    t = o_17;
  }
  return(t);
}
ATerm l_18 (ATerm a_18, ATerm t)
{
  t = a_18;
  {
    ATerm l_29 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_29 = ATgetArgument(t, 0);
            ATerm q_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_29;
      }
    t = term_r_29;
    t = debug_1_0(c_4, t);
    t = (ATerm) ATmakeAppl(sym__2, a_18, term_g_29);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm m_18 (ATerm c_18, ATerm d_18, ATerm e_18, ATerm t)
{
  t = SSL_open_file(c_18, d_18);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_18 = NULL,j_18 = NULL,k_18 = NULL;
  h_18 = t;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_18(h_18, t);
            ;
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            t = m_18(j_18, k_18, h_18, t);
          }
      }
    }
  else
    {
      t = l_18(h_18, t);
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
  ATerm n_18 = NULL,o_18 = NULL;
  t = term_w_29;
  t = new_0_0(t);
  n_18 = t;
  t = term_x_29;
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_18, term_x_29);
  t = v_7(n_18, o_18, t);
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_18 = NULL,r_18 = NULL;
        p_18 = t;
        t = (ATerm) ATinsert(ATempty, term_z_21);
        r_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_18, (ATerm) ATinsert(ATempty, term_z_21));
        t = p_7(p_18, r_18, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
      }
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_18 = NULL,x_18 = NULL;
  t = new_file_0_0(t);
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_18, term_g_29);
  t = open_file_0_0(t);
  t = term_w_29;
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_18, term_w_29);
  t = m_7(d_4, t_18, x_18, t);
  t = t_18;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm a_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_30 = ATgetArgument(t, 0);
      if(match_cons(c_30, sym_Stream_1))
        {
          a_19 = ATgetArgument(c_30, 0);
        }
      else
        _fail(t);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(a_19, d_19, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  t = xtc_new_file_0_0(t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, y_18);
  t = l_7(e_4, z_18, y_18, t);
  t = SSL_close_file(z_18);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_18);
  return(t);
}
ATerm i_20 (ATerm c_20, ATerm t)
{
  t = SSL_fclose(c_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL;
  g_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_20 = ATgetArgument(t, 0);
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_20);
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            t = i_20(g_20, t);
          }
      }
    }
  else
    {
      t = i_20(g_20, t);
    }
  return(t);
}
ATerm n_7 (ATerm k_29, ATerm t)
{
  t = SSL_read_term_from_stream(k_29);
  return(t);
}
ATerm o_7 (ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm k_20 = NULL;
  t = SSL_fopen(g_50, h_50);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_20);
  return(t);
}
ATerm _2_0 (ATerm y_60 (ATerm), ATerm z_60 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,n_0 = NULL,o_0 = NULL;
  u_20 = t;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_20);
  n_20 = t;
  t = o_20;
  t = y_60(t);
  s_20 = t;
  t = p_20;
  t = z_60(t);
  t_20 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_20, t_20);
  n_0 = t;
  t = SSLsetAnnotations(n_0, n_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_21 = NULL;
  t = SSL_stdin_stream();
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_21 = NULL;
  t = SSL_stdout_stream();
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_21 = NULL;
  t = SSL_stderr_stream();
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_21);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm t_21 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      t_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_21;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  t = SSL_is_string(y_21);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      ATerm g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL,s_11 = NULL;
        o_21 = t;
        t = SSL_explode_term(o_21);
        if(match_cons(t, sym__2))
          {
            ATerm j_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_30) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_30 = ATgetArgument(t, 1);
              if(((ATgetType(k_30) == AT_LIST) && !(ATisEmpty(k_30))))
                {
                  s_11 = ATgetFirst((ATermList) k_30);
                  {
                    ATerm l_30 = (ATerm) ATgetNext((ATermList) k_30);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_11;
        if(match_cons(t, sym_stderr_0))
          {
            t = s_11;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = s_11;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = s_11;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        {
          ATerm m_30 = t;
          int n_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_21 = NULL,s_21 = NULL;
              t = _2_0(f_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_21 = ATgetArgument(t, 0);
                  s_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_7(p_21, s_21, t);
              ;
              LocalPopChoice(n_30);
            }
          else
            {
              t = m_30;
              {
                ATerm u_21 = NULL,w_21 = NULL;
                t = _2_0(g_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_21 = ATgetArgument(t, 0);
                    w_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_7(u_21, w_21, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_o_30;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL,e_22 = NULL;
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_22 = NULL;
      f_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_22, term_u_30);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      t = debug_1_0(h_4, t);
      _fail(t);
    }
  b_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(e_22, t);
  d_22 = t;
  t = b_22;
  t = fclose_0_0(t);
  t = d_22;
  return(t);
}
ATerm p_7 (ATerm y_49, ATerm z_49, ATerm t)
{
  t = SSL_access(y_49, z_49);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_22 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_30;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm v_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_z_21);
      v_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, (ATerm) ATinsert(ATempty, term_z_21));
      t = p_7(m_22, v_22, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = v_93(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm q_7 (ATerm g_26, ATerm h_26, ATerm t)
{
  t = SSL_copy(g_26, h_26);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_12 = NULL;
        t = n_23;
        t = k_0(t);
        f_12 = t;
        {
          ATerm y_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(z_30);
            }
          else
            {
              t = y_30;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_23, f_12);
          t = q_7(o_23, f_12, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_23);
        }
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm a_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_12 = NULL;
              t = n_23;
              t = k_0(t);
              v_12 = t;
              {
                ATerm e_31 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_31 = t;
                    int h_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(h_31);
                      }
                    else
                      {
                        t = f_31;
                        {
                          ATerm k_31 = t;
                          int m_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(m_31);
                            }
                          else
                            {
                              t = k_31;
                              {
                                ATerm w_12 = NULL;
                                w_12 = t;
                                if((o_23 != t))
                                  {
                                    _fail(t);
                                  }
                                t = w_12;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_31;
                  }
                t = (ATerm) ATmakeAppl(sym__2, o_23, v_12);
                t = q_7(o_23, v_12, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_23);
              }
              ;
              LocalPopChoice(c_31);
            }
          else
            {
              t = a_31;
              t = n_23;
              t = k_0(t);
              if((o_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_23);
            }
        }
      }
  }
  return(t);
}
ATerm r_7 (ATerm z_46, ATerm a_47, ATerm t)
{
  ATerm s_23 = NULL,u_23 = NULL;
  s_23 = t;
  {
    ATerm n_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
        t = w_7(z_46, a_47, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_31 = ATgetFirst((ATermList) t);
            u_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_31);
        t = SSL_table_put(z_46, a_47, u_23);
        t = (ATerm) ATmakeAppl(sym__3, z_46, a_47, u_23);
      }
    else
      {
        t = n_31;
        t = SSL_table_remove(z_46, a_47);
        t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
      }
    t = s_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  v_23 = t;
  t = s_89(t);
  x_23 = t;
  {
    ATerm r_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_24 = NULL;
        t = term_j_29;
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, term_j_29);
        t = w_7(x_23, c_24, t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_23 = ATgetFirst((ATermList) t);
        y_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_29;
    a_24 = t;
    t = SSL_table_put(x_23, a_24, y_23);
    t = z_23;
    {
      ATerm i_4 (ATerm t)
      {
        ATerm d_24 = NULL;
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, d_24);
        t = r_7(x_23, d_24, t);
        return(t);
      }
      t = map_1_0(i_4, t);
      t = v_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_90(t);
      t = o_90(t);
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      t = o_90(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,m_24 = NULL,q_24 = NULL,s_24 = NULL,w_24 = NULL;
  k_24 = t;
  t = r_89(t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_24, term_j_29);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_31 = ATgetArgument(t, 0);
            ATerm a_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_29;
        b_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_24, term_j_29);
        t = w_7(m_24, b_25, t);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATempty;
      }
    q_24 = t;
    t = term_j_29;
    s_24 = t;
    t = (ATerm) ATinsert(CheckATermList(q_24), (ATerm) ATempty);
    w_24 = t;
    t = SSL_table_put(m_24, s_24, w_24);
    t = k_24;
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_25 = NULL;
      o_25 = t;
      t = SSL_remove(o_25);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  ATerm g_25 = NULL;
  t = begin_scope_1_0(j_4, t);
  {
    ATerm k_4 (ATerm t)
    {
      ATerm h_25 = NULL;
      h_25 = t;
      {
        ATerm d_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_25 = NULL,j_25 = NULL;
            t = term_a_30;
            i_25 = t;
            t = term_j_29;
            j_25 = t;
            t = term_g_32;
            t = w_7(i_25, j_25, t);
            ;
            LocalPopChoice(f_32);
          }
        else
          {
            t = d_32;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((g_25 != NULL) && (g_25 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              g_25 = ATgetFirst((ATermList) t);
            {
              ATerm k_32 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(g_25);
        t = map_1_0(l_4, t);
        t = h_25;
        t = end_scope_1_0(p_4, t);
      }
      return(t);
    }
    t = restore_always_2_0(w_92, k_4, t);
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm l_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = l_32;
      t = term_p_32;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL;
        t = term_x_20;
        t = get_config_0_0(t);
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_25);
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        t = term_v_30;
      }
    t = x_92(t);
    t = copy_to_1_0(x_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  r_25 = t;
  t = term_w_29;
  t = whoami_0_0(t);
  s_25 = t;
  t = term_e_20;
  t_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_32), s_25), term_s_32);
  u_25 = t;
  t = SSL_printnl(t_25, u_25);
  t = term_a_12;
  v_25 = t;
  t = SSL_exit(v_25);
  t = r_25;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  if(match_string(t, "-k"))
    {
      t = y_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_25;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm z_25 = NULL,c_26 = NULL,f_26 = NULL;
  z_25 = t;
  t = SSL_string_to_int(z_25);
  c_26 = t;
  t = term_v_32;
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_32, c_26);
  t = z_7(f_26, c_26, t);
  t = z_25;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, b_5, f_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  if(match_string(t, "-S"))
    {
      t = j_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_26;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  t = term_a_21;
  m_26 = t;
  t = term_d_33;
  n_26 = t;
  t = term_e_33;
  t = z_7(m_26, n_26, t);
  t = term_g_33;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  q_26 = t;
  t = SSL_string_to_int(q_26);
  r_26 = t;
  t = term_a_21;
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, r_26);
  t = z_7(s_26, r_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_26);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_l_33;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  t = term_m_33;
  t_26 = t;
  t = term_w_29;
  u_26 = t;
  t = term_n_33;
  t = z_7(t_26, u_26, t);
  t = term_o_33;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, k_5, l_5, t);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = t_33;
      {
        ATerm x_33 = t;
        int y_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_5, n_5, t_5, t);
            ;
            LocalPopChoice(y_33);
          }
        else
          {
            t = x_33;
            t = Option_3_0(v_5, x_5, y_5, t);
          }
      }
    }
  return(t);
}
ATerm z_7 (ATerm u_48, ATerm v_48, ATerm t)
{
  ATerm x_26 = NULL;
  t = term_z_33;
  x_26 = t;
  t = SSL_table_put(x_26, u_48, v_48);
  t = (ATerm) ATmakeAppl(sym__3, term_z_33, u_48, v_48);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_27 = NULL,e_27 = NULL,g_27 = NULL;
      t = term_w_29;
      t = d_0(t);
      c_27 = t;
      t = term_a_34;
      e_27 = t;
      t = term_c_34;
      g_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_34, term_c_34, c_27);
      t = x_7(e_27, g_27, c_27, t);
      _fail(t);
    }
  else
    {
      ATerm l_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_27 = ATgetFirst((ATermList) t);
          b_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_27;
      t = a_0(t);
      t = term_w_29;
      t = c_0(t);
      l_27 = t;
      t = (ATerm) ATinsert(CheckATermList(b_27), l_27);
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  if(match_string(t, "-o"))
    {
      t = o_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_27;
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  p_27 = t;
  t = term_w_20;
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, p_27);
  t = z_7(q_27, p_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_27);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, h_6, j_6, t);
  return(t);
}
ATerm x_7 (ATerm u_46, ATerm v_46, ATerm t_46, ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_46, v_46);
  {
    ATerm e_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_34 = ATgetArgument(t, 0);
            ATerm k_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_46, v_46);
        t = w_7(u_46, v_46, t);
        ;
        LocalPopChoice(i_34);
      }
    else
      {
        t = e_34;
        t = (ATerm) ATempty;
      }
    t_27 = t;
    t = (ATerm) ATinsert(CheckATermList(t_27), t_46);
    u_27 = t;
    t = SSL_table_put(u_46, v_46, u_27);
    t = s_27;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
      t = term_w_29;
      t = j_0(t);
      h_28 = t;
      t = term_a_34;
      i_28 = t;
      t = term_c_34;
      j_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_34, term_c_34, h_28);
      t = x_7(i_28, j_28, h_28, t);
      _fail(t);
    }
  else
    {
      ATerm o_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_28 = ATgetFirst((ATermList) t);
          e_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_28 = ATgetFirst((ATermList) t);
          g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_28;
      t = h_0(t);
      t = f_28;
      t = i_0(t);
      o_28 = t;
      t = (ATerm) ATinsert(CheckATermList(g_28), o_28);
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  if(match_string(t, "-i"))
    {
      t = q_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_28;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  r_28 = t;
  t = term_x_20;
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, r_28);
  t = z_7(s_28, r_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_28);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_6, o_6, p_6, t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL;
  t = term_y_28;
  v_28 = t;
  t = term_w_29;
  w_28 = t;
  t = term_o_34;
  t = z_7(v_28, w_28, t);
  t = term_f_35;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm x_28 = NULL,z_28 = NULL;
  t = term_u_28;
  x_28 = t;
  t = term_w_29;
  z_28 = t;
  t = term_h_35;
  t = z_7(x_28, z_28, t);
  t = term_l_35;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_o_35;
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_6, w_6, x_6, t);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      t = Option_3_0(m_8, n_8, p_8, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_29;
  t = whoami_0_0(t);
  a_29 = t;
  t = term_e_20;
  b_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_35), a_29);
  c_29 = t;
  t = SSL_printnl(b_29, c_29);
  t = term_a_12;
  d_29 = t;
  t = SSL_exit(d_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_35;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_7 (ATerm p_44, ATerm q_44, ATerm t)
{
  ATerm t_35 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_44, q_44);
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = t_35;
      t = SSL_addr(p_44, q_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_85(t);
      ;
      LocalPopChoice(k_36);
    }
  else
    {
      t = j_36;
      {
        ATerm n_29 = NULL,o_29 = NULL,s_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_29 = ATgetFirst((ATermList) t);
            o_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_29;
        t = foldr_2_0(u_85, v_85, t);
        s_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_29, s_29);
        t = v_85(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(n_13, o_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_30 = NULL,f_13 = NULL,g_13 = NULL;
  t = times_0_0(t);
  f_13 = t;
  t = SSL_explode_term(f_13);
  if(match_cons(t, sym__2))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13;
  t = foldr_2_0(y_8, z_8, t);
  b_30 = t;
  t = SSL_TicksToSeconds(b_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_30 = NULL,s_30 = NULL,t_30 = NULL;
  p_30 = t;
  if(match_cons(t, sym__2))
    {
      s_30 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_30;
        if((s_30 != t))
          {
            _fail(t);
          }
        t = p_30;
        ;
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        t = (ATerm) ATmakeAppl(sym__2, s_30, t_30);
        {
          ATerm o_36 = t;
          int p_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_30, t_30);
              ;
              LocalPopChoice(p_36);
            }
          else
            {
              t = o_36;
              t = SSL_gtr(s_30, t_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_30, t_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_90 (ATerm), ATerm t)
{
  ATerm q_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_31 = NULL,d_31 = NULL;
      b_31 = t;
      t = term_a_21;
      t = get_config_0_0(t);
      d_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_31, term_a_12);
      t = geq_0_0(t);
      t = b_31;
      t = z_90(t);
      ;
      LocalPopChoice(v_36);
    }
  else
    {
      t = q_36;
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm g_31 = NULL,i_31 = NULL,j_31 = NULL,l_31 = NULL;
  t = run_time_0_0(t);
  g_31 = t;
  t = term_w_29;
  t = whoami_0_0(t);
  i_31 = t;
  t = term_e_20;
  j_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_36), g_31), term_v_11), i_31);
  l_31 = t;
  t = SSL_printnl(j_31, l_31);
  t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_36), g_31), term_v_11), i_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_33;
  o_31 = t;
  t = SSL_exit(o_31);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
      t = fetch_1_0(j_9, t);
    }
  t = y_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_31 = ATgetFirst((ATermList) t);
      t_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_32 = NULL,h_32 = NULL;
        t = t_31;
        t = g_0(t);
        e_32 = t;
        t = s_31;
        t = e_0(t);
        h_32 = t;
        t = t_31;
        {
          ATerm k_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_32), h_32);
            return(t);
          }
          t = reverse_acc_2_0(e_0, k_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_29;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_70 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,m_32 = NULL,n_32 = NULL,r_0 = NULL,s_0 = NULL;
  n_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_32);
  i_32 = t;
  t = j_32;
  t = t_70(t);
  m_32 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_32);
  r_0 = t;
  t = SSLsetAnnotations(r_0, i_32);
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_32), term_m_37);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_32 = NULL,x_32 = NULL;
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      t = fetch_1_0(o_9, t);
    }
  t = term_p_37;
  t = echo_0_0(t);
  t = term_a_34;
  u_32 = t;
  t = term_c_34;
  x_32 = t;
  t = term_q_37;
  t = w_7(u_32, x_32, t);
  t = reverse_acc_2_0(_id, p_9, t);
  t = map_1_0(q_9, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,t_0 = NULL,u_0 = NULL;
  c_33 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_33);
  z_32 = t;
  t = a_33;
  t = u_70(t);
  b_33 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_33);
  t_0 = t;
  t = SSLsetAnnotations(t_0, z_32);
  return(t);
}
ATerm fetch_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm f_33 (ATerm t)
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_79, _id, t);
        ;
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        t = Cons_2_0(_id, f_33, t);
      }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_37 = ATgetFirst((ATermList) t);
                ATerm w_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_33;
          }
        ;
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        t = (ATerm) ATinsert(ATempty, h_33);
      }
    i_33 = t;
    t = term_p_32;
    j_33 = t;
    t = SSL_printnl(j_33, i_33);
    t = h_33;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_35;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_7 (ATerm l_43, ATerm m_43, ATerm t)
{
  t = SSL_strcat(l_43, m_43);
  return(t);
}
ATerm debug_1_0 (ATerm h_75 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,s_33 = NULL,u_33 = NULL;
  p_33 = t;
  t = h_75(t);
  q_33 = t;
  t = term_e_20;
  s_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_33), q_33);
  u_33 = t;
  t = SSL_printnl(s_33, u_33);
  t = p_33;
  return(t);
}
ATerm map_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm v_33 (ATerm t)
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        t = Cons_2_0(c_79, v_33, t);
      }
    return(t);
  }
  t = v_33(t);
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_34 = NULL;
      b_34 = t;
      t = SSL_is_string(b_34);
      ;
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_9, t);
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            {
              ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
              f_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_34 = ATgetArgument(t, 0);
                  t = g_34;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_34 = ATgetArgument(t, 0);
                      t = g_34;
                      {
                        ATerm g_38 = t;
                        int h_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_38);
                          }
                        else
                          {
                            t = g_38;
                            t = debug_1_0(t_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_34 = NULL,m_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_34 = ATgetArgument(t, 0);
                          h_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_34;
                      t = eval_config_0_0(t);
                      l_34 = t;
                      t = h_34;
                      t = eval_config_0_0(t);
                      m_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_34, m_34);
                      t = v_7(l_34, m_34, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_7 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_table_get(l_48, m_48);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL;
  p_34 = t;
  t = term_z_33;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_33, p_34);
  t = w_7(q_34, p_34, t);
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_34 = NULL,s_34 = NULL;
        t = eval_config_0_0(t);
        r_34 = t;
        t = term_z_33;
        s_34 = t;
        t = SSL_table_put(s_34, p_34, r_34);
        t = r_34;
        ;
        LocalPopChoice(j_38);
      }
    else
      {
        t = i_38;
      }
  }
  return(t);
}
ATerm v_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t = term_k_38;
  t_34 = t;
  t = term_w_29;
  u_34 = t;
  t = term_l_38;
  t = z_7(t_34, u_34, t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm a_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  t = term_k_38;
  v_34 = t;
  t = term_w_29;
  w_34 = t;
  t = term_l_38;
  t = z_7(v_34, w_34, t);
  t = term_n_38;
  x_34 = t;
  t = term_w_29;
  y_34 = t;
  t = term_o_38;
  t = z_7(x_34, y_34, t);
  t = term_p_38;
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_9, w_9, x_9, t);
      ;
      LocalPopChoice(s_38);
    }
  else
    {
      t = r_38;
      t = Option_3_0(a_10, d_10, e_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,v_0 = NULL,w_0 = NULL;
  e_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_35 = ATgetFirst((ATermList) t);
      b_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_35);
  z_34 = t;
  t = a_35;
  t = n_65(t);
  c_35 = t;
  t = b_35;
  t = o_65(t);
  d_35 = t;
  w_0 = t;
  t = (ATerm) ATinsert(CheckATermList(d_35), c_35);
  v_0 = t;
  t = SSLsetAnnotations(v_0, z_34);
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL;
  j_35 = t;
  t = term_s_35;
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_35, j_35);
  t = z_7(k_35, j_35, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, j_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_96 (ATerm), ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_38;
        t = w_96(t);
        ;
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
      }
    t = i_35;
    {
      ATerm j_10 (ATerm t)
      {
        ATerm w_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_38 = t;
            int z_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_38);
              }
            else
              {
                t = y_38;
                t = w_96(t);
                t = Cons_2_0(_id, j_10, t);
              }
            ;
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            {
              ATerm m_35 = NULL,n_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_35 = ATgetFirst((ATermList) t);
                  n_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_35), (ATerm) ATmakeAppl(sym_Undefined_1, m_35));
            }
          }
        return(t);
      }
      t = Cons_2_0(h_10, j_10, t);
    }
  }
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm b_36 = NULL;
  b_36 = t;
  if(match_string(t, "--help"))
    {
      t = b_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_36;
        }
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  t = term_l_37;
  e_36 = t;
  t = term_w_29;
  f_36 = t;
  t = term_a_39;
  t = z_7(e_36, f_36, t);
  t = term_b_39;
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_c_39;
  return(t);
}
ATerm s_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  u_35 = t;
  t = term_a_34;
  x_35 = t;
  t = term_c_34;
  y_35 = t;
  t = (ATerm) ATempty;
  z_35 = t;
  t = SSL_table_put(x_35, y_35, z_35);
  t = u_35;
  {
    ATerm n_10 (ATerm t)
    {
      ATerm d_39 = t;
      int e_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_96(t);
          ;
          LocalPopChoice(e_39);
        }
      else
        {
          t = d_39;
          {
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_10, q_10, r_10, t);
                ;
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_10, t);
    {
      ATerm h_39 = t;
      int i_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_36 = NULL;
          r_36 = t;
          {
            ATerm j_39 = t;
            int k_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_16 = NULL;
                t = r_36;
                {
                  ATerm l_39 = t;
                  int m_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_37;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_39);
                    }
                  else
                    {
                      t = l_39;
                      t = fetch_1_0(s_10, t);
                    }
                  t = r_36;
                  t = default_system_usage_0_0(t);
                  t = term_d_33;
                  z_16 = t;
                  t = SSL_exit(z_16);
                }
                ;
                LocalPopChoice(k_39);
              }
            else
              {
                t = j_39;
                {
                  ATerm w_17 = NULL;
                  t = term_k_38;
                  t = get_config_0_0(t);
                  t = r_36;
                  t = default_system_about_0_0(t);
                  t = term_d_33;
                  w_17 = t;
                  t = SSL_exit(w_17);
                }
              }
          }
          ;
          LocalPopChoice(i_39);
        }
      else
        {
          t = h_39;
          {
            ATerm n_39 = t;
            int o_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
                ATerm v_10 (ATerm t)
                {
                  ATerm w_10 (ATerm t)
                  {
                    if(((v_35 != NULL) && (v_35 != t)))
                      _fail(t);
                    else
                      v_35 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_10, t);
                  return(t);
                }
                t = fetch_1_0(v_10, t);
                t = term_e_20;
                s_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_35)), term_p_39);
                t_36 = t;
                t = SSL_printnl(s_36, t_36);
                t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_35)), term_p_39));
                t = default_system_usage_0_0(t);
                t = term_a_12;
                u_36 = t;
                t = SSL_exit(u_36);
                ;
                LocalPopChoice(o_39);
              }
            else
              {
                t = n_39;
              }
          }
        }
      w_35 = t;
      t = term_a_34;
      a_36 = t;
      t = SSL_table_destroy(a_36);
      t = w_35;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  t = parse_options_1_0(a_95, t);
  x_36 = t;
  t = term_q_39;
  y_36 = t;
  t = SSL_table_create(y_36);
  t = term_q_39;
  z_36 = t;
  t = term_r_39;
  a_37 = t;
  t = SSL_table_put(z_36, a_37, x_36);
  t = x_36;
  t = c_95(t);
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_95, t);
        ;
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        {
          ATerm u_39 = t;
          int v_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_95(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_39);
            }
          else
            {
              t = u_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm w_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_to_adot_options_0_0(t);
      ;
      LocalPopChoice(x_39);
    }
  else
    {
      t = w_39;
      {
        ATerm y_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(z_39);
          }
        else
          {
            t = y_39;
            {
              ATerm a_40 = t;
              int b_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(b_40);
                }
              else
                {
                  t = a_40;
                  {
                    ATerm c_40 = t;
                    int d_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(d_11, e_11, f_11, t);
                        ;
                        LocalPopChoice(d_40);
                      }
                    else
                      {
                        t = c_40;
                        {
                          ATerm e_40 = t;
                          int f_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(f_40);
                            }
                          else
                            {
                              t = e_40;
                              t = keep_option_0_0(t);
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
ATerm c_11 (ATerm t)
{
  t = xtc_io_1_0(g_11, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  t = term_g_40;
  b_37 = t;
  t = term_w_29;
  c_37 = t;
  t = term_h_40;
  t = z_7(b_37, c_37, t);
  t = term_i_40;
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_j_40;
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = xtc_io_transform_1_0(to_adot_0_0, t);
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = t;
        int n_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(n_40);
          }
        else
          {
            t = m_40;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(l_40);
        t = xtc_transform_file_2_0(l_11, m_11, t);
      }
    else
      {
        t = k_40;
        t = xtc_transform_term_2_0(n_11, o_11, t);
      }
    {
      ATerm o_40 = t;
      int p_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(r_40);
            }
          else
            {
              t = q_40;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(p_40);
          t = xtc_transform_file_2_0(q_11, r_11, t);
        }
      else
        {
          t = o_40;
          t = xtc_transform_term_2_0(t_11, u_11, t);
        }
    }
  }
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_s_40;
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm d_37 = NULL;
  t = term_t_40;
  t = xtc_find_0_0(t);
  d_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_37), term_u_40);
  return(t);
}
ATerm n_11 (ATerm t)
{
  t = term_s_40;
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm e_37 = NULL;
  t = term_t_40;
  t = xtc_find_0_0(t);
  e_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_37), term_u_40);
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_v_40;
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_v_40;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm term_to_dot_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_10, default_usage_0_0, _id, c_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = term_to_dot_0_0(t);
  return(t);
}
