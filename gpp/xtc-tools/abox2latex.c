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
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_t_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_a_32;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_h_29;
ATerm term_d_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_d_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_a_25;
ATerm term_j_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_r_22;
ATerm term_q_22;
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
ATerm term_k_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
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
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_x_9;
ATerm term_l_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_x_7;
ATerm term_w_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_x_9, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_h_12, term_i_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_s_12, term_t_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_h_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_o_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_a_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_g_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_y_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_k_17, term_l_17);
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
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_c_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_m_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_a_19, term_c_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
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
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_w_21);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_e_24, term_d_24);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_j_28);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_f_8);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_k_27);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_f_8);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_f_8);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_f_8);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm j_6 (ATerm y_24, ATerm z_24, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm create_table_file_0_0 (ATerm t);
ATerm create_abox2latex_args_0_0 (ATerm t);
static ATerm k_6 (ATerm q_37, ATerm r_37, ATerm t);
static ATerm l_6 (ATerm j_81 (ATerm), ATerm c_431, ATerm y_37, ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm t);
static ATerm m_6 (ATerm t_36, ATerm u_36, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm c_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm o_80 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_92 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_92 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_92 (ATerm), ATerm t);
static ATerm p_6 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm h_21, ATerm g_21, ATerm t);
static ATerm q_6 (ATerm u_73 (ATerm), ATerm d_21, ATerm c_21, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm r_6 (ATerm l_27, ATerm m_27, ATerm n_27, ATerm t);
static ATerm s_6 (ATerm x_77 (ATerm), ATerm v_27, ATerm u_27, ATerm t);
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
ATerm filter_1_0 (ATerm y_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm a_14 (ATerm b_13, ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm v_94 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm b_16 (ATerm g_15, ATerm t);
static ATerm f_16 (ATerm m_15, ATerm n_15, ATerm o_15, ATerm t);
static ATerm z_2 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm u_6 (ATerm u_77 (ATerm), ATerm g_26, ATerm e_26, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm h_18 (ATerm b_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_6 (ATerm w_37, ATerm t);
static ATerm w_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_20 (ATerm s_18, ATerm t);
static ATerm d_20 (ATerm w_18, ATerm x_18, ATerm y_18, ATerm t);
static ATerm e_20 (ATerm j_19, ATerm k_19, ATerm l_19, ATerm t);
static ATerm x_6 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm y_6 (ATerm w_13, ATerm x_13, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm x_93 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm z_6 (ATerm r_33, ATerm s_33, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm t_26, ATerm u_26, ATerm t);
ATerm end_scope_1_0 (ATerm r_77 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_77 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_94 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm i_94 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm g_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_28 (ATerm b_28, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_7 (ATerm a_45, ATerm z_44, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
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
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm abox2latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_7 (ATerm s_24, ATerm t_24, ATerm t);
ATerm foldr_2_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_92 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm need_help_1_0 (ATerm e_63 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_7 (ATerm h_33, ATerm i_33, ATerm t);
ATerm debug_1_0 (ATerm h_81 (ATerm), ATerm t);
ATerm map_1_0 (ATerm q_69 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm j_7 (ATerm u_44, ATerm v_44, ATerm t);
static ATerm g_7 (ATerm f_28, ATerm g_28, ATerm t);
static ATerm h_7 (ATerm o_26, ATerm p_26, ATerm n_26, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_83 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm parse_options_1_0 (ATerm p_83 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm j_63 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), f_0), term_w_7);
  q_0 = t;
  t = SSL_concat_strings(q_0);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm b_0 = NULL;
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_8;
      t = get_config_0_0(t);
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
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
  t = term_f_8;
  t = tables2text_0_0(t);
  v_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_8), term_e_9), term_d_9), term_h_8), term_x_8), term_w_8), term_t_8), term_r_8), term_q_8), term_h_8), v_0), term_p_8), term_n_8), term_h_8), term_m_8), term_h_8), term_l_8), term_h_8);
  y_0 = t;
  t = SSL_concat_strings(y_0);
  return(t);
}
static ATerm j_6 (ATerm y_24, ATerm z_24, ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(y_24, z_24);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = SSL_subtr(y_24, z_24);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL;
  t = term_l_9;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = term_x_9;
      }
  }
  a_1 = t;
  t = term_x_9;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, term_x_9);
  t = j_6(a_1, c_1, t);
  b_1 = t;
  t = SSL_int_to_string(b_1);
  z_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_0), term_l_9);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm j_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      if(match_cons(b_10, sym_Stream_1))
        {
          j_1 = ATgetArgument(b_10, 0);
        }
      else
        _fail(t);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(j_1, q_1, t);
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm e_1 = NULL,h_1 = NULL,i_1 = NULL;
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_8;
      t = get_config_0_0(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  e_1 = t;
  t = (ATerm) ATinsert(CheckATermList(e_1), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_d_11), term_c_11)), (ATerm) ATinsert(ATinsert(ATempty, term_b_11), term_z_10)), (ATerm) ATinsert(ATinsert(ATempty, term_y_10), term_s_10)), (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_o_10)), (ATerm) ATinsert(ATinsert(ATempty, term_n_10), term_j_10)), (ATerm) ATinsert(ATinsert(ATempty, term_i_10), term_g_10)));
  t = concat_0_0(t);
  i_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, i_1);
  t = l_6(h_0, h_1, i_1, t);
  t = h_1;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL;
  t = term_f_8;
  t = create_table_file_0_0(t);
  s_1 = t;
  t = term_f_8;
  t = pass_verbose_0_0(t);
  t_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(t_1), s_1), term_e_11);
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        t = term_h_11;
        t = get_config_0_0(t);
        v_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(t_1), s_1), term_e_11), v_1), term_i_11);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
      }
  }
  return(t);
}
static ATerm k_6 (ATerm q_37, ATerm r_37, ATerm t)
{
  ATerm f_2 = NULL;
  t = SSL_write_term_to_stream_baf(q_37, r_37);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_2);
  return(t);
}
static ATerm l_6 (ATerm j_81 (ATerm), ATerm c_431, ATerm y_37, ATerm t)
{
  ATerm g_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_431, term_j_11);
  t = x_6(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_2, y_37);
  t = j_81(t);
  t = fclose_0_0(t);
  t = y_37;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(match_cons(l_11, sym_Stream_1))
        {
          j_2 = ATgetArgument(l_11, 0);
        }
      else
        _fail(t);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(j_2, k_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL;
  i_2 = t;
  t = xtc_new_file_0_0(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
  t = l_6(j_0, h_2, i_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_2);
  t = xtc_transform_file_2_0(u_93, v_93, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm t_36, ATerm u_36, ATerm t)
{
  t = SSL_execvp(t_36, u_36);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  s_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_3 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,s_0 = NULL;
        t = SSL_int_to_string(t_3);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_11), m_0), term_m_11);
        s_0 = t;
        t = SSL_concat_strings(s_0);
      }
    }
  else
    {
      ATerm m_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_3 = ATgetArgument(t, 0);
          u_3 = ATgetArgument(t, 1);
          v_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_3);
      m_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_3), term_q_11), m_1), term_p_11), t_3);
      n_1 = t;
      t = SSL_concat_strings(n_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_70 (ATerm), ATerm t)
{
  ATerm z_3 = NULL;
  static ATerm t_0 (ATerm t)
  {
    t = c_70(t);
    if(((z_3 != NULL) && (z_3 != t)))
      _fail(t);
    else
      z_3 = t;
    return(t);
  }
  t = fetch_1_0(t_0, t);
  t = not_null(z_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_4 = NULL;
  a_4 = t;
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_11 = ATgetArgument(t, 0);
              if((a_4 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm u_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_19), term_u_18), term_o_18), term_d_18), term_y_17), term_u_17), term_q_17), term_m_17), term_e_17), term_z_16), term_s_16), term_h_16), term_c_16), term_x_15), term_q_15), term_j_15), term_e_15), term_y_14), term_p_14), term_j_14), term_b_14), term_t_13), term_m_13), term_c_13), term_x_12), term_j_12), term_e_12), term_x_11);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_4 = NULL,r_4 = NULL;
  g_4 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            r_4 = ATgetArgument(t, 1);
            {
              ATerm o_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_19);
        {
          ATerm q_19 = t;
          int r_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
              t = r_4;
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
              a_2 = t;
              t = term_t_19;
              c_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_u_19);
              d_2 = t;
              t = SSL_printnl(c_2, d_2);
              t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_u_19));
              LocalPopChoice(r_19);
            }
          else
            {
              t = q_19;
              t = g_4;
            }
        }
      }
    else
      {
        t = f_19;
        t = g_4;
      }
  }
  t = g_4;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL;
  d_5 = t;
  t = fork_0_0(t);
  c_5 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_5;
        t = o_80(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = SSL_waitpid(c_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_19 = ATgetArgument(t, 0);
            if(((ATgetType(y_19) != AT_INT) || (ATgetInt((ATermInt) y_19) != 0)))
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
        t = d_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  static ATerm w_0 (ATerm t)
  {
    ATerm h_5 = NULL,i_5 = NULL;
    h_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), h_5);
    t = g_7(not_null(g_5), h_5, t);
    i_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
    return(t);
  }
  if(((g_5 != NULL) && (g_5 != t)))
    _fail(t);
  else
    g_5 = t;
  t = SSL_table_keys(g_5);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_a_18);
        t = geq_0_0(t);
        t = l_5;
        t = x_92(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = l_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  ATerm r_5 = NULL;
  r_5 = t;
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_5 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        t_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_5, term_c_15);
        t = geq_0_0(t);
        t = r_5;
        t = w_92(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = n_20;
        t = r_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_5, term_s_12);
        t = geq_0_0(t);
        t = x_5;
        t = y_92(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = x_5;
      }
  }
  return(t);
}
static ATerm p_6 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm h_21, ATerm g_21, ATerm t)
{
  t = y_73(t);
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm c_6 = NULL;
      c_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_21, c_6);
      t = x_73(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
  }
  t = g_21;
  return(t);
}
static ATerm q_6 (ATerm u_73 (ATerm), ATerm d_21, ATerm c_21, ATerm t)
{
  static ATerm g_8 (ATerm t)
  {
    ATerm y_7 = NULL,a_8 = NULL,b_8 = NULL;
    y_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_8 = ATgetFirst((ATermList) t);
            b_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_7;
              {
                static ATerm d_1 (ATerm t)
                {
                  t = c_21;
                  return(t);
                }
                t = p_6(u_73, d_1, a_8, b_8, t);
              }
              t = g_8(t);
              LocalPopChoice(u_20);
            }
          else
            {
              t = s_20;
              {
                ATerm o_2 = NULL,s_2 = NULL,r_2 = NULL;
                t = SSLgetAnnotations(y_7);
                o_2 = t;
                t = b_8;
                t = g_8(t);
                s_2 = t;
                t = (ATerm) ATinsert(CheckATermList(s_2), a_8);
                r_2 = t;
                t = SSLsetAnnotations(r_2, o_2);
              }
            }
        }
      }
    return(t);
  }
  t = d_21;
  t = g_8(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      if((v_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm l_27, ATerm m_27, ATerm n_27, ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,o_8 = NULL;
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            ATerm y_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
        t = g_7(l_27, m_27, t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = (ATerm) ATempty;
      }
  }
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_8, n_27);
  t = q_6(f_1, o_8, n_27, t);
  k_8 = t;
  t = SSL_table_put(l_27, m_27, k_8);
  t = j_8;
  return(t);
}
static ATerm s_6 (ATerm x_77 (ATerm), ATerm v_27, ATerm u_27, ATerm t)
{
  static ATerm g_1 (ATerm t)
  {
    ATerm y_8 = NULL,b_9 = NULL;
    if(match_cons(t, sym__2))
      {
        y_8 = ATgetArgument(t, 0);
        b_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_27, y_8, b_9);
    t = x_77(t);
    return(t);
  }
  t = u_27;
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 = NULL,f_9 = NULL;
      c_9 = t;
      t = (ATerm) ATinsert(ATempty, term_k_21);
      f_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_9, (ATerm) ATinsert(ATempty, term_k_21));
      t = y_6(c_9, f_9, t);
      LocalPopChoice(j_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_21;
      {
        ATerm l_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_21 = t;
            if((PushChoice() == 0))
              {
                ATerm g_9 = NULL,h_9 = NULL;
                g_9 = t;
                t = (ATerm) ATinsert(ATempty, term_p_21);
                h_9 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_9, (ATerm) ATinsert(ATempty, term_p_21));
                t = y_6(g_9, h_9, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_21;
              }
            t = debug_1_0(k_1, t);
            LocalPopChoice(n_21);
          }
        else
          {
            t = l_21;
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
  t = term_q_21;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm a_10 = NULL,f_10 = NULL,h_10 = NULL;
  a_10 = t;
  t = term_t_19;
  f_10 = t;
  t = (ATerm) ATinsert(ATempty, term_s_21);
  h_10 = t;
  t = SSL_printnl(f_10, h_10);
  t = a_10;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__3))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
      m_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_6(k_10, l_10, m_10, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,u_10 = NULL;
  q_10 = t;
  t = term_t_19;
  r_10 = t;
  t = (ATerm) ATinsert(ATempty, term_t_21);
  u_10 = t;
  t = SSL_printnl(r_10, u_10);
  t = q_10;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  t = term_t_19;
  w_10 = t;
  t = (ATerm) ATinsert(ATempty, term_s_21);
  x_10 = t;
  t = SSL_printnl(w_10, x_10);
  t = v_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,w_9 = NULL;
  k_9 = t;
  t = if_verbose5_1_0(o_1, t);
  {
    ATerm u_21 = t;
    if((PushChoice() == 0))
      {
        ATerm y_9 = NULL,z_9 = NULL;
        t = term_v_21;
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_9);
        z_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATmakeAppl(sym_Imported_1, k_9));
        t = g_7(y_9, z_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_21;
      }
  }
  n_9 = t;
  t = term_v_21;
  s_9 = t;
  t = term_w_21;
  t_9 = t;
  t = (ATerm) ATinsert(ATempty, k_9);
  w_9 = t;
  t = SSL_table_put(s_9, t_9, w_9);
  t = n_9;
  t = if_verbose4_1_0(r_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(w_1, t);
  m_9 = t;
  t = term_v_21;
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, m_9);
  t = s_6(x_1, r_9, m_9, t);
  t = if_verbose6_1_0(y_1, t);
  t = term_v_21;
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, k_9);
  p_9 = t;
  t = (ATerm) ATempty;
  q_9 = t;
  t = SSL_table_put(o_9, p_9, q_9);
  t = (ATerm) ATmakeAppl(sym__3, term_v_21, (ATerm)ATmakeAppl(sym_Imported_1, k_9), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm y_77 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
  a_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_12;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_12 = ATgetFirst((ATermList) t);
          c_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 = NULL,m_3 = NULL,n_3 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(a_12);
            h_3 = t;
            t = b_12;
            t = y_77(t);
            m_3 = t;
            t = c_12;
            t = filter_1_0(y_77, t);
            n_3 = t;
            t = (ATerm) ATinsert(CheckATermList(n_3), m_3);
            a_3 = t;
            t = SSLsetAnnotations(a_3, h_3);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = c_12;
            t = filter_1_0(y_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm t)
{
  static ATerm k_12 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_67(t);
        t = k_12(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = w_67(t);
      }
    return(t);
  }
  t = k_12(t);
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
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_12 = NULL;
            t = term_i_22;
            n_12 = t;
            t = SSL_getenv(n_12);
            LocalPopChoice(f_22);
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
  ATerm v_12 = NULL,w_12 = NULL;
  t = term_v_21;
  v_12 = t;
  t = term_k_22;
  w_12 = t;
  t = term_l_22;
  t = g_7(v_12, w_12, t);
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
  ATerm p_12 = NULL;
  t = if_verbose5_1_0(b_2, t);
  p_12 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL,r_12 = NULL;
        t = term_v_21;
        q_12 = t;
        t = term_w_21;
        r_12 = t;
        t = term_q_22;
        t = g_7(q_12, r_12, t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm u_12 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_12 = t;
          t = repeat_2_0(l_2, _id, t);
          t = u_12;
        }
      }
  }
  t = p_12;
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
static ATerm a_14 (ATerm b_13, ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  t = term_v_21;
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_13);
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATmakeAppl(sym_Tool_1, b_13));
  t = g_7(e_13, f_13, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_22 = ATgetFirst((ATermList) t);
      if(match_cons(t_22, sym__2))
        {
          ATerm a_23 = ATgetArgument(t_22, 0);
          d_13 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      {
        ATerm w_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_13;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_r_22;
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
  t = term_d_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      i_13 = t;
      if(match_cons(t, sym__2))
        {
          g_13 = ATgetArgument(t, 0);
          h_13 = ATgetArgument(t, 1);
          {
            ATerm h_23 = t;
            int j_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
                t = term_v_21;
                q_13 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, g_13);
                r_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATmakeAppl(sym_Tool_1, g_13));
                t = g_7(q_13, r_13, t);
                {
                  static ATerm t_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((h_13 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((p_13 != NULL) && (p_13 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_2, t);
                }
                t = not_null(p_13);
                LocalPopChoice(j_23);
              }
            else
              {
                t = h_23;
                t = a_14(i_13, t);
              }
          }
        }
      else
        {
          t = a_14(i_13, t);
        }
      t = if_verbose5_1_0(u_2, t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = e_23;
      {
        ATerm y_13 = NULL,i_4 = NULL,l_4 = NULL;
        y_13 = t;
        t = term_t_19;
        i_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_23), y_13), term_k_23);
        l_4 = t;
        t = SSL_printnl(i_4, l_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_23), y_13), term_k_23);
        t = if_verbose5_1_0(w_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,m_14 = NULL;
  m_14 = t;
  t = v_94(t);
  t = xtc_find_0_0(t);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_14, m_14);
  {
    static ATerm y_2 (ATerm t)
    {
      ATerm q_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, e_14, m_14);
      t = m_6(e_14, m_14, t);
      t = term_o_23;
      q_14 = t;
      t = SSL_exit(q_14);
      return(t);
    }
    t = fork_and_wait_1_0(y_2, t);
  }
  t = m_14;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  t_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_14 = NULL,w_14 = NULL;
      t = t_14;
      t = xtc_new_file_0_0(t);
      v_14 = t;
      t = r_0(t);
      w_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_14, (ATerm) ATinsert(ATinsert(ATempty, v_14), term_p_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_14);
    }
  else
    {
      ATerm a_15 = NULL,b_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_14;
      t = xtc_new_file_0_0(t);
      a_15 = t;
      t = r_0(t);
      b_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_15), term_p_23), u_14), term_q_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_15);
    }
  return(t);
}
static ATerm b_16 (ATerm g_15, ATerm t)
{
  t = g_15;
  {
    ATerm s_23 = t;
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
        t = s_23;
      }
  }
  t = term_w_23;
  t = debug_1_0(z_2, t);
  t = (ATerm) ATmakeAppl(sym__2, g_15, term_j_11);
  t = open_file_0_0(t);
  return(t);
}
static ATerm f_16 (ATerm m_15, ATerm n_15, ATerm o_15, ATerm t)
{
  t = SSL_open_file(m_15, n_15);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm r_15 = NULL,u_15 = NULL,v_15 = NULL;
  r_15 = t;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_16(r_15, t);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = f_16(u_15, v_15, r_15, t);
          }
      }
    }
  else
    {
      t = b_16(r_15, t);
    }
  return(t);
}
static ATerm u_6 (ATerm u_77 (ATerm), ATerm g_26, ATerm e_26, ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  t = u_77(t);
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_16, g_26, e_26);
  t = h_7(i_16, g_26, e_26, t);
  {
    ATerm a_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_16 = NULL;
        t = term_d_24;
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_16, term_d_24);
        t = g_7(i_16, r_16, t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = a_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_16 = ATgetFirst((ATermList) t);
      k_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_24;
  m_16 = t;
  t = (ATerm) ATinsert(CheckATermList(k_16), (ATerm) ATinsert(CheckATermList(j_16), g_26));
  n_16 = t;
  t = SSL_table_put(i_16, m_16, n_16);
  t = l_16;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,a_17 = NULL,f_17 = NULL,g_17 = NULL,i_17 = NULL,j_17 = NULL;
  t = P__tmpdir_0_0(t);
  a_17 = t;
  t = term_f_24;
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, term_f_24);
  t = f_7(a_17, j_17, t);
  g_17 = t;
  t = term_j_24;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_17, term_j_24);
  t = f_7(g_17, i_17, t);
  f_17 = t;
  t = SSL_mkstemp(f_17);
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_8;
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_16, term_f_8);
  t = u_6(b_3, u_16, v_16, t);
  t = SSL_close(t_16);
  t = u_16;
  return(t);
}
static ATerm h_18 (ATerm b_18, ATerm t)
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
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_18);
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
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
static ATerm v_6 (ATerm w_37, ATerm t)
{
  t = SSL_read_term_from_stream(w_37);
  return(t);
}
static ATerm w_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  ATerm i_18 = NULL;
  t = SSL_fopen(f_14, g_14);
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_stdin_stream();
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_18 = NULL;
  t = SSL_stdout_stream();
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_18 = NULL;
  t = SSL_stderr_stream();
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_18);
  return(t);
}
static ATerm c_20 (ATerm s_18, ATerm t)
{
  ATerm t_18 = NULL;
  t = SSL_explode_term(s_18);
  if(match_cons(t, sym__2))
    {
      ATerm o_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_24 = ATgetArgument(t, 1);
        if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
          {
            t_18 = ATgetFirst((ATermList) p_24);
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
  t = t_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_20 (ATerm w_18, ATerm x_18, ATerm y_18, ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL,e_19 = NULL,h_19 = NULL,d_3 = NULL;
  t = SSLgetAnnotations(y_18);
  e_19 = t;
  t = w_18;
  if(match_cons(t, sym_Path_1))
    {
      h_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_19, x_18);
  d_3 = t;
  t = SSLsetAnnotations(d_3, e_19);
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(z_18, b_19, t);
  return(t);
}
static ATerm e_20 (ATerm j_19, ATerm k_19, ATerm l_19, ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,p_19 = NULL,v_19 = NULL,e_3 = NULL;
  t = SSLgetAnnotations(l_19);
  p_19 = t;
  t = SSL_is_string(j_19);
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_19, k_19);
  e_3 = t;
  t = SSLsetAnnotations(e_3, p_19);
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(m_19, n_19, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
      {
        ATerm r_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_20(z_19, t);
            LocalPopChoice(v_24);
          }
        else
          {
            t = r_24;
            {
              ATerm w_24 = t;
              int x_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_20(a_20, b_20, z_19, t);
                  LocalPopChoice(x_24);
                }
              else
                {
                  t = w_24;
                  t = e_20(a_20, b_20, z_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_20(z_19, t);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20 = NULL;
      i_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_20, term_i_25);
      t = x_6(t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      t = debug_1_0(c_3, t);
      _fail(t);
    }
  g_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(h_20, t);
  f_20 = t;
  t = g_20;
  t = fclose_0_0(t);
  t = f_20;
  return(t);
}
static ATerm y_6 (ATerm w_13, ATerm x_13, ATerm t)
{
  t = SSL_access(w_13, x_13);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_20 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_j_25;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm t_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_21);
      t_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_20, (ATerm) ATinsert(ATempty, term_p_21));
      t = y_6(o_20, t_20, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm f_5 = NULL,j_5 = NULL;
  t = read_from_0_0(t);
  t = x_93(t);
  f_5 = t;
  t = xtc_new_file_0_0(t);
  j_5 = t;
  t = open_file_0_0(t);
  t = SSL_print(j_5, f_5);
  t = SSL_close_file(j_5);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_5);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  b_21 = t;
  {
    ATerm k_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_21 = ATgetArgument(t, 0);
            {
              ATerm n_5 = NULL,j_3 = NULL;
              t = SSLgetAnnotations(b_21);
              n_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_21);
              j_3 = t;
              t = SSLsetAnnotations(j_3, n_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_21;
          }
        LocalPopChoice(o_25);
        t = xtc_transform_file_2_0(g_3, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = k_25;
        t = xtc_transform_term_2_0(i_3, create_abox2latex_args_0_0, t);
      }
  }
  z_20 = t;
  t = term_p_25;
  t = create_header_0_0(t);
  a_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_20), a_21);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(f_3, t);
  return(t);
}
static ATerm z_6 (ATerm r_33, ATerm s_33, ATerm t)
{
  t = SSL_copy(r_33, s_33);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  g_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL;
        t = g_22;
        t = o_0(t);
        e_6 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = e_6;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = e_6;
          }
        t = (ATerm) ATmakeAppl(sym__2, h_22, e_6);
        t = z_6(h_22, e_6, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_22);
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm x_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_7 = NULL;
              t = g_22;
              t = o_0(t);
              k_7 = t;
              {
                ATerm z_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_7 = NULL;
                    l_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = l_7;
                          }
                        else
                          {
                            t = l_7;
                            if((h_22 != t))
                              {
                                _fail(t);
                              }
                            t = l_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_25;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_22, k_7);
              t = z_6(h_22, k_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_22);
              LocalPopChoice(y_25);
            }
          else
            {
              t = x_25;
              t = g_22;
              t = o_0(t);
              if((h_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_22);
            }
        }
      }
  }
  return(t);
}
static ATerm a_7 (ATerm t_26, ATerm u_26, ATerm t)
{
  ATerm s_22 = NULL,u_22 = NULL;
  u_22 = t;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
        t = g_7(t_26, u_26, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_26 = ATgetFirst((ATermList) t);
            s_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_26);
        t = SSL_table_put(t_26, u_26, s_22);
        t = (ATerm) ATmakeAppl(sym__3, t_26, u_26, s_22);
      }
    else
      {
        t = a_26;
        t = SSL_table_remove(t_26, u_26);
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
      }
  }
  t = u_22;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,b_23 = NULL;
  z_22 = t;
  t = r_77(t);
  y_22 = t;
  {
    ATerm d_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL;
        t = term_d_24;
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_22, term_d_24);
        t = g_7(y_22, c_23, t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_22 = ATgetFirst((ATermList) t);
      v_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_24;
  b_23 = t;
  t = SSL_table_put(y_22, b_23, v_22);
  t = x_22;
  {
    static ATerm k_3 (ATerm t)
    {
      ATerm f_23 = NULL;
      f_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_22, f_23);
      t = a_7(y_22, f_23, t);
      return(t);
    }
    t = map_1_0(k_3, t);
  }
  t = z_22;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_67(t);
      t = r_67(t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = r_67(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,l_23 = NULL,n_23 = NULL,r_23 = NULL,t_23 = NULL;
  l_23 = t;
  t = q_77(t);
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_23, term_d_24);
  {
    ATerm j_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_26 = ATgetArgument(t, 0);
            ATerm s_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_24;
        b_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_23, term_d_24);
        t = g_7(i_23, b_24, t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = j_26;
        t = (ATerm) ATempty;
      }
  }
  n_23 = t;
  t = term_d_24;
  r_23 = t;
  t = (ATerm) ATinsert(CheckATermList(n_23), (ATerm) ATempty);
  t_23 = t;
  t = SSL_table_put(i_23, r_23, t_23);
  t = l_23;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_24);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = n_24;
      }
  }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm g_24 = NULL;
  static ATerm p_3 (ATerm t)
  {
    ATerm h_24 = NULL;
    h_24 = t;
    {
      ATerm y_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_24 = NULL,k_24 = NULL;
          t = term_e_24;
          i_24 = t;
          t = term_d_24;
          k_24 = t;
          t = term_a_27;
          t = g_7(i_24, k_24, t);
          LocalPopChoice(z_26);
        }
      else
        {
          t = y_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_24 != NULL) && (g_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_24 = ATgetFirst((ATermList) t);
        {
          ATerm b_27 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = g_24;
    t = map_1_0(r_3, t);
    t = h_24;
    t = end_scope_1_0(x_3, t);
    return(t);
  }
  t = begin_scope_1_0(l_3, t);
  t = restore_always_2_0(h_94, p_3, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_23;
      t = get_config_0_0(t);
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      t = term_e_27;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  static ATerm y_3 (ATerm t)
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_24 = NULL;
        t = term_q_23;
        t = get_config_0_0(t);
        u_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        t = term_j_25;
      }
    t = i_94(t);
    t = copy_to_1_0(b_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(y_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  b_25 = t;
  t = term_f_8;
  t = whoami_0_0(t);
  c_25 = t;
  t = term_t_19;
  e_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_27), c_25), term_h_27);
  f_25 = t;
  t = SSL_printnl(e_25, f_25);
  t = term_x_9;
  d_25 = t;
  t = SSL_exit(d_25);
  t = b_25;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,q_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
      t = term_f_8;
      t = n_0(t);
      r_25 = t;
      t = term_j_27;
      s_25 = t;
      t = term_k_27;
      t_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_27, term_k_27, r_25);
      t = h_7(s_25, t_25, r_25, t);
      _fail(t);
    }
  else
    {
      ATerm k_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_25 = ATgetFirst((ATermList) t);
          m_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_25 = ATgetFirst((ATermList) t);
          q_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_25;
      t = k_0(t);
      t = n_25;
      t = l_0(t);
      k_26 = t;
      t = (ATerm) ATinsert(CheckATermList(q_25), k_26);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_70 (ATerm), ATerm t)
{
  static ATerm t_27 (ATerm t)
  {
    ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
    s_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_27 = ATgetFirst((ATermList) t);
        r_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_7 = NULL,i_8 = NULL,o_3 = NULL;
          t = SSLgetAnnotations(s_27);
          z_7 = t;
          t = r_27;
          t = t_27(t);
          i_8 = t;
          t = (ATerm) ATinsert(CheckATermList(i_8), q_27);
          o_3 = t;
          t = SSLsetAnnotations(o_3, z_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_27;
        t = g_70(t);
      }
    return(t);
  }
  t = t_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,v_26 = NULL;
  q_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_26;
    }
  else
    {
      static ATerm c_4 (ATerm t)
      {
        t = not_null(v_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_26 = ATgetFirst((ATermList) t);
          if(((v_26 != NULL) && (v_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_26;
      t = at_end_1_0(c_4, t);
    }
  return(t);
}
static ATerm l_28 (ATerm b_28, ATerm t)
{
  ATerm c_28 = NULL;
  t = SSL_explode_term(b_28);
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_28 = NULL,h_28 = NULL,i_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      {
        ATerm p_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_4 (ATerm t)
            {
              t = h_28;
              return(t);
            }
            t = e_28;
            t = at_end_1_0(d_4, t);
            LocalPopChoice(w_27);
          }
        else
          {
            t = p_27;
            t = l_28(i_28, t);
          }
      }
    }
  else
    {
      t = l_28(i_28, t);
    }
  return(t);
}
static ATerm b_7 (ATerm a_45, ATerm z_44, ATerm t)
{
  ATerm m_28 = NULL,o_28 = NULL,p_28 = NULL;
  t = a_45;
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = (ATerm) ATempty;
      }
  }
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_44, o_28);
  t = conc_0_0(t);
  m_28 = t;
  t = term_z_27;
  p_28 = t;
  t = SSL_table_put(p_28, a_45, m_28);
  t = (ATerm) ATmakeAppl(sym__3, term_z_27, a_45, m_28);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  if(match_string(t, "-k"))
    {
      t = r_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_28;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  t = SSL_string_to_int(s_28);
  t_28 = t;
  t = term_a_28;
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_28, t_28);
  t = j_7(u_28, t_28, t);
  t = s_28;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, f_4, k_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  if(match_string(t, "-S"))
    {
      t = y_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_28;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  t = term_l_9;
  z_28 = t;
  t = term_j_28;
  a_29 = t;
  t = term_k_28;
  t = j_7(z_28, a_29, t);
  t = term_n_28;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,e_29 = NULL;
  b_29 = t;
  t = SSL_string_to_int(b_29);
  c_29 = t;
  t = term_l_9;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, c_29);
  t = j_7(e_29, c_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_29);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_v_28;
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
  ATerm f_29 = NULL,g_29 = NULL;
  t = term_w_28;
  f_29 = t;
  t = term_f_8;
  g_29 = t;
  t = term_x_28;
  t = j_7(f_29, g_29, t);
  t = term_d_29;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_4, n_4, o_4, t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = i_29;
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, s_4, t_4, t);
            LocalPopChoice(o_29);
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
  ATerm j_29 = NULL;
  j_29 = t;
  if(match_string(t, "-o"))
    {
      t = j_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_29;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  t = term_p_23;
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, l_29);
  t = j_7(m_29, l_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_29);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  if(match_string(t, "-i"))
    {
      t = p_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_29;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm q_29 = NULL,x_29 = NULL;
  q_29 = t;
  t = term_q_23;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, q_29);
  t = j_7(x_29, q_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_29);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, e_5, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  y_29 = t;
  t = term_e_8;
  z_29 = t;
  t = (ATerm) ATinsert(ATempty, y_29);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, (ATerm) ATinsert(ATempty, y_29));
  t = b_7(z_29, a_30, t);
  t = y_29;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  c_30 = t;
  t = term_h_11;
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, c_30);
  t = j_7(d_30, c_30, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm b_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(g_30);
          }
        else
          {
            t = b_30;
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
                    ATerm l_30 = t;
                    int p_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(p_30);
                      }
                    else
                      {
                        t = l_30;
                        {
                          ATerm q_30 = t;
                          int s_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(k_5, m_5, p_5, t);
                              LocalPopChoice(s_30);
                            }
                          else
                            {
                              t = q_30;
                              t = ArgOption_3_0(q_5, s_5, u_5, t);
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
  ATerm e_30 = NULL,f_30 = NULL,h_30 = NULL,i_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_8;
  t = whoami_0_0(t);
  e_30 = t;
  t = term_t_19;
  h_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_30), e_30);
  i_30 = t;
  t = SSL_printnl(h_30, i_30);
  t = term_x_9;
  f_30 = t;
  t = SSL_exit(f_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_30;
  t = get_config_0_0(t);
  return(t);
}
static ATerm c_7 (ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_24, t_24);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      t = SSL_addr(s_24, t_24);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_30;
      t = i_76(t);
    }
  else
    {
      ATerm r_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_30 = ATgetFirst((ATermList) t);
          o_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_30;
      t = foldr_2_0(i_76, j_76, t);
      r_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_30, r_30);
      t = j_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_j_28;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(z_8, a_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_30 = NULL,s_8 = NULL,u_8 = NULL;
  t = times_0_0(t);
  u_8 = t;
  t = SSL_explode_term(u_8);
  if(match_cons(t, sym__2))
    {
      ATerm y_30 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8;
  t = foldr_2_0(v_5, w_5, t);
  v_30 = t;
  t = SSL_TicksToSeconds(v_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  if(match_cons(t, sym__2))
    {
      l_31 = ATgetArgument(t, 0);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_31;
        if((l_31 != t))
          {
            _fail(t);
          }
        t = k_31;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = (ATerm) ATmakeAppl(sym__2, l_31, m_31);
        {
          ATerm b_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_31, m_31);
              LocalPopChoice(c_31);
            }
          else
            {
              t = b_31;
              t = SSL_gtr(l_31, m_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_31, m_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_32 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        b_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_32, term_x_9);
        t = geq_0_0(t);
        t = z_31;
        t = t_92(t);
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = z_31;
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,l_32 = NULL,p_32 = NULL;
  t = run_time_0_0(t);
  f_32 = t;
  t = term_f_8;
  t = whoami_0_0(t);
  g_32 = t;
  t = term_t_19;
  l_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_31), f_32), term_p_11), g_32);
  p_32 = t;
  t = SSL_printnl(l_32, p_32);
  t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_31), f_32), term_p_11), g_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_28;
  q_32 = t;
  t = SSL_exit(q_32);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  z_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_32 = ATgetArgument(t, 0);
          {
            ATerm e_10 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(z_32);
            e_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_32);
            q_3 = t;
            t = SSLsetAnnotations(q_3, e_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_63 (ATerm), ATerm t)
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
      t = fetch_1_0(a_6, t);
    }
  t = e_63(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_33 = ATgetFirst((ATermList) t);
      d_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_33 = NULL,k_33 = NULL;
        static ATerm b_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_33)), not_null(k_33));
          return(t);
        }
        t = d_33;
        t = i_0(t);
        if(((j_33 != NULL) && (j_33 != t)))
          _fail(t);
        else
          j_33 = t;
        t = c_33;
        t = g_0(t);
        if(((k_33 != NULL) && (k_33 != t)))
          _fail(t);
        else
          k_33 = t;
        t = d_33;
        t = reverse_acc_2_0(g_0, b_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,w_3 = NULL;
  q_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_33);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_33);
  w_3 = t;
  t = SSLsetAnnotations(w_3, o_33);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_33), term_j_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_30;
      t = get_config_0_0(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      t = fetch_1_0(d_6, t);
    }
  t = term_p_31;
  t = echo_0_0(t);
  t = term_j_27;
  m_33 = t;
  t = term_k_27;
  n_33 = t;
  t = term_q_31;
  t = g_7(m_33, n_33, t);
  t = reverse_acc_2_0(_id, f_6, t);
  t = map_1_0(g_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_70 (ATerm), ATerm t)
{
  static ATerm r_34 (ATerm t)
  {
    ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
    o_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_34 = ATgetFirst((ATermList) t);
        q_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_31 = t;
      int s_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_10 = NULL,a_11 = NULL,h_4 = NULL;
          t = SSLgetAnnotations(o_34);
          t_10 = t;
          t = p_34;
          t = a_70(t);
          a_11 = t;
          t = (ATerm) ATinsert(CheckATermList(q_34), a_11);
          h_4 = t;
          t = SSLsetAnnotations(h_4, t_10);
          LocalPopChoice(s_31);
        }
      else
        {
          t = r_31;
          {
            ATerm k_11 = NULL,n_11 = NULL,j_4 = NULL;
            t = SSLgetAnnotations(o_34);
            k_11 = t;
            t = q_34;
            t = r_34(t);
            n_11 = t;
            t = (ATerm) ATinsert(CheckATermList(n_11), p_34);
            j_4 = t;
            t = SSLsetAnnotations(j_4, k_11);
          }
        }
    }
    return(t);
  }
  t = r_34(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_31 = ATgetFirst((ATermList) t);
                ATerm w_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_34;
          }
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATinsert(ATempty, v_34);
      }
  }
  w_34 = t;
  t = term_e_27;
  x_34 = t;
  t = SSL_printnl(x_34, w_34);
  t = v_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_7 (ATerm h_33, ATerm i_33, ATerm t)
{
  t = SSL_strcat(h_33, i_33);
  return(t);
}
ATerm debug_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
  b_35 = t;
  t = h_81(t);
  c_35 = t;
  t = term_t_19;
  d_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_35), c_35);
  e_35 = t;
  t = SSL_printnl(d_35, e_35);
  t = b_35;
  return(t);
}
ATerm map_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  static ATerm t_35 (ATerm t)
  {
    ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
    q_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_35;
      }
    else
      {
        ATerm g_12 = NULL,l_12 = NULL,m_12 = NULL,p_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_35 = ATgetFirst((ATermList) t);
            s_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_35);
        g_12 = t;
        t = r_35;
        t = q_69(t);
        l_12 = t;
        t = s_35;
        t = t_35(t);
        m_12 = t;
        t = (ATerm) ATinsert(CheckATermList(m_12), l_12);
        p_4 = t;
        t = SSLsetAnnotations(p_4, g_12);
      }
    return(t);
  }
  t = t_35(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_36 = NULL;
      b_36 = t;
      t = SSL_is_string(b_36);
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm e_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_6, t);
            LocalPopChoice(h_32);
          }
        else
          {
            t = e_32;
            {
              ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
              h_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_36 = ATgetArgument(t, 0);
                  t = i_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_36 = ATgetArgument(t, 0);
                      t = i_36;
                      {
                        ATerm i_32 = t;
                        int j_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(j_32);
                          }
                        else
                          {
                            t = i_32;
                            t = debug_1_0(i_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_36 = NULL,o_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_36 = ATgetArgument(t, 0);
                          j_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_36;
                      t = eval_config_0_0(t);
                      n_36 = t;
                      t = j_36;
                      t = eval_config_0_0(t);
                      o_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_36, o_36);
                      t = f_7(n_36, o_36, t);
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
  ATerm s_36 = NULL,v_36 = NULL;
  s_36 = t;
  t = term_z_27;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_27, s_36);
  t = g_7(v_36, s_36, t);
  {
    ATerm k_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_36 = NULL,y_36 = NULL;
        t = eval_config_0_0(t);
        w_36 = t;
        t = term_z_27;
        y_36 = t;
        t = SSL_table_put(y_36, s_36, w_36);
        t = w_36;
        LocalPopChoice(m_32);
      }
    else
      {
        t = k_32;
      }
  }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL;
  t = term_n_32;
  f_37 = t;
  t = term_f_8;
  g_37 = t;
  t = term_o_32;
  t = j_7(f_37, g_37, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_r_32;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  t = term_n_32;
  j_37 = t;
  t = term_f_8;
  k_37 = t;
  t = term_o_32;
  t = j_7(j_37, k_37, t);
  t = term_s_32;
  h_37 = t;
  t = term_f_8;
  i_37 = t;
  t = term_t_32;
  t = j_7(h_37, i_37, t);
  t = term_u_32;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_6, d_7, e_7, t);
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      t = Option_3_0(i_7, m_7, o_7, t);
    }
  return(t);
}
static ATerm j_7 (ATerm u_44, ATerm v_44, ATerm t)
{
  ATerm l_37 = NULL;
  t = term_z_27;
  l_37 = t;
  t = SSL_table_put(l_37, u_44, v_44);
  t = (ATerm) ATmakeAppl(sym__3, term_z_27, u_44, v_44);
  return(t);
}
static ATerm g_7 (ATerm f_28, ATerm g_28, ATerm t)
{
  t = SSL_table_get(f_28, g_28);
  return(t);
}
static ATerm h_7 (ATerm o_26, ATerm p_26, ATerm n_26, ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, p_26);
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_33 = ATgetArgument(t, 0);
            ATerm f_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_26, p_26);
        t = g_7(o_26, p_26, t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATempty;
      }
  }
  o_37 = t;
  t = (ATerm) ATinsert(CheckATermList(o_37), n_26);
  p_37 = t;
  t = SSL_table_put(o_26, p_26, p_37);
  t = n_37;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
      t = term_f_8;
      t = e_0(t);
      c_38 = t;
      t = term_j_27;
      d_38 = t;
      t = term_k_27;
      e_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_27, term_k_27, c_38);
      t = h_7(d_38, e_38, c_38, t);
      _fail(t);
    }
  else
    {
      ATerm h_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_38 = ATgetFirst((ATermList) t);
          b_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_38;
      t = c_0(t);
      t = term_f_8;
      t = d_0(t);
      h_38 = t;
      t = (ATerm) ATinsert(CheckATermList(b_38), h_38);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,n_6 = NULL;
  n_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_38 = ATgetFirst((ATermList) t);
      k_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_38);
  i_38 = t;
  t = j_38;
  t = p_56(t);
  l_38 = t;
  t = k_38;
  t = q_56(t);
  m_38 = t;
  t = (ATerm) ATinsert(CheckATermList(m_38), l_38);
  n_6 = t;
  t = SSLsetAnnotations(n_6, i_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,a_39 = NULL,c_39 = NULL,d_39 = NULL,t_6 = NULL;
  s_38 = t;
  {
    ATerm g_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_33;
        t = q_83(t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = g_33;
      }
  }
  t = s_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_38 = ATgetFirst((ATermList) t);
      a_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_38);
  t_38 = t;
  t = term_u_30;
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, u_38);
  t = j_7(d_39, u_38, t);
  t = a_39;
  {
    static ATerm o_39 (ATerm t)
    {
      ATerm v_33 = t;
      int w_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_39 = NULL;
              g_39 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_39;
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
              t = q_83(t);
              t = Cons_2_0(_id, o_39, t);
            }
          LocalPopChoice(w_33);
        }
      else
        {
          t = v_33;
          {
            ATerm j_39 = NULL,l_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_39 = ATgetFirst((ATermList) t);
                l_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_39), (ATerm) ATmakeAppl(sym_Undefined_1, j_39));
          }
        }
      return(t);
    }
    t = o_39(t);
  }
  c_39 = t;
  t = (ATerm) ATinsert(CheckATermList(c_39), (ATerm) ATmakeAppl(sym_Program_1, u_38));
  t_6 = t;
  t = SSLsetAnnotations(t_6, t_38);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm a_40 = NULL;
  a_40 = t;
  if(match_string(t, "--help"))
    {
      t = a_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_40;
        }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  t = term_i_31;
  b_40 = t;
  t = term_f_8;
  c_40 = t;
  t = term_z_33;
  t = j_7(b_40, c_40, t);
  t = term_a_34;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  v_39 = t;
  t = term_j_27;
  x_39 = t;
  t = term_k_27;
  y_39 = t;
  t = (ATerm) ATempty;
  z_39 = t;
  t = SSL_table_put(x_39, y_39, z_39);
  t = v_39;
  {
    static ATerm p_7 (ATerm t)
    {
      ATerm c_34 = t;
      int d_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_83(t);
          LocalPopChoice(d_34);
        }
      else
        {
          t = c_34;
          {
            ATerm e_34 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_7, r_7, s_7, t);
                LocalPopChoice(f_34);
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
    t = parse_options_p__1_0(p_7, t);
  }
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_40 = NULL;
        j_40 = t;
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_14 = NULL;
              t = j_40;
              {
                ATerm k_34 = t;
                int l_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_31;
                    t = get_config_0_0(t);
                    LocalPopChoice(l_34);
                  }
                else
                  {
                    t = k_34;
                    t = fetch_1_0(t_7, t);
                  }
              }
              t = j_40;
              t = default_system_usage_0_0(t);
              t = term_j_28;
              i_14 = t;
              t = SSL_exit(i_14);
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
              {
                ATerm n_14 = NULL;
                t = term_n_32;
                t = get_config_0_0(t);
                t = j_40;
                t = default_system_about_0_0(t);
                t = term_j_28;
                n_14 = t;
                t = SSL_exit(n_14);
              }
            }
        }
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
              static ATerm u_7 (ATerm t)
              {
                ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,n_7 = NULL;
                p_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_40);
                n_40 = t;
                t = o_40;
                if(((t_39 != NULL) && (t_39 != t)))
                  _fail(t);
                else
                  t_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_40);
                n_7 = t;
                t = SSLsetAnnotations(n_7, n_40);
                return(t);
              }
              t = fetch_1_0(u_7, t);
              t = term_t_19;
              l_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_39)), term_s_34);
              m_40 = t;
              t = SSL_printnl(l_40, m_40);
              t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_39)), term_s_34));
              t = default_system_usage_0_0(t);
              t = term_x_9;
              k_40 = t;
              t = SSL_exit(k_40);
              LocalPopChoice(n_34);
            }
          else
            {
              t = m_34;
            }
        }
      }
  }
  u_39 = t;
  t = term_j_27;
  w_39 = t;
  t = SSL_table_destroy(w_39);
  t = u_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm j_63 (ATerm), ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  t = parse_options_1_0(g_63, t);
  u_40 = t;
  t = term_t_34;
  x_40 = t;
  t = SSL_table_create(x_40);
  t = term_t_34;
  v_40 = t;
  t = term_u_34;
  w_40 = t;
  t = SSL_table_put(v_40, w_40, u_40);
  t = u_40;
  t = i_63(t);
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_63, t);
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        {
          ATerm a_35 = t;
          int f_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_63(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_35);
            }
          else
            {
              t = a_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = xtc_io_1_0(abox2latex_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2latex_options_0_0, default_usage_0_0, _id, v_7, t);
  return(t);
}
