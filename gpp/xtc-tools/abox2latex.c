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
Symbol sym_Path_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_k_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_v_33;
ATerm term_e_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_w_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_i_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_g_31;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_j_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_j_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_a_22;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_j_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
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
ATerm term_h_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_h_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_v_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_c_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_h_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_h_10, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_i_12, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_o_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_z_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_h_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_h_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_e_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_a_17, term_b_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_j_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_q_17, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_u_17, term_v_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_z_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_e_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_k_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_p_18, term_q_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_y_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_h_19, term_i_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_p_19, term_q_19);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_c_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_l_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_p_22);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_t_25, term_j_25);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_q_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_28);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_b_9);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_p_30);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_m_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_b_28);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_b_9);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_b_9);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_m_31, term_b_9);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_i_32);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_v_24);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm x_6 (ATerm l_35, ATerm m_35, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm g_6 (ATerm l_25, ATerm m_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm create_table_file_0_0 (ATerm t);
ATerm create_abox2latex_args_0_0 (ATerm t);
static ATerm h_6 (ATerm k_39, ATerm l_39, ATerm t);
static ATerm i_6 (ATerm l_84 (ATerm), ATerm y_448, ATerm u_39, ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t);
static ATerm j_6 (ATerm n_38, ATerm o_38, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm l_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_83 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_96 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_96 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm h_96 (ATerm), ATerm t);
static ATerm m_6 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm s_21, ATerm r_21, ATerm t);
static ATerm n_6 (ATerm k_76 (ATerm), ATerm o_21, ATerm n_21, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm o_6 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t);
static ATerm p_6 (ATerm z_80 (ATerm), ATerm e_29, ATerm d_29, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_81 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm d_18 (ATerm x_16, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm e_98 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm j_84 (ATerm), ATerm t);
static ATerm v_19 (ATerm k_19, ATerm t);
static ATerm w_19 (ATerm m_19, ATerm n_19, ATerm o_19, ATerm t);
static ATerm o_2 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm r_6 (ATerm r_80 (ATerm), ATerm t_26, ATerm r_26, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
static ATerm y_21 (ATerm k_21, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_6 (ATerm q_39, ATerm t);
static ATerm t_6 (ATerm b_35, ATerm c_35, ATerm t);
static ATerm u_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_24 (ATerm r_22, ATerm t);
static ATerm f_24 (ATerm v_22, ATerm w_22, ATerm z_22, ATerm t);
static ATerm i_24 (ATerm m_23, ATerm n_23, ATerm o_23, ATerm t);
static ATerm v_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm w_6 (ATerm x_13, ATerm y_13, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm g_97 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm d_7 (ATerm o_29, ATerm p_29, ATerm t);
static ATerm y_6 (ATerm c_28, ATerm d_28, ATerm t);
ATerm end_scope_1_0 (ATerm o_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_80 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm q_97 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm q_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_31 (ATerm e_31, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm z_6 (ATerm m_47, ATerm l_47, ATerm t);
static ATerm t_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm abox2latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_7 (ATerm f_25, ATerm g_25, ATerm t);
ATerm foldr_2_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_96 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm need_help_1_0 (ATerm n_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm z_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm g_7 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm e_7 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_86 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm parse_options_1_0 (ATerm r_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = s_1;
        t = o_0(t);
        h_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, t_1, h_0);
        t = x_6(t_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
        LocalPopChoice(y_7);
      }
    else
      {
        t = w_7;
        {
          ATerm z_7 = t;
          int b_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = s_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm c_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_0;
                          }
                        else
                          {
                            t = w_0;
                            if((t_1 != t))
                              {
                                _fail(t);
                              }
                            t = w_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, t_1, v_0);
              t = x_6(t_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
              LocalPopChoice(b_8);
            }
          else
            {
              t = z_7;
              t = s_1;
              t = o_0(t);
              if((t_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
            }
        }
      }
  }
  return(t);
}
static ATerm x_6 (ATerm l_35, ATerm m_35, ATerm t)
{
  t = SSL_copy(l_35, m_35);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,t_2 = NULL;
      t = term_g_8;
      s_2 = t;
      t = term_h_8;
      t_2 = t;
      t = term_i_8;
      t = d_7(s_2, t_2, t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      t = term_j_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_1 = NULL,g_1 = NULL;
      t = term_h_8;
      {
        ATerm k_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 = NULL,l_1 = NULL;
            t = term_g_8;
            k_1 = t;
            t = term_h_8;
            l_1 = t;
            t = term_i_8;
            t = d_7(k_1, l_1, t);
            LocalPopChoice(l_8);
          }
        else
          {
            t = k_8;
            t = term_j_8;
          }
      }
      f_1 = t;
      t = term_m_8;
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, f_1);
      t = x_6(g_1, f_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm n_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL;
  h_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), h_3), term_o_8);
  i_3 = t;
  t = SSL_concat_strings(i_3);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm z_2 = NULL;
  ATerm q_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 = NULL,f_3 = NULL;
      t = term_g_8;
      e_3 = t;
      t = term_v_8;
      f_3 = t;
      t = term_z_8;
      t = d_7(e_3, f_3, t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = q_8;
      t = (ATerm) ATempty;
    }
  t = map_1_0(b_0, t);
  z_2 = t;
  t = SSL_concat_strings(z_2);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  t = term_b_9;
  t = tables2text_0_0(t);
  j_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_9), term_x_9), term_w_9), term_d_9), term_v_9), term_t_9), term_r_9), term_o_9), term_n_9), term_d_9), j_3), term_m_9), term_h_9), term_d_9), term_f_9), term_d_9), term_e_9), term_d_9);
  k_3 = t;
  t = SSL_concat_strings(k_3);
  return(t);
}
static ATerm g_6 (ATerm l_25, ATerm m_25, ATerm t)
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_25, m_25);
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      t = SSL_subtr(l_25, m_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,o_3 = NULL,q_3 = NULL;
  t = term_c_10;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL,v_3 = NULL;
        t = term_g_8;
        u_3 = t;
        t = term_c_10;
        v_3 = t;
        t = term_g_10;
        t = d_7(u_3, v_3, t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = term_h_10;
      }
  }
  m_3 = t;
  t = term_h_10;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, term_h_10);
  t = g_6(m_3, q_3, t);
  o_3 = t;
  t = SSL_int_to_string(o_3);
  l_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_3), term_c_10);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_Stream_1))
        {
          b_4 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(b_4, c_4, t);
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  ATerm j_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL,a_4 = NULL;
      t = term_g_8;
      z_3 = t;
      t = term_v_8;
      a_4 = t;
      t = term_z_8;
      t = d_7(z_3, a_4, t);
      LocalPopChoice(o_10);
    }
  else
    {
      t = j_10;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  w_3 = t;
  t = (ATerm) ATinsert(CheckATermList(w_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_b_11), term_a_11)), (ATerm) ATinsert(ATinsert(ATempty, term_z_10), term_y_10)), (ATerm) ATinsert(ATinsert(ATempty, term_x_10), term_w_10)), (ATerm) ATinsert(ATinsert(ATempty, term_v_10), term_u_10)), (ATerm) ATinsert(ATinsert(ATempty, term_t_10), term_s_10)), (ATerm) ATinsert(ATinsert(ATempty, term_r_10), term_q_10)));
  t = concat_0_0(t);
  y_3 = t;
  t = xtc_new_file_0_0(t);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_3, y_3);
  t = i_6(f_0, x_3, y_3, t);
  t = x_3;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm f_4 = NULL,h_4 = NULL;
  t = term_b_9;
  t = create_table_file_0_0(t);
  f_4 = t;
  t = term_b_9;
  t = pass_verbose_0_0(t);
  h_4 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(h_4), f_4), term_c_11);
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 = NULL,l_4 = NULL,m_4 = NULL;
        t = term_g_8;
        l_4 = t;
        t = term_h_11;
        m_4 = t;
        t = term_i_11;
        t = d_7(l_4, m_4, t);
        j_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(h_4), f_4), term_c_11), j_4), term_l_11);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm k_39, ATerm l_39, ATerm t)
{
  ATerm s_4 = NULL;
  t = SSL_write_term_to_stream_baf(k_39, l_39);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_4);
  return(t);
}
static ATerm i_6 (ATerm l_84 (ATerm), ATerm y_448, ATerm u_39, ATerm t)
{
  ATerm u_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_448, term_n_11);
  t = v_6(t);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_4, u_39);
  t = l_84(t);
  t = fclose_0_0(t);
  t = u_39;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_11 = ATgetArgument(t, 0);
      if(match_cons(p_11, sym_Stream_1))
        {
          x_4 = ATgetArgument(p_11, 0);
        }
      else
        _fail(t);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(x_4, y_4, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  w_4 = t;
  t = xtc_new_file_0_0(t);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, w_4);
  t = i_6(j_0, v_4, w_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_4);
  t = xtc_transform_file_2_0(d_97, e_97, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm j_6 (ATerm n_38, ATerm o_38, ATerm t)
{
  t = SSL_execvp(n_38, o_38);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
  y_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      z_5 = ATgetArgument(t, 0);
      {
        ATerm x_1 = NULL,y_1 = NULL;
        t = SSL_int_to_string(z_5);
        x_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), x_1), term_q_11);
        y_1 = t;
        t = SSL_concat_strings(y_1);
      }
    }
  else
    {
      ATerm p_2 = NULL,q_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          z_5 = ATgetArgument(t, 0);
          a_6 = ATgetArgument(t, 1);
          b_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_6);
      p_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_6), term_t_11), p_2), term_s_11), z_5);
      q_2 = t;
      t = SSL_concat_strings(q_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  ATerm q_6 = NULL;
  static ATerm m_0 (ATerm t)
  {
    t = l_72(t);
    if(((q_6 != NULL) && (q_6 != t)))
      _fail(t);
    else
      q_6 = t;
    return(t);
  }
  t = fetch_1_0(m_0, t);
  t = not_null(q_6);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm x_11 = ATgetArgument(t, 0);
              if((b_7 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm a_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_19), term_j_19), term_b_19), term_s_18), term_n_18), term_g_18), term_b_18), term_x_17), term_s_17), term_l_17), term_f_17), term_w_16), term_s_16), term_o_16), term_f_16), term_a_16), term_s_15), term_o_15), term_k_15), term_d_15), term_z_14), term_v_14), term_j_14), term_i_13), term_a_13), term_p_12), term_k_12), term_e_12);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_7 = NULL,d_8 = NULL;
  o_7 = t;
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            d_8 = ATgetArgument(t, 1);
            {
              ATerm i_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_20);
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL;
              t = d_8;
              {
                ATerm l_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_3 = t;
              t = term_m_20;
              c_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_3), term_n_20);
              d_3 = t;
              t = SSL_printnl(c_3, d_3);
              t = (ATerm) ATmakeAppl(sym__2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, a_3), term_n_20));
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
              t = o_7;
            }
        }
      }
    else
      {
        t = z_19;
        t = o_7;
      }
  }
  t = o_7;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL;
  u_8 = t;
  t = fork_0_0(t);
  t_8 = t;
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_8;
        t = q_83(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = SSL_waitpid(t_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_20 = ATgetArgument(t, 0);
            if(((ATgetType(s_20) != AT_INT) || (ATgetInt((ATermInt) s_20) != 0)))
              _fail(t);
            {
              ATerm u_20 = ATgetArgument(t, 1);
            }
            {
              ATerm x_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_8;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  static ATerm s_0 (ATerm t)
  {
    ATerm x_8 = NULL,y_8 = NULL;
    x_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), x_8);
    t = d_7(not_null(w_8), x_8, t);
    y_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_8, y_8);
    return(t);
  }
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  t = SSL_table_keys(w_8);
  t = map_1_0(s_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  {
    ATerm z_20 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_9 = NULL,i_9 = NULL,l_9 = NULL;
        t = term_g_8;
        i_9 = t;
        t = term_c_10;
        l_9 = t;
        t = term_g_10;
        t = d_7(i_9, l_9, t);
        g_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_9, term_p_18);
        t = geq_0_0(t);
        t = c_9;
        t = g_96(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = z_20;
        t = c_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm s_9 = NULL;
  s_9 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_9 = NULL,y_9 = NULL,z_9 = NULL;
        t = term_g_8;
        y_9 = t;
        t = term_c_10;
        z_9 = t;
        t = term_g_10;
        t = d_7(y_9, z_9, t);
        u_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, term_q_15);
        t = geq_0_0(t);
        t = s_9;
        t = f_96(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = s_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
        t = term_g_8;
        m_10 = t;
        t = term_c_10;
        n_10 = t;
        t = term_g_10;
        t = d_7(m_10, n_10, t);
        l_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_10, term_w_12);
        t = geq_0_0(t);
        t = d_10;
        t = h_96(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = d_10;
      }
  }
  return(t);
}
static ATerm m_6 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm s_21, ATerm r_21, ATerm t)
{
  t = o_76(t);
  {
    static ATerm t_0 (ATerm t)
    {
      ATerm p_10 = NULL;
      p_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, p_10);
      t = n_76(t);
      return(t);
    }
    t = fetch_1_0(t_0, t);
  }
  t = r_21;
  return(t);
}
static ATerm n_6 (ATerm k_76 (ATerm), ATerm o_21, ATerm n_21, ATerm t)
{
  static ATerm w_11 (ATerm t)
  {
    ATerm f_11 = NULL,m_11 = NULL,o_11 = NULL;
    f_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_11 = ATgetFirst((ATermList) t);
            o_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_11;
              {
                static ATerm u_0 (ATerm t)
                {
                  t = n_21;
                  return(t);
                }
                t = m_6(k_76, u_0, m_11, o_11, t);
              }
              t = w_11(t);
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              {
                ATerm s_3 = NULL,e_4 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(f_11);
                s_3 = t;
                t = o_11;
                t = w_11(t);
                e_4 = t;
                t = (ATerm) ATinsert(CheckATermList(e_4), m_11);
                z_0 = t;
                t = SSLsetAnnotations(z_0, s_3);
              }
            }
        }
      }
    return(t);
  }
  t = o_21;
  t = w_11(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      if((q_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm z_11 = NULL,g_12 = NULL,h_12 = NULL;
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_21 = ATgetArgument(t, 0);
            ATerm q_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
        t = d_7(u_28, v_28, t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = (ATerm) ATempty;
      }
  }
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_12, w_28);
  t = n_6(x_0, h_12, w_28, t);
  g_12 = t;
  t = SSL_table_put(u_28, v_28, g_12);
  t = z_11;
  return(t);
}
static ATerm p_6 (ATerm z_80 (ATerm), ATerm e_29, ATerm d_29, ATerm t)
{
  static ATerm y_0 (ATerm t)
  {
    ATerm r_12 = NULL,s_12 = NULL;
    if(match_cons(t, sym__2))
      {
        r_12 = ATgetArgument(t, 0);
        s_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, e_29, r_12, s_12);
    t = z_80(t);
    return(t);
  }
  t = d_29;
  t = map_1_0(y_0, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = NULL,u_12 = NULL;
      t_12 = t;
      t = (ATerm) ATinsert(ATempty, term_a_22);
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_12, (ATerm) ATinsert(ATempty, term_a_22));
      t = w_6(t_12, u_12, t);
      LocalPopChoice(z_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_21;
      {
        ATerm b_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_22 = t;
            if((PushChoice() == 0))
              {
                ATerm x_12 = NULL,b_13 = NULL;
                x_12 = t;
                t = (ATerm) ATinsert(ATempty, term_h_22);
                b_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_12, (ATerm) ATinsert(ATempty, term_h_22));
                t = w_6(x_12, b_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_22;
              }
            t = debug_1_0(a_1, t);
            LocalPopChoice(f_22);
          }
        else
          {
            t = b_22;
            t = debug_1_0(c_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_k_22;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  c_14 = t;
  t = term_m_20;
  d_14 = t;
  t = (ATerm) ATinsert(ATempty, term_l_22);
  e_14 = t;
  t = SSL_printnl(d_14, e_14);
  t = c_14;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm f_14 = NULL,k_14 = NULL,l_14 = NULL;
  if(match_cons(t, sym__3))
    {
      f_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
      l_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_6(f_14, k_14, l_14, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  t = term_m_20;
  n_14 = t;
  t = (ATerm) ATinsert(ATempty, term_m_22);
  o_14 = t;
  t = SSL_printnl(n_14, o_14);
  t = m_14;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  t = term_m_20;
  q_14 = t;
  t = (ATerm) ATinsert(ATempty, term_l_22);
  r_14 = t;
  t = SSL_printnl(q_14, r_14);
  t = p_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,g_13 = NULL,j_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  c_13 = t;
  t = if_verbose5_1_0(d_1, t);
  {
    ATerm n_22 = t;
    if((PushChoice() == 0))
      {
        ATerm w_13 = NULL,z_13 = NULL;
        t = term_o_22;
        w_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_13);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATmakeAppl(sym_Imported_1, c_13));
        t = d_7(w_13, z_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_22;
      }
  }
  g_13 = t;
  t = term_o_22;
  t_13 = t;
  t = term_p_22;
  u_13 = t;
  t = (ATerm) ATinsert(ATempty, c_13);
  v_13 = t;
  t = SSL_table_put(t_13, u_13, v_13);
  t = g_13;
  t = if_verbose4_1_0(j_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_1, t);
  d_13 = t;
  t = term_o_22;
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, d_13);
  t = p_6(o_1, p_13, d_13, t);
  t = if_verbose6_1_0(p_1, t);
  t = term_o_22;
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_13);
  n_13 = t;
  t = (ATerm) ATempty;
  o_13 = t;
  t = SSL_table_put(j_13, n_13, o_13);
  t = (ATerm) ATmakeAppl(sym__3, term_o_22, (ATerm)ATmakeAppl(sym_Imported_1, c_13), (ATerm) ATempty);
  t = if_verbose4_1_0(r_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,g_15 = NULL,i_15 = NULL;
  e_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_15 = ATgetFirst((ATermList) t);
          i_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 = NULL,d_5 = NULL,e_5 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(e_15);
            a_5 = t;
            t = g_15;
            t = a_81(t);
            d_5 = t;
            t = i_15;
            t = filter_1_0(a_81, t);
            e_5 = t;
            t = (ATerm) ATinsert(CheckATermList(e_5), d_5);
            b_1 = t;
            t = SSLsetAnnotations(b_1, a_5);
            LocalPopChoice(t_22);
          }
        else
          {
            t = q_22;
            t = i_15;
            t = filter_1_0(a_81, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t)
{
  static ATerm t_15 (ATerm t)
  {
    ATerm u_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_70(t);
        t = t_15(t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = u_22;
        t = f_70(t);
      }
    return(t);
  }
  t = t_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_22 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_15 = NULL,v_15 = NULL;
      t = term_g_8;
      u_15 = t;
      t = term_c_23;
      v_15 = t;
      t = term_d_23;
      t = d_7(u_15, v_15, t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = y_22;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_15 = NULL;
            t = term_i_23;
            w_15 = t;
            t = SSL_getenv(w_15);
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_j_23;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  t = term_o_22;
  l_16 = t;
  t = term_l_23;
  m_16 = t;
  t = term_s_23;
  t = d_7(l_16, m_16, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm t_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_23;
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_16 = NULL;
  t = if_verbose5_1_0(u_1, t);
  d_16 = t;
  {
    ATerm v_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_16 = NULL,h_16 = NULL;
        t = term_o_22;
        g_16 = t;
        t = term_p_22;
        h_16 = t;
        t = term_b_24;
        t = d_7(g_16, h_16, t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = v_23;
        {
          ATerm i_16 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_16 = t;
          t = repeat_2_0(z_1, _id, t);
          t = i_16;
        }
      }
  }
  t = d_16;
  t = if_verbose5_1_0(a_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm d_18 (ATerm x_16, ATerm t)
{
  ATerm z_16 = NULL,c_17 = NULL,d_17 = NULL;
  t = term_o_22;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_16);
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATmakeAppl(sym_Tool_1, x_16));
  t = d_7(c_17, d_17, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_24 = ATgetFirst((ATermList) t);
      if(match_cons(e_24, sym__2))
        {
          ATerm h_24 = ATgetArgument(e_24, 0);
          z_16 = ATgetArgument(e_24, 1);
        }
      else
        _fail(t);
      {
        ATerm g_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_16;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_o_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 = NULL,i_17 = NULL,k_17 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      k_17 = t;
      if(match_cons(t, sym__2))
        {
          e_17 = ATgetArgument(t, 0);
          i_17 = ATgetArgument(t, 1);
          {
            ATerm p_24 = t;
            int q_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
                t = term_o_22;
                o_17 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_17);
                p_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATmakeAppl(sym_Tool_1, e_17));
                t = d_7(o_17, p_17, t);
                {
                  static ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((i_17 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((n_17 != NULL) && (n_17 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                }
                t = not_null(n_17);
                LocalPopChoice(q_24);
              }
            else
              {
                t = p_24;
                t = d_18(k_17, t);
              }
          }
        }
      else
        {
          t = d_18(k_17, t);
        }
      t = if_verbose5_1_0(f_2, t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = k_24;
      {
        ATerm w_17 = NULL,d_6 = NULL,e_6 = NULL;
        w_17 = t;
        t = term_m_20;
        d_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), w_17), term_r_24);
        e_6 = t;
        t = SSL_printnl(d_6, e_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), w_17), term_r_24);
        t = if_verbose5_1_0(j_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,l_18 = NULL;
  l_18 = t;
  t = e_98(t);
  t = xtc_find_0_0(t);
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_18, l_18);
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm m_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_18, l_18);
      t = j_6(j_18, l_18, t);
      t = term_u_24;
      m_18 = t;
      t = SSL_exit(m_18);
      return(t);
    }
    t = fork_and_wait_1_0(n_2, t);
  }
  t = l_18;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_18 = NULL,t_18 = NULL;
  r_18 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_18 = NULL,x_18 = NULL;
      t = r_18;
      t = xtc_new_file_0_0(t);
      w_18 = t;
      t = r_0(t);
      x_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_18, (ATerm) ATinsert(ATinsert(ATempty, w_18), term_h_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_18);
    }
  else
    {
      ATerm z_18 = NULL,a_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_18;
      t = xtc_new_file_0_0(t);
      z_18 = t;
      t = r_0(t);
      a_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_18), term_h_8), t_18), term_v_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_18);
    }
  return(t);
}
ATerm debug_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  d_19 = t;
  t = j_84(t);
  e_19 = t;
  t = term_m_20;
  f_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_19), e_19);
  g_19 = t;
  t = SSL_printnl(f_19, g_19);
  t = d_19;
  return(t);
}
static ATerm v_19 (ATerm k_19, ATerm t)
{
  t = k_19;
  {
    ATerm w_24 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_24 = ATgetArgument(t, 0);
            ATerm y_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_24;
      }
  }
  t = term_z_24;
  t = debug_1_0(o_2, t);
  t = (ATerm) ATmakeAppl(sym__2, k_19, term_n_11);
  t = open_file_0_0(t);
  return(t);
}
static ATerm w_19 (ATerm m_19, ATerm n_19, ATerm o_19, ATerm t)
{
  t = SSL_open_file(m_19, n_19);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_19(s_19, t);
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            t = w_19(t_19, u_19, s_19, t);
          }
      }
    }
  else
    {
      t = v_19(s_19, t);
    }
  return(t);
}
static ATerm r_6 (ATerm r_80 (ATerm), ATerm t_26, ATerm r_26, ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  t = r_80(t);
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_19, t_26, r_26);
  t = e_7(x_19, t_26, r_26, t);
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_20 = NULL;
        t = term_j_25;
        f_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_19, term_j_25);
        t = d_7(x_19, f_20, t);
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_19 = ATgetFirst((ATermList) t);
      b_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_25;
  d_20 = t;
  t = (ATerm) ATinsert(CheckATermList(b_20), (ATerm) ATinsert(CheckATermList(y_19), t_26));
  e_20 = t;
  t = SSL_table_put(x_19, d_20, e_20);
  t = c_20;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm h_20 = NULL;
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 = NULL,h_7 = NULL;
      o_20 = t;
      t = term_q_25;
      h_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_20, term_q_25);
      t = t_6(o_20, h_7, t);
      h_20 = t;
      t = SSL_mkstemp(h_20);
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm p_20 = NULL;
        t = term_s_25;
        p_20 = t;
        t = SSL_perror(p_20);
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
static ATerm r_2 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_20 = NULL,v_20 = NULL,w_20 = NULL,y_20 = NULL,a_21 = NULL;
  t = P__tmpdir_0_0(t);
  y_20 = t;
  t = term_u_25;
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_20, term_u_25);
  t = t_6(y_20, a_21, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      v_20 = ATgetArgument(t, 0);
      t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_9;
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_20, term_b_9);
  t = r_6(r_2, v_20, w_20, t);
  t = SSL_close(t_20);
  t = v_20;
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  b_21 = t;
  t = xtc_new_file_0_0(t);
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_21, term_n_11);
  t = open_file_0_0(t);
  t = SSL_print(c_21, b_21);
  t = SSL_close_file(c_21);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_21);
  return(t);
}
static ATerm y_21 (ATerm k_21, ATerm t)
{
  t = SSL_fclose(k_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_21 = NULL,w_21 = NULL;
  w_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_21 = ATgetArgument(t, 0);
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_21);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            t = y_21(w_21, t);
          }
      }
    }
  else
    {
      t = y_21(w_21, t);
    }
  return(t);
}
static ATerm s_6 (ATerm q_39, ATerm t)
{
  t = SSL_read_term_from_stream(q_39);
  return(t);
}
static ATerm t_6 (ATerm b_35, ATerm c_35, ATerm t)
{
  t = SSL_strcat(b_35, c_35);
  return(t);
}
static ATerm u_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  ATerm c_22 = NULL;
  t = SSL_fopen(g_14, h_14);
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_22 = NULL;
  t = SSL_stdin_stream();
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_22 = NULL;
  t = SSL_stdout_stream();
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_22 = NULL;
  t = SSL_stderr_stream();
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_22);
  return(t);
}
static ATerm c_24 (ATerm r_22, ATerm t)
{
  ATerm s_22 = NULL;
  t = SSL_explode_term(r_22);
  if(match_cons(t, sym__2))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(((ATgetType(y_25) == AT_LIST) && !(ATisEmpty(y_25))))
          {
            s_22 = ATgetFirst((ATermList) y_25);
            {
              ATerm z_25 = (ATerm) ATgetNext((ATermList) y_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_24 (ATerm v_22, ATerm w_22, ATerm z_22, ATerm t)
{
  ATerm a_23 = NULL,e_23 = NULL,f_23 = NULL,k_23 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(z_22);
  f_23 = t;
  t = v_22;
  if(match_cons(t, sym_Path_1))
    {
      k_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_23, w_22);
  e_1 = t;
  t = SSLsetAnnotations(e_1, f_23);
  if(match_cons(t, sym__2))
    {
      a_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(a_23, e_23, t);
  return(t);
}
static ATerm i_24 (ATerm m_23, ATerm n_23, ATerm o_23, ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,w_23 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(o_23);
  r_23 = t;
  t = SSL_is_string(m_23);
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_23, n_23);
  h_1 = t;
  t = SSLsetAnnotations(h_1, r_23);
  if(match_cons(t, sym__2))
    {
      p_23 = ATgetArgument(t, 0);
      q_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(p_23, q_23, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  y_23 = t;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
      {
        ATerm a_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_24(y_23, t);
            LocalPopChoice(c_26);
          }
        else
          {
            t = a_26;
            {
              ATerm d_26 = t;
              int e_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_24(z_23, a_24, y_23, t);
                  LocalPopChoice(e_26);
                }
              else
                {
                  t = d_26;
                  t = i_24(z_23, a_24, y_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_24(y_23, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,t_24 = NULL;
  t_24 = t;
  {
    ATerm f_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_24, term_l_26);
        t = v_6(t);
        LocalPopChoice(k_26);
      }
    else
      {
        t = f_26;
        {
          ATerm u_7 = NULL,x_7 = NULL;
          t = term_m_26;
          x_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_26, t_24);
          t = t_6(x_7, t_24, t);
          u_7 = t;
          t = SSL_perror(u_7);
          _fail(t);
        }
      }
  }
  m_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(n_24, t);
  l_24 = t;
  t = m_24;
  t = fclose_0_0(t);
  t = l_24;
  return(t);
}
static ATerm w_6 (ATerm x_13, ATerm y_13, ATerm t)
{
  t = SSL_access(x_13, y_13);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_25 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_25 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_h_22);
      c_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_25, (ATerm) ATinsert(ATempty, term_h_22));
      t = w_6(a_25, c_25, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm g_97 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = g_97(t);
  t = print_to_0_0(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm k_25 = NULL,p_25 = NULL,r_25 = NULL;
  r_25 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_26 = ATgetArgument(t, 0);
            {
              ATerm a_8 = NULL,q_1 = NULL;
              t = SSLgetAnnotations(r_25);
              a_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_26);
              q_1 = t;
              t = SSLsetAnnotations(q_1, a_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_25;
          }
        LocalPopChoice(o_26);
        t = xtc_transform_file_2_0(v_2, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = n_26;
        t = xtc_transform_term_2_0(w_2, create_abox2latex_args_0_0, t);
      }
  }
  k_25 = t;
  t = term_p_26;
  t = create_header_0_0(t);
  p_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_25), p_25);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_q_26;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(u_2, t);
  return(t);
}
static ATerm d_7 (ATerm o_29, ATerm p_29, ATerm t)
{
  t = SSL_table_get(o_29, p_29);
  return(t);
}
static ATerm y_6 (ATerm c_28, ATerm d_28, ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  h_26 = t;
  {
    ATerm s_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = d_7(c_28, d_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_26 = ATgetFirst((ATermList) t);
            g_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_26);
        t = SSL_table_put(c_28, d_28, g_26);
        t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, g_26);
      }
    else
      {
        t = s_26;
        t = SSL_table_remove(c_28, d_28);
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
      }
  }
  t = h_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  y_26 = t;
  t = o_80(t);
  x_26 = t;
  {
    ATerm w_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        t = term_j_25;
        b_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_26, term_j_25);
        t = d_7(x_26, b_27, t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_26 = ATgetFirst((ATermList) t);
      i_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_25;
  z_26 = t;
  t = SSL_table_put(x_26, z_26, i_26);
  t = j_26;
  {
    static ATerm x_2 (ATerm t)
    {
      ATerm c_27 = NULL;
      c_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_26, c_27);
      t = y_6(x_26, c_27, t);
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = y_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_69(t);
      t = a_70(t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      t = a_70(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL,q_27 = NULL;
  h_27 = t;
  t = n_80(t);
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_27, term_j_25);
  {
    ATerm f_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_27 = ATgetArgument(t, 0);
            ATerm m_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_25;
        u_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_27, term_j_25);
        t = d_7(g_27, u_27, t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = f_27;
        t = (ATerm) ATempty;
      }
  }
  j_27 = t;
  t = term_j_25;
  k_27 = t;
  t = (ATerm) ATinsert(CheckATermList(j_27), (ATerm) ATempty);
  q_27 = t;
  t = SSL_table_put(g_27, k_27, q_27);
  t = h_27;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_28);
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = n_28;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm f_28 = NULL;
  static ATerm b_3 (ATerm t)
  {
    ATerm g_28 = NULL;
    g_28 = t;
    {
      ATerm p_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_28 = NULL,i_28 = NULL;
          t = term_t_25;
          h_28 = t;
          t = term_j_25;
          i_28 = t;
          t = term_s_27;
          t = d_7(h_28, i_28, t);
          LocalPopChoice(r_27);
        }
      else
        {
          t = p_27;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_28 != NULL) && (f_28 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_28 = ATgetFirst((ATermList) t);
        {
          ATerm t_27 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = f_28;
    t = map_1_0(g_3, t);
    t = g_28;
    t = end_scope_1_0(n_3, t);
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  t = restore_always_2_0(q_97, b_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,h_29 = NULL,i_29 = NULL;
  z_28 = t;
  t = term_b_9;
  t = whoami_0_0(t);
  a_29 = t;
  t = term_m_20;
  h_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_27), a_29), term_v_27);
  i_29 = t;
  t = SSL_printnl(h_29, i_29);
  t = term_h_10;
  b_29 = t;
  t = SSL_exit(b_29);
  t = z_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,q_29 = NULL,r_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_29 = NULL,v_29 = NULL,w_29 = NULL;
      t = term_b_9;
      t = n_0(t);
      s_29 = t;
      t = term_a_28;
      v_29 = t;
      t = term_b_28;
      w_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_28, term_b_28, s_29);
      t = e_7(v_29, w_29, s_29, t);
      _fail(t);
    }
  else
    {
      ATerm a_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_29 = ATgetFirst((ATermList) t);
          n_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_29 = ATgetFirst((ATermList) t);
          r_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_29;
      t = k_0(t);
      t = q_29;
      t = l_0(t);
      a_30 = t;
      t = (ATerm) ATinsert(CheckATermList(r_29), a_30);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_72 (ATerm), ATerm t)
{
  static ATerm z_30 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
    y_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_30 = ATgetFirst((ATermList) t);
        x_30 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_8 = NULL,a_9 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(y_30);
          r_8 = t;
          t = x_30;
          t = z_30(t);
          a_9 = t;
          t = (ATerm) ATinsert(CheckATermList(a_9), w_30);
          v_1 = t;
          t = SSLsetAnnotations(v_1, r_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_30;
        t = q_72(t);
      }
    return(t);
  }
  t = z_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_30;
    }
  else
    {
      static ATerm p_3 (ATerm t)
      {
        t = not_null(e_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_30 = ATgetFirst((ATermList) t);
          if(((e_30 != NULL) && (e_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_30;
      t = at_end_1_0(p_3, t);
    }
  return(t);
}
static ATerm u_31 (ATerm e_31, ATerm t)
{
  ATerm f_31 = NULL;
  t = SSL_explode_term(e_31);
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  j_31 = t;
  if(match_cons(t, sym__2))
    {
      h_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_3 (ATerm t)
            {
              t = i_31;
              return(t);
            }
            t = h_31;
            t = at_end_1_0(r_3, t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            t = u_31(j_31, t);
          }
      }
    }
  else
    {
      t = u_31(j_31, t);
    }
  return(t);
}
static ATerm z_6 (ATerm m_47, ATerm l_47, ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  t = m_47;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_31 = NULL;
        t = term_g_8;
        z_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, m_47);
        t = d_7(z_31, m_47, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATempty;
      }
  }
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_47, w_31);
  t = conc_0_0(t);
  v_31 = t;
  t = term_g_8;
  x_31 = t;
  t = SSL_table_put(x_31, m_47, v_31);
  t = (ATerm) ATmakeAppl(sym__3, term_g_8, m_47, v_31);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  if(match_string(t, "-k"))
    {
      t = b_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_32;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm c_32 = NULL,e_32 = NULL,f_32 = NULL;
  c_32 = t;
  t = SSL_string_to_int(c_32);
  e_32 = t;
  t = term_o_28;
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, e_32);
  t = g_7(f_32, e_32, t);
  t = c_32;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, d_4, g_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm j_32 = NULL;
  j_32 = t;
  if(match_string(t, "-S"))
    {
      t = j_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_32;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  t = term_c_10;
  k_32 = t;
  t = term_q_28;
  l_32 = t;
  t = term_r_28;
  t = g_7(k_32, l_32, t);
  t = term_s_28;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_t_28;
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
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  t = SSL_string_to_int(m_32);
  n_32 = t;
  t = term_c_10;
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, n_32);
  t = g_7(o_32, n_32, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_32);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_x_28;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL;
  t = term_y_28;
  q_32 = t;
  t = term_b_9;
  r_32 = t;
  t = term_c_29;
  t = g_7(q_32, r_32, t);
  t = term_f_29;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, k_4, n_4, t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm l_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, p_4, q_4, t);
            LocalPopChoice(t_29);
          }
        else
          {
            t = l_29;
            t = Option_3_0(r_4, t_4, z_4, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  if(match_string(t, "-o"))
    {
      t = t_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_32;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL;
  u_32 = t;
  t = term_h_8;
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, u_32);
  t = g_7(v_32, u_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_32);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, f_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  if(match_string(t, "-i"))
    {
      t = x_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_32;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  y_32 = t;
  t = term_v_24;
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, y_32);
  t = g_7(z_32, y_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_32);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, k_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm a_33 = NULL,d_33 = NULL,g_33 = NULL;
  a_33 = t;
  t = term_v_8;
  d_33 = t;
  t = (ATerm) ATinsert(ATempty, a_33);
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, (ATerm) ATinsert(ATempty, a_33));
  t = z_6(d_33, g_33, t);
  t = a_33;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  h_33 = t;
  t = term_h_11;
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, h_33);
  t = g_7(i_33, h_33, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm b_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(f_30);
    }
  else
    {
      t = b_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm i_30 = t;
              int j_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
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
                        t = keep_option_0_0(t);
                        LocalPopChoice(l_30);
                      }
                    else
                      {
                        t = k_30;
                        {
                          ATerm m_30 = t;
                          int n_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(m_5, o_5, p_5, t);
                              LocalPopChoice(n_30);
                            }
                          else
                            {
                              t = m_30;
                              t = ArgOption_3_0(r_5, s_5, t_5, t);
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
  ATerm j_33 = NULL,n_33 = NULL,q_33 = NULL,t_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_9;
  t = whoami_0_0(t);
  j_33 = t;
  t = term_m_20;
  q_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_30), j_33);
  t_33 = t;
  t = SSL_printnl(q_33, t_33);
  t = term_h_10;
  n_33 = t;
  t = SSL_exit(n_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_33 = NULL,x_33 = NULL;
  t = term_g_8;
  u_33 = t;
  t = term_p_30;
  x_33 = t;
  t = term_q_30;
  t = d_7(u_33, x_33, t);
  return(t);
}
static ATerm a_7 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_25, g_25);
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      t = SSL_addr(f_25, g_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,e_34 = NULL,f_34 = NULL;
  a_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_34;
      t = f_79(t);
    }
  else
    {
      ATerm k_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_34 = ATgetFirst((ATermList) t);
          f_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_34;
      t = foldr_2_0(f_79, g_79, t);
      k_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_34, k_34);
      t = g_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      p_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(p_9, q_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_34 = NULL,j_9 = NULL,k_9 = NULL;
  t = times_0_0(t);
  k_9 = t;
  t = SSL_explode_term(k_9);
  if(match_cons(t, sym__2))
    {
      ATerm t_30 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9;
  t = foldr_2_0(u_5, v_5, t);
  q_34 = t;
  t = SSL_TicksToSeconds(q_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  if(match_cons(t, sym__2))
    {
      h_35 = ATgetArgument(t, 0);
      i_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_35;
        if((h_35 != t))
          {
            _fail(t);
          }
        t = g_35;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_35, i_35);
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              t = SSL_gtr(h_35, i_35);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm p_35 = NULL;
  p_35 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
        t = term_g_8;
        s_35 = t;
        t = term_c_10;
        t_35 = t;
        t = term_g_10;
        t = d_7(s_35, t_35, t);
        r_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_35, term_h_10);
        t = geq_0_0(t);
        t = p_35;
        t = c_96(t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        t = p_35;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,a_36 = NULL,b_36 = NULL;
  t = run_time_0_0(t);
  x_35 = t;
  t = term_b_9;
  t = whoami_0_0(t);
  y_35 = t;
  t = term_m_20;
  a_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_31), x_35), term_s_11), y_35);
  b_36 = t;
  t = SSL_printnl(a_36, b_36);
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_31), x_35), term_s_11), y_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_28;
  c_36 = t;
  t = SSL_exit(c_36);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  n_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_36 = ATgetArgument(t, 0);
          {
            ATerm k_10 = NULL,g_2 = NULL;
            t = SSLgetAnnotations(n_36);
            k_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_36);
            g_2 = t;
            t = SSLsetAnnotations(g_2, k_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_65 (ATerm), ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_36 = NULL,g_36 = NULL;
      t = term_g_8;
      f_36 = t;
      t = term_m_31;
      g_36 = t;
      t = term_n_31;
      t = d_7(f_36, g_36, t);
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      t = fetch_1_0(x_5, t);
    }
  t = n_65(t);
  return(t);
}
ATerm map_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  static ATerm d_37 (ATerm t)
  {
    ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
    a_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_37;
      }
    else
      {
        ATerm g_11 = NULL,j_11 = NULL,k_11 = NULL,i_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_37 = ATgetFirst((ATermList) t);
            c_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_37);
        g_11 = t;
        t = b_37;
        t = z_71(t);
        j_11 = t;
        t = c_37;
        t = d_37(t);
        k_11 = t;
        t = (ATerm) ATinsert(CheckATermList(k_11), j_11);
        i_2 = t;
        t = SSLsetAnnotations(i_2, g_11);
      }
    return(t);
  }
  t = d_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_37 = ATgetFirst((ATermList) t);
      h_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_37 = NULL,m_37 = NULL;
        static ATerm c_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_37)), not_null(m_37));
          return(t);
        }
        t = h_37;
        t = i_0(t);
        if(((l_37 != NULL) && (l_37 != t)))
          _fail(t);
        else
          l_37 = t;
        t = g_37;
        t = g_0(t);
        if(((m_37 != NULL) && (m_37 != t)))
          _fail(t);
        else
          m_37 = t;
        t = h_37;
        t = reverse_acc_2_0(g_0, c_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,k_2 = NULL;
  u_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_37);
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_37);
  k_2 = t;
  t = SSLsetAnnotations(k_2, s_37);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm w_37 = NULL;
  w_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_37), term_o_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_37 = NULL,r_37 = NULL;
      t = term_g_8;
      q_37 = t;
      t = term_p_30;
      r_37 = t;
      t = term_q_30;
      t = d_7(q_37, r_37, t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = fetch_1_0(f_6, t);
    }
  t = term_r_31;
  t = echo_0_0(t);
  t = term_a_28;
  o_37 = t;
  t = term_b_28;
  p_37 = t;
  t = term_s_31;
  t = d_7(o_37, p_37, t);
  t = reverse_acc_2_0(_id, k_6, t);
  t = map_1_0(l_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_72 (ATerm), ATerm t)
{
  static ATerm a_39 (ATerm t)
  {
    ATerm t_38 = NULL,y_38 = NULL,z_38 = NULL;
    t_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_38 = ATgetFirst((ATermList) t);
        z_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_11 = NULL,c_12 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(t_38);
          y_11 = t;
          t = y_38;
          t = j_72(t);
          c_12 = t;
          t = (ATerm) ATinsert(CheckATermList(z_38), c_12);
          g_5 = t;
          t = SSLsetAnnotations(g_5, y_11);
          LocalPopChoice(y_31);
        }
      else
        {
          t = t_31;
          {
            ATerm n_12 = NULL,y_12 = NULL,h_5 = NULL;
            t = SSLgetAnnotations(t_38);
            n_12 = t;
            t = z_38;
            t = a_39(t);
            y_12 = t;
            t = (ATerm) ATinsert(CheckATermList(y_12), y_38);
            h_5 = t;
            t = SSLsetAnnotations(h_5, n_12);
          }
        }
    }
    return(t);
  }
  t = a_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  {
    ATerm a_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_32 = ATgetFirst((ATermList) t);
                ATerm h_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_39;
          }
        LocalPopChoice(d_32);
      }
    else
      {
        t = a_32;
        t = (ATerm) ATinsert(ATempty, e_39);
      }
  }
  f_39 = t;
  t = term_j_8;
  g_39 = t;
  t = SSL_printnl(g_39, f_39);
  t = e_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL;
  t = term_g_8;
  m_39 = t;
  t = term_p_30;
  n_39 = t;
  t = term_q_30;
  t = d_7(m_39, n_39, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  t = term_i_32;
  o_39 = t;
  t = term_b_9;
  p_39 = t;
  t = term_p_32;
  t = g_7(o_39, p_39, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,v_39 = NULL,w_39 = NULL;
  t = term_i_32;
  v_39 = t;
  t = term_b_9;
  w_39 = t;
  t = term_p_32;
  t = g_7(v_39, w_39, t);
  t = term_w_32;
  r_39 = t;
  t = term_b_9;
  s_39 = t;
  t = term_b_33;
  t = g_7(r_39, s_39, t);
  t = term_c_33;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_7, f_7, i_7, t);
      LocalPopChoice(k_33);
    }
  else
    {
      t = f_33;
      t = Option_3_0(j_7, k_7, l_7, t);
    }
  return(t);
}
static ATerm g_7 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm x_39 = NULL;
  t = term_g_8;
  x_39 = t;
  t = SSL_table_put(x_39, g_47, h_47);
  t = (ATerm) ATmakeAppl(sym__3, term_g_8, g_47, h_47);
  return(t);
}
static ATerm e_7 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_33 = ATgetArgument(t, 0);
            ATerm p_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
        t = d_7(x_27, y_27, t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = (ATerm) ATempty;
      }
  }
  a_40 = t;
  t = (ATerm) ATinsert(CheckATermList(a_40), w_27);
  b_40 = t;
  t = SSL_table_put(x_27, y_27, b_40);
  t = z_39;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
      t = term_b_9;
      t = e_0(t);
      j_40 = t;
      t = term_a_28;
      k_40 = t;
      t = term_b_28;
      l_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_28, term_b_28, j_40);
      t = e_7(k_40, l_40, j_40, t);
      _fail(t);
    }
  else
    {
      ATerm o_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_40 = ATgetFirst((ATermList) t);
          i_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_40;
      t = c_0(t);
      t = term_b_9;
      t = d_0(t);
      o_40 = t;
      t = (ATerm) ATinsert(CheckATermList(i_40), o_40);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,l_5 = NULL;
  z_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_40 = ATgetFirst((ATermList) t);
      w_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_40);
  p_40 = t;
  t = q_40;
  t = x_58(t);
  x_40 = t;
  t = w_40;
  t = y_58(t);
  y_40 = t;
  t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
  l_5 = t;
  t = SSLsetAnnotations(l_5, p_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,h_41 = NULL,i_41 = NULL,k_41 = NULL,l_41 = NULL,n_5 = NULL;
  e_41 = t;
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_33;
        t = s_86(t);
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
      }
  }
  t = e_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_41 = ATgetFirst((ATermList) t);
      i_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  f_41 = t;
  t = term_p_30;
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, h_41);
  t = g_7(l_41, h_41, t);
  t = i_41;
  {
    static ATerm v_41 (ATerm t)
    {
      ATerm w_33 = t;
      int y_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_33 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_41 = NULL;
              o_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_41;
              LocalPopChoice(b_34);
            }
          else
            {
              t = z_33;
              t = s_86(t);
              t = Cons_2_0(_id, v_41, t);
            }
          LocalPopChoice(y_33);
        }
      else
        {
          t = w_33;
          {
            ATerm r_41 = NULL,s_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_41 = ATgetFirst((ATermList) t);
                s_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_41), (ATerm) ATmakeAppl(sym_Undefined_1, r_41));
          }
        }
      return(t);
    }
    t = v_41(t);
  }
  k_41 = t;
  t = (ATerm) ATinsert(CheckATermList(k_41), (ATerm) ATmakeAppl(sym_Program_1, h_41));
  n_5 = t;
  t = SSLsetAnnotations(n_5, f_41);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm h_42 = NULL;
  h_42 = t;
  if(match_string(t, "--help"))
    {
      t = h_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_42;
        }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL;
  t = term_m_31;
  i_42 = t;
  t = term_b_9;
  j_42 = t;
  t = term_c_34;
  t = g_7(i_42, j_42, t);
  t = term_d_34;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_g_34;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  c_42 = t;
  t = term_a_28;
  e_42 = t;
  t = term_b_28;
  f_42 = t;
  t = (ATerm) ATempty;
  g_42 = t;
  t = SSL_table_put(e_42, f_42, g_42);
  t = c_42;
  {
    static ATerm m_7 (ATerm t)
    {
      ATerm h_34 = t;
      int i_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_86(t);
          LocalPopChoice(i_34);
        }
      else
        {
          t = h_34;
          {
            ATerm j_34 = t;
            int l_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_7, p_7, q_7, t);
                LocalPopChoice(l_34);
              }
            else
              {
                t = j_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_7, t);
  }
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_42 = NULL;
        u_42 = t;
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_13 = NULL;
              t = u_42;
              {
                ATerm r_34 = t;
                int s_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_13 = NULL,m_13 = NULL;
                    t = term_g_8;
                    l_13 = t;
                    t = term_m_31;
                    m_13 = t;
                    t = term_n_31;
                    t = d_7(l_13, m_13, t);
                    LocalPopChoice(s_34);
                  }
                else
                  {
                    t = r_34;
                    t = fetch_1_0(r_7, t);
                  }
              }
              t = u_42;
              t = default_system_usage_0_0(t);
              t = term_q_28;
              k_13 = t;
              t = SSL_exit(k_13);
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
              {
                ATerm a_14 = NULL,b_14 = NULL,i_14 = NULL;
                t = term_g_8;
                b_14 = t;
                t = term_i_32;
                i_14 = t;
                t = term_t_34;
                t = d_7(b_14, i_14, t);
                t = u_42;
                t = default_system_about_0_0(t);
                t = term_q_28;
                a_14 = t;
                t = SSL_exit(a_14);
              }
            }
        }
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        {
          ATerm u_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
              static ATerm s_7 (ATerm t)
              {
                ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,q_5 = NULL;
                a_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_43);
                y_42 = t;
                t = z_42;
                if(((a_42 != NULL) && (a_42 != t)))
                  _fail(t);
                else
                  a_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_42);
                q_5 = t;
                t = SSLsetAnnotations(q_5, y_42);
                return(t);
              }
              t = fetch_1_0(s_7, t);
              t = term_m_20;
              w_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_42)), term_w_34);
              x_42 = t;
              t = SSL_printnl(w_42, x_42);
              t = (ATerm) ATmakeAppl(sym__2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_42)), term_w_34));
              t = default_system_usage_0_0(t);
              t = term_h_10;
              v_42 = t;
              t = SSL_exit(v_42);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
            }
        }
      }
  }
  b_42 = t;
  t = term_a_28;
  d_42 = t;
  t = SSL_table_destroy(d_42);
  t = b_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  t = parse_options_1_0(p_65, t);
  f_43 = t;
  t = term_x_34;
  i_43 = t;
  t = SSL_table_create(i_43);
  t = term_x_34;
  g_43 = t;
  t = term_y_34;
  h_43 = t;
  t = SSL_table_put(g_43, h_43, f_43);
  t = f_43;
  t = r_65(t);
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_65, t);
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_65(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = xtc_temp_files_1_0(v_7, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm f_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
      t = term_g_8;
      m_43 = t;
      t = term_v_24;
      n_43 = t;
      t = term_k_35;
      t = d_7(m_43, n_43, t);
      l_43 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_43);
      LocalPopChoice(j_35);
    }
  else
    {
      t = f_35;
      t = term_m_8;
    }
  t = abox2latex_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2latex_options_0_0, default_usage_0_0, _id, t_7, t);
  return(t);
}
