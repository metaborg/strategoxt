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
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_t_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_f_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_h_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_w_27;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_b_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_k_26;
ATerm term_g_26;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_c_25;
ATerm term_v_24;
ATerm term_m_24;
ATerm term_q_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_v_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_u_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_e_10;
ATerm term_u_9;
ATerm term_m_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_x_7;
void init_constant_terms (void)
{
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_e_10, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_p_12, term_r_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_b_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_g_13, term_i_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_q_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_b_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_a_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_t_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_y_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_v_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_q_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_x_17, term_z_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_k_18, term_l_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_s_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_g_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_v_22);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_i_27);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_h_8);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_t_26);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_w_31, term_h_8);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_h_8);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_h_8);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm b_0 (ATerm);
ATerm tables2text_0_0 (ATerm);
ATerm create_header_0_0 (ATerm);
ATerm i_6 (ATerm z_34, ATerm a_35, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm create_table_file_0_0 (ATerm);
ATerm create_abox2latex_args_0_0 (ATerm);
ATerm j_6 (ATerm l_47, ATerm m_47, ATerm);
ATerm k_6 (ATerm i_88 (ATerm), ATerm w_438, ATerm t_47, ATerm);
ATerm p_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm);
ATerm l_6 (ATerm q_46, ATerm r_46, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm n_87 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm w_97 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm o_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm k_31, ATerm j_31, ATerm);
ATerm p_6 (ATerm a_80 (ATerm), ATerm g_31, ATerm f_31, ATerm);
ATerm f_1 (ATerm);
ATerm q_6 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm);
ATerm r_6 (ATerm c_84 (ATerm), ATerm w_37, ATerm v_37, ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm y_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm v_13 (ATerm s_12, ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm i_99 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm t_6 (ATerm z_83 (ATerm), ATerm h_36, ATerm f_36, ATerm);
ATerm p_16 (ATerm a_16, ATerm);
ATerm q_16 (ATerm f_16, ATerm g_16, ATerm h_16, ATerm);
ATerm w_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm v_17 (ATerm l_17, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_6 (ATerm r_47, ATerm);
ATerm v_6 (ATerm i_24, ATerm j_24, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_19 (ATerm i_18, ATerm);
ATerm t_19 (ATerm o_18, ATerm p_18, ATerm q_18, ATerm);
ATerm u_19 (ATerm e_19, ATerm f_19, ATerm h_19, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm a_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm w_6 (ATerm a_24, ATerm b_24, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_text_1_0 (ATerm u_99 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm x_6 (ATerm q_43, ATerm r_43, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm y_6 (ATerm u_36, ATerm v_36, ATerm);
ATerm end_scope_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm xtc_io_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm m_27 (ATerm a_27, ATerm);
ATerm conc_0_0 (ATerm);
ATerm z_6 (ATerm j_54, ATerm i_54, ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm abox2latex_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_7 (ATerm t_34, ATerm u_34, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm u_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm need_help_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_7 (ATerm g_43, ATerm h_43, ATerm);
ATerm debug_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm g_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm h_7 (ATerm d_54, ATerm e_54, ATerm);
ATerm e_7 (ATerm g_38, ATerm h_38, ATerm);
ATerm f_7 (ATerm p_36, ATerm q_36, ATerm o_36, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_90 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm parse_options_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), n_0), term_x_7);
  o_0 = t;
  t = SSL_concat_strings(o_0);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm f_0 = NULL;
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      t = (ATerm) ATempty;
    }
  t = map_1_0(b_0, t);
  f_0 = t;
  t = SSL_concat_strings(f_0);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm r_0 = NULL,v_0 = NULL;
  t = term_h_8;
  t = tables2text_0_0(t);
  r_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_8), term_m_9), term_f_9), term_i_8), term_c_9), term_u_8), term_t_8), term_p_8), term_o_8), term_i_8), r_0), term_m_8), term_l_8), term_i_8), term_k_8), term_i_8), term_j_8), term_i_8);
  v_0 = t;
  t = SSL_concat_strings(v_0);
  return(t);
}
ATerm i_6 (ATerm z_34, ATerm a_35, ATerm t)
{
  ATerm p_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_34, a_35);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = p_9;
      t = SSL_subtr(z_34, a_35);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  t = term_u_9;
  {
    ATerm y_9 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = y_9;
        t = term_e_10;
      }
    y_0 = t;
    t = term_e_10;
    a_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_0, term_e_10);
    t = i_6(y_0, a_1, t);
    z_0 = t;
    t = SSL_int_to_string(z_0);
    x_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, x_0), term_u_9);
  }
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm b_1 = NULL,e_1 = NULL;
  ATerm i_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = i_10;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  e_1 = t;
  t = (ATerm) ATinsert(CheckATermList(e_1), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_y_10), term_x_10)), (ATerm) ATinsert(ATinsert(ATempty, term_w_10), term_v_10)), (ATerm) ATinsert(ATinsert(ATempty, term_u_10), term_t_10)), (ATerm) ATinsert(ATinsert(ATempty, term_s_10), term_r_10)), (ATerm) ATinsert(ATinsert(ATempty, term_q_10), term_p_10)), (ATerm) ATinsert(ATinsert(ATempty, term_o_10), term_l_10)));
  t = concat_0_0(t);
  t = write_to_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      b_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_1;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  t = term_h_8;
  t = create_table_file_0_0(t);
  j_1 = t;
  t = term_h_8;
  t = pass_verbose_0_0(t);
  k_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(k_1), j_1), term_z_10);
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL;
        t = term_d_11;
        t = get_config_0_0(t);
        s_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(k_1), j_1), term_z_10), s_1), term_e_11);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
      }
  }
  return(t);
}
ATerm j_6 (ATerm l_47, ATerm m_47, ATerm t)
{
  ATerm v_1 = NULL;
  t = SSL_write_term_to_stream_baf(l_47, m_47);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_1);
  return(t);
}
ATerm k_6 (ATerm i_88 (ATerm), ATerm w_438, ATerm t_47, ATerm t)
{
  ATerm w_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_438, term_f_11);
  t = open_stream_0_0(t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_1, t_47);
  t = i_88(t);
  t = fclose_0_0(t);
  t = t_47;
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      if(match_cons(g_11, sym_Stream_1))
        {
          f_2 = ATgetArgument(g_11, 0);
        }
      else
        _fail(t);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(f_2, g_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm x_1 = NULL,z_1 = NULL;
  x_1 = t;
  t = xtc_new_file_0_0(t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, x_1);
  t = k_6(p_0, z_1, x_1, t);
  t = SSL_close_file(z_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(r_99, s_99, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm l_6 (ATerm q_46, ATerm r_46, ATerm t)
{
  t = SSL_execvp(q_46, r_46);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  n_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_3 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(o_3);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), s_0), term_h_11);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm m_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_3 = ATgetArgument(t, 0);
          p_3 = ATgetArgument(t, 1);
          q_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_3);
      m_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_3), term_k_11), m_1), term_j_11), o_3);
      n_1 = t;
      t = SSL_concat_strings(n_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm t_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = i_76(t);
    if(((t_3 != NULL) && (t_3 != t)))
      _fail(t);
    else
      t_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(t_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  if(((u_3 != NULL) && (u_3 != t)))
    _fail(t);
  else
    u_3 = t;
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm o_11 = ATgetArgument(t, 0);
              if(((u_3 != NULL) && (u_3 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                u_3 = ATgetArgument(t, 1);
              {
                ATerm p_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_18), term_g_18), term_b_18), term_t_17), term_n_17), term_i_17), term_e_17), term_y_16), term_l_16), term_e_16), term_z_15), term_v_15), term_p_15), term_l_15), term_b_15), term_u_14), term_q_14), term_m_14), term_i_14), term_e_14), term_x_13), term_r_13), term_j_13), term_d_13), term_t_12), term_f_12), term_a_12), term_w_11);
        t = fetch_elem_1_0(u_0, t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(u_3));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm z_3 = NULL,j_4 = NULL;
  z_3 = t;
  {
    ATerm n_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_18 = ATgetArgument(t, 0);
            j_4 = ATgetArgument(t, 1);
            {
              ATerm u_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_18);
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_2 = NULL,d_2 = NULL,e_2 = NULL;
              t = j_4;
              {
                ATerm z_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_18;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                b_2 = t;
                t = term_a_19;
                d_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, b_2), term_b_19);
                e_2 = t;
                t = SSL_printnl(d_2, e_2);
                t = (ATerm) ATmakeAppl(sym__2, term_a_19, (ATerm) ATinsert(ATinsert(ATempty, b_2), term_b_19));
              }
              ;
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              t = z_3;
            }
        }
      }
    else
      {
        t = n_18;
        t = z_3;
      }
    t = z_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_87 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,x_4 = NULL;
  x_4 = t;
  t = fork_0_0(t);
  t_4 = t;
  {
    ATerm d_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_4;
        t = n_87(t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = d_19;
        t = SSL_waitpid(t_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            if(((ATgetType(l_19) != AT_INT) || (ATgetInt((ATermInt) l_19) != 0)))
              _fail(t);
            {
              ATerm m_19 = ATgetArgument(t, 1);
            }
            {
              ATerm o_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_5 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm b_5 = NULL,c_5 = NULL;
    b_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), b_5);
    t = e_7(not_null(a_5), b_5, t);
    c_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_5, c_5);
    return(t);
  }
  if(((a_5 != NULL) && (a_5 != t)))
    _fail(t);
  else
    a_5 = t;
  t = SSL_table_keys(not_null(a_5));
  t = map_1_0(w_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm g_5 = NULL;
  g_5 = t;
  {
    ATerm y_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL;
        t = term_u_9;
        t = get_config_0_0(t);
        i_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_5, term_p_17);
        t = geq_0_0(t);
        t = g_5;
        t = w_97(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = y_19;
        t = g_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm n_5 = NULL;
  n_5 = t;
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_5 = NULL;
        t = term_u_9;
        t = get_config_0_0(t);
        p_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_5, term_o_14);
        t = geq_0_0(t);
        t = n_5;
        t = v_97(t);
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = n_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_5 = NULL;
        t = term_u_9;
        t = get_config_0_0(t);
        w_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_5, term_p_12);
        t = geq_0_0(t);
        t = t_5;
        t = x_97(t);
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        t = t_5;
      }
  }
  return(t);
}
ATerm o_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm k_31, ATerm j_31, ATerm t)
{
  t = e_80(t);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm y_5 = NULL;
      y_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), y_5);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(c_1, t);
    t = not_null(j_31);
  }
  return(t);
}
ATerm p_6 (ATerm a_80 (ATerm), ATerm g_31, ATerm f_31, ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm l_7 = NULL,o_7 = NULL,q_7 = NULL;
    l_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(f_31);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_7 = ATgetFirst((ATermList) t);
            q_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_7;
              {
                ATerm d_1 (ATerm t)
                {
                  t = not_null(f_31);
                  return(t);
                }
                t = o_6(a_80, d_1, not_null(o_7), not_null(q_7), t);
                t = w_7(t);
              }
              ;
              LocalPopChoice(i_20);
            }
          else
            {
              t = g_20;
              {
                ATerm m_2 = NULL,s_2 = NULL,k_2 = NULL;
                t = SSLgetAnnotations(l_7);
                m_2 = t;
                t = q_7;
                t = w_7(t);
                s_2 = t;
                t = (ATerm) ATinsert(CheckATermList(s_2), o_7);
                k_2 = t;
                t = SSLsetAnnotations(k_2, m_2);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(g_31);
  t = w_7(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm n_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      if((n_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,g_8 = NULL;
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_20 = ATgetArgument(t, 0);
            ATerm m_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
        t = e_7(m_37, n_37, t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = (ATerm) ATempty;
      }
    g_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_8, o_37);
    t = p_6(f_1, g_8, o_37, t);
    e_8 = t;
    t = SSL_table_put(m_37, n_37, e_8);
    t = d_8;
  }
  return(t);
}
ATerm r_6 (ATerm c_84 (ATerm), ATerm w_37, ATerm v_37, ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm q_8 = NULL,r_8 = NULL;
    if(match_cons(t, sym__2))
      {
        q_8 = ATgetArgument(t, 0);
        r_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(w_37), q_8, r_8);
    t = c_84(t);
    return(t);
  }
  t = not_null(v_37);
  t = map_1_0(g_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8 = NULL,v_8 = NULL;
      s_8 = t;
      t = (ATerm) ATinsert(ATempty, term_u_20);
      v_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_8, (ATerm) ATinsert(ATempty, term_u_20));
      t = w_6(s_8, v_8, t);
      LocalPopChoice(t_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_20 = t;
            if((PushChoice() == 0))
              {
                ATerm w_8 = NULL,x_8 = NULL;
                w_8 = t;
                t = (ATerm) ATinsert(ATempty, term_z_20);
                x_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_8, (ATerm) ATinsert(ATempty, term_z_20));
                t = w_6(w_8, x_8, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_20;
              }
            t = debug_1_0(h_1, t);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            t = debug_1_0(i_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  t = term_a_19;
  r_9 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  s_9 = t;
  t = SSL_printnl(r_9, s_9);
  t = q_9;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  if(match_cons(t, sym__3))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
      x_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_6(v_9, w_9, x_9, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm b_10 = NULL,d_10 = NULL,f_10 = NULL;
  b_10 = t;
  t = term_a_19;
  d_10 = t;
  t = (ATerm) ATinsert(ATempty, term_d_21);
  f_10 = t;
  t = SSL_printnl(d_10, f_10);
  t = b_10;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm j_10 = NULL,m_10 = NULL,n_10 = NULL;
  j_10 = t;
  t = term_a_19;
  m_10 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  n_10 = t;
  t = SSL_printnl(m_10, n_10);
  t = j_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,e_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  y_8 = t;
  t = if_verbose5_1_0(l_1, t);
  {
    ATerm e_21 = t;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL,o_9 = NULL;
        t = term_f_21;
        l_9 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_8);
        o_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATmakeAppl(sym_Imported_1, y_8));
        t = e_7(l_9, o_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_21;
      }
    a_9 = t;
    t = term_f_21;
    i_9 = t;
    t = term_g_21;
    j_9 = t;
    t = (ATerm) ATinsert(ATempty, y_8);
    k_9 = t;
    t = SSL_table_put(i_9, j_9, k_9);
    t = a_9;
    t = if_verbose4_1_0(p_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(r_1, t);
    z_8 = t;
    t = term_f_21;
    h_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_21, z_8);
    t = r_6(t_1, h_9, z_8, t);
    t = if_verbose6_1_0(u_1, t);
    t = term_f_21;
    b_9 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, y_8);
    e_9 = t;
    t = (ATerm) ATempty;
    g_9 = t;
    t = SSL_table_put(b_9, e_9, g_9);
    t = (ATerm) ATmakeAppl(sym__3, term_f_21, (ATerm)ATmakeAppl(sym_Imported_1, y_8), (ATerm) ATempty);
    t = if_verbose4_1_0(y_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,u_11 = NULL;
  q_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_11 = ATgetFirst((ATermList) t);
          u_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 = NULL,v_3 = NULL,w_3 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(q_11);
            j_3 = t;
            t = r_11;
            t = d_84(t);
            v_3 = t;
            t = u_11;
            t = filter_1_0(d_84, t);
            w_3 = t;
            t = (ATerm) ATinsert(CheckATermList(w_3), v_3);
            p_2 = t;
            t = SSLsetAnnotations(p_2, j_3);
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = u_11;
            t = filter_1_0(d_84, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_85(t);
        t = h_12(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
      }
    return(t);
  }
  t = h_12(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_12 = NULL;
            t = term_q_21;
            i_12 = t;
            t = SSL_getenv(i_12);
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  t = term_f_21;
  n_12 = t;
  t = term_s_21;
  o_12 = t;
  t = term_t_21;
  t = e_7(n_12, o_12, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm u_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_21;
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  t = if_verbose5_1_0(a_2, t);
  j_12 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,l_12 = NULL;
        t = term_f_21;
        k_12 = t;
        t = term_g_21;
        l_12 = t;
        t = term_y_21;
        t = e_7(k_12, l_12, t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        {
          ATerm m_12 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_12 = t;
          t = repeat_1_0(h_2, t);
          t = m_12;
        }
      }
    t = j_12;
    t = if_verbose5_1_0(i_2, t);
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm v_13 (ATerm s_12, ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  t = term_f_21;
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_12);
  x_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATmakeAppl(sym_Tool_1, s_12));
  t = e_7(w_12, x_12, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_22 = ATgetFirst((ATermList) t);
      if(match_cons(a_22, sym__2))
        {
          ATerm c_22 = ATgetArgument(a_22, 0);
          v_12 = ATgetArgument(a_22, 1);
        }
      else
        _fail(t);
      {
        ATerm b_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_12;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_f_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
      t = if_verbose5_1_0(l_2, t);
      t = xtc_load_0_0(t);
      if(((a_13 != NULL) && (a_13 != t)))
        _fail(t);
      else
        a_13 = t;
      if(match_cons(t, sym__2))
        {
          y_12 = ATgetArgument(t, 0);
          z_12 = ATgetArgument(t, 1);
          {
            ATerm h_22 = t;
            int i_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_13 = NULL,h_13 = NULL,o_13 = NULL;
                t = term_f_21;
                if(((h_13 != NULL) && (h_13 != t)))
                  _fail(t);
                else
                  h_13 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_12));
                if(((o_13 != NULL) && (o_13 != t)))
                  _fail(t);
                else
                  o_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_12)));
                t = e_7(not_null(h_13), not_null(o_13), t);
                {
                  ATerm o_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((z_12 != NULL) && (z_12 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          z_12 = ATgetArgument(t, 0);
                        if(((f_13 != NULL) && (f_13 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(o_2, t);
                  t = not_null(f_13);
                }
                ;
                LocalPopChoice(i_22);
              }
            else
              {
                t = h_22;
                t = v_13(not_null(a_13), t);
              }
          }
        }
      else
        {
          t = v_13(not_null(a_13), t);
        }
      t = if_verbose5_1_0(q_2, t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm u_13 = NULL,l_4 = NULL,n_4 = NULL;
        u_13 = t;
        t = term_a_19;
        l_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_22), u_13), term_k_22);
        n_4 = t;
        t = SSL_printnl(l_4, n_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_22), u_13), term_k_22);
        t = if_verbose5_1_0(t_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  if(((a_14 != NULL) && (a_14 != t)))
    _fail(t);
  else
    a_14 = t;
  t = i_99(t);
  t = xtc_find_0_0(t);
  if(((z_13 != NULL) && (z_13 != t)))
    _fail(t);
  else
    z_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), not_null(a_14));
  {
    ATerm v_2 (ATerm t)
    {
      ATerm c_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), not_null(a_14));
      t = l_6(not_null(z_13), not_null(a_14), t);
      t = term_m_22;
      c_14 = t;
      t = SSL_exit(c_14);
      return(t);
    }
    t = fork_and_wait_1_0(v_2, t);
    t = not_null(a_14);
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_4 = NULL,w_4 = NULL;
      t = y_14;
      t = xtc_new_file_0_0(t);
      v_4 = t;
      t = m_0(t);
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_4, (ATerm) ATinsert(ATinsert(ATempty, v_4), term_n_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(v_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_4);
    }
  else
    {
      ATerm j_5 = NULL,l_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_14;
      t = xtc_new_file_0_0(t);
      j_5 = t;
      t = m_0(t);
      l_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_5), term_n_22), z_14), term_o_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(j_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_5);
    }
  return(t);
}
ATerm t_6 (ATerm z_83 (ATerm), ATerm h_36, ATerm f_36, ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,r_15 = NULL;
  h_15 = t;
  t = z_83(t);
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_15, h_36, f_36);
  t = f_7(c_15, h_36, f_36, t);
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_15 = NULL;
        t = term_v_22;
        s_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_15, term_v_22);
        t = e_7(c_15, s_15, t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_15 = ATgetFirst((ATermList) t);
        g_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_22;
    i_15 = t;
    t = (ATerm) ATinsert(CheckATermList(g_15), (ATerm) ATinsert(CheckATermList(d_15), h_36));
    r_15 = t;
    t = SSL_table_put(c_15, i_15, r_15);
    t = h_15;
  }
  return(t);
}
ATerm p_16 (ATerm a_16, ATerm t)
{
  t = a_16;
  {
    ATerm w_22 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_23 = ATgetArgument(t, 0);
            ATerm d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_22;
      }
    t = term_e_23;
    t = debug_1_0(w_2, t);
    t = (ATerm) ATmakeAppl(sym__2, a_16, term_f_11);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm q_16 (ATerm f_16, ATerm g_16, ATerm h_16, ATerm t)
{
  t = SSL_open_file(f_16, g_16);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
      {
        ATerm k_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_16(m_16, t);
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = k_23;
            t = q_16(n_16, o_16, m_16, t);
          }
      }
    }
  else
    {
      t = p_16(m_16, t);
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
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  t = term_h_8;
  t = new_0_0(t);
  s_16 = t;
  t = term_n_23;
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_16, term_n_23);
  t = d_7(s_16, t_16, t);
  u_16 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_16 = NULL;
        t = (ATerm) ATinsert(ATempty, term_z_20);
        w_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_16, (ATerm) ATinsert(ATempty, term_z_20));
        t = w_6(u_16, w_16, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = u_16;
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  t = new_file_0_0(t);
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, term_f_11);
  t = open_file_0_0(t);
  t = term_h_8;
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, term_h_8);
  t = t_6(x_2, a_17, b_17, t);
  t = a_17;
  return(t);
}
ATerm v_17 (ATerm l_17, ATerm t)
{
  t = SSL_fclose(l_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  s_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_17 = ATgetArgument(t, 0);
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_17);
            ;
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            t = v_17(s_17, t);
          }
      }
    }
  else
    {
      t = v_17(s_17, t);
    }
  return(t);
}
ATerm u_6 (ATerm r_47, ATerm t)
{
  t = SSL_read_term_from_stream(r_47);
  return(t);
}
ATerm v_6 (ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm w_17 = NULL;
  t = SSL_fopen(i_24, j_24);
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_17 = NULL;
  t = SSL_stdin_stream();
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_18 = NULL;
  t = SSL_stdout_stream();
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  t = SSL_stderr_stream();
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_18);
  return(t);
}
ATerm s_19 (ATerm i_18, ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_explode_term(i_18);
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_23 = ATgetArgument(t, 1);
        if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
          {
            j_18 = ATgetFirst((ATermList) v_23);
            {
              ATerm c_24 = (ATerm) ATgetNext((ATermList) v_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm t_19 (ATerm o_18, ATerm p_18, ATerm q_18, ATerm t)
{
  ATerm r_18 = NULL,v_18 = NULL,w_18 = NULL,c_19 = NULL,y_2 = NULL;
  t = SSLgetAnnotations(q_18);
  w_18 = t;
  t = o_18;
  if(match_cons(t, sym_Path_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_19, p_18);
  y_2 = t;
  t = SSLsetAnnotations(y_2, w_18);
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(r_18, v_18, t);
  return(t);
}
ATerm u_19 (ATerm e_19, ATerm f_19, ATerm h_19, ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,n_19 = NULL,z_2 = NULL;
  t = SSLgetAnnotations(h_19);
  k_19 = t;
  t = SSL_is_string(e_19);
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_19, f_19);
  z_2 = t;
  t = SSLsetAnnotations(z_2, k_19);
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(i_19, j_19, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      ATerm f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  p_19 = t;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      r_19 = ATgetArgument(t, 1);
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_19(p_19, t);
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            {
              ATerm k_24 = t;
              int l_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_19(q_19, r_19, p_19, t);
                  ;
                  LocalPopChoice(l_24);
                }
              else
                {
                  t = k_24;
                  t = u_19(q_19, r_19, p_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_19(p_19, t);
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_19 = NULL;
      z_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_19, term_v_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      t = debug_1_0(a_3, t);
      _fail(t);
    }
  w_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(x_19, t);
  v_19 = t;
  t = w_19;
  t = fclose_0_0(t);
  t = v_19;
  return(t);
}
ATerm w_6 (ATerm a_24, ATerm b_24, ATerm t)
{
  t = SSL_access(a_24, b_24);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_20 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_25;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm h_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_z_20);
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_20, (ATerm) ATinsert(ATempty, term_z_20));
      t = w_6(e_20, h_20, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,m_6 = NULL;
  t = read_from_0_0(t);
  t = u_99(t);
  h_6 = t;
  t = xtc_new_file_0_0(t);
  m_6 = t;
  t = SSL_print(m_6, h_6);
  t = SSL_close_file(m_6);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_6);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,s_20 = NULL;
  s_20 = t;
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_20 = ATgetArgument(t, 0);
            {
              ATerm i_7 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(s_20);
              i_7 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_20);
              d_3 = t;
              t = SSLsetAnnotations(d_3, i_7);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_20;
          }
        LocalPopChoice(f_25);
        t = xtc_transform_file_2_0(c_3, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = e_25;
        t = xtc_transform_term_2_0(e_3, create_abox2latex_args_0_0, t);
      }
    p_20 = t;
    t = term_g_25;
    t = create_header_0_0(t);
    q_20 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, p_20), q_20);
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(b_3, t);
  return(t);
}
ATerm x_6 (ATerm q_43, ATerm r_43, ATerm t)
{
  t = SSL_copy(q_43, r_43);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,j_22 = NULL;
  g_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        t = g_22;
        t = k_0(t);
        t_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = t_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = t_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, j_22, t_7);
        t = x_6(j_22, t_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        {
          ATerm o_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_8 = NULL;
              t = g_22;
              t = k_0(t);
              c_8 = t;
              {
                ATerm q_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_8 = NULL;
                    f_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = f_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = f_8;
                          }
                        else
                          {
                            t = f_8;
                            if((j_22 != t))
                              {
                                _fail(t);
                              }
                            t = f_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_22, c_8);
                t = x_6(j_22, c_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
              }
              ;
              LocalPopChoice(p_25);
            }
          else
            {
              t = o_25;
              t = g_22;
              t = k_0(t);
              if((j_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
            }
        }
      }
  }
  return(t);
}
ATerm y_6 (ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  s_22 = t;
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
        t = e_7(u_36, v_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_25 = ATgetFirst((ATermList) t);
            r_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_25);
        t = SSL_table_put(u_36, v_36, r_22);
        t = (ATerm) ATmakeAppl(sym__3, u_36, v_36, r_22);
      }
    else
      {
        t = r_25;
        t = SSL_table_remove(u_36, v_36);
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
      }
    t = s_22;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  t = w_83(t);
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_23 = NULL;
        t = term_v_22;
        a_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), term_v_22);
        t = e_7(not_null(x_22), a_23, t);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_22 != NULL) && (u_22 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_22 = ATgetFirst((ATermList) t);
        if(((t_22 != NULL) && (t_22 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          t_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_22;
    if(((z_22 != NULL) && (z_22 != t)))
      _fail(t);
    else
      z_22 = t;
    t = SSL_table_put(not_null(x_22), not_null(z_22), not_null(t_22));
    t = not_null(u_22);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm b_23 = NULL;
        b_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), b_23);
        t = y_6(not_null(x_22), b_23, t);
        return(t);
      }
      t = map_1_0(g_3, t);
      t = not_null(y_22);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_74(t);
      t = u_74(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      t = u_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,l_23 = NULL;
  g_23 = t;
  t = v_83(t);
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_23, term_v_22);
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_26 = ATgetArgument(t, 0);
            ATerm b_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_22;
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_23, term_v_22);
        t = e_7(f_23, t_23, t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
    h_23 = t;
    t = term_v_22;
    i_23 = t;
    t = (ATerm) ATinsert(CheckATermList(h_23), (ATerm) ATempty);
    l_23 = t;
    t = SSL_table_put(f_23, i_23, l_23);
    t = g_23;
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_24);
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = e_24;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm w_23 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm x_23 = NULL;
    x_23 = t;
    {
      ATerm e_26 = t;
      int f_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_23 = NULL,z_23 = NULL;
          t = term_q_23;
          y_23 = t;
          t = term_v_22;
          z_23 = t;
          t = term_g_26;
          t = e_7(y_23, z_23, t);
          ;
          LocalPopChoice(f_26);
        }
      else
        {
          t = e_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_23 != NULL) && (w_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_23 = ATgetFirst((ATermList) t);
          {
            ATerm h_26 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(w_23);
      t = map_1_0(l_3, t);
      t = x_23;
      t = end_scope_1_0(m_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(h_3, t);
  t = restore_always_2_0(u_98, k_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = term_k_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL;
        t = term_o_22;
        t = get_config_0_0(t);
        n_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_24);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = term_c_25;
      }
    t = v_98(t);
    t = copy_to_1_0(x_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(s_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  o_24 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  p_24 = t;
  t = term_a_19;
  r_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_26), p_24), term_q_26);
  s_24 = t;
  t = SSL_printnl(r_24, s_24);
  t = term_e_10;
  q_24 = t;
  t = SSL_exit(q_24);
  t = o_24;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_25 = NULL,b_25 = NULL,d_25 = NULL;
      t = term_h_8;
      t = j_0(t);
      a_25 = t;
      t = term_s_26;
      b_25 = t;
      t = term_t_26;
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_26, term_t_26, a_25);
      t = f_7(b_25, d_25, a_25, t);
      _fail(t);
    }
  else
    {
      ATerm h_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_24 = ATgetFirst((ATermList) t);
          x_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_24 = ATgetFirst((ATermList) t);
          z_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_24;
      t = h_0(t);
      t = y_24;
      t = i_0(t);
      h_25 = t;
      t = (ATerm) ATinsert(CheckATermList(z_24), h_25);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm u_26 (ATerm t)
  {
    ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
    n_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_26 = ATgetFirst((ATermList) t);
        m_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_9 = NULL,n_9 = NULL,f_3 = NULL;
          t = SSLgetAnnotations(n_26);
          d_9 = t;
          t = m_26;
          t = u_26(t);
          n_9 = t;
          t = (ATerm) ATinsert(CheckATermList(n_9), l_26);
          f_3 = t;
          t = SSLsetAnnotations(f_3, d_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_26;
        t = m_76(t);
      }
    return(t);
  }
  t = u_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  j_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_25;
    }
  else
    {
      ATerm y_3 (ATerm t)
      {
        t = not_null(l_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_25 != NULL) && (k_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_25 = ATgetFirst((ATermList) t);
          if(((l_25 != NULL) && (l_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(k_25);
      t = at_end_1_0(y_3, t);
    }
  return(t);
}
ATerm m_27 (ATerm a_27, ATerm t)
{
  ATerm c_27 = NULL;
  t = SSL_explode_term(a_27);
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_27;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,h_27 = NULL;
  if(((h_27 != NULL) && (h_27 != t)))
    _fail(t);
  else
    h_27 = t;
  if(match_cons(t, sym__2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              t = not_null(f_27);
              return(t);
            }
            t = not_null(e_27);
            t = at_end_1_0(a_4, t);
            ;
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = m_27(not_null(h_27), t);
          }
      }
    }
  else
    {
      t = m_27(not_null(h_27), t);
    }
  return(t);
}
ATerm z_6 (ATerm j_54, ATerm i_54, ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  t = j_54;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATempty;
      }
    o_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_54, o_27);
    t = conc_0_0(t);
    n_27 = t;
    t = term_b_27;
    p_27 = t;
    t = SSL_table_put(p_27, j_54, n_27);
    t = (ATerm) ATmakeAppl(sym__3, term_b_27, j_54, n_27);
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  if(match_string(t, "-k"))
    {
      t = r_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_27;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  t = SSL_string_to_int(t_27);
  u_27 = t;
  t = term_d_27;
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_27, u_27);
  t = h_7(v_27, u_27, t);
  t = t_27;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, e_4, f_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  if(match_string(t, "-S"))
    {
      t = x_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_27;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  t = term_u_9;
  y_27 = t;
  t = term_i_27;
  z_27 = t;
  t = term_j_27;
  t = h_7(y_27, z_27, t);
  t = term_k_27;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  t = SSL_string_to_int(a_28);
  b_28 = t;
  t = term_u_9;
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, b_28);
  t = h_7(c_28, b_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_28);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_q_27;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm d_28 = NULL,g_28 = NULL;
  t = term_s_27;
  d_28 = t;
  t = term_h_8;
  g_28 = t;
  t = term_w_27;
  t = h_7(d_28, g_28, t);
  t = term_e_28;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_4, i_4, k_4, t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm j_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_4, o_4, p_4, t);
            ;
            LocalPopChoice(n_28);
          }
        else
          {
            t = j_28;
            t = Option_3_0(q_4, r_4, s_4, t);
          }
      }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  if(match_string(t, "-o"))
    {
      t = k_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_28;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  l_28 = t;
  t = term_n_22;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, l_28);
  t = h_7(m_28, l_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_28);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, y_4, z_4, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  if(match_string(t, "-i"))
    {
      t = t_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_28;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm w_28 = NULL,z_28 = NULL;
  w_28 = t;
  t = term_o_22;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, w_28);
  t = h_7(z_28, w_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_28);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, f_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  t = term_b_8;
  b_29 = t;
  t = (ATerm) ATinsert(ATempty, a_29);
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATempty, a_29));
  t = z_6(b_29, c_29, t);
  t = a_29;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  f_29 = t;
  t = term_d_11;
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, f_29);
  t = h_7(g_29, f_29, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm s_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = s_28;
      {
        ATerm v_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = v_28;
            {
              ATerm y_28 = t;
              int d_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(d_29);
                }
              else
                {
                  t = y_28;
                  {
                    ATerm e_29 = t;
                    int i_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(i_29);
                      }
                    else
                      {
                        t = e_29;
                        {
                          ATerm j_29 = t;
                          int k_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(h_5, k_5, m_5, t);
                              ;
                              LocalPopChoice(k_29);
                            }
                          else
                            {
                              t = j_29;
                              t = ArgOption_3_0(o_5, q_5, r_5, t);
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
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_29 = NULL,l_29 = NULL,p_29 = NULL,q_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_8;
  t = whoami_0_0(t);
  h_29 = t;
  t = term_a_19;
  p_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_29), h_29);
  q_29 = t;
  t = SSL_printnl(p_29, q_29);
  t = term_e_10;
  l_29 = t;
  t = SSL_exit(l_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_29;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_7 (ATerm t_34, ATerm u_34, ATerm t)
{
  ATerm o_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_34, u_34);
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = o_29;
      t = SSL_addr(t_34, u_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  s_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_29;
      t = o_82(t);
    }
  else
    {
      ATerm x_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_29 = ATgetFirst((ATermList) t);
          u_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_29;
      t = foldr_2_0(o_82, p_82, t);
      x_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_29, x_29);
      t = p_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(g_10, h_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_30 = NULL,z_9 = NULL,a_10 = NULL;
  t = times_0_0(t);
  a_10 = t;
  t = SSL_explode_term(a_10);
  if(match_cons(t, sym__2))
    {
      ATerm v_29 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9;
  t = foldr_2_0(s_5, u_5, t);
  a_30 = t;
  t = SSL_TicksToSeconds(a_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  if(match_cons(t, sym__2))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_30;
        if((m_30 != t))
          {
            _fail(t);
          }
        t = l_30;
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
        {
          ATerm z_29 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_30, n_30);
              ;
              LocalPopChoice(b_30);
            }
          else
            {
              t = z_29;
              t = SSL_gtr(m_30, n_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL;
        t = term_u_9;
        t = get_config_0_0(t);
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_30, term_e_10);
        t = geq_0_0(t);
        t = r_30;
        t = s_97(t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = r_30;
      }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,y_30 = NULL,z_30 = NULL;
  t = run_time_0_0(t);
  v_30 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  w_30 = t;
  t = term_a_19;
  y_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_30), v_30), term_j_11), w_30);
  z_30 = t;
  t = SSL_printnl(y_30, z_30);
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_30), v_30), term_j_11), w_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_27;
  a_31 = t;
  t = SSL_exit(a_31);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  p_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_31 = ATgetArgument(t, 0);
          {
            ATerm a_11 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(p_31);
            a_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_31);
            i_3 = t;
            t = SSLsetAnnotations(i_3, a_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      t = fetch_1_0(x_5, t);
    }
  t = m_70(t);
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
        ATerm x_31 = NULL,y_31 = NULL;
        ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_31)), not_null(y_31));
          return(t);
        }
        t = not_null(t_31);
        t = g_0(t);
        if(((x_31 != NULL) && (x_31 != t)))
          _fail(t);
        else
          x_31 = t;
        t = not_null(s_31);
        t = e_0(t);
        if(((y_31 != NULL) && (y_31 != t)))
          _fail(t);
        else
          y_31 = t;
        t = not_null(t_31);
        t = reverse_acc_2_0(e_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_8;
      t = g_0(t);
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,r_3 = NULL;
  e_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_32);
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_32);
  r_3 = t;
  t = SSLsetAnnotations(r_3, c_32);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm g_32 = NULL;
  g_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_32), term_i_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      t = fetch_1_0(a_6, t);
    }
  t = term_o_30;
  t = echo_0_0(t);
  t = term_s_26;
  a_32 = t;
  t = term_t_26;
  b_32 = t;
  t = term_p_30;
  t = e_7(a_32, b_32, t);
  t = reverse_acc_2_0(_id, b_6, t);
  t = map_1_0(d_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm f_33 (ATerm t)
  {
    ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
    c_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_33 = ATgetFirst((ATermList) t);
        e_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_11 = NULL,s_11 = NULL,b_4 = NULL;
          t = SSLgetAnnotations(c_33);
          l_11 = t;
          t = d_33;
          t = g_76(t);
          s_11 = t;
          t = (ATerm) ATinsert(CheckATermList(e_33), s_11);
          b_4 = t;
          t = SSLsetAnnotations(b_4, l_11);
          ;
          LocalPopChoice(s_30);
        }
      else
        {
          t = q_30;
          {
            ATerm e_12 = NULL,q_12 = NULL,c_4 = NULL;
            t = SSLgetAnnotations(c_33);
            e_12 = t;
            t = e_33;
            t = f_33(t);
            q_12 = t;
            t = (ATerm) ATinsert(CheckATermList(q_12), d_33);
            c_4 = t;
            t = SSLsetAnnotations(c_4, e_12);
          }
        }
    }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  {
    ATerm u_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_31 = ATgetFirst((ATermList) t);
                ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_33;
          }
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = u_30;
        t = (ATerm) ATinsert(ATempty, j_33);
      }
    k_33 = t;
    t = term_k_26;
    l_33 = t;
    t = SSL_printnl(l_33, k_33);
    t = j_33;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_29;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm d_7 (ATerm g_43, ATerm h_43, ATerm t)
{
  t = SSL_strcat(g_43, h_43);
  return(t);
}
ATerm debug_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  p_33 = t;
  t = g_88(t);
  q_33 = t;
  t = term_a_19;
  r_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_33), q_33);
  s_33 = t;
  t = SSL_printnl(r_33, s_33);
  t = p_33;
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm h_34 (ATerm t)
  {
    ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
    e_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_34;
      }
    else
      {
        ATerm k_13 = NULL,n_13 = NULL,p_13 = NULL,g_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_34 = ATgetFirst((ATermList) t);
            g_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_34);
        k_13 = t;
        t = f_34;
        t = w_75(t);
        n_13 = t;
        t = g_34;
        t = h_34(t);
        p_13 = t;
        t = (ATerm) ATinsert(CheckATermList(p_13), n_13);
        g_4 = t;
        t = SSLsetAnnotations(g_4, k_13);
      }
    return(t);
  }
  t = h_34(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_h_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_34 = NULL;
      p_34 = t;
      t = SSL_is_string(p_34);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = i_31;
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_6, t);
            ;
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            {
              ATerm x_34 = NULL,y_34 = NULL,b_35 = NULL;
              x_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_34 = ATgetArgument(t, 0);
                  t = y_34;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_34 = ATgetArgument(t, 0);
                      t = y_34;
                      {
                        ATerm q_31 = t;
                        int r_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(r_31);
                          }
                        else
                          {
                            t = q_31;
                            t = debug_1_0(g_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_35 = NULL,g_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_34 = ATgetArgument(t, 0);
                          b_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_34;
                      t = eval_config_0_0(t);
                      f_35 = t;
                      t = b_35;
                      t = eval_config_0_0(t);
                      g_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
                      t = d_7(f_35, g_35, t);
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
  ATerm k_35 = NULL,l_35 = NULL;
  k_35 = t;
  t = term_b_27;
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_27, k_35);
  t = e_7(l_35, k_35, t);
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_35 = NULL,n_35 = NULL;
        t = eval_config_0_0(t);
        m_35 = t;
        t = term_b_27;
        n_35 = t;
        t = SSL_table_put(n_35, k_35, m_35);
        t = m_35;
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
      }
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  t = term_w_31;
  q_35 = t;
  t = term_h_8;
  r_35 = t;
  t = term_z_31;
  t = h_7(q_35, r_35, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t = term_w_31;
  u_35 = t;
  t = term_h_8;
  v_35 = t;
  t = term_z_31;
  t = h_7(u_35, v_35, t);
  t = term_h_32;
  s_35 = t;
  t = term_h_8;
  t_35 = t;
  t = term_i_32;
  t = h_7(s_35, t_35, t);
  t = term_j_32;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, b_7, c_7, t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = Option_3_0(g_7, j_7, k_7, t);
    }
  return(t);
}
ATerm h_7 (ATerm d_54, ATerm e_54, ATerm t)
{
  ATerm w_35 = NULL;
  t = term_b_27;
  w_35 = t;
  t = SSL_table_put(w_35, d_54, e_54);
  t = (ATerm) ATmakeAppl(sym__3, term_b_27, d_54, e_54);
  return(t);
}
ATerm e_7 (ATerm g_38, ATerm h_38, ATerm t)
{
  t = SSL_table_get(g_38, h_38);
  return(t);
}
ATerm f_7 (ATerm p_36, ATerm q_36, ATerm o_36, ATerm t)
{
  ATerm y_35 = NULL,k_36 = NULL,l_36 = NULL;
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_32 = ATgetArgument(t, 0);
            ATerm q_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
        t = e_7(p_36, q_36, t);
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = (ATerm) ATempty;
      }
    k_36 = t;
    t = (ATerm) ATinsert(CheckATermList(k_36), o_36);
    l_36 = t;
    t = SSL_table_put(p_36, q_36, l_36);
    t = y_35;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
      t = term_h_8;
      t = d_0(t);
      z_36 = t;
      t = term_s_26;
      a_37 = t;
      t = term_t_26;
      b_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_26, term_t_26, z_36);
      t = f_7(a_37, b_37, z_36, t);
      _fail(t);
    }
  else
    {
      ATerm e_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_36 = ATgetFirst((ATermList) t);
          y_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_36;
      t = a_0(t);
      t = term_h_8;
      t = c_0(t);
      e_37 = t;
      t = (ATerm) ATinsert(CheckATermList(y_36), e_37);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,c_6 = NULL;
  k_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_37 = ATgetFirst((ATermList) t);
      h_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_37);
  f_37 = t;
  t = g_37;
  t = o_63(t);
  i_37 = t;
  t = h_37;
  t = p_63(t);
  j_37 = t;
  t = (ATerm) ATinsert(CheckATermList(j_37), i_37);
  c_6 = t;
  t = SSLsetAnnotations(c_6, f_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm u_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,d_38 = NULL,e_38 = NULL,f_6 = NULL;
  if(((u_37 != NULL) && (u_37 != t)))
    _fail(t);
  else
    u_37 = t;
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_32;
        t = p_90(t);
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
      }
    t = not_null(u_37);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_38 != NULL) && (a_38 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_38 = ATgetFirst((ATermList) t);
        if(((b_38 != NULL) && (b_38 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          b_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(u_37));
    if(((z_37 != NULL) && (z_37 != t)))
      _fail(t);
    else
      z_37 = t;
    t = term_n_29;
    if(((e_38 != NULL) && (e_38 != t)))
      _fail(t);
    else
      e_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_29, not_null(a_38));
    t = h_7(not_null(e_38), not_null(a_38), t);
    t = not_null(b_38);
    {
      ATerm q_38 (ATerm t)
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_32 = t;
            int x_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_38 = NULL;
                j_38 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_38;
                ;
                LocalPopChoice(x_32);
              }
            else
              {
                t = w_32;
                t = p_90(t);
                t = Cons_2_0(_id, q_38, t);
              }
            ;
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            {
              ATerm m_38 = NULL,n_38 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_38 = ATgetFirst((ATermList) t);
                  n_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_38), (ATerm) ATmakeAppl(sym_Undefined_1, m_38));
            }
          }
        return(t);
      }
      t = q_38(t);
      if(((d_38 != NULL) && (d_38 != t)))
        _fail(t);
      else
        d_38 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(d_38)), (ATerm) ATmakeAppl(sym_Program_1, not_null(a_38)));
      if(((f_6 != NULL) && (f_6 != t)))
        _fail(t);
      else
        f_6 = t;
      t = SSLsetAnnotations(not_null(f_6), not_null(z_37));
    }
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  if(match_string(t, "--help"))
    {
      t = c_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_39;
        }
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  t = term_h_30;
  d_39 = t;
  t = term_h_8;
  e_39 = t;
  t = term_y_32;
  t = h_7(d_39, e_39, t);
  t = term_z_32;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm s_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  if(((x_38 != NULL) && (x_38 != t)))
    _fail(t);
  else
    x_38 = t;
  t = term_s_26;
  if(((z_38 != NULL) && (z_38 != t)))
    _fail(t);
  else
    z_38 = t;
  t = term_t_26;
  if(((a_39 != NULL) && (a_39 != t)))
    _fail(t);
  else
    a_39 = t;
  t = (ATerm) ATempty;
  if(((b_39 != NULL) && (b_39 != t)))
    _fail(t);
  else
    b_39 = t;
  t = SSL_table_put(not_null(z_38), not_null(a_39), not_null(b_39));
  t = not_null(x_38);
  {
    ATerm m_7 (ATerm t)
    {
      ATerm b_33 = t;
      int g_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_90(t);
          ;
          LocalPopChoice(g_33);
        }
      else
        {
          t = b_33;
          {
            ATerm h_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_7, p_7, r_7, t);
                ;
                LocalPopChoice(i_33);
              }
            else
              {
                t = h_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_7, t);
    {
      ATerm m_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_39 = NULL;
          l_39 = t;
          {
            ATerm o_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_14 = NULL;
                t = l_39;
                {
                  ATerm u_33 = t;
                  int v_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_30;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_33);
                    }
                  else
                    {
                      t = u_33;
                      t = fetch_1_0(s_7, t);
                    }
                  t = l_39;
                  t = default_system_usage_0_0(t);
                  t = term_i_27;
                  v_14 = t;
                  t = SSL_exit(v_14);
                }
                ;
                LocalPopChoice(t_33);
              }
            else
              {
                t = o_33;
                {
                  ATerm j_15 = NULL;
                  t = term_w_31;
                  t = get_config_0_0(t);
                  t = l_39;
                  t = default_system_about_0_0(t);
                  t = term_i_27;
                  j_15 = t;
                  t = SSL_exit(j_15);
                }
              }
          }
          ;
          LocalPopChoice(n_33);
        }
      else
        {
          t = m_33;
          {
            ATerm w_33 = t;
            int x_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
                ATerm u_7 (ATerm t)
                {
                  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_6 = NULL;
                  r_39 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_39 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_39);
                  p_39 = t;
                  t = q_39;
                  if(((v_38 != NULL) && (v_38 != t)))
                    _fail(t);
                  else
                    v_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_39);
                  s_6 = t;
                  t = SSLsetAnnotations(s_6, p_39);
                  return(t);
                }
                t = fetch_1_0(u_7, t);
                t = term_a_19;
                if(((n_39 != NULL) && (n_39 != t)))
                  _fail(t);
                else
                  n_39 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_38)), term_y_33);
                if(((o_39 != NULL) && (o_39 != t)))
                  _fail(t);
                else
                  o_39 = t;
                t = SSL_printnl(not_null(n_39), not_null(o_39));
                t = (ATerm) ATmakeAppl(sym__2, term_a_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_38)), term_y_33));
                t = default_system_usage_0_0(t);
                t = term_e_10;
                if(((m_39 != NULL) && (m_39 != t)))
                  _fail(t);
                else
                  m_39 = t;
                t = SSL_exit(not_null(m_39));
                ;
                LocalPopChoice(x_33);
              }
            else
              {
                t = w_33;
              }
          }
        }
      if(((w_38 != NULL) && (w_38 != t)))
        _fail(t);
      else
        w_38 = t;
      t = term_s_26;
      if(((y_38 != NULL) && (y_38 != t)))
        _fail(t);
      else
        y_38 = t;
      t = SSL_table_destroy(not_null(y_38));
      t = not_null(w_38);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  t = parse_options_1_0(o_70, t);
  w_39 = t;
  t = term_z_33;
  z_39 = t;
  t = SSL_table_create(z_39);
  t = term_z_33;
  x_39 = t;
  t = term_a_34;
  y_39 = t;
  t = SSL_table_put(x_39, y_39, w_39);
  t = w_39;
  t = q_70(t);
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_70, t);
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        {
          ATerm d_34 = t;
          int i_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_70(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_34);
            }
          else
            {
              t = d_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = xtc_io_1_0(abox2latex_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2latex_options_0_0, default_usage_0_0, _id, v_7, t);
  return(t);
}
