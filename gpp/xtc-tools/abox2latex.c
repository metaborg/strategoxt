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
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_i_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_g_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_j_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_z_28;
ATerm term_s_28;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_y_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_y_25;
ATerm term_s_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_g_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_p_23;
ATerm term_q_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
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
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_l_9;
ATerm term_j_9;
void init_constant_terms (void)
{
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_f_11, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_h_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_q_14, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_w_14, term_x_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_d_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_m_16, term_n_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_s_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_d_18, term_g_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_v_18, term_w_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_e_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_q_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_a_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_y_23);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_q_22);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_y_25, term_g_25);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_z_30);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_30);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_s_31, term_z_9);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_u_29, term_v_29);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__2, term_p_34, term_z_9);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_z_9);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_z_9);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm i_1 (ATerm);
ATerm tables2text_0_0 (ATerm);
ATerm create_header_0_0 (ATerm);
ATerm i_6 (ATerm z_34, ATerm a_35, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm create_table_file_0_0 (ATerm);
ATerm create_abox2latex_args_0_0 (ATerm);
ATerm j_6 (ATerm l_47, ATerm m_47, ATerm);
ATerm k_6 (ATerm i_88 (ATerm), ATerm w_438, ATerm t_47, ATerm);
ATerm j_1 (ATerm);
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
ATerm s_1 (ATerm);
ATerm q_6 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm);
ATerm r_6 (ATerm c_84 (ATerm), ATerm w_37, ATerm v_37, ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm r_10 (ATerm x_9, ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm i_99 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm i_69 (ATerm), ATerm);
ATerm t_6 (ATerm z_83 (ATerm), ATerm h_36, ATerm f_36, ATerm);
ATerm s_12 (ATerm h_12, ATerm);
ATerm t_12 (ATerm j_12, ATerm k_12, ATerm l_12, ATerm);
ATerm j_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm i_14 (ATerm y_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_6 (ATerm r_47, ATerm);
ATerm v_6 (ATerm i_24, ATerm j_24, ATerm);
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm w_6 (ATerm a_24, ATerm b_24, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_text_1_0 (ATerm u_99 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm x_6 (ATerm q_43, ATerm r_43, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm y_6 (ATerm u_36, ATerm v_36, ATerm);
ATerm end_scope_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm xtc_io_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm s_21 (ATerm f_21, ATerm);
ATerm conc_0_0 (ATerm);
ATerm z_6 (ATerm j_54, ATerm i_54, ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm o_5 (ATerm);
ATerm r_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm abox2latex_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_7 (ATerm t_34, ATerm u_34, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm need_help_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_7 (ATerm g_43, ATerm h_43, ATerm);
ATerm debug_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm m_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm b_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm h_7 (ATerm d_54, ATerm e_54, ATerm);
ATerm e_7 (ATerm g_38, ATerm h_38, ATerm);
ATerm f_7 (ATerm p_36, ATerm q_36, ATerm o_36, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm c_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_90 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm parse_options_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm);
ATerm i_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_9), n_0), term_j_9);
  o_0 = t;
  t = SSL_concat_strings(o_0);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm f_0 = NULL;
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      t = (ATerm) ATempty;
    }
  t = map_1_0(i_1, t);
  f_0 = t;
  t = SSL_concat_strings(f_0);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm r_0 = NULL,v_0 = NULL;
  t = term_z_9;
  t = tables2text_0_0(t);
  r_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_10), term_z_10), term_y_10), term_b_10), term_x_10), term_w_10), term_s_10), term_p_10), term_o_10), term_b_10), r_0), term_n_10), term_m_10), term_b_10), term_i_10), term_b_10), term_h_10), term_b_10);
  v_0 = t;
  t = SSL_concat_strings(v_0);
  return(t);
}
ATerm i_6 (ATerm z_34, ATerm a_35, ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_34, a_35);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      t = SSL_subtr(z_34, a_35);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  t = term_c_11;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = term_f_11;
      }
    x_0 = t;
    t = term_f_11;
    z_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_0, term_f_11);
    t = i_6(x_0, z_0, t);
    a_1 = t;
    t = SSL_int_to_string(a_1);
    y_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, y_0), term_c_11);
  }
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm b_1 = NULL,e_1 = NULL;
  ATerm g_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = g_11;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  b_1 = t;
  t = (ATerm) ATinsert(CheckATermList(b_1), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_g_12), term_f_12)), (ATerm) ATinsert(ATinsert(ATempty, term_e_12), term_c_12)), (ATerm) ATinsert(ATinsert(ATempty, term_b_12), term_w_11)), (ATerm) ATinsert(ATinsert(ATempty, term_u_11), term_s_11)), (ATerm) ATinsert(ATinsert(ATempty, term_r_11), term_q_11)), (ATerm) ATinsert(ATinsert(ATempty, term_p_11), term_k_11)));
  t = concat_0_0(t);
  t = write_to_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      e_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_1;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL;
  t = term_z_9;
  t = create_table_file_0_0(t);
  r_1 = t;
  t = term_z_9;
  t = pass_verbose_0_0(t);
  t_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(t_1), r_1), term_i_12);
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = term_q_12;
        t = get_config_0_0(t);
        u_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(t_1), r_1), term_i_12), u_1), term_x_12);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
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
  ATerm x_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_438, term_y_12);
  t = open_stream_0_0(t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, t_47);
  t = i_88(t);
  t = fclose_0_0(t);
  t = t_47;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      if(match_cons(a_13, sym_Stream_1))
        {
          g_2 = ATgetArgument(a_13, 0);
        }
      else
        _fail(t);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(g_2, h_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_1 = NULL,f_2 = NULL;
  y_1 = t;
  t = xtc_new_file_0_0(t);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, y_1);
  t = k_6(j_1, f_2, y_1, t);
  t = SSL_close_file(f_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_2);
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
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
  p_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      q_3 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(q_3);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_13), s_0), term_b_13);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm l_1 = NULL,m_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          q_3 = ATgetArgument(t, 0);
          r_3 = ATgetArgument(t, 1);
          s_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(r_3);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_3), term_f_13), l_1), term_e_13), q_3);
      m_1 = t;
      t = SSL_concat_strings(m_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm v_3 = NULL;
  ATerm k_1 (ATerm t)
  {
    t = i_76(t);
    if(((v_3 != NULL) && (v_3 != t)))
      _fail(t);
    else
      v_3 = t;
    return(t);
  }
  t = fetch_1_0(k_1, t);
  t = not_null(v_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_3 = NULL;
  x_3 = t;
  {
    ATerm g_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_20), term_v_19), term_m_19), term_b_19), term_s_18), term_o_18), term_k_18), term_u_17), term_o_17), term_i_17), term_e_17), term_a_17), term_w_16), term_o_16), term_g_16), term_y_15), term_r_15), term_n_15), term_j_15), term_f_15), term_a_15), term_s_14), term_k_14), term_c_14), term_x_13), term_t_13), term_p_13), term_l_13);
        {
          ATerm n_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm c_20 = ATgetArgument(t, 0);
                if((x_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm d_20 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(n_1, t);
        }
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = g_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm b_4 = NULL;
  b_4 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            o_4 = ATgetArgument(t, 1);
            {
              ATerm i_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_4;
        {
          ATerm j_20 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_20;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          z_1 = t;
          t = term_k_20;
          a_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, z_1), term_l_20);
          b_2 = t;
          t = SSL_printnl(a_2, b_2);
          t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, z_1), term_l_20));
        }
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
      }
    t = b_4;
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
  ATerm s_4 = NULL,x_4 = NULL;
  s_4 = t;
  t = fork_0_0(t);
  x_4 = t;
  {
    ATerm m_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = s_4;
        t = n_87(t);
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = m_20;
        t = SSL_waitpid(x_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            if(((ATgetType(q_20) != AT_INT) || (ATgetInt((ATermInt) q_20) != 0)))
              _fail(t);
            {
              ATerm r_20 = ATgetArgument(t, 1);
            }
            {
              ATerm s_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_5 = NULL;
  a_5 = t;
  t = SSL_table_keys(a_5);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm b_5 = NULL,c_5 = NULL;
      b_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_5, b_5);
      t = e_7(a_5, b_5, t);
      c_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_5, c_5);
      return(t);
    }
    t = map_1_0(o_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 = NULL,i_5 = NULL;
      d_5 = t;
      t = term_c_11;
      t = get_config_0_0(t);
      i_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_5, term_v_18);
      t = geq_0_0(t);
      t = d_5;
      t = w_97(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 = NULL,m_5 = NULL;
      j_5 = t;
      t = term_c_11;
      t = get_config_0_0(t);
      m_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_5, term_p_15);
      t = geq_0_0(t);
      t = j_5;
      t = v_97(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_5 = NULL,p_5 = NULL;
      n_5 = t;
      t = term_c_11;
      t = get_config_0_0(t);
      p_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_5, term_v_13);
      t = geq_0_0(t);
      t = n_5;
      t = x_97(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
    }
  return(t);
}
ATerm o_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm k_31, ATerm j_31, ATerm t)
{
  t = e_80(t);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_5 = NULL;
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_31, q_5);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(p_1, t);
    t = j_31;
  }
  return(t);
}
ATerm p_6 (ATerm a_80 (ATerm), ATerm g_31, ATerm f_31, ATerm t)
{
  t = g_31;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm a_21 = t;
      int b_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_31;
          ;
          LocalPopChoice(b_21);
        }
      else
        {
          t = a_21;
          {
            ATerm c_21 = t;
            int d_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_5 = NULL,x_5 = NULL,y_5 = NULL;
                v_5 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_5 = ATgetFirst((ATermList) t);
                    y_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = v_5;
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = f_31;
                    return(t);
                  }
                  t = o_6(a_80, q_1, x_5, y_5, t);
                  t = s_6(t);
                }
                ;
                LocalPopChoice(d_21);
              }
            else
              {
                t = c_21;
                t = Cons_2_0(_id, s_6, t);
              }
          }
        }
      return(t);
    }
    t = s_6(t);
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      if((s_7 != ATgetArgument(t, 1)))
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
  ATerm c_7 = NULL,g_7 = NULL,l_7 = NULL;
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
  {
    ATerm e_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_21 = ATgetArgument(t, 0);
            ATerm i_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
        t = e_7(m_37, n_37, t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = e_21;
        t = (ATerm) ATempty;
      }
    g_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_7, o_37);
    t = p_6(s_1, g_7, o_37, t);
    l_7 = t;
    t = SSL_table_put(m_37, n_37, l_7);
    t = c_7;
  }
  return(t);
}
ATerm r_6 (ATerm c_84 (ATerm), ATerm w_37, ATerm v_37, ATerm t)
{
  t = v_37;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm t_7 = NULL,u_7 = NULL;
      if(match_cons(t, sym__2))
        {
          t_7 = ATgetArgument(t, 0);
          u_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, w_37, t_7, u_7);
      t = c_84(t);
      return(t);
    }
    t = map_1_0(w_1, t);
  }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7 = NULL,w_7 = NULL;
      v_7 = t;
      t = (ATerm) ATinsert(ATempty, term_r_21);
      w_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_7, (ATerm) ATinsert(ATempty, term_r_21));
      t = w_6(v_7, w_7, t);
      LocalPopChoice(q_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_21 = t;
            if((PushChoice() == 0))
              {
                ATerm x_7 = NULL,y_7 = NULL;
                x_7 = t;
                t = (ATerm) ATinsert(ATempty, term_z_21);
                y_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_7, (ATerm) ATinsert(ATempty, term_z_21));
                t = w_6(x_7, y_7, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_21;
              }
            t = debug_1_0(c_2, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = debug_1_0(d_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  v_8 = t;
  t = term_k_20;
  w_8 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  x_8 = t;
  t = SSL_printnl(w_8, x_8);
  t = v_8;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__3))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
      a_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_6(y_8, z_8, a_9, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  b_9 = t;
  t = term_k_20;
  c_9 = t;
  t = (ATerm) ATinsert(ATempty, term_h_22);
  d_9 = t;
  t = SSL_printnl(c_9, d_9);
  t = b_9;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  t = term_k_20;
  f_9 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  g_9 = t;
  t = SSL_printnl(f_9, g_9);
  t = e_9;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,d_8 = NULL,e_8 = NULL,g_8 = NULL,i_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,q_8 = NULL;
  z_7 = t;
  t = if_verbose5_1_0(e_2, t);
  {
    ATerm i_22 = t;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL,s_8 = NULL;
        t = term_j_22;
        r_8 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_7);
        s_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATmakeAppl(sym_Imported_1, z_7));
        t = e_7(r_8, s_8, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_22;
      }
    a_8 = t;
    t = term_j_22;
    e_8 = t;
    t = term_q_22;
    g_8 = t;
    t = (ATerm) ATinsert(ATempty, z_7);
    i_8 = t;
    t = SSL_table_put(e_8, g_8, i_8);
    t = a_8;
    t = if_verbose4_1_0(l_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(p_2, t);
    d_8 = t;
    t = term_j_22;
    l_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_22, d_8);
    t = r_6(q_2, l_8, d_8, t);
    t = if_verbose6_1_0(r_2, t);
    t = term_j_22;
    m_8 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, z_7);
    n_8 = t;
    t = (ATerm) ATempty;
    q_8 = t;
    t = SSL_table_put(m_8, n_8, q_8);
    t = (ATerm) ATmakeAppl(sym__3, term_j_22, (ATerm)ATmakeAppl(sym_Imported_1, z_7), (ATerm) ATempty);
    t = if_verbose4_1_0(s_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm s_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = s_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              t = filter_1_0(d_84, t);
              return(t);
            }
            t = Cons_2_0(d_84, t_2, t);
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            {
              ATerm k_9 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm a_23 = ATgetFirst((ATermList) t);
                  k_9 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_9;
              t = filter_1_0(d_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm m_9 (ATerm t)
  {
    ATerm b_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_85(t);
        t = m_9(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = b_23;
      }
    return(t);
  }
  t = m_9(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm q_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_9 = NULL;
            t = term_u_23;
            n_9 = t;
            t = SSL_getenv(n_9);
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = q_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  t = term_j_22;
  s_9 = t;
  t = term_y_23;
  t_9 = t;
  t = term_c_24;
  t = e_7(s_9, t_9, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_24;
      }
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  t = if_verbose5_1_0(u_2, t);
  o_9 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL,q_9 = NULL;
        t = term_j_22;
        p_9 = t;
        t = term_q_22;
        q_9 = t;
        t = term_k_24;
        t = e_7(p_9, q_9, t);
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm r_9 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_9 = t;
          t = repeat_1_0(y_2, t);
          t = r_9;
        }
      }
    t = o_9;
    t = if_verbose5_1_0(z_2, t);
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm r_10 (ATerm x_9, ATerm t)
{
  ATerm a_10 = NULL,c_10 = NULL,d_10 = NULL;
  t = term_j_22;
  c_10 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_9);
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATmakeAppl(sym_Tool_1, x_9));
  t = e_7(c_10, d_10, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_24 = ATgetFirst((ATermList) t);
      if(match_cons(m_24, sym__2))
        {
          ATerm o_24 = ATgetArgument(m_24, 0);
          a_10 = ATgetArgument(m_24, 1);
        }
      else
        _fail(t);
      {
        ATerm n_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_10;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = debug_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_j_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(h_3, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(b_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
        g_10 = t;
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
            {
              ATerm s_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
                  t = term_j_22;
                  k_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, e_10);
                  l_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATmakeAppl(sym_Tool_1, e_10));
                  t = e_7(k_10, l_10, t);
                  {
                    ATerm d_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((f_10 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((j_10 != NULL) && (j_10 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            j_10 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(d_3, t);
                    t = not_null(j_10);
                  }
                  ;
                  LocalPopChoice(t_24);
                }
              else
                {
                  t = s_24;
                  t = r_10(g_10, t);
                }
            }
          }
        else
          {
            t = r_10(g_10, t);
          }
        t = if_verbose5_1_0(e_3, t);
      }
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm q_10 = NULL,i_2 = NULL,j_2 = NULL;
        q_10 = t;
        t = term_k_20;
        i_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_24), q_10), term_u_24);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_24), q_10), term_u_24);
        t = if_verbose5_1_0(g_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  t_10 = t;
  t = i_99(t);
  t = xtc_find_0_0(t);
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_10, t_10);
  {
    ATerm i_3 (ATerm t)
    {
      ATerm v_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, u_10, t_10);
      t = l_6(u_10, t_10, t);
      t = term_x_24;
      v_10 = t;
      t = SSL_exit(v_10);
      return(t);
    }
    t = fork_and_wait_1_0(i_3, t);
    t = t_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  h_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_2 = NULL,n_2 = NULL;
      t = h_11;
      t = xtc_new_file_0_0(t);
      m_2 = t;
      t = m_0(t);
      n_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_2, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_a_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(m_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_2);
    }
  else
    {
      ATerm v_2 = NULL,w_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_11;
      t = xtc_new_file_0_0(t);
      v_2 = t;
      t = m_0(t);
      w_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_2), term_a_25), i_11), term_b_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(v_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm i_69 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,b_0 = NULL,p_0 = NULL;
  o_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_11);
  l_11 = t;
  t = m_11;
  t = i_69(t);
  n_11 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_11);
  b_0 = t;
  t = SSLsetAnnotations(b_0, l_11);
  return(t);
}
ATerm t_6 (ATerm z_83 (ATerm), ATerm h_36, ATerm f_36, ATerm t)
{
  ATerm t_11 = NULL,v_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  t_11 = t;
  t = z_83(t);
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_11, h_36, f_36);
  t = f_7(v_11, h_36, f_36, t);
  {
    ATerm c_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_12 = NULL;
        t = term_g_25;
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_11, term_g_25);
        t = e_7(v_11, d_12, t);
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = c_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_11 = ATgetFirst((ATermList) t);
        y_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_25;
    z_11 = t;
    t = (ATerm) ATinsert(CheckATermList(y_11), (ATerm) ATinsert(CheckATermList(x_11), h_36));
    a_12 = t;
    t = SSL_table_put(v_11, z_11, a_12);
    t = t_11;
  }
  return(t);
}
ATerm s_12 (ATerm h_12, ATerm t)
{
  t = h_12;
  {
    ATerm h_25 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_25 = ATgetArgument(t, 0);
            ATerm n_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_25;
      }
    t = term_o_25;
    t = debug_1_0(j_3, t);
    t = (ATerm) ATmakeAppl(sym__2, h_12, term_y_12);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm t_12 (ATerm j_12, ATerm k_12, ATerm l_12, ATerm t)
{
  t = SSL_open_file(j_12, k_12);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,r_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_12(o_12, t);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = t_12(p_12, r_12, o_12, t);
          }
      }
    }
  else
    {
      t = s_12(o_12, t);
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
  ATerm u_12 = NULL,v_12 = NULL;
  t = term_z_9;
  t = new_0_0(t);
  u_12 = t;
  t = term_s_25;
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_12, term_s_25);
  t = d_7(u_12, v_12, t);
  {
    ATerm u_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL,z_12 = NULL;
        w_12 = t;
        t = (ATerm) ATinsert(ATempty, term_z_21);
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_12, (ATerm) ATinsert(ATempty, term_z_21));
        t = w_6(w_12, z_12, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = u_25;
      }
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_13 = NULL,h_13 = NULL;
  t = new_file_0_0(t);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_13, term_y_12);
  t = open_file_0_0(t);
  t = term_z_9;
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_13, term_z_9);
  t = t_6(k_3, d_13, h_13, t);
  t = d_13;
  return(t);
}
ATerm i_14 (ATerm y_13, ATerm t)
{
  t = SSL_fclose(y_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_14 = ATgetArgument(t, 0);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_14);
            ;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = i_14(g_14, t);
          }
      }
    }
  else
    {
      t = i_14(g_14, t);
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
  ATerm j_14 = NULL;
  t = SSL_fopen(i_24, j_24);
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_14);
  return(t);
}
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,u_14 = NULL,v_14 = NULL,q_0 = NULL,u_0 = NULL;
  v_14 = t;
  if(match_cons(t, sym__2))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_14);
  m_14 = t;
  t = n_14;
  t = z_58(t);
  p_14 = t;
  t = o_14;
  t = a_59(t);
  u_14 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_14, u_14);
  q_0 = t;
  t = SSLsetAnnotations(q_0, m_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_stdin_stream();
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_stdout_stream();
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_15 = NULL;
  t = SSL_stderr_stream();
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_15);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm b_16 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      b_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_16;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm e_16 = NULL;
  e_16 = t;
  t = SSL_is_string(e_16);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      ATerm c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_15 = NULL,a_4 = NULL;
        s_15 = t;
        t = SSL_explode_term(s_15);
        if(match_cons(t, sym__2))
          {
            ATerm f_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_26) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_26 = ATgetArgument(t, 1);
              if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
                {
                  a_4 = ATgetFirst((ATermList) i_26);
                  {
                    ATerm k_26 = (ATerm) ATgetNext((ATermList) i_26);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = a_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = a_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = a_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_15 = NULL,x_15 = NULL;
              t = _2_0(l_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_15 = ATgetArgument(t, 0);
                  x_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_6(w_15, x_15, t);
              ;
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              {
                ATerm c_16 = NULL,d_16 = NULL;
                t = _2_0(m_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_16 = ATgetArgument(t, 0);
                    d_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_6(c_16, d_16, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_16 = NULL;
      l_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_16, term_t_26);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      t = debug_1_0(n_3, t);
      _fail(t);
    }
  i_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(k_16, t);
  j_16 = t;
  t = i_16;
  t = fclose_0_0(t);
  t = j_16;
  return(t);
}
ATerm w_6 (ATerm a_24, ATerm b_24, ATerm t)
{
  t = SSL_access(a_24, b_24);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_16 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_26;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm r_16 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_z_21);
      r_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_16, (ATerm) ATinsert(ATempty, term_z_21));
      t = w_6(p_16, r_16, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,l_4 = NULL;
  t = read_from_0_0(t);
  t = u_99(t);
  j_4 = t;
  t = xtc_new_file_0_0(t);
  l_4 = t;
  t = SSL_print(l_4, j_4);
  t = SSL_close_file(l_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_4);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(d_27);
      t = xtc_transform_file_2_0(t_3, create_abox2latex_args_0_0, t);
    }
  else
    {
      t = c_27;
      t = xtc_transform_term_2_0(u_3, create_abox2latex_args_0_0, t);
    }
  t_16 = t;
  t = term_g_27;
  t = create_header_0_0(t);
  u_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_16), u_16);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(o_3, t);
  return(t);
}
ATerm x_6 (ATerm q_43, ATerm r_43, ATerm t)
{
  t = SSL_copy(q_43, r_43);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,m_17 = NULL;
  j_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = j_17;
        t = k_0(t);
        u_4 = t;
        {
          ATerm n_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(o_27);
            }
          else
            {
              t = n_27;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_17, u_4);
          t = x_6(m_17, u_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
        }
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          ATerm p_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_5 = NULL;
              t = j_17;
              t = k_0(t);
              h_5 = t;
              {
                ATerm s_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm t_27 = t;
                    int u_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(u_27);
                      }
                    else
                      {
                        t = t_27;
                        {
                          ATerm v_27 = t;
                          int w_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(w_27);
                            }
                          else
                            {
                              t = v_27;
                              {
                                ATerm k_5 = NULL;
                                k_5 = t;
                                if((m_17 != t))
                                  {
                                    _fail(t);
                                  }
                                t = k_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_27;
                  }
                t = (ATerm) ATmakeAppl(sym__2, m_17, h_5);
                t = x_6(m_17, h_5, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
              }
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = p_27;
              t = j_17;
              t = k_0(t);
              if((m_17 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
            }
        }
      }
  }
  return(t);
}
ATerm y_6 (ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL;
  s_17 = t;
  {
    ATerm x_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
        t = e_7(u_36, v_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_28 = ATgetFirst((ATermList) t);
            t_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_27);
        t = SSL_table_put(u_36, v_36, t_17);
        t = (ATerm) ATmakeAppl(sym__3, u_36, v_36, t_17);
      }
    else
      {
        t = x_27;
        t = SSL_table_remove(u_36, v_36);
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
      }
    t = s_17;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  v_17 = t;
  t = w_83(t);
  x_17 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL;
        t = term_g_25;
        b_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_17, term_g_25);
        t = e_7(x_17, b_18, t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_17 = ATgetFirst((ATermList) t);
        y_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_25;
    a_18 = t;
    t = SSL_table_put(x_17, a_18, y_17);
    t = z_17;
    {
      ATerm w_3 (ATerm t)
      {
        ATerm c_18 = NULL;
        c_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_17, c_18);
        t = y_6(x_17, c_18, t);
        return(t);
      }
      t = map_1_0(w_3, t);
      t = v_17;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm t)
{
  ATerm g_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_74(t);
      t = u_74(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = g_28;
      t = u_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  e_18 = t;
  t = v_83(t);
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_18, term_g_25);
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_28 = ATgetArgument(t, 0);
            ATerm m_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_25;
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_18, term_g_25);
        t = e_7(f_18, u_18, t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = (ATerm) ATempty;
      }
    h_18 = t;
    t = term_g_25;
    i_18 = t;
    t = (ATerm) ATinsert(CheckATermList(h_18), (ATerm) ATempty);
    j_18 = t;
    t = SSL_table_put(f_18, i_18, j_18);
    t = e_18;
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_19 = NULL;
      d_19 = t;
      t = SSL_remove(d_19);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm x_18 = NULL;
  t = begin_scope_1_0(y_3, t);
  {
    ATerm z_3 (ATerm t)
    {
      ATerm y_18 = NULL;
      y_18 = t;
      {
        ATerm p_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_18 = NULL,a_19 = NULL;
            t = term_y_25;
            z_18 = t;
            t = term_g_25;
            a_19 = t;
            t = term_s_28;
            t = e_7(z_18, a_19, t);
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = p_28;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((x_18 != NULL) && (x_18 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              x_18 = ATgetFirst((ATermList) t);
            {
              ATerm t_28 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(x_18);
        t = map_1_0(c_4, t);
        t = y_18;
        t = end_scope_1_0(d_4, t);
      }
      return(t);
    }
    t = restore_always_2_0(u_98, z_3, t);
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = term_z_28;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL;
        t = term_b_25;
        t = get_config_0_0(t);
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_19);
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = term_y_26;
      }
    t = v_98(t);
    t = copy_to_1_0(f_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(e_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  g_19 = t;
  t = term_z_9;
  t = whoami_0_0(t);
  h_19 = t;
  t = term_k_20;
  i_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_29), h_19), term_p_29);
  j_19 = t;
  t = SSL_printnl(i_19, j_19);
  t = term_f_11;
  k_19 = t;
  t = SSL_exit(k_19);
  t = g_19;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_19 = NULL,w_19 = NULL,x_19 = NULL;
      t = term_z_9;
      t = j_0(t);
      u_19 = t;
      t = term_u_29;
      w_19 = t;
      t = term_v_29;
      x_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_29, term_v_29, u_19);
      t = f_7(w_19, x_19, u_19, t);
      _fail(t);
    }
  else
    {
      ATerm h_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_19 = ATgetFirst((ATermList) t);
          r_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_19 = ATgetFirst((ATermList) t);
          t_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_19;
      t = h_0(t);
      t = s_19;
      t = i_0(t);
      h_20 = t;
      t = (ATerm) ATinsert(CheckATermList(t_19), h_20);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm z_20 (ATerm t)
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_20, t);
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = z_20(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      {
        ATerm n_20 = NULL,o_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_20 = ATgetFirst((ATermList) t);
            o_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_20;
        {
          ATerm g_4 (ATerm t)
          {
            t = o_20;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(g_4, t);
        }
      }
    }
  return(t);
}
ATerm s_21 (ATerm f_21, ATerm t)
{
  ATerm j_21 = NULL;
  t = SSL_explode_term(f_21);
  if(match_cons(t, sym__2))
    {
      ATerm m_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_21;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,o_21 = NULL;
  o_21 = t;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              t = l_21;
              return(t);
            }
            t = k_21;
            t = at_end_1_0(h_4, t);
            ;
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            t = s_21(o_21, t);
          }
      }
    }
  else
    {
      t = s_21(o_21, t);
    }
  return(t);
}
ATerm z_6 (ATerm j_54, ATerm i_54, ATerm t)
{
  ATerm t_21 = NULL,w_21 = NULL,x_21 = NULL;
  t = j_54;
  {
    ATerm s_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATempty;
      }
    t_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_54, t_21);
    t = conc_0_0(t);
    w_21 = t;
    t = term_w_30;
    x_21 = t;
    t = SSL_table_put(x_21, j_54, w_21);
    t = (ATerm) ATmakeAppl(sym__3, term_w_30, j_54, w_21);
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm d_22 = NULL;
  d_22 = t;
  if(match_string(t, "-k"))
    {
      t = d_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_22;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  t = SSL_string_to_int(e_22);
  f_22 = t;
  t = term_x_30;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, f_22);
  t = h_7(g_22, f_22, t);
  t = e_22;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, k_4, m_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  if(match_string(t, "-S"))
    {
      t = k_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_22;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  t = term_c_11;
  l_22 = t;
  t = term_z_30;
  m_22 = t;
  t = term_a_31;
  t = h_7(l_22, m_22, t);
  t = term_l_31;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  t = SSL_string_to_int(n_22);
  o_22 = t;
  t = term_c_11;
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, o_22);
  t = h_7(p_22, o_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_22);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm r_22 = NULL,t_22 = NULL;
  t = term_s_31;
  r_22 = t;
  t = term_z_9;
  t_22 = t;
  t = term_t_31;
  t = h_7(r_22, t_22, t);
  t = term_u_31;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_31 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_4, p_4, q_4, t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = w_31;
      {
        ATerm c_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, t_4, v_4, t);
            ;
            LocalPopChoice(h_32);
          }
        else
          {
            t = c_32;
            t = Option_3_0(w_4, y_4, z_4, t);
          }
      }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm x_22 = NULL;
  x_22 = t;
  if(match_string(t, "-o"))
    {
      t = x_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_22;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  y_22 = t;
  t = term_a_25;
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_25, y_22);
  t = h_7(z_22, y_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_22);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, f_5, g_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm c_23 = NULL;
  c_23 = t;
  if(match_string(t, "-i"))
    {
      t = c_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_23;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  d_23 = t;
  t = term_b_25;
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, d_23);
  t = h_7(e_23, d_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_23);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, o_5, r_5, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  f_23 = t;
  t = term_y_9;
  g_23 = t;
  t = (ATerm) ATinsert(ATempty, f_23);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, (ATerm) ATinsert(ATempty, f_23));
  t = z_6(g_23, h_23, t);
  t = f_23;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  i_23 = t;
  t = term_q_12;
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, i_23);
  t = h_7(j_23, i_23, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      {
        ATerm o_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(p_32);
          }
        else
          {
            t = o_32;
            {
              ATerm q_32 = t;
              int r_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(r_32);
                }
              else
                {
                  t = q_32;
                  {
                    ATerm s_32 = t;
                    int t_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(t_32);
                      }
                    else
                      {
                        t = s_32;
                        {
                          ATerm u_32 = t;
                          int v_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(s_5, t_5, u_5, t);
                              ;
                              LocalPopChoice(v_32);
                            }
                          else
                            {
                              t = u_32;
                              t = ArgOption_3_0(w_5, b_6, c_6, t);
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
  ATerm k_23 = NULL,m_23 = NULL,r_23 = NULL,s_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_9;
  t = whoami_0_0(t);
  k_23 = t;
  t = term_k_20;
  m_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_32), k_23);
  r_23 = t;
  t = SSL_printnl(m_23, r_23);
  t = term_f_11;
  s_23 = t;
  t = SSL_exit(s_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_7 (ATerm t_34, ATerm u_34, ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_34, u_34);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      t = SSL_addr(t_34, u_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_82(t);
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      {
        ATerm v_23 = NULL,w_23 = NULL,z_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_23 = ATgetFirst((ATermList) t);
            w_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_23;
        t = foldr_2_0(o_82, p_82, t);
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_23, z_23);
        t = p_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(f_6, g_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_24 = NULL,z_5 = NULL,a_6 = NULL;
  t = times_0_0(t);
  z_5 = t;
  t = SSL_explode_term(z_5);
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6;
  t = foldr_2_0(d_6, e_6, t);
  f_24 = t;
  t = SSL_TicksToSeconds(f_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_24 = NULL,y_24 = NULL,z_24 = NULL;
  w_24 = t;
  if(match_cons(t, sym__2))
    {
      y_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_24;
        if((y_24 != t))
          {
            _fail(t);
          }
        t = w_24;
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_24, z_24);
              ;
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              t = SSL_gtr(y_24, z_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_25 = NULL,f_25 = NULL;
      d_25 = t;
      t = term_c_11;
      t = get_config_0_0(t);
      f_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_25, term_f_11);
      t = geq_0_0(t);
      t = d_25;
      t = s_97(t);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,l_25 = NULL,m_25 = NULL;
  t = run_time_0_0(t);
  i_25 = t;
  t = term_z_9;
  t = whoami_0_0(t);
  j_25 = t;
  t = term_k_20;
  l_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_33), i_25), term_e_13), j_25);
  m_25 = t;
  t = SSL_printnl(l_25, m_25);
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_33), i_25), term_e_13), j_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_30;
  t_25 = t;
  t = SSL_exit(t_25);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      {
        ATerm m_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_33);
          }
        else
          {
            t = m_33;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      t = fetch_1_0(m_6, t);
    }
  t = m_70(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_25 = ATgetFirst((ATermList) t);
      w_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_26 = NULL,h_26 = NULL;
        t = w_25;
        t = g_0(t);
        g_26 = t;
        t = v_25;
        t = e_0(t);
        h_26 = t;
        t = w_25;
        {
          ATerm n_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_26), h_26);
            return(t);
          }
          t = reverse_acc_2_0(e_0, n_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_9;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm j_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,w_0 = NULL,c_1 = NULL;
  p_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_26);
  j_26 = t;
  t = n_26;
  t = n_68(t);
  o_26 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_26);
  w_0 = t;
  t = SSLsetAnnotations(w_0, j_26);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm w_26 = NULL;
  w_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_26), term_r_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      t = fetch_1_0(b_7, t);
    }
  t = term_u_33;
  t = echo_0_0(t);
  t = term_u_29;
  u_26 = t;
  t = term_v_29;
  v_26 = t;
  t = term_v_33;
  t = e_7(u_26, v_26, t);
  t = reverse_acc_2_0(_id, i_7, t);
  t = map_1_0(j_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_68 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,d_1 = NULL,f_1 = NULL;
  b_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      z_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_27);
  x_26 = t;
  t = z_26;
  t = o_68(t);
  a_27 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_27);
  d_1 = t;
  t = SSLsetAnnotations(d_1, x_26);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm h_27 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = Cons_2_0(_id, h_27, t);
      }
    return(t);
  }
  t = h_27(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,q_27 = NULL;
  j_27 = t;
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_34 = ATgetFirst((ATermList) t);
                ATerm b_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_27;
          }
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = (ATerm) ATinsert(ATempty, j_27);
      }
    k_27 = t;
    t = term_z_28;
    q_27 = t;
    t = SSL_printnl(q_27, k_27);
    t = j_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_32;
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
  ATerm y_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  y_27 = t;
  t = g_88(t);
  b_28 = t;
  t = term_k_20;
  c_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_27), b_28);
  d_28 = t;
  t = SSL_printnl(c_28, d_28);
  t = y_27;
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm h_28 (ATerm t)
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = Cons_2_0(w_75, h_28, t);
      }
    return(t);
  }
  t = h_28(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_28 = NULL;
      q_28 = t;
      t = SSL_is_string(q_28);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_7, t);
            ;
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
            {
              ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
              u_28 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_28 = ATgetArgument(t, 0);
                  t = v_28;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_28 = ATgetArgument(t, 0);
                      t = v_28;
                      {
                        ATerm l_34 = t;
                        int m_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_34);
                          }
                        else
                          {
                            t = l_34;
                            t = debug_1_0(m_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_29 = NULL,b_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_28 = ATgetArgument(t, 0);
                          w_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_28;
                      t = eval_config_0_0(t);
                      a_29 = t;
                      t = w_28;
                      t = eval_config_0_0(t);
                      b_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_29, b_29);
                      t = d_7(a_29, b_29, t);
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
  ATerm e_29 = NULL,f_29 = NULL;
  e_29 = t;
  t = term_w_30;
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, e_29);
  t = e_7(f_29, e_29, t);
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL,h_29 = NULL;
        t = eval_config_0_0(t);
        g_29 = t;
        t = term_w_30;
        h_29 = t;
        t = SSL_table_put(h_29, e_29, g_29);
        t = g_29;
        ;
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
      }
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  t = term_p_34;
  i_29 = t;
  t = term_z_9;
  j_29 = t;
  t = term_q_34;
  t = h_7(i_29, j_29, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  t = term_p_34;
  k_29 = t;
  t = term_z_9;
  l_29 = t;
  t = term_q_34;
  t = h_7(k_29, l_29, t);
  t = term_s_34;
  m_29 = t;
  t = term_z_9;
  n_29 = t;
  t = term_v_34;
  t = h_7(m_29, n_29, t);
  t = term_w_34;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_34 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_7, o_7, p_7, t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = y_34;
      t = Option_3_0(q_7, r_7, b_8, t);
    }
  return(t);
}
ATerm h_7 (ATerm d_54, ATerm e_54, ATerm t)
{
  ATerm o_29 = NULL;
  t = term_w_30;
  o_29 = t;
  t = SSL_table_put(o_29, d_54, e_54);
  t = (ATerm) ATmakeAppl(sym__3, term_w_30, d_54, e_54);
  return(t);
}
ATerm e_7 (ATerm g_38, ATerm h_38, ATerm t)
{
  t = SSL_table_get(g_38, h_38);
  return(t);
}
ATerm f_7 (ATerm p_36, ATerm q_36, ATerm o_36, ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_35 = ATgetArgument(t, 0);
            ATerm f_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
        t = e_7(p_36, q_36, t);
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = (ATerm) ATempty;
      }
    r_29 = t;
    t = (ATerm) ATinsert(CheckATermList(r_29), o_36);
    s_29 = t;
    t = SSL_table_put(p_36, q_36, s_29);
    t = q_29;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
      t = term_z_9;
      t = d_0(t);
      a_30 = t;
      t = term_u_29;
      b_30 = t;
      t = term_v_29;
      c_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_29, term_v_29, a_30);
      t = f_7(b_30, c_30, a_30, t);
      _fail(t);
    }
  else
    {
      ATerm f_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_29 = ATgetFirst((ATermList) t);
          z_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_29;
      t = a_0(t);
      t = term_z_9;
      t = c_0(t);
      f_30 = t;
      t = (ATerm) ATinsert(CheckATermList(z_29), f_30);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,g_1 = NULL,h_1 = NULL;
  l_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_30 = ATgetFirst((ATermList) t);
      i_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_30);
  g_30 = t;
  t = h_30;
  t = o_63(t);
  j_30 = t;
  t = i_30;
  t = p_63(t);
  k_30 = t;
  h_1 = t;
  t = (ATerm) ATinsert(CheckATermList(k_30), j_30);
  g_1 = t;
  t = SSLsetAnnotations(g_1, g_30);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  t = term_x_32;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_32, q_30);
  t = h_7(r_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, q_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_35;
        t = p_90(t);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
      }
    t = p_30;
    {
      ATerm f_8 (ATerm t)
      {
        ATerm j_35 = t;
        int k_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(m_35);
              }
            else
              {
                t = l_35;
                t = p_90(t);
                t = Cons_2_0(_id, f_8, t);
              }
            ;
            LocalPopChoice(k_35);
          }
        else
          {
            t = j_35;
            {
              ATerm t_30 = NULL,u_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_30 = ATgetFirst((ATermList) t);
                  u_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_30), (ATerm) ATmakeAppl(sym_Undefined_1, t_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(c_8, f_8, t);
    }
  }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  if(match_string(t, "--help"))
    {
      t = o_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_31;
        }
    }
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  t = term_q_33;
  p_31 = t;
  t = term_z_9;
  q_31 = t;
  t = term_n_35;
  t = h_7(p_31, q_31, t);
  t = term_o_35;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_p_35;
  return(t);
}
ATerm p_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,h_31 = NULL,i_31 = NULL,m_31 = NULL;
  b_31 = t;
  t = term_u_29;
  e_31 = t;
  t = term_v_29;
  h_31 = t;
  t = (ATerm) ATempty;
  i_31 = t;
  t = SSL_table_put(e_31, h_31, i_31);
  t = b_31;
  {
    ATerm h_8 (ATerm t)
    {
      ATerm q_35 = t;
      int r_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_90(t);
          ;
          LocalPopChoice(r_35);
        }
      else
        {
          t = q_35;
          {
            ATerm s_35 = t;
            int t_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_8, k_8, o_8, t);
                ;
                LocalPopChoice(t_35);
              }
            else
              {
                t = s_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_8, t);
    {
      ATerm u_35 = t;
      int v_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_31 = NULL;
          x_31 = t;
          {
            ATerm w_35 = t;
            int x_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_8 = NULL;
                t = x_31;
                {
                  ATerm y_35 = t;
                  int z_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_35);
                    }
                  else
                    {
                      t = y_35;
                      t = fetch_1_0(p_8, t);
                    }
                  t = x_31;
                  t = default_system_usage_0_0(t);
                  t = term_z_30;
                  u_8 = t;
                  t = SSL_exit(u_8);
                }
                ;
                LocalPopChoice(x_35);
              }
            else
              {
                t = w_35;
                {
                  ATerm w_9 = NULL;
                  t = term_p_34;
                  t = get_config_0_0(t);
                  t = x_31;
                  t = default_system_about_0_0(t);
                  t = term_z_30;
                  w_9 = t;
                  t = SSL_exit(w_9);
                }
              }
          }
          ;
          LocalPopChoice(v_35);
        }
      else
        {
          t = u_35;
          {
            ATerm a_36 = t;
            int b_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
                ATerm t_8 (ATerm t)
                {
                  ATerm h_9 (ATerm t)
                  {
                    if(((c_31 != NULL) && (c_31 != t)))
                      _fail(t);
                    else
                      c_31 = t;
                    return(t);
                  }
                  t = Undefined_1_0(h_9, t);
                  return(t);
                }
                t = fetch_1_0(t_8, t);
                t = term_k_20;
                y_31 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_31)), term_c_36);
                z_31 = t;
                t = SSL_printnl(y_31, z_31);
                t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_31)), term_c_36));
                t = default_system_usage_0_0(t);
                t = term_f_11;
                a_32 = t;
                t = SSL_exit(a_32);
                ;
                LocalPopChoice(b_36);
              }
            else
              {
                t = a_36;
              }
          }
        }
      d_31 = t;
      t = term_u_29;
      m_31 = t;
      t = SSL_table_destroy(m_31);
      t = d_31;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  t = parse_options_1_0(o_70, t);
  d_32 = t;
  t = term_d_36;
  e_32 = t;
  t = SSL_table_create(e_32);
  t = term_d_36;
  f_32 = t;
  t = term_e_36;
  g_32 = t;
  t = SSL_table_put(f_32, g_32, d_32);
  t = d_32;
  t = q_70(t);
  {
    ATerm g_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_70, t);
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = g_36;
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_70(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = xtc_io_1_0(abox2latex_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2latex_options_0_0, default_usage_0_0, _id, i_9, t);
  return(t);
}
