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
ATerm term_v_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_k_36;
ATerm term_e_36;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_q_34;
ATerm term_t_33;
ATerm term_p_33;
ATerm term_n_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_z_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_c_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_w_28;
ATerm term_s_28;
ATerm term_f_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_j_26;
ATerm term_h_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_z_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_j_25;
ATerm term_f_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_r_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_c_23;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
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
ATerm term_g_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
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
ATerm term_l_15;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_f_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_k_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_l_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_y_8);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_h_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
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
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_m_10, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_r_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
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
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_q_13, term_r_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_z_13, term_f_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_r_14, term_l_15);
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
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_v_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_h_18, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_w_18, term_z_18);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_g_19, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_s_19, term_t_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_y_19, term_z_19);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_stderr_0);
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
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_n_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_v_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_c_23);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_z_25);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_n_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_u_29, term_d_9);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_g_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_c_32);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_d_29);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_i_33, term_d_9);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_d_9);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_d_9);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__3, term_c_29, term_d_29, (ATerm) ATempty);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_i_33);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_j_25);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm k_7 (ATerm e_47, ATerm f_47, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm s_6 (ATerm q_25, ATerm r_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm create_table_file_0_0 (ATerm t);
ATerm create_abox2latex_args_0_0 (ATerm t);
static ATerm t_6 (ATerm d_51, ATerm e_51, ATerm t);
static ATerm u_6 (ATerm q_99 (ATerm), ATerm s_547, ATerm n_51, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t);
static ATerm v_6 (ATerm g_50, ATerm h_50, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm r_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_98 (ATerm), ATerm t);
static ATerm x_6 (ATerm b_33, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_110 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_110 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_110 (ATerm), ATerm t);
static ATerm z_6 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm x_21, ATerm w_21, ATerm t);
static ATerm a_7 (ATerm q_88 (ATerm), ATerm t_21, ATerm s_21, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm b_7 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t);
static ATerm c_7 (ATerm n_93 (ATerm), ATerm j_29, ATerm i_29, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm p_18 (ATerm n_17, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm z_111 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm o_99 (ATerm), ATerm t);
static ATerm t_20 (ATerm e_20, ATerm t);
static ATerm u_20 (ATerm j_20, ATerm k_20, ATerm l_20, ATerm t);
static ATerm p_2 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm e_7 (ATerm f_93 (ATerm), ATerm y_26, ATerm w_26, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
static ATerm z_22 (ATerm q_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_7 (ATerm j_51, ATerm t);
static ATerm g_7 (ATerm r_46, ATerm s_46, ATerm t);
static ATerm h_7 (ATerm l_14, ATerm m_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_25 (ATerm l_23, ATerm t);
static ATerm d_25 (ATerm r_23, ATerm s_23, ATerm w_23, ATerm t);
static ATerm e_25 (ATerm j_24, ATerm l_24, ATerm m_24, ATerm t);
static ATerm i_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm j_7 (ATerm c_14, ATerm d_14, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm b_111 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm s_7 (ATerm v_29, ATerm w_29, ATerm t);
static ATerm l_7 (ATerm h_28, ATerm i_28, ATerm t);
ATerm end_scope_1_0 (ATerm c_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm b_93 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_111 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm w_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_33 (ATerm m_33, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_7 (ATerm f_59, ATerm e_59, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm abox2latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_7 (ATerm k_25, ATerm l_25, ATerm t);
ATerm foldr_2_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_109 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm need_help_1_0 (ATerm o_77 (ATerm), ATerm t);
static ATerm w_7 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t);
static ATerm x_7 (ATerm x_32, ATerm y_32, ATerm t);
ATerm lookup_table_0_1 (ATerm o_29, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_33, ATerm d_33, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm p_7 (ATerm z_32, ATerm a_33, ATerm t);
static ATerm q_7 (ATerm e_33, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm f_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm v_7 (ATerm z_58, ATerm a_59, ATerm t);
static ATerm t_7 (ATerm c_28, ATerm d_28, ATerm b_28, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_101 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm parse_options_1_0 (ATerm w_101 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL;
  r_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = r_1;
        t = q_0(t);
        e_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = e_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = e_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, s_1, e_0);
        t = k_7(s_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
        LocalPopChoice(d_8);
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
              t = r_1;
              t = q_0(t);
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
                            if((s_1 != t))
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
              t = (ATerm) ATmakeAppl(sym__2, s_1, v_0);
              t = k_7(s_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
              LocalPopChoice(g_8);
            }
          else
            {
              t = f_8;
              t = r_1;
              t = q_0(t);
              if((s_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
            }
        }
      }
  }
  return(t);
}
static ATerm k_7 (ATerm e_47, ATerm f_47, ATerm t)
{
  t = SSL_copy(e_47, f_47);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL,s_2 = NULL;
      t = term_k_8;
      n_2 = t;
      t = term_l_8;
      s_2 = t;
      t = term_n_8;
      t = s_7(n_2, s_2, t);
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
  ATerm k_2 = NULL;
  k_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_1 = NULL,k_1 = NULL;
      t = term_l_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 = NULL,m_1 = NULL;
            t = term_k_8;
            l_1 = t;
            t = term_l_8;
            m_1 = t;
            t = term_n_8;
            t = s_7(l_1, m_1, t);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = term_o_8;
          }
      }
      g_1 = t;
      t = term_r_8;
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_r_8, g_1);
      t = k_7(k_1, g_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm s_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm f_3 = NULL,h_3 = NULL;
  f_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), f_3), term_t_8);
  h_3 = t;
  t = SSL_concat_strings(h_3);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm u_2 = NULL;
  ATerm v_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 = NULL,e_3 = NULL;
      t = term_k_8;
      z_2 = t;
      t = term_y_8;
      e_3 = t;
      t = term_a_9;
      t = s_7(z_2, e_3, t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = v_8;
      t = (ATerm) ATempty;
    }
  t = map_1_0(b_0, t);
  u_2 = t;
  t = SSL_concat_strings(u_2);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL;
  t = term_d_9;
  t = tables2text_0_0(t);
  i_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_9), term_c_10), term_a_10), term_f_9), term_z_9), term_y_9), term_x_9), term_w_9), term_q_9), term_f_9), i_3), term_p_9), term_n_9), term_f_9), term_h_9), term_f_9), term_g_9), term_f_9);
  j_3 = t;
  t = SSL_concat_strings(j_3);
  return(t);
}
static ATerm s_6 (ATerm q_25, ATerm r_25, ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(q_25, r_25);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      t = SSL_subtr(q_25, r_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL;
  t = term_h_10;
  {
    ATerm i_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 = NULL,u_3 = NULL;
        t = term_k_8;
        q_3 = t;
        t = term_h_10;
        u_3 = t;
        t = term_l_10;
        t = s_7(q_3, u_3, t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = i_10;
        t = term_m_10;
      }
  }
  l_3 = t;
  t = term_m_10;
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_3, term_m_10);
  t = s_6(l_3, o_3, t);
  m_3 = t;
  t = SSL_int_to_string(m_3);
  k_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_3), term_h_10);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if(match_cons(n_10, sym_Stream_1))
        {
          a_4 = ATgetArgument(n_10, 0);
        }
      else
        _fail(t);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(a_4, b_4, t);
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  ATerm q_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 = NULL,z_3 = NULL;
      t = term_k_8;
      y_3 = t;
      t = term_y_8;
      z_3 = t;
      t = term_a_9;
      t = s_7(y_3, z_3, t);
      LocalPopChoice(u_10);
    }
  else
    {
      t = q_10;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  v_3 = t;
  t = (ATerm) ATinsert(CheckATermList(v_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_i_11), term_h_11)), (ATerm) ATinsert(ATinsert(ATempty, term_g_11), term_f_11)), (ATerm) ATinsert(ATinsert(ATempty, term_e_11), term_d_11)), (ATerm) ATinsert(ATinsert(ATempty, term_c_11), term_a_11)), (ATerm) ATinsert(ATinsert(ATempty, term_y_10), term_x_10)), (ATerm) ATinsert(ATinsert(ATempty, term_w_10), term_v_10)));
  t = concat_0_0(t);
  x_3 = t;
  t = xtc_new_file_0_0(t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_3, x_3);
  t = u_6(c_0, w_3, x_3, t);
  t = w_3;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  t = term_d_9;
  t = create_table_file_0_0(t);
  e_4 = t;
  t = term_d_9;
  t = pass_verbose_0_0(t);
  f_4 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(f_4), e_4), term_k_11);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_4 = NULL,j_4 = NULL,l_4 = NULL;
        t = term_k_8;
        j_4 = t;
        t = term_n_11;
        l_4 = t;
        t = term_o_11;
        t = s_7(j_4, l_4, t);
        i_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(f_4), e_4), term_k_11), i_4), term_p_11);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
      }
  }
  return(t);
}
static ATerm t_6 (ATerm d_51, ATerm e_51, ATerm t)
{
  ATerm p_4 = NULL;
  t = SSL_write_term_to_stream_baf(d_51, e_51);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_4);
  return(t);
}
static ATerm u_6 (ATerm q_99 (ATerm), ATerm s_547, ATerm n_51, ATerm t)
{
  ATerm s_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_547, term_q_11);
  t = i_7(t);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_4, n_51);
  t = q_99(t);
  t = fclose_0_0(t);
  t = n_51;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      if(match_cons(r_11, sym_Stream_1))
        {
          w_4 = ATgetArgument(r_11, 0);
        }
      else
        _fail(t);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(w_4, x_4, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL;
  v_4 = t;
  t = xtc_new_file_0_0(t);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_4, v_4);
  t = u_6(f_0, u_4, v_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_4);
  t = xtc_transform_file_2_0(y_110, z_110, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm g_50, ATerm h_50, ATerm t)
{
  t = SSL_execvp(g_50, h_50);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,c_6 = NULL,d_6 = NULL;
  z_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_6 = ATgetArgument(t, 0);
      {
        ATerm x_1 = NULL,y_1 = NULL;
        t = SSL_int_to_string(a_6);
        x_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_11), x_1), term_t_11);
        y_1 = t;
        t = SSL_concat_strings(y_1);
      }
    }
  else
    {
      ATerm q_2 = NULL,r_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_6 = ATgetArgument(t, 0);
          c_6 = ATgetArgument(t, 1);
          d_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_6);
      q_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_6), term_z_11), q_2), term_y_11), a_6);
      r_2 = t;
      t = SSL_concat_strings(r_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  ATerm j_6 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    t = r_84(t);
    if(((j_6 != NULL) && (j_6 != t)))
      _fail(t);
    else
      j_6 = t;
    return(t);
  }
  t = fetch_1_0(i_0, t);
  t = not_null(j_6);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm k_6 = NULL;
  k_6 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_0 (ATerm t);
        static ATerm k_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_12 = ATgetArgument(t, 0);
              if((k_6 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm g_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_20), term_u_19), term_p_19), term_l_19), term_d_19), term_t_18), term_n_18), term_j_18), term_c_18), term_y_17), term_o_17), term_j_17), term_f_17), term_x_16), term_s_16), term_n_16), term_f_16), term_b_16), term_u_15), term_q_15), term_m_15), term_n_14), term_w_13), term_m_13), term_b_13), term_x_12), term_s_12), term_j_12);
        t = fetch_elem_1_0(k_0, t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, k_6);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_6 = NULL,m_8 = NULL;
  y_6 = t;
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_20 = ATgetArgument(t, 0);
            m_8 = ATgetArgument(t, 1);
            {
              ATerm f_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_20);
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_3 = NULL,d_3 = NULL,g_3 = NULL;
              t = m_8;
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
              b_3 = t;
              t = term_m_20;
              d_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_3), term_n_20);
              g_3 = t;
              t = SSL_printnl(d_3, g_3);
              t = (ATerm) ATmakeAppl(sym__2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, b_3), term_n_20));
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              t = y_6;
            }
        }
      }
    else
      {
        t = b_20;
        t = y_6;
      }
  }
  t = y_6;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  c_9 = t;
  t = fork_0_0(t);
  b_9 = t;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_9;
        t = v_98(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = SSL_waitpid(b_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_21 = ATgetArgument(t, 0);
            if(((ATgetType(d_21) != AT_INT) || (ATgetInt((ATermInt) d_21) != 0)))
              _fail(t);
            {
              ATerm f_21 = ATgetArgument(t, 1);
            }
            {
              ATerm h_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_9;
      }
  }
  return(t);
}
static ATerm x_6 (ATerm b_33, ATerm t)
{
  t = SSL_hashtable_keys(b_33);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_9 = NULL,i_9 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    ATerm j_9 = NULL,k_9 = NULL;
    j_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), j_9);
    t = s_7(not_null(e_9), j_9, t);
    k_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_9, k_9);
    return(t);
  }
  if(((e_9 != NULL) && (e_9 != t)))
    _fail(t);
  else
    e_9 = t;
  t = lookup_table_0_1(e_9, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(i_9, t);
  t = map_1_0(n_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
        t = term_k_8;
        t_9 = t;
        t = term_h_10;
        u_9 = t;
        t = term_l_10;
        t = s_7(t_9, u_9, t);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, term_g_19);
        t = geq_0_0(t);
        t = m_9;
        t = b_110(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = m_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL,g_10 = NULL,j_10 = NULL;
        t = term_k_8;
        g_10 = t;
        t = term_h_10;
        j_10 = t;
        t = term_l_10;
        t = s_7(g_10, j_10, t);
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, term_d_16);
        t = geq_0_0(t);
        t = b_10;
        t = a_110(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = b_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  {
    ATerm o_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
        t = term_k_8;
        s_10 = t;
        t = term_h_10;
        t_10 = t;
        t = term_l_10;
        t = s_7(s_10, t_10, t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, term_z_12);
        t = geq_0_0(t);
        t = p_10;
        t = c_110(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = o_21;
        t = p_10;
      }
  }
  return(t);
}
static ATerm z_6 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm x_21, ATerm w_21, ATerm t)
{
  t = u_88(t);
  {
    static ATerm s_0 (ATerm t);
    static ATerm s_0 (ATerm t)
    {
      ATerm b_11 = NULL;
      b_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_21, b_11);
      t = t_88(t);
      return(t);
    }
    t = fetch_1_0(s_0, t);
  }
  t = w_21;
  return(t);
}
static ATerm a_7 (ATerm q_88 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  static ATerm e_12 (ATerm t);
  static ATerm e_12 (ATerm t)
  {
    ATerm s_11 = NULL,w_11 = NULL,x_11 = NULL;
    s_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_11 = ATgetFirst((ATermList) t);
            x_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_11;
              {
                static ATerm u_0 (ATerm t);
                static ATerm u_0 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = z_6(q_88, u_0, w_11, x_11, t);
              }
              t = e_12(t);
              LocalPopChoice(c_22);
            }
          else
            {
              t = a_22;
              {
                ATerm t_3 = NULL,g_4 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(s_11);
                t_3 = t;
                t = x_11;
                t = e_12(t);
                g_4 = t;
                t = (ATerm) ATinsert(CheckATermList(g_4), w_11);
                y_0 = t;
                t = SSLsetAnnotations(y_0, t_3);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = e_12(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      if((f_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
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
        t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
        t = s_7(z_28, a_29, t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATempty;
      }
  }
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_12, b_29);
  t = a_7(x_0, o_12, b_29, t);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_28, a_29, n_12);
  t = lookup_table_0_1(z_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(a_29, n_12, p_12, t);
  t = m_12;
  return(t);
}
static ATerm c_7 (ATerm n_93 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
{
  static ATerm z_0 (ATerm t);
  static ATerm z_0 (ATerm t)
  {
    ATerm g_13 = NULL,h_13 = NULL;
    if(match_cons(t, sym__2))
      {
        g_13 = ATgetArgument(t, 0);
        h_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, j_29, g_13, h_13);
    t = n_93(t);
    return(t);
  }
  t = i_29;
  t = map_1_0(z_0, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm d_1 (ATerm t)
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
      ATerm i_13 = NULL,j_13 = NULL;
      i_13 = t;
      t = (ATerm) ATinsert(ATempty, term_l_22);
      j_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_13, (ATerm) ATinsert(ATempty, term_l_22));
      t = j_7(i_13, j_13, t);
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
                ATerm k_13 = NULL,n_13 = NULL;
                k_13 = t;
                t = (ATerm) ATinsert(ATempty, term_p_22);
                n_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_13, (ATerm) ATinsert(ATempty, term_p_22));
                t = j_7(k_13, n_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_22;
              }
            t = debug_1_0(b_1, t);
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            t = debug_1_0(d_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(n_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_s_22;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  t = term_m_20;
  y_14 = t;
  t = (ATerm) ATinsert(ATempty, term_t_22);
  z_14 = t;
  t = SSL_printnl(y_14, z_14);
  t = x_14;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  if(match_cons(t, sym__3))
    {
      a_15 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
      c_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_7(a_15, b_15, c_15, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  t = term_m_20;
  g_15 = t;
  t = (ATerm) ATinsert(ATempty, term_v_22);
  h_15 = t;
  t = SSL_printnl(g_15, h_15);
  t = f_15;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  t = term_m_20;
  j_15 = t;
  t = (ATerm) ATinsert(ATempty, term_t_22);
  k_15 = t;
  t = SSL_printnl(j_15, k_15);
  t = i_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,e_14 = NULL,h_14 = NULL,k_14 = NULL,p_14 = NULL,q_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_13 = t;
  t = if_verbose5_1_0(f_1, t);
  {
    ATerm x_22 = t;
    if((PushChoice() == 0))
      {
        ATerm v_14 = NULL,w_14 = NULL;
        t = term_y_22;
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, s_13);
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_22, (ATerm) ATmakeAppl(sym_Imported_1, s_13));
        t = s_7(v_14, w_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_22;
      }
  }
  u_13 = t;
  t = term_y_22;
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_22, term_c_23, (ATerm) ATinsert(ATempty, s_13));
  t = lookup_table_0_1(k_14, t);
  u_14 = t;
  t = term_c_23;
  p_14 = t;
  t = (ATerm) ATinsert(ATempty, s_13);
  q_14 = t;
  t = u_14;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(p_14, q_14, t_14, t);
  t = u_13;
  t = if_verbose4_1_0(i_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_1, t);
  t_13 = t;
  t = term_y_22;
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_22, t_13);
  t = c_7(p_1, h_14, t_13, t);
  t = if_verbose6_1_0(q_1, t);
  t = term_y_22;
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_22, (ATerm)ATmakeAppl(sym_Imported_1, s_13), (ATerm) ATempty);
  t = lookup_table_0_1(v_13, t);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, s_13);
  y_13 = t;
  t = (ATerm) ATempty;
  a_14 = t;
  t = e_14;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(y_13, a_14, b_14, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_22, (ATerm)ATmakeAppl(sym_Imported_1, s_13), (ATerm) ATempty);
  t = if_verbose4_1_0(t_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_15 = ATgetFirst((ATermList) t);
          z_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 = NULL,d_5 = NULL,e_5 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(x_15);
            a_5 = t;
            t = y_15;
            t = d_96(t);
            d_5 = t;
            t = z_15;
            t = filter_1_0(d_96, t);
            e_5 = t;
            t = (ATerm) ATinsert(CheckATermList(e_5), d_5);
            a_1 = t;
            t = SSLsetAnnotations(a_1, a_5);
            LocalPopChoice(g_23);
          }
        else
          {
            t = d_23;
            t = z_15;
            t = filter_1_0(d_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  static ATerm j_16 (ATerm t);
  static ATerm j_16 (ATerm t)
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_82(t);
        t = j_16(t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = k_82(t);
      }
    return(t);
  }
  t = j_16(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_16 = NULL,l_16 = NULL;
      t = term_k_8;
      k_16 = t;
      t = term_n_23;
      l_16 = t;
      t = term_o_23;
      t = s_7(k_16, l_16, t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_16 = NULL;
            t = term_t_23;
            m_16 = t;
            t = SSL_getenv(m_16);
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_u_23;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  t = term_y_22;
  c_17 = t;
  t = term_v_23;
  d_17 = t;
  t = term_z_23;
  t = s_7(c_17, d_17, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_24;
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
  t = term_b_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_16 = NULL;
  t = if_verbose5_1_0(v_1, t);
  r_16 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_16 = NULL,a_17 = NULL;
        t = term_y_22;
        t_16 = t;
        t = term_c_23;
        a_17 = t;
        t = term_f_24;
        t = s_7(t_16, a_17, t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm b_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_17 = t;
          t = repeat_2_0(z_1, _id, t);
          t = b_17;
        }
      }
  }
  t = r_16;
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
static ATerm p_18 (ATerm n_17, ATerm t)
{
  ATerm p_17 = NULL,s_17 = NULL,t_17 = NULL;
  t = term_y_22;
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, n_17);
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_22, (ATerm) ATmakeAppl(sym_Tool_1, n_17));
  t = s_7(s_17, t_17, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_24 = ATgetFirst((ATermList) t);
      if(match_cons(i_24, sym__2))
        {
          ATerm q_24 = ATgetArgument(i_24, 0);
          p_17 = ATgetArgument(i_24, 1);
        }
      else
        _fail(t);
      {
        ATerm k_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_17;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_y_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_17 = NULL,w_17 = NULL,x_17 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      x_17 = t;
      if(match_cons(t, sym__2))
        {
          u_17 = ATgetArgument(t, 0);
          w_17 = ATgetArgument(t, 1);
          {
            ATerm v_24 = t;
            int w_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
                t = term_y_22;
                f_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_17);
                g_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_22, (ATerm) ATmakeAppl(sym_Tool_1, u_17));
                t = s_7(f_18, g_18, t);
                {
                  static ATerm e_2 (ATerm t);
                  static ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((w_17 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_18 != NULL) && (e_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                }
                t = not_null(e_18);
                LocalPopChoice(w_24);
              }
            else
              {
                t = v_24;
                t = p_18(x_17, t);
              }
          }
        }
      else
        {
          t = p_18(x_17, t);
        }
      t = if_verbose5_1_0(g_2, t);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm o_18 = NULL,b_6 = NULL,f_6 = NULL;
        o_18 = t;
        t = term_m_20;
        b_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), o_18), term_z_24);
        f_6 = t;
        t = SSL_printnl(b_6, f_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), o_18), term_z_24);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,x_18 = NULL;
  x_18 = t;
  t = z_111(t);
  t = xtc_find_0_0(t);
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_18, x_18);
  {
    static ATerm o_2 (ATerm t);
    static ATerm o_2 (ATerm t)
    {
      ATerm y_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, v_18, x_18);
      t = v_6(v_18, x_18, t);
      t = term_f_25;
      y_18 = t;
      t = SSL_exit(y_18);
      return(t);
    }
    t = fork_and_wait_1_0(o_2, t);
  }
  t = x_18;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_19 = NULL,f_19 = NULL;
      t = a_19;
      t = xtc_new_file_0_0(t);
      c_19 = t;
      t = t_0(t);
      f_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_19, (ATerm) ATinsert(ATinsert(ATempty, c_19), term_l_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_19);
    }
  else
    {
      ATerm h_19 = NULL,i_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_19;
      t = xtc_new_file_0_0(t);
      h_19 = t;
      t = t_0(t);
      i_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_19), term_l_8), b_19), term_j_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_19);
    }
  return(t);
}
ATerm debug_1_0 (ATerm o_99 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,q_19 = NULL,v_19 = NULL,w_19 = NULL;
  j_19 = t;
  t = o_99(t);
  q_19 = t;
  t = term_m_20;
  v_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_19), q_19);
  w_19 = t;
  t = SSL_printnl(v_19, w_19);
  t = j_19;
  return(t);
}
static ATerm t_20 (ATerm e_20, ATerm t)
{
  t = e_20;
  {
    ATerm m_25 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_25 = ATgetArgument(t, 0);
            ATerm o_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_25;
      }
  }
  t = term_s_25;
  t = debug_1_0(p_2, t);
  t = (ATerm) ATmakeAppl(sym__2, e_20, term_q_11);
  t = open_file_0_0(t);
  return(t);
}
static ATerm u_20 (ATerm j_20, ATerm k_20, ATerm l_20, ATerm t)
{
  t = SSL_open_file(j_20, k_20);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  if(match_cons(t, sym__2))
    {
      r_20 = ATgetArgument(t, 0);
      s_20 = ATgetArgument(t, 1);
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_20(q_20, t);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = u_20(r_20, s_20, q_20, t);
          }
      }
    }
  else
    {
      t = t_20(q_20, t);
    }
  return(t);
}
static ATerm e_7 (ATerm f_93 (ATerm), ATerm y_26, ATerm w_26, ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  y_20 = t;
  t = f_93(t);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_20, y_26, w_26);
  t = t_7(v_20, y_26, w_26, t);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_21 = NULL;
        t = term_z_25;
        e_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_20, term_z_25);
        t = s_7(v_20, e_21, t);
        {
          ATerm a_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_26;
            }
        }
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
      w_20 = ATgetFirst((ATermList) t);
      x_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_20, term_z_25, (ATerm) ATinsert(CheckATermList(x_20), (ATerm) ATinsert(CheckATermList(w_20), y_26)));
  t = lookup_table_0_1(v_20, t);
  c_21 = t;
  t = term_z_25;
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(x_20), (ATerm) ATinsert(CheckATermList(w_20), y_26));
  a_21 = t;
  t = c_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(z_20, a_21, b_21, t);
  t = y_20;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_21 = NULL;
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_21 = NULL,m_6 = NULL;
      k_21 = t;
      t = term_e_26;
      m_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_21, term_e_26);
      t = g_7(k_21, m_6, t);
      g_21 = t;
      t = SSL_mkstemp(g_21);
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm l_21 = NULL;
        t = term_f_26;
        l_21 = t;
        t = SSL_perror(l_21);
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
static ATerm t_2 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,u_21 = NULL,v_21 = NULL;
  t = P__tmpdir_0_0(t);
  u_21 = t;
  t = term_j_26;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_21, term_j_26);
  t = g_7(u_21, v_21, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_d_9;
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_21, term_d_9);
  t = e_7(t_2, q_21, r_21, t);
  t = SSL_close(p_21);
  t = q_21;
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm z_21 = NULL,b_22 = NULL;
  z_21 = t;
  t = xtc_new_file_0_0(t);
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_22, term_q_11);
  t = open_file_0_0(t);
  t = SSL_print(b_22, z_21);
  t = SSL_close_file(b_22);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_22);
  return(t);
}
static ATerm z_22 (ATerm q_22, ATerm t)
{
  t = SSL_fclose(q_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_22 = NULL,w_22 = NULL;
  w_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_22 = ATgetArgument(t, 0);
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_22);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            t = z_22(w_22, t);
          }
      }
    }
  else
    {
      t = z_22(w_22, t);
    }
  return(t);
}
static ATerm f_7 (ATerm j_51, ATerm t)
{
  t = SSL_read_term_from_stream(j_51);
  return(t);
}
static ATerm g_7 (ATerm r_46, ATerm s_46, ATerm t)
{
  t = SSL_strcat(r_46, s_46);
  return(t);
}
static ATerm h_7 (ATerm l_14, ATerm m_14, ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_fopen(l_14, m_14);
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_23 = NULL;
  t = SSL_stdin_stream();
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_23 = NULL;
  t = SSL_stdout_stream();
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_23 = NULL;
  t = SSL_stderr_stream();
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_23);
  return(t);
}
static ATerm c_25 (ATerm l_23, ATerm t)
{
  ATerm m_23 = NULL;
  t = SSL_explode_term(l_23);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_26 = ATgetArgument(t, 1);
        if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
          {
            m_23 = ATgetFirst((ATermList) o_26);
            {
              ATerm q_26 = (ATerm) ATgetNext((ATermList) o_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_25 (ATerm r_23, ATerm s_23, ATerm w_23, ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,c_24 = NULL,h_24 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(w_23);
  c_24 = t;
  t = r_23;
  if(match_cons(t, sym_Path_1))
    {
      h_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_24, s_23);
  c_1 = t;
  t = SSLsetAnnotations(c_1, c_24);
  if(match_cons(t, sym__2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(x_23, y_23, t);
  return(t);
}
static ATerm e_25 (ATerm j_24, ATerm l_24, ATerm m_24, ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,s_24 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(m_24);
  p_24 = t;
  t = SSL_is_string(j_24);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_24, l_24);
  e_1 = t;
  t = SSLsetAnnotations(e_1, p_24);
  if(match_cons(t, sym__2))
    {
      n_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(n_24, o_24, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,b_25 = NULL;
  x_24 = t;
  if(match_cons(t, sym__2))
    {
      y_24 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_25(x_24, t);
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
              ATerm t_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_25(y_24, b_25, x_24, t);
                  LocalPopChoice(u_26);
                }
              else
                {
                  t = t_26;
                  t = e_25(y_24, b_25, x_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_25(x_24, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,p_25 = NULL;
  p_25 = t;
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_25, term_z_26);
        t = i_7(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        {
          ATerm a_8 = NULL,b_8 = NULL;
          t = term_a_27;
          b_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_27, p_25);
          t = g_7(b_8, p_25, t);
          a_8 = t;
          t = SSL_perror(a_8);
          _fail(t);
        }
      }
  }
  h_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(i_25, t);
  g_25 = t;
  t = h_25;
  t = fclose_0_0(t);
  t = g_25;
  return(t);
}
static ATerm j_7 (ATerm c_14, ATerm d_14, ATerm t)
{
  t = SSL_access(c_14, d_14);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_25 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_r_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_26 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_22);
      d_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_25, (ATerm) ATinsert(ATempty, term_p_22));
      t = j_7(y_25, d_26, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = b_111(t);
  t = print_to_0_0(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_26 = NULL,i_26 = NULL,k_26 = NULL;
  k_26 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_26 = ATgetArgument(t, 0);
            {
              ATerm e_8 = NULL,j_1 = NULL;
              t = SSLgetAnnotations(k_26);
              e_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_26);
              j_1 = t;
              t = SSLsetAnnotations(j_1, e_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_26;
          }
        LocalPopChoice(c_27);
        t = xtc_transform_file_2_0(w_2, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = b_27;
        t = xtc_transform_term_2_0(x_2, create_abox2latex_args_0_0, t);
      }
  }
  g_26 = t;
  t = term_d_27;
  t = create_header_0_0(t);
  i_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_26), i_26);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_f_27;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = xtc_io_transform_text_1_0(v_2, t);
  return(t);
}
static ATerm s_7 (ATerm v_29, ATerm w_29, ATerm t)
{
  ATerm e_27 = NULL;
  t = lookup_table_0_1(v_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(w_29, e_27, t);
  return(t);
}
static ATerm l_7 (ATerm h_28, ATerm i_28, ATerm t)
{
  ATerm g_27 = NULL,l_27 = NULL;
  l_27 = t;
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
        t = s_7(h_28, i_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_27 = ATgetFirst((ATermList) t);
            g_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_27);
        {
          ATerm o_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, h_28, i_28, g_27);
          t = lookup_table_0_1(h_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_7(i_28, g_27, o_27, t);
          t = (ATerm) ATmakeAppl(sym__3, h_28, i_28, g_27);
        }
      }
    else
      {
        t = h_27;
        {
          ATerm r_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
          t = lookup_table_0_1(h_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_7(i_28, r_27, t);
          t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
        }
      }
  }
  t = l_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,z_27 = NULL,e_28 = NULL;
  w_27 = t;
  t = c_93(t);
  v_27 = t;
  {
    ATerm k_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_28 = NULL;
        t = term_z_25;
        f_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_27, term_z_25);
        t = s_7(v_27, f_28, t);
        {
          ATerm n_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_27;
            }
        }
        LocalPopChoice(m_27);
      }
    else
      {
        t = k_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_27 = ATgetFirst((ATermList) t);
      t_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_27, term_z_25, t_27);
  t = lookup_table_0_1(v_27, t);
  e_28 = t;
  t = term_z_25;
  x_27 = t;
  t = e_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(x_27, t_27, z_27, t);
  t = u_27;
  {
    static ATerm y_2 (ATerm t);
    static ATerm y_2 (ATerm t)
    {
      ATerm j_28 = NULL;
      j_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_27, j_28);
      t = l_7(v_27, j_28, t);
      return(t);
    }
    t = map_1_0(y_2, t);
  }
  t = w_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_82(t);
      t = f_82(t);
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      t = f_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  ATerm l_28 = NULL,o_28 = NULL,q_28 = NULL,r_28 = NULL,u_28 = NULL,v_28 = NULL,x_28 = NULL;
  o_28 = t;
  t = b_93(t);
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_28, term_z_25);
  {
    ATerm s_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_28 = ATgetArgument(t, 0);
            ATerm g_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_25;
        t_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_28, term_z_25);
        t = s_7(l_28, t_29, t);
        LocalPopChoice(y_27);
      }
    else
      {
        t = s_27;
        t = (ATerm) ATempty;
      }
  }
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_28, term_z_25, (ATerm) ATinsert(CheckATermList(q_28), (ATerm) ATempty));
  t = lookup_table_0_1(l_28, t);
  x_28 = t;
  t = term_z_25;
  r_28 = t;
  t = (ATerm) ATinsert(CheckATermList(q_28), (ATerm) ATempty);
  u_28 = t;
  t = x_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(r_28, u_28, v_28, t);
  t = o_28;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_h_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  {
    ATerm k_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(i_30);
        LocalPopChoice(m_28);
      }
    else
      {
        t = k_28;
        t = i_30;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_111 (ATerm), ATerm t)
{
  ATerm y_29 = NULL;
  static ATerm c_3 (ATerm t);
  static ATerm c_3 (ATerm t)
  {
    ATerm z_29 = NULL;
    z_29 = t;
    {
      ATerm n_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_30 = NULL,d_30 = NULL;
          t = term_h_26;
          b_30 = t;
          t = term_z_25;
          d_30 = t;
          t = term_s_28;
          t = s_7(b_30, d_30, t);
          LocalPopChoice(p_28);
        }
      else
        {
          t = n_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_29 != NULL) && (y_29 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_29 = ATgetFirst((ATermList) t);
        {
          ATerm t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_29;
    t = map_1_0(n_3, t);
    t = z_29;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(a_3, t);
  t = restore_always_2_0(l_111, c_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,u_30 = NULL;
  n_30 = t;
  t = term_d_9;
  t = whoami_0_0(t);
  q_30 = t;
  t = term_m_20;
  s_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_28), q_30), term_w_28);
  u_30 = t;
  t = SSL_printnl(s_30, u_30);
  t = term_m_10;
  r_30 = t;
  t = SSL_exit(r_30);
  t = n_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm a_31 = NULL,c_31 = NULL,d_31 = NULL,j_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
      t = term_d_9;
      t = p_0(t);
      k_31 = t;
      t = term_c_29;
      l_31 = t;
      t = term_d_29;
      m_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_29, term_d_29, k_31);
      t = t_7(l_31, m_31, k_31, t);
      _fail(t);
    }
  else
    {
      ATerm s_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_31 = ATgetFirst((ATermList) t);
          c_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_31 = ATgetFirst((ATermList) t);
          j_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_31;
      t = m_0(t);
      t = d_31;
      t = o_0(t);
      s_31 = t;
      t = (ATerm) ATinsert(CheckATermList(j_31), s_31);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  static ATerm h_33 (ATerm t);
  static ATerm h_33 (ATerm t)
  {
    ATerm t_32 = NULL,f_33 = NULL,g_33 = NULL;
    g_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_32 = ATgetFirst((ATermList) t);
        f_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_8 = NULL,z_8 = NULL,u_1 = NULL;
          t = SSLgetAnnotations(g_33);
          w_8 = t;
          t = f_33;
          t = h_33(t);
          z_8 = t;
          t = (ATerm) ATinsert(CheckATermList(z_8), t_32);
          u_1 = t;
          t = SSLsetAnnotations(u_1, w_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_33;
        t = w_84(t);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,y_31 = NULL;
  u_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_31;
    }
  else
    {
      static ATerm r_3 (ATerm t);
      static ATerm r_3 (ATerm t)
      {
        t = not_null(y_31);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_31 = ATgetFirst((ATermList) t);
          if(((y_31 != NULL) && (y_31 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_31;
      t = at_end_1_0(r_3, t);
    }
  return(t);
}
static ATerm x_33 (ATerm m_33, ATerm t)
{
  ATerm o_33 = NULL;
  t = SSL_explode_term(m_33);
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_33;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym__2))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_3 (ATerm t);
            static ATerm s_3 (ATerm t)
            {
              t = r_33;
              return(t);
            }
            t = q_33;
            t = at_end_1_0(s_3, t);
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            t = x_33(s_33, t);
          }
      }
    }
  else
    {
      t = x_33(s_33, t);
    }
  return(t);
}
static ATerm m_7 (ATerm f_59, ATerm e_59, ATerm t)
{
  ATerm y_33 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  t = f_59;
  {
    ATerm h_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL;
        t = term_k_8;
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, f_59);
        t = s_7(f_34, f_59, t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = h_29;
        t = (ATerm) ATempty;
      }
  }
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_59, b_34);
  t = conc_0_0(t);
  y_33 = t;
  t = term_k_8;
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, f_59, y_33);
  t = lookup_table_0_1(c_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(f_59, y_33, d_34, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, f_59, y_33);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  if(match_string(t, "-k"))
    {
      t = h_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_34;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  i_34 = t;
  t = SSL_string_to_int(i_34);
  j_34 = t;
  t = term_l_29;
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, j_34);
  t = v_7(k_34, j_34, t);
  t = i_34;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_4, d_4, h_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  if(match_string(t, "-S"))
    {
      t = m_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_34;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  t = term_h_10;
  n_34 = t;
  t = term_n_29;
  o_34 = t;
  t = term_p_29;
  t = v_7(n_34, o_34, t);
  t = term_q_29;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_r_29;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm p_34 = NULL,r_34 = NULL,s_34 = NULL;
  p_34 = t;
  t = SSL_string_to_int(p_34);
  r_34 = t;
  t = term_h_10;
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_10, r_34);
  t = v_7(s_34, r_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_34);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_s_29;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t = term_u_29;
  t_34 = t;
  t = term_d_9;
  u_34 = t;
  t = term_x_29;
  t = v_7(t_34, u_34, t);
  t = term_a_30;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, m_4, n_4, t);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, q_4, r_4, t);
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            t = Option_3_0(t_4, y_4, z_4, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  if(match_string(t, "-o"))
    {
      t = w_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_34;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  z_34 = t;
  t = term_l_8;
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_8, z_34);
  t = v_7(a_35, z_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_34);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, f_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  if(match_string(t, "-i"))
    {
      t = k_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_35;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  l_35 = t;
  t = term_j_25;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, l_35);
  t = v_7(m_35, l_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_35);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, k_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  t = term_y_8;
  o_35 = t;
  t = (ATerm) ATinsert(ATempty, n_35);
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATempty, n_35));
  t = m_7(o_35, p_35, t);
  t = n_35;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_l_30;
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
  ATerm q_35 = NULL,u_35 = NULL;
  q_35 = t;
  t = term_n_11;
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, q_35);
  t = v_7(u_35, q_35, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
        ATerm t_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(v_30);
          }
        else
          {
            t = t_30;
            {
              ATerm w_30 = t;
              int x_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
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
                        t = keep_option_0_0(t);
                        LocalPopChoice(z_30);
                      }
                    else
                      {
                        t = y_30;
                        {
                          ATerm b_31 = t;
                          int e_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(l_5, n_5, o_5, t);
                              LocalPopChoice(e_31);
                            }
                          else
                            {
                              t = b_31;
                              t = ArgOption_3_0(q_5, s_5, t_5, t);
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
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,z_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_9;
  t = whoami_0_0(t);
  v_35 = t;
  t = term_m_20;
  x_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_31), v_35);
  z_35 = t;
  t = SSL_printnl(x_35, z_35);
  t = term_m_10;
  w_35 = t;
  t = SSL_exit(w_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_36 = NULL,d_36 = NULL;
  t = term_k_8;
  a_36 = t;
  t = term_g_31;
  d_36 = t;
  t = term_h_31;
  t = s_7(a_36, d_36, t);
  return(t);
}
static ATerm n_7 (ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm i_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_25, l_25);
      LocalPopChoice(n_31);
    }
  else
    {
      t = i_31;
      t = SSL_addr(k_25, l_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_36;
      t = t_91(t);
    }
  else
    {
      ATerm l_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_36 = ATgetFirst((ATermList) t);
          h_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_36;
      t = foldr_2_0(t_91, u_91, t);
      l_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_36, l_36);
      t = u_91(t);
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
  t = term_n_29;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm r_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(r_9, v_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_36 = NULL,l_9 = NULL,o_9 = NULL;
  t = times_0_0(t);
  o_9 = t;
  t = SSL_explode_term(o_9);
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9;
  t = foldr_2_0(u_5, v_5, t);
  o_36 = t;
  t = SSL_TicksToSeconds(o_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_37 = NULL,g_37 = NULL,h_37 = NULL;
  d_37 = t;
  if(match_cons(t, sym__2))
    {
      g_37 = ATgetArgument(t, 0);
      h_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_37;
        if((g_37 != t))
          {
            _fail(t);
          }
        t = d_37;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
        {
          ATerm r_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_37, h_37);
              LocalPopChoice(t_31);
            }
          else
            {
              t = r_31;
              t = SSL_gtr(g_37, h_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm n_37 = NULL;
  n_37 = t;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_37 = NULL,s_37 = NULL,t_37 = NULL;
        t = term_k_8;
        s_37 = t;
        t = term_h_10;
        t_37 = t;
        t = term_l_10;
        t = s_7(s_37, t_37, t);
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_37, term_m_10);
        t = geq_0_0(t);
        t = n_37;
        t = x_109(t);
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = n_37;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,b_38 = NULL,c_38 = NULL;
  t = run_time_0_0(t);
  y_37 = t;
  t = term_d_9;
  t = whoami_0_0(t);
  z_37 = t;
  t = term_m_20;
  b_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_31), y_37), term_y_11), z_37);
  c_38 = t;
  t = SSL_printnl(b_38, c_38);
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_31), y_37), term_y_11), z_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_29;
  d_38 = t;
  t = SSL_exit(d_38);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm z_38 = NULL,d_39 = NULL;
  d_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_38 = ATgetArgument(t, 0);
          {
            ATerm o_10 = NULL,f_2 = NULL;
            t = SSLgetAnnotations(d_39);
            o_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_38);
            f_2 = t;
            t = SSLsetAnnotations(f_2, o_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_38 = NULL,m_38 = NULL;
      t = term_k_8;
      h_38 = t;
      t = term_c_32;
      m_38 = t;
      t = term_d_32;
      t = s_7(h_38, m_38, t);
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      t = fetch_1_0(x_5, t);
    }
  t = o_77(t);
  return(t);
}
static ATerm w_7 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm f_39 = NULL;
  t = SSL_hashtable_put(w_32, u_32, v_32);
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_39);
  return(t);
}
static ATerm x_7 (ATerm x_32, ATerm y_32, ATerm t)
{
  t = SSL_hashtable_get(y_32, x_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm o_29, ATerm t)
{
  ATerm u_39 = NULL;
  t = table_hashtable_0_0(t);
  u_39 = t;
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 = NULL;
        t = u_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_7(o_29, z_10, t);
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        {
          ATerm j_11 = NULL;
          t = o_29;
          t = table_create_0_0(t);
          t = u_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_7(o_29, j_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm z_39 = NULL;
  t = SSL_hashtable_create(c_33, d_33);
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_39);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,e_40 = NULL,f_40 = NULL;
  a_40 = t;
  t = term_g_32;
  e_40 = t;
  t = term_h_32;
  f_40 = t;
  t = a_40;
  t = new_hashtable_0_2(e_40, f_40, t);
  b_40 = t;
  t = a_40;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(a_40, b_40, c_40, t);
  t = a_40;
  return(t);
}
static ATerm p_7 (ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm g_40 = NULL;
  t = SSL_hashtable_remove(a_33, z_32);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_40);
  return(t);
}
static ATerm q_7 (ATerm e_33, ATerm t)
{
  ATerm h_40 = NULL;
  t = SSL_hashtable_destroy(e_33);
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_40);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_40 = NULL;
  t = SSL_table_hashtable();
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_40);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  k_40 = t;
  t = table_hashtable_0_0(t);
  l_40 = t;
  t = lookup_table_0_1(k_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(n_40, t);
  t = l_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(k_40, m_40, t);
  t = k_40;
  return(t);
}
ATerm map_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  static ATerm e_41 (ATerm t);
  static ATerm e_41 (ATerm t)
  {
    ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
    b_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_41;
      }
    else
      {
        ATerm u_11 = NULL,a_12 = NULL,b_12 = NULL,h_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_41 = ATgetFirst((ATermList) t);
            d_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_41);
        u_11 = t;
        t = c_41;
        t = f_84(t);
        a_12 = t;
        t = d_41;
        t = e_41(t);
        b_12 = t;
        t = (ATerm) ATinsert(CheckATermList(b_12), a_12);
        h_2 = t;
        t = SSLsetAnnotations(h_2, u_11);
      }
    return(t);
  }
  t = e_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_41 = ATgetFirst((ATermList) t);
      i_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_41 = NULL,n_41 = NULL;
        static ATerm y_5 (ATerm t);
        static ATerm y_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_41)), not_null(n_41));
          return(t);
        }
        t = i_41;
        t = l_0(t);
        if(((m_41 != NULL) && (m_41 != t)))
          _fail(t);
        else
          m_41 = t;
        t = h_41;
        t = j_0(t);
        if(((n_41 != NULL) && (n_41 != t)))
          _fail(t);
        else
          n_41 = t;
        t = i_41;
        t = reverse_acc_2_0(j_0, y_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_9;
      t = l_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,j_2 = NULL;
  v_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_41);
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_41);
  j_2 = t;
  t = SSLsetAnnotations(j_2, t_41);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_41), term_i_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL;
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_41 = NULL,s_41 = NULL;
      t = term_k_8;
      r_41 = t;
      t = term_g_31;
      s_41 = t;
      t = term_h_31;
      t = s_7(r_41, s_41, t);
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      t = fetch_1_0(e_6, t);
    }
  t = term_l_32;
  t = echo_0_0(t);
  t = term_c_29;
  p_41 = t;
  t = term_d_29;
  q_41 = t;
  t = term_m_32;
  t = s_7(p_41, q_41, t);
  t = reverse_acc_2_0(_id, g_6, t);
  t = map_1_0(h_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  static ATerm u_42 (ATerm t);
  static ATerm u_42 (ATerm t)
  {
    ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
    r_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_42 = ATgetFirst((ATermList) t);
        t_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_12 = NULL,t_12 = NULL,i_5 = NULL;
          t = SSLgetAnnotations(r_42);
          q_12 = t;
          t = s_42;
          t = p_84(t);
          t_12 = t;
          t = (ATerm) ATinsert(CheckATermList(t_42), t_12);
          i_5 = t;
          t = SSLsetAnnotations(i_5, q_12);
          LocalPopChoice(o_32);
        }
      else
        {
          t = n_32;
          {
            ATerm l_13 = NULL,p_13 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(r_42);
            l_13 = t;
            t = t_42;
            t = u_42(t);
            p_13 = t;
            t = (ATerm) ATinsert(CheckATermList(p_13), s_42);
            j_5 = t;
            t = SSLsetAnnotations(j_5, l_13);
          }
        }
    }
    return(t);
  }
  t = u_42(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  y_42 = t;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_32 = ATgetFirst((ATermList) t);
                ATerm s_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_42;
          }
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = (ATerm) ATinsert(ATempty, y_42);
      }
  }
  z_42 = t;
  t = term_o_8;
  a_43 = t;
  t = SSL_printnl(a_43, z_42);
  t = y_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  t = term_k_8;
  e_43 = t;
  t = term_g_31;
  f_43 = t;
  t = term_h_31;
  t = s_7(e_43, f_43, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  t = term_i_33;
  g_43 = t;
  t = term_d_9;
  h_43 = t;
  t = term_j_33;
  t = v_7(g_43, h_43, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_k_33;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  t = term_i_33;
  k_43 = t;
  t = term_d_9;
  l_43 = t;
  t = term_j_33;
  t = v_7(k_43, l_43, t);
  t = term_l_33;
  i_43 = t;
  t = term_d_9;
  j_43 = t;
  t = term_n_33;
  t = v_7(i_43, j_43, t);
  t = term_p_33;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_t_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_6, l_6, n_6, t);
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      t = Option_3_0(o_6, p_6, q_6, t);
    }
  return(t);
}
static ATerm v_7 (ATerm z_58, ATerm a_59, ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  t = term_k_8;
  m_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, z_58, a_59);
  t = lookup_table_0_1(m_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(z_58, a_59, n_43, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, z_58, a_59);
  return(t);
}
static ATerm t_7 (ATerm c_28, ATerm d_28, ATerm b_28, ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
  {
    ATerm w_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_34 = ATgetArgument(t, 0);
            ATerm e_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = s_7(c_28, d_28, t);
        LocalPopChoice(z_33);
      }
    else
      {
        t = w_33;
        t = (ATerm) ATempty;
      }
  }
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, (ATerm) ATinsert(CheckATermList(r_43), b_28));
  t = lookup_table_0_1(c_28, t);
  u_43 = t;
  t = (ATerm) ATinsert(CheckATermList(r_43), b_28);
  s_43 = t;
  t = u_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(d_28, s_43, t_43, t);
  t = q_43;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
      t = term_d_9;
      t = h_0(t);
      c_44 = t;
      t = term_c_29;
      d_44 = t;
      t = term_d_29;
      e_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_29, term_d_29, c_44);
      t = t_7(d_44, e_44, c_44, t);
      _fail(t);
    }
  else
    {
      ATerm h_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_44 = ATgetFirst((ATermList) t);
          b_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_44;
      t = d_0(t);
      t = term_d_9;
      t = g_0(t);
      h_44 = t;
      t = (ATerm) ATinsert(CheckATermList(b_44), h_44);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,m_5 = NULL;
  n_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_44 = ATgetFirst((ATermList) t);
      k_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_44);
  i_44 = t;
  t = j_44;
  t = t_70(t);
  l_44 = t;
  t = k_44;
  t = u_70(t);
  m_44 = t;
  t = (ATerm) ATinsert(CheckATermList(m_44), l_44);
  m_5 = t;
  t = SSLsetAnnotations(m_5, i_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,x_44 = NULL,y_44 = NULL,p_5 = NULL;
  s_44 = t;
  {
    ATerm g_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_34;
        t = x_101(t);
        LocalPopChoice(l_34);
      }
    else
      {
        t = g_34;
      }
  }
  t = s_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_44 = ATgetFirst((ATermList) t);
      v_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_44);
  t_44 = t;
  t = term_g_31;
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, u_44);
  t = v_7(y_44, u_44, t);
  t = v_44;
  {
    static ATerm i_45 (ATerm t);
    static ATerm i_45 (ATerm t)
    {
      ATerm v_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_34 = t;
          int b_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_45 = NULL;
              b_45 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_45;
              LocalPopChoice(b_35);
            }
          else
            {
              t = y_34;
              t = x_101(t);
              t = Cons_2_0(_id, i_45, t);
            }
          LocalPopChoice(x_34);
        }
      else
        {
          t = v_34;
          {
            ATerm e_45 = NULL,f_45 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_45 = ATgetFirst((ATermList) t);
                f_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_45), (ATerm) ATmakeAppl(sym_Undefined_1, e_45));
          }
        }
      return(t);
    }
    t = i_45(t);
  }
  x_44 = t;
  t = (ATerm) ATinsert(CheckATermList(x_44), (ATerm) ATmakeAppl(sym_Program_1, u_44));
  p_5 = t;
  t = SSLsetAnnotations(p_5, t_44);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm v_45 = NULL;
  v_45 = t;
  if(match_string(t, "--help"))
    {
      t = v_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_45;
        }
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  t = term_c_32;
  w_45 = t;
  t = term_d_9;
  x_45 = t;
  t = term_c_35;
  t = v_7(w_45, x_45, t);
  t = term_d_35;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_e_35;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  p_45 = t;
  t = term_c_29;
  q_45 = t;
  t = term_f_35;
  t = lookup_table_0_1(q_45, t);
  u_45 = t;
  t = term_d_29;
  r_45 = t;
  t = (ATerm) ATempty;
  s_45 = t;
  t = u_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(r_45, s_45, t_45, t);
  t = p_45;
  {
    static ATerm r_6 (ATerm t);
    static ATerm r_6 (ATerm t)
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_101(t);
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          {
            ATerm i_35 = t;
            int j_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_6, d_7, o_7, t);
                LocalPopChoice(j_35);
              }
            else
              {
                t = i_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_6, t);
  }
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_46 = NULL;
        i_46 = t;
        {
          ATerm t_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_14 = NULL;
              t = i_46;
              {
                ATerm b_36 = t;
                int c_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_14 = NULL,j_14 = NULL;
                    t = term_k_8;
                    i_14 = t;
                    t = term_c_32;
                    j_14 = t;
                    t = term_d_32;
                    t = s_7(i_14, j_14, t);
                    LocalPopChoice(c_36);
                  }
                else
                  {
                    t = b_36;
                    t = fetch_1_0(r_7, t);
                  }
              }
              t = i_46;
              t = default_system_usage_0_0(t);
              t = term_n_29;
              g_14 = t;
              t = SSL_exit(g_14);
              LocalPopChoice(y_35);
            }
          else
            {
              t = t_35;
              {
                ATerm s_14 = NULL,d_15 = NULL,e_15 = NULL;
                t = term_k_8;
                d_15 = t;
                t = term_i_33;
                e_15 = t;
                t = term_e_36;
                t = s_7(d_15, e_15, t);
                t = i_46;
                t = default_system_about_0_0(t);
                t = term_n_29;
                s_14 = t;
                t = SSL_exit(s_14);
              }
            }
        }
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        {
          ATerm i_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
              static ATerm u_7 (ATerm t);
              static ATerm u_7 (ATerm t)
              {
                ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,r_5 = NULL;
                o_46 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_46);
                m_46 = t;
                t = n_46;
                if(((n_45 != NULL) && (n_45 != t)))
                  _fail(t);
                else
                  n_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_46);
                r_5 = t;
                t = SSLsetAnnotations(r_5, m_46);
                return(t);
              }
              t = fetch_1_0(u_7, t);
              t = term_m_20;
              k_46 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_45)), term_k_36);
              l_46 = t;
              t = SSL_printnl(k_46, l_46);
              t = (ATerm) ATmakeAppl(sym__2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_45)), term_k_36));
              t = default_system_usage_0_0(t);
              t = term_m_10;
              j_46 = t;
              t = SSL_exit(j_46);
              LocalPopChoice(j_36);
            }
          else
            {
              t = i_36;
            }
        }
      }
  }
  o_45 = t;
  t = term_c_29;
  t = table_destroy_0_0(t);
  t = o_45;
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  t = parse_options_1_0(q_77, t);
  v_46 = t;
  t = term_m_36;
  t = table_create_0_0(t);
  t = term_m_36;
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_36, term_n_36, v_46);
  t = lookup_table_0_1(w_46, t);
  z_46 = t;
  t = term_n_36;
  x_46 = t;
  t = z_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(x_46, v_46, y_46, t);
  t = v_46;
  t = s_77(t);
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_77, t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        {
          ATerm r_36 = t;
          int s_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_77(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_36);
            }
          else
            {
              t = r_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = xtc_temp_files_1_0(z_7, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm t_36 = t;
  int u_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_47 = NULL,d_47 = NULL,g_47 = NULL;
      t = term_k_8;
      d_47 = t;
      t = term_j_25;
      g_47 = t;
      t = term_v_36;
      t = s_7(d_47, g_47, t);
      c_47 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_47);
      LocalPopChoice(u_36);
    }
  else
    {
      t = t_36;
      t = term_r_8;
    }
  t = abox2latex_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2latex_options_0_0, default_usage_0_0, _id, y_7, t);
  return(t);
}
