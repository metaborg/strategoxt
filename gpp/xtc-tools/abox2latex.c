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
ATerm term_x_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_q_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_o_32;
ATerm term_b_32;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_h_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_g_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_z_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_e_23;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_v_9;
ATerm term_j_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_w_7;
ATerm term_v_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_v_9, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_f_12, term_g_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_s_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_d_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_m_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_f_15, term_g_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_s_15, term_t_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_w_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_b_17, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_h_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_b_18, term_c_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_t_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_c_19, term_d_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_k_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_w_21);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_e_24);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_g_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_d_8);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_j_27);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym__2, term_o_32, term_d_8);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_d_8);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_d_8);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm j_6 (ATerm b_25, ATerm c_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm create_table_file_0_0 (ATerm t);
ATerm create_abox2latex_args_0_0 (ATerm t);
static ATerm k_6 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm l_6 (ATerm n_82 (ATerm), ATerm w_438, ATerm x_38, ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t);
static ATerm m_6 (ATerm s_37, ATerm t_37, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm b_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm s_81 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_94 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_94 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_94 (ATerm), ATerm t);
static ATerm p_6 (ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm i_21, ATerm h_21, ATerm t);
static ATerm q_6 (ATerm t_74 (ATerm), ATerm e_21, ATerm d_21, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm r_6 (ATerm k_28, ATerm l_28, ATerm m_28, ATerm t);
static ATerm s_6 (ATerm b_79 (ATerm), ATerm u_28, ATerm t_28, ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm y_13 (ATerm a_13, ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm z_95 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm v_15 (ATerm e_15, ATerm t);
static ATerm w_15 (ATerm h_15, ATerm m_15, ATerm n_15, ATerm t);
static ATerm a_3 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm u_6 (ATerm t_78 (ATerm), ATerm j_26, ATerm h_26, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
static ATerm g_18 (ATerm a_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_6 (ATerm v_38, ATerm t);
static ATerm w_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_20 (ATerm r_18, ATerm t);
static ATerm c_20 (ATerm v_18, ATerm w_18, ATerm x_18, ATerm t);
static ATerm d_20 (ATerm i_19, ATerm j_19, ATerm k_19, ATerm t);
static ATerm x_6 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm y_6 (ATerm w_13, ATerm x_13, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm b_95 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm z_6 (ATerm q_34, ATerm r_34, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm s_27, ATerm t_27, ATerm t);
ATerm end_scope_1_0 (ATerm q_78 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_78 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_95 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm m_95 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm a_28 (ATerm l_27, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_7 (ATerm z_45, ATerm y_45, ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm abox2latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_7 (ATerm v_24, ATerm w_24, ATerm t);
ATerm foldr_2_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_93 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm need_help_1_0 (ATerm d_64 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_7 (ATerm g_34, ATerm h_34, ATerm t);
ATerm debug_1_0 (ATerm l_82 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm j_7 (ATerm t_45, ATerm u_45, ATerm t);
static ATerm g_7 (ATerm e_29, ATerm f_29, ATerm t);
static ATerm h_7 (ATerm n_27, ATerm o_27, ATerm m_27, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_84 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm parse_options_1_0 (ATerm t_84 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), c_0), term_v_7);
  e_0 = t;
  t = SSL_concat_strings(e_0);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm b_0 = NULL;
  ATerm z_7 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_8;
      t = get_config_0_0(t);
      LocalPopChoice(b_8);
    }
  else
    {
      t = z_7;
      t = (ATerm) ATempty;
    }
  t = map_1_0(a_0, t);
  b_0 = t;
  t = SSL_concat_strings(b_0);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm j_0 = NULL,u_0 = NULL;
  t = term_d_8;
  t = tables2text_0_0(t);
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_8), term_d_9), term_a_9), term_g_8), term_w_8), term_u_8), term_q_8), term_p_8), term_o_8), term_g_8), j_0), term_n_8), term_m_8), term_g_8), term_l_8), term_g_8), term_h_8), term_g_8);
  u_0 = t;
  t = SSL_concat_strings(u_0);
  return(t);
}
static ATerm j_6 (ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm e_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_25, c_25);
      LocalPopChoice(i_9);
    }
  else
    {
      t = e_9;
      t = SSL_subtr(b_25, c_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  t = term_j_9;
  {
    ATerm l_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = l_9;
        t = term_v_9;
      }
  }
  z_0 = t;
  t = term_v_9;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_0, term_v_9);
  t = j_6(z_0, b_1, t);
  a_1 = t;
  t = SSL_int_to_string(a_1);
  y_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_0), term_j_9);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(match_cons(x_9, sym_Stream_1))
        {
          i_1 = ATgetArgument(x_9, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(i_1, j_1, t);
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL,h_1 = NULL;
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_8;
      t = get_config_0_0(t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  c_1 = t;
  t = (ATerm) ATinsert(CheckATermList(c_1), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_b_11), term_a_11)), (ATerm) ATinsert(ATinsert(ATempty, term_z_10), term_x_10)), (ATerm) ATinsert(ATinsert(ATempty, term_t_10), term_p_10)), (ATerm) ATinsert(ATinsert(ATempty, term_o_10), term_n_10)), (ATerm) ATinsert(ATinsert(ATempty, term_j_10), term_i_10)), (ATerm) ATinsert(ATinsert(ATempty, term_g_10), term_e_10)));
  t = concat_0_0(t);
  h_1 = t;
  t = xtc_new_file_0_0(t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, h_1);
  t = l_6(f_0, e_1, h_1, t);
  t = e_1;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL;
  t = term_d_8;
  t = create_table_file_0_0(t);
  r_1 = t;
  t = term_d_8;
  t = pass_verbose_0_0(t);
  s_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(s_1), r_1), term_c_11);
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = term_f_11;
        t = get_config_0_0(t);
        u_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(s_1), r_1), term_c_11), u_1), term_g_11);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
      }
  }
  return(t);
}
static ATerm k_6 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm x_1 = NULL;
  t = SSL_write_term_to_stream_baf(p_38, q_38);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_1);
  return(t);
}
static ATerm l_6 (ATerm n_82 (ATerm), ATerm w_438, ATerm x_38, ATerm t)
{
  ATerm f_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_438, term_h_11);
  t = x_6(t);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, x_38);
  t = n_82(t);
  t = fclose_0_0(t);
  t = x_38;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if(match_cons(i_11, sym_Stream_1))
        {
          i_2 = ATgetArgument(i_11, 0);
        }
      else
        _fail(t);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(i_2, j_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL;
  h_2 = t;
  t = xtc_new_file_0_0(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_2, h_2);
  t = l_6(h_0, g_2, h_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_2);
  t = xtc_transform_file_2_0(y_94, z_94, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm s_37, ATerm t_37, ATerm t)
{
  t = SSL_execvp(s_37, t_37);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_3 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(s_3);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_11), m_0), term_k_11);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm n_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_3 = ATgetArgument(t, 0);
          t_3 = ATgetArgument(t, 1);
          u_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_3);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_3), term_o_11), n_1), term_n_11), s_3);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_71 (ATerm), ATerm t)
{
  ATerm x_3 = NULL;
  static ATerm s_0 (ATerm t)
  {
    t = b_71(t);
    if(((x_3 != NULL) && (x_3 != t)))
      _fail(t);
    else
      x_3 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(x_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_3 = NULL;
  z_3 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm r_11 = ATgetArgument(t, 0);
              if((z_3 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_19), term_u_18), term_o_18), term_f_18), term_y_17), term_u_17), term_q_17), term_m_17), term_d_17), term_y_16), term_q_16), term_g_16), term_b_16), term_x_15), term_o_15), term_i_15), term_c_15), term_w_14), term_o_14), term_i_14), term_z_13), term_r_13), term_k_13), term_z_12), term_t_12), term_h_12), term_c_12), term_v_11);
        t = fetch_elem_1_0(w_0, t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_4 = NULL,q_4 = NULL;
  e_4 = t;
  {
    ATerm f_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_19 = ATgetArgument(t, 0);
            q_4 = ATgetArgument(t, 1);
            {
              ATerm p_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_19);
        {
          ATerm q_19 = t;
          int r_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_2 = NULL,d_2 = NULL,e_2 = NULL;
              t = q_4;
              {
                ATerm s_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              b_2 = t;
              t = term_u_19;
              d_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_2), term_v_19);
              e_2 = t;
              t = SSL_printnl(d_2, e_2);
              t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATempty, b_2), term_v_19));
              LocalPopChoice(r_19);
            }
          else
            {
              t = q_19;
              t = e_4;
            }
        }
      }
    else
      {
        t = f_19;
        t = e_4;
      }
  }
  t = e_4;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL;
  c_5 = t;
  t = fork_0_0(t);
  b_5 = t;
  {
    ATerm w_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_5;
        t = s_81(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = w_19;
        t = SSL_waitpid(b_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_20 = ATgetArgument(t, 0);
            if(((ATgetType(i_20) != AT_INT) || (ATgetInt((ATermInt) i_20) != 0)))
              _fail(t);
            {
              ATerm j_20 = ATgetArgument(t, 1);
            }
            {
              ATerm k_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_5 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm g_5 = NULL,h_5 = NULL;
    g_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_5), g_5);
    t = g_7(not_null(e_5), g_5, t);
    h_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_5, h_5);
    return(t);
  }
  if(((e_5 != NULL) && (e_5 != t)))
    _fail(t);
  else
    e_5 = t;
  t = SSL_table_keys(e_5);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_5 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        m_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_5, term_b_18);
        t = geq_0_0(t);
        t = j_5;
        t = b_94(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = j_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm q_5 = NULL;
  q_5 = t;
  {
    ATerm o_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        s_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_5, term_z_14);
        t = geq_0_0(t);
        t = q_5;
        t = a_94(t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = o_20;
        t = q_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_5, term_n_12);
        t = geq_0_0(t);
        t = v_5;
        t = c_94(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = v_5;
      }
  }
  return(t);
}
static ATerm p_6 (ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm i_21, ATerm h_21, ATerm t)
{
  t = x_74(t);
  {
    static ATerm d_1 (ATerm t)
    {
      ATerm b_6 = NULL;
      b_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, b_6);
      t = w_74(t);
      return(t);
    }
    t = fetch_1_0(d_1, t);
  }
  t = h_21;
  return(t);
}
static ATerm q_6 (ATerm t_74 (ATerm), ATerm e_21, ATerm d_21, ATerm t)
{
  static ATerm f_8 (ATerm t)
  {
    ATerm u_7 = NULL,y_7 = NULL,a_8 = NULL;
    u_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_7 = ATgetFirst((ATermList) t);
            a_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_7;
              {
                static ATerm f_1 (ATerm t)
                {
                  t = d_21;
                  return(t);
                }
                t = p_6(t_74, f_1, y_7, a_8, t);
              }
              t = f_8(t);
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              {
                ATerm o_2 = NULL,t_2 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(u_7);
                o_2 = t;
                t = a_8;
                t = f_8(t);
                t_2 = t;
                t = (ATerm) ATinsert(CheckATermList(t_2), y_7);
                q_2 = t;
                t = SSLsetAnnotations(q_2, o_2);
              }
            }
        }
      }
    return(t);
  }
  t = e_21;
  t = f_8(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      if((t_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm k_28, ATerm l_28, ATerm m_28, ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_20 = ATgetArgument(t, 0);
            ATerm b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
        t = g_7(k_28, l_28, t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = (ATerm) ATempty;
      }
  }
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_8, m_28);
  t = q_6(g_1, k_8, m_28, t);
  j_8 = t;
  t = SSL_table_put(k_28, l_28, j_8);
  t = i_8;
  return(t);
}
static ATerm s_6 (ATerm b_79 (ATerm), ATerm u_28, ATerm t_28, ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    ATerm v_8 = NULL,y_8 = NULL;
    if(match_cons(t, sym__2))
      {
        v_8 = ATgetArgument(t, 0);
        y_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_28, v_8, y_8);
    t = b_79(t);
    return(t);
  }
  t = t_28;
  t = map_1_0(k_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_c_21;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL,c_9 = NULL;
      b_9 = t;
      t = (ATerm) ATinsert(ATempty, term_l_21);
      c_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_9, (ATerm) ATinsert(ATempty, term_l_21));
      t = y_6(b_9, c_9, t);
      LocalPopChoice(j_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_21 = t;
            if((PushChoice() == 0))
              {
                ATerm f_9 = NULL,g_9 = NULL;
                f_9 = t;
                t = (ATerm) ATinsert(ATempty, term_p_21);
                g_9 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_9, (ATerm) ATinsert(ATempty, term_p_21));
                t = y_6(f_9, g_9, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_21;
              }
            t = debug_1_0(l_1, t);
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            t = debug_1_0(m_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_q_21;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,f_10 = NULL;
  z_9 = t;
  t = term_u_19;
  a_10 = t;
  t = (ATerm) ATinsert(ATempty, term_s_21);
  f_10 = t;
  t = SSL_printnl(a_10, f_10);
  t = z_9;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm h_10 = NULL,k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__3))
    {
      h_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
      l_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_6(h_10, k_10, l_10, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm m_10 = NULL,q_10 = NULL,r_10 = NULL;
  m_10 = t;
  t = term_u_19;
  q_10 = t;
  t = (ATerm) ATinsert(ATempty, term_t_21);
  r_10 = t;
  t = SSL_printnl(q_10, r_10);
  t = m_10;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  t = term_u_19;
  v_10 = t;
  t = (ATerm) ATinsert(ATempty, term_s_21);
  w_10 = t;
  t = SSL_printnl(v_10, w_10);
  t = u_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_9 = NULL,k_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  h_9 = t;
  t = if_verbose5_1_0(p_1, t);
  {
    ATerm u_21 = t;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL,y_9 = NULL;
        t = term_v_21;
        w_9 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_9);
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATmakeAppl(sym_Imported_1, h_9));
        t = g_7(w_9, y_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_21;
      }
  }
  m_9 = t;
  t = term_v_21;
  r_9 = t;
  t = term_w_21;
  s_9 = t;
  t = (ATerm) ATinsert(ATempty, h_9);
  t_9 = t;
  t = SSL_table_put(r_9, s_9, t_9);
  t = m_9;
  t = if_verbose4_1_0(t_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(w_1, t);
  k_9 = t;
  t = term_v_21;
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, k_9);
  t = s_6(y_1, q_9, k_9, t);
  t = if_verbose6_1_0(z_1, t);
  t = term_v_21;
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, h_9);
  o_9 = t;
  t = (ATerm) ATempty;
  p_9 = t;
  t = SSL_table_put(n_9, o_9, p_9);
  t = (ATerm) ATmakeAppl(sym__3, term_v_21, (ATerm)ATmakeAppl(sym_Imported_1, h_9), (ATerm) ATempty);
  t = if_verbose4_1_0(a_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_12 = ATgetFirst((ATermList) t);
          b_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 = NULL,n_3 = NULL,y_3 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(z_11);
            i_3 = t;
            t = a_12;
            t = c_79(t);
            n_3 = t;
            t = b_12;
            t = filter_1_0(c_79, t);
            y_3 = t;
            t = (ATerm) ATinsert(CheckATermList(y_3), n_3);
            z_2 = t;
            t = SSLsetAnnotations(z_2, i_3);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = b_12;
            t = filter_1_0(c_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t)
{
  static ATerm j_12 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_68(t);
        t = j_12(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = v_68(t);
      }
    return(t);
  }
  t = j_12(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_22;
      t = get_config_0_0(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm e_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_12 = NULL;
            t = term_i_22;
            k_12 = t;
            t = SSL_getenv(k_12);
            LocalPopChoice(h_22);
          }
        else
          {
            t = e_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  t = term_v_21;
  u_12 = t;
  t = term_k_22;
  v_12 = t;
  t = term_l_22;
  t = g_7(u_12, v_12, t);
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
  ATerm o_12 = NULL;
  t = if_verbose5_1_0(c_2, t);
  o_12 = t;
  {
    ATerm o_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_12 = NULL,q_12 = NULL;
        t = term_v_21;
        p_12 = t;
        t = term_w_21;
        q_12 = t;
        t = term_r_22;
        t = g_7(p_12, q_12, t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = o_22;
        {
          ATerm r_12 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_12 = t;
          t = repeat_2_0(l_2, _id, t);
          t = r_12;
        }
      }
  }
  t = o_12;
  t = if_verbose5_1_0(m_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm y_13 (ATerm a_13, ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  t = term_v_21;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, a_13);
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATmakeAppl(sym_Tool_1, a_13));
  t = g_7(d_13, e_13, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_22 = ATgetFirst((ATermList) t);
      if(match_cons(w_22, sym__2))
        {
          ATerm d_23 = ATgetArgument(w_22, 0);
          c_13 = ATgetArgument(w_22, 1);
        }
      else
        _fail(t);
      {
        ATerm a_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_13;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_v_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      h_13 = t;
      if(match_cons(t, sym__2))
        {
          f_13 = ATgetArgument(t, 0);
          g_13 = ATgetArgument(t, 1);
          {
            ATerm j_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
                t = term_v_21;
                p_13 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, f_13);
                q_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATmakeAppl(sym_Tool_1, f_13));
                t = g_7(p_13, q_13, t);
                {
                  static ATerm s_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((g_13 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((o_13 != NULL) && (o_13 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          o_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_2, t);
                }
                t = not_null(o_13);
                LocalPopChoice(k_23);
              }
            else
              {
                t = j_23;
                t = y_13(h_13, t);
              }
          }
        }
      else
        {
          t = y_13(h_13, t);
        }
      t = if_verbose5_1_0(u_2, t);
      LocalPopChoice(h_23);
    }
  else
    {
      t = f_23;
      {
        ATerm v_13 = NULL,l_4 = NULL,m_4 = NULL;
        v_13 = t;
        t = term_u_19;
        l_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_23), v_13), term_m_23);
        m_4 = t;
        t = SSL_printnl(l_4, m_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_23), v_13), term_m_23);
        t = if_verbose5_1_0(w_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,e_14 = NULL;
  e_14 = t;
  t = z_95(t);
  t = xtc_find_0_0(t);
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_14, e_14);
  {
    static ATerm y_2 (ATerm t)
    {
      ATerm n_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_14, e_14);
      t = m_6(c_14, e_14, t);
      t = term_p_23;
      n_14 = t;
      t = SSL_exit(n_14);
      return(t);
    }
    t = fork_and_wait_1_0(y_2, t);
  }
  t = e_14;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  s_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_14 = NULL,v_14 = NULL;
      t = s_14;
      t = xtc_new_file_0_0(t);
      u_14 = t;
      t = v_0(t);
      v_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATinsert(ATempty, u_14), term_q_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_14);
    }
  else
    {
      ATerm x_14 = NULL,a_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_14;
      t = xtc_new_file_0_0(t);
      x_14 = t;
      t = v_0(t);
      a_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_14), term_q_23), t_14), term_s_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_14);
    }
  return(t);
}
static ATerm v_15 (ATerm e_15, ATerm t)
{
  t = e_15;
  {
    ATerm t_23 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_23 = ATgetArgument(t, 0);
            ATerm v_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_23;
      }
  }
  t = term_w_23;
  t = debug_1_0(a_3, t);
  t = (ATerm) ATmakeAppl(sym__2, e_15, term_h_11);
  t = open_file_0_0(t);
  return(t);
}
static ATerm w_15 (ATerm h_15, ATerm m_15, ATerm n_15, ATerm t)
{
  t = SSL_open_file(h_15, m_15);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,u_15 = NULL;
  q_15 = t;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_15(q_15, t);
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            t = w_15(r_15, u_15, q_15, t);
          }
      }
    }
  else
    {
      t = v_15(q_15, t);
    }
  return(t);
}
static ATerm u_6 (ATerm t_78 (ATerm), ATerm j_26, ATerm h_26, ATerm t)
{
  ATerm f_16 = NULL,h_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  t = t_78(t);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_16, j_26, h_26);
  t = h_7(f_16, j_26, h_26, t);
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_16 = NULL;
        t = term_e_24;
        n_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_16, term_e_24);
        t = g_7(f_16, n_16, t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_16 = ATgetFirst((ATermList) t);
      j_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_e_24;
  l_16 = t;
  t = (ATerm) ATinsert(CheckATermList(j_16), (ATerm) ATinsert(CheckATermList(h_16), j_26));
  m_16 = t;
  t = SSL_table_put(f_16, l_16, m_16);
  t = k_16;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,a_17 = NULL,f_17 = NULL,g_17 = NULL,i_17 = NULL;
  t = P__tmpdir_0_0(t);
  v_16 = t;
  t = term_j_24;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_16, term_j_24);
  t = f_7(v_16, i_17, t);
  f_17 = t;
  t = term_k_24;
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_17, term_k_24);
  t = f_7(f_17, g_17, t);
  a_17 = t;
  t = SSL_mkstemp(a_17);
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_d_8;
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_16, term_d_8);
  t = u_6(c_3, t_16, u_16, t);
  t = SSL_close(s_16);
  t = t_16;
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  j_17 = t;
  t = xtc_new_file_0_0(t);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_17, term_h_11);
  t = open_file_0_0(t);
  t = SSL_print(k_17, j_17);
  t = SSL_close_file(k_17);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_17);
  return(t);
}
static ATerm g_18 (ATerm a_18, ATerm t)
{
  t = SSL_fclose(a_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  e_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_18 = ATgetArgument(t, 0);
      {
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_18);
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
            t = g_18(e_18, t);
          }
      }
    }
  else
    {
      t = g_18(e_18, t);
    }
  return(t);
}
static ATerm v_6 (ATerm v_38, ATerm t)
{
  t = SSL_read_term_from_stream(v_38);
  return(t);
}
static ATerm w_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  ATerm h_18 = NULL;
  t = SSL_fopen(f_14, g_14);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_18 = NULL;
  t = SSL_stdin_stream();
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_stdout_stream();
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_18 = NULL;
  t = SSL_stderr_stream();
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_18);
  return(t);
}
static ATerm b_20 (ATerm r_18, ATerm t)
{
  ATerm s_18 = NULL;
  t = SSL_explode_term(r_18);
  if(match_cons(t, sym__2))
    {
      ATerm n_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_24 = ATgetArgument(t, 1);
        if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
          {
            s_18 = ATgetFirst((ATermList) p_24);
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
  t = s_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_20 (ATerm v_18, ATerm w_18, ATerm x_18, ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,b_19 = NULL,g_19 = NULL,b_3 = NULL;
  t = SSLgetAnnotations(x_18);
  b_19 = t;
  t = v_18;
  if(match_cons(t, sym_Path_1))
    {
      g_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_19, w_18);
  b_3 = t;
  t = SSLsetAnnotations(b_3, b_19);
  if(match_cons(t, sym__2))
    {
      y_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(y_18, z_18, t);
  return(t);
}
static ATerm d_20 (ATerm i_19, ATerm j_19, ATerm k_19, ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,t_19 = NULL,d_3 = NULL;
  t = SSLgetAnnotations(k_19);
  n_19 = t;
  t = SSL_is_string(i_19);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, j_19);
  d_3 = t;
  t = SSLsetAnnotations(d_3, n_19);
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(l_19, m_19, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,a_20 = NULL;
  x_19 = t;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_20(x_19, t);
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_20(z_19, a_20, x_19, t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  t = d_20(z_19, a_20, x_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_20(x_19, t);
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_20 = NULL;
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_20, term_i_25);
      t = x_6(t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      t = debug_1_0(e_3, t);
      _fail(t);
    }
  f_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(g_20, t);
  e_20 = t;
  t = f_20;
  t = fclose_0_0(t);
  t = e_20;
  return(t);
}
static ATerm y_6 (ATerm w_13, ATerm x_13, ATerm t)
{
  t = SSL_access(w_13, x_13);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm n_20 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_j_25;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_21);
      p_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_20, (ATerm) ATinsert(ATempty, term_p_21));
      t = y_6(n_20, p_20, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = b_95(t);
  t = print_to_0_0(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm v_20 = NULL,z_20 = NULL,a_21 = NULL;
  a_21 = t;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_21 = ATgetArgument(t, 0);
            {
              ATerm k_5 = NULL,g_3 = NULL;
              t = SSLgetAnnotations(a_21);
              k_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_21);
              g_3 = t;
              t = SSLsetAnnotations(g_3, k_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_21;
          }
        LocalPopChoice(p_25);
        t = xtc_transform_file_2_0(h_3, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = o_25;
        t = xtc_transform_term_2_0(j_3, create_abox2latex_args_0_0, t);
      }
  }
  v_20 = t;
  t = term_t_25;
  t = create_header_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_20), z_20);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(f_3, t);
  return(t);
}
static ATerm z_6 (ATerm q_34, ATerm r_34, ATerm t)
{
  t = SSL_copy(q_34, r_34);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  f_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL;
        t = f_22;
        t = r_0(t);
        c_6 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = c_6;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = c_6;
          }
        t = (ATerm) ATmakeAppl(sym__2, g_22, c_6);
        t = z_6(g_22, c_6, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm x_25 = t;
          int z_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_7 = NULL;
              t = f_22;
              t = r_0(t);
              i_7 = t;
              {
                ATerm a_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_7 = NULL;
                    k_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = k_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = k_7;
                          }
                        else
                          {
                            t = k_7;
                            if((g_22 != t))
                              {
                                _fail(t);
                              }
                            t = k_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_26;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_22, i_7);
              t = z_6(g_22, i_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
              LocalPopChoice(z_25);
            }
          else
            {
              t = x_25;
              t = f_22;
              t = r_0(t);
              if((g_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
            }
        }
      }
  }
  return(t);
}
static ATerm a_7 (ATerm s_27, ATerm t_27, ATerm t)
{
  ATerm p_22 = NULL,s_22 = NULL;
  s_22 = t;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
        t = g_7(s_27, t_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_26 = ATgetFirst((ATermList) t);
            p_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_26);
        t = SSL_table_put(s_27, t_27, p_22);
        t = (ATerm) ATmakeAppl(sym__3, s_27, t_27, p_22);
      }
    else
      {
        t = b_26;
        t = SSL_table_remove(s_27, t_27);
        t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
      }
  }
  t = s_22;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  y_22 = t;
  t = q_78(t);
  x_22 = t;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL;
        t = term_e_24;
        b_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_22, term_e_24);
        t = g_7(x_22, b_23, t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_22 = ATgetFirst((ATermList) t);
      u_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_e_24;
  z_22 = t;
  t = SSL_table_put(x_22, z_22, u_22);
  t = v_22;
  {
    static ATerm k_3 (ATerm t)
    {
      ATerm c_23 = NULL;
      c_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_22, c_23);
      t = a_7(x_22, c_23, t);
      return(t);
    }
    t = map_1_0(k_3, t);
  }
  t = y_22;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t)
{
  ATerm g_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_68(t);
      t = q_68(t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = g_26;
      t = q_68(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,i_23 = NULL,l_23 = NULL,n_23 = NULL,r_23 = NULL;
  i_23 = t;
  t = p_78(t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_23, term_e_24);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_26 = ATgetArgument(t, 0);
            ATerm q_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_24;
        y_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_23, term_e_24);
        t = g_7(g_23, y_23, t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATempty;
      }
  }
  l_23 = t;
  t = term_e_24;
  n_23 = t;
  t = (ATerm) ATinsert(CheckATermList(l_23), (ATerm) ATempty);
  r_23 = t;
  t = SSL_table_put(g_23, n_23, r_23);
  t = i_23;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(o_24);
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = o_24;
      }
  }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm d_24 = NULL;
  static ATerm o_3 (ATerm t)
  {
    ATerm g_24 = NULL;
    g_24 = t;
    {
      ATerm t_26 = t;
      int u_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_24 = NULL,i_24 = NULL;
          t = term_f_24;
          h_24 = t;
          t = term_e_24;
          i_24 = t;
          t = term_v_26;
          t = g_7(h_24, i_24, t);
          LocalPopChoice(u_26);
        }
      else
        {
          t = t_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_24 != NULL) && (d_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_24 = ATgetFirst((ATermList) t);
        {
          ATerm w_26 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_24;
    t = map_1_0(q_3, t);
    t = g_24;
    t = end_scope_1_0(w_3, t);
    return(t);
  }
  t = begin_scope_1_0(m_3, t);
  t = restore_always_2_0(l_95, o_3, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_23;
      t = get_config_0_0(t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = term_z_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  static ATerm a_4 (ATerm t)
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_24 = NULL;
        t = term_s_23;
        t = get_config_0_0(t);
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_24);
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = term_j_25;
      }
    t = m_95(t);
    t = copy_to_1_0(b_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(a_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_24 = NULL,z_24 = NULL,a_25 = NULL,d_25 = NULL,e_25 = NULL;
  s_24 = t;
  t = term_d_8;
  t = whoami_0_0(t);
  z_24 = t;
  t = term_u_19;
  d_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), z_24), term_c_27);
  e_25 = t;
  t = SSL_printnl(d_25, e_25);
  t = term_v_9;
  a_25 = t;
  t = SSL_exit(a_25);
  t = s_24;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
      t = term_d_8;
      t = p_0(t);
      q_25 = t;
      t = term_i_27;
      r_25 = t;
      t = term_j_27;
      s_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_27, term_j_27, q_25);
      t = h_7(r_25, s_25, q_25, t);
      _fail(t);
    }
  else
    {
      ATerm y_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_25 = ATgetFirst((ATermList) t);
          l_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_25 = ATgetFirst((ATermList) t);
          n_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_25;
      t = n_0(t);
      t = m_25;
      t = o_0(t);
      y_25 = t;
      t = (ATerm) ATinsert(CheckATermList(n_25), y_25);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_71 (ATerm), ATerm t)
{
  static ATerm h_27 (ATerm t)
  {
    ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
    g_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_27 = ATgetFirst((ATermList) t);
        f_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_7 = NULL,e_8 = NULL,l_3 = NULL;
          t = SSLgetAnnotations(g_27);
          x_7 = t;
          t = f_27;
          t = h_27(t);
          e_8 = t;
          t = (ATerm) ATinsert(CheckATermList(e_8), e_27);
          l_3 = t;
          t = SSLsetAnnotations(l_3, x_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_27;
        t = f_71(t);
      }
    return(t);
  }
  t = h_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_26;
    }
  else
    {
      static ATerm c_4 (ATerm t)
      {
        t = not_null(o_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_26 = ATgetFirst((ATermList) t);
          if(((o_26 != NULL) && (o_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_26;
      t = at_end_1_0(c_4, t);
    }
  return(t);
}
static ATerm a_28 (ATerm l_27, ATerm t)
{
  ATerm p_27 = NULL;
  t = SSL_explode_term(l_27);
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_27;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  x_27 = t;
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_4 (ATerm t)
            {
              t = w_27;
              return(t);
            }
            t = v_27;
            t = at_end_1_0(d_4, t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            t = a_28(x_27, t);
          }
      }
    }
  else
    {
      t = a_28(x_27, t);
    }
  return(t);
}
static ATerm b_7 (ATerm z_45, ATerm y_45, ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,f_28 = NULL;
  t = z_45;
  {
    ATerm u_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATempty;
      }
  }
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_45, c_28);
  t = conc_0_0(t);
  b_28 = t;
  t = term_z_27;
  f_28 = t;
  t = SSL_table_put(f_28, z_45, b_28);
  t = (ATerm) ATmakeAppl(sym__3, term_z_27, z_45, b_28);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  if(match_string(t, "-k"))
    {
      t = h_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_28;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,q_28 = NULL;
  i_28 = t;
  t = SSL_string_to_int(i_28);
  j_28 = t;
  t = term_d_28;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_28, j_28);
  t = j_7(q_28, j_28, t);
  t = i_28;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, i_4, j_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  if(match_string(t, "-S"))
    {
      t = s_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_28;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  t = term_j_9;
  y_28 = t;
  t = term_g_28;
  z_28 = t;
  t = term_n_28;
  t = j_7(y_28, z_28, t);
  t = term_o_28;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  t = SSL_string_to_int(a_29);
  b_29 = t;
  t = term_j_9;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, b_29);
  t = j_7(c_29, b_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_29);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_r_28;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm d_29 = NULL,g_29 = NULL;
  t = term_v_28;
  d_29 = t;
  t = term_d_8;
  g_29 = t;
  t = term_w_28;
  t = j_7(d_29, g_29, t);
  t = term_x_28;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, o_4, p_4, t);
      LocalPopChoice(m_29);
    }
  else
    {
      t = k_29;
      {
        ATerm n_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, s_4, t_4, t);
            LocalPopChoice(r_29);
          }
        else
          {
            t = n_29;
            t = Option_3_0(u_4, v_4, w_4, t);
          }
      }
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "-o"))
    {
      t = i_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_29;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm j_29 = NULL,l_29 = NULL;
  j_29 = t;
  t = term_q_23;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, j_29);
  t = j_7(l_29, j_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_29);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  if(match_string(t, "-i"))
    {
      t = o_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_29;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL;
  p_29 = t;
  t = term_s_23;
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, p_29);
  t = j_7(q_29, p_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_29);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, d_5, f_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  t = term_c_8;
  y_29 = t;
  t = (ATerm) ATinsert(ATempty, x_29);
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, x_29));
  t = b_7(y_29, z_29, t);
  t = x_29;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm a_30 = NULL,c_30 = NULL;
  a_30 = t;
  t = term_f_11;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, a_30);
  t = j_7(c_30, a_30, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm w_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = w_29;
      {
        ATerm g_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(i_30);
          }
        else
          {
            t = g_30;
            {
              ATerm j_30 = t;
              int k_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(k_30);
                }
              else
                {
                  t = j_30;
                  {
                    ATerm o_30 = t;
                    int p_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(p_30);
                      }
                    else
                      {
                        t = o_30;
                        {
                          ATerm r_30 = t;
                          int s_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(i_5, l_5, n_5, t);
                              LocalPopChoice(s_30);
                            }
                          else
                            {
                              t = r_30;
                              t = ArgOption_3_0(o_5, p_5, r_5, t);
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
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,h_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_8;
  t = whoami_0_0(t);
  d_30 = t;
  t = term_u_19;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_30), d_30);
  h_30 = t;
  t = SSL_printnl(f_30, h_30);
  t = term_v_9;
  e_30 = t;
  t = SSL_exit(e_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_30;
  t = get_config_0_0(t);
  return(t);
}
static ATerm c_7 (ATerm v_24, ATerm w_24, ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_24, w_24);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      t = SSL_addr(v_24, w_24);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_30;
      t = h_77(t);
    }
  else
    {
      ATerm q_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_30;
      t = foldr_2_0(h_77, i_77, t);
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_30, q_30);
      t = i_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_g_28;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(x_8, z_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_30 = NULL,r_8 = NULL,s_8 = NULL;
  t = times_0_0(t);
  s_8 = t;
  t = SSL_explode_term(s_8);
  if(match_cons(t, sym__2))
    {
      ATerm y_30 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  t = foldr_2_0(t_5, u_5, t);
  u_30 = t;
  t = SSL_TicksToSeconds(u_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  if(match_cons(t, sym__2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_31;
        if((k_31 != t))
          {
            _fail(t);
          }
        t = j_31;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
        {
          ATerm b_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_31, l_31);
              LocalPopChoice(c_31);
            }
          else
            {
              t = b_31;
              t = SSL_gtr(k_31, l_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm w_31 = NULL;
  w_31 = t;
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_32 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        a_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_32, term_v_9);
        t = geq_0_0(t);
        t = w_31;
        t = x_93(t);
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = w_31;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm c_32 = NULL,f_32 = NULL,h_32 = NULL,l_32 = NULL;
  t = run_time_0_0(t);
  c_32 = t;
  t = term_d_8;
  t = whoami_0_0(t);
  f_32 = t;
  t = term_u_19;
  h_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_31), c_32), term_n_11), f_32);
  l_32 = t;
  t = SSL_printnl(h_32, l_32);
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_31), c_32), term_n_11), f_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_28;
  p_32 = t;
  t = SSL_exit(p_32);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL;
  y_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_32 = ATgetArgument(t, 0);
          {
            ATerm d_10 = NULL,p_3 = NULL;
            t = SSLgetAnnotations(y_32);
            d_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_32);
            p_3 = t;
            t = SSLsetAnnotations(p_3, d_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_64 (ATerm), ATerm t)
{
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_31;
      t = get_config_0_0(t);
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      t = fetch_1_0(x_5, t);
    }
  t = d_64(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_33 = ATgetFirst((ATermList) t);
      c_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_33 = NULL,h_33 = NULL;
        static ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_33)), not_null(h_33));
          return(t);
        }
        t = c_33;
        t = l_0(t);
        if(((g_33 != NULL) && (g_33 != t)))
          _fail(t);
        else
          g_33 = t;
        t = b_33;
        t = k_0(t);
        if(((h_33 != NULL) && (h_33 != t)))
          _fail(t);
        else
          h_33 = t;
        t = c_33;
        t = reverse_acc_2_0(k_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_8;
      t = l_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,v_3 = NULL;
  n_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_33);
  l_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_33);
  v_3 = t;
  t = SSLsetAnnotations(v_3, l_33);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_33), term_m_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL;
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_30;
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
  t = term_i_27;
  j_33 = t;
  t = term_j_27;
  k_33 = t;
  t = term_q_31;
  t = g_7(j_33, k_33, t);
  t = reverse_acc_2_0(_id, d_6, t);
  t = map_1_0(e_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  static ATerm o_34 (ATerm t)
  {
    ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
    l_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_34 = ATgetFirst((ATermList) t);
        n_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_31 = t;
      int s_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_10 = NULL,y_10 = NULL,g_4 = NULL;
          t = SSLgetAnnotations(l_34);
          s_10 = t;
          t = m_34;
          t = z_70(t);
          y_10 = t;
          t = (ATerm) ATinsert(CheckATermList(n_34), y_10);
          g_4 = t;
          t = SSLsetAnnotations(g_4, s_10);
          LocalPopChoice(s_31);
        }
      else
        {
          t = r_31;
          {
            ATerm j_11 = NULL,m_11 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(l_34);
            j_11 = t;
            t = n_34;
            t = o_34(t);
            m_11 = t;
            t = (ATerm) ATinsert(CheckATermList(m_11), m_34);
            h_4 = t;
            t = SSLsetAnnotations(h_4, j_11);
          }
        }
    }
    return(t);
  }
  t = o_34(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
  u_34 = t;
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_31 = ATgetFirst((ATermList) t);
                ATerm x_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_34;
          }
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATinsert(ATempty, u_34);
      }
  }
  v_34 = t;
  t = term_z_26;
  w_34 = t;
  t = SSL_printnl(w_34, v_34);
  t = u_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_7 (ATerm g_34, ATerm h_34, ATerm t)
{
  t = SSL_strcat(g_34, h_34);
  return(t);
}
ATerm debug_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  a_35 = t;
  t = l_82(t);
  b_35 = t;
  t = term_u_19;
  c_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_35), b_35);
  d_35 = t;
  t = SSL_printnl(c_35, d_35);
  t = a_35;
  return(t);
}
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm t)
{
  static ATerm s_35 (ATerm t)
  {
    ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
    p_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_35;
      }
    else
      {
        ATerm e_12 = NULL,i_12 = NULL,l_12 = NULL,n_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_35 = ATgetFirst((ATermList) t);
            r_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_35);
        e_12 = t;
        t = q_35;
        t = p_70(t);
        i_12 = t;
        t = r_35;
        t = s_35(t);
        l_12 = t;
        t = (ATerm) ATinsert(CheckATermList(l_12), i_12);
        n_4 = t;
        t = SSLsetAnnotations(n_4, e_12);
      }
    return(t);
  }
  t = s_35(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 = NULL;
      a_36 = t;
      t = SSL_is_string(a_36);
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      {
        ATerm g_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_6, t);
            LocalPopChoice(i_32);
          }
        else
          {
            t = g_32;
            {
              ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
              g_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_36 = ATgetArgument(t, 0);
                  t = h_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_36 = ATgetArgument(t, 0);
                      t = h_36;
                      {
                        ATerm j_32 = t;
                        int k_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_32);
                          }
                        else
                          {
                            t = j_32;
                            t = debug_1_0(g_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_36 = NULL,n_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_36 = ATgetArgument(t, 0);
                          i_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_36;
                      t = eval_config_0_0(t);
                      m_36 = t;
                      t = i_36;
                      t = eval_config_0_0(t);
                      n_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_36, n_36);
                      t = f_7(m_36, n_36, t);
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
  ATerm r_36 = NULL,s_36 = NULL;
  r_36 = t;
  t = term_z_27;
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_27, r_36);
  t = g_7(s_36, r_36, t);
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_36 = NULL,u_36 = NULL;
        t = eval_config_0_0(t);
        t_36 = t;
        t = term_z_27;
        u_36 = t;
        t = SSL_table_put(u_36, r_36, t_36);
        t = t_36;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
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
static ATerm n_6 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  t = term_o_32;
  x_36 = t;
  t = term_d_8;
  y_36 = t;
  t = term_q_32;
  t = j_7(x_36, y_36, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_r_32;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  t = term_o_32;
  b_37 = t;
  t = term_d_8;
  c_37 = t;
  t = term_q_32;
  t = j_7(b_37, c_37, t);
  t = term_s_32;
  z_36 = t;
  t = term_d_8;
  a_37 = t;
  t = term_t_32;
  t = j_7(z_36, a_37, t);
  t = term_u_32;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_6, n_6, t_6, t);
      LocalPopChoice(z_32);
    }
  else
    {
      t = w_32;
      t = Option_3_0(e_7, l_7, m_7, t);
    }
  return(t);
}
static ATerm j_7 (ATerm t_45, ATerm u_45, ATerm t)
{
  ATerm d_37 = NULL;
  t = term_z_27;
  d_37 = t;
  t = SSL_table_put(d_37, t_45, u_45);
  t = (ATerm) ATmakeAppl(sym__3, term_z_27, t_45, u_45);
  return(t);
}
static ATerm g_7 (ATerm e_29, ATerm f_29, ATerm t)
{
  t = SSL_table_get(e_29, f_29);
  return(t);
}
static ATerm h_7 (ATerm n_27, ATerm o_27, ATerm m_27, ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
  {
    ATerm a_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_33 = ATgetArgument(t, 0);
            ATerm f_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
        t = g_7(n_27, o_27, t);
        LocalPopChoice(d_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATempty;
      }
  }
  g_37 = t;
  t = (ATerm) ATinsert(CheckATermList(g_37), m_27);
  h_37 = t;
  t = SSL_table_put(n_27, o_27, h_37);
  t = f_37;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
      t = term_d_8;
      t = i_0(t);
      p_37 = t;
      t = term_i_27;
      q_37 = t;
      t = term_j_27;
      r_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_27, term_j_27, p_37);
      t = h_7(q_37, r_37, p_37, t);
      _fail(t);
    }
  else
    {
      ATerm x_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_37 = ATgetFirst((ATermList) t);
          o_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_37;
      t = d_0(t);
      t = term_d_8;
      t = g_0(t);
      x_37 = t;
      t = (ATerm) ATinsert(CheckATermList(o_37), x_37);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,h_6 = NULL;
  h_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_38 = ATgetFirst((ATermList) t);
      e_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_38);
  y_37 = t;
  t = d_38;
  t = o_57(t);
  f_38 = t;
  t = e_38;
  t = p_57(t);
  g_38 = t;
  t = (ATerm) ATinsert(CheckATermList(g_38), f_38);
  h_6 = t;
  t = SSLsetAnnotations(h_6, y_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,r_38 = NULL,t_38 = NULL,u_38 = NULL,o_6 = NULL;
  m_38 = t;
  {
    ATerm i_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_33;
        t = u_84(t);
        LocalPopChoice(o_33);
      }
    else
      {
        t = i_33;
      }
  }
  t = m_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_38 = ATgetFirst((ATermList) t);
      r_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_38);
  n_38 = t;
  t = term_v_30;
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_30, o_38);
  t = j_7(u_38, o_38, t);
  t = r_38;
  {
    static ATerm h_39 (ATerm t)
    {
      ATerm r_33 = t;
      int s_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_39 = NULL;
              a_39 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_39;
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              t = u_84(t);
              t = Cons_2_0(_id, h_39, t);
            }
          LocalPopChoice(s_33);
        }
      else
        {
          t = r_33;
          {
            ATerm d_39 = NULL,e_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_39 = ATgetFirst((ATermList) t);
                e_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_39), (ATerm) ATmakeAppl(sym_Undefined_1, d_39));
          }
        }
      return(t);
    }
    t = h_39(t);
  }
  t_38 = t;
  t = (ATerm) ATinsert(CheckATermList(t_38), (ATerm) ATmakeAppl(sym_Program_1, o_38));
  o_6 = t;
  t = SSLsetAnnotations(o_6, n_38);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm t_39 = NULL;
  t_39 = t;
  if(match_string(t, "--help"))
    {
      t = t_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_39;
        }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  t = term_i_31;
  z_39 = t;
  t = term_d_8;
  a_40 = t;
  t = term_v_33;
  t = j_7(z_39, a_40, t);
  t = term_w_33;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_x_33;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  o_39 = t;
  t = term_i_27;
  q_39 = t;
  t = term_j_27;
  r_39 = t;
  t = (ATerm) ATempty;
  s_39 = t;
  t = SSL_table_put(q_39, r_39, s_39);
  t = o_39;
  {
    static ATerm n_7 (ATerm t)
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_84(t);
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          {
            ATerm a_34 = t;
            int b_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_7, p_7, q_7, t);
                LocalPopChoice(b_34);
              }
            else
              {
                t = a_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_7, t);
  }
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_40 = NULL;
        h_40 = t;
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_14 = NULL;
              t = h_40;
              {
                ATerm i_34 = t;
                int j_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_31;
                    t = get_config_0_0(t);
                    LocalPopChoice(j_34);
                  }
                else
                  {
                    t = i_34;
                    t = fetch_1_0(r_7, t);
                  }
              }
              t = h_40;
              t = default_system_usage_0_0(t);
              t = term_g_28;
              h_14 = t;
              t = SSL_exit(h_14);
              LocalPopChoice(f_34);
            }
          else
            {
              t = e_34;
              {
                ATerm l_14 = NULL;
                t = term_o_32;
                t = get_config_0_0(t);
                t = h_40;
                t = default_system_about_0_0(t);
                t = term_g_28;
                l_14 = t;
                t = SSL_exit(l_14);
              }
            }
        }
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm k_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_40 = NULL,k_40 = NULL,l_40 = NULL;
              static ATerm s_7 (ATerm t)
              {
                ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,d_7 = NULL;
                o_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_40);
                m_40 = t;
                t = n_40;
                if(((m_39 != NULL) && (m_39 != t)))
                  _fail(t);
                else
                  m_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_40);
                d_7 = t;
                t = SSLsetAnnotations(d_7, m_40);
                return(t);
              }
              t = fetch_1_0(s_7, t);
              t = term_u_19;
              k_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_39)), term_s_34);
              l_40 = t;
              t = SSL_printnl(k_40, l_40);
              t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_39)), term_s_34));
              t = default_system_usage_0_0(t);
              t = term_v_9;
              i_40 = t;
              t = SSL_exit(i_40);
              LocalPopChoice(p_34);
            }
          else
            {
              t = k_34;
            }
        }
      }
  }
  n_39 = t;
  t = term_i_27;
  p_39 = t;
  t = SSL_table_destroy(p_39);
  t = n_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  t = parse_options_1_0(f_64, t);
  t_40 = t;
  t = term_t_34;
  w_40 = t;
  t = SSL_table_create(w_40);
  t = term_t_34;
  u_40 = t;
  t = term_x_34;
  v_40 = t;
  t = SSL_table_put(u_40, v_40, t_40);
  t = t_40;
  t = h_64(t);
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_64, t);
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        {
          ATerm e_35 = t;
          int f_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_64(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_35);
            }
          else
            {
              t = e_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = xtc_io_1_0(abox2latex_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2latex_options_0_0, default_usage_0_0, _id, t_7, t);
  return(t);
}
