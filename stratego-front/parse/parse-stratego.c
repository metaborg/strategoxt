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
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
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
  sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
  ATprotectSymbol(sym_Meta_1);
  sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
  ATprotectSymbol(sym_Syntax_1);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_g_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_z_54;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_i_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_j_51;
ATerm term_s_50;
ATerm term_p_50;
ATerm term_n_50;
ATerm term_y_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_c_48;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_e_44;
ATerm term_z_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_m_43;
ATerm term_i_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_b_43;
ATerm term_j_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_p_41;
ATerm term_j_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_v_40;
ATerm term_v_38;
ATerm term_o_38;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_n_36;
ATerm term_l_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_w_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_i_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_a_34;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_j_33;
ATerm term_h_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_n_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_x_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_v_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_f_21;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_j_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_w_18;
ATerm term_x_6;
void init_constant_terms (void)
{
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_w_18, term_u_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_j_20, term_q_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_l_21, term_m_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_21, term_a_22, term_b_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_22, term_f_22, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_22, term_k_22, term_m_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_22, term_q_22, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_22, term_u_22, term_v_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_22, term_a_23, term_b_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_23, term_f_23, term_i_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_23, term_n_23, term_o_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_23, term_t_23, term_v_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_23, term_g_24, term_h_24);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_25, term_f_25, term_g_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_25, term_k_25, term_l_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_25, term_p_25, term_r_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_25, term_z_25, term_a_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_26, term_f_26, term_j_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_26, term_s_26, term_t_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_26, term_z_26, term_a_27);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_27, term_d_27, term_e_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_27, term_k_27, term_l_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_27, term_p_27, term_r_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_27, term_u_27, term_v_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_27, term_d_28, term_e_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_28, term_j_28, term_k_28);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_28, term_o_28, term_p_28);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_28, term_s_28, term_u_28);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_47);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym__3, term_o_38, term_w_51, term_o_30);
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm o_0 (ATerm r_72 (ATerm), ATerm t_0, ATerm u_0, ATerm);
ATerm y_3 (ATerm);
ATerm q_0 (ATerm z_0, ATerm);
ATerm xtc_transform_term_2_0 (ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm w_0 (ATerm f_3, ATerm);
ATerm x_0 (ATerm i_3, ATerm);
ATerm fork_0_0 (ATerm);
ATerm y_0 (ATerm g_71 (ATerm), ATerm o_4, ATerm);
ATerm c_1 (ATerm s_90 (ATerm), ATerm t_4, ATerm);
ATerm f_1 (ATerm d_87 (ATerm), ATerm z_4, ATerm b_5, ATerm);
ATerm h_6 (ATerm s_5, ATerm);
ATerm k_6 (ATerm u_5, ATerm z_5, ATerm a_6, ATerm);
ATerm c_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm i_1 (ATerm l_8, ATerm m_8, ATerm);
ATerm j_1 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm q_8, ATerm);
ATerm guarantee_extension_1_0 (ATerm h_85 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm k_1 (ATerm x_10, ATerm z_10, ATerm);
ATerm m_1 (ATerm b_70 (ATerm), ATerm j_11, ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm p_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm w_76 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm n_1 (ATerm f_85 (ATerm), ATerm f_13, ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm p_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm a_9 (ATerm);
ATerm c_9 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_77 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm q_14 (ATerm b_14, ATerm);
ATerm conc_0_0 (ATerm);
ATerm o_1 (ATerm s_14, ATerm t_14, ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm t_1 (ATerm z_14, ATerm);
ATerm u_1 (ATerm c_15, ATerm);
ATerm if_verbose5_1_0 (ATerm l_88 (ATerm), ATerm);
ATerm w_1 (ATerm v_15, ATerm);
ATerm x_1 (ATerm z_15, ATerm a_16, ATerm);
ATerm if_verbose4_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm m_88 (ATerm), ATerm);
ATerm y_1 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm o_16, ATerm p_16, ATerm);
ATerm a_2 (ATerm o_80 (ATerm), ATerm r_16, ATerm s_16, ATerm);
ATerm l_9 (ATerm);
ATerm b_2 (ATerm w_16, ATerm x_16, ATerm y_16, ATerm);
ATerm c_2 (ATerm o_88 (ATerm), ATerm s_17, ATerm r_17, ATerm);
ATerm l_18 (ATerm c_18, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_2 (ATerm k_59 (ATerm), ATerm l_59 (ATerm), ATerm u_18, ATerm q_18, ATerm r_18, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_9 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm s_9 (ATerm);
ATerm u_9 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm i_2 (ATerm i_20, ATerm);
ATerm filter_1_0 (ATerm f_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm z_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm k_10 (ATerm);
ATerm s_10 (ATerm);
ATerm u_10 (ATerm);
ATerm y_10 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm e_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm l_11 (ATerm);
ATerm t_11 (ATerm);
ATerm w_11 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm q_2 (ATerm y_23, ATerm z_23, ATerm);
ATerm r_2 (ATerm a_87 (ATerm), ATerm l_24, ATerm);
ATerm restore_always_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm);
ATerm s_2 (ATerm z_86 (ATerm), ATerm x_24, ATerm);
ATerm y_11 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm f_12 (ATerm);
ATerm xtc_io_1_0 (ATerm f_90 (ATerm), ATerm);
ATerm t_2 (ATerm h_26, ATerm);
ATerm g_12 (ATerm);
ATerm j_12 (ATerm);
ATerm k_12 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm v_12 (ATerm);
ATerm a_13 (ATerm);
ATerm d_13 (ATerm);
ATerm j_13 (ATerm);
ATerm p_13 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_2 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm z_27, ATerm);
ATerm q_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm c_14 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm y_2 (ATerm e_29, ATerm f_29, ATerm g_29, ATerm);
ATerm z_2 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm h_30, ATerm);
ATerm e_14 (ATerm);
ATerm h_14 (ATerm);
ATerm j_14 (ATerm);
ATerm l_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm h_15 (ATerm);
ATerm j_15 (ATerm);
ATerm parse_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_15 (ATerm);
ATerm r_15 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm s_15 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_15 (ATerm);
ATerm need_help_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm b_3 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm o_33, ATerm);
ATerm d_16 (ATerm);
ATerm h_16 (ATerm);
ATerm j_16 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_76 (ATerm), ATerm);
ATerm h_3 (ATerm p_34, ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_3 (ATerm p_72 (ATerm), ATerm y_34, ATerm);
ATerm map_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm m_16 (ATerm);
ATerm e_17 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm l_3 (ATerm z_36, ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm);
ATerm m_3 (ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm c_38, ATerm t_37, ATerm x_37, ATerm);
ATerm l_17 (ATerm);
ATerm n_3 (ATerm e_94 (ATerm), ATerm j_38, ATerm);
ATerm o_17 (ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm v_17 (ATerm);
ATerm o_3 (ATerm d_94 (ATerm), ATerm y_38, ATerm);
ATerm option_wrap_4_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm g_18 (ATerm);
ATerm k_18 (ATerm);
ATerm n_18 (ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL;
  t = term_x_6;
  {
    ATerm x_13 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_3 = NULL;
        r_3 = t;
        t = l_3(r_3, t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = x_13;
        t = term_w_18;
      }
    c_0 = t;
    e_0 = t;
    t = term_w_18;
    p_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_0, term_w_18);
    {
      ATerm y_18 = t;
      int z_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(e_0, p_0);
          ;
          LocalPopChoice(z_18);
        }
      else
        {
          t = y_18;
          t = SSL_subtr(e_0, p_0);
        }
      s_0 = t;
      t = SSL_int_to_string(s_0);
      r_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, r_0), term_x_6);
    }
  }
  return(t);
}
ATerm o_0 (ATerm r_72 (ATerm), ATerm t_0, ATerm u_0, ATerm t)
{
  ATerm v_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_0, term_c_19);
  t = open_stream_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, u_0);
  t = r_72(t);
  t = fclose_0_0(t);
  t = u_0;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_19 = ATgetArgument(t, 0);
      if(match_cons(e_19, sym_Stream_1))
        {
          v_3 = ATgetArgument(e_19, 0);
        }
      else
        _fail(t);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(v_3, w_3);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_3);
  return(t);
}
ATerm q_0 (ATerm z_0, ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,s_3 = NULL,t_3 = NULL;
  t = xtc_new_file_0_0(t);
  a_1 = t;
  s_3 = t;
  t = z_0;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, z_0);
  t = o_0(y_3, s_3, t_3, t);
  t = a_1;
  b_1 = t;
  t = SSL_close_file(b_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm t)
{
  ATerm b_4 = NULL;
  b_4 = t;
  t = q_0(b_4, t);
  t = xtc_transform_file_2_0(b_91, c_91, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm p_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_2 = ATgetArgument(t, 0);
      {
        ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
        t = u_2;
        m_4 = t;
        t = SSL_int_to_string(m_4);
        l_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_19), l_4), term_f_19);
        n_4 = t;
        t = SSL_concat_strings(n_4);
      }
    }
  else
    {
      ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_2 = ATgetArgument(t, 0);
          v_2 = ATgetArgument(t, 1);
          w_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_2;
      q_5 = t;
      t = SSL_int_to_string(q_5);
      p_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_2), term_j_19), p_5), term_i_19), u_2);
      r_5 = t;
      t = SSL_concat_strings(r_5);
    }
  return(t);
}
ATerm w_0 (ATerm f_3, ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_28), term_q_28), term_m_28), term_f_28), term_w_27), term_s_27), term_m_27), term_i_27), term_b_27), term_w_26), term_m_26), term_b_26), term_s_25), term_m_25), term_i_25), term_v_24), term_w_23), term_p_23), term_k_23), term_c_23), term_x_22), term_s_22), term_n_22), term_h_22), term_c_22), term_n_21), term_s_20), term_x_19);
      {
        ATerm z_3 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_28 = ATgetArgument(t, 0);
              if((f_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm z_28 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_elem_1_0(z_3, t);
      }
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, f_3);
    }
  return(t);
}
ATerm x_0 (ATerm i_3, ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 = NULL,n_6 = NULL,q_6 = NULL,r_6 = NULL,y_6 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm c_29 = ATgetArgument(t, 0);
          g_4 = ATgetArgument(t, 1);
          {
            ATerm d_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = g_4;
      {
        ATerm j_29 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_29;
          }
        y_6 = t;
        t = w_0(y_6, t);
        t = signal_to_descr_0_0(t);
        n_6 = t;
        t = term_k_29;
        q_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, n_6), term_o_29);
        r_6 = t;
        t = SSL_printnl(q_6, r_6);
        t = (ATerm) ATmakeAppl(sym__2, term_k_29, (ATerm) ATinsert(ATinsert(ATempty, n_6), term_o_29));
      }
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
    }
  t = i_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm y_0 (ATerm g_71 (ATerm), ATerm o_4, ATerm t)
{
  ATerm p_4 = NULL;
  t = fork_0_0(t);
  p_4 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_4;
        t = g_71(t);
        ;
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        {
          ATerm s_4 = NULL,c_7 = NULL;
          t = p_4;
          s_4 = t;
          t = SSL_waitpid(s_4);
          c_7 = t;
          t = x_0(c_7, t);
          if(match_cons(t, sym_WaitStatus_3))
            {
              ATerm r_29 = ATgetArgument(t, 0);
              if(((ATgetType(r_29) != AT_INT) || (ATgetInt((ATermInt) r_29) != 0)))
                _fail(t);
              {
                ATerm s_29 = ATgetArgument(t, 1);
              }
              {
                ATerm t_29 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = o_4;
        }
      }
  }
  return(t);
}
ATerm c_1 (ATerm s_90 (ATerm), ATerm t_4, ATerm t)
{
  ATerm v_4 = NULL,d_7 = NULL;
  t = s_90(t);
  t = xtc_find_0_0(t);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, t_4);
  d_7 = t;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm f_7 = NULL,g_7 = NULL;
      t = v_4;
      f_7 = t;
      t = t_4;
      g_7 = t;
      t = SSL_execvp(f_7, g_7);
      return(t);
    }
    t = y_0(a_4, d_7, t);
    t = t_4;
  }
  return(t);
}
ATerm f_1 (ATerm d_87 (ATerm), ATerm z_4, ATerm b_5, ATerm t)
{
  ATerm c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,y_7 = NULL,a_8 = NULL,c_8 = NULL;
  t = d_87(t);
  c_5 = t;
  y_7 = t;
  t = z_4;
  a_8 = t;
  t = b_5;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_5, z_4, b_5);
  t = y_2(y_7, a_8, c_8, t);
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_5 = NULL,l_5 = NULL;
        t = c_5;
        j_5 = t;
        t = term_x_29;
        l_5 = t;
        t = SSL_table_get(j_5, l_5);
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_5 = ATgetFirst((ATermList) t);
        f_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = c_5;
    g_5 = t;
    t = term_x_29;
    h_5 = t;
    t = (ATerm) ATinsert(CheckATermList(f_5), (ATerm) ATinsert(CheckATermList(e_5), z_4));
    i_5 = t;
    t = SSL_table_put(g_5, h_5, i_5);
    t = (ATerm) ATmakeAppl(sym__2, z_4, b_5);
  }
  return(t);
}
ATerm h_6 (ATerm s_5, ATerm t)
{
  ATerm e_8 = NULL;
  t = s_5;
  {
    ATerm z_29 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_30 = ATgetArgument(t, 0);
            ATerm d_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_29;
      }
    t = term_e_30;
    e_8 = t;
    t = k_3(c_4, e_8, t);
    t = (ATerm) ATmakeAppl(sym__2, s_5, term_c_19);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm k_6 (ATerm u_5, ATerm z_5, ATerm a_6, ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL;
  t = u_5;
  c_6 = t;
  t = z_5;
  d_6 = t;
  t = SSL_open_file(c_6, d_6);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
      {
        ATerm g_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_6(e_6, t);
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = g_30;
            t = k_6(f_6, g_6, e_6, t);
          }
      }
    }
  else
    {
      t = h_6(e_6, t);
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
  ATerm m_6 = NULL,o_6 = NULL;
  t = term_o_30;
  t = new_0_0(t);
  m_6 = t;
  t = term_p_30;
  o_6 = t;
  t = SSL_strcat(m_6, o_6);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_6 = NULL,j_8 = NULL,o_8 = NULL;
        w_6 = t;
        j_8 = t;
        t = (ATerm) ATinsert(ATempty, term_u_30);
        o_8 = t;
        t = SSL_access(j_8, o_8);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
      }
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_7 = NULL,r_8 = NULL,s_8 = NULL;
  t = new_file_0_0(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_7, term_c_19);
  t = open_file_0_0(t);
  t = a_7;
  r_8 = t;
  t = term_o_30;
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_7, term_o_30);
  t = f_1(d_4, r_8, s_8, t);
  t = a_7;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL;
  r_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_9 = NULL,n_9 = NULL,t_9 = NULL,v_9 = NULL;
      t = r_7;
      t = xtc_new_file_0_0(t);
      m_9 = t;
      t = n_0(t);
      n_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_9, (ATerm) ATinsert(ATinsert(ATempty, m_9), term_y_30));
      t = conc_0_0(t);
      v_9 = t;
      t = c_1(m_0, v_9, t);
      t = m_9;
      t_9 = t;
      t = SSL_close_file(t_9);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_9);
    }
  else
    {
      ATerm m_10 = NULL,o_10 = NULL,q_10 = NULL,w_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_7;
      t = xtc_new_file_0_0(t);
      m_10 = t;
      t = n_0(t);
      o_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_10), term_y_30), s_7), term_z_30));
      t = conc_0_0(t);
      w_10 = t;
      t = c_1(m_0, w_10, t);
      t = m_10;
      q_10 = t;
      t = SSL_close_file(q_10);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_10);
    }
  return(t);
}
ATerm i_1 (ATerm l_8, ATerm m_8, ATerm t)
{
  ATerm n_8 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_8), term_a_31), l_8);
  n_8 = t;
  t = SSL_concat_strings(n_8);
  return(t);
}
ATerm j_1 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm q_8, ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL;
  t = m_75(t);
  t_8 = t;
  t = q_8;
  t = n_75(t);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_8, u_8);
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm h_85 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,r_12 = NULL,s_12 = NULL,d_12 = NULL;
  z_11 = t;
  t = n_1(_id, z_11, t);
  d_12 = t;
  {
    ATerm e_4 (ATerm t)
    {
      t = term_o_30;
      t = h_85(t);
      return(t);
    }
    t = j_1(_id, e_4, d_12, t);
    if(match_cons(t, sym__2))
      {
        r_12 = ATgetArgument(t, 0);
        s_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_1(r_12, s_12, t);
  }
  return(t);
}
ATerm if_keep1_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL,y_8 = NULL,e_13 = NULL;
      v_8 = t;
      t = term_d_31;
      e_13 = t;
      t = l_3(e_13, t);
      y_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_8, term_w_18);
      t = geq_0_0(t);
      t = v_8;
      t = k_89(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_8 = NULL,b_9 = NULL,l_13 = NULL;
      z_8 = t;
      t = term_x_6;
      l_13 = t;
      t = l_3(l_13, t);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_9, term_l_21);
      t = geq_0_0(t);
      t = z_8;
      t = j_88(t);
      ;
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,c_10 = NULL;
  z_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL,a_14 = NULL,d_14 = NULL;
        t = z_9;
        t = l_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = c_10;
        z_13 = t;
        t = term_n_31;
        a_14 = t;
        t = SSL_copy(z_13, a_14);
        t = c_10;
        d_14 = t;
        t = SSL_remove(d_14);
        t = term_n_31;
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        {
          ATerm q_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_14 = NULL,d_15 = NULL,e_15 = NULL;
              t = z_9;
              t = l_0(t);
              r_14 = t;
              {
                ATerm t_31 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(w_31);
                      }
                    else
                      {
                        t = u_31;
                        {
                          ATerm f_15 = NULL;
                          f_15 = t;
                          if((c_10 != t))
                            {
                              _fail(t);
                            }
                          t = f_15;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_31;
                  }
                t = c_10;
                d_15 = t;
                t = r_14;
                e_15 = t;
                t = SSL_rename(d_15, e_15);
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_14);
              }
              ;
              LocalPopChoice(s_31);
            }
          else
            {
              t = q_31;
              t = z_9;
              t = l_0(t);
              if((c_10 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_10);
            }
        }
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm l_15 = NULL;
  l_15 = t;
  t = k_3(h_4, l_15, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm n_10 = NULL,p_10 = NULL,r_10 = NULL;
  n_10 = t;
  t = term_k_29;
  p_10 = t;
  t = (ATerm) ATinsert(ATempty, term_b_32);
  r_10 = t;
  t = SSL_printnl(p_10, r_10);
  t = n_10;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm x_17 = NULL;
  t = term_f_32;
  x_17 = t;
  t = l_3(x_17, t);
  t = map_1_0(w_4, t);
  t = concat_0_0(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_10), term_f_32);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm d_18 = NULL;
  t = term_f_32;
  d_18 = t;
  t = l_3(d_18, t);
  t = map_1_0(a_5, t);
  t = concat_0_0(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_10), term_f_32);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  t = if_verbose6_1_0(f_4, t);
  g_10 = t;
  t = guarantee_extension_1_0(i_4, t);
  h_10 = t;
  t = g_10;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 = NULL,p_15 = NULL;
        t = h_10;
        p_15 = t;
        t = m_1(j_4, p_15, t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_10);
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        {
          ATerm l_10 = NULL;
          t = if_verbose2_1_0(k_4, t);
          t = guarantee_extension_1_0(q_4, t);
          l_10 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, l_10);
          {
            ATerm j_32 = t;
            int p_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_16 = NULL,u_16 = NULL,v_16 = NULL,d_1 = NULL,e_1 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm q_32 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_10);
                g_16 = t;
                t = SSLgetAnnotations(g_16);
                u_16 = t;
                t = l_10;
                v_16 = t;
                e_1 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_16);
                d_1 = t;
                t = SSLsetAnnotations(d_1, u_16);
                LocalPopChoice(p_32);
                t = xtc_transform_file_2_0(r_4, u_4, t);
              }
            else
              {
                t = j_32;
                t = xtc_transform_term_2_0(x_4, y_4, t);
              }
            {
              ATerm r_32 = t;
              int u_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_32 = t;
                  int y_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_18 = NULL,f_18 = NULL,m_18 = NULL,h_19 = NULL,o_18 = NULL,x_18 = NULL,g_1 = NULL,h_1 = NULL;
                      e_18 = t;
                      if(match_cons(t, sym_FILE_1))
                        {
                          f_18 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      h_19 = t;
                      t = e_18;
                      m_18 = t;
                      t = SSLgetAnnotations(m_18);
                      o_18 = t;
                      t = f_18;
                      x_18 = t;
                      h_1 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, x_18);
                      g_1 = t;
                      t = SSLsetAnnotations(g_1, o_18);
                      ;
                      LocalPopChoice(y_32);
                    }
                  else
                    {
                      t = v_32;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(u_32);
                  t = xtc_transform_file_2_0(d_5, k_5, t);
                }
              else
                {
                  t = r_32;
                  t = xtc_transform_term_2_0(m_5, n_5, t);
                }
              {
                ATerm o_5 (ATerm t)
                {
                  t = h_10;
                  return(t);
                }
                t = rename_to_1_0(o_5, t);
              }
            }
          }
        }
      }
  }
  return(t);
}
ATerm k_1 (ATerm x_10, ATerm z_10, ATerm t)
{
  t = z_10;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm a_11 = NULL,d_11 = NULL,f_11 = NULL,g_11 = NULL;
      a_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_10), term_b_33), a_11);
      d_11 = t;
      t = SSL_concat_strings(d_11);
      f_11 = t;
      t = (ATerm) ATinsert(ATempty, term_u_30);
      g_11 = t;
      t = SSL_access(f_11, g_11);
      return(t);
    }
    t = fetch_elem_1_0(t_5, t);
  }
  return(t);
}
ATerm m_1 (ATerm b_70 (ATerm), ATerm j_11, ATerm t)
{
  ATerm k_11 = NULL,k_19 = NULL,y_19 = NULL,f_20 = NULL;
  t = term_f_32;
  k_19 = t;
  t = l_3(k_19, t);
  k_11 = t;
  t = j_11;
  y_19 = t;
  t = k_11;
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
  t = k_1(y_19, f_20, t);
  {
    ATerm v_5 (ATerm t)
    {
      ATerm g_20 = NULL;
      g_20 = t;
      t = k_3(b_70, g_20, t);
      return(t);
    }
    t = if_verbose2_1_0(v_5, t);
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  t = k_3(x_5, k_20, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
  p_11 = t;
  t = term_k_29;
  q_11 = t;
  t = (ATerm) ATinsert(ATempty, term_p_33);
  r_11 = t;
  t = SSL_printnl(q_11, r_11);
  t = p_11;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  t = k_3(v_6, l_22, t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  t = if_verbose6_1_0(w_5, t);
  m_11 = t;
  t = guarantee_extension_1_0(y_5, t);
  n_11 = t;
  {
    ATerm r_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_11 = NULL,r_20 = NULL;
        r_20 = t;
        t = m_1(b_6, r_20, t);
        o_11 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_11);
        ;
        LocalPopChoice(v_33);
      }
    else
      {
        t = r_33;
        t = if_verbose2_1_0(i_6, t);
        t = m_11;
        t = get_syntax_definition_0_0(t);
        {
          ATerm w_33 = t;
          int x_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_33 = t;
              int z_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_20 = NULL,e_21 = NULL,h_21 = NULL,d_22 = NULL,s_21 = NULL,t_21 = NULL,l_1 = NULL,p_1 = NULL;
                  t_20 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      e_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  d_22 = t;
                  t = t_20;
                  h_21 = t;
                  t = SSLgetAnnotations(h_21);
                  s_21 = t;
                  t = e_21;
                  t_21 = t;
                  p_1 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
                  l_1 = t;
                  t = SSLsetAnnotations(l_1, s_21);
                  ;
                  LocalPopChoice(z_33);
                }
              else
                {
                  t = y_33;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(x_33);
              {
                ATerm l_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, m_11), term_a_34);
                  return(t);
                }
                t = xtc_transform_file_2_0(j_6, l_6, t);
              }
            }
          else
            {
              t = w_33;
              {
                ATerm s_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, m_11), term_a_34);
                  return(t);
                }
                t = xtc_transform_term_2_0(p_6, s_6, t);
              }
            }
          {
            ATerm t_6 (ATerm t)
            {
              t = n_11;
              return(t);
            }
            t = rename_to_1_0(t_6, t);
          }
        }
      }
    t = if_verbose6_1_0(u_6, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm b_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_11 = NULL,u_11 = NULL,o_22 = NULL;
      s_11 = t;
      t = term_x_6;
      o_22 = t;
      t = l_3(o_22, t);
      u_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_11, term_j_20);
      t = geq_0_0(t);
      t = s_11;
      t = i_88(t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = b_34;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm v_11 = NULL;
  ATerm z_6 (ATerm t)
  {
    t = w_76(t);
    if(((v_11 != NULL) && (v_11 != t)))
      _fail(t);
    else
      v_11 = t;
    return(t);
  }
  t = fetch_1_0(z_6, t);
  t = not_null(v_11);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_g_34;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_22 = NULL,y_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_12;
      w_22 = t;
      t = (ATerm) ATinsert(ATempty, term_u_30);
      y_22 = t;
      t = SSL_access(w_22, y_22);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  t = k_3(e_7, e_23, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_i_34;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_j_34;
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  t = k_3(k_7, c_26, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm l_12 = NULL;
  t = if_verbose6_1_0(b_7, t);
  {
    ATerm k_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL,h_23 = NULL,j_23 = NULL,i_24 = NULL,l_23 = NULL,u_23 = NULL,q_1 = NULL,r_1 = NULL;
        g_23 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        i_24 = t;
        t = g_23;
        j_23 = t;
        t = SSLgetAnnotations(j_23);
        l_23 = t;
        t = h_23;
        t = guarantee_extension_1_0(h_7, t);
        u_23 = t;
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_23);
        q_1 = t;
        t = SSLsetAnnotations(q_1, l_23);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(o_34);
      }
    else
      {
        t = k_34;
        {
          ATerm n_12 = NULL,w_24 = NULL,b_25 = NULL,h_25 = NULL,v_25 = NULL,n_25 = NULL,q_25 = NULL,s_1 = NULL,v_1 = NULL;
          w_24 = t;
          if(match_cons(t, sym_FILE_1))
            {
              b_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          v_25 = t;
          t = w_24;
          h_25 = t;
          t = SSLgetAnnotations(h_25);
          n_25 = t;
          t = b_25;
          t = guarantee_extension_1_0(i_7, t);
          q_25 = t;
          v_1 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_25);
          s_1 = t;
          t = SSLsetAnnotations(s_1, n_25);
          t = read_from_0_0(t);
          n_12 = t;
          t = SSL_explode_term(n_12);
          if(match_cons(t, sym__2))
            {
              l_12 = ATgetArgument(t, 0);
              {
                ATerm u_34 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, l_12)));
        }
      }
    t = if_verbose6_1_0(j_7, t);
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  t = k_3(m_7, i_26, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm b_13 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  t = k_3(p_7, q_26, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t = if_verbose6_1_0(l_7, t);
  if(match_cons(t, sym_FILE_1))
    {
      t_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_34 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL;
        t = term_i_35;
        n_26 = t;
        t = l_3(n_26, t);
        ;
        LocalPopChoice(b_35);
      }
    else
      {
        t = x_34;
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_13 (ATerm u_12, ATerm t)
              {
                ATerm w_12 = NULL,x_12 = NULL;
                t = term_k_29;
                w_12 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_35), t_12), term_q_35), u_12), term_p_35);
                x_12 = t;
                t = SSL_printnl(w_12, x_12);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_35), t_12), term_q_35), u_12), term_p_35);
                _fail(t);
                return(t);
              }
              ATerm y_12 = NULL,z_12 = NULL;
              t = get_meta_0_0(t);
              z_12 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  y_12 = ATgetArgument(t, 0);
                  {
                    ATerm t_35 = t;
                    int v_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_12;
                        t = fetch_elem_1_0(n_7, t);
                        ;
                        LocalPopChoice(v_35);
                      }
                    else
                      {
                        t = t_35;
                        t = c_13(z_12, t);
                      }
                  }
                }
              else
                {
                  t = c_13(z_12, t);
                }
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              t = term_w_35;
            }
        }
      }
    t = if_verbose2_1_0(o_7, t);
  }
  return(t);
}
ATerm q_7 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm n_1 (ATerm f_85 (ATerm), ATerm f_13, ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_explode_string(f_13);
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_13 (ATerm t)
        {
          ATerm b_36 = t;
          int c_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_26 = NULL,v_26 = NULL,y_26 = NULL;
              u_26 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_26 = ATgetFirst((ATermList) t);
                  y_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_3(_id, h_13, u_26, v_26, y_26, t);
              ;
              LocalPopChoice(c_36);
            }
          else
            {
              t = b_36;
              {
                ATerm d_36 = t;
                int e_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
                    f_27 = t;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        g_27 = ATgetFirst((ATermList) t);
                        h_27 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = m_3(q_7, _id, f_27, g_27, h_27, t);
                    ;
                    LocalPopChoice(e_36);
                  }
                else
                  {
                    t = d_36;
                    {
                      ATerm o_27 = NULL,q_27 = NULL,y_27 = NULL;
                      o_27 = t;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          q_27 = ATgetFirst((ATermList) t);
                          y_27 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = m_3(t_7, f_85, o_27, q_27, y_27, t);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = h_13(t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
      }
    g_13 = t;
    t = SSL_implode_string(g_13);
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = k_3(v_7, g_28, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_g_36;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_36);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_g_36;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_36);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_i_36;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_i_36;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_j_36;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_l_36;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_l_36;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_n_36;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_n_36;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm i_13 = NULL,k_13 = NULL,m_13 = NULL,l_28 = NULL,t_28 = NULL,v_28 = NULL,x_28 = NULL,l_29 = NULL,z_1 = NULL,d_2 = NULL;
  t = if_verbose6_1_0(u_7, t);
  i_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_13;
  t_28 = t;
  t = SSLgetAnnotations(t_28);
  v_28 = t;
  t = l_28;
  l_29 = t;
  t = n_1(_id, l_29, t);
  k_13 = t;
  x_28 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_28);
  z_1 = t;
  t = SSLsetAnnotations(z_1, v_28);
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      m_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_13;
  {
    ATerm o_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_36 = t;
        int u_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_29 = NULL,y_29 = NULL,b_30 = NULL,c_30 = NULL,e_2 = NULL,f_2 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                w_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_13;
            y_29 = t;
            t = SSLgetAnnotations(y_29);
            b_30 = t;
            t = w_29;
            c_30 = t;
            f_2 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, c_30);
            e_2 = t;
            t = SSLsetAnnotations(e_2, b_30);
            ;
            LocalPopChoice(u_36);
          }
        else
          {
            t = t_36;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(s_36);
        {
          ATerm x_7 (ATerm t)
          {
            ATerm n_13 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(z_7, t);
            n_13 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_13), m_13), term_w_36), term_v_36);
            return(t);
          }
          t = xtc_transform_file_2_0(w_7, x_7, t);
        }
      }
    else
      {
        t = o_36;
        {
          ATerm d_8 (ATerm t)
          {
            ATerm o_13 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(f_8, t);
            o_13 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_13), m_13), term_w_36), term_v_36);
            return(t);
          }
          t = xtc_transform_term_2_0(b_8, d_8, t);
        }
      }
    {
      ATerm g_37 = t;
      int h_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_37 = t;
          int k_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_30 = NULL,r_30 = NULL,w_30 = NULL,d_32 = NULL,m_31 = NULL,r_31 = NULL,h_2 = NULL,j_2 = NULL;
              q_30 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  r_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              d_32 = t;
              t = q_30;
              w_30 = t;
              t = SSLgetAnnotations(w_30);
              m_31 = t;
              t = r_30;
              r_31 = t;
              j_2 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_31);
              h_2 = t;
              t = SSLsetAnnotations(h_2, m_31);
              ;
              LocalPopChoice(k_37);
            }
          else
            {
              t = j_37;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(h_37);
          t = xtc_transform_file_2_0(g_8, pass_verbose_0_0, t);
        }
      else
        {
          t = g_37;
          t = xtc_transform_term_2_0(h_8, pass_verbose_0_0, t);
        }
      {
        ATerm i_8 (ATerm t)
        {
          ATerm k_8 (ATerm t)
          {
            t = k_13;
            t = guarantee_extension_1_0(p_8, t);
            return(t);
          }
          t = copy_to_1_0(k_8, t);
          return(t);
        }
        t = if_keep1_1_0(i_8, t);
        {
          ATerm l_37 = t;
          int m_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_37 = t;
              int o_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_32 = NULL,m_32 = NULL,t_32 = NULL,i_33 = NULL,x_32 = NULL,a_33 = NULL,k_2 = NULL,l_2 = NULL;
                  l_32 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      m_32 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  i_33 = t;
                  t = l_32;
                  t_32 = t;
                  t = SSLgetAnnotations(t_32);
                  x_32 = t;
                  t = m_32;
                  a_33 = t;
                  l_2 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, a_33);
                  k_2 = t;
                  t = SSLsetAnnotations(k_2, x_32);
                  ;
                  LocalPopChoice(o_37);
                }
              else
                {
                  t = n_37;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(m_37);
              t = xtc_transform_file_2_0(w_8, pass_verbose_0_0, t);
            }
          else
            {
              t = l_37;
              t = xtc_transform_term_2_0(x_8, pass_verbose_0_0, t);
            }
          {
            ATerm p_37 = t;
            int q_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_37 = t;
                int z_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_33 = NULL,n_33 = NULL,s_33 = NULL,a_35 = NULL,m_34 = NULL,n_34 = NULL,m_2 = NULL,n_2 = NULL;
                    l_33 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        n_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    a_35 = t;
                    t = l_33;
                    s_33 = t;
                    t = SSLgetAnnotations(s_33);
                    m_34 = t;
                    t = n_33;
                    n_34 = t;
                    n_2 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, n_34);
                    m_2 = t;
                    t = SSLsetAnnotations(m_2, m_34);
                    ;
                    LocalPopChoice(z_37);
                  }
                else
                  {
                    t = r_37;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(q_37);
                t = xtc_transform_file_2_0(a_9, pass_verbose_0_0, t);
              }
            else
              {
                t = p_37;
                t = xtc_transform_term_2_0(c_9, pass_verbose_0_0, t);
              }
          }
        }
      }
    }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm y_13 (ATerm t)
  {
    ATerm a_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
        e_35 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_35 = ATgetFirst((ATermList) t);
            g_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_3(_id, y_13, e_35, f_35, g_35, t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = a_38;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_77(t);
      }
    return(t);
  }
  t = y_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      {
        ATerm r_13 = NULL,u_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_13 = ATgetFirst((ATermList) t);
            u_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_13;
        {
          ATerm d_9 (ATerm t)
          {
            t = u_13;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_9, t);
        }
      }
    }
  return(t);
}
ATerm q_14 (ATerm b_14, ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  t = b_14;
  f_14 = t;
  t = SSL_explode_term(f_14);
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_14;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_14 = NULL,k_14 = NULL,m_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
      {
        ATerm k_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_9 (ATerm t)
            {
              t = k_14;
              return(t);
            }
            t = i_14;
            t = at_end_1_0(e_9, t);
            ;
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
            t = q_14(m_14, t);
          }
      }
    }
  else
    {
      t = q_14(m_14, t);
    }
  return(t);
}
ATerm o_1 (ATerm s_14, ATerm t_14, ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  t = s_14;
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_35 = NULL;
        l_35 = t;
        t = l_3(l_35, t);
        ;
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        t = (ATerm) ATempty;
      }
    u_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_14, u_14);
    t = conc_0_0(t);
    v_14 = t;
    t = term_o_38;
    w_14 = t;
    t = s_14;
    x_14 = t;
    t = v_14;
    y_14 = t;
    t = SSL_table_put(w_14, x_14, y_14);
    t = (ATerm) ATmakeAppl(sym__3, term_o_38, s_14, v_14);
  }
  return(t);
}
ATerm f_9 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_1 (ATerm z_14, ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_explode_string(z_14);
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 (ATerm t)
        {
          ATerm r_38 = t;
          int s_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
              m_35 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_35 = ATgetFirst((ATermList) t);
                  o_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_3(_id, b_15, m_35, n_35, o_35, t);
              ;
              LocalPopChoice(s_38);
            }
          else
            {
              t = r_38;
              {
                ATerm u_35 = NULL,x_35 = NULL,y_35 = NULL;
                u_35 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_35 = ATgetFirst((ATermList) t);
                    y_35 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_3(f_9, g_9, u_35, x_35, y_35, t);
              }
            }
          return(t);
        }
        t = b_15(t);
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = (ATerm) ATempty;
      }
    a_15 = t;
    t = SSL_implode_string(a_15);
  }
  return(t);
}
ATerm u_1 (ATerm c_15, ATerm t)
{
  ATerm g_15 = NULL;
  g_15 = t;
  t = SSL_table_keys(g_15);
  {
    ATerm h_9 (ATerm t)
    {
      ATerm i_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL;
      i_15 = t;
      t = c_15;
      m_15 = t;
      t = i_15;
      n_15 = t;
      t = SSL_table_get(m_15, n_15);
      k_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_15, k_15);
      return(t);
    }
    t = map_1_0(h_9, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_15 = NULL,u_15 = NULL,k_36 = NULL;
      q_15 = t;
      t = term_x_6;
      k_36 = t;
      t = l_3(k_36, t);
      u_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_15, term_d_28);
      t = geq_0_0(t);
      t = q_15;
      t = l_88(t);
      ;
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
    }
  return(t);
}
ATerm w_1 (ATerm v_15, ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  t = term_v_38;
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_15);
  y_15 = t;
  t = SSL_table_get(x_15, y_15);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_39 = ATgetFirst((ATermList) t);
      if(match_cons(f_39, sym__2))
        {
          ATerm h_39 = ATgetArgument(f_39, 0);
          w_15 = ATgetArgument(f_39, 1);
        }
      else
        _fail(t);
      {
        ATerm g_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_15;
  return(t);
}
ATerm x_1 (ATerm z_15, ATerm a_16, ATerm t)
{
  ATerm b_16 = NULL,e_16 = NULL,f_16 = NULL;
  t = term_v_38;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, z_15);
  f_16 = t;
  t = SSL_table_get(e_16, f_16);
  {
    ATerm i_9 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((a_16 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((b_16 != NULL) && (b_16 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(i_9, t);
    t = not_null(b_16);
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_16 = NULL,k_16 = NULL,m_36 = NULL;
      i_16 = t;
      t = term_x_6;
      m_36 = t;
      t = l_3(m_36, t);
      k_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_16, term_t_23);
      t = geq_0_0(t);
      t = i_16;
      t = k_88(t);
      ;
      LocalPopChoice(j_39);
    }
  else
    {
      t = i_39;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_16 = NULL,n_16 = NULL,x_36 = NULL;
      l_16 = t;
      t = term_x_6;
      x_36 = t;
      t = l_3(x_36, t);
      n_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_16, term_a_22);
      t = geq_0_0(t);
      t = l_16;
      t = m_88(t);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
    }
  return(t);
}
ATerm y_1 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm o_16, ATerm p_16, ATerm t)
{
  t = s_80(t);
  {
    ATerm j_9 (ATerm t)
    {
      ATerm q_16 = NULL;
      q_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_16, q_16);
      t = r_80(t);
      return(t);
    }
    t = fetch_1_0(j_9, t);
    t = p_16;
  }
  return(t);
}
ATerm a_2 (ATerm o_80 (ATerm), ATerm r_16, ATerm s_16, ATerm t)
{
  t = r_16;
  {
    ATerm t_16 (ATerm t)
    {
      ATerm m_39 = t;
      int n_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_16;
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = m_39;
          {
            ATerm o_39 = t;
            int q_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_36 = NULL,i_37 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_36 = ATgetFirst((ATermList) t);
                    i_37 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                {
                  ATerm k_9 (ATerm t)
                  {
                    t = s_16;
                    return(t);
                  }
                  t = y_1(o_80, k_9, y_36, i_37, t);
                  t = t_16(t);
                }
                ;
                LocalPopChoice(q_39);
              }
            else
              {
                t = o_39;
                {
                  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
                  u_37 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_37 = ATgetFirst((ATermList) t);
                      w_37 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = m_3(_id, t_16, u_37, v_37, w_37, t);
                }
              }
          }
        }
      return(t);
    }
    t = t_16(t);
  }
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm r_39 = NULL;
  if(match_cons(t, sym__2))
    {
      r_39 = ATgetArgument(t, 0);
      if((r_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_2 (ATerm w_16, ATerm x_16, ATerm y_16, ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,w_38 = NULL,x_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_16, x_16);
  {
    ATerm s_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_38 = NULL,i_38 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_39 = ATgetArgument(t, 0);
            ATerm z_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_16;
        h_38 = t;
        t = x_16;
        i_38 = t;
        t = SSL_table_get(h_38, i_38);
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = s_39;
        t = (ATerm) ATempty;
      }
    z_16 = t;
    w_38 = t;
    t = y_16;
    x_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_16, y_16);
    t = a_2(l_9, w_38, x_38, t);
    a_17 = t;
    t = w_16;
    b_17 = t;
    t = x_16;
    c_17 = t;
    t = a_17;
    d_17 = t;
    t = SSL_table_put(b_17, c_17, d_17);
    t = (ATerm) ATmakeAppl(sym__3, w_16, x_16, y_16);
  }
  return(t);
}
ATerm c_2 (ATerm o_88 (ATerm), ATerm s_17, ATerm r_17, ATerm t)
{
  t = r_17;
  {
    ATerm o_9 (ATerm t)
    {
      ATerm t_17 = NULL,u_17 = NULL;
      if(match_cons(t, sym__2))
        {
          t_17 = ATgetArgument(t, 0);
          u_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, s_17, t_17, u_17);
      t = o_88(t);
      return(t);
    }
    t = map_1_0(o_9, t);
  }
  return(t);
}
ATerm l_18 (ATerm c_18, ATerm t)
{
  ATerm h_18 = NULL;
  t = c_18;
  h_18 = t;
  t = SSL_fclose(h_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_18 = ATgetArgument(t, 0);
      {
        ATerm c_40 = t;
        int d_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_39 = NULL;
            t = i_18;
            w_39 = t;
            t = SSL_fclose(w_39);
            ;
            LocalPopChoice(d_40);
          }
        else
          {
            t = c_40;
            t = l_18(j_18, t);
          }
      }
    }
  else
    {
      t = l_18(j_18, t);
    }
  return(t);
}
ATerm g_2 (ATerm k_59 (ATerm), ATerm l_59 (ATerm), ATerm u_18, ATerm q_18, ATerm r_18, ATerm t)
{
  ATerm p_18 = NULL,s_18 = NULL,t_18 = NULL,o_2 = NULL,a_3 = NULL;
  t = SSLgetAnnotations(u_18);
  p_18 = t;
  t = q_18;
  t = k_59(t);
  s_18 = t;
  t = r_18;
  t = l_59(t);
  t_18 = t;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_18, t_18);
  o_2 = t;
  t = SSLsetAnnotations(o_2, p_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_19 = NULL;
  t = SSL_stdin_stream();
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_19 = NULL;
  t = SSL_stdout_stream();
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_19 = NULL;
  t = SSL_stderr_stream();
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_19);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm b_41 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      b_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_41;
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  t = SSL_is_string(h_41);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_40 = ATgetArgument(t, 0);
      ATerm i_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL,t_40 = NULL,u_40 = NULL;
        r_40 = t;
        t_40 = t;
        t = SSL_explode_term(t_40);
        if(match_cons(t, sym__2))
          {
            ATerm n_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_40) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_40 = ATgetArgument(t, 1);
              if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
                {
                  u_40 = ATgetFirst((ATermList) o_40);
                  {
                    ATerm p_40 = (ATerm) ATgetNext((ATermList) o_40);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_40;
        if(match_cons(t, sym_stderr_0))
          {
            t = u_40;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = u_40;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_40;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
        {
          ATerm q_40 = t;
          int s_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
              w_40 = t;
              if(match_cons(t, sym__2))
                {
                  x_40 = ATgetArgument(t, 0);
                  y_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_2(p_9, _id, w_40, x_40, y_40, t);
              if(match_cons(t, sym__2))
                {
                  n_19 = ATgetArgument(t, 0);
                  o_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(n_19, o_19);
              p_19 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, p_19);
              ;
              LocalPopChoice(s_40);
            }
          else
            {
              t = q_40;
              {
                ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
                c_41 = t;
                if(match_cons(t, sym__2))
                  {
                    d_41 = ATgetArgument(t, 0);
                    e_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_2(q_9, _id, c_41, d_41, e_41, t);
                if(match_cons(t, sym__2))
                  {
                    r_19 = ATgetArgument(t, 0);
                    s_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_19, s_19);
                t_19 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_v_40;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,z_19 = NULL;
  ATerm z_40 = t;
  int a_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_20 = NULL;
      a_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_20, term_f_41);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_41);
    }
  else
    {
      t = z_40;
      {
        ATerm i_41 = NULL;
        i_41 = t;
        t = k_3(r_9, i_41, t);
        _fail(t);
      }
    }
  v_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_19);
  w_19 = t;
  t = v_19;
  t = fclose_0_0(t);
  t = w_19;
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_j_41;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_20 = NULL,d_20 = NULL;
      c_20 = t;
      t = (ATerm) ATinsert(ATempty, term_p_41);
      d_20 = t;
      t = SSL_access(c_20, d_20);
      LocalPopChoice(n_41);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_41;
      {
        ATerm r_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_41 = NULL;
            ATerm v_41 = t;
            if((PushChoice() == 0))
              {
                ATerm e_20 = NULL,h_20 = NULL;
                e_20 = t;
                t = (ATerm) ATinsert(ATempty, term_u_30);
                h_20 = t;
                t = SSL_access(e_20, h_20);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_41;
              }
            k_41 = t;
            t = k_3(s_9, k_41, t);
            ;
            LocalPopChoice(u_41);
          }
        else
          {
            t = r_41;
            {
              ATerm m_41 = NULL;
              m_41 = t;
              t = k_3(u_9, m_41, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm o_41 = NULL;
  o_41 = t;
  t = k_3(x_9, o_41, t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_w_41;
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm q_41 = NULL;
  q_41 = t;
  t = k_3(a_10, q_41, t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  t = term_k_29;
  a_21 = t;
  t = (ATerm) ATinsert(ATempty, term_e_42);
  b_21 = t;
  t = SSL_printnl(a_21, b_21);
  t = z_20;
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  if(match_cons(t, sym__3))
    {
      y_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
      a_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_2(y_41, z_41, a_42, t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,g_21 = NULL;
  c_21 = t;
  t = term_k_29;
  d_21 = t;
  t = (ATerm) ATinsert(ATempty, term_f_42);
  g_21 = t;
  t = SSL_printnl(d_21, g_21);
  t = c_21;
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  t = term_k_29;
  j_21 = t;
  t = (ATerm) ATinsert(ATempty, term_e_42);
  k_21 = t;
  t = SSL_printnl(j_21, k_21);
  t = i_21;
  return(t);
}
ATerm i_2 (ATerm i_20, ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,s_41 = NULL,t_41 = NULL;
  t = if_verbose5_1_0(w_9, t);
  {
    ATerm g_42 = t;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL,y_20 = NULL;
        t = term_v_38;
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, i_20);
        y_20 = t;
        t = SSL_table_get(x_20, y_20);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_42;
      }
    l_20 = t;
    t = term_v_38;
    m_20 = t;
    t = term_j_42;
    n_20 = t;
    t = (ATerm) ATinsert(ATempty, i_20);
    o_20 = t;
    t = SSL_table_put(m_20, n_20, o_20);
    t = l_20;
    t = if_verbose4_1_0(y_9, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(b_10, t);
    p_20 = t;
    t = term_v_38;
    s_41 = t;
    t = p_20;
    t_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_38, p_20);
    t = c_2(d_10, s_41, t_41, t);
    t = if_verbose6_1_0(e_10, t);
    t = term_v_38;
    u_20 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, i_20);
    v_20 = t;
    t = (ATerm) ATempty;
    w_20 = t;
    t = SSL_table_put(u_20, v_20, w_20);
    t = (ATerm) ATmakeAppl(sym__3, term_v_38, (ATerm)ATmakeAppl(sym_Imported_1, i_20), (ATerm) ATempty);
    t = if_verbose4_1_0(f_10, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm k_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_42);
    }
  else
    {
      t = k_42;
      {
        ATerm p_42 = t;
        int r_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
            b_42 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_42 = ATgetFirst((ATermList) t);
                d_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm j_10 (ATerm t)
              {
                t = filter_1_0(f_84, t);
                return(t);
              }
              t = m_3(f_84, j_10, b_42, c_42, d_42, t);
            }
            ;
            LocalPopChoice(r_42);
          }
        else
          {
            t = p_42;
            {
              ATerm o_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_42 = ATgetFirst((ATermList) t);
                  o_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_21;
              t = filter_1_0(f_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm z_85 (ATerm), ATerm t)
{
  ATerm q_21 (ATerm t)
  {
    ATerm t_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_85(t);
        t = q_21(t);
        ;
        LocalPopChoice(w_42);
      }
    else
      {
        t = t_42;
      }
    return(t);
  }
  t = q_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_42 = NULL;
      t = term_b_43;
      h_42 = t;
      t = l_3(h_42, t);
      ;
      LocalPopChoice(a_43);
    }
  else
    {
      t = z_42;
      {
        ATerm c_43 = t;
        int d_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_21 = NULL;
            t = term_e_43;
            r_21 = t;
            t = SSL_getenv(r_21);
            ;
            LocalPopChoice(d_43);
          }
        else
          {
            t = c_43;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  t = k_3(s_10, i_42, t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_f_43;
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  t = term_v_38;
  y_21 = t;
  t = term_i_43;
  z_21 = t;
  t = SSL_table_get(y_21, z_21);
  t = filter_1_0(y_10, t);
  {
    ATerm j_43 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_43;
      }
  }
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  t = i_2(n_42, t);
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm o_42 = NULL;
  o_42 = t;
  t = k_3(c_11, o_42, t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_m_43;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_21 = NULL;
  t = if_verbose5_1_0(k_10, t);
  u_21 = t;
  {
    ATerm n_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_21 = NULL,w_21 = NULL;
        t = term_v_38;
        v_21 = t;
        t = term_j_42;
        w_21 = t;
        t = SSL_table_get(v_21, w_21);
        ;
        LocalPopChoice(p_43);
      }
    else
      {
        t = n_43;
        {
          ATerm x_21 = NULL,l_42 = NULL;
          t = xtc_location_0_0(t);
          l_42 = t;
          t = i_2(l_42, t);
          x_21 = t;
          t = repeat_1_0(u_10, t);
          t = x_21;
        }
      }
    t = u_21;
    t = if_verbose5_1_0(b_11, t);
  }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  t = k_3(h_11, q_42, t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm y_42 = NULL;
  y_42 = t;
  t = k_3(l_11, y_42, t);
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm l_43 = NULL,k_43 = NULL;
  t = term_v_38;
  k_43 = t;
  t = u_1(k_43, t);
  l_43 = t;
  t = k_3(w_11, l_43, t);
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_r_43;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(e_11, t);
      t = xtc_load_0_0(t);
      {
        ATerm x_43 = t;
        int y_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_42 = NULL,v_42 = NULL;
            if(match_cons(t, sym__2))
              {
                u_42 = ATgetArgument(t, 0);
                v_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_1(u_42, v_42, t);
            ;
            LocalPopChoice(y_43);
          }
        else
          {
            t = x_43;
            {
              ATerm x_42 = NULL;
              x_42 = t;
              t = w_1(x_42, t);
            }
          }
        t = if_verbose5_1_0(i_11, t);
      }
      ;
      LocalPopChoice(w_43);
    }
  else
    {
      t = v_43;
      {
        ATerm j_22 = NULL,g_43 = NULL,h_43 = NULL;
        j_22 = t;
        t = term_k_29;
        g_43 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_44), j_22), term_z_43);
        h_43 = t;
        t = SSL_printnl(g_43, h_43);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_44), j_22), term_z_43);
        t = if_verbose5_1_0(t_11, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  ATerm o_43 = NULL;
  t = xtc_find_0_0(t);
  o_43 = t;
  t = t_1(o_43, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  r_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
        t = r_23;
        t = k_0(t);
        s_43 = t;
        {
          ATerm h_44 = t;
          int k_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(k_44);
            }
          else
            {
              t = h_44;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = s_23;
          t_43 = t;
          t = s_43;
          u_43 = t;
          t = SSL_copy(t_43, u_43);
          t = (ATerm) ATmakeAppl(sym_FILE_1, s_23);
        }
        ;
        LocalPopChoice(g_44);
      }
    else
      {
        t = f_44;
        {
          ATerm l_44 = t;
          int o_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
              t = r_23;
              t = k_0(t);
              a_44 = t;
              {
                ATerm p_44 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_44 = t;
                    int s_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(s_44);
                      }
                    else
                      {
                        t = r_44;
                        {
                          ATerm u_44 = t;
                          int w_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(w_44);
                            }
                          else
                            {
                              t = u_44;
                              {
                                ATerm d_44 = NULL;
                                d_44 = t;
                                if((s_23 != t))
                                  {
                                    _fail(t);
                                  }
                                t = d_44;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_44;
                  }
                t = s_23;
                b_44 = t;
                t = a_44;
                c_44 = t;
                t = SSL_copy(b_44, c_44);
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_23);
              }
              ;
              LocalPopChoice(o_44);
            }
          else
            {
              t = l_44;
              t = r_23;
              t = k_0(t);
              if((s_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_23);
            }
        }
      }
  }
  return(t);
}
ATerm q_2 (ATerm y_23, ATerm z_23, ATerm t)
{
  ATerm a_24 = NULL;
  ATerm x_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = NULL,c_24 = NULL;
      t = y_23;
      b_24 = t;
      t = z_23;
      c_24 = t;
      t = SSL_table_get(b_24, c_24);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm c_45 = ATgetFirst((ATermList) t);
          a_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      LocalPopChoice(z_44);
      {
        ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
        t = y_23;
        d_24 = t;
        t = z_23;
        e_24 = t;
        t = a_24;
        f_24 = t;
        t = SSL_table_put(d_24, e_24, f_24);
        t = (ATerm) ATmakeAppl(sym__3, y_23, z_23, a_24);
      }
    }
  else
    {
      t = x_44;
      {
        ATerm j_24 = NULL,k_24 = NULL;
        t = y_23;
        j_24 = t;
        t = z_23;
        k_24 = t;
        t = SSL_table_remove(j_24, k_24);
        t = (ATerm) ATmakeAppl(sym__2, y_23, z_23);
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, y_23, z_23);
  return(t);
}
ATerm r_2 (ATerm a_87 (ATerm), ATerm l_24, ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  t = a_87(t);
  m_24 = t;
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL,t_24 = NULL;
        t = m_24;
        s_24 = t;
        t = term_x_29;
        t_24 = t;
        t = SSL_table_get(s_24, t_24);
        ;
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_24 = ATgetFirst((ATermList) t);
        n_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = m_24;
    p_24 = t;
    t = term_x_29;
    q_24 = t;
    t = n_24;
    r_24 = t;
    t = SSL_table_put(p_24, q_24, r_24);
    t = o_24;
    {
      ATerm x_11 (ATerm t)
      {
        ATerm u_24 = NULL,i_44 = NULL,j_44 = NULL;
        u_24 = t;
        t = m_24;
        i_44 = t;
        t = u_24;
        j_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_24, u_24);
        t = q_2(i_44, j_44, t);
        return(t);
      }
      t = map_1_0(x_11, t);
      t = l_24;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t)
{
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_87(t);
      t = w_87(t);
      ;
      LocalPopChoice(o_45);
    }
  else
    {
      t = n_45;
      t = w_87(t);
      _fail(t);
    }
  return(t);
}
ATerm s_2 (ATerm z_86 (ATerm), ATerm x_24, ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,c_25 = NULL,d_25 = NULL;
  t = z_86(t);
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_24, term_x_29);
  {
    ATerm p_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_44 = NULL,n_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_45 = ATgetArgument(t, 0);
            ATerm x_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_24;
        m_44 = t;
        t = term_x_29;
        n_44 = t;
        t = SSL_table_get(m_44, n_44);
        ;
        LocalPopChoice(v_45);
      }
    else
      {
        t = p_45;
        t = (ATerm) ATempty;
      }
    z_24 = t;
    t = y_24;
    a_25 = t;
    t = term_x_29;
    c_25 = t;
    t = (ATerm) ATinsert(CheckATermList(z_24), (ATerm) ATempty);
    d_25 = t;
    t = SSL_table_put(a_25, c_25, d_25);
    t = x_24;
  }
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm f_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_26 = NULL,t_44 = NULL;
      e_26 = t;
      t_44 = t;
      t = SSL_remove(t_44);
      ;
      LocalPopChoice(g_46);
    }
  else
    {
      t = f_46;
    }
  return(t);
}
ATerm c_12 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm t_25 = NULL,q_44 = NULL;
  q_44 = t;
  t = s_2(y_11, q_44, t);
  {
    ATerm a_12 (ATerm t)
    {
      ATerm w_25 = NULL,v_44 = NULL;
      w_25 = t;
      {
        ATerm h_46 = t;
        int l_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_25 = NULL,y_25 = NULL;
            t = term_x_30;
            x_25 = t;
            t = term_x_29;
            y_25 = t;
            t = SSL_table_get(x_25, y_25);
            ;
            LocalPopChoice(l_46);
          }
        else
          {
            t = h_46;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_25 != NULL) && (t_25 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_25 = ATgetFirst((ATermList) t);
            {
              ATerm m_46 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(t_25);
        t = map_1_0(b_12, t);
        t = w_25;
        v_44 = t;
        t = r_2(c_12, v_44, t);
      }
      return(t);
    }
    t = restore_always_2_0(e_90, a_12, t);
  }
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm n_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_45 = NULL;
      t = term_y_30;
      a_45 = t;
      t = l_3(a_45, t);
      ;
      LocalPopChoice(s_46);
    }
  else
    {
      t = n_46;
      t = term_n_31;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm f_90 (ATerm), ATerm t)
{
  ATerm e_12 (ATerm t)
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL,y_44 = NULL;
        t = term_z_30;
        y_44 = t;
        t = l_3(y_44, t);
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_26);
        ;
        LocalPopChoice(u_46);
      }
    else
      {
        t = t_46;
        t = term_g_34;
      }
    t = f_90(t);
    t = copy_to_1_0(f_12, t);
    return(t);
  }
  t = xtc_temp_files_1_0(e_12, t);
  return(t);
}
ATerm t_2 (ATerm h_26, ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,o_26 = NULL,p_26 = NULL;
  t = term_o_30;
  t = whoami_0_0(t);
  k_26 = t;
  t = term_k_29;
  l_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_47), k_26), term_b_47);
  o_26 = t;
  t = SSL_printnl(l_26, o_26);
  t = term_w_18;
  p_26 = t;
  t = SSL_exit(p_26);
  t = h_26;
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  if(match_string(t, "-k"))
    {
      t = f_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_45;
    }
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL;
  g_45 = t;
  i_45 = t;
  t = SSL_string_to_int(i_45);
  h_45 = t;
  t = term_o_38;
  j_45 = t;
  t = term_d_31;
  k_45 = t;
  t = h_45;
  l_45 = t;
  t = SSL_table_put(j_45, k_45, l_45);
  t = g_45;
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = term_d_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  t = z_2(g_12, j_12, k_12, b_45, t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  if(match_string(t, "-S"))
    {
      t = q_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_45;
    }
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
  t = term_o_38;
  r_45 = t;
  t = term_x_6;
  s_45 = t;
  t = term_j_47;
  t_45 = t;
  t = SSL_table_put(r_45, s_45, t_45);
  t = term_k_47;
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = term_n_47;
  return(t);
}
ATerm q_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
  y_45 = t;
  a_46 = t;
  t = SSL_string_to_int(a_46);
  z_45 = t;
  t = term_o_38;
  b_46 = t;
  t = term_x_6;
  c_46 = t;
  t = z_45;
  d_46 = t;
  t = SSL_table_put(b_46, c_46, d_46);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_45);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_o_47;
  return(t);
}
ATerm d_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
  t = term_o_38;
  i_46 = t;
  t = term_p_47;
  j_46 = t;
  t = term_o_30;
  k_46 = t;
  t = SSL_table_put(i_46, j_46, k_46);
  t = term_q_47;
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_r_47;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_47 = t;
  int x_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_45 = NULL;
      m_45 = t;
      t = x_2(m_12, o_12, p_12, m_45, t);
      ;
      LocalPopChoice(x_47);
    }
  else
    {
      t = w_47;
      {
        ATerm y_47 = t;
        int b_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_45 = NULL;
            u_45 = t;
            t = z_2(q_12, v_12, a_13, u_45, t);
            ;
            LocalPopChoice(b_48);
          }
        else
          {
            t = y_47;
            {
              ATerm e_46 = NULL;
              e_46 = t;
              t = x_2(d_13, j_13, p_13, e_46, t);
            }
          }
      }
    }
  return(t);
}
ATerm x_2 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm z_27, ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_28 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
      t = term_o_30;
      t = d_0(t);
      c_28 = t;
      t = term_c_48;
      o_46 = t;
      t = term_g_48;
      p_46 = t;
      t = c_28;
      q_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_48, term_g_48, c_28);
      t = y_2(o_46, p_46, q_46, t);
      _fail(t);
    }
  else
    {
      ATerm i_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_28 = ATgetFirst((ATermList) t);
          b_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_28;
      t = a_0(t);
      t = term_o_30;
      t = b_0(t);
      i_28 = t;
      t = (ATerm) ATinsert(CheckATermList(b_28), i_28);
    }
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm v_46 = NULL;
  v_46 = t;
  if(match_string(t, "-o"))
    {
      t = v_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_46;
    }
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  w_46 = t;
  t = term_o_38;
  x_46 = t;
  t = term_y_30;
  y_46 = t;
  t = w_46;
  z_46 = t;
  t = SSL_table_put(x_46, y_46, z_46);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_46);
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_h_48;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm r_46 = NULL;
  r_46 = t;
  t = z_2(q_13, s_13, t_13, r_46, t);
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  if(match_string(t, "-i"))
    {
      t = e_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_47;
    }
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  f_47 = t;
  t = term_o_38;
  g_47 = t;
  t = term_z_30;
  h_47 = t;
  t = f_47;
  i_47 = t;
  t = SSL_table_put(g_47, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_47);
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  t = z_2(v_13, w_13, c_14, a_47, t);
  return(t);
}
ATerm y_2 (ATerm e_29, ATerm f_29, ATerm g_29, ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,m_29 = NULL,n_29 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_29, f_29);
  {
    ATerm o_48 = t;
    int p_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_47 = NULL,m_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_48 = ATgetArgument(t, 0);
            ATerm v_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_29;
        l_47 = t;
        t = f_29;
        m_47 = t;
        t = SSL_table_get(l_47, m_47);
        ;
        LocalPopChoice(p_48);
      }
    else
      {
        t = o_48;
        t = (ATerm) ATempty;
      }
    h_29 = t;
    t = e_29;
    i_29 = t;
    t = f_29;
    m_29 = t;
    t = (ATerm) ATinsert(CheckATermList(h_29), g_29);
    n_29 = t;
    t = SSL_table_put(i_29, m_29, n_29);
    t = (ATerm) ATmakeAppl(sym__3, e_29, f_29, g_29);
  }
  return(t);
}
ATerm z_2 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm h_30, ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_30 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
      t = term_o_30;
      t = j_0(t);
      m_30 = t;
      t = term_c_48;
      s_47 = t;
      t = term_g_48;
      t_47 = t;
      t = m_30;
      u_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_48, term_g_48, m_30);
      t = y_2(s_47, t_47, u_47, t);
      _fail(t);
    }
  else
    {
      ATerm v_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_30 = ATgetFirst((ATermList) t);
          j_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_30 = ATgetFirst((ATermList) t);
          l_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_30;
      t = h_0(t);
      t = k_30;
      t = i_0(t);
      v_30 = t;
      t = (ATerm) ATinsert(CheckATermList(l_30), v_30);
    }
  return(t);
}
ATerm e_14 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  if(match_string(t, "-I"))
    {
      t = z_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = z_47;
    }
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm a_48 = NULL,d_48 = NULL,e_48 = NULL;
  a_48 = t;
  t = term_f_32;
  d_48 = t;
  t = (ATerm) ATinsert(ATempty, a_48);
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_32, (ATerm) ATinsert(ATempty, a_48));
  t = o_1(d_48, e_48, t);
  t = a_48;
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_x_48;
  return(t);
}
ATerm l_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
  j_48 = t;
  t = term_o_38;
  k_48 = t;
  t = term_i_35;
  l_48 = t;
  t = j_48;
  m_48 = t;
  t = SSL_table_put(k_48, l_48, m_48);
  t = j_48;
  return(t);
}
ATerm o_14 (ATerm t)
{
  t = term_y_48;
  return(t);
}
ATerm p_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  r_48 = t;
  t = term_o_38;
  s_48 = t;
  t = term_x_6;
  t_48 = t;
  t = term_j_47;
  u_48 = t;
  t = SSL_table_put(s_48, t_48, u_48);
  t = r_48;
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_z_48;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm a_49 = t;
  int b_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_47 = NULL;
      v_47 = t;
      t = z_2(e_14, h_14, j_14, v_47, t);
      ;
      LocalPopChoice(b_49);
    }
  else
    {
      t = a_49;
      {
        ATerm c_49 = t;
        int e_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_48 = NULL;
            f_48 = t;
            t = z_2(l_14, n_14, o_14, f_48, t);
            ;
            LocalPopChoice(e_49);
          }
        else
          {
            t = c_49;
            {
              ATerm n_48 = NULL;
              n_48 = t;
              t = x_2(p_14, h_15, j_15, n_48, t);
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_30;
  t = whoami_0_0(t);
  i_31 = t;
  t = term_k_29;
  j_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_49), i_31);
  k_31 = t;
  t = SSL_printnl(j_31, k_31);
  t = term_w_18;
  l_31 = t;
  t = SSL_exit(l_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_48 = NULL;
  t = term_g_49;
  w_48 = t;
  t = l_3(w_48, t);
  return(t);
}
ATerm foldr_2_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm t)
{
  ATerm h_49 = t;
  int i_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_83(t);
      ;
      LocalPopChoice(i_49);
    }
  else
    {
      t = h_49;
      {
        ATerm o_31 = NULL,p_31 = NULL,v_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_31 = ATgetFirst((ATermList) t);
            p_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_31;
        t = foldr_2_0(c_83, d_83, t);
        v_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_31, v_31);
        t = d_83(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_j_47;
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL;
  if(match_cons(t, sym__2))
    {
      n_49 = ATgetArgument(t, 0);
      o_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_49, o_49);
        ;
        LocalPopChoice(m_49);
      }
    else
      {
        t = l_49;
        t = SSL_addr(n_49, o_49);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_31 = NULL,d_49 = NULL,j_49 = NULL,k_49 = NULL;
  t = times_0_0(t);
  d_49 = t;
  j_49 = t;
  t = SSL_explode_term(j_49);
  if(match_cons(t, sym__2))
    {
      ATerm p_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_49;
  t = foldr_2_0(o_15, r_15, t);
  z_31 = t;
  t = SSL_TicksToSeconds(z_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_32 = NULL,n_32 = NULL,o_32 = NULL;
  k_32 = t;
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_32;
        if((n_32 != t))
          {
            _fail(t);
          }
        t = k_32;
        ;
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        {
          ATerm t_49 = NULL,u_49 = NULL;
          t = n_32;
          t_49 = t;
          t = o_32;
          u_49 = t;
          t = k_32;
          {
            ATerm s_49 = t;
            int v_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(t_49, u_49);
                ;
                LocalPopChoice(v_49);
              }
            else
              {
                t = s_49;
                t = SSL_gtr(t_49, u_49);
              }
            t = (ATerm) ATmakeAppl(sym__2, n_32, o_32);
          }
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm w_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_32 = NULL,w_32 = NULL,z_49 = NULL;
      s_32 = t;
      t = term_x_6;
      z_49 = t;
      t = l_3(z_49, t);
      w_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_32, term_w_18);
      t = geq_0_0(t);
      t = s_32;
      t = h_88(t);
      ;
      LocalPopChoice(x_49);
    }
  else
    {
      t = w_49;
    }
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm z_32 = NULL,c_33 = NULL,e_33 = NULL,f_33 = NULL;
  t = run_time_0_0(t);
  z_32 = t;
  t = term_o_30;
  t = whoami_0_0(t);
  c_33 = t;
  t = term_k_29;
  e_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_49), z_32), term_i_19), c_33);
  f_33 = t;
  t = SSL_printnl(e_33, f_33);
  t = (ATerm) ATmakeAppl(sym__2, term_k_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_49), z_32), term_i_19), c_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_47;
  g_33 = t;
  t = SSL_exit(g_33);
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm a_50 = t;
  int e_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(e_50);
    }
  else
    {
      t = a_50;
      {
        ATerm g_50 = t;
        int j_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_50 = NULL,d_50 = NULL,f_50 = NULL,m_50 = NULL,h_50 = NULL,i_50 = NULL,c_3 = NULL,d_3 = NULL;
            c_50 = t;
            if(match_cons(t, sym_Undefined_1))
              {
                d_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            m_50 = t;
            t = c_50;
            f_50 = t;
            t = SSLgetAnnotations(f_50);
            h_50 = t;
            t = d_50;
            i_50 = t;
            d_3 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_50);
            c_3 = t;
            t = SSLsetAnnotations(c_3, h_50);
            ;
            LocalPopChoice(j_50);
          }
        else
          {
            t = g_50;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_50 = NULL;
      t = term_n_50;
      b_50 = t;
      t = l_3(b_50, t);
      ;
      LocalPopChoice(l_50);
    }
  else
    {
      t = k_50;
      t = fetch_1_0(t_15, t);
    }
  t = g_92(t);
  return(t);
}
ATerm b_3 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm o_33, ATerm t)
{
  ATerm k_33 = NULL,m_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_33 = ATgetFirst((ATermList) t);
      m_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_33 = NULL,u_33 = NULL,o_50 = NULL;
        t = m_33;
        t = g_0(t);
        t_33 = t;
        t = k_33;
        t = f_0(t);
        u_33 = t;
        t = m_33;
        o_50 = t;
        {
          ATerm c_16 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(t_33), u_33);
            return(t);
          }
          t = b_3(f_0, c_16, o_50, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_30;
      t = g_0(t);
    }
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,f_51 = NULL,m_51 = NULL,h_51 = NULL,i_51 = NULL,e_3 = NULL,g_3 = NULL;
  c_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  m_51 = t;
  t = c_51;
  f_51 = t;
  t = SSLgetAnnotations(f_51);
  h_51 = t;
  t = d_51;
  i_51 = t;
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_51);
  e_3 = t;
  t = SSLsetAnnotations(e_3, h_51);
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm e_34 = NULL,u_51 = NULL;
  e_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_34), term_p_50);
  u_51 = t;
  t = h_3(u_51, t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,p_51 = NULL,q_51 = NULL;
  ATerm q_50 = t;
  int r_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_51 = NULL;
      t = term_g_49;
      b_51 = t;
      t = l_3(b_51, t);
      ;
      LocalPopChoice(r_50);
    }
  else
    {
      t = q_50;
      t = fetch_1_0(d_16, t);
    }
  t = term_s_50;
  p_51 = t;
  t = h_3(p_51, t);
  t = term_c_48;
  c_34 = t;
  t = term_g_48;
  d_34 = t;
  t = SSL_table_get(c_34, d_34);
  q_51 = t;
  t = b_3(_id, h_16, q_51, t);
  t = map_1_0(j_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_76 (ATerm), ATerm t)
{
  ATerm l_34 (ATerm t)
  {
    ATerm t_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
        e_52 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_52 = ATgetFirst((ATermList) t);
            g_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_3(u_76, _id, e_52, f_52, g_52, t);
        ;
        LocalPopChoice(u_50);
      }
    else
      {
        t = t_50;
        {
          ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
          j_52 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_52 = ATgetFirst((ATermList) t);
              l_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_3(_id, l_34, j_52, k_52, l_52, t);
        }
      }
    return(t);
  }
  t = l_34(t);
  return(t);
}
ATerm h_3 (ATerm p_34, ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  ATerm v_50 = t;
  int w_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_34 = NULL;
      t_34 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = t_34;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_50 = ATgetFirst((ATermList) t);
              ATerm y_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_34;
        }
      ;
      LocalPopChoice(w_50);
    }
  else
    {
      t = v_50;
      t = (ATerm) ATinsert(ATempty, p_34);
    }
  q_34 = t;
  t = term_n_31;
  r_34 = t;
  t = q_34;
  s_34 = t;
  t = SSL_printnl(r_34, s_34);
  t = p_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_52 = NULL,p_52 = NULL;
  t = term_g_49;
  p_52 = t;
  t = l_3(p_52, t);
  r_52 = t;
  t = h_3(r_52, t);
  return(t);
}
ATerm k_3 (ATerm p_72 (ATerm), ATerm y_34, ATerm t)
{
  ATerm z_34 = NULL,c_35 = NULL,d_35 = NULL;
  t = p_72(t);
  z_34 = t;
  t = term_k_29;
  c_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_34), z_34);
  d_35 = t;
  t = SSL_printnl(c_35, d_35);
  t = y_34;
  return(t);
}
ATerm map_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm h_35 (ATerm t)
  {
    ATerm z_50 = t;
    int a_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_51);
      }
    else
      {
        t = z_50;
        {
          ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
          s_52 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_52 = ATgetFirst((ATermList) t);
              u_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_3(k_76, h_35, s_52, t_52, u_52, t);
        }
      }
    return(t);
  }
  t = h_35(t);
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm e_51 = t;
  int g_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_51);
    }
  else
    {
      t = e_51;
    }
  return(t);
}
ATerm e_17 (ATerm t)
{
  t = term_j_51;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_51 = t;
  int l_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_35 = NULL,y_52 = NULL;
      s_35 = t;
      y_52 = t;
      t = SSL_is_string(y_52);
      ;
      LocalPopChoice(l_51);
    }
  else
    {
      t = k_51;
      {
        ATerm n_51 = t;
        int o_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_16, t);
            ;
            LocalPopChoice(o_51);
          }
        else
          {
            t = n_51;
            {
              ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
              p_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_36 = ATgetArgument(t, 0);
                  t = q_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_36 = ATgetArgument(t, 0);
                      t = q_36;
                      {
                        ATerm r_51 = t;
                        int s_51 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_53 = NULL;
                            k_53 = t;
                            t = l_3(k_53, t);
                            ;
                            LocalPopChoice(s_51);
                          }
                        else
                          {
                            t = r_51;
                            {
                              ATerm l_53 = NULL;
                              l_53 = t;
                              t = k_3(e_17, l_53, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_36 = ATgetArgument(t, 0);
                          r_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_36;
                      t = eval_config_0_0(t);
                      s_53 = t;
                      t = r_36;
                      t = eval_config_0_0(t);
                      t_53 = t;
                      t = s_53;
                      u_53 = t;
                      t = t_53;
                      v_53 = t;
                      t = SSL_strcat(u_53, v_53);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_3 (ATerm z_36, ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  t = term_o_38;
  a_37 = t;
  t = z_36;
  b_37 = t;
  t = SSL_table_get(a_37, b_37);
  {
    ATerm t_51 = t;
    int v_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
        t = eval_config_0_0(t);
        c_37 = t;
        t = term_o_38;
        d_37 = t;
        t = z_36;
        e_37 = t;
        t = c_37;
        f_37 = t;
        t = SSL_table_put(d_37, e_37, f_37);
        t = c_37;
        ;
        LocalPopChoice(v_51);
      }
    else
      {
        t = t_51;
      }
  }
  return(t);
}
ATerm f_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  t = term_o_38;
  d_54 = t;
  t = term_w_51;
  e_54 = t;
  t = term_o_30;
  f_54 = t;
  t = SSL_table_put(d_54, e_54, f_54);
  t = term_x_51;
  return(t);
}
ATerm h_17 (ATerm t)
{
  t = term_y_51;
  return(t);
}
ATerm i_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  t = term_o_38;
  k_54 = t;
  t = term_w_51;
  l_54 = t;
  t = term_o_30;
  m_54 = t;
  t = SSL_table_put(k_54, l_54, m_54);
  t = term_o_38;
  n_54 = t;
  t = term_h_36;
  o_54 = t;
  t = term_o_30;
  p_54 = t;
  t = SSL_table_put(n_54, o_54, p_54);
  t = term_z_51;
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = term_a_52;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_52 = t;
  int c_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_53 = NULL;
      z_53 = t;
      t = x_2(f_17, g_17, h_17, z_53, t);
      ;
      LocalPopChoice(c_52);
    }
  else
    {
      t = b_52;
      {
        ATerm g_54 = NULL;
        g_54 = t;
        t = x_2(i_17, j_17, k_17, g_54, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,t_37 = NULL,x_37 = NULL;
  c_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_37 = ATgetFirst((ATermList) t);
      x_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_3(z_63, a_64, c_38, t_37, x_37, t);
  return(t);
}
ATerm m_3 (ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm c_38, ATerm t_37, ATerm x_37, ATerm t)
{
  ATerm s_37 = NULL,y_37 = NULL,b_38 = NULL,j_3 = NULL,p_3 = NULL;
  t = SSLgetAnnotations(c_38);
  s_37 = t;
  t = t_37;
  t = z_63(t);
  y_37 = t;
  t = x_37;
  t = a_64(t);
  b_38 = t;
  p_3 = t;
  t = (ATerm) ATinsert(CheckATermList(b_38), y_37);
  j_3 = t;
  t = SSLsetAnnotations(j_3, s_37);
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
  v_54 = t;
  t = term_o_38;
  w_54 = t;
  t = term_g_49;
  x_54 = t;
  t = v_54;
  y_54 = t;
  t = SSL_table_put(w_54, x_54, y_54);
  t = (ATerm) ATmakeAppl(sym_Program_1, v_54);
  return(t);
}
ATerm n_3 (ATerm e_94 (ATerm), ATerm j_38, ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
  ATerm d_52 = t;
  int h_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_52;
      t = e_94(t);
      ;
      LocalPopChoice(h_52);
    }
  else
    {
      t = d_52;
    }
  t = j_38;
  q_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_54 = ATgetFirst((ATermList) t);
      s_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm m_17 (ATerm t)
    {
      ATerm m_52 = t;
      int n_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_52 = t;
          int q_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              ;
              LocalPopChoice(q_52);
            }
          else
            {
              t = o_52;
              t = e_94(t);
              t = Cons_2_0(_id, m_17, t);
            }
          ;
          LocalPopChoice(n_52);
        }
      else
        {
          t = m_52;
          {
            ATerm a_55 = NULL,b_55 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_55 = ATgetFirst((ATermList) t);
                b_55 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_55), (ATerm) ATmakeAppl(sym_Undefined_1, a_55));
          }
        }
      return(t);
    }
    t = m_3(l_17, m_17, q_54, r_54, s_54, t);
  }
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm p_55 = NULL;
  p_55 = t;
  if(match_string(t, "--help"))
    {
      t = p_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_55;
        }
    }
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  t = term_o_38;
  q_55 = t;
  t = term_n_50;
  r_55 = t;
  t = term_o_30;
  s_55 = t;
  t = SSL_table_put(q_55, r_55, s_55);
  t = term_v_52;
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = term_w_52;
  return(t);
}
ATerm v_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm d_94 (ATerm), ATerm y_38, ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_55 = NULL;
  t = term_c_48;
  z_38 = t;
  t = term_g_48;
  a_39 = t;
  t = (ATerm) ATempty;
  b_39 = t;
  t = SSL_table_put(z_38, a_39, b_39);
  t = y_38;
  f_55 = t;
  {
    ATerm n_17 (ATerm t)
    {
      ATerm x_52 = t;
      int z_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_94(t);
          ;
          LocalPopChoice(z_52);
        }
      else
        {
          t = x_52;
          {
            ATerm a_53 = t;
            int b_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_55 = NULL;
                l_55 = t;
                t = x_2(o_17, p_17, q_17, l_55, t);
                ;
                LocalPopChoice(b_53);
              }
            else
              {
                t = a_53;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = n_3(n_17, f_55, t);
    {
      ATerm c_53 = t;
      int d_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_39 = NULL;
          p_39 = t;
          {
            ATerm e_53 = t;
            int f_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_55 = NULL;
                t = p_39;
                {
                  ATerm g_53 = t;
                  int h_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_56 = NULL;
                      t = term_n_50;
                      c_56 = t;
                      t = l_3(c_56, t);
                      ;
                      LocalPopChoice(h_53);
                    }
                  else
                    {
                      t = g_53;
                      t = fetch_1_0(v_17, t);
                    }
                  t = p_39;
                  t = default_system_usage_0_0(t);
                  t = term_j_47;
                  z_55 = t;
                  t = SSL_exit(z_55);
                }
                ;
                LocalPopChoice(f_53);
              }
            else
              {
                t = e_53;
                {
                  ATerm f_56 = NULL,i_56 = NULL;
                  t = term_w_51;
                  i_56 = t;
                  t = l_3(i_56, t);
                  t = p_39;
                  t = default_system_about_0_0(t);
                  t = term_j_47;
                  f_56 = t;
                  t = SSL_exit(f_56);
                }
              }
          }
          ;
          LocalPopChoice(d_53);
        }
      else
        {
          t = c_53;
          {
            ATerm i_53 = t;
            int j_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_39 = NULL,u_39 = NULL,x_39 = NULL;
                ATerm w_17 (ATerm t)
                {
                  ATerm j_56 = NULL,k_56 = NULL,m_56 = NULL,t_56 = NULL,o_56 = NULL,p_56 = NULL,q_3 = NULL,u_3 = NULL;
                  j_56 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_56 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t_56 = t;
                  t = j_56;
                  m_56 = t;
                  t = SSLgetAnnotations(m_56);
                  o_56 = t;
                  t = k_56;
                  if(((c_39 != NULL) && (c_39 != t)))
                    _fail(t);
                  else
                    c_39 = t;
                  p_56 = t;
                  u_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_56);
                  q_3 = t;
                  t = SSLsetAnnotations(q_3, o_56);
                  return(t);
                }
                t = fetch_1_0(w_17, t);
                t = term_k_29;
                t_39 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_39)), term_m_53);
                u_39 = t;
                t = SSL_printnl(t_39, u_39);
                t = (ATerm) ATmakeAppl(sym__2, term_k_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_39)), term_m_53));
                t = default_system_usage_0_0(t);
                t = term_w_18;
                x_39 = t;
                t = SSL_exit(x_39);
                ;
                LocalPopChoice(j_53);
              }
            else
              {
                t = i_53;
              }
          }
        }
      d_39 = t;
      t = term_c_48;
      e_39 = t;
      t = SSL_table_destroy(e_39);
      t = d_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,v_56 = NULL;
  v_56 = t;
  t = o_3(i_92, v_56, t);
  a_40 = t;
  t = term_n_53;
  b_40 = t;
  t = SSL_table_create(b_40);
  t = term_n_53;
  f_40 = t;
  t = term_o_53;
  g_40 = t;
  t = a_40;
  h_40 = t;
  t = SSL_table_put(f_40, g_40, h_40);
  t = a_40;
  t = k_92(t);
  {
    ATerm p_53 = t;
    int q_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_92, t);
        ;
        LocalPopChoice(q_53);
      }
    else
      {
        t = p_53;
        {
          ATerm r_53 = t;
          int w_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_53);
            }
          else
            {
              t = r_53;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm x_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      ;
      LocalPopChoice(y_53);
    }
  else
    {
      t = x_53;
      {
        ATerm a_54 = t;
        int b_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(b_54);
          }
        else
          {
            t = a_54;
            {
              ATerm c_54 = t;
              int h_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(h_54);
                }
              else
                {
                  t = c_54;
                  {
                    ATerm i_54 = t;
                    int j_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_56 = NULL;
                        x_56 = t;
                        t = x_2(b_18, g_18, k_18, x_56, t);
                        ;
                        LocalPopChoice(j_54);
                      }
                    else
                      {
                        t = i_54;
                        {
                          ATerm t_54 = t;
                          int u_54 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(u_54);
                            }
                          else
                            {
                              t = t_54;
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
ATerm z_17 (ATerm t)
{
  ATerm f_57 = NULL;
  f_57 = t;
  t = t_2(f_57, t);
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = xtc_io_1_0(n_18, t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
  t = term_o_38;
  b_57 = t;
  t = term_z_54;
  c_57 = t;
  t = term_o_30;
  d_57 = t;
  t = SSL_table_put(b_57, c_57, d_57);
  t = term_c_55;
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = term_d_55;
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,i_57 = NULL,j_57 = NULL;
  l_40 = t;
  t = term_e_55;
  t = xtc_find_path_0_0(t);
  m_40 = t;
  t = term_f_32;
  i_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_40), term_g_55);
  j_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_32, (ATerm) ATinsert(ATinsert(ATempty, m_40), term_g_55));
  t = o_1(i_57, j_57, t);
  t = l_40;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_17, z_17, _id, a_18, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
