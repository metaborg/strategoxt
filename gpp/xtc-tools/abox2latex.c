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
ATerm term_n_34;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_h_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_v_31;
ATerm term_m_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_d_31;
ATerm term_x_30;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_m_28;
ATerm term_k_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_y_26;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_t_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_x_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_a_19;
ATerm term_w_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_r_11;
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
ATerm term_n_10;
ATerm term_g_10;
ATerm term_y_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_c_8;
ATerm term_y_7;
ATerm term_x_7;
void init_constant_terms (void)
{
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
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
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_g_10, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_c_12, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_p_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_s_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_m_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_u_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_c_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_q_16, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_f_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_l_17, term_n_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_c_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_j_18, term_l_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_a_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_n_21);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_t_23, term_b_23);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_x_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_27);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_g_8);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_m_27);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_g_8);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_o_32, term_g_8);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_g_8);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm a_0 (ATerm);
ATerm tables2text_0_0 (ATerm);
ATerm create_header_0_0 (ATerm);
ATerm i_6 (ATerm r_22, ATerm s_22, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm create_table_file_0_0 (ATerm);
ATerm create_abox2latex_args_0_0 (ATerm);
ATerm j_6 (ATerm f_35, ATerm g_35, ATerm);
ATerm k_6 (ATerm i_76 (ATerm), ATerm r_416, ATerm n_35, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm);
ATerm l_6 (ATerm k_34, ATerm l_34, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm n_75 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm o_6 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm c_19, ATerm b_19, ATerm);
ATerm p_6 (ATerm u_67 (ATerm), ATerm y_18, ATerm x_18, ATerm);
ATerm f_1 (ATerm);
ATerm q_6 (ATerm e_25, ATerm f_25, ATerm g_25, ATerm);
ATerm r_6 (ATerm x_71 (ATerm), ATerm o_25, ATerm n_25, ATerm);
ATerm h_1 (ATerm);
ATerm k_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm i_14 (ATerm a_13, ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm t_6 (ATerm u_71 (ATerm), ATerm z_23, ATerm x_23, ATerm);
ATerm d_17 (ATerm e_16, ATerm);
ATerm e_17 (ATerm o_16, ATerm p_16, ATerm r_16, ATerm);
ATerm x_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm h_18 (ATerm b_18, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_6 (ATerm l_35, ATerm);
ATerm v_6 (ATerm a_12, ATerm b_12, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_20 (ATerm z_18, ATerm);
ATerm r_20 (ATerm i_19, ATerm j_19, ATerm k_19, ATerm);
ATerm s_20 (ATerm u_19, ATerm y_19, ATerm z_19, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm a_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm w_6 (ATerm s_11, ATerm t_11, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_text_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm x_6 (ATerm k_31, ATerm l_31, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm y_6 (ATerm m_24, ATerm n_24, ATerm);
ATerm end_scope_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_62 (ATerm), ATerm o_62 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_71 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm m_3 (ATerm);
ATerm r_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm xtc_io_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm p_28 (ATerm e_28, ATerm);
ATerm conc_0_0 (ATerm);
ATerm z_6 (ATerm d_42, ATerm c_42, ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm u_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm c_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm abox2latex_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_7 (ATerm l_22, ATerm m_22, ATerm);
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm need_help_1_0 (ATerm g_58 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_7 (ATerm a_31, ATerm b_31, ATerm);
ATerm debug_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm m_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm h_7 (ATerm x_41, ATerm y_41, ATerm);
ATerm e_7 (ATerm y_25, ATerm z_25, ATerm);
ATerm f_7 (ATerm h_24, ATerm i_24, ATerm g_24, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_78 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm parse_options_1_0 (ATerm o_78 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), c_0), term_x_7);
  e_0 = t;
  t = SSL_concat_strings(e_0);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm b_0 = NULL;
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      t = (ATerm) ATempty;
    }
  t = map_1_0(a_0, t);
  b_0 = t;
  t = SSL_concat_strings(b_0);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm q_0 = NULL,v_0 = NULL;
  t = term_g_8;
  t = tables2text_0_0(t);
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_8), term_n_9), term_m_9), term_i_8), term_d_9), term_c_9), term_u_8), term_t_8), term_p_8), term_i_8), q_0), term_o_8), term_l_8), term_i_8), term_k_8), term_i_8), term_j_8), term_i_8);
  v_0 = t;
  t = SSL_concat_strings(v_0);
  return(t);
}
ATerm i_6 (ATerm r_22, ATerm s_22, ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_22, s_22);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      t = SSL_subtr(r_22, s_22);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  t = term_y_9;
  {
    ATerm z_9 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = z_9;
        t = term_g_10;
      }
    y_0 = t;
    t = term_g_10;
    a_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_0, term_g_10);
    t = i_6(y_0, a_1, t);
    z_0 = t;
    t = SSL_int_to_string(z_0);
    x_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, x_0), term_y_9);
  }
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm b_1 = NULL,e_1 = NULL;
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  e_1 = t;
  t = (ATerm) ATinsert(CheckATermList(e_1), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_y_10), term_x_10)), (ATerm) ATinsert(ATinsert(ATempty, term_w_10), term_v_10)), (ATerm) ATinsert(ATinsert(ATempty, term_u_10), term_t_10)), (ATerm) ATinsert(ATinsert(ATempty, term_s_10), term_r_10)), (ATerm) ATinsert(ATinsert(ATempty, term_q_10), term_p_10)), (ATerm) ATinsert(ATinsert(ATempty, term_o_10), term_n_10)));
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
  ATerm i_1 = NULL,j_1 = NULL;
  t = term_g_8;
  t = create_table_file_0_0(t);
  i_1 = t;
  t = term_g_8;
  t = pass_verbose_0_0(t);
  j_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(j_1), i_1), term_z_10);
  {
    ATerm a_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL;
        t = term_d_11;
        t = get_config_0_0(t);
        r_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(j_1), i_1), term_z_10), r_1), term_e_11);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = a_11;
      }
  }
  return(t);
}
ATerm j_6 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_write_term_to_stream_baf(f_35, g_35);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_1);
  return(t);
}
ATerm k_6 (ATerm i_76 (ATerm), ATerm r_416, ATerm n_35, ATerm t)
{
  ATerm v_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_416, term_f_11);
  t = open_stream_0_0(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, n_35);
  t = i_76(t);
  t = fclose_0_0(t);
  t = n_35;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm z_1 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      if(match_cons(g_11, sym_Stream_1))
        {
          z_1 = ATgetArgument(g_11, 0);
        }
      else
        _fail(t);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(z_1, f_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL;
  w_1 = t;
  t = xtc_new_file_0_0(t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, w_1);
  t = k_6(f_0, x_1, w_1, t);
  t = SSL_close_file(x_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(r_87, s_87, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm l_6 (ATerm k_34, ATerm l_34, ATerm t)
{
  t = SSL_execvp(k_34, l_34);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm k_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  k_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      n_3 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(n_3);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), s_0), term_h_11);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm n_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          n_3 = ATgetArgument(t, 0);
          o_3 = ATgetArgument(t, 1);
          p_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_3);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_3), term_k_11), n_1), term_j_11), n_3);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm s_3 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = c_64(t);
    if(((s_3 != NULL) && (s_3 != t)))
      _fail(t);
    else
      s_3 = t;
    return(t);
  }
  t = fetch_1_0(o_0, t);
  t = not_null(s_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_3 = NULL;
  t_3 = t;
  {
    ATerm l_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm o_11 = ATgetArgument(t, 0);
              if((t_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm q_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_18), term_d_18), term_y_17), term_u_17), term_o_17), term_h_17), term_y_16), term_t_16), term_m_16), term_i_16), term_d_16), term_z_15), term_q_15), term_k_15), term_e_15), term_z_14), term_v_14), term_q_14), term_j_14), term_e_14), term_z_13), term_t_13), term_o_13), term_b_13), term_q_12), term_j_12), term_e_12), term_y_11);
        t = fetch_elem_1_0(u_0, t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, t_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_3 = NULL,i_4 = NULL;
  y_3 = t;
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_18 = ATgetArgument(t, 0);
            i_4 = ATgetArgument(t, 1);
            {
              ATerm s_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_18);
        {
          ATerm t_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_2 = NULL,e_2 = NULL,g_2 = NULL;
              t = i_4;
              {
                ATerm v_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_18;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                c_2 = t;
                t = term_w_18;
                e_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_a_19);
                g_2 = t;
                t = SSL_printnl(e_2, g_2);
                t = (ATerm) ATmakeAppl(sym__2, term_w_18, (ATerm) ATinsert(ATinsert(ATempty, c_2), term_a_19));
              }
              ;
              LocalPopChoice(u_18);
            }
          else
            {
              t = t_18;
              t = y_3;
            }
        }
      }
    else
      {
        t = p_18;
        t = y_3;
      }
    t = y_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_75 (ATerm), ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL;
  t_4 = t;
  t = fork_0_0(t);
  s_4 = t;
  {
    ATerm d_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_4;
        t = n_75(t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = d_19;
        t = SSL_waitpid(s_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            if(((ATgetType(g_19) != AT_INT) || (ATgetInt((ATermInt) g_19) != 0)))
              _fail(t);
            {
              ATerm h_19 = ATgetArgument(t, 1);
            }
            {
              ATerm o_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_4 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm a_5 = NULL,b_5 = NULL;
    a_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), a_5);
    t = e_7(not_null(z_4), a_5, t);
    b_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_5, b_5);
    return(t);
  }
  if(((z_4 != NULL) && (z_4 != t)))
    _fail(t);
  else
    z_4 = t;
  t = SSL_table_keys(z_4);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL;
        t = term_y_9;
        t = get_config_0_0(t);
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_5, term_s_17);
        t = geq_0_0(t);
        t = d_5;
        t = w_85(t);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = d_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  {
    ATerm r_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = term_y_9;
        t = get_config_0_0(t);
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_t_14);
        t = geq_0_0(t);
        t = l_5;
        t = v_85(t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = r_19;
        t = l_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm s_5 = NULL;
  s_5 = t;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_5 = NULL;
        t = term_y_9;
        t = get_config_0_0(t);
        u_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_5, term_l_12);
        t = geq_0_0(t);
        t = s_5;
        t = x_85(t);
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = s_5;
      }
  }
  return(t);
}
ATerm o_6 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm c_19, ATerm b_19, ATerm t)
{
  t = y_67(t);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm x_5 = NULL;
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_19, x_5);
      t = x_67(t);
      return(t);
    }
    t = fetch_1_0(c_1, t);
    t = b_19;
  }
  return(t);
}
ATerm p_6 (ATerm u_67 (ATerm), ATerm y_18, ATerm x_18, ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm g_7 = NULL,l_7 = NULL,o_7 = NULL;
    g_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_18;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_7 = ATgetFirst((ATermList) t);
            o_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_19 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_7;
              {
                ATerm d_1 (ATerm t)
                {
                  t = x_18;
                  return(t);
                }
                t = o_6(u_67, d_1, l_7, o_7, t);
                t = s_7(t);
              }
              ;
              LocalPopChoice(b_20);
            }
          else
            {
              t = x_19;
              {
                ATerm n_2 = NULL,t_2 = NULL,j_2 = NULL;
                t = SSLgetAnnotations(g_7);
                n_2 = t;
                t = o_7;
                t = s_7(t);
                t_2 = t;
                t = (ATerm) ATinsert(CheckATermList(t_2), l_7);
                j_2 = t;
                t = SSLsetAnnotations(j_2, n_2);
              }
            }
        }
      }
    return(t);
  }
  t = y_18;
  t = s_7(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm m_8 = NULL;
  if(match_cons(t, sym__2))
    {
      m_8 = ATgetArgument(t, 0);
      if((m_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm e_25, ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm z_7 = NULL,d_8 = NULL,e_8 = NULL;
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            ATerm h_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
        t = e_7(e_25, f_25, t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATempty;
      }
    e_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_8, g_25);
    t = p_6(f_1, e_8, g_25, t);
    d_8 = t;
    t = SSL_table_put(e_25, f_25, d_8);
    t = z_7;
  }
  return(t);
}
ATerm r_6 (ATerm x_71 (ATerm), ATerm o_25, ATerm n_25, ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm n_8 = NULL,q_8 = NULL;
    if(match_cons(t, sym__2))
      {
        n_8 = ATgetArgument(t, 0);
        q_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_25, n_8, q_8);
    t = x_71(t);
    return(t);
  }
  t = n_25;
  t = map_1_0(g_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_8 = NULL,s_8 = NULL;
      r_8 = t;
      t = (ATerm) ATinsert(ATempty, term_x_20);
      s_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_8, (ATerm) ATinsert(ATempty, term_x_20));
      t = w_6(r_8, s_8, t);
      LocalPopChoice(m_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_20;
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21 = t;
            if((PushChoice() == 0))
              {
                ATerm v_8 = NULL,w_8 = NULL;
                v_8 = t;
                t = (ATerm) ATinsert(ATempty, term_d_21);
                w_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_8, (ATerm) ATinsert(ATempty, term_d_21));
                t = w_6(v_8, w_8, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_21;
              }
            t = debug_1_0(h_1, t);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = debug_1_0(k_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm o_9 = NULL,q_9 = NULL,r_9 = NULL;
  o_9 = t;
  t = term_w_18;
  q_9 = t;
  t = (ATerm) ATinsert(ATempty, term_g_21);
  r_9 = t;
  t = SSL_printnl(q_9, r_9);
  t = o_9;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm s_9 = NULL,v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__3))
    {
      s_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      w_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_6(s_9, v_9, w_9, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm x_9 = NULL,b_10 = NULL,d_10 = NULL;
  x_9 = t;
  t = term_w_18;
  b_10 = t;
  t = (ATerm) ATinsert(ATempty, term_k_21);
  d_10 = t;
  t = SSL_printnl(b_10, d_10);
  t = x_9;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm f_10 = NULL,j_10 = NULL,m_10 = NULL;
  f_10 = t;
  t = term_w_18;
  j_10 = t;
  t = (ATerm) ATinsert(ATempty, term_g_21);
  m_10 = t;
  t = SSL_printnl(j_10, m_10);
  t = f_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,e_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
  x_8 = t;
  t = if_verbose5_1_0(l_1, t);
  {
    ATerm l_21 = t;
    if((PushChoice() == 0))
      {
        ATerm k_9 = NULL,l_9 = NULL;
        t = term_m_21;
        k_9 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_8);
        l_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATmakeAppl(sym_Imported_1, x_8));
        t = e_7(k_9, l_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_21;
      }
    z_8 = t;
    t = term_m_21;
    h_9 = t;
    t = term_n_21;
    i_9 = t;
    t = (ATerm) ATinsert(ATempty, x_8);
    j_9 = t;
    t = SSL_table_put(h_9, i_9, j_9);
    t = z_8;
    t = if_verbose4_1_0(p_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(s_1, t);
    y_8 = t;
    t = term_m_21;
    g_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_21, y_8);
    t = r_6(t_1, g_9, y_8, t);
    t = if_verbose6_1_0(y_1, t);
    t = term_m_21;
    a_9 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, x_8);
    b_9 = t;
    t = (ATerm) ATempty;
    e_9 = t;
    t = SSL_table_put(a_9, b_9, e_9);
    t = (ATerm) ATmakeAppl(sym__3, term_m_21, (ATerm)ATmakeAppl(sym_Imported_1, x_8), (ATerm) ATempty);
    t = if_verbose4_1_0(a_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_11 = ATgetFirst((ATermList) t);
          w_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 = NULL,v_3 = NULL,w_3 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(u_11);
            l_3 = t;
            t = v_11;
            t = y_71(t);
            v_3 = t;
            t = w_11;
            t = filter_1_0(y_71, t);
            w_3 = t;
            t = (ATerm) ATinsert(CheckATermList(w_3), v_3);
            o_2 = t;
            t = SSLsetAnnotations(o_2, l_3);
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            t = w_11;
            t = filter_1_0(y_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm m_12 (ATerm t)
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_73(t);
        t = m_12(t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
      }
    return(t);
  }
  t = m_12(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_12 = NULL;
            t = term_y_21;
            o_12 = t;
            t = SSL_getenv(o_12);
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  t = term_m_21;
  v_12 = t;
  t = term_a_22;
  w_12 = t;
  t = term_b_22;
  t = e_7(v_12, w_12, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_22;
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_12 = NULL;
  t = if_verbose5_1_0(b_2, t);
  r_12 = t;
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_12 = NULL,t_12 = NULL;
        t = term_m_21;
        s_12 = t;
        t = term_n_21;
        t_12 = t;
        t = term_g_22;
        t = e_7(s_12, t_12, t);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm u_12 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_12 = t;
          t = repeat_1_0(h_2, t);
          t = u_12;
        }
      }
    t = r_12;
    t = if_verbose5_1_0(i_2, t);
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm i_14 (ATerm a_13, ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  t = term_m_21;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, a_13);
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATmakeAppl(sym_Tool_1, a_13));
  t = e_7(d_13, e_13, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_22 = ATgetFirst((ATermList) t);
      if(match_cons(i_22, sym__2))
        {
          ATerm k_22 = ATgetArgument(i_22, 0);
          c_13 = ATgetArgument(i_22, 1);
        }
      else
        _fail(t);
      {
        ATerm j_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_13;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_m_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(v_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
      t = if_verbose5_1_0(l_2, t);
      t = xtc_load_0_0(t);
      h_13 = t;
      if(match_cons(t, sym__2))
        {
          f_13 = ATgetArgument(t, 0);
          g_13 = ATgetArgument(t, 1);
          {
            ATerm q_22 = t;
            int t_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
                t = term_m_21;
                m_13 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, f_13);
                n_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATmakeAppl(sym_Tool_1, f_13));
                t = e_7(m_13, n_13, t);
                {
                  ATerm p_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((g_13 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_13 != NULL) && (l_13 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_2, t);
                  t = not_null(l_13);
                }
                ;
                LocalPopChoice(t_22);
              }
            else
              {
                t = q_22;
                t = i_14(h_13, t);
              }
          }
        }
      else
        {
          t = i_14(h_13, t);
        }
      t = if_verbose5_1_0(r_2, t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm a_14 = NULL,n_4 = NULL,r_4 = NULL;
        a_14 = t;
        t = term_w_18;
        n_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_22), a_14), term_u_22);
        r_4 = t;
        t = SSL_printnl(n_4, r_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_22), a_14), term_u_22);
        t = if_verbose5_1_0(u_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL;
  o_14 = t;
  t = i_87(t);
  t = xtc_find_0_0(t);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_14, o_14);
  {
    ATerm w_2 (ATerm t)
    {
      ATerm p_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_14, o_14);
      t = l_6(n_14, o_14, t);
      t = term_w_22;
      p_14 = t;
      t = SSL_exit(p_14);
      return(t);
    }
    t = fork_and_wait_1_0(w_2, t);
    t = o_14;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  i_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_4 = NULL,y_4 = NULL;
      t = i_15;
      t = xtc_new_file_0_0(t);
      w_4 = t;
      t = r_0(t);
      y_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_4, (ATerm) ATinsert(ATinsert(ATempty, w_4), term_x_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(w_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_4);
    }
  else
    {
      ATerm k_5 = NULL,m_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_15;
      t = xtc_new_file_0_0(t);
      k_5 = t;
      t = r_0(t);
      m_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_5), term_x_22), j_15), term_y_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(k_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_5);
    }
  return(t);
}
ATerm t_6 (ATerm u_71 (ATerm), ATerm z_23, ATerm x_23, ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,t_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  t = u_71(t);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_15, z_23, x_23);
  t = f_7(o_15, z_23, x_23, t);
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_15 = NULL;
        t = term_b_23;
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_15, term_b_23);
        t = e_7(o_15, y_15, t);
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_15 = ATgetFirst((ATermList) t);
        t_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_b_23;
    w_15 = t;
    t = (ATerm) ATinsert(CheckATermList(t_15), (ATerm) ATinsert(CheckATermList(p_15), z_23));
    x_15 = t;
    t = SSL_table_put(o_15, w_15, x_15);
    t = v_15;
  }
  return(t);
}
ATerm d_17 (ATerm e_16, ATerm t)
{
  t = e_16;
  {
    ATerm c_23 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_23 = ATgetArgument(t, 0);
            ATerm g_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_23;
      }
    t = term_h_23;
    t = debug_1_0(x_2, t);
    t = (ATerm) ATmakeAppl(sym__2, e_16, term_f_11);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm e_17 (ATerm o_16, ATerm p_16, ATerm r_16, ATerm t)
{
  t = SSL_open_file(o_16, p_16);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_16 = NULL,z_16 = NULL,c_17 = NULL;
  x_16 = t;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_17(x_16, t);
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = e_17(z_16, c_17, x_16, t);
          }
      }
    }
  else
    {
      t = d_17(x_16, t);
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
  ATerm g_17 = NULL,j_17 = NULL,k_17 = NULL;
  t = term_g_8;
  t = new_0_0(t);
  g_17 = t;
  t = term_n_23;
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_17, term_n_23);
  t = d_7(g_17, j_17, t);
  k_17 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_17 = NULL;
        t = (ATerm) ATinsert(ATempty, term_d_21);
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_17, (ATerm) ATinsert(ATempty, term_d_21));
        t = w_6(k_17, m_17, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = k_17;
      }
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  t = new_file_0_0(t);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, term_f_11);
  t = open_file_0_0(t);
  t = term_g_8;
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, term_g_8);
  t = t_6(z_2, p_17, q_17, t);
  t = p_17;
  return(t);
}
ATerm h_18 (ATerm b_18, ATerm t)
{
  t = SSL_fclose(b_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_18 = ATgetArgument(t, 0);
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_18);
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            t = h_18(f_18, t);
          }
      }
    }
  else
    {
      t = h_18(f_18, t);
    }
  return(t);
}
ATerm u_6 (ATerm l_35, ATerm t)
{
  t = SSL_read_term_from_stream(l_35);
  return(t);
}
ATerm v_6 (ATerm a_12, ATerm b_12, ATerm t)
{
  ATerm i_18 = NULL;
  t = SSL_fopen(a_12, b_12);
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_18 = NULL;
  t = SSL_stdin_stream();
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_18 = NULL;
  t = SSL_stdout_stream();
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_18 = NULL;
  t = SSL_stderr_stream();
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_18);
  return(t);
}
ATerm q_20 (ATerm z_18, ATerm t)
{
  ATerm e_19 = NULL;
  t = SSL_explode_term(z_18);
  if(match_cons(t, sym__2))
    {
      ATerm w_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_23 = ATgetArgument(t, 1);
        if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
          {
            e_19 = ATgetFirst((ATermList) y_23);
            {
              ATerm a_24 = (ATerm) ATgetNext((ATermList) y_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_20 (ATerm i_19, ATerm j_19, ATerm k_19, ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,s_19 = NULL,q_2 = NULL;
  t = SSLgetAnnotations(k_19);
  n_19 = t;
  t = i_19;
  if(match_cons(t, sym_Path_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_19, j_19);
  q_2 = t;
  t = SSLsetAnnotations(q_2, n_19);
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(l_19, m_19, t);
  return(t);
}
ATerm s_20 (ATerm u_19, ATerm y_19, ATerm z_19, ATerm t)
{
  ATerm a_20 = NULL,e_20 = NULL,f_20 = NULL,k_20 = NULL,y_2 = NULL;
  t = SSLgetAnnotations(z_19);
  f_20 = t;
  t = SSL_is_string(u_19);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, y_19);
  y_2 = t;
  t = SSLsetAnnotations(y_2, f_20);
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(a_20, e_20, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_24 = ATgetArgument(t, 0);
      ATerm c_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_20 = t;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
      {
        ATerm f_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_20(n_20, t);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = f_24;
            {
              ATerm l_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_20(o_20, p_20, n_20, t);
                  ;
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = l_24;
                  t = s_20(o_20, p_20, n_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_20(n_20, t);
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_20 = NULL;
      w_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_20, term_t_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      t = debug_1_0(a_3, t);
      _fail(t);
    }
  u_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(v_20, t);
  t_20 = t;
  t = u_20;
  t = fclose_0_0(t);
  t = t_20;
  return(t);
}
ATerm w_6 (ATerm s_11, ATerm t_11, ATerm t)
{
  t = SSL_access(s_11, t_11);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_24;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_21 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_21);
      c_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_21, (ATerm) ATinsert(ATempty, term_d_21));
      t = w_6(a_21, c_21, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL;
  t = read_from_0_0(t);
  t = u_87(t);
  m_6 = t;
  t = xtc_new_file_0_0(t);
  n_6 = t;
  t = SSL_print(n_6, m_6);
  t = SSL_close_file(n_6);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_6);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
  j_21 = t;
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_21 = ATgetArgument(t, 0);
            {
              ATerm j_7 = NULL,c_3 = NULL;
              t = SSLgetAnnotations(j_21);
              j_7 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_21);
              c_3 = t;
              t = SSLsetAnnotations(c_3, j_7);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_21;
          }
        LocalPopChoice(b_25);
        t = xtc_transform_file_2_0(d_3, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = a_25;
        t = xtc_transform_term_2_0(f_3, create_abox2latex_args_0_0, t);
      }
    h_21 = t;
    t = term_c_25;
    t = create_header_0_0(t);
    i_21 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, h_21), i_21);
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(b_3, t);
  return(t);
}
ATerm x_6 (ATerm k_31, ATerm l_31, ATerm t)
{
  t = SSL_copy(k_31, l_31);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  d_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL;
        t = d_23;
        t = n_0(t);
        u_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = u_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = u_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, e_23, u_7);
        t = x_6(e_23, u_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_8 = NULL;
              t = d_23;
              t = n_0(t);
              f_8 = t;
              {
                ATerm m_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_8 = NULL;
                    h_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = h_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = h_8;
                          }
                        else
                          {
                            t = h_8;
                            if((e_23 != t))
                              {
                                _fail(t);
                              }
                            t = h_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, e_23, f_8);
                t = x_6(e_23, f_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
              }
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              t = d_23;
              t = n_0(t);
              if((e_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
            }
        }
      }
  }
  return(t);
}
ATerm y_6 (ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  m_23 = t;
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_24, n_24);
        t = e_7(m_24, n_24, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_25 = ATgetFirst((ATermList) t);
            l_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_25);
        t = SSL_table_put(m_24, n_24, l_23);
        t = (ATerm) ATmakeAppl(sym__3, m_24, n_24, l_23);
      }
    else
      {
        t = p_25;
        t = SSL_table_remove(m_24, n_24);
        t = (ATerm) ATmakeAppl(sym__2, m_24, n_24);
      }
    t = m_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,d_24 = NULL,e_24 = NULL;
  d_24 = t;
  t = r_71(t);
  q_23 = t;
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        t = term_b_23;
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, term_b_23);
        t = e_7(q_23, k_24, t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_23 = ATgetFirst((ATermList) t);
        o_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_b_23;
    e_24 = t;
    t = SSL_table_put(q_23, e_24, o_23);
    t = p_23;
    {
      ATerm h_3 (ATerm t)
      {
        ATerm o_24 = NULL;
        o_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, o_24);
        t = y_6(q_23, o_24, t);
        return(t);
      }
      t = map_1_0(h_3, t);
      t = d_24;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_62 (ATerm), ATerm o_62 (ATerm), ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_62(t);
      t = o_62(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      t = o_62(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  v_24 = t;
  t = q_71(t);
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_24, term_b_23);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_26 = ATgetArgument(t, 0);
            ATerm m_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_23;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_24, term_b_23);
        t = e_7(u_24, j_25, t);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATempty;
      }
    w_24 = t;
    t = term_b_23;
    x_24 = t;
    t = (ATerm) ATinsert(CheckATermList(w_24), (ATerm) ATempty);
    y_24 = t;
    t = SSL_table_put(u_24, x_24, y_24);
    t = v_24;
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(a_26);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = a_26;
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm s_25 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm t_25 = NULL;
    t_25 = t;
    {
      ATerm w_26 = t;
      int x_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_25 = NULL,v_25 = NULL;
          t = term_t_23;
          u_25 = t;
          t = term_b_23;
          v_25 = t;
          t = term_y_26;
          t = e_7(u_25, v_25, t);
          ;
          LocalPopChoice(x_26);
        }
      else
        {
          t = w_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_25 != NULL) && (s_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_25 = ATgetFirst((ATermList) t);
          {
            ATerm z_26 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = s_25;
      t = map_1_0(m_3, t);
      t = t_25;
      t = end_scope_1_0(r_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(i_3, t);
  t = restore_always_2_0(u_86, j_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm a_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = a_27;
      t = term_g_27;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_26 = NULL;
        t = term_y_22;
        t = get_config_0_0(t);
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_26);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = term_z_24;
      }
    t = v_86(t);
    t = copy_to_1_0(x_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL;
  e_26 = t;
  t = term_g_8;
  t = whoami_0_0(t);
  h_26 = t;
  t = term_w_18;
  j_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_27), h_26), term_j_27);
  l_26 = t;
  t = SSL_printnl(j_26, l_26);
  t = term_g_10;
  i_26 = t;
  t = SSL_exit(i_26);
  t = e_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
      t = term_g_8;
      t = m_0(t);
      t_26 = t;
      t = term_l_27;
      u_26 = t;
      t = term_m_27;
      v_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, t_26);
      t = f_7(u_26, v_26, t_26, t);
      _fail(t);
    }
  else
    {
      ATerm b_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_26 = ATgetFirst((ATermList) t);
          q_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_26 = ATgetFirst((ATermList) t);
          s_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_26;
      t = k_0(t);
      t = r_26;
      t = l_0(t);
      b_27 = t;
      t = (ATerm) ATinsert(CheckATermList(s_26), b_27);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm z_27 (ATerm t)
  {
    ATerm u_27 = NULL,v_27 = NULL,y_27 = NULL;
    y_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_27 = ATgetFirst((ATermList) t);
        v_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_9 = NULL,p_9 = NULL,e_3 = NULL;
          t = SSLgetAnnotations(y_27);
          f_9 = t;
          t = v_27;
          t = z_27(t);
          p_9 = t;
          t = (ATerm) ATinsert(CheckATermList(p_9), u_27);
          e_3 = t;
          t = SSLsetAnnotations(e_3, f_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_27;
        t = g_64(t);
      }
    return(t);
  }
  t = z_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_27;
    }
  else
    {
      ATerm a_4 (ATerm t)
      {
        t = not_null(f_27);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_27 != NULL) && (e_27 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_27 = ATgetFirst((ATermList) t);
          if(((f_27 != NULL) && (f_27 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_27;
      t = at_end_1_0(a_4, t);
    }
  return(t);
}
ATerm p_28 (ATerm e_28, ATerm t)
{
  ATerm f_28 = NULL;
  t = SSL_explode_term(e_28);
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,l_28 = NULL;
  l_28 = t;
  if(match_cons(t, sym__2))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_4 (ATerm t)
            {
              t = j_28;
              return(t);
            }
            t = i_28;
            t = at_end_1_0(c_4, t);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = p_28(l_28, t);
          }
      }
    }
  else
    {
      t = p_28(l_28, t);
    }
  return(t);
}
ATerm z_6 (ATerm d_42, ATerm c_42, ATerm t)
{
  ATerm q_28 = NULL,x_28 = NULL,y_28 = NULL;
  t = d_42;
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = (ATerm) ATempty;
      }
    x_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_42, x_28);
    t = conc_0_0(t);
    q_28 = t;
    t = term_s_27;
    y_28 = t;
    t = SSL_table_put(y_28, d_42, q_28);
    t = (ATerm) ATmakeAppl(sym__3, term_s_27, d_42, q_28);
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  if(match_string(t, "-k"))
    {
      t = a_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_29;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  t = SSL_string_to_int(c_29);
  d_29 = t;
  t = term_t_27;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, d_29);
  t = h_7(e_29, d_29, t);
  t = c_29;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, e_4, g_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  if(match_string(t, "-S"))
    {
      t = h_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_29;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm i_29 = NULL,l_29 = NULL;
  t = term_y_9;
  i_29 = t;
  t = term_x_27;
  l_29 = t;
  t = term_a_28;
  t = h_7(i_29, l_29, t);
  t = term_b_28;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  t = SSL_string_to_int(m_29);
  n_29 = t;
  t = term_y_9;
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, n_29);
  t = h_7(o_29, n_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_29);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL;
  t = term_g_28;
  p_29 = t;
  t = term_g_8;
  q_29 = t;
  t = term_h_28;
  t = h_7(p_29, q_29, t);
  t = term_k_28;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_4, j_4, k_4, t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, m_4, o_4, t);
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            t = Option_3_0(p_4, q_4, u_4, t);
          }
      }
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  if(match_string(t, "-o"))
    {
      t = t_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_29;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  u_29 = t;
  t = term_x_22;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_22, u_29);
  t = h_7(v_29, u_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_29);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, x_4, c_5, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  if(match_string(t, "-i"))
    {
      t = x_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_29;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  y_29 = t;
  t = term_y_22;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_22, y_29);
  t = h_7(z_29, y_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_29);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, f_5, g_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  t = term_c_8;
  b_30 = t;
  t = (ATerm) ATinsert(ATempty, a_30);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, a_30));
  t = z_6(b_30, c_30, t);
  t = a_30;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm d_30 = NULL,g_30 = NULL;
  d_30 = t;
  t = term_d_11;
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, d_30);
  t = h_7(g_30, d_30, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm z_28 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = z_28;
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
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
                  {
                    ATerm r_29 = t;
                    int s_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(s_29);
                      }
                    else
                      {
                        t = r_29;
                        {
                          ATerm w_29 = t;
                          int e_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(i_5, j_5, n_5, t);
                              ;
                              LocalPopChoice(e_30);
                            }
                          else
                            {
                              t = w_29;
                              t = ArgOption_3_0(p_5, q_5, r_5, t);
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
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_8;
  t = whoami_0_0(t);
  j_30 = t;
  t = term_w_18;
  l_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_30), j_30);
  m_30 = t;
  t = SSL_printnl(l_30, m_30);
  t = term_g_10;
  k_30 = t;
  t = SSL_exit(k_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_30;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_7 (ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm i_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_22, m_22);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = i_30;
      t = SSL_addr(l_22, m_22);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,w_30 = NULL,z_30 = NULL;
  t_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_30;
      t = i_70(t);
    }
  else
    {
      ATerm e_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_30 = ATgetFirst((ATermList) t);
          z_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_30;
      t = foldr_2_0(i_70, j_70, t);
      e_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_30, e_31);
      t = j_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL;
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(h_10, i_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_31 = NULL,a_10 = NULL,c_10 = NULL;
  t = times_0_0(t);
  c_10 = t;
  t = SSL_explode_term(c_10);
  if(match_cons(t, sym__2))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10;
  t = foldr_2_0(t_5, v_5, t);
  j_31 = t;
  t = SSL_TicksToSeconds(j_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  if(match_cons(t, sym__2))
    {
      d_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_32;
        if((d_32 != t))
          {
            _fail(t);
          }
        t = c_32;
        ;
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = (ATerm) ATmakeAppl(sym__2, d_32, e_32);
        {
          ATerm r_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_32, e_32);
              ;
              LocalPopChoice(s_30);
            }
          else
            {
              t = r_30;
              t = SSL_gtr(d_32, e_32);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_32, e_32);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_32 = NULL;
        t = term_y_9;
        t = get_config_0_0(t);
        k_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_32, term_g_10);
        t = geq_0_0(t);
        t = i_32;
        t = s_85(t);
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = i_32;
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,p_32 = NULL,q_32 = NULL;
  t = run_time_0_0(t);
  m_32 = t;
  t = term_g_8;
  t = whoami_0_0(t);
  n_32 = t;
  t = term_w_18;
  p_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_30), m_32), term_j_11), n_32);
  q_32 = t;
  t = SSL_printnl(p_32, q_32);
  t = (ATerm) ATmakeAppl(sym__2, term_w_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_30), m_32), term_j_11), n_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_27;
  r_32 = t;
  t = SSL_exit(r_32);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL;
  a_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_32 = ATgetArgument(t, 0);
          {
            ATerm b_11 = NULL,g_3 = NULL;
            t = SSLgetAnnotations(a_33);
            b_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_32);
            g_3 = t;
            t = SSLsetAnnotations(g_3, b_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_58 (ATerm), ATerm t)
{
  ATerm y_30 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = y_30;
      t = fetch_1_0(y_5, t);
    }
  t = g_58(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_33 = ATgetFirst((ATermList) t);
      e_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_33 = NULL,j_33 = NULL;
        ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_33)), not_null(j_33));
          return(t);
        }
        t = e_33;
        t = j_0(t);
        if(((i_33 != NULL) && (i_33 != t)))
          _fail(t);
        else
          i_33 = t;
        t = d_33;
        t = i_0(t);
        if(((j_33 != NULL) && (j_33 != t)))
          _fail(t);
        else
          j_33 = t;
        t = e_33;
        t = reverse_acc_2_0(i_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_8;
      t = j_0(t);
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_3 = NULL;
  p_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_33);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_33);
  q_3 = t;
  t = SSLsetAnnotations(q_3, n_33);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_33), term_f_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      t = fetch_1_0(a_6, t);
    }
  t = term_i_31;
  t = echo_0_0(t);
  t = term_l_27;
  l_33 = t;
  t = term_m_27;
  m_33 = t;
  t = term_m_31;
  t = e_7(l_33, m_33, t);
  t = reverse_acc_2_0(_id, c_6, t);
  t = map_1_0(e_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm v_34 (ATerm t)
  {
    ATerm o_34 = NULL,t_34 = NULL,u_34 = NULL;
    o_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_34 = ATgetFirst((ATermList) t);
        u_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_31 = t;
      int o_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_11 = NULL,p_11 = NULL,z_3 = NULL;
          t = SSLgetAnnotations(o_34);
          m_11 = t;
          t = t_34;
          t = a_64(t);
          p_11 = t;
          t = (ATerm) ATinsert(CheckATermList(u_34), p_11);
          z_3 = t;
          t = SSLsetAnnotations(z_3, m_11);
          ;
          LocalPopChoice(o_31);
        }
      else
        {
          t = n_31;
          {
            ATerm i_12 = NULL,n_12 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(o_34);
            i_12 = t;
            t = u_34;
            t = v_34(t);
            n_12 = t;
            t = (ATerm) ATinsert(CheckATermList(n_12), t_34);
            b_4 = t;
            t = SSLsetAnnotations(b_4, i_12);
          }
        }
    }
    return(t);
  }
  t = v_34(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_31 = ATgetFirst((ATermList) t);
                ATerm s_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_34;
          }
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = (ATerm) ATinsert(ATempty, z_34);
      }
    a_35 = t;
    t = term_g_27;
    b_35 = t;
    t = SSL_printnl(b_35, a_35);
    t = z_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm d_7 (ATerm a_31, ATerm b_31, ATerm t)
{
  t = SSL_strcat(a_31, b_31);
  return(t);
}
ATerm debug_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  h_35 = t;
  t = g_76(t);
  i_35 = t;
  t = term_w_18;
  j_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_35), i_35);
  k_35 = t;
  t = SSL_printnl(j_35, k_35);
  t = h_35;
  return(t);
}
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm t)
{
  ATerm c_36 (ATerm t)
  {
    ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
    z_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_35;
      }
    else
      {
        ATerm r_13 = NULL,u_13 = NULL,v_13 = NULL,f_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_36 = ATgetFirst((ATermList) t);
            b_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_35);
        r_13 = t;
        t = a_36;
        t = q_63(t);
        u_13 = t;
        t = b_36;
        t = c_36(t);
        v_13 = t;
        t = (ATerm) ATinsert(CheckATermList(v_13), u_13);
        f_4 = t;
        t = SSLsetAnnotations(f_4, r_13);
      }
    return(t);
  }
  t = c_36(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_36 = NULL;
      p_36 = t;
      t = SSL_is_string(p_36);
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_6, t);
            ;
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            {
              ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
              v_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_36 = ATgetArgument(t, 0);
                  t = w_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_36 = ATgetArgument(t, 0);
                      t = w_36;
                      {
                        ATerm a_32 = t;
                        int b_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_32);
                          }
                        else
                          {
                            t = a_32;
                            t = debug_1_0(h_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_37 = NULL,d_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_36 = ATgetArgument(t, 0);
                          x_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_36;
                      t = eval_config_0_0(t);
                      c_37 = t;
                      t = x_36;
                      t = eval_config_0_0(t);
                      d_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
                      t = d_7(c_37, d_37, t);
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
  ATerm h_37 = NULL,i_37 = NULL;
  h_37 = t;
  t = term_s_27;
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, h_37);
  t = e_7(i_37, h_37, t);
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_37 = NULL,k_37 = NULL;
        t = eval_config_0_0(t);
        j_37 = t;
        t = term_s_27;
        k_37 = t;
        t = SSL_table_put(k_37, h_37, j_37);
        t = j_37;
        ;
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
      }
  }
  return(t);
}
ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  t = term_h_32;
  n_37 = t;
  t = term_g_8;
  o_37 = t;
  t = term_j_32;
  t = h_7(n_37, o_37, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  t = term_h_32;
  r_37 = t;
  t = term_g_8;
  s_37 = t;
  t = term_j_32;
  t = h_7(r_37, s_37, t);
  t = term_o_32;
  p_37 = t;
  t = term_g_8;
  q_37 = t;
  t = term_s_32;
  t = h_7(p_37, q_37, t);
  t = term_t_32;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_6, b_7, c_7, t);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      t = Option_3_0(i_7, k_7, m_7, t);
    }
  return(t);
}
ATerm h_7 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm t_37 = NULL;
  t = term_s_27;
  t_37 = t;
  t = SSL_table_put(t_37, x_41, y_41);
  t = (ATerm) ATmakeAppl(sym__3, term_s_27, x_41, y_41);
  return(t);
}
ATerm e_7 (ATerm y_25, ATerm z_25, ATerm t)
{
  t = SSL_table_get(y_25, z_25);
  return(t);
}
ATerm f_7 (ATerm h_24, ATerm i_24, ATerm g_24, ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_33 = ATgetArgument(t, 0);
            ATerm c_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
        t = e_7(h_24, i_24, t);
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = (ATerm) ATempty;
      }
    w_37 = t;
    t = (ATerm) ATinsert(CheckATermList(w_37), g_24);
    x_37 = t;
    t = SSL_table_put(h_24, i_24, x_37);
    t = v_37;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
      t = term_g_8;
      t = h_0(t);
      f_38 = t;
      t = term_l_27;
      g_38 = t;
      t = term_m_27;
      h_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, f_38);
      t = f_7(g_38, h_38, f_38, t);
      _fail(t);
    }
  else
    {
      ATerm k_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_38 = ATgetFirst((ATermList) t);
          e_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_38;
      t = d_0(t);
      t = term_g_8;
      t = g_0(t);
      k_38 = t;
      t = (ATerm) ATinsert(CheckATermList(e_38), k_38);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,b_6 = NULL;
  q_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_38 = ATgetFirst((ATermList) t);
      n_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_38);
  l_38 = t;
  t = m_38;
  t = i_51(t);
  o_38 = t;
  t = n_38;
  t = j_51(t);
  p_38 = t;
  t = (ATerm) ATinsert(CheckATermList(p_38), o_38);
  b_6 = t;
  t = SSLsetAnnotations(b_6, l_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,a_39 = NULL,b_39 = NULL,d_6 = NULL;
  v_38 = t;
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_33;
        t = p_78(t);
        ;
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
      }
    t = v_38;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_38 = ATgetFirst((ATermList) t);
        y_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_38);
    w_38 = t;
    t = term_h_30;
    b_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_30, x_38);
    t = h_7(b_39, x_38, t);
    t = y_38;
    {
      ATerm l_39 (ATerm t)
      {
        ATerm k_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_39 = NULL;
                e_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_39;
                ;
                LocalPopChoice(t_33);
              }
            else
              {
                t = s_33;
                t = p_78(t);
                t = Cons_2_0(_id, l_39, t);
              }
            ;
            LocalPopChoice(q_33);
          }
        else
          {
            t = k_33;
            {
              ATerm h_39 = NULL,i_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_39 = ATgetFirst((ATermList) t);
                  i_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_39), (ATerm) ATmakeAppl(sym_Undefined_1, h_39));
            }
          }
        return(t);
      }
      t = l_39(t);
      if(((a_39 != NULL) && (a_39 != t)))
        _fail(t);
      else
        a_39 = t;
      t = (ATerm) ATinsert(CheckATermList(a_39), (ATerm) ATmakeAppl(sym_Program_1, x_38));
      if(((d_6 != NULL) && (d_6 != t)))
        _fail(t);
      else
        d_6 = t;
      t = SSLsetAnnotations(d_6, w_38);
    }
  }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  if(match_string(t, "--help"))
    {
      t = x_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_39;
        }
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  t = term_d_31;
  y_39 = t;
  t = term_g_8;
  z_39 = t;
  t = term_u_33;
  t = h_7(y_39, z_39, t);
  t = term_v_33;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm t_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_78 (ATerm), ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  s_39 = t;
  t = term_l_27;
  u_39 = t;
  t = term_m_27;
  v_39 = t;
  t = (ATerm) ATempty;
  w_39 = t;
  t = SSL_table_put(u_39, v_39, w_39);
  t = s_39;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm x_33 = t;
      int y_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_78(t);
          ;
          LocalPopChoice(y_33);
        }
      else
        {
          t = x_33;
          {
            ATerm z_33 = t;
            int a_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_7, q_7, r_7, t);
                ;
                LocalPopChoice(a_34);
              }
            else
              {
                t = z_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_7, t);
    {
      ATerm b_34 = t;
      int c_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_40 = NULL;
          g_40 = t;
          {
            ATerm d_34 = t;
            int e_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_14 = NULL;
                t = g_40;
                {
                  ATerm f_34 = t;
                  int g_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_34);
                    }
                  else
                    {
                      t = f_34;
                      t = fetch_1_0(t_7, t);
                    }
                  t = g_40;
                  t = default_system_usage_0_0(t);
                  t = term_x_27;
                  s_14 = t;
                  t = SSL_exit(s_14);
                }
                ;
                LocalPopChoice(e_34);
              }
            else
              {
                t = d_34;
                {
                  ATerm b_15 = NULL;
                  t = term_h_32;
                  t = get_config_0_0(t);
                  t = g_40;
                  t = default_system_about_0_0(t);
                  t = term_x_27;
                  b_15 = t;
                  t = SSL_exit(b_15);
                }
              }
          }
          ;
          LocalPopChoice(c_34);
        }
      else
        {
          t = b_34;
          {
            ATerm h_34 = t;
            int i_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
                ATerm v_7 (ATerm t)
                {
                  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,g_6 = NULL;
                  m_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      l_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_40);
                  k_40 = t;
                  t = l_40;
                  if(((q_39 != NULL) && (q_39 != t)))
                    _fail(t);
                  else
                    q_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_40);
                  g_6 = t;
                  t = SSLsetAnnotations(g_6, k_40);
                  return(t);
                }
                t = fetch_1_0(v_7, t);
                t = term_w_18;
                if(((i_40 != NULL) && (i_40 != t)))
                  _fail(t);
                else
                  i_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_39)), term_j_34);
                if(((j_40 != NULL) && (j_40 != t)))
                  _fail(t);
                else
                  j_40 = t;
                t = SSL_printnl(i_40, j_40);
                t = (ATerm) ATmakeAppl(sym__2, term_w_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_39)), term_j_34));
                t = default_system_usage_0_0(t);
                t = term_g_10;
                if(((h_40 != NULL) && (h_40 != t)))
                  _fail(t);
                else
                  h_40 = t;
                t = SSL_exit(h_40);
                ;
                LocalPopChoice(i_34);
              }
            else
              {
                t = h_34;
              }
          }
        }
      if(((r_39 != NULL) && (r_39 != t)))
        _fail(t);
      else
        r_39 = t;
      t = term_l_27;
      if(((t_39 != NULL) && (t_39 != t)))
        _fail(t);
      else
        t_39 = t;
      t = SSL_table_destroy(t_39);
      t = r_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  t = parse_options_1_0(i_58, t);
  r_40 = t;
  t = term_m_34;
  u_40 = t;
  t = SSL_table_create(u_40);
  t = term_m_34;
  s_40 = t;
  t = term_n_34;
  t_40 = t;
  t = SSL_table_put(s_40, t_40, r_40);
  t = r_40;
  t = k_58(t);
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_58, t);
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        {
          ATerm r_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_58(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_34);
            }
          else
            {
              t = r_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = xtc_io_1_0(abox2latex_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2latex_options_0_0, default_usage_0_0, _id, w_7, t);
  return(t);
}
