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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_t_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_f_36;
ATerm term_y_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_f_34;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_f_32;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_x_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_y_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_i_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_a_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_n_20;
ATerm term_j_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_g_15;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_l_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_z_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_f_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_m_10, term_h_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_q_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_e_13, term_f_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_o_13, term_p_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_a_14, term_b_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_g_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_o_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_a_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_z_17, term_a_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_r_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_w_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_h_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_m_19, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_19, term_r_19, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_x_19, term_z_19);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_l_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_u_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_y_22);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_y_25);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_l_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_u_29, term_b_9);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_b_31);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_l_32);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_x_28);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_b_9);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__2, term_j_33, term_b_9);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_b_9);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__3, term_t_28, term_x_28, (ATerm) ATempty);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_c_33);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_i_25);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm k_7 (ATerm f_37, ATerm g_37, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm s_6 (ATerm l_25, ATerm m_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm create_table_file_0_0 (ATerm t);
ATerm create_abox2latex_args_0_0 (ATerm t);
static ATerm t_6 (ATerm e_41, ATerm f_41, ATerm t);
static ATerm u_6 (ATerm o_86 (ATerm), ATerm p_471, ATerm o_41, ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm t);
static ATerm v_6 (ATerm h_40, ATerm i_40, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm f_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm t_85 (ATerm), ATerm t);
static ATerm x_6 (ATerm w_31, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm j_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm i_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm k_98 (ATerm), ATerm t);
static ATerm z_6 (ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm s_21, ATerm r_21, ATerm t);
static ATerm a_7 (ATerm e_78 (ATerm), ATerm o_21, ATerm n_21, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm b_7 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t);
static ATerm c_7 (ATerm b_83 (ATerm), ATerm e_29, ATerm d_29, ATerm t);
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
ATerm filter_1_0 (ATerm d_83 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm q_18 (ATerm o_17, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm h_100 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm m_86 (ATerm), ATerm t);
static ATerm u_20 (ATerm g_20, ATerm t);
static ATerm v_20 (ATerm k_20, ATerm l_20, ATerm m_20, ATerm t);
static ATerm o_2 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm e_7 (ATerm t_82 (ATerm), ATerm t_26, ATerm r_26, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
static ATerm c_23 (ATerm r_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_7 (ATerm k_41, ATerm t);
static ATerm g_7 (ATerm v_36, ATerm w_36, ATerm t);
static ATerm h_7 (ATerm g_14, ATerm h_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_25 (ATerm m_23, ATerm t);
static ATerm e_25 (ATerm s_23, ATerm w_23, ATerm x_23, ATerm t);
static ATerm h_25 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm t);
static ATerm i_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm j_7 (ATerm x_13, ATerm y_13, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm j_99 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm s_7 (ATerm q_29, ATerm r_29, ATerm t);
static ATerm l_7 (ATerm c_28, ATerm d_28, ATerm t);
ATerm end_scope_1_0 (ATerm q_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_82 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_99 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm k_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm y_33 (ATerm o_33, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_7 (ATerm g_49, ATerm f_49, ATerm t);
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
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm abox2latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_7 (ATerm f_25, ATerm g_25, ATerm t);
ATerm foldr_2_0 (ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_98 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm need_help_1_0 (ATerm h_67 (ATerm), ATerm t);
static ATerm w_7 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm t);
static ATerm x_7 (ATerm s_31, ATerm t_31, ATerm t);
ATerm lookup_table_0_1 (ATerm j_29, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_31, ATerm y_31, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm p_7 (ATerm u_31, ATerm v_31, ATerm t);
static ATerm q_7 (ATerm z_31, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm t_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm v_7 (ATerm a_49, ATerm b_49, ATerm t);
static ATerm t_7 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_88 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm parse_options_1_0 (ATerm u_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
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
    ATerm c_8 = t;
    int e_8 = stack_ptr;
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
        t = k_7(t_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
        LocalPopChoice(e_8);
      }
    else
      {
        t = c_8;
        {
          ATerm f_8 = t;
          int g_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = s_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm h_8 = t;
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
                    t = h_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, t_1, v_0);
              t = k_7(t_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
              LocalPopChoice(g_8);
            }
          else
            {
              t = f_8;
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
static ATerm k_7 (ATerm f_37, ATerm g_37, ATerm t)
{
  t = SSL_copy(f_37, g_37);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,t_2 = NULL;
      t = term_k_8;
      s_2 = t;
      t = term_l_8;
      t_2 = t;
      t = term_m_8;
      t = s_7(s_2, t_2, t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      t = term_o_8;
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
      t = term_l_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 = NULL,l_1 = NULL;
            t = term_k_8;
            k_1 = t;
            t = term_l_8;
            l_1 = t;
            t = term_m_8;
            t = s_7(k_1, l_1, t);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = term_o_8;
          }
      }
      f_1 = t;
      t = term_s_8;
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_8, f_1);
      t = k_7(g_1, f_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm t_8 = ATgetArgument(t, 0);
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), h_3), term_u_8);
  i_3 = t;
  t = SSL_concat_strings(i_3);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm z_2 = NULL;
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 = NULL,f_3 = NULL;
      t = term_k_8;
      e_3 = t;
      t = term_z_8;
      f_3 = t;
      t = term_a_9;
      t = s_7(e_3, f_3, t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_9), term_b_10), term_a_10), term_e_9), term_z_9), term_y_9), term_w_9), term_v_9), term_s_9), term_e_9), j_3), term_p_9), term_o_9), term_e_9), term_g_9), term_e_9), term_f_9), term_e_9);
  k_3 = t;
  t = SSL_concat_strings(k_3);
  return(t);
}
static ATerm s_6 (ATerm l_25, ATerm m_25, ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_25, m_25);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      t = SSL_subtr(l_25, m_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,o_3 = NULL,q_3 = NULL;
  t = term_f_10;
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL,v_3 = NULL;
        t = term_k_8;
        u_3 = t;
        t = term_f_10;
        v_3 = t;
        t = term_l_10;
        t = s_7(u_3, v_3, t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = term_m_10;
      }
  }
  m_3 = t;
  t = term_m_10;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, term_m_10);
  t = s_6(m_3, q_3, t);
  o_3 = t;
  t = SSL_int_to_string(o_3);
  l_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_3), term_f_10);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if(match_cons(n_10, sym_Stream_1))
        {
          b_4 = ATgetArgument(n_10, 0);
        }
      else
        _fail(t);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(b_4, c_4, t);
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  ATerm p_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL,a_4 = NULL;
      t = term_k_8;
      z_3 = t;
      t = term_z_8;
      a_4 = t;
      t = term_a_9;
      t = s_7(z_3, a_4, t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = p_10;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  w_3 = t;
  t = (ATerm) ATinsert(CheckATermList(w_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_j_11), term_i_11)), (ATerm) ATinsert(ATinsert(ATempty, term_g_11), term_f_11)), (ATerm) ATinsert(ATinsert(ATempty, term_e_11), term_d_11)), (ATerm) ATinsert(ATinsert(ATempty, term_b_11), term_z_10)), (ATerm) ATinsert(ATinsert(ATempty, term_x_10), term_w_10)), (ATerm) ATinsert(ATinsert(ATempty, term_v_10), term_u_10)));
  t = concat_0_0(t);
  y_3 = t;
  t = xtc_new_file_0_0(t);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_3, y_3);
  t = u_6(f_0, x_3, y_3, t);
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
  t = (ATerm) ATinsert(ATinsert(CheckATermList(h_4), f_4), term_k_11);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 = NULL,l_4 = NULL,m_4 = NULL;
        t = term_k_8;
        l_4 = t;
        t = term_n_11;
        m_4 = t;
        t = term_o_11;
        t = s_7(l_4, m_4, t);
        j_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(h_4), f_4), term_k_11), j_4), term_p_11);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
      }
  }
  return(t);
}
static ATerm t_6 (ATerm e_41, ATerm f_41, ATerm t)
{
  ATerm s_4 = NULL;
  t = SSL_write_term_to_stream_baf(e_41, f_41);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_4);
  return(t);
}
static ATerm u_6 (ATerm o_86 (ATerm), ATerm p_471, ATerm o_41, ATerm t)
{
  ATerm u_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_471, term_q_11);
  t = i_7(t);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_4, o_41);
  t = o_86(t);
  t = fclose_0_0(t);
  t = o_41;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      if(match_cons(r_11, sym_Stream_1))
        {
          x_4 = ATgetArgument(r_11, 0);
        }
      else
        _fail(t);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(x_4, y_4, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  w_4 = t;
  t = xtc_new_file_0_0(t);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, w_4);
  t = u_6(j_0, v_4, w_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_4);
  t = xtc_transform_file_2_0(g_99, h_99, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_execvp(h_40, i_40);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
  a_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_6 = ATgetArgument(t, 0);
      {
        ATerm x_1 = NULL,y_1 = NULL;
        t = SSL_int_to_string(c_6);
        x_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_11), x_1), term_s_11);
        y_1 = t;
        t = SSL_concat_strings(y_1);
      }
    }
  else
    {
      ATerm p_2 = NULL,q_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_6 = ATgetArgument(t, 0);
          d_6 = ATgetArgument(t, 1);
          e_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_6);
      p_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_6), term_b_12), p_2), term_v_11), c_6);
      q_2 = t;
      t = SSL_concat_strings(q_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  ATerm k_6 = NULL;
  static ATerm m_0 (ATerm t)
  {
    t = f_74(t);
    if(((k_6 != NULL) && (k_6 != t)))
      _fail(t);
    else
      k_6 = t;
    return(t);
  }
  t = fetch_1_0(m_0, t);
  t = not_null(k_6);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_6 = NULL;
  p_6 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm e_12 = ATgetArgument(t, 0);
              if((p_6 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm f_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_20), term_t_19), term_o_19), term_k_19), term_a_19), term_t_18), term_n_18), term_j_18), term_b_18), term_v_17), term_n_17), term_j_17), term_e_17), term_x_16), term_r_16), term_j_16), term_c_16), term_y_15), term_u_15), term_q_15), term_m_15), term_k_14), term_r_13), term_k_13), term_b_13), term_x_12), term_r_12), term_j_12);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_6);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_7 = NULL,n_8 = NULL;
  d_7 = t;
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_20 = ATgetArgument(t, 0);
            n_8 = ATgetArgument(t, 1);
            {
              ATerm e_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_20);
        {
          ATerm f_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL;
              t = n_8;
              {
                ATerm i_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_3 = t;
              t = term_j_20;
              c_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_3), term_n_20);
              d_3 = t;
              t = SSL_printnl(c_3, d_3);
              t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, a_3), term_n_20));
              LocalPopChoice(h_20);
            }
          else
            {
              t = f_20;
              t = d_7;
            }
        }
      }
    else
      {
        t = b_20;
        t = d_7;
      }
  }
  t = d_7;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  d_9 = t;
  t = fork_0_0(t);
  c_9 = t;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_9;
        t = t_85(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = SSL_waitpid(c_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            if(((ATgetType(q_20) != AT_INT) || (ATgetInt((ATermInt) q_20) != 0)))
              _fail(t);
            {
              ATerm d_21 = ATgetArgument(t, 1);
            }
            {
              ATerm g_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = d_9;
      }
  }
  return(t);
}
static ATerm x_6 (ATerm w_31, ATerm t)
{
  t = SSL_hashtable_keys(w_31);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL;
  static ATerm s_0 (ATerm t)
  {
    ATerm k_9 = NULL,l_9 = NULL;
    k_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), k_9);
    t = s_7(not_null(i_9), k_9, t);
    l_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_9, l_9);
    return(t);
  }
  if(((i_9 != NULL) && (i_9 != t)))
    _fail(t);
  else
    i_9 = t;
  t = lookup_table_0_1(i_9, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(j_9, t);
  t = map_1_0(s_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm n_9 = NULL;
  n_9 = t;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL,u_9 = NULL,x_9 = NULL;
        t = term_k_8;
        u_9 = t;
        t = term_f_10;
        x_9 = t;
        t = term_l_10;
        t = s_7(u_9, x_9, t);
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, term_e_19);
        t = geq_0_0(t);
        t = n_9;
        t = j_98(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = n_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm c_10 = NULL;
  c_10 = t;
  {
    ATerm k_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_10 = NULL,j_10 = NULL,k_10 = NULL;
        t = term_k_8;
        j_10 = t;
        t = term_f_10;
        k_10 = t;
        t = term_l_10;
        t = s_7(j_10, k_10, t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, term_a_16);
        t = geq_0_0(t);
        t = c_10;
        t = i_98(t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = k_21;
        t = c_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  ATerm q_10 = NULL;
  q_10 = t;
  {
    ATerm p_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 = NULL,t_10 = NULL,a_11 = NULL;
        t = term_k_8;
        t_10 = t;
        t = term_f_10;
        a_11 = t;
        t = term_l_10;
        t = s_7(t_10, a_11, t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, term_z_12);
        t = geq_0_0(t);
        t = q_10;
        t = k_98(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = p_21;
        t = q_10;
      }
  }
  return(t);
}
static ATerm z_6 (ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm s_21, ATerm r_21, ATerm t)
{
  t = i_78(t);
  {
    static ATerm t_0 (ATerm t)
    {
      ATerm c_11 = NULL;
      c_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, c_11);
      t = h_78(t);
      return(t);
    }
    t = fetch_1_0(t_0, t);
  }
  t = r_21;
  return(t);
}
static ATerm a_7 (ATerm e_78 (ATerm), ATerm o_21, ATerm n_21, ATerm t)
{
  static ATerm i_12 (ATerm t)
  {
    ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
    w_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_11 = ATgetFirst((ATermList) t);
            y_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_11;
              {
                static ATerm u_0 (ATerm t)
                {
                  t = n_21;
                  return(t);
                }
                t = z_6(e_78, u_0, x_11, y_11, t);
              }
              t = i_12(t);
              LocalPopChoice(v_21);
            }
          else
            {
              t = u_21;
              {
                ATerm s_3 = NULL,e_4 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(w_11);
                s_3 = t;
                t = y_11;
                t = i_12(t);
                e_4 = t;
                t = (ATerm) ATinsert(CheckATermList(e_4), x_11);
                z_0 = t;
                t = SSLsetAnnotations(z_0, s_3);
              }
            }
        }
      }
    return(t);
  }
  t = o_21;
  t = i_12(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      if((g_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,w_12 = NULL;
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_22 = ATgetArgument(t, 0);
            ATerm g_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
        t = s_7(u_28, v_28, t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATempty;
      }
  }
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_12, w_28);
  t = a_7(x_0, p_12, w_28, t);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_28, v_28, o_12);
  t = lookup_table_0_1(u_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(v_28, o_12, w_12, t);
  t = n_12;
  return(t);
}
static ATerm c_7 (ATerm b_83 (ATerm), ATerm e_29, ATerm d_29, ATerm t)
{
  static ATerm y_0 (ATerm t)
  {
    ATerm h_13 = NULL,i_13 = NULL;
    if(match_cons(t, sym__2))
      {
        h_13 = ATgetArgument(t, 0);
        i_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, e_29, h_13, i_13);
    t = b_83(t);
    return(t);
  }
  t = d_29;
  t = map_1_0(y_0, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_13 = NULL,n_13 = NULL;
      j_13 = t;
      t = (ATerm) ATinsert(ATempty, term_l_22);
      n_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_13, (ATerm) ATinsert(ATempty, term_l_22));
      t = j_7(j_13, n_13, t);
      LocalPopChoice(k_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_22 = t;
            if((PushChoice() == 0))
              {
                ATerm q_13 = NULL,t_13 = NULL;
                q_13 = t;
                t = (ATerm) ATinsert(ATempty, term_p_22);
                t_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_13, (ATerm) ATinsert(ATempty, term_p_22));
                t = j_7(q_13, t_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_22;
              }
            t = debug_1_0(a_1, t);
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
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
  t = term_q_22;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_s_22;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  t = term_j_20;
  z_14 = t;
  t = (ATerm) ATinsert(ATempty, term_t_22);
  a_15 = t;
  t = SSL_printnl(z_14, a_15);
  t = y_14;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  if(match_cons(t, sym__3))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
      d_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_7(b_15, c_15, d_15, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm e_15 = NULL,h_15 = NULL,i_15 = NULL;
  e_15 = t;
  t = term_j_20;
  h_15 = t;
  t = (ATerm) ATinsert(ATempty, term_u_22);
  i_15 = t;
  t = SSL_printnl(h_15, i_15);
  t = e_15;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  t = term_j_20;
  k_15 = t;
  t = (ATerm) ATinsert(ATempty, term_t_22);
  l_15 = t;
  t = SSL_printnl(k_15, l_15);
  t = j_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,z_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,l_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,u_14 = NULL,v_14 = NULL;
  u_13 = t;
  t = if_verbose5_1_0(d_1, t);
  {
    ATerm v_22 = t;
    if((PushChoice() == 0))
      {
        ATerm w_14 = NULL,x_14 = NULL;
        t = term_x_22;
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_13);
        x_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATmakeAppl(sym_Imported_1, u_13));
        t = s_7(w_14, x_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_22;
      }
  }
  w_13 = t;
  t = term_x_22;
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_22, term_y_22, (ATerm) ATinsert(ATempty, u_13));
  t = lookup_table_0_1(p_14, t);
  v_14 = t;
  t = term_y_22;
  q_14 = t;
  t = (ATerm) ATinsert(ATempty, u_13);
  r_14 = t;
  t = v_14;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(q_14, r_14, u_14, t);
  t = w_13;
  t = if_verbose4_1_0(j_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_1, t);
  v_13 = t;
  t = term_x_22;
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_22, v_13);
  t = c_7(o_1, o_14, v_13, t);
  t = if_verbose6_1_0(p_1, t);
  t = term_x_22;
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_22, (ATerm)ATmakeAppl(sym_Imported_1, u_13), (ATerm) ATempty);
  t = lookup_table_0_1(z_13, t);
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_13);
  c_14 = t;
  t = (ATerm) ATempty;
  d_14 = t;
  t = l_14;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(c_14, d_14, e_14, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_22, (ATerm)ATmakeAppl(sym_Imported_1, u_13), (ATerm) ATempty);
  t = if_verbose4_1_0(r_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  d_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_16 = ATgetFirst((ATermList) t);
          f_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_22 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 = NULL,d_5 = NULL,e_5 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(d_16);
            a_5 = t;
            t = e_16;
            t = d_83(t);
            d_5 = t;
            t = f_16;
            t = filter_1_0(d_83, t);
            e_5 = t;
            t = (ATerm) ATinsert(CheckATermList(e_5), d_5);
            b_1 = t;
            t = SSLsetAnnotations(b_1, a_5);
            LocalPopChoice(b_23);
          }
        else
          {
            t = z_22;
            t = f_16;
            t = filter_1_0(d_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm t)
{
  static ATerm l_16 (ATerm t)
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_71(t);
        t = l_16(t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = z_71(t);
      }
    return(t);
  }
  t = l_16(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_16 = NULL,n_16 = NULL;
      t = term_k_8;
      m_16 = t;
      t = term_l_23;
      n_16 = t;
      t = term_n_23;
      t = s_7(m_16, n_16, t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm o_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_16 = NULL;
            t = term_r_23;
            p_16 = t;
            t = SSL_getenv(p_16);
            LocalPopChoice(q_23);
          }
        else
          {
            t = o_23;
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
  t = term_t_23;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm d_17 = NULL,i_17 = NULL;
  t = term_x_22;
  d_17 = t;
  t = term_u_23;
  i_17 = t;
  t = term_v_23;
  t = s_7(d_17, i_17, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm z_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_23;
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
  t = term_a_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_16 = NULL;
  t = if_verbose5_1_0(u_1, t);
  v_16 = t;
  {
    ATerm b_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_16 = NULL,b_17 = NULL;
        t = term_x_22;
        w_16 = t;
        t = term_y_22;
        b_17 = t;
        t = term_e_24;
        t = s_7(w_16, b_17, t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = b_24;
        {
          ATerm c_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_17 = t;
          t = repeat_2_0(z_1, _id, t);
          t = c_17;
        }
      }
  }
  t = v_16;
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
  t = term_g_24;
  return(t);
}
static ATerm q_18 (ATerm o_17, ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  t = term_x_22;
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, o_17);
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATmakeAppl(sym_Tool_1, o_17));
  t = s_7(t_17, u_17, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_24 = ATgetFirst((ATermList) t);
      if(match_cons(h_24, sym__2))
        {
          ATerm k_24 = ATgetArgument(h_24, 0);
          s_17 = ATgetArgument(h_24, 1);
        }
      else
        _fail(t);
      {
        ATerm j_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_17;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_x_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_17 = NULL,x_17 = NULL,c_18 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      c_18 = t;
      if(match_cons(t, sym__2))
        {
          w_17 = ATgetArgument(t, 0);
          x_17 = ATgetArgument(t, 1);
          {
            ATerm u_24 = t;
            int v_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
                t = term_x_22;
                g_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, w_17);
                h_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATmakeAppl(sym_Tool_1, w_17));
                t = s_7(g_18, h_18, t);
                {
                  static ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((x_17 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((f_18 != NULL) && (f_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                }
                t = not_null(f_18);
                LocalPopChoice(v_24);
              }
            else
              {
                t = u_24;
                t = q_18(c_18, t);
              }
          }
        }
      else
        {
          t = q_18(c_18, t);
        }
      t = if_verbose5_1_0(f_2, t);
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm p_18 = NULL,x_5 = NULL,b_6 = NULL;
        p_18 = t;
        t = term_j_20;
        x_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), p_18), term_x_24);
        b_6 = t;
        t = SSL_printnl(x_5, b_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), p_18), term_x_24);
        t = if_verbose5_1_0(j_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  y_18 = t;
  t = h_100(t);
  t = xtc_find_0_0(t);
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_18, y_18);
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm z_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, x_18, y_18);
      t = v_6(x_18, y_18, t);
      t = term_c_25;
      z_18 = t;
      t = SSL_exit(z_18);
      return(t);
    }
    t = fork_and_wait_1_0(n_2, t);
  }
  t = y_18;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_19 = NULL,g_19 = NULL;
      t = b_19;
      t = xtc_new_file_0_0(t);
      f_19 = t;
      t = r_0(t);
      g_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_19, (ATerm) ATinsert(ATinsert(ATempty, f_19), term_l_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_19);
    }
  else
    {
      ATerm i_19 = NULL,j_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_19;
      t = xtc_new_file_0_0(t);
      i_19 = t;
      t = r_0(t);
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_19), term_l_8), c_19), term_i_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_19);
    }
  return(t);
}
ATerm debug_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,v_19 = NULL,w_19 = NULL,y_19 = NULL;
  q_19 = t;
  t = m_86(t);
  v_19 = t;
  t = term_j_20;
  w_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_19), v_19);
  y_19 = t;
  t = SSL_printnl(w_19, y_19);
  t = q_19;
  return(t);
}
static ATerm u_20 (ATerm g_20, ATerm t)
{
  t = g_20;
  {
    ATerm o_25 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_25 = ATgetArgument(t, 0);
            ATerm q_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_25;
      }
  }
  t = term_r_25;
  t = debug_1_0(o_2, t);
  t = (ATerm) ATmakeAppl(sym__2, g_20, term_q_11);
  t = open_file_0_0(t);
  return(t);
}
static ATerm v_20 (ATerm k_20, ATerm l_20, ATerm m_20, ATerm t)
{
  t = SSL_open_file(k_20, l_20);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  if(match_cons(t, sym__2))
    {
      s_20 = ATgetArgument(t, 0);
      t_20 = ATgetArgument(t, 1);
      {
        ATerm t_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_20(r_20, t);
            LocalPopChoice(v_25);
          }
        else
          {
            t = t_25;
            t = v_20(s_20, t_20, r_20, t);
          }
      }
    }
  else
    {
      t = u_20(r_20, t);
    }
  return(t);
}
static ATerm e_7 (ATerm t_82 (ATerm), ATerm t_26, ATerm r_26, ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,e_21 = NULL;
  z_20 = t;
  t = t_82(t);
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_20, t_26, r_26);
  t = t_7(w_20, t_26, r_26, t);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_21 = NULL;
        t = term_y_25;
        f_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_20, term_y_25);
        t = s_7(w_20, f_21, t);
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_20 = ATgetFirst((ATermList) t);
      y_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_20, term_y_25, (ATerm) ATinsert(CheckATermList(y_20), (ATerm) ATinsert(CheckATermList(x_20), t_26)));
  t = lookup_table_0_1(w_20, t);
  e_21 = t;
  t = term_y_25;
  a_21 = t;
  t = (ATerm) ATinsert(CheckATermList(y_20), (ATerm) ATinsert(CheckATermList(x_20), t_26));
  b_21 = t;
  t = e_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(a_21, b_21, c_21, t);
  t = z_20;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm h_21 = NULL;
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_21 = NULL,l_6 = NULL;
      l_21 = t;
      t = term_c_26;
      l_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_21, term_c_26);
      t = g_7(l_21, l_6, t);
      h_21 = t;
      t = SSL_mkstemp(h_21);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm q_21 = NULL;
        t = term_d_26;
        q_21 = t;
        t = SSL_perror(q_21);
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
  t = term_f_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  t = P__tmpdir_0_0(t);
  z_21 = t;
  t = term_g_26;
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_21, term_g_26);
  t = g_7(z_21, a_22, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_9;
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_21, term_b_9);
  t = e_7(r_2, x_21, y_21, t);
  t = SSL_close(w_21);
  t = x_21;
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  b_22 = t;
  t = xtc_new_file_0_0(t);
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_22, term_q_11);
  t = open_file_0_0(t);
  t = SSL_print(c_22, b_22);
  t = SSL_close_file(c_22);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_22);
  return(t);
}
static ATerm c_23 (ATerm r_22, ATerm t)
{
  t = SSL_fclose(r_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_22 = NULL,a_23 = NULL;
  a_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_22 = ATgetArgument(t, 0);
      {
        ATerm j_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_22);
            LocalPopChoice(l_26);
          }
        else
          {
            t = j_26;
            t = c_23(a_23, t);
          }
      }
    }
  else
    {
      t = c_23(a_23, t);
    }
  return(t);
}
static ATerm f_7 (ATerm k_41, ATerm t)
{
  t = SSL_read_term_from_stream(k_41);
  return(t);
}
static ATerm g_7 (ATerm v_36, ATerm w_36, ATerm t)
{
  t = SSL_strcat(v_36, w_36);
  return(t);
}
static ATerm h_7 (ATerm g_14, ATerm h_14, ATerm t)
{
  ATerm d_23 = NULL;
  t = SSL_fopen(g_14, h_14);
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_23 = NULL;
  t = SSL_stdin_stream();
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_23 = NULL;
  t = SSL_stdout_stream();
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_23 = NULL;
  t = SSL_stderr_stream();
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_23);
  return(t);
}
static ATerm d_25 (ATerm m_23, ATerm t)
{
  ATerm p_23 = NULL;
  t = SSL_explode_term(m_23);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(((ATgetType(n_26) == AT_LIST) && !(ATisEmpty(n_26))))
          {
            p_23 = ATgetFirst((ATermList) n_26);
            {
              ATerm o_26 = (ATerm) ATgetNext((ATermList) n_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_25 (ATerm s_23, ATerm w_23, ATerm x_23, ATerm t)
{
  ATerm y_23 = NULL,c_24 = NULL,f_24 = NULL,i_24 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(x_23);
  f_24 = t;
  t = s_23;
  if(match_cons(t, sym_Path_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_24, w_23);
  e_1 = t;
  t = SSLsetAnnotations(e_1, f_24);
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(y_23, c_24, t);
  return(t);
}
static ATerm h_25 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,w_24 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(n_24);
  q_24 = t;
  t = SSL_is_string(l_24);
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_24, m_24);
  h_1 = t;
  t = SSLsetAnnotations(h_1, q_24);
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(o_24, p_24, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  if(match_cons(t, sym__2))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_25(y_24, t);
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            {
              ATerm s_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_25(z_24, a_25, y_24, t);
                  LocalPopChoice(u_26);
                }
              else
                {
                  t = s_26;
                  t = h_25(z_24, a_25, y_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_25(y_24, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,n_25 = NULL,u_25 = NULL;
  u_25 = t;
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_25, term_x_26);
        t = i_7(t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        {
          ATerm u_7 = NULL,a_8 = NULL;
          t = term_y_26;
          a_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_26, u_25);
          t = g_7(a_8, u_25, t);
          u_7 = t;
          t = SSL_perror(u_7);
          _fail(t);
        }
      }
  }
  k_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(n_25, t);
  j_25 = t;
  t = k_25;
  t = fclose_0_0(t);
  t = j_25;
  return(t);
}
static ATerm j_7 (ATerm x_13, ATerm y_13, ATerm t)
{
  t = SSL_access(x_13, y_13);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_26 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_26 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_22);
      e_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_26, (ATerm) ATinsert(ATempty, term_p_22));
      t = j_7(b_26, e_26, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = j_99(t);
  t = print_to_0_0(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,k_26 = NULL;
  k_26 = t;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_27 = ATgetArgument(t, 0);
            {
              ATerm d_8 = NULL,q_1 = NULL;
              t = SSLgetAnnotations(k_26);
              d_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_27);
              q_1 = t;
              t = SSLsetAnnotations(q_1, d_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_26;
          }
        LocalPopChoice(a_27);
        t = xtc_transform_file_2_0(v_2, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = z_26;
        t = xtc_transform_term_2_0(w_2, create_abox2latex_args_0_0, t);
      }
  }
  h_26 = t;
  t = term_c_27;
  t = create_header_0_0(t);
  i_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_26), i_26);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_d_27;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(u_2, t);
  return(t);
}
static ATerm s_7 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm f_27 = NULL;
  t = lookup_table_0_1(q_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(r_29, f_27, t);
  return(t);
}
static ATerm l_7 (ATerm c_28, ATerm d_28, ATerm t)
{
  ATerm l_27 = NULL,o_27 = NULL;
  o_27 = t;
  {
    ATerm e_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = s_7(c_28, d_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_27 = ATgetFirst((ATermList) t);
            l_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_27);
        {
          ATerm q_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, l_27);
          t = lookup_table_0_1(c_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_7(d_28, l_27, q_27, t);
          t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, l_27);
        }
      }
    else
      {
        t = e_27;
        {
          ATerm s_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
          t = lookup_table_0_1(c_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_7(d_28, s_27, t);
          t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        }
      }
  }
  t = o_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,z_27 = NULL,a_28 = NULL,f_28 = NULL,h_28 = NULL,i_28 = NULL;
  a_28 = t;
  t = q_82(t);
  z_27 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL;
        t = term_y_25;
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_27, term_y_25);
        t = s_7(z_27, j_28, t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_27 = ATgetFirst((ATermList) t);
      u_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_27, term_y_25, u_27);
  t = lookup_table_0_1(z_27, t);
  i_28 = t;
  t = term_y_25;
  f_28 = t;
  t = i_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(f_28, u_27, h_28, t);
  t = v_27;
  {
    static ATerm x_2 (ATerm t)
    {
      ATerm k_28 = NULL;
      k_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_27, k_28);
      t = l_7(z_27, k_28, t);
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = a_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t)
{
  ATerm k_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_71(t);
      t = u_71(t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = k_27;
      t = u_71(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_82 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,q_28 = NULL,r_28 = NULL,z_28 = NULL,a_29 = NULL,c_29 = NULL,n_29 = NULL;
  q_28 = t;
  t = p_82(t);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_28, term_y_25);
  {
    ATerm n_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_27 = ATgetArgument(t, 0);
            ATerm t_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_25;
        t_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_28, term_y_25);
        t = s_7(o_28, t_29, t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = n_27;
        t = (ATerm) ATempty;
      }
  }
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_28, term_y_25, (ATerm) ATinsert(CheckATermList(r_28), (ATerm) ATempty));
  t = lookup_table_0_1(o_28, t);
  n_29 = t;
  t = term_y_25;
  z_28 = t;
  t = (ATerm) ATinsert(CheckATermList(r_28), (ATerm) ATempty);
  a_29 = t;
  t = n_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(z_28, a_29, c_29, t);
  t = q_28;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  {
    ATerm b_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(l_30);
        LocalPopChoice(e_28);
      }
    else
      {
        t = b_28;
        t = l_30;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm x_29 = NULL;
  static ATerm b_3 (ATerm t)
  {
    ATerm b_30 = NULL;
    b_30 = t;
    {
      ATerm g_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_30 = NULL,g_30 = NULL;
          t = term_f_26;
          d_30 = t;
          t = term_y_25;
          g_30 = t;
          t = term_m_28;
          t = s_7(d_30, g_30, t);
          LocalPopChoice(l_28);
        }
      else
        {
          t = g_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_29 != NULL) && (x_29 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_29 = ATgetFirst((ATermList) t);
        {
          ATerm n_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = x_29;
    t = map_1_0(g_3, t);
    t = b_30;
    t = end_scope_1_0(n_3, t);
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  t = restore_always_2_0(t_99, b_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,u_30 = NULL,v_30 = NULL;
  q_30 = t;
  t = term_b_9;
  t = whoami_0_0(t);
  r_30 = t;
  t = term_j_20;
  u_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_28), r_30), term_p_28);
  v_30 = t;
  t = SSL_printnl(u_30, v_30);
  t = term_m_10;
  s_30 = t;
  t = SSL_exit(s_30);
  t = q_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,j_31 = NULL,k_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
      t = term_b_9;
      t = n_0(t);
      l_31 = t;
      t = term_t_28;
      m_31 = t;
      t = term_x_28;
      n_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_28, term_x_28, l_31);
      t = t_7(m_31, n_31, l_31, t);
      _fail(t);
    }
  else
    {
      ATerm e_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_31 = ATgetFirst((ATermList) t);
          d_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_31 = ATgetFirst((ATermList) t);
          k_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_31;
      t = k_0(t);
      t = j_31;
      t = l_0(t);
      e_32 = t;
      t = (ATerm) ATinsert(CheckATermList(k_31), e_32);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_74 (ATerm), ATerm t)
{
  static ATerm i_33 (ATerm t)
  {
    ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
    h_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_33 = ATgetFirst((ATermList) t);
        g_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_8 = NULL,y_8 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(h_33);
          r_8 = t;
          t = g_33;
          t = i_33(t);
          y_8 = t;
          t = (ATerm) ATinsert(CheckATermList(y_8), f_33);
          v_1 = t;
          t = SSLsetAnnotations(v_1, r_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_33;
        t = k_74(t);
      }
    return(t);
  }
  t = i_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_32 = NULL,j_32 = NULL,k_32 = NULL;
  g_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_32;
    }
  else
    {
      static ATerm p_3 (ATerm t)
      {
        t = not_null(k_32);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_32 = ATgetFirst((ATermList) t);
          if(((k_32 != NULL) && (k_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_32;
      t = at_end_1_0(p_3, t);
    }
  return(t);
}
static ATerm y_33 (ATerm o_33, ATerm t)
{
  ATerm p_33 = NULL;
  t = SSL_explode_term(o_33);
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_33;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,v_33 = NULL;
  v_33 = t;
  if(match_cons(t, sym__2))
    {
      r_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
      {
        ATerm b_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_3 (ATerm t)
            {
              t = s_33;
              return(t);
            }
            t = r_33;
            t = at_end_1_0(r_3, t);
            LocalPopChoice(f_29);
          }
        else
          {
            t = b_29;
            t = y_33(v_33, t);
          }
      }
    }
  else
    {
      t = y_33(v_33, t);
    }
  return(t);
}
static ATerm m_7 (ATerm g_49, ATerm f_49, ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  t = g_49;
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL;
        t = term_k_8;
        g_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, g_49);
        t = s_7(g_34, g_49, t);
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = (ATerm) ATempty;
      }
  }
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_49, c_34);
  t = conc_0_0(t);
  b_34 = t;
  t = term_k_8;
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, g_49, b_34);
  t = lookup_table_0_1(d_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(g_49, b_34, e_34, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, g_49, b_34);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  if(match_string(t, "-k"))
    {
      t = i_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_34;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  t = SSL_string_to_int(j_34);
  k_34 = t;
  t = term_i_29;
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, k_34);
  t = v_7(l_34, k_34, t);
  t = j_34;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, d_4, g_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  if(match_string(t, "-S"))
    {
      t = n_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_34;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  t = term_f_10;
  o_34 = t;
  t = term_l_29;
  p_34 = t;
  t = term_m_29;
  t = v_7(o_34, p_34, t);
  t = term_o_29;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_p_29;
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
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  t = SSL_string_to_int(r_34);
  s_34 = t;
  t = term_f_10;
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, s_34);
  t = v_7(t_34, s_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_34);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_s_29;
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
  ATerm u_34 = NULL,v_34 = NULL;
  t = term_u_29;
  u_34 = t;
  t = term_b_9;
  v_34 = t;
  t = term_v_29;
  t = v_7(u_34, v_34, t);
  t = term_w_29;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, k_4, n_4, t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm c_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, p_4, q_4, t);
            LocalPopChoice(e_30);
          }
        else
          {
            t = c_30;
            t = Option_3_0(r_4, t_4, z_4, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_string(t, "-o"))
    {
      t = z_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_34;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm a_35 = NULL,h_35 = NULL;
  a_35 = t;
  t = term_l_8;
  h_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_8, a_35);
  t = v_7(h_35, a_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_35);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, f_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  if(match_string(t, "-i"))
    {
      t = l_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_35;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  m_35 = t;
  t = term_i_25;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_25, m_35);
  t = v_7(n_35, m_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_35);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, i_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  t = term_z_8;
  p_35 = t;
  t = (ATerm) ATinsert(ATempty, o_35);
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATempty, o_35));
  t = m_7(p_35, q_35, t);
  t = o_35;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  u_35 = t;
  t = term_n_11;
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, u_35);
  t = v_7(v_35, u_35, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_30);
    }
  else
    {
      t = k_30;
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            {
              ATerm p_30 = t;
              int t_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(t_30);
                }
              else
                {
                  t = p_30;
                  {
                    ATerm w_30 = t;
                    int x_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(x_30);
                      }
                    else
                      {
                        t = w_30;
                        {
                          ATerm y_30 = t;
                          int z_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(l_5, m_5, o_5, t);
                              LocalPopChoice(z_30);
                            }
                          else
                            {
                              t = y_30;
                              t = ArgOption_3_0(p_5, r_5, t_5, t);
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
  ATerm w_35 = NULL,x_35 = NULL,z_35 = NULL,a_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_9;
  t = whoami_0_0(t);
  w_35 = t;
  t = term_j_20;
  z_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_31), w_35);
  a_36 = t;
  t = SSL_printnl(z_35, a_36);
  t = term_m_10;
  x_35 = t;
  t = SSL_exit(x_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  t = term_k_8;
  d_36 = t;
  t = term_b_31;
  e_36 = t;
  t = term_e_31;
  t = s_7(d_36, e_36, t);
  return(t);
}
static ATerm n_7 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_25, g_25);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      t = SSL_addr(f_25, g_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  g_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_36;
      t = h_81(t);
    }
  else
    {
      ATerm m_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_36 = ATgetFirst((ATermList) t);
          i_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_36;
      t = foldr_2_0(h_81, i_81, t);
      m_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_36, m_36);
      t = i_81(t);
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
  t = term_l_29;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(q_9, r_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_36 = NULL,h_9 = NULL,m_9 = NULL;
  t = times_0_0(t);
  m_9 = t;
  t = SSL_explode_term(m_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_31 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_9;
  t = foldr_2_0(u_5, v_5, t);
  p_36 = t;
  t = SSL_TicksToSeconds(p_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_37 = NULL,j_37 = NULL,l_37 = NULL;
  e_37 = t;
  if(match_cons(t, sym__2))
    {
      j_37 = ATgetArgument(t, 0);
      l_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_37;
        if((j_37 != t))
          {
            _fail(t);
          }
        t = e_37;
        LocalPopChoice(o_31);
      }
    else
      {
        t = i_31;
        t = (ATerm) ATmakeAppl(sym__2, j_37, l_37);
        {
          ATerm a_32 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_37, l_37);
              LocalPopChoice(b_32);
            }
          else
            {
              t = a_32;
              t = SSL_gtr(j_37, l_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_37, l_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_98 (ATerm), ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_37 = NULL,v_37 = NULL,w_37 = NULL;
        t = term_k_8;
        v_37 = t;
        t = term_f_10;
        w_37 = t;
        t = term_l_10;
        t = s_7(v_37, w_37, t);
        s_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_37, term_m_10);
        t = geq_0_0(t);
        t = q_37;
        t = f_98(t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = q_37;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm y_37 = NULL,b_38 = NULL,f_38 = NULL,h_38 = NULL;
  t = run_time_0_0(t);
  y_37 = t;
  t = term_b_9;
  t = whoami_0_0(t);
  b_38 = t;
  t = term_j_20;
  f_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_32), y_37), term_v_11), b_38);
  h_38 = t;
  t = SSL_printnl(f_38, h_38);
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_32), y_37), term_v_11), b_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_29;
  i_38 = t;
  t = SSL_exit(i_38);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL;
  c_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_39 = ATgetArgument(t, 0);
          {
            ATerm o_10 = NULL,g_2 = NULL;
            t = SSLgetAnnotations(c_39);
            o_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_39);
            g_2 = t;
            t = SSLsetAnnotations(g_2, o_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_67 (ATerm), ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_38 = NULL,m_38 = NULL;
      t = term_k_8;
      l_38 = t;
      t = term_l_32;
      m_38 = t;
      t = term_m_32;
      t = s_7(l_38, m_38, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = fetch_1_0(y_5, t);
    }
  t = h_67(t);
  return(t);
}
static ATerm w_7 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm t)
{
  ATerm h_39 = NULL;
  t = SSL_hashtable_put(r_31, p_31, q_31);
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_39);
  return(t);
}
static ATerm x_7 (ATerm s_31, ATerm t_31, ATerm t)
{
  t = SSL_hashtable_get(t_31, s_31);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_29, ATerm t)
{
  ATerm w_39 = NULL;
  t = table_hashtable_0_0(t);
  w_39 = t;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL;
        t = w_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_7(j_29, y_10, t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          ATerm h_11 = NULL;
          t = j_29;
          t = table_create_0_0(t);
          t = w_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_7(j_29, h_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_31, ATerm y_31, ATerm t)
{
  ATerm a_40 = NULL;
  t = SSL_hashtable_create(x_31, y_31);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_40);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,e_40 = NULL,g_40 = NULL,j_40 = NULL;
  b_40 = t;
  t = term_p_32;
  g_40 = t;
  t = term_q_32;
  j_40 = t;
  t = b_40;
  t = new_hashtable_0_2(g_40, j_40, t);
  c_40 = t;
  t = b_40;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(b_40, c_40, e_40, t);
  t = b_40;
  return(t);
}
static ATerm p_7 (ATerm u_31, ATerm v_31, ATerm t)
{
  ATerm k_40 = NULL;
  t = SSL_hashtable_remove(v_31, u_31);
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_40);
  return(t);
}
static ATerm q_7 (ATerm z_31, ATerm t)
{
  ATerm n_40 = NULL;
  t = SSL_hashtable_destroy(z_31);
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_40);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_40 = NULL;
  t = SSL_table_hashtable();
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_40);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  v_40 = t;
  t = table_hashtable_0_0(t);
  w_40 = t;
  t = lookup_table_0_1(v_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(y_40, t);
  t = w_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(v_40, x_40, t);
  t = v_40;
  return(t);
}
ATerm map_1_0 (ATerm t_73 (ATerm), ATerm t)
{
  static ATerm t_41 (ATerm t)
  {
    ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
    q_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_41;
      }
    else
      {
        ATerm t_11 = NULL,z_11 = NULL,a_12 = NULL,i_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_41 = ATgetFirst((ATermList) t);
            s_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_41);
        t_11 = t;
        t = r_41;
        t = t_73(t);
        z_11 = t;
        t = s_41;
        t = t_41(t);
        a_12 = t;
        t = (ATerm) ATinsert(CheckATermList(a_12), z_11);
        i_2 = t;
        t = SSLsetAnnotations(i_2, t_11);
      }
    return(t);
  }
  t = t_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_41 = ATgetFirst((ATermList) t);
      z_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_42 = NULL,e_42 = NULL;
        static ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_42)), not_null(e_42));
          return(t);
        }
        t = z_41;
        t = i_0(t);
        if(((d_42 != NULL) && (d_42 != t)))
          _fail(t);
        else
          d_42 = t;
        t = y_41;
        t = g_0(t);
        if(((e_42 != NULL) && (e_42 != t)))
          _fail(t);
        else
          e_42 = t;
        t = z_41;
        t = reverse_acc_2_0(g_0, z_5, t);
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
  ATerm k_42 = NULL,q_42 = NULL,r_42 = NULL,k_2 = NULL;
  r_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_42);
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_42);
  k_2 = t;
  t = SSLsetAnnotations(k_2, k_42);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm t_42 = NULL;
  t_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_42), term_r_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL;
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_42 = NULL,j_42 = NULL;
      t = term_k_8;
      i_42 = t;
      t = term_b_31;
      j_42 = t;
      t = term_e_31;
      t = s_7(i_42, j_42, t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      t = fetch_1_0(f_6, t);
    }
  t = term_u_32;
  t = echo_0_0(t);
  t = term_t_28;
  g_42 = t;
  t = term_x_28;
  h_42 = t;
  t = term_v_32;
  t = s_7(g_42, h_42, t);
  t = reverse_acc_2_0(_id, g_6, t);
  t = map_1_0(h_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  static ATerm r_43 (ATerm t)
  {
    ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
    o_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_43 = ATgetFirst((ATermList) t);
        q_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_12 = NULL,s_12 = NULL,j_5 = NULL;
          t = SSLgetAnnotations(o_43);
          m_12 = t;
          t = p_43;
          t = d_74(t);
          s_12 = t;
          t = (ATerm) ATinsert(CheckATermList(q_43), s_12);
          j_5 = t;
          t = SSLsetAnnotations(j_5, m_12);
          LocalPopChoice(x_32);
        }
      else
        {
          t = w_32;
          {
            ATerm d_13 = NULL,m_13 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(o_43);
            d_13 = t;
            t = q_43;
            t = r_43(t);
            m_13 = t;
            t = (ATerm) ATinsert(CheckATermList(m_13), p_43);
            k_5 = t;
            t = SSLsetAnnotations(k_5, d_13);
          }
        }
    }
    return(t);
  }
  t = r_43(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_33 = ATgetFirst((ATermList) t);
                ATerm b_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_43;
          }
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = (ATerm) ATinsert(ATempty, v_43);
      }
  }
  w_43 = t;
  t = term_o_8;
  x_43 = t;
  t = SSL_printnl(x_43, w_43);
  t = v_43;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  t = term_k_8;
  b_44 = t;
  t = term_b_31;
  c_44 = t;
  t = term_e_31;
  t = s_7(b_44, c_44, t);
  t = echo_0_0(t);
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
  ATerm d_44 = NULL,e_44 = NULL;
  t = term_c_33;
  d_44 = t;
  t = term_b_9;
  e_44 = t;
  t = term_d_33;
  t = v_7(d_44, e_44, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
  t = term_c_33;
  h_44 = t;
  t = term_b_9;
  i_44 = t;
  t = term_d_33;
  t = v_7(h_44, i_44, t);
  t = term_j_33;
  f_44 = t;
  t = term_b_9;
  g_44 = t;
  t = term_k_33;
  t = v_7(f_44, g_44, t);
  t = term_l_33;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_6, j_6, m_6, t);
      LocalPopChoice(q_33);
    }
  else
    {
      t = n_33;
      t = Option_3_0(n_6, o_6, q_6, t);
    }
  return(t);
}
static ATerm v_7 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  t = term_k_8;
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, a_49, b_49);
  t = lookup_table_0_1(j_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(a_49, b_49, k_44, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, a_49, b_49);
  return(t);
}
static ATerm t_7 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_33 = ATgetArgument(t, 0);
            ATerm x_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
        t = s_7(x_27, y_27, t);
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATempty;
      }
  }
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_27, y_27, (ATerm) ATinsert(CheckATermList(o_44), w_27));
  t = lookup_table_0_1(x_27, t);
  r_44 = t;
  t = (ATerm) ATinsert(CheckATermList(o_44), w_27);
  p_44 = t;
  t = r_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(y_27, p_44, q_44, t);
  t = n_44;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
      t = term_b_9;
      t = e_0(t);
      z_44 = t;
      t = term_t_28;
      a_45 = t;
      t = term_x_28;
      b_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_28, term_x_28, z_44);
      t = t_7(a_45, b_45, z_44, t);
      _fail(t);
    }
  else
    {
      ATerm e_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_44 = ATgetFirst((ATermList) t);
          y_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_44;
      t = c_0(t);
      t = term_b_9;
      t = d_0(t);
      e_45 = t;
      t = (ATerm) ATinsert(CheckATermList(y_44), e_45);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,n_5 = NULL;
  k_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_45 = ATgetFirst((ATermList) t);
      h_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_45);
  f_45 = t;
  t = g_45;
  t = r_60(t);
  i_45 = t;
  t = h_45;
  t = s_60(t);
  j_45 = t;
  t = (ATerm) ATinsert(CheckATermList(j_45), i_45);
  n_5 = t;
  t = SSLsetAnnotations(n_5, f_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_88 (ATerm), ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,u_45 = NULL,v_45 = NULL,q_5 = NULL;
  p_45 = t;
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_34;
        t = v_88(t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
      }
  }
  t = p_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_45 = ATgetFirst((ATermList) t);
      s_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_45);
  q_45 = t;
  t = term_b_31;
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_31, r_45);
  t = v_7(v_45, r_45, t);
  t = s_45;
  {
    static ATerm f_46 (ATerm t)
    {
      ATerm h_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_34 = t;
          int w_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_45 = NULL;
              y_45 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_45;
              LocalPopChoice(w_34);
            }
          else
            {
              t = q_34;
              t = v_88(t);
              t = Cons_2_0(_id, f_46, t);
            }
          LocalPopChoice(m_34);
        }
      else
        {
          t = h_34;
          {
            ATerm b_46 = NULL,c_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_46 = ATgetFirst((ATermList) t);
                c_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_46), (ATerm) ATmakeAppl(sym_Undefined_1, b_46));
          }
        }
      return(t);
    }
    t = f_46(t);
  }
  u_45 = t;
  t = (ATerm) ATinsert(CheckATermList(u_45), (ATerm) ATmakeAppl(sym_Program_1, r_45));
  q_5 = t;
  t = SSLsetAnnotations(q_5, q_45);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  if(match_string(t, "--help"))
    {
      t = s_46;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_46;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_46;
        }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL;
  t = term_l_32;
  t_46 = t;
  t = term_b_9;
  u_46 = t;
  t = term_x_34;
  t = v_7(t_46, u_46, t);
  t = term_y_34;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_b_35;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  m_46 = t;
  t = term_t_28;
  n_46 = t;
  t = term_c_35;
  t = lookup_table_0_1(n_46, t);
  r_46 = t;
  t = term_x_28;
  o_46 = t;
  t = (ATerm) ATempty;
  p_46 = t;
  t = r_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(o_46, p_46, q_46, t);
  t = m_46;
  {
    static ATerm r_6 (ATerm t)
    {
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_88(t);
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          {
            ATerm f_35 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_6, y_6, o_7, t);
                LocalPopChoice(g_35);
              }
            else
              {
                t = f_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_6, t);
  }
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_47 = NULL;
        f_47 = t;
        {
          ATerm k_35 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_14 = NULL;
              t = f_47;
              {
                ATerm s_35 = t;
                int t_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_14 = NULL,j_14 = NULL;
                    t = term_k_8;
                    i_14 = t;
                    t = term_l_32;
                    j_14 = t;
                    t = term_m_32;
                    t = s_7(i_14, j_14, t);
                    LocalPopChoice(t_35);
                  }
                else
                  {
                    t = s_35;
                    t = fetch_1_0(r_7, t);
                  }
              }
              t = f_47;
              t = default_system_usage_0_0(t);
              t = term_l_29;
              f_14 = t;
              t = SSL_exit(f_14);
              LocalPopChoice(r_35);
            }
          else
            {
              t = k_35;
              {
                ATerm s_14 = NULL,t_14 = NULL,f_15 = NULL;
                t = term_k_8;
                t_14 = t;
                t = term_c_33;
                f_15 = t;
                t = term_y_35;
                t = s_7(t_14, f_15, t);
                t = f_47;
                t = default_system_about_0_0(t);
                t = term_l_29;
                s_14 = t;
                t = SSL_exit(s_14);
              }
            }
        }
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        {
          ATerm b_36 = t;
          int c_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
              static ATerm y_7 (ATerm t)
              {
                ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,s_5 = NULL;
                l_47 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_47);
                j_47 = t;
                t = k_47;
                if(((k_46 != NULL) && (k_46 != t)))
                  _fail(t);
                else
                  k_46 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_47);
                s_5 = t;
                t = SSLsetAnnotations(s_5, j_47);
                return(t);
              }
              t = fetch_1_0(y_7, t);
              t = term_j_20;
              h_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_46)), term_f_36);
              i_47 = t;
              t = SSL_printnl(h_47, i_47);
              t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_46)), term_f_36));
              t = default_system_usage_0_0(t);
              t = term_m_10;
              g_47 = t;
              t = SSL_exit(g_47);
              LocalPopChoice(c_36);
            }
          else
            {
              t = b_36;
            }
        }
      }
  }
  l_46 = t;
  t = term_t_28;
  t = table_destroy_0_0(t);
  t = l_46;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  t = parse_options_1_0(j_67, t);
  q_47 = t;
  t = term_j_36;
  t = table_create_0_0(t);
  t = term_j_36;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_36, term_k_36, q_47);
  t = lookup_table_0_1(r_47, t);
  u_47 = t;
  t = term_k_36;
  s_47 = t;
  t = u_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(s_47, q_47, t_47, t);
  t = q_47;
  t = l_67(t);
  {
    ATerm l_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_67, t);
        LocalPopChoice(n_36);
      }
    else
      {
        t = l_36;
        {
          ATerm o_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_67(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_36);
            }
          else
            {
              t = o_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = xtc_temp_files_1_0(b_8, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
      t = term_k_8;
      y_47 = t;
      t = term_i_25;
      z_47 = t;
      t = term_t_36;
      t = s_7(y_47, z_47, t);
      x_47 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_47);
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      t = term_s_8;
    }
  t = abox2latex_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2latex_options_0_0, default_usage_0_0, _id, z_7, t);
  return(t);
}
