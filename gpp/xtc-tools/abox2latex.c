#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
static void init_module_constructors (void)
{
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
}
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_j_33;
ATerm term_t_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_b_32;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_f_31;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_a_27;
ATerm term_p_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_o_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_c_21;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_w_9;
ATerm term_b_9;
ATerm term_x_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_v_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_w_9, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_a_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_t_12, term_u_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_e_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_o_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_v_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_p_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_z_14, term_a_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_x_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_h_16, term_i_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_s_16, term_t_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_d_17, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_i_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_s_17, term_t_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_h_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_o_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_w_18, term_x_18);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_k_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_u_21);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_o_23);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_f_28, term_e_8);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_k_27);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_e_8);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_e_8);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_e_8);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm k_6 (ATerm d_25, ATerm e_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm create_table_file_0_0 (ATerm t);
ATerm create_abox2latex_args_0_0 (ATerm t);
static ATerm l_6 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm m_6 (ATerm l_83 (ATerm), ATerm s_442, ATerm b_39, ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t);
static ATerm n_6 (ATerm u_37, ATerm v_37, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm v_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_82 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_95 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_95 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm h_95 (ATerm), ATerm t);
static ATerm q_6 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm k_21, ATerm j_21, ATerm t);
static ATerm r_6 (ATerm o_75 (ATerm), ATerm g_21, ATerm f_21, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm s_6 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t);
static ATerm t_6 (ATerm z_79 (ATerm), ATerm w_28, ATerm v_28, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm j_14 (ATerm d_13, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm e_97 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm j_16 (ATerm n_15, ATerm t);
static ATerm k_16 (ATerm p_15, ATerm q_15, ATerm r_15, ATerm t);
static ATerm z_2 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm v_6 (ATerm r_79 (ATerm), ATerm l_26, ATerm j_26, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
static ATerm q_18 (ATerm j_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_6 (ATerm x_38, ATerm t);
static ATerm x_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_20 (ATerm a_19, ATerm t);
static ATerm u_20 (ATerm j_19, ATerm k_19, ATerm m_19, ATerm t);
static ATerm v_20 (ATerm w_19, ATerm x_19, ATerm y_19, ATerm t);
static ATerm y_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm z_6 (ATerm w_13, ATerm x_13, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm g_96 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm a_7 (ATerm s_34, ATerm t_34, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm b_7 (ATerm u_27, ATerm v_27, ATerm t);
ATerm end_scope_1_0 (ATerm o_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_79 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm q_96 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm r_96 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm a_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_29 (ATerm s_28, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm c_7 (ATerm t_46, ATerm s_46, ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm abox2latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_7 (ATerm x_24, ATerm y_24, ATerm t);
ATerm foldr_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_95 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm need_help_1_0 (ATerm x_64 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_7 (ATerm i_34, ATerm j_34, ATerm t);
ATerm debug_1_0 (ATerm j_83 (ATerm), ATerm t);
ATerm map_1_0 (ATerm j_71 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm k_7 (ATerm n_46, ATerm o_46, ATerm t);
static ATerm h_7 (ATerm g_29, ATerm h_29, ATerm t);
static ATerm i_7 (ATerm p_27, ATerm q_27, ATerm o_27, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_85 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm parse_options_1_0 (ATerm r_85 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm f_0 = NULL,q_0 = NULL;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), f_0), term_v_7);
  q_0 = t;
  t = SSL_concat_strings(q_0);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm b_0 = NULL;
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_8;
      t = get_config_0_0(t);
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      t = (ATerm) ATempty;
    }
  t = map_1_0(a_0, t);
  b_0 = t;
  t = SSL_concat_strings(b_0);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm v_0 = NULL,y_0 = NULL;
  t = term_e_8;
  t = tables2text_0_0(t);
  v_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_8), term_x_8), term_u_8), term_f_8), term_t_8), term_s_8), term_r_8), term_q_8), term_n_8), term_f_8), v_0), term_k_8), term_j_8), term_f_8), term_h_8), term_f_8), term_g_8), term_f_8);
  y_0 = t;
  t = SSL_concat_strings(y_0);
  return(t);
}
static ATerm k_6 (ATerm d_25, ATerm e_25, ATerm t)
{
  ATerm y_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_25, e_25);
      LocalPopChoice(a_9);
    }
  else
    {
      t = y_8;
      t = SSL_subtr(d_25, e_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL;
  t = term_b_9;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        t = term_w_9;
      }
  }
  a_1 = t;
  t = term_w_9;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, term_w_9);
  t = k_6(a_1, c_1, t);
  b_1 = t;
  t = SSL_int_to_string(b_1);
  z_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_0), term_b_9);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm j_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(match_cons(x_9, sym_Stream_1))
        {
          j_1 = ATgetArgument(x_9, 0);
        }
      else
        _fail(t);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(j_1, q_1, t);
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm e_1 = NULL,h_1 = NULL,i_1 = NULL;
  ATerm z_9 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_8;
      t = get_config_0_0(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = z_9;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  e_1 = t;
  t = (ATerm) ATinsert(CheckATermList(e_1), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_b_11), term_a_11)), (ATerm) ATinsert(ATinsert(ATempty, term_v_10), term_u_10)), (ATerm) ATinsert(ATinsert(ATempty, term_s_10), term_p_10)), (ATerm) ATinsert(ATinsert(ATempty, term_o_10), term_k_10)), (ATerm) ATinsert(ATinsert(ATempty, term_i_10), term_g_10)), (ATerm) ATinsert(ATinsert(ATempty, term_f_10), term_e_10)));
  t = concat_0_0(t);
  i_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, i_1);
  t = m_6(h_0, h_1, i_1, t);
  t = h_1;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL;
  t = term_e_8;
  t = create_table_file_0_0(t);
  s_1 = t;
  t = term_e_8;
  t = pass_verbose_0_0(t);
  t_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(t_1), s_1), term_c_11);
  {
    ATerm d_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        t = term_g_11;
        t = get_config_0_0(t);
        v_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(t_1), s_1), term_c_11), v_1), term_i_11);
        LocalPopChoice(f_11);
      }
    else
      {
        t = d_11;
      }
  }
  return(t);
}
static ATerm l_6 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm f_2 = NULL;
  t = SSL_write_term_to_stream_baf(r_38, s_38);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_2);
  return(t);
}
static ATerm m_6 (ATerm l_83 (ATerm), ATerm s_442, ATerm b_39, ATerm t)
{
  ATerm g_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_442, term_j_11);
  t = y_6(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_2, b_39);
  t = l_83(t);
  t = fclose_0_0(t);
  t = b_39;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(match_cons(k_11, sym_Stream_1))
        {
          j_2 = ATgetArgument(k_11, 0);
        }
      else
        _fail(t);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(j_2, k_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL;
  i_2 = t;
  t = xtc_new_file_0_0(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
  t = m_6(j_0, h_2, i_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_2);
  t = xtc_transform_file_2_0(d_96, e_96, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm n_6 (ATerm u_37, ATerm v_37, ATerm t)
{
  t = SSL_execvp(u_37, v_37);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
  t_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_3 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,s_0 = NULL;
        t = SSL_int_to_string(u_3);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_11), m_0), term_l_11);
        s_0 = t;
        t = SSL_concat_strings(s_0);
      }
    }
  else
    {
      ATerm m_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_3 = ATgetArgument(t, 0);
          v_3 = ATgetArgument(t, 1);
          w_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_3);
      m_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_3), term_o_11), m_1), term_n_11), u_3);
      n_1 = t;
      t = SSL_concat_strings(n_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  ATerm a_4 = NULL;
  static ATerm t_0 (ATerm t)
  {
    t = v_71(t);
    if(((a_4 != NULL) && (a_4 != t)))
      _fail(t);
    else
      a_4 = t;
    return(t);
  }
  t = fetch_1_0(t_0, t);
  t = not_null(a_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_4 = NULL;
  b_4 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm r_11 = ATgetArgument(t, 0);
              if((b_4 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm s_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_18), term_p_18), term_i_18), term_e_18), term_z_17), term_p_17), term_j_17), term_f_17), term_a_17), term_w_16), term_p_16), term_e_16), term_z_15), term_u_15), term_m_15), term_i_15), term_c_15), term_q_14), term_l_14), term_e_14), term_z_13), term_q_13), term_k_13), term_z_12), term_m_12), term_i_12), term_b_12), term_w_11);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_4 = NULL,s_4 = NULL;
  h_4 = t;
  {
    ATerm z_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            s_4 = ATgetArgument(t, 1);
            {
              ATerm e_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_19);
        {
          ATerm f_19 = t;
          int g_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
              t = s_4;
              {
                ATerm h_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_2 = t;
              t = term_i_19;
              c_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_l_19);
              d_2 = t;
              t = SSL_printnl(c_2, d_2);
              t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_l_19));
              LocalPopChoice(g_19);
            }
          else
            {
              t = f_19;
              t = h_4;
            }
        }
      }
    else
      {
        t = z_18;
        t = h_4;
      }
  }
  t = h_4;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL;
  e_5 = t;
  t = fork_0_0(t);
  d_5 = t;
  {
    ATerm o_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_5;
        t = q_82(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = o_19;
        t = SSL_waitpid(d_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            if(((ATgetType(s_19) != AT_INT) || (ATgetInt((ATermInt) s_19) != 0)))
              _fail(t);
            {
              ATerm t_19 = ATgetArgument(t, 1);
            }
            {
              ATerm v_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_5 = NULL;
  static ATerm w_0 (ATerm t)
  {
    ATerm j_5 = NULL,k_5 = NULL;
    j_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), j_5);
    t = h_7(not_null(i_5), j_5, t);
    k_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_5, k_5);
    return(t);
  }
  if(((i_5 != NULL) && (i_5 != t)))
    _fail(t);
  else
    i_5 = t;
  t = SSL_table_keys(i_5);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm n_5 = NULL;
  n_5 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL;
        t = term_b_9;
        t = get_config_0_0(t);
        q_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_5, term_c_18);
        t = geq_0_0(t);
        t = n_5;
        t = g_95(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = n_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_95 (ATerm), ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_5 = NULL;
        t = term_b_9;
        t = get_config_0_0(t);
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_5, term_z_14);
        t = geq_0_0(t);
        t = t_5;
        t = f_95(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = t_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_95 (ATerm), ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL;
        t = term_b_9;
        t = get_config_0_0(t);
        c_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_6, term_k_12);
        t = geq_0_0(t);
        t = z_5;
        t = h_95(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = z_5;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm k_21, ATerm j_21, ATerm t)
{
  t = s_75(t);
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm e_6 = NULL;
      e_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_21, e_6);
      t = r_75(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
  }
  t = j_21;
  return(t);
}
static ATerm r_6 (ATerm o_75 (ATerm), ATerm g_21, ATerm f_21, ATerm t)
{
  static ATerm i_8 (ATerm t)
  {
    ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
    b_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_8 = ATgetFirst((ATermList) t);
            d_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_8;
              {
                static ATerm d_1 (ATerm t)
                {
                  t = f_21;
                  return(t);
                }
                t = q_6(o_75, d_1, c_8, d_8, t);
              }
              t = i_8(t);
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
              {
                ATerm o_2 = NULL,r_2 = NULL,w_2 = NULL;
                t = SSLgetAnnotations(b_8);
                o_2 = t;
                t = d_8;
                t = i_8(t);
                r_2 = t;
                t = (ATerm) ATinsert(CheckATermList(r_2), c_8);
                w_2 = t;
                t = SSLsetAnnotations(w_2, o_2);
              }
            }
        }
      }
    return(t);
  }
  t = g_21;
  t = i_8(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      if((w_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,p_8 = NULL;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            ATerm s_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
        t = h_7(m_28, n_28, t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = (ATerm) ATempty;
      }
  }
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_8, o_28);
  t = r_6(f_1, p_8, o_28, t);
  m_8 = t;
  t = SSL_table_put(m_28, n_28, m_8);
  t = l_8;
  return(t);
}
static ATerm t_6 (ATerm z_79 (ATerm), ATerm w_28, ATerm v_28, ATerm t)
{
  static ATerm g_1 (ATerm t)
  {
    ATerm z_8 = NULL,c_9 = NULL;
    if(match_cons(t, sym__2))
      {
        z_8 = ATgetArgument(t, 0);
        c_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_28, z_8, c_9);
    t = z_79(t);
    return(t);
  }
  t = v_28;
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_w_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm z_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_9 = NULL,g_9 = NULL;
      d_9 = t;
      t = (ATerm) ATinsert(ATempty, term_c_21);
      g_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_9, (ATerm) ATinsert(ATempty, term_c_21));
      t = z_6(d_9, g_9, t);
      LocalPopChoice(b_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = z_20;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_21 = t;
            if((PushChoice() == 0))
              {
                ATerm h_9 = NULL,i_9 = NULL;
                h_9 = t;
                t = (ATerm) ATinsert(ATempty, term_l_21);
                i_9 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_9, (ATerm) ATinsert(ATempty, term_l_21));
                t = z_6(h_9, i_9, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_21;
              }
            t = debug_1_0(k_1, t);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = debug_1_0(l_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_m_21;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm c_10 = NULL,h_10 = NULL,j_10 = NULL;
  c_10 = t;
  t = term_i_19;
  h_10 = t;
  t = (ATerm) ATinsert(ATempty, term_o_21);
  j_10 = t;
  t = SSL_printnl(h_10, j_10);
  t = c_10;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  if(match_cons(t, sym__3))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      n_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_6(l_10, m_10, n_10, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_10 = NULL,t_10 = NULL,w_10 = NULL;
  r_10 = t;
  t = term_i_19;
  t_10 = t;
  t = (ATerm) ATinsert(ATempty, term_p_21);
  w_10 = t;
  t = SSL_printnl(t_10, w_10);
  t = r_10;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  t = term_i_19;
  y_10 = t;
  t = (ATerm) ATinsert(ATempty, term_o_21);
  z_10 = t;
  t = SSL_printnl(y_10, z_10);
  t = x_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,y_9 = NULL;
  m_9 = t;
  t = if_verbose5_1_0(o_1, t);
  {
    ATerm r_21 = t;
    if((PushChoice() == 0))
      {
        ATerm a_10 = NULL,b_10 = NULL;
        t = term_t_21;
        a_10 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_9);
        b_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATmakeAppl(sym_Imported_1, m_9));
        t = h_7(a_10, b_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_21;
      }
  }
  o_9 = t;
  t = term_t_21;
  u_9 = t;
  t = term_u_21;
  v_9 = t;
  t = (ATerm) ATinsert(ATempty, m_9);
  y_9 = t;
  t = SSL_table_put(u_9, v_9, y_9);
  t = o_9;
  t = if_verbose4_1_0(r_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(w_1, t);
  n_9 = t;
  t = term_t_21;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, n_9);
  t = t_6(x_1, t_9, n_9, t);
  t = if_verbose6_1_0(y_1, t);
  t = term_t_21;
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, m_9);
  r_9 = t;
  t = (ATerm) ATempty;
  s_9 = t;
  t = SSL_table_put(q_9, r_9, s_9);
  t = (ATerm) ATmakeAppl(sym__3, term_t_21, (ATerm)ATmakeAppl(sym_Imported_1, m_9), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_12;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_12 = ATgetFirst((ATermList) t);
          e_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 = NULL,l_3 = NULL,n_3 = NULL,c_3 = NULL;
            t = SSLgetAnnotations(c_12);
            a_3 = t;
            t = d_12;
            t = a_80(t);
            l_3 = t;
            t = e_12;
            t = filter_1_0(a_80, t);
            n_3 = t;
            t = (ATerm) ATinsert(CheckATermList(n_3), l_3);
            c_3 = t;
            t = SSLsetAnnotations(c_3, a_3);
            LocalPopChoice(y_21);
          }
        else
          {
            t = w_21;
            t = e_12;
            t = filter_1_0(a_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  static ATerm o_12 (ATerm t)
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_69(t);
        t = o_12(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = p_69(t);
      }
    return(t);
  }
  t = o_12(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_22;
      t = get_config_0_0(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = c_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_12 = NULL;
            t = term_i_22;
            p_12 = t;
            t = SSL_getenv(p_12);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  t = term_t_21;
  x_12 = t;
  t = term_k_22;
  y_12 = t;
  t = term_l_22;
  t = h_7(x_12, y_12, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_22;
      }
  }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_12 = NULL;
  t = if_verbose5_1_0(b_2, t);
  r_12 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_12 = NULL,v_12 = NULL;
        t = term_t_21;
        s_12 = t;
        t = term_u_21;
        v_12 = t;
        t = term_q_22;
        t = h_7(s_12, v_12, t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm w_12 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_12 = t;
          t = repeat_2_0(l_2, _id, t);
          t = w_12;
        }
      }
  }
  t = r_12;
  t = if_verbose5_1_0(m_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm j_14 (ATerm d_13, ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  t = term_t_21;
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_13);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATmakeAppl(sym_Tool_1, d_13));
  t = h_7(g_13, h_13, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_22 = ATgetFirst((ATermList) t);
      if(match_cons(s_22, sym__2))
        {
          ATerm u_22 = ATgetArgument(s_22, 0);
          f_13 = ATgetArgument(s_22, 1);
        }
      else
        _fail(t);
      {
        ATerm t_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_13;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_t_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_13 = NULL,m_13 = NULL,n_13 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      n_13 = t;
      if(match_cons(t, sym__2))
        {
          i_13 = ATgetArgument(t, 0);
          m_13 = ATgetArgument(t, 1);
          {
            ATerm y_22 = t;
            int z_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
                t = term_t_21;
                t_13 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, i_13);
                u_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATmakeAppl(sym_Tool_1, i_13));
                t = h_7(t_13, u_13, t);
                {
                  static ATerm s_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_13 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((s_13 != NULL) && (s_13 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_2, t);
                }
                t = not_null(s_13);
                LocalPopChoice(z_22);
              }
            else
              {
                t = y_22;
                t = j_14(n_13, t);
              }
          }
        }
      else
        {
          t = j_14(n_13, t);
        }
      t = if_verbose5_1_0(t_2, t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm d_14 = NULL,g_4 = NULL,j_4 = NULL;
        d_14 = t;
        t = term_i_19;
        g_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_23), d_14), term_a_23);
        j_4 = t;
        t = SSL_printnl(g_4, j_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_23), d_14), term_a_23);
        t = if_verbose5_1_0(v_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,t_14 = NULL;
  t_14 = t;
  t = e_97(t);
  t = xtc_find_0_0(t);
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_14, t_14);
  {
    static ATerm y_2 (ATerm t)
    {
      ATerm u_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, r_14, t_14);
      t = n_6(r_14, t_14, t);
      t = term_c_23;
      u_14 = t;
      t = SSL_exit(u_14);
      return(t);
    }
    t = fork_and_wait_1_0(y_2, t);
  }
  t = t_14;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  w_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_14 = NULL,b_15 = NULL;
      t = w_14;
      t = xtc_new_file_0_0(t);
      y_14 = t;
      t = r_0(t);
      b_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_15, (ATerm) ATinsert(ATinsert(ATempty, y_14), term_d_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_14);
    }
  else
    {
      ATerm d_15 = NULL,e_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_14;
      t = xtc_new_file_0_0(t);
      d_15 = t;
      t = r_0(t);
      e_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_15), term_d_23), x_14), term_e_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_15);
    }
  return(t);
}
static ATerm j_16 (ATerm n_15, ATerm t)
{
  t = n_15;
  {
    ATerm f_23 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_23 = ATgetArgument(t, 0);
            ATerm h_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_23;
      }
  }
  t = term_i_23;
  t = debug_1_0(z_2, t);
  t = (ATerm) ATmakeAppl(sym__2, n_15, term_j_11);
  t = open_file_0_0(t);
  return(t);
}
static ATerm k_16 (ATerm p_15, ATerm q_15, ATerm r_15, ATerm t)
{
  t = SSL_open_file(p_15, q_15);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm w_15 = NULL,c_16 = NULL,g_16 = NULL;
  w_15 = t;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_16(w_15, t);
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            t = k_16(c_16, g_16, w_15, t);
          }
      }
    }
  else
    {
      t = j_16(w_15, t);
    }
  return(t);
}
static ATerm v_6 (ATerm r_79 (ATerm), ATerm l_26, ATerm j_26, ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,r_16 = NULL,u_16 = NULL;
  o_16 = t;
  t = r_79(t);
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_16, l_26, j_26);
  t = i_7(l_16, l_26, j_26, t);
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_16 = NULL;
        t = term_o_23;
        v_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_16, term_o_23);
        t = h_7(l_16, v_16, t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_16 = ATgetFirst((ATermList) t);
      n_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_o_23;
  r_16 = t;
  t = (ATerm) ATinsert(CheckATermList(n_16), (ATerm) ATinsert(CheckATermList(m_16), l_26));
  u_16 = t;
  t = SSL_table_put(l_16, r_16, u_16);
  t = o_16;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm b_17 = NULL;
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_17 = NULL,v_4 = NULL;
      k_17 = t;
      t = term_t_23;
      v_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_17, term_t_23);
      t = g_7(k_17, v_4, t);
      b_17 = t;
      t = SSL_mkstemp(b_17);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm l_17 = NULL;
        t = term_u_23;
        l_17 = t;
        t = SSL_perror(l_17);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  t = P__tmpdir_0_0(t);
  w_17 = t;
  t = term_w_23;
  x_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_17, term_w_23);
  t = g_7(w_17, x_17, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      u_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_e_8;
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_17, term_e_8);
  t = v_6(b_3, u_17, v_17, t);
  t = SSL_close(r_17);
  t = u_17;
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm y_17 = NULL,b_18 = NULL;
  y_17 = t;
  t = xtc_new_file_0_0(t);
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_18, term_j_11);
  t = open_file_0_0(t);
  t = SSL_print(b_18, y_17);
  t = SSL_close_file(b_18);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_18);
  return(t);
}
static ATerm q_18 (ATerm j_18, ATerm t)
{
  t = SSL_fclose(j_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_18 = ATgetArgument(t, 0);
      {
        ATerm x_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_18);
            LocalPopChoice(z_23);
          }
        else
          {
            t = x_23;
            t = q_18(n_18, t);
          }
      }
    }
  else
    {
      t = q_18(n_18, t);
    }
  return(t);
}
static ATerm w_6 (ATerm x_38, ATerm t)
{
  t = SSL_read_term_from_stream(x_38);
  return(t);
}
static ATerm x_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  ATerm r_18 = NULL;
  t = SSL_fopen(f_14, g_14);
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_18 = NULL;
  t = SSL_stdin_stream();
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_18 = NULL;
  t = SSL_stdout_stream();
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  t = SSL_stderr_stream();
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_18);
  return(t);
}
static ATerm r_20 (ATerm a_19, ATerm t)
{
  ATerm c_19 = NULL;
  t = SSL_explode_term(a_19);
  if(match_cons(t, sym__2))
    {
      ATerm a_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_24 = ATgetArgument(t, 1);
        if(((ATgetType(e_24) == AT_LIST) && !(ATisEmpty(e_24))))
          {
            c_19 = ATgetFirst((ATermList) e_24);
            {
              ATerm h_24 = (ATerm) ATgetNext((ATermList) e_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_20 (ATerm j_19, ATerm k_19, ATerm m_19, ATerm t)
{
  ATerm n_19 = NULL,p_19 = NULL,r_19 = NULL,u_19 = NULL,f_3 = NULL;
  t = SSLgetAnnotations(m_19);
  r_19 = t;
  t = j_19;
  if(match_cons(t, sym_Path_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_19, k_19);
  f_3 = t;
  t = SSLsetAnnotations(f_3, r_19);
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(n_19, p_19, t);
  return(t);
}
static ATerm v_20 (ATerm w_19, ATerm x_19, ATerm y_19, ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,g_20 = NULL,g_3 = NULL;
  t = SSLgetAnnotations(y_19);
  b_20 = t;
  t = SSL_is_string(w_19);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_20, x_19);
  g_3 = t;
  t = SSLsetAnnotations(g_3, b_20);
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(z_19, a_20, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym__2))
    {
      m_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
      {
        ATerm i_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_20(l_20, t);
            LocalPopChoice(m_24);
          }
        else
          {
            t = i_24;
            {
              ATerm n_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_20(m_20, n_20, l_20, t);
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = n_24;
                  t = v_20(m_20, n_20, l_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_20(l_20, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,a_21 = NULL,h_21 = NULL;
  h_21 = t;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_21, term_w_24);
        t = y_6(t);
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        {
          ATerm s_5 = NULL,x_5 = NULL;
          t = term_z_24;
          x_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_24, h_21);
          t = g_7(x_5, h_21, t);
          s_5 = t;
          t = SSL_perror(s_5);
          _fail(t);
        }
      }
  }
  y_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(a_21, t);
  x_20 = t;
  t = y_20;
  t = fclose_0_0(t);
  t = x_20;
  return(t);
}
static ATerm z_6 (ATerm w_13, ATerm x_13, ATerm t)
{
  t = SSL_access(w_13, x_13);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_21 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_25;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm s_21 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_21);
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_21, (ATerm) ATinsert(ATempty, term_l_21));
      t = z_6(q_21, s_21, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = g_96(t);
  t = print_to_0_0(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm v_21 = NULL,x_21 = NULL,z_21 = NULL;
  z_21 = t;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_22 = ATgetArgument(t, 0);
            {
              ATerm f_6 = NULL,k_3 = NULL;
              t = SSLgetAnnotations(z_21);
              f_6 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_22);
              k_3 = t;
              t = SSLsetAnnotations(k_3, f_6);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_21;
          }
        LocalPopChoice(c_25);
        t = xtc_transform_file_2_0(e_3, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = b_25;
        t = xtc_transform_term_2_0(h_3, create_abox2latex_args_0_0, t);
      }
  }
  v_21 = t;
  t = term_g_25;
  t = create_header_0_0(t);
  x_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_21), x_21);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(d_3, t);
  return(t);
}
static ATerm a_7 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_copy(s_34, t_34);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
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
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        t = r_23;
        t = o_0(t);
        j_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = j_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = j_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, s_23, j_7);
        t = a_7(s_23, j_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_23);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        {
          ATerm o_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_7 = NULL;
              t = r_23;
              t = o_0(t);
              s_7 = t;
              {
                ATerm q_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_7 = NULL;
                    w_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_7;
                          }
                        else
                          {
                            t = w_7;
                            if((s_23 != t))
                              {
                                _fail(t);
                              }
                            t = w_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_25;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, s_23, s_7);
              t = a_7(s_23, s_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_23);
              LocalPopChoice(p_25);
            }
          else
            {
              t = o_25;
              t = r_23;
              t = o_0(t);
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
static ATerm b_7 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm y_23 = NULL,b_24 = NULL;
  b_24 = t;
  {
    ATerm r_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
        t = h_7(u_27, v_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_25 = ATgetFirst((ATermList) t);
            y_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_25);
        t = SSL_table_put(u_27, v_27, y_23);
        t = (ATerm) ATmakeAppl(sym__3, u_27, v_27, y_23);
      }
    else
      {
        t = r_25;
        t = SSL_table_remove(u_27, v_27);
        t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
      }
  }
  t = b_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,f_24 = NULL,g_24 = NULL,j_24 = NULL;
  g_24 = t;
  t = o_79(t);
  f_24 = t;
  {
    ATerm v_25 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        t = term_o_23;
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_24, term_o_23);
        t = h_7(f_24, k_24, t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = v_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_24 = ATgetFirst((ATermList) t);
      c_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_o_23;
  j_24 = t;
  t = SSL_table_put(f_24, j_24, c_24);
  t = d_24;
  {
    static ATerm i_3 (ATerm t)
    {
      ATerm l_24 = NULL;
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_24, l_24);
      t = b_7(f_24, l_24, t);
      return(t);
    }
    t = map_1_0(i_3, t);
  }
  t = g_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_69(t);
      t = k_69(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      t = k_69(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  s_24 = t;
  t = n_79(t);
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_24, term_o_23);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_26 = ATgetArgument(t, 0);
            ATerm i_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_23;
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_24, term_o_23);
        t = h_7(r_24, f_25, t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATempty;
      }
  }
  t_24 = t;
  t = term_o_23;
  u_24 = t;
  t = (ATerm) ATinsert(CheckATermList(t_24), (ATerm) ATempty);
  v_24 = t;
  t = SSL_table_put(r_24, u_24, v_24);
  t = s_24;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_v_23;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  {
    ATerm k_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_25);
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
        t = s_25;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm i_25 = NULL;
  static ATerm m_3 (ATerm t)
  {
    ATerm l_25 = NULL;
    l_25 = t;
    {
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_25 = NULL,n_25 = NULL;
          t = term_v_23;
          m_25 = t;
          t = term_o_23;
          n_25 = t;
          t = term_p_26;
          t = h_7(m_25, n_25, t);
          LocalPopChoice(o_26);
        }
      else
        {
          t = n_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_25 != NULL) && (i_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_25 = ATgetFirst((ATermList) t);
        {
          ATerm s_26 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = i_25;
    t = map_1_0(o_3, t);
    t = l_25;
    t = end_scope_1_0(q_3, t);
    return(t);
  }
  t = begin_scope_1_0(j_3, t);
  t = restore_always_2_0(q_96, m_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm t_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_23;
      t = get_config_0_0(t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = t_26;
      t = term_a_27;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  static ATerm s_3 (ATerm t)
  {
    ATerm b_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_25 = NULL;
        t = term_e_23;
        t = get_config_0_0(t);
        w_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_25);
        LocalPopChoice(d_27);
      }
    else
      {
        t = b_27;
        t = term_a_25;
      }
    t = r_96(t);
    t = copy_to_1_0(y_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(s_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  x_25 = t;
  t = term_e_8;
  t = whoami_0_0(t);
  y_25 = t;
  t = term_i_19;
  a_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_27), y_25), term_h_27);
  b_26 = t;
  t = SSL_printnl(a_26, b_26);
  t = term_w_9;
  z_25 = t;
  t = SSL_exit(z_25);
  t = x_25;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,u_26 = NULL,v_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
      t = term_e_8;
      t = n_0(t);
      w_26 = t;
      t = term_j_27;
      x_26 = t;
      t = term_k_27;
      y_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_27, term_k_27, w_26);
      t = i_7(x_26, y_26, w_26, t);
      _fail(t);
    }
  else
    {
      ATerm c_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_26 = ATgetFirst((ATermList) t);
          r_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_26 = ATgetFirst((ATermList) t);
          v_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_26;
      t = k_0(t);
      t = u_26;
      t = l_0(t);
      c_27 = t;
      t = (ATerm) ATinsert(CheckATermList(v_26), c_27);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  static ATerm h_28 (ATerm t)
  {
    ATerm d_28 = NULL,e_28 = NULL,g_28 = NULL;
    g_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_28 = ATgetFirst((ATermList) t);
        e_28 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_8 = NULL,v_8 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(g_28);
          o_8 = t;
          t = e_28;
          t = h_28(t);
          v_8 = t;
          t = (ATerm) ATinsert(CheckATermList(v_8), d_28);
          p_3 = t;
          t = SSLsetAnnotations(p_3, o_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_28;
        t = a_72(t);
      }
    return(t);
  }
  t = h_28(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_27;
    }
  else
    {
      static ATerm z_3 (ATerm t)
      {
        t = not_null(g_27);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_27 = ATgetFirst((ATermList) t);
          if(((g_27 != NULL) && (g_27 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_27;
      t = at_end_1_0(z_3, t);
    }
  return(t);
}
static ATerm f_29 (ATerm s_28, ATerm t)
{
  ATerm t_28 = NULL;
  t = SSL_explode_term(s_28);
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  c_29 = t;
  if(match_cons(t, sym__2))
    {
      a_29 = ATgetArgument(t, 0);
      b_29 = ATgetArgument(t, 1);
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_4 (ATerm t)
            {
              t = b_29;
              return(t);
            }
            t = a_29;
            t = at_end_1_0(c_4, t);
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            t = f_29(c_29, t);
          }
      }
    }
  else
    {
      t = f_29(c_29, t);
    }
  return(t);
}
static ATerm c_7 (ATerm t_46, ATerm s_46, ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  t = t_46;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = (ATerm) ATempty;
      }
  }
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_46, j_29);
  t = conc_0_0(t);
  i_29 = t;
  t = term_t_27;
  k_29 = t;
  t = SSL_table_put(k_29, t_46, i_29);
  t = (ATerm) ATmakeAppl(sym__3, term_t_27, t_46, i_29);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  if(match_string(t, "-k"))
    {
      t = s_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_29;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
  t_29 = t;
  t = SSL_string_to_int(t_29);
  u_29 = t;
  t = term_w_27;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_27, u_29);
  t = k_7(v_29, u_29, t);
  t = t_29;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, e_4, f_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  if(match_string(t, "-S"))
    {
      t = y_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_29;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  t = term_b_9;
  z_29 = t;
  t = term_y_27;
  a_30 = t;
  t = term_z_27;
  t = k_7(z_29, a_30, t);
  t = term_a_28;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,g_30 = NULL;
  c_30 = t;
  t = SSL_string_to_int(c_30);
  d_30 = t;
  t = term_b_9;
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, d_30);
  t = k_7(g_30, d_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_30);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  t = term_f_28;
  h_30 = t;
  t = term_e_8;
  i_30 = t;
  t = term_i_28;
  t = k_7(h_30, i_30, t);
  t = term_j_28;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_k_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, m_4, n_4, t);
      LocalPopChoice(p_28);
    }
  else
    {
      t = l_28;
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, p_4, r_4, t);
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            t = Option_3_0(t_4, u_4, w_4, t);
          }
      }
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  if(match_string(t, "-o"))
    {
      t = k_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_30;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  l_30 = t;
  t = term_d_23;
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_23, l_30);
  t = k_7(m_30, l_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_30);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  if(match_string(t, "-i"))
    {
      t = p_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_30;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  t = term_e_23;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_23, q_30);
  t = k_7(r_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_30);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  t = term_a_8;
  t_30 = t;
  t = (ATerm) ATinsert(ATempty, s_30);
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATempty, s_30));
  t = c_7(t_30, u_30, t);
  t = s_30;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  v_30 = t;
  t = term_g_11;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, v_30);
  t = k_7(w_30, v_30, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            {
              ATerm n_29 = t;
              int o_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(o_29);
                }
              else
                {
                  t = n_29;
                  {
                    ATerm p_29 = t;
                    int q_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(q_29);
                      }
                    else
                      {
                        t = p_29;
                        {
                          ATerm r_29 = t;
                          int w_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(f_5, g_5, h_5, t);
                              LocalPopChoice(w_29);
                            }
                          else
                            {
                              t = r_29;
                              t = ArgOption_3_0(l_5, m_5, o_5, t);
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
  ATerm x_30 = NULL,y_30 = NULL,b_31 = NULL,e_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_8;
  t = whoami_0_0(t);
  x_30 = t;
  t = term_i_19;
  b_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_29), x_30);
  e_31 = t;
  t = SSL_printnl(b_31, e_31);
  t = term_w_9;
  y_30 = t;
  t = SSL_exit(y_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_30;
  t = get_config_0_0(t);
  return(t);
}
static ATerm d_7 (ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_24, y_24);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      t = SSL_addr(x_24, y_24);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,l_31 = NULL;
  g_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_31;
      t = f_78(t);
    }
  else
    {
      ATerm u_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_31 = ATgetFirst((ATermList) t);
          l_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_31;
      t = foldr_2_0(f_78, g_78, t);
      u_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_31, u_31);
      t = g_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_y_27;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm l_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(l_9, p_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_31 = NULL,e_9 = NULL,f_9 = NULL;
  t = times_0_0(t);
  f_9 = t;
  t = SSL_explode_term(f_9);
  if(match_cons(t, sym__2))
    {
      ATerm j_30 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_9;
  t = foldr_2_0(p_5, r_5, t);
  x_31 = t;
  t = SSL_TicksToSeconds(x_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  if(match_cons(t, sym__2))
    {
      r_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_32;
        if((r_32 != t))
          {
            _fail(t);
          }
        t = q_32;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATmakeAppl(sym__2, r_32, s_32);
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_32, s_32);
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              t = SSL_gtr(r_32, s_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_32, s_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm w_32 = NULL;
  w_32 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_32 = NULL;
        t = term_b_9;
        t = get_config_0_0(t);
        y_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_32, term_w_9);
        t = geq_0_0(t);
        t = w_32;
        t = c_95(t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        t = w_32;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,d_33 = NULL,e_33 = NULL;
  t = run_time_0_0(t);
  a_33 = t;
  t = term_e_8;
  t = whoami_0_0(t);
  b_33 = t;
  t = term_i_19;
  d_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_31), a_33), term_n_11), b_33);
  e_33 = t;
  t = SSL_printnl(d_33, e_33);
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_31), a_33), term_n_11), b_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_27;
  f_33 = t;
  t = SSL_exit(f_33);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  o_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_33 = ATgetArgument(t, 0);
          {
            ATerm q_10 = NULL,r_3 = NULL;
            t = SSLgetAnnotations(o_33);
            q_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_33);
            r_3 = t;
            t = SSLsetAnnotations(r_3, q_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_64 (ATerm), ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_31;
      t = get_config_0_0(t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = fetch_1_0(w_5, t);
    }
  t = x_64(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_33 = ATgetFirst((ATermList) t);
      s_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_33 = NULL,x_33 = NULL;
        static ATerm y_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_33)), not_null(x_33));
          return(t);
        }
        t = s_33;
        t = i_0(t);
        if(((w_33 != NULL) && (w_33 != t)))
          _fail(t);
        else
          w_33 = t;
        t = r_33;
        t = g_0(t);
        if(((x_33 != NULL) && (x_33 != t)))
          _fail(t);
        else
          x_33 = t;
        t = s_33;
        t = reverse_acc_2_0(g_0, y_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,x_3 = NULL;
  d_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_34);
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_34);
  x_3 = t;
  t = SSLsetAnnotations(x_3, b_34);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_34), term_m_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_30;
      t = get_config_0_0(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      t = fetch_1_0(a_6, t);
    }
  t = term_p_31;
  t = echo_0_0(t);
  t = term_j_27;
  z_33 = t;
  t = term_k_27;
  a_34 = t;
  t = term_q_31;
  t = h_7(z_33, a_34, t);
  t = reverse_acc_2_0(_id, b_6, t);
  t = map_1_0(d_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_71 (ATerm), ATerm t)
{
  static ATerm g_35 (ATerm t)
  {
    ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
    d_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_35 = ATgetFirst((ATermList) t);
        f_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_31 = t;
      int s_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_11 = NULL,h_11 = NULL,i_4 = NULL;
          t = SSLgetAnnotations(d_35);
          e_11 = t;
          t = e_35;
          t = t_71(t);
          h_11 = t;
          t = (ATerm) ATinsert(CheckATermList(f_35), h_11);
          i_4 = t;
          t = SSLsetAnnotations(i_4, e_11);
          LocalPopChoice(s_31);
        }
      else
        {
          t = r_31;
          {
            ATerm u_11 = NULL,x_11 = NULL,k_4 = NULL;
            t = SSLgetAnnotations(d_35);
            u_11 = t;
            t = f_35;
            t = g_35(t);
            x_11 = t;
            t = (ATerm) ATinsert(CheckATermList(x_11), e_35);
            k_4 = t;
            t = SSLsetAnnotations(k_4, u_11);
          }
        }
    }
    return(t);
  }
  t = g_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
  k_35 = t;
  {
    ATerm t_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_31 = ATgetFirst((ATermList) t);
                ATerm y_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_35;
          }
        LocalPopChoice(v_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATinsert(ATempty, k_35);
      }
  }
  l_35 = t;
  t = term_a_27;
  m_35 = t;
  t = SSL_printnl(m_35, l_35);
  t = k_35;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_7 (ATerm i_34, ATerm j_34, ATerm t)
{
  t = SSL_strcat(i_34, j_34);
  return(t);
}
ATerm debug_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  q_35 = t;
  t = j_83(t);
  r_35 = t;
  t = term_i_19;
  s_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_35), r_35);
  t_35 = t;
  t = SSL_printnl(s_35, t_35);
  t = q_35;
  return(t);
}
ATerm map_1_0 (ATerm j_71 (ATerm), ATerm t)
{
  static ATerm i_36 (ATerm t)
  {
    ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
    f_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_36;
      }
    else
      {
        ATerm q_12 = NULL,a_13 = NULL,b_13 = NULL,q_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_36 = ATgetFirst((ATermList) t);
            h_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_36);
        q_12 = t;
        t = g_36;
        t = j_71(t);
        a_13 = t;
        t = h_36;
        t = i_36(t);
        b_13 = t;
        t = (ATerm) ATinsert(CheckATermList(b_13), a_13);
        q_4 = t;
        t = SSLsetAnnotations(q_4, q_12);
      }
    return(t);
  }
  t = i_36(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_36 = NULL;
      q_36 = t;
      t = SSL_is_string(q_36);
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm e_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_6, t);
            LocalPopChoice(f_32);
          }
        else
          {
            t = e_32;
            {
              ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
              w_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_36 = ATgetArgument(t, 0);
                  t = x_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_36 = ATgetArgument(t, 0);
                      t = x_36;
                      {
                        ATerm g_32 = t;
                        int h_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(h_32);
                          }
                        else
                          {
                            t = g_32;
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
                          x_36 = ATgetArgument(t, 0);
                          y_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_36;
                      t = eval_config_0_0(t);
                      c_37 = t;
                      t = y_36;
                      t = eval_config_0_0(t);
                      d_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
                      t = g_7(c_37, d_37, t);
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
  t = term_t_27;
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, h_37);
  t = h_7(i_37, h_37, t);
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_37 = NULL,k_37 = NULL;
        t = eval_config_0_0(t);
        j_37 = t;
        t = term_t_27;
        k_37 = t;
        t = SSL_table_put(k_37, h_37, j_37);
        t = j_37;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
      }
  }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  t = term_k_32;
  n_37 = t;
  t = term_e_8;
  o_37 = t;
  t = term_l_32;
  t = k_7(n_37, o_37, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  t = term_k_32;
  r_37 = t;
  t = term_e_8;
  s_37 = t;
  t = term_l_32;
  t = k_7(r_37, s_37, t);
  t = term_n_32;
  p_37 = t;
  t = term_e_8;
  q_37 = t;
  t = term_o_32;
  t = k_7(p_37, q_37, t);
  t = term_p_32;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_6, j_6, o_6, t);
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      t = Option_3_0(u_6, f_7, l_7, t);
    }
  return(t);
}
static ATerm k_7 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm t_37 = NULL;
  t = term_t_27;
  t_37 = t;
  t = SSL_table_put(t_37, n_46, o_46);
  t = (ATerm) ATmakeAppl(sym__3, term_t_27, n_46, o_46);
  return(t);
}
static ATerm h_7 (ATerm g_29, ATerm h_29, ATerm t)
{
  t = SSL_table_get(g_29, h_29);
  return(t);
}
static ATerm i_7 (ATerm p_27, ATerm q_27, ATerm o_27, ATerm t)
{
  ATerm x_37 = NULL,z_37 = NULL,a_38 = NULL;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_27, q_27);
  {
    ATerm x_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_33 = ATgetArgument(t, 0);
            ATerm g_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_27, q_27);
        t = h_7(p_27, q_27, t);
        LocalPopChoice(z_32);
      }
    else
      {
        t = x_32;
        t = (ATerm) ATempty;
      }
  }
  z_37 = t;
  t = (ATerm) ATinsert(CheckATermList(z_37), o_27);
  a_38 = t;
  t = SSL_table_put(p_27, q_27, a_38);
  t = x_37;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
      t = term_e_8;
      t = e_0(t);
      m_38 = t;
      t = term_j_27;
      n_38 = t;
      t = term_k_27;
      o_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_27, term_k_27, m_38);
      t = i_7(n_38, o_38, m_38, t);
      _fail(t);
    }
  else
    {
      ATerm t_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_38 = ATgetFirst((ATermList) t);
          l_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_38;
      t = c_0(t);
      t = term_e_8;
      t = d_0(t);
      t_38 = t;
      t = (ATerm) ATinsert(CheckATermList(l_38), t_38);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,y_38 = NULL,z_38 = NULL,c_39 = NULL,p_6 = NULL;
  c_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_38 = ATgetFirst((ATermList) t);
      w_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_39);
  u_38 = t;
  t = v_38;
  t = i_58(t);
  y_38 = t;
  t = w_38;
  t = j_58(t);
  z_38 = t;
  t = (ATerm) ATinsert(CheckATermList(z_38), y_38);
  p_6 = t;
  t = SSLsetAnnotations(p_6, u_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,m_39 = NULL,n_39 = NULL,e_7 = NULL;
  h_39 = t;
  {
    ATerm h_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_33;
        t = s_85(t);
        LocalPopChoice(i_33);
      }
    else
      {
        t = h_33;
      }
  }
  t = h_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_39 = ATgetFirst((ATermList) t);
      k_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_39);
  i_39 = t;
  t = term_b_30;
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_30, j_39);
  t = k_7(n_39, j_39, t);
  t = k_39;
  {
    static ATerm x_39 (ATerm t)
    {
      ATerm k_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_39 = NULL;
              q_39 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_39;
              LocalPopChoice(p_33);
            }
          else
            {
              t = m_33;
              t = s_85(t);
              t = Cons_2_0(_id, x_39, t);
            }
          LocalPopChoice(l_33);
        }
      else
        {
          t = k_33;
          {
            ATerm t_39 = NULL,u_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_39 = ATgetFirst((ATermList) t);
                u_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_39), (ATerm) ATmakeAppl(sym_Undefined_1, t_39));
          }
        }
      return(t);
    }
    t = x_39(t);
  }
  m_39 = t;
  t = (ATerm) ATinsert(CheckATermList(m_39), (ATerm) ATmakeAppl(sym_Program_1, j_39));
  e_7 = t;
  t = SSLsetAnnotations(e_7, i_39);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  if(match_string(t, "--help"))
    {
      t = p_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_40;
        }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL;
  t = term_k_31;
  q_40 = t;
  t = term_e_8;
  r_40 = t;
  t = term_q_33;
  t = k_7(q_40, r_40, t);
  t = term_t_33;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_u_33;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL;
  j_40 = t;
  t = term_j_27;
  l_40 = t;
  t = term_k_27;
  m_40 = t;
  t = (ATerm) ATempty;
  o_40 = t;
  t = SSL_table_put(l_40, m_40, o_40);
  t = j_40;
  {
    static ATerm m_7 (ATerm t)
    {
      ATerm v_33 = t;
      int y_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_85(t);
          LocalPopChoice(y_33);
        }
      else
        {
          t = v_33;
          {
            ATerm e_34 = t;
            int g_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_7, p_7, q_7, t);
                LocalPopChoice(g_34);
              }
            else
              {
                t = e_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_7, t);
  }
  {
    ATerm h_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_40 = NULL;
        y_40 = t;
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_14 = NULL;
              t = y_40;
              {
                ATerm n_34 = t;
                int o_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_31;
                    t = get_config_0_0(t);
                    LocalPopChoice(o_34);
                  }
                else
                  {
                    t = n_34;
                    t = fetch_1_0(r_7, t);
                  }
              }
              t = y_40;
              t = default_system_usage_0_0(t);
              t = term_y_27;
              o_14 = t;
              t = SSL_exit(o_14);
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              {
                ATerm v_14 = NULL;
                t = term_k_32;
                t = get_config_0_0(t);
                t = y_40;
                t = default_system_about_0_0(t);
                t = term_y_27;
                v_14 = t;
                t = SSL_exit(v_14);
              }
            }
        }
        LocalPopChoice(k_34);
      }
    else
      {
        t = h_34;
        {
          ATerm p_34 = t;
          int q_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
              static ATerm t_7 (ATerm t)
              {
                ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,o_7 = NULL;
                e_41 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_41);
                c_41 = t;
                t = d_41;
                if(((h_40 != NULL) && (h_40 != t)))
                  _fail(t);
                else
                  h_40 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_41);
                o_7 = t;
                t = SSLsetAnnotations(o_7, c_41);
                return(t);
              }
              t = fetch_1_0(t_7, t);
              t = term_i_19;
              a_41 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_40)), term_r_34);
              b_41 = t;
              t = SSL_printnl(a_41, b_41);
              t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_40)), term_r_34));
              t = default_system_usage_0_0(t);
              t = term_w_9;
              z_40 = t;
              t = SSL_exit(z_40);
              LocalPopChoice(q_34);
            }
          else
            {
              t = p_34;
            }
        }
      }
  }
  i_40 = t;
  t = term_j_27;
  k_40 = t;
  t = SSL_table_destroy(k_40);
  t = i_40;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  t = parse_options_1_0(z_64, t);
  j_41 = t;
  t = term_u_34;
  m_41 = t;
  t = SSL_table_create(m_41);
  t = term_u_34;
  k_41 = t;
  t = term_v_34;
  l_41 = t;
  t = SSL_table_put(k_41, l_41, j_41);
  t = j_41;
  t = b_65(t);
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_65, t);
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        {
          ATerm y_34 = t;
          int z_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_65(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_34);
            }
          else
            {
              t = y_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = xtc_io_1_0(abox2latex_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2latex_options_0_0, default_usage_0_0, _id, u_7, t);
  return(t);
}
