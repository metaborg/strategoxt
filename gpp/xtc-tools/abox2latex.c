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
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
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
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_n_40;
ATerm term_e_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_c_39;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_s_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_z_35;
ATerm term_w_35;
ATerm term_t_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_p_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_a_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_q_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_z_29;
ATerm term_u_29;
ATerm term_z_28;
ATerm term_q_28;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_o_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_u_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_z_24;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_h_23;
ATerm term_a_23;
ATerm term_j_22;
ATerm term_q_21;
ATerm term_w_20;
ATerm term_p_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_b_17;
ATerm term_k_16;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_f_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_13;
ATerm term_f_11;
ATerm term_e_10;
ATerm term_g_9;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_s_5;
ATerm term_p_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_w_4;
ATerm term_v_4;
void init_constant_terms (void)
{
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_6, term_s_5, term_t_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_6, term_w_6, term_x_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_6, term_a_7, term_b_7);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_7, term_e_7, term_f_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_7, term_i_7, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_7, term_m_7, term_n_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_7, term_q_7, term_r_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_7, term_u_7, term_g_9);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_k_13, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_f_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_r_15, term_t_15);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_p_17, term_q_17);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_a_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_w_20, term_q_21);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_23, term_h_23, term_m_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_23, term_p_23, term_e_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_24, term_n_24, term_o_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_24, term_z_24, term_i_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_25, term_u_25, term_d_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_26, term_g_26, term_h_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_26, term_x_26, term_y_26);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_27, term_i_27, term_q_28);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_29, term_z_29, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_30, term_l_30, term_m_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_30, term_p_30, term_q_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_30, term_t_30, term_u_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_30, term_x_30, term_y_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_31, term_b_31, term_c_31);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym__2, term_q_31, term_x_31);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_q_31, term_t_32);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_e_34, term_v_33);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym__2, term_p_5, term_f_36);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym__2, term_k_36, term_a_5);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__2, term_g_38, term_h_38);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__2, term_j_39, term_a_5);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__2, term_m_39, term_a_5);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym__2, term_z_37, term_a_5);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__3, term_g_38, term_h_38, (ATerm) ATempty);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm c_0 (ATerm);
ATerm tables2text_0_0 (ATerm);
ATerm create_header_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm create_table_file_0_0 (ATerm);
ATerm e_0 (ATerm);
ATerm create_abox2latex_args_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm l_87 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm h_69 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm print_0_0 (ATerm);
ATerm assert_1_0 (ATerm x_83 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm obsolete_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm b_15 (ATerm r_14, ATerm);
ATerm c_15 (ATerm t_14, ATerm u_14, ATerm v_14, ATerm);
ATerm a_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm print_to_0_0 (ATerm);
ATerm x_15 (ATerm o_15, ATerm p_15, ATerm);
ATerm y_15 (ATerm s_15, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_text_1_0 (ATerm s_99 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm xtc_io_1_0 (ATerm t_98 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm ArgOption_2_0 (ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm abox2latex_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm);
ATerm crush_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm need_help_1_0 (ATerm l_70 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_68 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm a_28 (ATerm j_27, ATerm k_27, ATerm);
ATerm c_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm d_74 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_90 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_90 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm h_30 (ATerm c_30, ATerm);
ATerm parse_options_1_0 (ATerm m_90 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm io_abox2latex_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_4), not_null(w_7)), term_v_4);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm x_4 = t;
  int y_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_4;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_4);
    }
  else
    {
      t = x_4;
      t = (ATerm) ATempty;
    }
  t = map_1_0(c_0, t);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  if(((x_7 != NULL) && (x_7 != t)))
    _fail(t);
  else
    x_7 = t;
  t = term_a_5;
  t = tables2text_0_0(t);
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_5), term_m_5), term_l_5), term_b_5), term_k_5), term_j_5), term_i_5), term_h_5), term_g_5), term_b_5), not_null(y_7)), term_f_5), term_e_5), term_b_5), term_d_5), term_b_5), term_c_5), term_b_5);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_7 != NULL) && (z_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_7 = ATgetArgument(t, 0);
      if(((a_8 != NULL) && (a_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_5 = t;
    int o_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(z_7), not_null(a_8));
        ;
        LocalPopChoice(o_5);
      }
    else
      {
        t = n_5;
        t = SSL_subtr(not_null(z_7), not_null(a_8));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  if(((b_8 != NULL) && (b_8 != t)))
    _fail(t);
  else
    b_8 = t;
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  t = term_p_5;
  {
    ATerm q_5 = t;
    int r_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_5);
      }
    else
      {
        t = q_5;
        t = term_s_5;
      }
    if(((d_8 != NULL) && (d_8 != t)))
      _fail(t);
    else
      d_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), term_s_5);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((e_8 != NULL) && (e_8 != t)))
      _fail(t);
    else
      e_8 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_8)), term_p_5);
  }
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  ATerm t_5 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_4;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_5);
    }
  else
    {
      t = t_5;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  if(((f_8 != NULL) && (f_8 != t)))
    _fail(t);
  else
    f_8 = t;
  if(((g_8 != NULL) && (g_8 != t)))
    _fail(t);
  else
    g_8 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(g_8)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_g_6), term_f_6)), (ATerm) ATinsert(ATinsert(ATempty, term_e_6), term_d_6)), (ATerm) ATinsert(ATinsert(ATempty, term_c_6), term_b_6)), (ATerm) ATinsert(ATinsert(ATempty, term_a_6), term_z_5)), (ATerm) ATinsert(ATinsert(ATempty, term_y_5), term_x_5)), (ATerm) ATinsert(ATinsert(ATempty, term_w_5), term_v_5)));
  t = concat_0_0(t);
  t = write_to_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      if(((h_8 != NULL) && (h_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(h_8);
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  t = term_h_6;
  t = get_config_0_0(t);
  if(((n_8 != NULL) && (n_8 != t)))
    _fail(t);
  else
    n_8 = t;
  t = not_null(m_8);
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  if(((p_8 != NULL) && (p_8 != t)))
    _fail(t);
  else
    p_8 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_8)), not_null(n_8)), term_i_6);
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
  if(((i_8 != NULL) && (i_8 != t)))
    _fail(t);
  else
    i_8 = t;
  t = term_a_5;
  t = create_table_file_0_0(t);
  if(((j_8 != NULL) && (j_8 != t)))
    _fail(t);
  else
    j_8 = t;
  t = not_null(i_8);
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  t = term_a_5;
  t = pass_verbose_0_0(t);
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_8)), not_null(j_8)), term_j_6);
  t = try_1_0(e_0, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_6 = ATgetArgument(t, 0);
      if(match_cons(k_6, sym_Stream_1))
        {
          if(((q_8 != NULL) && (q_8 != ATgetArgument(k_6, 0))))
            _fail(ATgetArgument(k_6, 0));
          else
            q_8 = ATgetArgument(k_6, 0);
        }
      else
        _fail(t);
      if(((r_8 != NULL) && (r_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(q_8), not_null(r_8));
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  if(((t_8 != NULL) && (t_8 != t)))
    _fail(t);
  else
    t_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_8));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_8 != NULL) && (u_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_8 = ATgetArgument(t, 0);
      if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(u_8);
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), term_l_6);
  t = open_stream_0_0(t);
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(v_8));
  t = g_88(t);
  t = fclose_0_0(t);
  t = not_null(v_8);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  if(((a_9 != NULL) && (a_9 != t)))
    _fail(t);
  else
    a_9 = t;
  if(((b_9 != NULL) && (b_9 != t)))
    _fail(t);
  else
    b_9 = t;
  t = xtc_new_file_0_0(t);
  if(((c_9 != NULL) && (c_9 != t)))
    _fail(t);
  else
    c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), not_null(a_9));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(c_9);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_9));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(p_99, q_99, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_9 != NULL) && (d_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_9 = ATgetArgument(t, 0);
      if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(d_9), not_null(e_9));
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm f_9 = NULL;
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  t = SSL_int_to_string(not_null(f_9));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_9 = ATgetArgument(t, 0);
      {
        ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
        t = not_null(i_9);
        if(((l_9 != NULL) && (l_9 != t)))
          _fail(t);
        else
          l_9 = t;
        t = not_null(h_9);
        if(((m_9 != NULL) && (m_9 != t)))
          _fail(t);
        else
          m_9 = t;
        if(((n_9 != NULL) && (n_9 != t)))
          _fail(t);
        else
          n_9 = t;
        t = not_null(l_9);
        t = int_to_string_0_0(t);
        if(((o_9 != NULL) && (o_9 != t)))
          _fail(t);
        else
          o_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_6), not_null(o_9)), term_m_6);
        t = concat_strings_0_0(t);
        if(((p_9 != NULL) && (p_9 != t)))
          _fail(t);
        else
          p_9 = t;
      }
    }
  else
    {
      ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((i_9 != NULL) && (i_9 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_9 = ATgetArgument(t, 0);
          if(((j_9 != NULL) && (j_9 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_9 = ATgetArgument(t, 1);
          if(((k_9 != NULL) && (k_9 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            k_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(i_9);
      if(((q_9 != NULL) && (q_9 != t)))
        _fail(t);
      else
        q_9 = t;
      t = not_null(j_9);
      if(((r_9 != NULL) && (r_9 != t)))
        _fail(t);
      else
        r_9 = t;
      t = not_null(k_9);
      if(((s_9 != NULL) && (s_9 != t)))
        _fail(t);
      else
        s_9 = t;
      t = not_null(h_9);
      if(((t_9 != NULL) && (t_9 != t)))
        _fail(t);
      else
        t_9 = t;
      if(((u_9 != NULL) && (u_9 != t)))
        _fail(t);
      else
        u_9 = t;
      t = not_null(r_9);
      t = int_to_string_0_0(t);
      if(((v_9 != NULL) && (v_9 != t)))
        _fail(t);
      else
        v_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_9)), term_p_6), not_null(v_9)), term_o_6), not_null(q_9));
      t = concat_strings_0_0(t);
      if(((w_9 != NULL) && (w_9 != t)))
        _fail(t);
      else
        w_9 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm x_9 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = i_76(t);
    if(((x_9 != NULL) && (x_9 != t)))
      _fail(t);
    else
      x_9 = t;
    return(t);
  }
  t = fetch_1_0(n_0, t);
  t = not_null(x_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  if(((y_9 != NULL) && (y_9 != t)))
    _fail(t);
  else
    y_9 = t;
  {
    ATerm q_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_31), term_z_30), term_v_30), term_r_30), term_n_30), term_j_30), term_z_28), term_a_27), term_o_26), term_e_26), term_j_25), term_p_24), term_f_24), term_n_23), term_j_22), term_g_20), term_r_17), term_k_16), term_m_15), term_p_14), term_e_10), term_s_7), term_o_7), term_k_7), term_g_7), term_c_7), term_y_6), term_u_6);
        {
          ATerm o_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm e_31 = ATgetArgument(t, 0);
                if(((y_9 != NULL) && (y_9 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_9 = ATgetArgument(t, 1);
                {
                  ATerm f_31 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(o_0, t);
        }
        ;
        LocalPopChoice(r_6);
      }
    else
      {
        t = q_6;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(y_9));
      }
  }
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if(((a_10 != NULL) && (a_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_10 = ATgetArgument(t, 1);
      {
        ATerm h_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(a_10);
  {
    ATerm i_31 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_31;
      }
    t = signal_from_number_0_0(t);
    t = signal_to_descr_0_0(t);
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    if(((c_10 != NULL) && (c_10 != t)))
      _fail(t);
    else
      c_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_10)), term_k_31));
    t = printnl_0_0(t);
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  t = try_1_0(p_0, t);
  t = not_null(z_9);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm d_10 = NULL;
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  t = SSL_waitpid(not_null(d_10));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  if(((f_10 != NULL) && (f_10 != t)))
    _fail(t);
  else
    f_10 = t;
  t = fork_0_0(t);
  if(((g_10 != NULL) && (g_10 != t)))
    _fail(t);
  else
    g_10 = t;
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL;
        if(((h_10 != NULL) && (h_10 != t)))
          _fail(t);
        else
          h_10 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(f_10);
        t = j_87(t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_10), not_null(f_10));
        t = k_87(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm i_10 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm j_10 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((j_10 != NULL) && (j_10 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_10 = ATgetArgument(t, 0);
        if(((i_10 != NULL) && (i_10 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(j_10);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm n_31 = ATgetArgument(t, 0);
        if(((ATgetType(n_31) != AT_INT) || (ATgetInt((ATermInt) n_31) != 0)))
          _fail(t);
        {
          ATerm o_31 = ATgetArgument(t, 1);
        }
        {
          ATerm p_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(i_10);
    return(t);
  }
  t = fork_2_0(l_87, q_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_10 != NULL) && (k_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_10 = ATgetArgument(t, 0);
      if(((l_10 != NULL) && (l_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_10), not_null(l_10));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(r_0, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm m_10 = NULL;
  if(((m_10 != NULL) && (m_10 != t)))
    _fail(t);
  else
    m_10 = t;
  t = SSL_table_keys(not_null(m_10));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_10 = NULL;
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  t = table_keys_0_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
      if(((o_10 != NULL) && (o_10 != t)))
        _fail(t);
      else
        o_10 = t;
      if(((p_10 != NULL) && (p_10 != t)))
        _fail(t);
      else
        p_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), not_null(o_10));
      t = table_get_0_0(t);
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), not_null(q_10));
      return(t);
    }
    t = map_1_0(s_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    if(((s_10 != NULL) && (s_10 != t)))
      _fail(t);
    else
      s_10 = t;
    t = term_p_5;
    t = get_config_0_0(t);
    if(((t_10 != NULL) && (t_10 != t)))
      _fail(t);
    else
      t_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), term_p_30);
    t = geq_0_0(t);
    t = not_null(r_10);
    t = u_97(t);
    return(t);
  }
  t = try_1_0(t_0, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  if(((u_10 != NULL) && (u_10 != t)))
    _fail(t);
  else
    u_10 = t;
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, not_null(w_10));
  t = printnl_0_0(t);
  t = not_null(u_10);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  if(((x_10 != NULL) && (x_10 != t)))
    _fail(t);
  else
    x_10 = t;
  if(((y_10 != NULL) && (y_10 != t)))
    _fail(t);
  else
    y_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_10)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_31 = ATgetFirst((ATermList) t);
      if(match_cons(r_31, sym__2))
        {
          if(((z_10 != NULL) && (z_10 != ATgetArgument(r_31, 0))))
            _fail(ATgetArgument(r_31, 0));
          else
            z_10 = ATgetArgument(r_31, 0);
          if(((a_11 != NULL) && (a_11 != ATgetArgument(r_31, 1))))
            _fail(ATgetArgument(r_31, 1));
          else
            a_11 = ATgetArgument(r_31, 1);
        }
      else
        _fail(t);
      {
        ATerm s_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(a_11);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_11 != NULL) && (b_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_11 = ATgetArgument(t, 0);
      if(((c_11 != NULL) && (c_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(b_11)));
  t = table_get_0_0(t);
  {
    ATerm u_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((c_11 != NULL) && (c_11 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_11 = ATgetArgument(t, 0);
          if(((e_11 != NULL) && (e_11 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(u_0, t);
    t = not_null(e_11);
  }
  return(t);
}
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = filter_1_0(b_84, t);
              return(t);
            }
            t = Cons_2_0(b_84, v_0, t);
            ;
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            {
              ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
              if(((g_11 != NULL) && (g_11 != t)))
                _fail(t);
              else
                g_11 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((h_11 != NULL) && (h_11 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    h_11 = ATgetFirst((ATermList) t);
                  if(((i_11 != NULL) && (i_11 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    i_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(i_11);
              if(((j_11 != NULL) && (j_11 != t)))
                _fail(t);
              else
                j_11 = t;
              t = filter_1_0(b_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm k_11 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      t = v_85(t);
      t = k_11(t);
      return(t);
    }
    t = try_1_0(w_0, t);
    return(t);
  }
  t = k_11(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_y_31;
  t = table_get_0_0(t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm z_31 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_31;
      }
  }
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm l_11 = NULL;
  if(((l_11 != NULL) && (l_11 != t)))
    _fail(t);
  else
    l_11 = t;
  t = repeat_1_0(x_0, t);
  t = not_null(l_11);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  if(((m_11 != NULL) && (m_11 != t)))
    _fail(t);
  else
    m_11 = t;
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATinsert(ATempty, not_null(o_11)));
  t = printnl_0_0(t);
  t = not_null(m_11);
  return(t);
}
ATerm say_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm p_11 = NULL;
  if(((p_11 != NULL) && (p_11 != t)))
    _fail(t);
  else
    p_11 = t;
  t = s_87(t);
  t = debug_0_0(t);
  t = not_null(p_11);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    if(((r_11 != NULL) && (r_11 != t)))
      _fail(t);
    else
      r_11 = t;
    t = term_p_5;
    t = get_config_0_0(t);
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), term_p_17);
    t = geq_0_0(t);
    t = not_null(q_11);
    t = t_97(t);
    return(t);
  }
  t = try_1_0(y_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    if(((u_11 != NULL) && (u_11 != t)))
      _fail(t);
    else
      u_11 = t;
    t = term_p_5;
    t = get_config_0_0(t);
    if(((v_11 != NULL) && (v_11 != t)))
      _fail(t);
    else
      v_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), term_e_7);
    t = geq_0_0(t);
    t = not_null(t_11);
    t = v_97(t);
    return(t);
  }
  t = try_1_0(z_0, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_11 != NULL) && (w_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_11 = ATgetArgument(t, 0);
      if(((w_11 != NULL) && (w_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((x_11 != NULL) && (x_11 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        x_11 = ATgetFirst((ATermList) t);
      if(((y_11 != NULL) && (y_11 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        y_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  t = e_80(t);
  {
    ATerm a_1 (ATerm t)
    {
      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
      if(((a_12 != NULL) && (a_12 != t)))
        _fail(t);
      else
        a_12 = t;
      if(((b_12 != NULL) && (b_12 != t)))
        _fail(t);
      else
        b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), not_null(a_12));
      t = d_80(t);
      if(((c_12 != NULL) && (c_12 != t)))
        _fail(t);
      else
        c_12 = t;
      return(t);
    }
    t = fetch_1_0(a_1, t);
    t = not_null(y_11);
  }
  return(t);
}
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_12 != NULL) && (d_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_12 = ATgetArgument(t, 0);
      if(((e_12 != NULL) && (e_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = not_null(d_12);
  {
    ATerm h_12 (ATerm t)
    {
      ATerm a_32 = t;
      int b_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(e_12);
          ;
          LocalPopChoice(b_32);
        }
      else
        {
          t = a_32;
          {
            ATerm c_32 = t;
            int d_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_1 (ATerm t)
                {
                  t = not_null(e_12);
                  return(t);
                }
                t = HdMember_p__2_0(a_80, b_1, t);
                t = h_12(t);
                ;
                LocalPopChoice(d_32);
              }
            else
              {
                t = c_32;
                t = Cons_2_0(_id, h_12, t);
              }
          }
        }
      return(t);
    }
    t = h_12(t);
    if(((g_12 != NULL) && (g_12 != t)))
      _fail(t);
    else
      g_12 = t;
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((i_12 != NULL) && (i_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_12 = ATgetArgument(t, 0);
      if(((j_12 != NULL) && (j_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_12 = ATgetArgument(t, 1);
      if(((k_12 != NULL) && (k_12 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_12), not_null(j_12));
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        t = (ATerm) ATempty;
      }
    if(((o_12 != NULL) && (o_12 != t)))
      _fail(t);
    else
      o_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), not_null(k_12));
    t = union_0_0(t);
    if(((p_12 != NULL) && (p_12 != t)))
      _fail(t);
    else
      p_12 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(i_12), not_null(j_12), not_null(p_12));
    t = set_0_0(t);
    t = not_null(l_12);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_12 != NULL) && (r_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_12 = ATgetArgument(t, 0);
      if(((q_12 != NULL) && (q_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_12);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm s_12 = NULL,t_12 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((s_12 != NULL) && (s_12 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_12 = ATgetArgument(t, 0);
          if(((t_12 != NULL) && (t_12 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(r_12), not_null(s_12), not_null(t_12));
      t = a_84(t);
      return(t);
    }
    t = map_1_0(c_1, t);
  }
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  if(((v_12 != NULL) && (v_12 != t)))
    _fail(t);
  else
    v_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), (ATerm) ATinsert(ATempty, term_g_32));
  t = access_0_0(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(k_32);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_32;
      {
        ATerm l_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_32 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_32;
              }
            t = debug_1_0(d_1, t);
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = l_32;
            t = debug_1_0(e_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = say_1_0(k_1, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = say_1_0(m_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = say_1_0(o_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  t = if_verbose5_1_0(f_1, t);
  {
    ATerm s_32 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_31, (ATerm) ATmakeAppl(sym_Imported_1, not_null(w_12)));
        t = table_get_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_32;
      }
    if(((x_12 != NULL) && (x_12 != t)))
      _fail(t);
    else
      x_12 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_q_31, term_t_32, (ATerm) ATinsert(ATempty, not_null(w_12)));
    t = table_put_0_0(t);
    t = not_null(x_12);
    t = if_verbose4_1_0(h_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(j_1, t);
    if(((y_12 != NULL) && (y_12 != t)))
      _fail(t);
    else
      y_12 = t;
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_31, not_null(z_12));
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(l_1, t);
    t = (ATerm) ATmakeAppl(sym__3, term_q_31, (ATerm)ATmakeAppl(sym_Imported_1, not_null(w_12)), (ATerm) ATempty);
    t = table_put_0_0(t);
    t = if_verbose4_1_0(n_1, t);
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm a_13 = NULL;
  if(((a_13 != NULL) && (a_13 != t)))
    _fail(t);
  else
    a_13 = t;
  t = SSL_getenv(not_null(a_13));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_32;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm b_13 = NULL;
  t = if_verbose5_1_0(p_1, t);
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_33;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(b_13);
    t = if_verbose5_1_0(r_1, t);
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
  t = term_f_33;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_q_31;
  t = table_getlist_0_0(t);
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(t_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            t = xtc_find_loc_0_0(t);
          }
        t = if_verbose5_1_0(v_1, t);
      }
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
        ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
        if(((c_13 != NULL) && (c_13 != t)))
          _fail(t);
        else
          c_13 = t;
        if(((d_13 != NULL) && (d_13 != t)))
          _fail(t);
        else
          d_13 = t;
        t = not_null(c_13);
        if(((e_13 != NULL) && (e_13 != t)))
          _fail(t);
        else
          e_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_33), not_null(e_13)), term_l_33);
        t = error_0_0(t);
        t = if_verbose5_1_0(x_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  t = g_99(t);
  t = xtc_find_warning_0_0(t);
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = not_null(f_13);
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  if(((i_13 != NULL) && (i_13 != t)))
    _fail(t);
  else
    i_13 = t;
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(j_13));
  t = call_0_0(t);
  t = not_null(h_13);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  if(((l_13 != NULL) && (l_13 != t)))
    _fail(t);
  else
    l_13 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
      t = not_null(l_13);
      if(((n_13 != NULL) && (n_13 != t)))
        _fail(t);
      else
        n_13 = t;
      t = xtc_new_file_0_0(t);
      if(((o_13 != NULL) && (o_13 != t)))
        _fail(t);
      else
        o_13 = t;
      if(((p_13 != NULL) && (p_13 != t)))
        _fail(t);
      else
        p_13 = t;
      t = m_0(t);
      if(((q_13 != NULL) && (q_13 != t)))
        _fail(t);
      else
        q_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_13)), term_n_33));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(o_13);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_13));
    }
  else
    {
      ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((m_13 != NULL) && (m_13 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(m_13);
      if(((r_13 != NULL) && (r_13 != t)))
        _fail(t);
      else
        r_13 = t;
      t = not_null(l_13);
      if(((s_13 != NULL) && (s_13 != t)))
        _fail(t);
      else
        s_13 = t;
      t = not_null(r_13);
      t = xtc_new_file_0_0(t);
      if(((t_13 != NULL) && (t_13 != t)))
        _fail(t);
      else
        t_13 = t;
      if(((u_13 != NULL) && (u_13 != t)))
        _fail(t);
      else
        u_13 = t;
      t = m_0(t);
      if(((v_13 != NULL) && (v_13 != t)))
        _fail(t);
      else
        v_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_13)), term_n_33), not_null(r_13)), term_o_33));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(t_13);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_13));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm h_69 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  if(((z_13 != NULL) && (z_13 != t)))
    _fail(t);
  else
    z_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((x_13 != NULL) && (x_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((a_14 != NULL) && (a_14 != t)))
    _fail(t);
  else
    a_14 = t;
  t = SSLgetAnnotations(not_null(z_13));
  if(((w_13 != NULL) && (w_13 != t)))
    _fail(t);
  else
    w_13 = t;
  t = not_null(x_13);
  t = h_69(t);
  if(((y_13 != NULL) && (y_13 != t)))
    _fail(t);
  else
    y_13 = t;
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(y_13)), not_null(w_13));
  if(((b_14 != NULL) && (b_14 != t)))
    _fail(t);
  else
    b_14 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_33 = t;
      int s_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(s_33);
        }
      else
        {
          t = r_33;
          t = stdin_0_0(t);
        }
      LocalPopChoice(q_33);
      t = xtc_transform_file_2_0(i_99, j_99, t);
    }
  else
    {
      t = p_33;
      t = xtc_transform_term_2_0(i_99, j_99, t);
    }
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  t = SSL_close_file(not_null(d_14));
  return(t);
}
ATerm print_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_14 != NULL) && (e_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_14 = ATgetArgument(t, 0);
      if(((f_14 != NULL) && (f_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  t = SSL_print(not_null(e_14), not_null(f_14));
  t = not_null(g_14);
  return(t);
}
ATerm assert_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_14 != NULL) && (h_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_14 = ATgetArgument(t, 0);
      if(((i_14 != NULL) && (i_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  t = x_83(t);
  if(((k_14 != NULL) && (k_14 != t)))
    _fail(t);
  else
    k_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(k_14), not_null(h_14), not_null(i_14));
  t = table_push_0_0(t);
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), term_v_33);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_14 != NULL) && (l_14 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_14 = ATgetFirst((ATermList) t);
        if(((m_14 != NULL) && (m_14 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          m_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(k_14), term_v_33, (ATerm) ATinsert(CheckATermList(not_null(m_14)), (ATerm) ATinsert(CheckATermList(not_null(l_14)), not_null(h_14))));
    t = table_put_0_0(t);
    t = not_null(j_14);
  }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm obsolete_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm n_14 = NULL;
  if(((n_14 != NULL) && (n_14 != t)))
    _fail(t);
  else
    n_14 = t;
  t = v_87(t);
  t = debug_1_0(z_1, t);
  t = not_null(n_14);
  return(t);
}
ATerm b_15 (ATerm r_14, ATerm t)
{
  ATerm s_14 = NULL;
  t = not_null(r_14);
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = not_null(r_14);
  {
    ATerm x_33 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_33 = ATgetArgument(t, 0);
            ATerm z_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_33;
      }
    t = obsolete_1_0(a_2, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), term_l_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm c_15 (ATerm t_14, ATerm u_14, ATerm v_14, ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  t = not_null(t_14);
  if(((w_14 != NULL) && (w_14 != t)))
    _fail(t);
  else
    w_14 = t;
  t = not_null(u_14);
  if(((x_14 != NULL) && (x_14 != t)))
    _fail(t);
  else
    x_14 = t;
  t = SSL_open_file(not_null(w_14), not_null(x_14));
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_15(not_null(y_14), t);
            ;
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            t = c_15(not_null(z_14), not_null(a_15), not_null(y_14), t);
          }
      }
    }
  else
    {
      t = b_15(not_null(y_14), t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = file_exists_0_0(t);
  t = new_file_0_0(t);
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  if(((d_15 != NULL) && (d_15 != t)))
    _fail(t);
  else
    d_15 = t;
  t = term_a_5;
  t = new_0_0(t);
  if(((e_15 != NULL) && (e_15 != t)))
    _fail(t);
  else
    e_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), term_d_34);
  t = conc_strings_0_0(t);
  t = try_1_0(b_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  t = new_file_0_0(t);
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_15), term_l_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_15), term_a_5);
  t = assert_1_0(c_2, t);
  t = not_null(h_15);
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  if(((j_15 != NULL) && (j_15 != t)))
    _fail(t);
  else
    j_15 = t;
  t = xtc_new_file_0_0(t);
  if(((k_15 != NULL) && (k_15 != t)))
    _fail(t);
  else
    k_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(i_15));
  t = print_0_0(t);
  t = not_null(k_15);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_15));
  return(t);
}
ATerm x_15 (ATerm o_15, ATerm p_15, ATerm t)
{
  ATerm q_15 = NULL;
  t = not_null(o_15);
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  t = SSL_fclose(not_null(q_15));
  return(t);
}
ATerm y_15 (ATerm s_15, ATerm t)
{
  ATerm u_15 = NULL;
  t = not_null(s_15);
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  t = SSL_fclose(not_null(u_15));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  if(((w_15 != NULL) && (w_15 != t)))
    _fail(t);
  else
    w_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_15 = ATgetArgument(t, 0);
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_15(not_null(v_15), not_null(w_15), t);
            ;
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            t = y_15(not_null(w_15), t);
          }
      }
    }
  else
    {
      t = y_15(not_null(w_15), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((z_15 != NULL) && (z_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(z_15));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_16 != NULL) && (a_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_16 = ATgetArgument(t, 0);
      if(((b_16 != NULL) && (b_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(a_16), not_null(b_16));
  if(((c_16 != NULL) && (c_16 != t)))
    _fail(t);
  else
    c_16 = t;
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_16));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  t = SSL_stdin_stream();
  if(((e_16 != NULL) && (e_16 != t)))
    _fail(t);
  else
    e_16 = t;
  if(((f_16 != NULL) && (f_16 != t)))
    _fail(t);
  else
    f_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_16));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  t = SSL_stdout_stream();
  if(((g_16 != NULL) && (g_16 != t)))
    _fail(t);
  else
    g_16 = t;
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_16));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  t = SSL_stderr_stream();
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_16));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_16 = NULL;
  if(((l_16 != NULL) && (l_16 != t)))
    _fail(t);
  else
    l_16 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(l_16);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(l_16);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(l_16);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  if(((m_16 != NULL) && (m_16 != t)))
    _fail(t);
  else
    m_16 = t;
  if(((n_16 != NULL) && (n_16 != t)))
    _fail(t);
  else
    n_16 = t;
  t = not_null(m_16);
  if(((o_16 != NULL) && (o_16 != t)))
    _fail(t);
  else
    o_16 = t;
  t = SSL_explode_term(not_null(o_16));
  if(match_cons(t, sym__2))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_34 = ATgetArgument(t, 1);
        if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
          {
            if(((q_16 != NULL) && (q_16 != ATgetFirst((ATermList) i_34))))
              _fail(ATgetFirst((ATermList) i_34));
            else
              q_16 = ATgetFirst((ATermList) i_34);
            if(((p_16 != NULL) && (p_16 != (ATerm) ATgetNext((ATermList) i_34))))
              _fail((ATerm) ATgetNext((ATermList) i_34));
            else
              p_16 = (ATerm) ATgetNext((ATermList) i_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(q_16);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm r_16 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((r_16 != NULL) && (r_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(r_16);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_34 = ATgetArgument(t, 0);
      ATerm k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        {
          ATerm n_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(d_2, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(o_34);
            }
          else
            {
              t = n_34;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
      if(((s_16 != NULL) && (s_16 != t)))
        _fail(t);
      else
        s_16 = t;
      if(((t_16 != NULL) && (t_16 != t)))
        _fail(t);
      else
        t_16 = t;
      t = not_null(s_16);
      if(((u_16 != NULL) && (u_16 != t)))
        _fail(t);
      else
        u_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), term_s_34);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      t = debug_1_0(e_2, t);
      _fail(t);
    }
  if(((v_16 != NULL) && (v_16 != t)))
    _fail(t);
  else
    v_16 = t;
  t = read_from_stream_0_0(t);
  if(((w_16 != NULL) && (w_16 != t)))
    _fail(t);
  else
    w_16 = t;
  t = not_null(v_16);
  t = fclose_0_0(t);
  t = not_null(w_16);
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_16 != NULL) && (x_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_16 = ATgetArgument(t, 0);
      if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(x_16), not_null(y_16));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  if(((z_16 != NULL) && (z_16 != t)))
    _fail(t);
  else
    z_16 = t;
  if(((a_17 != NULL) && (a_17 != t)))
    _fail(t);
  else
    a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), (ATerm) ATinsert(ATempty, term_t_34));
  t = access_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_17 = NULL,f_17 = NULL;
      t = not_null(c_17);
      if(((e_17 != NULL) && (e_17 != t)))
        _fail(t);
      else
        e_17 = t;
      t = term_u_34;
      t = ReadFromFile_0_0(t);
      if(((f_17 != NULL) && (f_17 != t)))
        _fail(t);
      else
        f_17 = t;
    }
  else
    {
      ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((d_17 != NULL) && (d_17 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(d_17);
      if(((g_17 != NULL) && (g_17 != t)))
        _fail(t);
      else
        g_17 = t;
      t = not_null(c_17);
      if(((h_17 != NULL) && (h_17 != t)))
        _fail(t);
      else
        h_17 = t;
      t = not_null(g_17);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((i_17 != NULL) && (i_17 != t)))
        _fail(t);
      else
        i_17 = t;
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm s_99 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = s_99(t);
  t = print_to_0_0(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  if(((j_17 != NULL) && (j_17 != t)))
    _fail(t);
  else
    j_17 = t;
  t = xtc_transform_2_0(g_2, create_abox2latex_args_0_0, t);
  if(((k_17 != NULL) && (k_17 != t)))
    _fail(t);
  else
    k_17 = t;
  t = not_null(j_17);
  if(((l_17 != NULL) && (l_17 != t)))
    _fail(t);
  else
    l_17 = t;
  t = term_v_34;
  t = create_header_0_0(t);
  if(((m_17 != NULL) && (m_17 != t)))
    _fail(t);
  else
    m_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_17)), not_null(m_17));
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(f_2, t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_17 != NULL) && (n_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_17 = ATgetArgument(t, 0);
      if(((o_17 != NULL) && (o_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(n_17), not_null(o_17));
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stderr_0)))
    _fail(t);
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdout_0)))
    _fail(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm h_18 (ATerm s_17, ATerm t_17, ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
    t = not_null(s_17);
    if(((u_17 != NULL) && (u_17 != t)))
      _fail(t);
    else
      u_17 = t;
    t = not_null(t_17);
    if(((v_17 != NULL) && (v_17 != t)))
      _fail(t);
    else
      v_17 = t;
    t = k_0(t);
    if(((w_17 != NULL) && (w_17 != t)))
      _fail(t);
    else
      w_17 = t;
    {
      ATerm x_34 = t;
      int y_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(y_34);
        }
      else
        {
          t = x_34;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(w_17));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_17));
    }
    return(t);
  }
  ATerm i_18 (ATerm x_17, ATerm y_17, ATerm t)
  {
    ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
    t = not_null(x_17);
    if(((z_17 != NULL) && (z_17 != t)))
      _fail(t);
    else
      z_17 = t;
    t = not_null(y_17);
    if(((a_18 != NULL) && (a_18 != t)))
      _fail(t);
    else
      a_18 = t;
    t = k_0(t);
    if(((b_18 != NULL) && (b_18 != t)))
      _fail(t);
    else
      b_18 = t;
    {
      ATerm z_34 = t;
      if((PushChoice() == 0))
        {
          ATerm a_35 = t;
          int b_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(b_35);
            }
          else
            {
              t = a_35;
              {
                ATerm c_35 = t;
                int d_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(d_35);
                  }
                else
                  {
                    t = c_35;
                    {
                      ATerm c_18 = NULL;
                      if(((c_18 != NULL) && (c_18 != t)))
                        _fail(t);
                      else
                        c_18 = t;
                      if(((z_17 != NULL) && (z_17 != t)))
                        _fail(t);
                      else
                        z_17 = t;
                      t = not_null(c_18);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_34;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(b_18));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_17));
    }
    return(t);
  }
  ATerm d_18 = NULL,e_18 = NULL;
  if(((d_18 != NULL) && (d_18 != t)))
    _fail(t);
  else
    d_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((e_18 != NULL) && (e_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_18(not_null(e_18), not_null(d_18), t);
        ;
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        {
          ATerm g_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_18(not_null(e_18), not_null(d_18), t);
              ;
              LocalPopChoice(h_35);
            }
          else
            {
              t = g_35;
              {
                ATerm f_18 = NULL,g_18 = NULL;
                t = not_null(e_18);
                if(((f_18 != NULL) && (f_18 != t)))
                  _fail(t);
                else
                  f_18 = t;
                t = not_null(d_18);
                if(((g_18 != NULL) && (g_18 != t)))
                  _fail(t);
                else
                  g_18 = t;
                t = k_0(t);
                if(((f_18 != NULL) && (f_18 != t)))
                  _fail(t);
                else
                  f_18 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_18));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_35 = ATgetFirst((ATermList) t);
      if(((j_18 != NULL) && (j_18 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        j_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(j_18);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_18 != NULL) && (k_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_18 = ATgetArgument(t, 0);
      if(((l_18 != NULL) && (l_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_18 != NULL) && (m_18 != t)))
    _fail(t);
  else
    m_18 = t;
  if(((n_18 != NULL) && (n_18 != t)))
    _fail(t);
  else
    n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), not_null(l_18));
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        t = (ATerm) ATempty;
      }
    if(((o_18 != NULL) && (o_18 != t)))
      _fail(t);
    else
      o_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(k_18), not_null(l_18), not_null(o_18));
    t = table_put_0_0(t);
    t = not_null(m_18);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  if(((p_18 != NULL) && (p_18 != t)))
    _fail(t);
  else
    p_18 = t;
  t = u_83(t);
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), term_v_33);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_18 != NULL) && (s_18 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_18 = ATgetFirst((ATermList) t);
        if(((r_18 != NULL) && (r_18 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(q_18), term_v_33, not_null(r_18));
    t = table_put_0_0(t);
    t = not_null(s_18);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
        if(((t_18 != NULL) && (t_18 != t)))
          _fail(t);
        else
          t_18 = t;
        if(((u_18 != NULL) && (u_18 != t)))
          _fail(t);
        else
          u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), not_null(t_18));
        t = table_pop_0_0(t);
        if(((v_18 != NULL) && (v_18 != t)))
          _fail(t);
        else
          v_18 = t;
        return(t);
      }
      t = map_1_0(h_2, t);
      t = not_null(p_18);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm w_18 = NULL;
  if(((w_18 != NULL) && (w_18 != t)))
    _fail(t);
  else
    w_18 = t;
  t = SSL_remove(not_null(w_18));
  return(t);
}
ATerm restore_always_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_74(t);
      t = t_74(t);
      ;
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      t = t_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  if(((x_18 != NULL) && (x_18 != t)))
    _fail(t);
  else
    x_18 = t;
  t = t_83(t);
  if(((y_18 != NULL) && (y_18 != t)))
    _fail(t);
  else
    y_18 = t;
  if(((z_18 != NULL) && (z_18 != t)))
    _fail(t);
  else
    z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), term_v_33);
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = (ATerm) ATempty;
      }
    if(((a_19 != NULL) && (a_19 != t)))
      _fail(t);
    else
      a_19 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(y_18), term_v_33, (ATerm) ATinsert(CheckATermList(not_null(a_19)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(x_18);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  t = begin_scope_1_0(i_2, t);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm d_19 = NULL;
      if(((d_19 != NULL) && (d_19 != t)))
        _fail(t);
      else
        d_19 = t;
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_35;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_19 != NULL) && (c_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_19 = ATgetFirst((ATermList) t);
            if(((b_19 != NULL) && (b_19 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              b_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(c_19);
        t = map_1_0(k_2, t);
        t = not_null(d_19);
        t = end_scope_1_0(l_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(s_98, j_2, t);
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      t = term_w_35;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
        if(((e_19 != NULL) && (e_19 != t)))
          _fail(t);
        else
          e_19 = t;
        if(((f_19 != NULL) && (f_19 != t)))
          _fail(t);
        else
          f_19 = t;
        t = term_o_33;
        t = get_config_0_0(t);
        if(((g_19 != NULL) && (g_19 != t)))
          _fail(t);
        else
          g_19 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_19));
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        t = term_u_34;
      }
    t = t_98(t);
    t = copy_to_1_0(n_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(m_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_z_35;
  return(t);
}
ATerm ArgOption_2_0 (ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm t)
{
  t = ArgOption_3_0(d_90, e_90, o_2, t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_19 != NULL) && (h_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_19 = ATgetArgument(t, 0);
      if(((i_19 != NULL) && (i_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_19 != NULL) && (j_19 != t)))
    _fail(t);
  else
    j_19 = t;
  if(((k_19 != NULL) && (k_19 != t)))
    _fail(t);
  else
    k_19 = t;
  t = not_null(h_19);
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = (ATerm) ATempty;
      }
    if(((l_19 != NULL) && (l_19 != t)))
      _fail(t);
    else
      l_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), not_null(l_19));
    t = conc_0_0(t);
    if(((m_19 != NULL) && (m_19 != t)))
      _fail(t);
    else
      m_19 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_c_36, not_null(h_19), not_null(m_19));
    t = table_put_0_0(t);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  if(((p_19 != NULL) && (p_19 != t)))
    _fail(t);
  else
    p_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(p_19);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_19 != NULL) && (q_19 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_19 = ATgetFirst((ATermList) t);
          if(((r_19 != NULL) && (r_19 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_19);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_19 != NULL) && (s_19 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_19 = ATgetFirst((ATermList) t);
          if(((t_19 != NULL) && (t_19 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(q_19);
      if(((u_19 != NULL) && (u_19 != t)))
        _fail(t);
      else
        u_19 = t;
      t = not_null(s_19);
      if(((v_19 != NULL) && (v_19 != t)))
        _fail(t);
      else
        v_19 = t;
      t = not_null(t_19);
      if(((w_19 != NULL) && (w_19 != t)))
        _fail(t);
      else
        w_19 = t;
      t = not_null(p_19);
      if(((x_19 != NULL) && (x_19 != t)))
        _fail(t);
      else
        x_19 = t;
      t = not_null(u_19);
      t = h_0(t);
      t = not_null(x_19);
      if(((y_19 != NULL) && (y_19 != t)))
        _fail(t);
      else
        y_19 = t;
      t = not_null(v_19);
      t = i_0(t);
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(w_19)), not_null(z_19));
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm b_20 = NULL;
  if(((b_20 != NULL) && (b_20 != t)))
    _fail(t);
  else
    b_20 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(b_20);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(b_20);
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  if(((c_20 != NULL) && (c_20 != t)))
    _fail(t);
  else
    c_20 = t;
  if(((d_20 != NULL) && (d_20 != t)))
    _fail(t);
  else
    d_20 = t;
  t = string_to_int_0_0(t);
  if(((e_20 != NULL) && (e_20 != t)))
    _fail(t);
  else
    e_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_36, not_null(e_20));
  t = set_config_0_0(t);
  t = not_null(c_20);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_e_36;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm f_20 = NULL;
  if(((f_20 != NULL) && (f_20 != t)))
    _fail(t);
  else
    f_20 = t;
  t = SSL_string_to_int(not_null(f_20));
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm h_20 = NULL;
  if(((h_20 != NULL) && (h_20 != t)))
    _fail(t);
  else
    h_20 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(h_20);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(h_20);
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm i_20 = NULL;
  if(((i_20 != NULL) && (i_20 != t)))
    _fail(t);
  else
    i_20 = t;
  t = term_g_36;
  t = set_config_0_0(t);
  t = term_h_36;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_i_36;
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  if(((j_20 != NULL) && (j_20 != t)))
    _fail(t);
  else
    j_20 = t;
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = string_to_int_0_0(t);
  if(((l_20 != NULL) && (l_20 != t)))
    _fail(t);
  else
    l_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_5, not_null(l_20));
  t = set_config_0_0(t);
  t = not_null(j_20);
  if(((m_20 != NULL) && (m_20 != t)))
    _fail(t);
  else
    m_20 = t;
  if(((n_20 != NULL) && (n_20 != t)))
    _fail(t);
  else
    n_20 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_20));
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_j_36;
  return(t);
}
ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm o_20 = NULL;
  if(((o_20 != NULL) && (o_20 != t)))
    _fail(t);
  else
    o_20 = t;
  t = term_l_36;
  t = set_config_0_0(t);
  t = term_m_36;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_n_36;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_2, t_2, u_2, t);
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_2, w_2, x_2, t);
            ;
            LocalPopChoice(r_36);
          }
        else
          {
            t = q_36;
            t = Option_3_0(y_2, z_2, a_3, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm q_20 = NULL;
  if(((q_20 != NULL) && (q_20 != t)))
    _fail(t);
  else
    q_20 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(q_20);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(q_20);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(((r_20 != NULL) && (r_20 != t)))
    _fail(t);
  else
    r_20 = t;
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  if(((t_20 != NULL) && (t_20 != t)))
    _fail(t);
  else
    t_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_33, not_null(t_20));
  t = set_config_0_0(t);
  t = not_null(r_20);
  if(((u_20 != NULL) && (u_20 != t)))
    _fail(t);
  else
    u_20 = t;
  if(((v_20 != NULL) && (v_20 != t)))
    _fail(t);
  else
    v_20 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_20));
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_u_36;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm x_20 = NULL;
  if(((x_20 != NULL) && (x_20 != t)))
    _fail(t);
  else
    x_20 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(x_20);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(x_20);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  if(((y_20 != NULL) && (y_20 != t)))
    _fail(t);
  else
    y_20 = t;
  if(((z_20 != NULL) && (z_20 != t)))
    _fail(t);
  else
    z_20 = t;
  if(((a_21 != NULL) && (a_21 != t)))
    _fail(t);
  else
    a_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_33, not_null(a_21));
  t = set_config_0_0(t);
  t = not_null(y_20);
  if(((b_21 != NULL) && (b_21 != t)))
    _fail(t);
  else
    b_21 = t;
  if(((c_21 != NULL) && (c_21 != t)))
    _fail(t);
  else
    c_21 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_21));
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  if(((d_21 != NULL) && (d_21 != t)))
    _fail(t);
  else
    d_21 = t;
  if(((e_21 != NULL) && (e_21 != t)))
    _fail(t);
  else
    e_21 = t;
  if(((f_21 != NULL) && (f_21 != t)))
    _fail(t);
  else
    f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_4, (ATerm) ATinsert(ATempty, not_null(f_21)));
  t = extend_config_0_0(t);
  t = not_null(d_21);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  if(((g_21 != NULL) && (g_21 != t)))
    _fail(t);
  else
    g_21 = t;
  if(((h_21 != NULL) && (h_21 != t)))
    _fail(t);
  else
    h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, not_null(h_21));
  t = set_config_0_0(t);
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm x_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = x_36;
      {
        ATerm z_36 = t;
        int a_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(a_37);
          }
        else
          {
            t = z_36;
            {
              ATerm b_37 = t;
              int c_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  ;
                  LocalPopChoice(c_37);
                }
              else
                {
                  t = b_37;
                  {
                    ATerm d_37 = t;
                    int e_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(h_3, i_3, j_3, t);
                        ;
                        LocalPopChoice(e_37);
                      }
                    else
                      {
                        t = d_37;
                        t = ArgOption_2_0(k_3, l_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  if(((j_21 != NULL) && (j_21 != t)))
    _fail(t);
  else
    j_21 = t;
  t = term_a_5;
  t = whoami_0_0(t);
  if(((k_21 != NULL) && (k_21 != t)))
    _fail(t);
  else
    k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_37), not_null(k_21)), term_f_37));
  t = printnl_0_0(t);
  t = term_s_5;
  t = exit_0_0(t);
  t = not_null(i_21);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  t = report_run_time_0_0(t);
  if(((l_21 != NULL) && (l_21 != t)))
    _fail(t);
  else
    l_21 = t;
  t = term_a_5;
  t = whoami_0_0(t);
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATinsert(ATinsert(ATempty, term_h_37), not_null(m_21)));
  t = printnl_0_0(t);
  t = term_s_5;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_37;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm n_21 = NULL;
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  t = SSL_TicksToSeconds(not_null(n_21));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_21 != NULL) && (o_21 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_21 = ATgetArgument(t, 0);
      if(((p_21 != NULL) && (p_21 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(o_21), not_null(p_21));
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        t = SSL_addr(not_null(o_21), not_null(p_21));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = m_82(t);
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      {
        ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
        if(((r_21 != NULL) && (r_21 != t)))
          _fail(t);
        else
          r_21 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((s_21 != NULL) && (s_21 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_21 = ATgetFirst((ATermList) t);
            if(((t_21 != NULL) && (t_21 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              t_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(s_21);
        if(((u_21 != NULL) && (u_21 != t)))
          _fail(t);
        else
          u_21 = t;
        t = not_null(t_21);
        if(((v_21 != NULL) && (v_21 != t)))
          _fail(t);
        else
          v_21 = t;
        t = not_null(r_21);
        if(((w_21 != NULL) && (w_21 != t)))
          _fail(t);
        else
          w_21 = t;
        if(((x_21 != NULL) && (x_21 != t)))
          _fail(t);
        else
          x_21 = t;
        t = not_null(v_21);
        t = foldr_2_0(m_82, n_82, t);
        if(((y_21 != NULL) && (y_21 != t)))
          _fail(t);
        else
          y_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), not_null(y_21));
        t = n_82(t);
        if(((z_21 != NULL) && (z_21 != t)))
          _fail(t);
        else
          z_21 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(((a_22 != NULL) && (a_22 != t)))
    _fail(t);
  else
    a_22 = t;
  if(((b_22 != NULL) && (b_22 != t)))
    _fail(t);
  else
    b_22 = t;
  t = not_null(a_22);
  if(((c_22 != NULL) && (c_22 != t)))
    _fail(t);
  else
    c_22 = t;
  t = SSL_explode_term(not_null(c_22));
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if(((d_22 != NULL) && (d_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_22);
  if(((e_22 != NULL) && (e_22 != t)))
    _fail(t);
  else
    e_22 = t;
  t = not_null(d_22);
  t = foldr_2_0(k_80, l_80, t);
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(m_3, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_22 != NULL) && (g_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_22 = ATgetArgument(t, 0);
      if(((h_22 != NULL) && (h_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_22 != NULL) && (i_22 != t)))
    _fail(t);
  else
    i_22 = t;
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(g_22), not_null(h_22));
        ;
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        t = SSL_gtr(not_null(g_22), not_null(h_22));
      }
    t = not_null(i_22);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_22 = NULL;
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
      if(((l_22 != NULL) && (l_22 != t)))
        _fail(t);
      else
        l_22 = t;
      if(match_cons(t, sym__2))
        {
          if(((m_22 != NULL) && (m_22 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_22 = ATgetArgument(t, 0);
          if(((n_22 != NULL) && (n_22 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(m_22);
      if(((k_22 != NULL) && (k_22 != t)))
        _fail(t);
      else
        k_22 = t;
      t = not_null(n_22);
      if(((k_22 != NULL) && (k_22 != t)))
        _fail(t);
      else
        k_22 = t;
      t = not_null(l_22);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
    if(((o_22 != NULL) && (o_22 != t)))
      _fail(t);
    else
      o_22 = t;
    if(((p_22 != NULL) && (p_22 != t)))
      _fail(t);
    else
      p_22 = t;
    t = term_p_5;
    t = get_config_0_0(t);
    if(((q_22 != NULL) && (q_22 != t)))
      _fail(t);
    else
      q_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_22), term_s_5);
    t = geq_0_0(t);
    t = not_null(o_22);
    t = q_97(t);
    return(t);
  }
  t = try_1_0(n_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  t = run_time_0_0(t);
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  t = not_null(r_22);
  if(((t_22 != NULL) && (t_22 != t)))
    _fail(t);
  else
    t_22 = t;
  t = term_a_5;
  t = whoami_0_0(t);
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_37), not_null(s_22)), term_o_6), not_null(u_22)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_f_36;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Help_0_0(t);
      ;
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      {
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(w_37);
          }
        else
          {
            t = v_37;
            t = Version_0_0(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_70 (ATerm), ATerm t)
{
  ATerm x_37 = t;
  int y_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_37);
    }
  else
    {
      t = x_37;
      t = option_defined_1_0(p_3, t);
    }
  t = l_70(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_22 = NULL;
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = SSL_table_create(not_null(v_22));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  if(((w_22 != NULL) && (w_22 != t)))
    _fail(t);
  else
    w_22 = t;
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  t = term_a_38;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_38, term_b_38, not_null(w_22));
  t = table_put_0_0(t);
  t = not_null(x_22);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_22 = NULL;
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  t = SSL_table_destroy(not_null(y_22));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm z_22 = NULL;
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  t = SSL_exit(not_null(z_22));
  return(t);
}
ATerm long_description_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  if(((d_23 != NULL) && (d_23 != t)))
    _fail(t);
  else
    d_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_23 = ATgetFirst((ATermList) t);
      c_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
        t = not_null(b_23);
        if(((e_23 != NULL) && (e_23 != t)))
          _fail(t);
        else
          e_23 = t;
        t = not_null(c_23);
        if(((f_23 != NULL) && (f_23 != t)))
          _fail(t);
        else
          f_23 = t;
        t = not_null(d_23);
        if(((g_23 != NULL) && (g_23 != t)))
          _fail(t);
        else
          g_23 = t;
        t = not_null(f_23);
        if(((i_23 != NULL) && (i_23 != t)))
          _fail(t);
        else
          i_23 = t;
        if(((j_23 != NULL) && (j_23 != t)))
          _fail(t);
        else
          j_23 = t;
        t = g_0(t);
        if(((k_23 != NULL) && (k_23 != t)))
          _fail(t);
        else
          k_23 = t;
        t = not_null(j_23);
        if(((l_23 != NULL) && (l_23 != t)))
          _fail(t);
        else
          l_23 = t;
        t = not_null(e_23);
        t = f_0(t);
        if(((q_23 != NULL) && (q_23 != t)))
          _fail(t);
        else
          q_23 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(k_23)), not_null(q_23));
        if(((r_23 != NULL) && (r_23 != t)))
          _fail(t);
        else
          r_23 = t;
        t = not_null(i_23);
        {
          ATerm q_3 (ATerm t)
          {
            t = not_null(r_23);
            return(t);
          }
          t = reverse_acc_2_0(f_0, q_3, t);
          if(((s_23 != NULL) && (s_23 != t)))
            _fail(t);
          else
            s_23 = t;
        }
      }
    }
  else
    {
      ATerm t_23 = NULL,u_23 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(d_23);
      if(((t_23 != NULL) && (t_23 != t)))
        _fail(t);
      else
        t_23 = t;
      t = term_a_5;
      t = g_0(t);
      if(((u_23 != NULL) && (u_23 != t)))
        _fail(t);
      else
        u_23 = t;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(_id, r_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm m_68 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  if(((y_23 != NULL) && (y_23 != t)))
    _fail(t);
  else
    y_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((w_23 != NULL) && (w_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_23 != NULL) && (z_23 != t)))
    _fail(t);
  else
    z_23 = t;
  t = SSLgetAnnotations(not_null(y_23));
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = not_null(w_23);
  t = m_68(t);
  if(((x_23 != NULL) && (x_23 != t)))
    _fail(t);
  else
    x_23 = t;
  if(((b_24 != NULL) && (b_24 != t)))
    _fail(t);
  else
    b_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_23)), not_null(v_23));
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm d_24 = NULL,g_24 = NULL;
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_24)), term_c_38);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_24 = NULL;
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_37;
      t = get_config_0_0(t);
      if(((c_24 != NULL) && (c_24 != t)))
        _fail(t);
      else
        c_24 = t;
      ;
      LocalPopChoice(e_38);
    }
  else
    {
      t = d_38;
      {
        ATerm s_3 (ATerm t)
        {
          ATerm t_3 (ATerm t)
          {
            if(((c_24 != NULL) && (c_24 != t)))
              _fail(t);
            else
              c_24 = t;
            return(t);
          }
          t = Program_1_0(t_3, t);
          return(t);
        }
        t = option_defined_1_0(s_3, t);
      }
    }
  {
    ATerm u_3 (ATerm t)
    {
      ATerm v_3 (ATerm t)
      {
        t = not_null(c_24);
        return(t);
      }
      t = short_description_1_0(v_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(u_3, t);
    t = term_f_38;
    t = echo_0_0(t);
    t = term_i_38;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    t = map_1_0(w_3, t);
    {
      ATerm x_3 (ATerm t)
      {
        ATerm h_24 = NULL,i_24 = NULL;
        if(((h_24 != NULL) && (h_24 != t)))
          _fail(t);
        else
          h_24 = t;
        {
          ATerm y_3 (ATerm t)
          {
            t = not_null(c_24);
            return(t);
          }
          t = long_description_1_0(y_3, t);
          if(((i_24 != NULL) && (i_24 != t)))
            _fail(t);
          else
            i_24 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(i_24)), term_w_4);
          t = echo_0_0(t);
        }
        return(t);
      }
      t = try_1_0(x_3, t);
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(k_38);
    }
  else
    {
      t = j_38;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_24 != NULL) && (j_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_24 = ATgetArgument(t, 0);
      if(((k_24 != NULL) && (k_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_24 != NULL) && (l_24 != t)))
    _fail(t);
  else
    l_24 = t;
  t = SSL_printnl(not_null(j_24), not_null(k_24));
  t = not_null(l_24);
  return(t);
}
ATerm Undefined_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  if(((u_24 != NULL) && (u_24 != t)))
    _fail(t);
  else
    u_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((r_24 != NULL) && (r_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((v_24 != NULL) && (v_24 != t)))
    _fail(t);
  else
    v_24 = t;
  t = SSLgetAnnotations(not_null(u_24));
  if(((q_24 != NULL) && (q_24 != t)))
    _fail(t);
  else
    q_24 = t;
  t = not_null(r_24);
  t = n_68(t);
  if(((s_24 != NULL) && (s_24 != t)))
    _fail(t);
  else
    s_24 = t;
  if(((x_24 != NULL) && (x_24 != t)))
    _fail(t);
  else
    x_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_24)), not_null(q_24));
  if(((w_24 != NULL) && (w_24 != t)))
    _fail(t);
  else
    w_24 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm y_24 (ATerm t)
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = Cons_2_0(_id, y_24, t);
      }
    return(t);
  }
  t = y_24(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  t = fetch_1_0(k_89, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  if(((a_25 != NULL) && (a_25 != t)))
    _fail(t);
  else
    a_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(a_25);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((b_25 != NULL) && (b_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            b_25 = ATgetFirst((ATermList) t);
          if(((c_25 != NULL) && (c_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(a_25);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,k_25 = NULL;
  if(((d_25 != NULL) && (d_25 != t)))
    _fail(t);
  else
    d_25 = t;
  if(((e_25 != NULL) && (e_25 != t)))
    _fail(t);
  else
    e_25 = t;
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        {
          ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
          if(((f_25 != NULL) && (f_25 != t)))
            _fail(t);
          else
            f_25 = t;
          if(((g_25 != NULL) && (g_25 != t)))
            _fail(t);
          else
            g_25 = t;
          t = not_null(f_25);
          if(((h_25 != NULL) && (h_25 != t)))
            _fail(t);
          else
            h_25 = t;
          t = (ATerm) ATinsert(ATempty, not_null(h_25));
        }
      }
    if(((k_25 != NULL) && (k_25 != t)))
      _fail(t);
    else
      k_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_35, not_null(k_25));
    t = printnl_0_0(t);
    t = not_null(d_25);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_37;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm l_25 = NULL;
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  t = SSL_implode_string(not_null(l_25));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(s_38);
    }
  else
    {
      t = r_38;
      {
        ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
        if(((n_25 != NULL) && (n_25 != t)))
          _fail(t);
        else
          n_25 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_25 != NULL) && (o_25 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_25 = ATgetFirst((ATermList) t);
            if(((p_25 != NULL) && (p_25 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              p_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(o_25);
        if(((q_25 != NULL) && (q_25 != t)))
          _fail(t);
        else
          q_25 = t;
        t = not_null(p_25);
        if(((r_25 != NULL) && (r_25 != t)))
          _fail(t);
        else
          r_25 = t;
        t = not_null(n_25);
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = not_null(q_25);
        {
          ATerm z_3 (ATerm t)
          {
            t = not_null(r_25);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_3, t);
          if(((t_25 != NULL) && (t_25 != t)))
            _fail(t);
          else
            t_25 = t;
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  if(((w_25 != NULL) && (w_25 != t)))
    _fail(t);
  else
    w_25 = t;
  t = not_null(v_25);
  if(((x_25 != NULL) && (x_25 != t)))
    _fail(t);
  else
    x_25 = t;
  t = SSL_explode_term(not_null(x_25));
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_25);
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  t = not_null(y_25);
  t = concat_0_0(t);
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm b_26 (ATerm t)
  {
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_26, t);
        ;
        LocalPopChoice(v_38);
      }
    else
      {
        t = u_38;
        t = Nil_0_0(t);
        t = m_76(t);
      }
    return(t);
  }
  t = b_26(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm c_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_26 != NULL) && (c_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_26 = ATgetArgument(t, 0);
      if(((i_26 != NULL) && (i_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_26 != NULL) && (j_26 != t)))
    _fail(t);
  else
    j_26 = t;
  t = not_null(c_26);
  {
    ATerm a_4 (ATerm t)
    {
      t = not_null(i_26);
      return(t);
    }
    t = at_end_1_0(a_4, t);
    if(((k_26 != NULL) && (k_26 != t)))
      _fail(t);
    else
      k_26 = t;
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm l_26 = NULL;
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  t = SSL_explode_string(not_null(l_26));
  return(t);
}
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  if(match_cons(t, sym__2))
    {
      if(((n_26 != NULL) && (n_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_26 = ATgetArgument(t, 0);
      if(((p_26 != NULL) && (p_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_26 != NULL) && (t_26 != t)))
    _fail(t);
  else
    t_26 = t;
  t = SSLgetAnnotations(not_null(s_26));
  if(((m_26 != NULL) && (m_26 != t)))
    _fail(t);
  else
    m_26 = t;
  t = not_null(n_26);
  t = y_58(t);
  if(((q_26 != NULL) && (q_26 != t)))
    _fail(t);
  else
    q_26 = t;
  t = not_null(p_26);
  t = z_58(t);
  if(((r_26 != NULL) && (r_26 != t)))
    _fail(t);
  else
    r_26 = t;
  if(((v_26 != NULL) && (v_26 != t)))
    _fail(t);
  else
    v_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_26), not_null(r_26)), not_null(m_26));
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  if(((z_26 != NULL) && (z_26 != t)))
    _fail(t);
  else
    z_26 = t;
  if(((b_27 != NULL) && (b_27 != t)))
    _fail(t);
  else
    b_27 = t;
  t = e_88(t);
  if(((c_27 != NULL) && (c_27 != t)))
    _fail(t);
  else
    c_27 = t;
  t = not_null(b_27);
  if(((d_27 != NULL) && (d_27 != t)))
    _fail(t);
  else
    d_27 = t;
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_27)), not_null(c_27)));
  t = printnl_0_0(t);
  t = not_null(z_26);
  return(t);
}
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm f_27 (ATerm t)
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
        t = Cons_2_0(v_75, f_27, t);
      }
    return(t);
  }
  t = f_27(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm g_27 = NULL;
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  t = SSL_is_string(not_null(g_27));
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = try_1_0(eval_config_0_0, t);
  return(t);
}
ATerm a_28 (ATerm j_27, ATerm k_27, ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  t = not_null(j_27);
  if(((l_27 != NULL) && (l_27 != t)))
    _fail(t);
  else
    l_27 = t;
  t = not_null(k_27);
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = not_null(l_27);
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        t = debug_1_0(c_4, t);
        _fail(t);
      }
    if(((n_27 != NULL) && (n_27 != t)))
      _fail(t);
    else
      n_27 = t;
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_c_39;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
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
            t = map_1_0(b_4, t);
            ;
            LocalPopChoice(g_39);
          }
        else
          {
            t = f_39;
            {
              ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
              if(((o_27 != NULL) && (o_27 != t)))
                _fail(t);
              else
                o_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_27 = ATgetArgument(t, 0);
                  {
                    ATerm r_27 = NULL;
                    t = not_null(p_27);
                    if(((r_27 != NULL) && (r_27 != t)))
                      _fail(t);
                    else
                      r_27 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_27 = ATgetArgument(t, 0);
                      t = a_28(not_null(p_27), not_null(o_27), t);
                    }
                  else
                    {
                      ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((p_27 != NULL) && (p_27 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            p_27 = ATgetArgument(t, 0);
                          if(((q_27 != NULL) && (q_27 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            q_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(p_27);
                      if(((s_27 != NULL) && (s_27 != t)))
                        _fail(t);
                      else
                        s_27 = t;
                      t = not_null(q_27);
                      if(((t_27 != NULL) && (t_27 != t)))
                        _fail(t);
                      else
                        t_27 = t;
                      t = not_null(o_27);
                      if(((u_27 != NULL) && (u_27 != t)))
                        _fail(t);
                      else
                        u_27 = t;
                      if(((v_27 != NULL) && (v_27 != t)))
                        _fail(t);
                      else
                        v_27 = t;
                      t = not_null(s_27);
                      t = eval_config_0_0(t);
                      if(((w_27 != NULL) && (w_27 != t)))
                        _fail(t);
                      else
                        w_27 = t;
                      t = not_null(v_27);
                      if(((x_27 != NULL) && (x_27 != t)))
                        _fail(t);
                      else
                        x_27 = t;
                      t = not_null(t_27);
                      t = eval_config_0_0(t);
                      if(((y_27 != NULL) && (y_27 != t)))
                        _fail(t);
                      else
                        y_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), not_null(y_27));
                      t = conc_strings_0_0(t);
                      if(((z_27 != NULL) && (z_27 != t)))
                        _fail(t);
                      else
                        z_27 = t;
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
  ATerm b_28 = NULL;
  if(((b_28 != NULL) && (b_28 != t)))
    _fail(t);
  else
    b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, not_null(b_28));
  t = table_get_0_0(t);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
      t = eval_config_0_0(t);
      if(((c_28 != NULL) && (c_28 != t)))
        _fail(t);
      else
        c_28 = t;
      if(((d_28 != NULL) && (d_28 != t)))
        _fail(t);
      else
        d_28 = t;
      if(((e_28 != NULL) && (e_28 != t)))
        _fail(t);
      else
        e_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_36, not_null(b_28), not_null(e_28));
      t = table_put_0_0(t);
      t = not_null(c_28);
      return(t);
    }
    t = try_1_0(d_4, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_74(t);
      ;
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_k_39;
  t = set_config_0_0(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_l_39;
  return(t);
}
ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm f_28 = NULL;
  if(((f_28 != NULL) && (f_28 != t)))
    _fail(t);
  else
    f_28 = t;
  t = term_k_39;
  t = set_config_0_0(t);
  t = term_n_39;
  t = set_config_0_0(t);
  t = term_o_39;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_p_39;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, f_4, g_4, t);
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      t = Option_3_0(h_4, i_4, j_4, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_28 != NULL) && (g_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_28 = ATgetArgument(t, 0);
      if(((h_28 != NULL) && (h_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(g_28), not_null(h_28));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((i_28 != NULL) && (i_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_28 = ATgetArgument(t, 0);
      if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_28 = ATgetArgument(t, 1);
      if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((l_28 != NULL) && (l_28 != t)))
    _fail(t);
  else
    l_28 = t;
  if(((m_28 != NULL) && (m_28 != t)))
    _fail(t);
  else
    m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_28), not_null(j_28));
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        t = (ATerm) ATempty;
      }
    if(((n_28 != NULL) && (n_28 != t)))
      _fail(t);
    else
      n_28 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(i_28), not_null(j_28), (ATerm) ATinsert(CheckATermList(not_null(n_28)), not_null(k_28)));
    t = table_put_0_0(t);
    t = not_null(l_28);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  if(((o_28 != NULL) && (o_28 != t)))
    _fail(t);
  else
    o_28 = t;
  t = term_a_5;
  t = p_90(t);
  if(((p_28 != NULL) && (p_28 != t)))
    _fail(t);
  else
    p_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_38, term_h_38, not_null(p_28));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(((r_28 != NULL) && (r_28 != t)))
    _fail(t);
  else
    r_28 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(r_28);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_28 != NULL) && (s_28 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_28 = ATgetFirst((ATermList) t);
          if(((t_28 != NULL) && (t_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(s_28);
      if(((u_28 != NULL) && (u_28 != t)))
        _fail(t);
      else
        u_28 = t;
      t = not_null(t_28);
      if(((v_28 != NULL) && (v_28 != t)))
        _fail(t);
      else
        v_28 = t;
      t = not_null(r_28);
      if(((w_28 != NULL) && (w_28 != t)))
        _fail(t);
      else
        w_28 = t;
      t = not_null(u_28);
      t = a_0(t);
      t = not_null(w_28);
      if(((x_28 != NULL) && (x_28 != t)))
        _fail(t);
      else
        x_28 = t;
      t = term_a_5;
      t = b_0(t);
      if(((y_28 != NULL) && (y_28 != t)))
        _fail(t);
      else
        y_28 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(v_28)), not_null(y_28));
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm a_29 = NULL;
  if(((a_29 != NULL) && (a_29 != t)))
    _fail(t);
  else
    a_29 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(a_29);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(a_29);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(a_29);
        }
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_u_39;
  t = set_config_0_0(t);
  t = term_v_39;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(k_4, l_4, m_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((b_29 != NULL) && (b_29 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        b_29 = ATgetFirst((ATermList) t);
      if(((c_29 != NULL) && (c_29 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(c_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_29)));
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  if(((i_29 != NULL) && (i_29 != t)))
    _fail(t);
  else
    i_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((e_29 != NULL) && (e_29 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        e_29 = ATgetFirst((ATermList) t);
      if(((f_29 != NULL) && (f_29 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((j_29 != NULL) && (j_29 != t)))
    _fail(t);
  else
    j_29 = t;
  t = SSLgetAnnotations(not_null(i_29));
  if(((d_29 != NULL) && (d_29 != t)))
    _fail(t);
  else
    d_29 = t;
  t = not_null(e_29);
  t = n_63(t);
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  t = not_null(f_29);
  t = o_63(t);
  if(((h_29 != NULL) && (h_29 != t)))
    _fail(t);
  else
    h_29 = t;
  if(((l_29 != NULL) && (l_29 != t)))
    _fail(t);
  else
    l_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_29)), not_null(g_29)), not_null(d_29));
  if(((k_29 != NULL) && (k_29 != t)))
    _fail(t);
  else
    k_29 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_29 != NULL) && (m_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_29 = ATgetArgument(t, 0);
      if(((n_29 != NULL) && (n_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_36, not_null(m_29), not_null(n_29));
  t = table_put_0_0(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  if(((p_29 != NULL) && (p_29 != t)))
    _fail(t);
  else
    p_29 = t;
  if(((q_29 != NULL) && (q_29 != t)))
    _fail(t);
  else
    q_29 = t;
  if(((r_29 != NULL) && (r_29 != t)))
    _fail(t);
  else
    r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_37, not_null(r_29));
  t = set_config_0_0(t);
  t = not_null(p_29);
  if(((s_29 != NULL) && (s_29 != t)))
    _fail(t);
  else
    s_29 = t;
  if(((t_29 != NULL) && (t_29 != t)))
    _fail(t);
  else
    t_29 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_29));
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm o_29 = NULL;
  if(((o_29 != NULL) && (o_29 != t)))
    _fail(t);
  else
    o_29 = t;
  {
    ATerm n_4 (ATerm t)
    {
      t = term_x_39;
      t = n_90(t);
      return(t);
    }
    t = try_1_0(n_4, t);
    t = not_null(o_29);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm y_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_40 = t;
            int b_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(b_40);
              }
            else
              {
                t = a_40;
                t = n_90(t);
                t = Cons_2_0(_id, p_4, t);
              }
            ;
            LocalPopChoice(z_39);
          }
        else
          {
            t = y_39;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(o_4, p_4, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  if(match_cons(t, sym__3))
    {
      if(((w_29 != NULL) && (w_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_29 = ATgetArgument(t, 0);
      if(((x_29 != NULL) && (x_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_29 = ATgetArgument(t, 1);
      if(((y_29 != NULL) && (y_29 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        y_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(w_29), not_null(x_29), not_null(y_29));
  t = not_null(v_29);
  return(t);
}
ATerm h_30 (ATerm c_30, ATerm t)
{
  ATerm d_30 = NULL;
  t = not_null(c_30);
  if(((d_30 != NULL) && (d_30 != t)))
    _fail(t);
  else
    d_30 = t;
  t = not_null(c_30);
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_37;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
        t = option_defined_1_0(Help_0_0, t);
      }
    t = not_null(d_30);
    t = system_usage_0_0(t);
    t = term_f_36;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,g_30 = NULL;
  if(((a_30 != NULL) && (a_30 != t)))
    _fail(t);
  else
    a_30 = t;
  t = term_e_40;
  t = table_put_0_0(t);
  t = not_null(a_30);
  {
    ATerm q_4 (ATerm t)
    {
      ATerm f_40 = t;
      int g_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_90(t);
          ;
          LocalPopChoice(g_40);
        }
      else
        {
          t = f_40;
          {
            ATerm h_40 = t;
            int i_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(i_40);
              }
            else
              {
                t = h_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_4, t);
    {
      ATerm r_4 (ATerm t)
      {
        ATerm j_40 = t;
        int k_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_30 = NULL;
            if(((e_30 != NULL) && (e_30 != t)))
              _fail(t);
            else
              e_30 = t;
            {
              ATerm l_40 = t;
              int m_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_30(not_null(e_30), t);
                  ;
                  LocalPopChoice(m_40);
                }
              else
                {
                  t = l_40;
                  {
                    ATerm f_30 = NULL;
                    t = not_null(e_30);
                    if(((f_30 != NULL) && (f_30 != t)))
                      _fail(t);
                    else
                      f_30 = t;
                    t = term_j_39;
                    t = get_config_0_0(t);
                    t = not_null(f_30);
                    t = system_about_0_0(t);
                    t = term_f_36;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(k_40);
          }
        else
          {
            t = j_40;
            {
              ATerm s_4 (ATerm t)
              {
                ATerm t_4 (ATerm t)
                {
                  if(((b_30 != NULL) && (b_30 != t)))
                    _fail(t);
                  else
                    b_30 = t;
                  return(t);
                }
                t = Undefined_1_0(t_4, t);
                return(t);
              }
              t = option_defined_1_0(s_4, t);
              t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_30)), term_n_40));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_s_5;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(r_4, t);
      if(((g_30 != NULL) && (g_30 != t)))
        _fail(t);
      else
        g_30 = t;
      t = term_g_38;
      t = table_destroy_0_0(t);
      t = not_null(g_30);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  t = parse_options_1_0(n_70, t);
  t = store_options_0_0(t);
  t = p_70(t);
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_70, t);
        ;
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        {
          ATerm q_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_70(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_40);
            }
          else
            {
              t = q_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t)
{
  t = option_wrap_4_0(r_70, default_usage_0_0, _id, s_70, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = xtc_io_1_0(abox2latex_0_0, t);
  return(t);
}
ATerm io_abox2latex_0_0 (ATerm t)
{
  t = option_wrap_2_0(abox2latex_options_0_0, u_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_abox2latex_0_0(t);
  return(t);
}
