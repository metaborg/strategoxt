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
ATerm term_h_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_a_29;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_t_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
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
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
void init_constant_terms (void)
{
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(1);
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
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_w_9, term_h_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_h_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_s_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_u_14, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_d_15, term_f_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_k_15, term_s_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_v_17, term_w_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_b_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_19, term_q_19, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_z_19, term_a_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_f_20, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_n_20, term_o_20);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__3, term_k_26, term_f_29, term_t_8);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm tables2text_0_0 (ATerm);
ATerm create_header_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm create_table_file_0_0 (ATerm);
ATerm create_abox2latex_args_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm s_80 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm q_90 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm s_90 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm h_77 (ATerm), ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm p_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm);
ATerm assert_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm g_81 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm print_to_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_text_1_0 (ATerm w_92 (ATerm), ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_77 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_77 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm x_91 (ATerm), ATerm);
ATerm ArgOption_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm abox2latex_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_90 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm t_63 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm u_61 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_61 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm l_67 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_83 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm);
ATerm io_abox2latex_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      t = (ATerm) ATempty;
    }
  {
    ATerm c_0 (ATerm t)
    {
      ATerm e_1 = NULL;
      e_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_8), e_1), term_r_8);
      t = concat_strings_0_0(t);
      return(t);
    }
    t = map_1_0(c_0, t);
    t = concat_strings_0_0(t);
  }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm g_1 = NULL;
  t = term_t_8;
  t = tables2text_0_0(t);
  g_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_8), term_l_9), term_k_9), term_u_8), term_j_9), term_e_9), term_d_9), term_a_9), term_z_8), term_u_8), g_1), term_y_8), term_x_8), term_u_8), term_w_8), term_u_8), term_v_8), term_u_8);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,l_1 = NULL;
  t = term_s_9;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = term_w_9;
      }
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, term_w_9);
    {
      ATerm a_10 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(h_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(b_10);
        }
      else
        {
          t = a_10;
          t = SSL_subtr(h_1, (ATerm) ATmakeInt(1));
        }
      l_1 = t;
      t = SSL_int_to_string(l_1);
      i_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, i_1), term_s_9);
    }
  }
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm o_1 = NULL,q_1 = NULL;
  ATerm i_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = i_10;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  o_1 = t;
  t = (ATerm) ATinsert(CheckATermList(o_1), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_e_11), term_d_11)), (ATerm) ATinsert(ATinsert(ATempty, term_c_11), term_y_10)), (ATerm) ATinsert(ATinsert(ATempty, term_v_10), term_u_10)), (ATerm) ATinsert(ATinsert(ATempty, term_s_10), term_r_10)), (ATerm) ATinsert(ATinsert(ATempty, term_q_10), term_p_10)), (ATerm) ATinsert(ATinsert(ATempty, term_o_10), term_n_10)));
  t = concat_0_0(t);
  t = write_to_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      q_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_1;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL;
  t = term_t_8;
  t = create_table_file_0_0(t);
  s_1 = t;
  t = term_t_8;
  t = pass_verbose_0_0(t);
  t_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(t_1), s_1), term_g_11);
  {
    ATerm e_0 (ATerm t)
    {
      ATerm u_1 = NULL,b_2 = NULL;
      u_1 = t;
      t = term_h_11;
      t = get_config_0_0(t);
      b_2 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(u_1), b_2), term_j_11);
      return(t);
    }
    t = try_1_0(e_0, t);
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL;
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_2, term_k_11);
  t = open_stream_0_0(t);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, d_2);
  t = n_81(t);
  t = fclose_0_0(t);
  t = d_2;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm f_2 = NULL,g_2 = NULL,i_2 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_11 = ATgetArgument(t, 0);
        if(match_cons(m_11, sym_Stream_1))
          {
            f_2 = ATgetArgument(m_11, 0);
          }
        else
          _fail(t);
        g_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(f_2, g_2);
    i_2 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, i_2);
    return(t);
  }
  t = WriteToFile_1_0(n_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  k_2 = t;
  t = xtc_new_file_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, k_2);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(l_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(t_92, u_92, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm m_2 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm r_2 = NULL;
    r_2 = t;
    t = SSL_explode_string(r_2);
    return(t);
  }
  t = map_1_0(o_0, t);
  t = concat_0_0(t);
  m_2 = t;
  t = SSL_implode_string(m_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  p_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_3 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL;
        t = SSL_int_to_string(r_3);
        p_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_11), p_0), term_n_11);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm x_0 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_3 = ATgetArgument(t, 0);
          s_3 = ATgetArgument(t, 1);
          t_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_3);
      x_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_3), term_b_12), x_0), term_r_11), r_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm y_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = p_69(t);
    y_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(y_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_3 = NULL;
  z_3 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_20), term_h_20), term_b_20), term_v_19), term_o_19), term_j_19), term_z_18), term_k_18), term_e_18), term_x_17), term_o_17), term_e_17), term_w_16), term_q_16), term_j_16), term_f_16), term_t_15), term_h_15), term_a_15), term_r_14), term_a_14), term_v_13), term_j_13), term_c_13), term_w_12), term_s_12), term_o_12), term_j_12);
        {
          ATerm r_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm q_20 = ATgetArgument(t, 0);
                if((z_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm s_20 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(r_0, t);
        }
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm b_4 = NULL;
  b_4 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm e_4 = NULL,f_4 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm w_20 = ATgetArgument(t, 0);
          e_4 = ATgetArgument(t, 1);
          {
            ATerm x_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_4;
      {
        ATerm z_20 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_20;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        f_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, f_4), term_i_21));
      }
      return(t);
    }
    t = try_1_0(s_0, t);
    t = b_4;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,k_4 = NULL;
  h_4 = t;
  t = fork_0_0(t);
  k_4 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_4;
        t = q_80(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = (ATerm) ATmakeAppl(sym__2, k_4, h_4);
        t = r_80(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm n_4 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm o_4 = NULL;
    if(match_cons(t, sym__2))
      {
        o_4 = ATgetArgument(t, 0);
        n_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(o_4);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm l_21 = ATgetArgument(t, 0);
        if(((ATgetType(l_21) != AT_INT) || (ATgetInt((ATermInt) l_21) != 0)))
          _fail(t);
        {
          ATerm m_21 = ATgetArgument(t, 1);
        }
        {
          ATerm n_21 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = n_4;
    return(t);
  }
  t = fork_2_0(s_80, t_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_0 (ATerm t)
    {
      t = SSL_execvp(p_4, q_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_4 = NULL;
  s_4 = t;
  t = SSL_table_keys(s_4);
  {
    ATerm v_0 (ATerm t)
    {
      ATerm v_4 = NULL,w_4 = NULL;
      v_4 = t;
      t = SSL_table_get(s_4, v_4);
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_4, w_4);
      return(t);
    }
    t = map_1_0(v_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm x_4 = NULL,z_4 = NULL;
    x_4 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    z_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_4, term_q_19);
    t = geq_0_0(t);
    t = x_4;
    t = r_90(t);
    return(t);
  }
  t = try_1_0(w_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, e_5));
  {
    ATerm y_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((f_5 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          g_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
    t = not_null(g_5);
  }
  return(t);
}
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm o_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = o_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = filter_1_0(i_77, t);
              return(t);
            }
            t = Cons_2_0(i_77, a_1, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm k_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_21 = ATgetFirst((ATermList) t);
                  k_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_5;
              t = filter_1_0(i_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      t = c_79(t);
      t = o_5(t);
      return(t);
    }
    t = try_1_0(b_1, t);
    return(t);
  }
  t = o_5(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  w_5 = t;
  {
    ATerm c_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm x_21 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_21;
          }
      }
      return(t);
    }
    t = repeat_1_0(c_1, t);
    t = w_5;
  }
  return(t);
}
ATerm say_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,z_0 = NULL;
  h_6 = t;
  t = d_81(t);
  z_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, z_0));
  t = h_6;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm j_6 = NULL,p_6 = NULL;
    j_6 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    p_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_6, term_k_15);
    t = geq_0_0(t);
    t = j_6;
    t = q_90(t);
    return(t);
  }
  t = try_1_0(d_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_90 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm r_6 = NULL,v_6 = NULL;
    r_6 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    v_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_6, term_u_12);
    t = geq_0_0(t);
    t = r_6;
    t = s_90(t);
    return(t);
  }
  t = try_1_0(f_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_7 = ATgetFirst((ATermList) t);
      f_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_73(t);
  {
    ATerm j_1 (ATerm t)
    {
      ATerm i_7 = NULL;
      i_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_7, i_7);
      t = k_73(t);
      return(t);
    }
    t = fetch_1_0(j_1, t);
    t = f_7;
  }
  return(t);
}
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm y_21 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_7;
          ;
          LocalPopChoice(c_22);
        }
      else
        {
          t = y_21;
          {
            ATerm d_22 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_1 (ATerm t)
                {
                  t = j_7;
                  return(t);
                }
                t = HdMember_p__2_0(g_73, k_1, t);
                t = n_7(t);
                ;
                LocalPopChoice(e_22);
              }
            else
              {
                t = d_22;
                t = Cons_2_0(_id, n_7, t);
              }
          }
        }
      return(t);
    }
    t = n_7(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm o_7 = NULL;
    if(match_cons(t, sym__2))
      {
        o_7 = ATgetArgument(t, 0);
        if((o_7 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(m_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__3))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      t_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_7, s_7);
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_22 = ATgetArgument(t, 0);
            ATerm j_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_7, s_7);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = (ATerm) ATempty;
      }
    u_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_7, t_7);
    t = union_0_0(t);
    v_7 = t;
    t = SSL_table_put(r_7, s_7, v_7);
    t = (ATerm) ATmakeAppl(sym__3, r_7, s_7, t_7);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm h_77 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL;
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm y_7 = NULL,z_7 = NULL;
      if(match_cons(t, sym__2))
        {
          y_7 = ATgetArgument(t, 0);
          z_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_7, y_7, z_7);
      t = h_77(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 = NULL;
      y_1 = t;
      t = SSL_access(y_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(l_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_22 = t;
            if((PushChoice() == 0))
              {
                ATerm a_2 = NULL;
                a_2 = t;
                t = SSL_access(a_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_22;
              }
            {
              ATerm p_1 (ATerm t)
              {
                t = term_p_22;
                return(t);
              }
              t = debug_1_0(p_1, t);
            }
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            {
              ATerm r_1 (ATerm t)
              {
                t = term_q_22;
                return(t);
              }
              t = debug_1_0(r_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  {
    ATerm v_1 (ATerm t)
    {
      ATerm w_1 (ATerm t)
      {
        t = term_r_22;
        return(t);
      }
      t = debug_1_0(w_1, t);
      return(t);
    }
    t = if_verbose5_1_0(v_1, t);
    {
      ATerm s_22 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, b_8));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_22;
        }
      c_8 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, b_8));
      t = c_8;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm z_1 (ATerm t)
          {
            t = term_t_22;
            return(t);
          }
          t = debug_1_0(z_1, t);
          return(t);
        }
        t = if_verbose4_1_0(x_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm h_2 (ATerm t)
          {
            ATerm j_2 (ATerm t)
            {
              t = term_u_22;
              return(t);
            }
            t = say_1_0(j_2, t);
            return(t);
          }
          t = if_verbose6_1_0(h_2, t);
          d_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_22, d_8);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm p_2 (ATerm t)
            {
              ATerm q_2 (ATerm t)
              {
                t = term_w_22;
                return(t);
              }
              t = say_1_0(q_2, t);
              return(t);
            }
            t = if_verbose6_1_0(p_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, b_8), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_v_22, (ATerm)ATmakeAppl(sym_Imported_1, b_8), (ATerm) ATempty);
            {
              ATerm s_2 (ATerm t)
              {
                ATerm v_2 (ATerm t)
                {
                  t = term_u_22;
                  return(t);
                }
                t = say_1_0(v_2, t);
                return(t);
              }
              t = if_verbose4_1_0(s_2, t);
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
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_8 = NULL;
  ATerm w_2 (ATerm t)
  {
    ATerm x_2 (ATerm t)
    {
      t = term_c_23;
      return(t);
    }
    t = debug_1_0(x_2, t);
    return(t);
  }
  t = if_verbose5_1_0(w_2, t);
  e_8 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = e_8;
    {
      ATerm z_2 (ATerm t)
      {
        ATerm a_3 (ATerm t)
        {
          t = term_f_23;
          return(t);
        }
        t = debug_1_0(a_3, t);
        return(t);
      }
      t = if_verbose5_1_0(z_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm c_3 (ATerm t)
        {
          t = term_i_23;
          return(t);
        }
        t = debug_1_0(c_3, t);
        return(t);
      }
      t = if_verbose5_1_0(b_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            {
              ATerm n_2 = NULL,o_2 = NULL;
              n_2 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, n_2));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_23 = ATgetFirst((ATermList) t);
                  if(match_cons(l_23, sym__2))
                    {
                      ATerm n_23 = ATgetArgument(l_23, 0);
                      o_2 = ATgetArgument(l_23, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = o_2;
            }
          }
        {
          ATerm d_3 (ATerm t)
          {
            ATerm f_3 (ATerm t)
            {
              t = term_i_23;
              return(t);
            }
            t = debug_1_0(f_3, t);
            return(t);
          }
          t = if_verbose5_1_0(d_3, t);
        }
      }
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm f_8 = NULL;
        f_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), f_8), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_23), f_8), term_o_23);
        {
          ATerm g_3 (ATerm t)
          {
            t = term_v_22;
            t = table_getlist_0_0(t);
            {
              ATerm i_3 (ATerm t)
              {
                t = term_q_23;
                return(t);
              }
              t = debug_1_0(i_3, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(g_3, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  h_8 = t;
  t = k_92(t);
  t = xtc_find_warning_0_0(t);
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_8, h_8);
  t = call_0_0(t);
  t = h_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm t_2 = NULL,u_2 = NULL;
      t = b_9;
      t = xtc_new_file_0_0(t);
      t_2 = t;
      t = m_0(t);
      u_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_2, (ATerm) ATinsert(ATinsert(ATempty, t_2), term_r_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(t_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_2);
    }
  else
    {
      ATerm y_2 = NULL,e_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_9;
      t = xtc_new_file_0_0(t);
      y_2 = t;
      t = m_0(t);
      e_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_2), term_r_23), c_9), term_s_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(y_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm p_62 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  i_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_9);
  f_9 = t;
  t = g_9;
  t = p_62(t);
  h_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, h_9), f_9);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(w_23);
        }
      else
        {
          t = v_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(u_23);
      t = xtc_transform_file_2_0(m_92, n_92, t);
    }
  else
    {
      t = t_23;
      t = xtc_transform_term_2_0(m_92, n_92, t);
    }
  return(t);
}
ATerm assert_1_0 (ATerm e_77 (ATerm), ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_77(t);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_9, m_9, n_9);
  t = table_push_0_0(t);
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_9 = ATgetFirst((ATermList) t);
        q_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_9), (ATerm) ATinsert(CheckATermList(p_9), m_9)));
    t = (ATerm) ATmakeAppl(sym__2, m_9, n_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm r_9 = NULL;
  r_9 = t;
  t = g_81(t);
  {
    ATerm j_3 (ATerm t)
    {
      t = term_z_23;
      return(t);
    }
    t = debug_1_0(j_3, t);
    t = r_9;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm f_10 (ATerm v_9, ATerm t)
  {
    t = v_9;
    {
      ATerm a_24 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm b_24 = ATgetArgument(t, 0);
              ATerm c_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_24;
        }
      {
        ATerm k_3 (ATerm t)
        {
          t = term_d_24;
          return(t);
        }
        t = obsolete_1_0(k_3, t);
        t = (ATerm) ATmakeAppl(sym__2, v_9, term_k_11);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm g_10 (ATerm x_9, ATerm y_9, ATerm z_9, ATerm t)
  {
    t = SSL_open_file(x_9, y_9);
    return(t);
  }
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym__2))
    {
      d_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_10(c_10, t);
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            t = g_10(d_10, e_10, c_10, t);
          }
      }
    }
  else
    {
      t = f_10(c_10, t);
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
  ATerm h_10 = NULL;
  t = term_t_8;
  t = new_0_0(t);
  h_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_10, term_g_24);
  t = conc_strings_0_0(t);
  {
    ATerm l_3 (ATerm t)
    {
      ATerm h_3 = NULL;
      h_3 = t;
      t = SSL_access(h_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(l_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  t = new_file_0_0(t);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, term_k_11);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, j_10, term_t_8);
  {
    ATerm m_3 (ATerm t)
    {
      t = term_h_24;
      return(t);
    }
    t = assert_1_0(m_3, t);
    t = j_10;
  }
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  k_10 = t;
  t = xtc_new_file_0_0(t);
  l_10 = t;
  t = SSL_print(l_10, k_10);
  t = SSL_close_file(l_10);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_10 (ATerm t_10, ATerm t)
  {
    t = SSL_fclose(t_10);
    return(t);
  }
  ATerm w_10 = NULL,x_10 = NULL;
  x_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_10 = ATgetArgument(t, 0);
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_10);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            t = z_10(x_10, t);
          }
      }
    }
  else
    {
      t = z_10(x_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_11 = NULL;
  t = SSL_stdin_stream();
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_11 = NULL;
  t = SSL_stdout_stream();
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  t = SSL_stderr_stream();
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_11);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm i_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_24 = ATgetArgument(t, 0);
      ATerm l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_4 = NULL,g_4 = NULL;
        d_4 = t;
        t = SSL_explode_term(d_4);
        if(match_cons(t, sym__2))
          {
            ATerm o_24 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_24) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_24 = ATgetArgument(t, 1);
              if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
                {
                  g_4 = ATgetFirst((ATermList) p_24);
                  {
                    ATerm q_24 = (ATerm) ATgetNext((ATermList) p_24);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_4;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_11 = NULL,p_11 = NULL,q_11 = NULL;
              ATerm n_3 (ATerm t)
              {
                ATerm s_11 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    s_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_11;
                return(t);
              }
              t = _2_0(n_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_11 = ATgetArgument(t, 0);
                  p_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_11, p_11);
              q_11 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, q_11);
              ;
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              {
                ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
                ATerm o_3 (ATerm t)
                {
                  ATerm w_11 = NULL;
                  w_11 = t;
                  t = SSL_is_string(w_11);
                  return(t);
                }
                t = _2_0(o_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_11 = ATgetArgument(t, 0);
                    u_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_11, u_11);
                v_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_12 = NULL;
      a_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_12, term_v_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm q_3 (ATerm t)
        {
          t = term_w_24;
          return(t);
        }
        t = debug_1_0(q_3, t);
        _fail(t);
      }
    }
  x_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_11);
  y_11 = t;
  t = x_11;
  t = fclose_0_0(t);
  t = y_11;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = e_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          f_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = w_92(t);
  t = print_to_0_0(t);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm i_12 = NULL,k_12 = NULL;
    ATerm v_3 (ATerm t)
    {
      t = term_x_24;
      return(t);
    }
    t = xtc_transform_2_0(v_3, create_abox2latex_args_0_0, t);
    i_12 = t;
    t = term_y_24;
    t = create_header_0_0(t);
    k_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, i_12), k_12);
    return(t);
  }
  t = xtc_io_transform_text_1_0(u_3, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  x_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = x_12;
        t = k_0(t);
        u_4 = t;
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(y_12, u_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, y_12);
        }
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_5 = NULL;
              t = x_12;
              t = k_0(t);
              l_5 = t;
              {
                ATerm f_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_25 = t;
                    int h_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(h_25);
                      }
                    else
                      {
                        t = g_25;
                        {
                          ATerm i_25 = t;
                          int j_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(j_25);
                            }
                          else
                            {
                              t = i_25;
                              {
                                ATerm m_5 = NULL;
                                m_5 = t;
                                if((y_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = m_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_25;
                  }
                t = SSL_copy(y_12, l_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_12);
              }
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              t = x_12;
              t = k_0(t);
              if((y_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_25 = ATgetArgument(t, 0);
            ATerm n_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_13, f_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_25 = ATgetFirst((ATermList) t);
            q_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_5;
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = (ATerm) ATempty;
      }
    g_13 = t;
    t = SSL_table_put(e_13, f_13, g_13);
    t = (ATerm) ATmakeAppl(sym__2, e_13, f_13);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_77 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  m_13 = t;
  t = b_77(t);
  n_13 = t;
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_13 = ATgetFirst((ATermList) t);
        o_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_13, (ATerm)ATmakeAppl(sym_Scopes_0), o_13);
    t = p_13;
    {
      ATerm w_3 (ATerm t)
      {
        ATerm q_13 = NULL;
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_13, q_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(w_3, t);
      t = m_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_68(t);
      t = b_68(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      t = b_68(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,w_13 = NULL;
  t_13 = t;
  t = a_77(t);
  u_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_13, term_t_25);
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            ATerm x_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
    w_13 = t;
    t = SSL_table_put(u_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_13), (ATerm) ATempty));
    t = t_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm b_14 = NULL;
  ATerm x_3 (ATerm t)
  {
    t = term_h_24;
    return(t);
  }
  t = begin_scope_1_0(x_3, t);
  {
    ATerm a_4 (ATerm t)
    {
      ATerm c_14 = NULL;
      c_14 = t;
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_14 = ATgetFirst((ATermList) t);
            {
              ATerm a_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_14;
        {
          ATerm c_4 (ATerm t)
          {
            ATerm i_4 (ATerm t)
            {
              ATerm d_14 = NULL;
              d_14 = t;
              t = SSL_remove(d_14);
              return(t);
            }
            t = try_1_0(i_4, t);
            return(t);
          }
          t = map_1_0(c_4, t);
          t = c_14;
          {
            ATerm j_4 (ATerm t)
            {
              t = term_h_24;
              return(t);
            }
            t = end_scope_1_0(j_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(w_91, a_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL;
        t = term_s_23;
        t = get_config_0_0(t);
        e_14 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_14);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = term_d_26;
      }
    t = x_91(t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_23;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            t = term_g_26;
          }
        return(t);
      }
      t = copy_to_1_0(m_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(l_4, t);
  return(t);
}
ATerm ArgOption_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    t = term_h_26;
    return(t);
  }
  t = ArgOption_3_0(k_83, l_83, r_4, t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_14;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATempty;
      }
    h_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_14, h_14);
    t = conc_0_0(t);
    i_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_14, i_14);
    t = (ATerm) ATmakeAppl(sym__3, term_k_26, f_14, i_14);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  l_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = l_14;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm t_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_14 = ATgetFirst((ATermList) t);
          n_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_14 = ATgetFirst((ATermList) t);
          p_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_14;
      t = h_0(t);
      t = o_14;
      t = i_0(t);
      t_14 = t;
      t = (ATerm) ATinsert(CheckATermList(p_14), t_14);
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm v_14 = NULL;
    v_14 = t;
    if(match_string(t, "-k"))
      {
        t = v_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = v_14;
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm w_14 = NULL,x_14 = NULL;
    w_14 = t;
    t = SSL_string_to_int(w_14);
    x_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), x_14);
    t = w_14;
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_l_26;
    return(t);
  }
  t = ArgOption_3_0(t_4, y_4, a_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_5 (ATerm t)
      {
        ATerm z_14 = NULL;
        z_14 = t;
        if(match_string(t, "-S"))
          {
            t = z_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = z_14;
          }
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_p_26;
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = term_q_26;
        return(t);
      }
      t = Option_3_0(b_5, c_5, d_5, t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm i_5 (ATerm t)
            {
              ATerm c_15 = NULL,e_15 = NULL;
              c_15 = t;
              t = SSL_string_to_int(c_15);
              e_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, c_15);
              return(t);
            }
            ATerm j_5 (ATerm t)
            {
              t = term_t_26;
              return(t);
            }
            t = ArgOption_3_0(h_5, i_5, j_5, t);
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
              ATerm n_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_26;
                return(t);
              }
              ATerm r_5 (ATerm t)
              {
                t = term_v_26;
                return(t);
              }
              t = Option_3_0(n_5, p_5, r_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm g_15 = NULL;
    g_15 = t;
    if(match_string(t, "-o"))
      {
        t = g_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = g_15;
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm j_15 = NULL;
    j_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, j_15);
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_y_26;
    return(t);
  }
  t = ArgOption_3_0(s_5, t_5, u_5, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm l_15 = NULL;
    l_15 = t;
    if(match_string(t, "-i"))
      {
        t = l_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = l_15;
      }
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    ATerm m_15 = NULL;
    m_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, m_15);
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_z_26;
    return(t);
  }
  t = ArgOption_3_0(v_5, x_5, y_5, t);
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm e_27 = t;
              int f_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  ;
                  LocalPopChoice(f_27);
                }
              else
                {
                  t = e_27;
                  {
                    ATerm g_27 = t;
                    int h_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_5 (ATerm t)
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                            _fail(t);
                          return(t);
                        }
                        ATerm a_6 (ATerm t)
                        {
                          ATerm n_15 = NULL;
                          n_15 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_q_8, (ATerm) ATinsert(ATempty, n_15));
                          t = extend_config_0_0(t);
                          t = n_15;
                          return(t);
                        }
                        ATerm b_6 (ATerm t)
                        {
                          t = term_i_27;
                          return(t);
                        }
                        t = ArgOption_3_0(z_5, a_6, b_6, t);
                        ;
                        LocalPopChoice(h_27);
                      }
                    else
                      {
                        t = g_27;
                        {
                          ATerm c_6 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm d_6 (ATerm t)
                          {
                            ATerm o_15 = NULL;
                            o_15 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), o_15);
                            t = (ATerm) ATmakeAppl(sym__3, term_k_26, term_h_11, o_15);
                            return(t);
                          }
                          t = ArgOption_2_0(c_6, d_6, t);
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
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  p_15 = t;
  t = term_t_8;
  t = whoami_0_0(t);
  q_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), q_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = p_15;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_8;
  t = whoami_0_0(t);
  r_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_75(t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      {
        ATerm u_15 = NULL,v_15 = NULL,y_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_15 = ATgetFirst((ATermList) t);
            v_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_15;
        t = foldr_2_0(t_75, u_75, t);
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_15, y_15);
        t = u_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  t = SSL_explode_term(z_15);
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_16;
  t = foldr_2_0(r_73, s_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_16 = NULL;
  t = times_0_0(t);
  {
    ATerm e_6 (ATerm t)
    {
      t = term_o_26;
      return(t);
    }
    ATerm f_6 (ATerm t)
    {
      ATerm c_16 = NULL,d_16 = NULL;
      if(match_cons(t, sym__2))
        {
          c_16 = ATgetArgument(t, 0);
          d_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_16, d_16);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            t = SSL_addr(c_16, d_16);
          }
      }
      return(t);
    }
    t = crush_2_0(e_6, f_6, t);
    b_16 = t;
    t = SSL_TicksToSeconds(b_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_16;
        if((n_16 != t))
          {
            _fail(t);
          }
        t = m_16;
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = m_16;
        {
          ATerm r_27 = t;
          int s_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_16, o_16);
              ;
              LocalPopChoice(s_27);
            }
          else
            {
              t = r_27;
              t = SSL_gtr(n_16, o_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_16, o_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm u_16 = NULL,v_16 = NULL;
    u_16 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    v_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_16, term_w_9);
    t = geq_0_0(t);
    t = u_16;
    t = n_90(t);
    return(t);
  }
  t = try_1_0(g_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm x_16 = NULL,y_16 = NULL;
    t = run_time_0_0(t);
    x_16 = t;
    t = term_t_8;
    t = whoami_0_0(t);
    y_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), x_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), y_16));
    t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_27), x_16), term_r_11), y_16));
    return(t);
  }
  t = if_verbose1_1_0(i_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm t_63 (ATerm), ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm k_6 (ATerm t)
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(a_28);
                  }
                else
                  {
                    t = z_27;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(k_6, t);
      }
    }
  t = t_63(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_17 = ATgetFirst((ATermList) t);
      d_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_17 = NULL,i_17 = NULL;
        t = d_17;
        t = g_0(t);
        h_17 = t;
        t = c_17;
        t = f_0(t);
        i_17 = t;
        t = d_17;
        {
          ATerm l_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_17), i_17);
            return(t);
          }
          t = reverse_acc_2_0(f_0, l_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_8;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, m_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm u_61 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_17);
  j_17 = t;
  t = k_17;
  t = u_61(t);
  l_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_17), j_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm n_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(n_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_d_28;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm o_6 (ATerm t)
    {
      ATerm q_17 = NULL;
      q_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_17), term_e_28);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(o_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_61 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_17);
  r_17 = t;
  t = s_17;
  t = v_61(t);
  t_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_17), r_17);
  return(t);
}
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm y_17 (ATerm t)
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_69, _id, t);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        t = Cons_2_0(_id, y_17, t);
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  t = fetch_1_0(r_82, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  a_18 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_28 = ATgetFirst((ATermList) t);
                ATerm k_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_18;
          }
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATinsert(ATempty, a_18);
      }
    b_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_18);
    t = a_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_27;
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
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm h_18 = NULL,i_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_18 = ATgetFirst((ATermList) t);
            i_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_18;
        {
          ATerm q_6 (ATerm t)
          {
            t = i_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  o_18 = t;
  t = SSL_explode_term(o_18);
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_18;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm q_18 (ATerm t)
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_18, t);
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_69(t);
      }
    return(t);
  }
  t = q_18(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_18;
  {
    ATerm s_6 (ATerm t)
    {
      t = r_18;
      return(t);
    }
    t = at_end_1_0(s_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  y_18 = t;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_18);
  t_18 = t;
  t = u_18;
  t = m_55(t);
  w_18 = t;
  t = v_18;
  t = n_55(t);
  x_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, w_18, x_18), t_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_19 = NULL;
  ATerm t_6 (ATerm t)
  {
    ATerm d_19 = NULL;
    d_19 = t;
    t = SSL_explode_string(d_19);
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    ATerm e_19 = NULL;
    e_19 = t;
    t = SSL_explode_string(e_19);
    return(t);
  }
  t = _2_0(t_6, u_6, t);
  t = conc_0_0(t);
  c_19 = t;
  t = SSL_implode_string(c_19);
  return(t);
}
ATerm debug_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  f_19 = t;
  t = z_80(t);
  g_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_19), g_19));
  t = f_19;
  return(t);
}
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm h_19 (ATerm t)
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = Cons_2_0(d_69, h_19, t);
      }
    return(t);
  }
  t = h_19(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL;
      n_19 = t;
      t = SSL_is_string(n_19);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(w_6, t);
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            {
              ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
              r_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_19 = ATgetArgument(t, 0);
                  t = s_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_19 = ATgetArgument(t, 0);
                      t = s_19;
                      {
                        ATerm y_28 = t;
                        int z_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_28);
                          }
                        else
                          {
                            t = y_28;
                            {
                              ATerm x_6 (ATerm t)
                              {
                                t = term_a_29;
                                return(t);
                              }
                              t = debug_1_0(x_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm x_19 = NULL,y_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_19 = ATgetArgument(t, 0);
                          t_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_19;
                      t = eval_config_0_0(t);
                      x_19 = t;
                      t = t_19;
                      t = eval_config_0_0(t);
                      y_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_19, y_19);
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
  ATerm c_20 = NULL;
  c_20 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_20);
  {
    ATerm y_6 (ATerm t)
    {
      ATerm d_20 = NULL;
      t = eval_config_0_0(t);
      d_20 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_20, d_20);
      t = d_20;
      return(t);
    }
    t = try_1_0(y_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm l_67 (ATerm), ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_67(t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_g_29;
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = term_h_29;
        return(t);
      }
      t = Option_3_0(z_6, a_7, b_7, t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm c_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_i_29;
          return(t);
        }
        ATerm g_7 (ATerm t)
        {
          t = term_j_29;
          return(t);
        }
        t = Option_3_0(c_7, e_7, g_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  if(match_cons(t, sym__3))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
      l_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_20, k_20);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_29 = ATgetArgument(t, 0);
            ATerm n_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_20, k_20);
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = (ATerm) ATempty;
      }
    m_20 = t;
    t = SSL_table_put(j_20, k_20, (ATerm) ATinsert(CheckATermList(m_20), l_20));
    t = (ATerm) ATmakeAppl(sym__3, j_20, k_20, l_20);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm r_20 = NULL;
  t = term_t_8;
  t = w_83(t);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_29, term_p_29, r_20);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_20;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm y_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_20 = ATgetFirst((ATermList) t);
          v_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_20;
      t = a_0(t);
      t = term_t_8;
      t = b_0(t);
      y_20 = t;
      t = (ATerm) ATinsert(CheckATermList(v_20), y_20);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm a_21 = NULL;
    a_21 = t;
    if(match_string(t, "--help"))
      {
        t = a_21;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = a_21;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = a_21;
          }
      }
    return(t);
  }
  ATerm k_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_q_29;
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = term_r_29;
    return(t);
  }
  t = Option_3_0(h_7, k_7, l_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
  g_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_21 = ATgetFirst((ATermList) t);
      d_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_21);
  b_21 = t;
  t = c_21;
  t = v_56(t);
  e_21 = t;
  t = d_21;
  t = w_56(t);
  f_21 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_21), e_21), b_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  {
    ATerm p_7 (ATerm t)
    {
      t = term_s_29;
      t = u_83(t);
      return(t);
    }
    t = try_1_0(p_7, t);
    t = p_21;
    {
      ATerm q_7 (ATerm t)
      {
        ATerm q_21 = NULL;
        q_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_21);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_21);
        return(t);
      }
      ATerm a_8 (ATerm t)
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_29 = t;
            int w_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(w_29);
              }
            else
              {
                t = v_29;
                t = u_83(t);
                t = Cons_2_0(_id, a_8, t);
              }
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            {
              ATerm s_21 = NULL,t_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_21 = ATgetFirst((ATermList) t);
                  t_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_21), (ATerm) ATmakeAppl(sym_Undefined_1, s_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_7, a_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  z_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_21;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm x_29 = t;
      int y_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_83(t);
          ;
          LocalPopChoice(y_29);
        }
      else
        {
          t = x_29;
          {
            ATerm z_29 = t;
            int a_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(a_30);
              }
            else
              {
                t = z_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_8, t);
    {
      ATerm j_8 (ATerm t)
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_22 = NULL;
            h_22 = t;
            {
              ATerm d_30 = t;
              int e_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_22;
                  {
                    ATerm f_30 = t;
                    int g_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_w_27;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(g_30);
                      }
                    else
                      {
                        t = f_30;
                        {
                          ATerm k_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(k_8, t);
                        }
                      }
                    t = h_22;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(e_30);
                }
              else
                {
                  t = d_30;
                  t = term_f_29;
                  t = get_config_0_0(t);
                  t = h_22;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm l_8 (ATerm t)
              {
                ATerm m_8 (ATerm t)
                {
                  a_22 = t;
                  return(t);
                }
                t = Undefined_1_0(m_8, t);
                return(t);
              }
              t = option_defined_1_0(l_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_22)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_22)), term_h_30));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(j_8, t);
      b_22 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_22;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm t)
{
  ATerm r_13 = NULL;
  t = parse_options_1_0(v_63, t);
  r_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), r_13);
  t = r_13;
  t = x_63(t);
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_63, t);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        {
          ATerm k_30 = t;
          int l_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_63(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_30);
            }
          else
            {
              t = k_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm t)
{
  t = option_wrap_4_0(z_63, default_usage_0_0, _id, a_64, t);
  return(t);
}
ATerm io_abox2latex_0_0 (ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    t = xtc_io_1_0(abox2latex_0_0, t);
    return(t);
  }
  t = option_wrap_2_0(abox2latex_options_0_0, n_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_abox2latex_0_0(t);
  return(t);
}
