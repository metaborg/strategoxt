#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_OpDeclInj_1;
Symbol sym_SortVar_1;
Symbol sym_Sort_2;
Symbol sym_Constructors_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Op_2;
Symbol sym_RDefT_4;
Symbol sym_Overlay_3;
Symbol sym_Path_2;
Symbol sym_SDefT_4;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_OpDeclInj_1 = ATmakeSymbol("OpDeclInj", 1, ATfalse);
  ATprotectSymbol(sym_OpDeclInj_1);
  sym_SortVar_1 = ATmakeSymbol("SortVar", 1, ATfalse);
  ATprotectSymbol(sym_SortVar_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_k_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_t_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_l_13;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_i_10;
ATerm term_e_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_o_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("overlay", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Keys_1, term_m_8);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_v_11, (ATerm) ATempty);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_m_8);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_8);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_t_14);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_a_16);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_t_14);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_t_14);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_w_16, term_t_14);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_t_14);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm y_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm CheckConsError_0_0 (ATerm t);
static ATerm z_4 (ATerm d_23, ATerm e_23, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm CheckCons_0_0 (ATerm t);
ATerm manytd_1_0 (ATerm k_79 (ATerm), ATerm t);
static ATerm a_5 (ATerm x_22, ATerm y_22, ATerm t);
ATerm end_scope_1_0 (ATerm r_76 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_76 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm check_constructors_p__2_0 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm check_constructors_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_95 (ATerm), ATerm t);
static ATerm b_5 (ATerm u_76 (ATerm), ATerm k_22, ATerm i_22, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm GenerateCheckRule_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm TupleType_0_0 (ATerm t);
ATerm TupleDecl_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm c_5 (ATerm m_20, ATerm o_20, ATerm p_20, ATerm t);
ATerm CheckConstructors_0_0 (ATerm t);
static ATerm d_5 (ATerm l_31, ATerm m_31, ATerm t);
static ATerm e_5 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm g_5 (ATerm v_82 (ATerm), ATerm y_226, ATerm o_30, ATerm t);
static ATerm f_5 (ATerm g_30, ATerm h_30, ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm output_1_0 (ATerm k_101 (ATerm), ATerm t);
static ATerm f_19 (ATerm z_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_5 (ATerm m_30, ATerm t);
static ATerm i_5 (ATerm n_31, ATerm o_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_22 (ATerm p_19, ATerm t);
static ATerm p_22 (ATerm t_19, ATerm u_19, ATerm v_19, ATerm t);
static ATerm u_22 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t);
static ATerm j_5 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm l_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_5 (ATerm b_35, ATerm c_35, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_5 (ATerm s_22, ATerm t_22, ATerm r_22, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_5 (ATerm y_37, ATerm z_37, ATerm t);
ATerm foldr_2_0 (ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_84 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm need_help_1_0 (ATerm b_101 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_5 (ATerm v_29, ATerm w_29, ATerm t);
ATerm debug_1_0 (ATerm t_82 (ATerm), ATerm t);
ATerm map_1_0 (ATerm r_87 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm o_5 (ATerm j_24, ATerm k_24, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_103 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm parse_options_1_0 (ATerm d_103 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm x_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      x_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(x_0, a_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm a_0 = NULL,m_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,v_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_o_8;
  t_0 = t;
  t = term_p_8;
  u_0 = t;
  t = term_q_8;
  t = z_4(u_0, t_0, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_8) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      a_0 = ATgetArgument(t, 1);
      m_0 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_0;
  t = foldr_3_0(y_0, d_1, e_1, t);
  v_0 = t;
  t = SSL_int_to_string(v_0);
  q_0 = t;
  t = term_t_8;
  r_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_8), q_0), term_y_8), o_0), term_x_8), term_w_8), m_0), term_v_8), a_0), term_u_8);
  s_0 = t;
  t = SSL_printnl(r_0, s_0);
  t = (ATerm) ATmakeAppl(sym_Op_2, o_0, p_0);
  return(t);
}
static ATerm z_4 (ATerm d_23, ATerm e_23, ATerm t)
{
  ATerm b_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_23, e_23);
  t = o_5(d_23, e_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_1 = ATgetFirst((ATermList) t);
      {
        ATerm b_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_1;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm c_2 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(c_2, f_2, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(j_3, k_3, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(t_4, u_4, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm c_3 = NULL,e_3 = NULL,f_3 = NULL;
  c_3 = t;
  if(match_cons(t, sym_Op_2))
    {
      e_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,j_2 = NULL,k_2 = NULL;
        t = f_3;
        t = foldr_3_0(g_1, i_1, l_1, t);
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, e_3, (ATerm) ATmakeAppl(sym_Keys_1, z_1));
        j_2 = t;
        t = term_e_9;
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATmakeAppl(sym_Op_2, e_3, (ATerm) ATmakeAppl(sym_Keys_1, z_1)));
        t = z_4(k_2, j_2, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm f_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_9) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, e_3, (ATerm) ATempty);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        {
          ATerm g_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_3 = NULL,w_3 = NULL,z_3 = NULL;
              t = f_3;
              t = foldr_3_0(m_1, o_1, q_1, t);
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, e_3, (ATerm) ATmakeAppl(sym_Keys_1, a_3));
              w_3 = t;
              t = term_e_9;
              z_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATmakeAppl(sym_Op_2, e_3, (ATerm) ATmakeAppl(sym_Keys_1, a_3)));
              t = z_4(z_3, w_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm l_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_9) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, e_3, (ATerm) ATempty);
              LocalPopChoice(k_9);
            }
          else
            {
              t = g_9;
              {
                ATerm p_4 = NULL,y_4 = NULL,m_5 = NULL;
                t = f_3;
                t = foldr_3_0(r_1, t_1, v_1, t);
                p_4 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, e_3, (ATerm) ATmakeAppl(sym_Keys_1, p_4));
                y_4 = t;
                t = term_e_9;
                m_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATmakeAppl(sym_Op_2, e_3, (ATerm) ATmakeAppl(sym_Keys_1, p_4)));
                t = z_4(m_5, y_4, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm o_9 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_9) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Op_2, e_3, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  static ATerm p_3 (ATerm t)
  {
    ATerm q_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_1 (ATerm t)
        {
          ATerm v_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_3(t);
              LocalPopChoice(y_9);
            }
          else
            {
              t = v_9;
            }
          return(t);
        }
        t = k_79(t);
        t = SRTS_all(w_1, t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = q_9;
        t = SRTS_some(p_3, t);
      }
    return(t);
  }
  t = p_3(t);
  return(t);
}
static ATerm a_5 (ATerm x_22, ATerm y_22, ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  r_3 = t;
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_22, y_22);
        t = o_5(x_22, y_22, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_10 = ATgetFirst((ATermList) t);
            q_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_10);
        t = SSL_table_put(x_22, y_22, q_3);
        t = (ATerm) ATmakeAppl(sym__3, x_22, y_22, q_3);
      }
    else
      {
        t = z_9;
        t = SSL_table_remove(x_22, y_22);
        t = (ATerm) ATmakeAppl(sym__2, x_22, y_22);
      }
  }
  t = r_3;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_76 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL;
  x_3 = t;
  t = r_76(t);
  v_3 = t;
  {
    ATerm d_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 = NULL;
        t = term_i_10;
        a_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_3, term_i_10);
        t = o_5(v_3, a_4, t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_3 = ATgetFirst((ATermList) t);
      s_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_10;
  y_3 = t;
  t = SSL_table_put(v_3, y_3, s_3);
  t = t_3;
  {
    static ATerm x_1 (ATerm t)
    {
      ATerm b_4 = NULL;
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_3, b_4);
      t = a_5(v_3, b_4, t);
      return(t);
    }
    t = map_1_0(x_1, t);
  }
  t = x_3;
  return(t);
}
ATerm restore_always_2_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_96(t);
      t = p_96(t);
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      t = p_96(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,j_4 = NULL,k_4 = NULL;
  f_4 = t;
  t = q_76(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, term_i_10);
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_10 = ATgetArgument(t, 0);
            ATerm t_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_10;
        q_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_4, term_i_10);
        t = o_5(e_4, q_4, t);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        t = (ATerm) ATempty;
      }
  }
  g_4 = t;
  t = term_i_10;
  j_4 = t;
  t = (ATerm) ATinsert(CheckATermList(g_4), (ATerm) ATempty);
  k_4 = t;
  t = SSL_table_put(e_4, j_4, k_4);
  t = f_4;
  return(t);
}
ATerm scope_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t)
{
  static ATerm y_1 (ATerm t)
  {
    t = end_scope_1_0(s_76, t);
    return(t);
  }
  t = begin_scope_1_0(s_76, t);
  t = restore_always_2_0(t_76, y_1, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_p_8;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_p_8;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm u_10 = t;
  if((PushChoice() == 0))
    {
      t = CheckCons_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_10;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm t)
{
  ATerm s_4 = NULL,l_5 = NULL;
  static ATerm b_2 (ATerm t)
  {
    ATerm q_5 = NULL,v_5 = NULL,w_5 = NULL;
    q_5 = t;
    t = m_76(t);
    if(((l_5 != NULL) && (l_5 != t)))
      _fail(t);
    else
      l_5 = t;
    t = n_76(t);
    if(((s_4 != NULL) && (s_4 != t)))
      _fail(t);
    else
      s_4 = t;
    t = term_o_8;
    v_5 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_3, term_x_10, s_4, l_5);
    w_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATmakeAppl(sym_Defined_3, term_x_10, s_4, l_5));
    t = b_5(d_2, v_5, w_5, t);
    t = q_5;
    t = manytd_1_0(e_2, t);
    return(t);
  }
  t = scope_2_0(a_2, b_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm k_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(k_6, r_6, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(z_6, a_7, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm b_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(b_7, d_7, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm r_7 = NULL,c_8 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(r_7, c_8, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym__2))
    {
      d_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(d_8, e_8, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      d_6 = ATgetArgument(t, 2);
      {
        static ATerm g_2 (ATerm t)
        {
          ATerm j_6 = NULL;
          t = c_6;
          t = foldr_3_0(i_2, l_2, m_2, t);
          j_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_6, j_6);
          return(t);
        }
        t = d_6;
        t = check_constructors_p__2_0(g_2, h_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_6 = ATgetArgument(t, 0);
          c_6 = ATgetArgument(t, 1);
          d_6 = ATgetArgument(t, 2);
          e_6 = ATgetArgument(t, 3);
          {
            static ATerm n_2 (ATerm t)
            {
              ATerm w_6 = NULL,x_6 = NULL;
              t = c_6;
              t = foldr_3_0(p_2, q_2, r_2, t);
              w_6 = t;
              t = d_6;
              t = foldr_3_0(s_2, t_2, u_2, t);
              x_6 = t;
              t = (ATerm) ATmakeAppl(sym__3, b_6, w_6, x_6);
              return(t);
            }
            t = e_6;
            t = check_constructors_p__2_0(n_2, o_2, t);
          }
        }
      else
        {
          static ATerm v_2 (ATerm t)
          {
            ATerm j_7 = NULL,l_7 = NULL;
            t = not_null(c_6);
            t = foldr_3_0(x_2, y_2, z_2, t);
            j_7 = t;
            t = not_null(d_6);
            t = foldr_3_0(b_3, d_3, g_3, t);
            l_7 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_6), j_7, l_7);
            return(t);
          }
          if(match_cons(t, sym_RDefT_4))
            {
              if(((b_6 != NULL) && (b_6 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_6 = ATgetArgument(t, 0);
              if(((c_6 != NULL) && (c_6 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                c_6 = ATgetArgument(t, 1);
              if(((d_6 != NULL) && (d_6 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                d_6 = ATgetArgument(t, 2);
              e_6 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = e_6;
          t = check_constructors_p__2_0(v_2, w_2, t);
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_9;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_9 = ATgetFirst((ATermList) t);
          j_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 = NULL,l_6 = NULL,m_6 = NULL,w_0 = NULL;
            t = SSLgetAnnotations(h_9);
            y_5 = t;
            t = i_9;
            t = n_95(t);
            l_6 = t;
            t = j_9;
            t = filter_1_0(n_95, t);
            m_6 = t;
            t = (ATerm) ATinsert(CheckATermList(m_6), l_6);
            w_0 = t;
            t = SSLsetAnnotations(w_0, y_5);
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = j_9;
            t = filter_1_0(n_95, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm u_76 (ATerm), ATerm k_22, ATerm i_22, ATerm t)
{
  ATerm m_9 = NULL,p_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,w_9 = NULL;
  s_9 = t;
  t = u_76(t);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_9, k_22, i_22);
  t = p_5(m_9, k_22, i_22, t);
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_9 = NULL;
        t = term_i_10;
        x_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_9, term_i_10);
        t = o_5(m_9, x_9, t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_9 = ATgetFirst((ATermList) t);
      r_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_10;
  t_9 = t;
  t = (ATerm) ATinsert(CheckATermList(r_9), (ATerm) ATinsert(CheckATermList(p_9), k_22));
  w_9 = t;
  t = SSL_table_put(m_9, t_9, w_9);
  t = s_9;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm o_11 = NULL,q_11 = NULL;
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      q_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(o_11, q_11, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(e_12, f_12, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,l_10 = NULL,o_10 = NULL,p_10 = NULL,r_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym_Overlay_3))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
      e_10 = ATgetArgument(t, 2);
      {
        ATerm g_11 = NULL,i_11 = NULL,m_11 = NULL;
        t = p_10;
        t = foldr_3_0(h_3, i_3, l_3, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, o_10, (ATerm) ATmakeAppl(sym_Keys_1, g_11));
        i_11 = t;
        t = term_h_11;
        m_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, o_10, (ATerm) ATmakeAppl(sym_Keys_1, g_11)), term_h_11);
        t = b_5(m_3, i_11, m_11, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, o_10, p_10, e_10);
      }
    }
  else
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_OpDeclInj_1))
            {
              ATerm l_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(k_11);
          t = l_10;
        }
      else
        {
          t = j_11;
          if(match_cons(t, sym_OpDecl_2))
            {
              o_10 = ATgetArgument(t, 0);
              p_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_10;
          if(match_cons(t, sym_FunType_2))
            {
              r_10 = ATgetArgument(t, 0);
              f_10 = ATgetArgument(t, 1);
              {
                ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
                t = r_10;
                t = foldr_3_0(n_3, o_3, u_3, t);
                z_11 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, o_10, (ATerm) ATmakeAppl(sym_Keys_1, z_11));
                a_12 = t;
                t = term_p_11;
                b_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, o_10, (ATerm) ATmakeAppl(sym_Keys_1, z_11)), term_p_11);
                t = b_5(c_4, a_12, b_12, t);
                t = (ATerm) ATmakeAppl(sym_OpDecl_2, o_10, (ATerm) ATmakeAppl(sym_FunType_2, r_10, f_10));
              }
            }
          else
            {
              ATerm j_12 = NULL,m_12 = NULL;
              if(match_cons(t, sym_ConstType_1))
                {
                  r_10 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, o_10, term_r_11);
              j_12 = t;
              t = term_u_11;
              m_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, o_10, term_r_11), term_u_11);
              t = b_5(d_4, j_12, m_12, t);
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, o_10, (ATerm) ATmakeAppl(sym_ConstType_1, r_10));
            }
        }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,a_13 = NULL;
  u_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_12;
      t = l_94(t);
    }
  else
    {
      ATerm d_13 = NULL,e_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_12 = ATgetFirst((ATermList) t);
          a_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_12;
      t = n_94(t);
      d_13 = t;
      t = a_13;
      t = foldr_3_0(l_94, m_94, n_94, t);
      e_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_13, e_13);
      t = m_94(t);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm k_13 = NULL,n_13 = NULL,c_7 = NULL;
  k_13 = t;
  t = SSL_explode_term(k_13);
  if(match_cons(t, sym__2))
    {
      ATerm x_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_11 = ATgetArgument(t, 1);
        if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
          {
            n_13 = ATgetFirst((ATermList) y_11);
            {
              ATerm c_12 = (ATerm) ATgetNext((ATermList) y_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(k_13);
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_12 = ATgetArgument(t, 1);
        if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
          {
            ATerm i_12 = ATgetFirst((ATermList) h_12);
            ATerm k_12 = (ATerm) ATgetNext((ATermList) h_12);
            if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
              {
                c_7 = ATgetFirst((ATermList) k_12);
                {
                  ATerm l_12 = (ATerm) ATgetNext((ATermList) k_12);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_12, (ATerm) ATinsert(ATinsert(ATempty, c_7), n_13));
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_13 = NULL;
  if(match_cons(t, sym_ConstType_1))
    {
      o_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_13;
  return(t);
}
ATerm TupleType_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  t = foldr_3_0(h_4, i_4, l_4, t);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term_o_12, (ATerm) ATinsert(ATempty, i_13)));
  return(t);
}
ATerm TupleDecl_0_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,k_15 = NULL,l_15 = NULL,o_15 = NULL,r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym_OpDeclInj_1))
    {
      o_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_15;
  if(match_cons(t, sym_FunType_2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
      t = s_15;
      if(match_cons(t, sym_ConstType_1))
        {
          b_15 = ATgetArgument(t, 0);
          t = b_15;
          if(match_cons(t, sym_SortVar_1))
            {
              e_15 = ATgetArgument(t, 0);
              t = r_15;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_15 = ATgetFirst((ATermList) t);
                  g_15 = (ATerm) ATgetNext((ATermList) t);
                  t = g_15;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = f_15;
                      if(match_cons(t, sym_ConstType_1))
                        {
                          z_14 = ATgetArgument(t, 0);
                          t = z_14;
                          if(match_cons(t, sym_SortVar_1))
                            {
                              a_15 = ATgetArgument(t, 0);
                              {
                                ATerm p_12 = t;
                                int q_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = e_15;
                                    if((a_15 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_r_12, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_SortVar_1, a_15))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term_o_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Sort_2, term_n_12, (ATerm) ATinsert(ATinsert(ATempty, term_w_11), (ATerm) ATmakeAppl(sym_SortVar_1, a_15))))))));
                                    LocalPopChoice(q_12);
                                  }
                                else
                                  {
                                    t = p_12;
                                    t = r_15;
                                    t = TupleType_0_0(t);
                                    if((s_15 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_r_12, o_15);
                                  }
                              }
                            }
                          else
                            {
                              t = r_15;
                              t = TupleType_0_0(t);
                              if((s_15 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_r_12, o_15);
                            }
                        }
                      else
                        {
                          t = r_15;
                          t = TupleType_0_0(t);
                          if((s_15 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_r_12, o_15);
                        }
                    }
                  else
                    {
                      t = r_15;
                      t = TupleType_0_0(t);
                      if((s_15 != t))
                        {
                          _fail(t);
                        }
                      t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_r_12, o_15);
                    }
                }
              else
                {
                  t = r_15;
                  t = TupleType_0_0(t);
                  if((s_15 != t))
                    {
                      _fail(t);
                    }
                  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_r_12, o_15);
                }
            }
          else
            {
              t = r_15;
              t = TupleType_0_0(t);
              if((s_15 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_r_12, o_15);
            }
        }
      else
        {
          t = r_15;
          t = TupleType_0_0(t);
          if((s_15 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_r_12, o_15);
        }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          r_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_15;
      if(match_cons(t, sym_Sort_2))
        {
          f_15 = ATgetArgument(t, 0);
          g_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_15;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Tuple", 0, ATtrue)))
        _fail(t);
      t = g_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_15 = ATgetFirst((ATermList) t);
          l_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_15;
      if(match_cons(t, sym_Sort_2))
        {
          i_15 = ATgetArgument(t, 0);
          k_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_15;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = k_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_r_12, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term_o_12, (ATerm) ATinsert(ATempty, term_w_11))));
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TupleDecl_0_0(t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
    }
  return(t);
}
static ATerm c_5 (ATerm m_20, ATerm o_20, ATerm p_20, ATerm t)
{
  ATerm e_17 = NULL;
  t = m_20;
  t = map_1_0(m_4, t);
  e_17 = t;
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = o_20;
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = o_20;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_20;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, p_20)), (ATerm) ATmakeAppl(sym_Overlays_1, o_20)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, e_17)))));
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if(((ATgetType(w_12) == AT_LIST) && !(ATisEmpty(w_12))))
        {
          ATerm x_12 = ATgetFirst((ATermList) w_12);
          if(match_cons(x_12, sym_Signature_1))
            {
              ATerm z_12 = ATgetArgument(x_12, 0);
              if(((ATgetType(z_12) == AT_LIST) && !(ATisEmpty(z_12))))
                {
                  ATerm b_13 = ATgetFirst((ATermList) z_12);
                  if(match_cons(b_13, sym_Constructors_1))
                    {
                      h_17 = ATgetArgument(b_13, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_13 = (ATerm) ATgetNext((ATermList) z_12);
                    if(((ATgetType(c_13) != AT_LIST) || !(ATisEmpty(c_13))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm y_12 = (ATerm) ATgetNext((ATermList) w_12);
            if(((ATgetType(y_12) == AT_LIST) && !(ATisEmpty(y_12))))
              {
                ATerm f_13 = ATgetFirst((ATermList) y_12);
                if(match_cons(f_13, sym_Overlays_1))
                  {
                    i_17 = ATgetArgument(f_13, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm g_13 = (ATerm) ATgetNext((ATermList) y_12);
                  if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
                    {
                      ATerm h_13 = ATgetFirst((ATermList) g_13);
                      if(match_cons(h_13, sym_Strategies_1))
                        {
                          j_17 = ATgetArgument(h_13, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_13 = (ATerm) ATgetNext((ATermList) g_13);
                        if(((ATgetType(j_13) != AT_LIST) || !(ATisEmpty(j_13))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = c_5(h_17, i_17, j_17, t);
  return(t);
}
static ATerm d_5 (ATerm l_31, ATerm m_31, ATerm t)
{
  ATerm m_17 = NULL;
  t = SSL_fputc(l_31, m_31);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_17);
  return(t);
}
static ATerm e_5 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm p_17 = NULL;
  t = SSL_write_term_to_stream_text(k_30, l_30);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_17);
  return(t);
}
static ATerm g_5 (ATerm v_82 (ATerm), ATerm y_226, ATerm o_30, ATerm t)
{
  ATerm q_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_226, term_l_13);
  t = j_5(t);
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_17, o_30);
  t = v_82(t);
  t = fclose_0_0(t);
  t = o_30;
  return(t);
}
static ATerm f_5 (ATerm g_30, ATerm h_30, ATerm t)
{
  ATerm r_17 = NULL;
  t = SSL_write_term_to_stream_baf(g_30, h_30);
  r_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_17);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm z_17 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_13 = ATgetArgument(t, 0);
      if(match_cons(m_13, sym_Stream_1))
        {
          z_17 = ATgetArgument(m_13, 0);
        }
      else
        _fail(t);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(z_17, c_18, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_13 = ATgetArgument(t, 0);
      if(match_cons(p_13, sym_Stream_1))
        {
          i_18 = ATgetArgument(p_13, 0);
        }
      else
        _fail(t);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(i_18, l_18, t);
  f_18 = t;
  t = term_q_13;
  g_18 = t;
  t = f_18;
  if(match_cons(t, sym_Stream_1))
    {
      h_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_13, f_18);
  t = d_5(g_18, h_18, t);
  return(t);
}
ATerm output_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,w_17 = NULL;
  t = k_101(t);
  w_17 = t;
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_13;
        t = get_config_0_0(t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = term_u_13;
      }
  }
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_17, w_17);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_13;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, s_17, w_17);
        LocalPopChoice(w_13);
        if(match_cons(t, sym__2))
          {
            ATerm y_13 = ATgetArgument(t, 0);
            ATerm z_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_5(n_4, s_17, w_17, t);
      }
    else
      {
        t = v_13;
        if(match_cons(t, sym__2))
          {
            ATerm a_14 = ATgetArgument(t, 0);
            ATerm b_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_5(o_4, s_17, w_17, t);
      }
  }
  return(t);
}
static ATerm f_19 (ATerm z_18, ATerm t)
{
  t = SSL_fclose(z_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_19 = ATgetArgument(t, 0);
      {
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_19);
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
            t = f_19(d_19, t);
          }
      }
    }
  else
    {
      t = f_19(d_19, t);
    }
  return(t);
}
static ATerm h_5 (ATerm m_30, ATerm t)
{
  t = SSL_read_term_from_stream(m_30);
  return(t);
}
static ATerm i_5 (ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm g_19 = NULL;
  t = SSL_fopen(n_31, o_31);
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_19);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_19 = NULL;
  t = SSL_stdin_stream();
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_19 = NULL;
  t = SSL_stdout_stream();
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_19 = NULL;
  t = SSL_stderr_stream();
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_19);
  return(t);
}
static ATerm o_22 (ATerm p_19, ATerm t)
{
  ATerm q_19 = NULL;
  t = SSL_explode_term(p_19);
  if(match_cons(t, sym__2))
    {
      ATerm e_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_14 = ATgetArgument(t, 1);
        if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
          {
            q_19 = ATgetFirst((ATermList) f_14);
            {
              ATerm g_14 = (ATerm) ATgetNext((ATermList) f_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_22 (ATerm t_19, ATerm u_19, ATerm v_19, ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,d_20 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(v_19);
  y_19 = t;
  t = t_19;
  if(match_cons(t, sym_Path_1))
    {
      d_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_20, u_19);
  z_0 = t;
  t = SSLsetAnnotations(z_0, y_19);
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(w_19, x_19, t);
  return(t);
}
static ATerm u_22 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,x_20 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(h_20);
  k_20 = t;
  t = SSL_is_string(f_20);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_20, g_20);
  c_1 = t;
  t = SSLsetAnnotations(c_1, k_20);
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(i_20, j_20, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm l_21 = NULL,y_21 = NULL,n_22 = NULL;
  l_21 = t;
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_22(l_21, t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            {
              ATerm j_14 = t;
              int k_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_22(y_21, n_22, l_21, t);
                  LocalPopChoice(k_14);
                }
              else
                {
                  t = j_14;
                  t = u_22(y_21, n_22, l_21, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_22(l_21, t);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_22 = NULL,z_22 = NULL,a_23 = NULL;
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_23 = NULL;
      b_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_23, term_o_14);
      t = j_5(t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = debug_1_0(r_4, t);
      _fail(t);
    }
  z_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(a_23, t);
  v_22 = t;
  t = z_22;
  t = fclose_0_0(t);
  t = v_22;
  return(t);
}
ATerm input_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_14;
      t = get_config_0_0(t);
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      t = term_s_14;
    }
  t = ReadFromFile_0_0(t);
  t = l_101(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  f_23 = t;
  t = term_t_14;
  t = whoami_0_0(t);
  g_23 = t;
  t = term_t_8;
  i_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_14), g_23), term_u_14);
  j_23 = t;
  t = SSL_printnl(i_23, j_23);
  t = term_n_8;
  h_23 = t;
  t = SSL_exit(h_23);
  t = f_23;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  if(match_string(t, "-k"))
    {
      t = l_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_23;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  t = SSL_string_to_int(m_23);
  n_23 = t;
  t = term_w_14;
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, n_23);
  t = r_5(o_23, n_23, t);
  t = m_23;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, w_4, x_4, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm q_23 = NULL;
  q_23 = t;
  if(match_string(t, "-S"))
    {
      t = q_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_23;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  t = term_y_14;
  r_23 = t;
  t = term_m_8;
  s_23 = t;
  t = term_c_15;
  t = r_5(r_23, s_23, t);
  t = term_d_15;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  t = SSL_string_to_int(t_23);
  u_23 = t;
  t = term_y_14;
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, u_23);
  t = r_5(v_23, u_23, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_23);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_m_15;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  t = term_n_15;
  w_23 = t;
  t = term_t_14;
  x_23 = t;
  t = term_p_15;
  t = r_5(w_23, x_23, t);
  t = term_q_15;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_t_15;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_5, t_5, u_5, t);
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_5, z_5, a_6, t);
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = Option_3_0(f_6, g_6, h_6, t);
          }
      }
    }
  return(t);
}
static ATerm r_5 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm y_23 = NULL;
  t = term_y_15;
  y_23 = t;
  t = SSL_table_put(y_23, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_y_15, b_35, c_35);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
      t = term_t_14;
      t = e_0(t);
      d_24 = t;
      t = term_z_15;
      e_24 = t;
      t = term_a_16;
      f_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_15, term_a_16, d_24);
      t = p_5(e_24, f_24, d_24, t);
      _fail(t);
    }
  else
    {
      ATerm i_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_24 = ATgetFirst((ATermList) t);
          c_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_24;
      t = c_0(t);
      t = term_t_14;
      t = d_0(t);
      i_24 = t;
      t = (ATerm) ATinsert(CheckATermList(c_24), i_24);
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  if(match_string(t, "-o"))
    {
      t = m_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_24;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL;
  n_24 = t;
  t = term_t_13;
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, n_24);
  t = r_5(o_24, n_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_24);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_b_16;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_6, n_6, o_6, t);
  return(t);
}
static ATerm p_5 (ATerm s_22, ATerm t_22, ATerm r_22, ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_22, t_22);
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_16 = ATgetArgument(t, 0);
            ATerm f_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_22, t_22);
        t = o_5(s_22, t_22, t);
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        t = (ATerm) ATempty;
      }
  }
  r_24 = t;
  t = (ATerm) ATinsert(CheckATermList(r_24), r_22);
  s_24 = t;
  t = SSL_table_put(s_22, t_22, s_24);
  t = q_24;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
      t = term_t_14;
      t = n_0(t);
      d_25 = t;
      t = term_z_15;
      e_25 = t;
      t = term_a_16;
      f_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_15, term_a_16, d_25);
      t = p_5(e_25, f_25, d_25, t);
      _fail(t);
    }
  else
    {
      ATerm j_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_24 = ATgetFirst((ATermList) t);
          a_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_25 = ATgetFirst((ATermList) t);
          c_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_24;
      t = k_0(t);
      t = b_25;
      t = l_0(t);
      j_25 = t;
      t = (ATerm) ATinsert(CheckATermList(c_25), j_25);
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  if(match_string(t, "-i"))
    {
      t = l_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_25;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  m_25 = t;
  t = term_r_14;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, m_25);
  t = r_5(n_25, m_25, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_25);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_6, q_6, s_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_14;
  t = whoami_0_0(t);
  o_25 = t;
  t = term_t_8;
  q_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_16), o_25);
  r_25 = t;
  t = SSL_printnl(q_25, r_25);
  t = term_n_8;
  p_25 = t;
  t = SSL_exit(p_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_16;
  t = get_config_0_0(t);
  return(t);
}
static ATerm k_5 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_37, z_37);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      t = SSL_addr(y_37, z_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_25;
      t = j_94(t);
    }
  else
    {
      ATerm y_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_25 = ATgetFirst((ATermList) t);
          v_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_25;
      t = foldr_2_0(j_94, k_94, t);
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_25, y_25);
      t = k_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(x_7, y_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_26 = NULL,t_7 = NULL,u_7 = NULL;
  t = times_0_0(t);
  u_7 = t;
  t = SSL_explode_term(u_7);
  if(match_cons(t, sym__2))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7;
  t = foldr_2_0(t_6, u_6, t);
  b_26 = t;
  t = SSL_TicksToSeconds(b_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_26;
        if((n_26 != t))
          {
            _fail(t);
          }
        t = m_26;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        t = (ATerm) ATmakeAppl(sym__2, n_26, o_26);
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_26, o_26);
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              t = SSL_gtr(n_26, o_26);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_26, o_26);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL;
        t = term_y_14;
        t = get_config_0_0(t);
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_26, term_n_8);
        t = geq_0_0(t);
        t = s_26;
        t = g_84(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        t = s_26;
      }
  }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,z_26 = NULL,a_27 = NULL;
  t = run_time_0_0(t);
  w_26 = t;
  t = term_t_14;
  t = whoami_0_0(t);
  x_26 = t;
  t = term_t_8;
  z_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), w_26), term_s_16), x_26);
  a_27 = t;
  t = SSL_printnl(z_26, a_27);
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), w_26), term_s_16), x_26));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  b_27 = t;
  t = SSL_exit(b_27);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  k_27 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_27;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_27 = ATgetArgument(t, 0);
          {
            ATerm r_8 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(k_27);
            r_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_27);
            f_1 = t;
            t = SSLsetAnnotations(f_1, r_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_27;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_16;
      t = get_config_0_0(t);
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      t = fetch_1_0(y_6, t);
    }
  t = b_101(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_27 = ATgetFirst((ATermList) t);
      o_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_27 = NULL,t_27 = NULL;
        static ATerm e_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_27)), not_null(t_27));
          return(t);
        }
        t = o_27;
        t = i_0(t);
        if(((s_27 != NULL) && (s_27 != t)))
          _fail(t);
        else
          s_27 = t;
        t = n_27;
        t = g_0(t);
        if(((t_27 != NULL) && (t_27 != t)))
          _fail(t);
        else
          t_27 = t;
        t = o_27;
        t = reverse_acc_2_0(g_0, e_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_14;
      t = i_0(t);
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,h_1 = NULL;
  z_27 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_27);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_27);
  h_1 = t;
  t = SSLsetAnnotations(h_1, x_27);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_28), term_x_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_16;
      t = get_config_0_0(t);
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      t = fetch_1_0(f_7, t);
    }
  t = term_a_17;
  t = echo_0_0(t);
  t = term_z_15;
  v_27 = t;
  t = term_a_16;
  w_27 = t;
  t = term_b_17;
  t = o_5(v_27, w_27, t);
  t = reverse_acc_2_0(_id, g_7, t);
  t = map_1_0(h_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  static ATerm y_28 (ATerm t)
  {
    ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
    v_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_28 = ATgetFirst((ATermList) t);
        x_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_9 = NULL,n_9 = NULL,j_1 = NULL;
          t = SSLgetAnnotations(v_28);
          a_9 = t;
          t = w_28;
          t = b_88(t);
          n_9 = t;
          t = (ATerm) ATinsert(CheckATermList(x_28), n_9);
          j_1 = t;
          t = SSLsetAnnotations(j_1, a_9);
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          {
            ATerm b_10 = NULL,g_10 = NULL,k_1 = NULL;
            t = SSLgetAnnotations(v_28);
            b_10 = t;
            t = x_28;
            t = y_28(t);
            g_10 = t;
            t = (ATerm) ATinsert(CheckATermList(g_10), w_28);
            k_1 = t;
            t = SSLsetAnnotations(k_1, b_10);
          }
        }
    }
    return(t);
  }
  t = y_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_17 = ATgetFirst((ATermList) t);
                ATerm l_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_29;
          }
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = (ATerm) ATinsert(ATempty, c_29);
      }
  }
  d_29 = t;
  t = term_u_13;
  e_29 = t;
  t = SSL_printnl(e_29, d_29);
  t = c_29;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm v_29, ATerm w_29, ATerm t)
{
  t = SSL_strcat(v_29, w_29);
  return(t);
}
ATerm debug_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  i_29 = t;
  t = t_82(t);
  j_29 = t;
  t = term_t_8;
  k_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_29), j_29);
  l_29 = t;
  t = SSL_printnl(k_29, l_29);
  t = i_29;
  return(t);
}
ATerm map_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  static ATerm c_30 (ATerm t)
  {
    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
    z_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_29;
      }
    else
      {
        ATerm s_10 = NULL,v_10 = NULL,w_10 = NULL,n_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_30 = ATgetFirst((ATermList) t);
            b_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_29);
        s_10 = t;
        t = a_30;
        t = r_87(t);
        v_10 = t;
        t = b_30;
        t = c_30(t);
        w_10 = t;
        t = (ATerm) ATinsert(CheckATermList(w_10), v_10);
        n_1 = t;
        t = SSLsetAnnotations(n_1, s_10);
      }
    return(t);
  }
  t = c_30(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_30 = NULL;
      r_30 = t;
      t = SSL_is_string(r_30);
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_7, t);
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            {
              ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
              x_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_30 = ATgetArgument(t, 0);
                  t = y_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_30 = ATgetArgument(t, 0);
                      t = y_30;
                      {
                        ATerm a_18 = t;
                        int b_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(b_18);
                          }
                        else
                          {
                            t = a_18;
                            t = debug_1_0(k_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_31 = NULL,e_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_30 = ATgetArgument(t, 0);
                          z_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_30;
                      t = eval_config_0_0(t);
                      d_31 = t;
                      t = z_30;
                      t = eval_config_0_0(t);
                      e_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_31, e_31);
                      t = n_5(d_31, e_31, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm j_24, ATerm k_24, ATerm t)
{
  t = SSL_table_get(j_24, k_24);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  i_31 = t;
  t = term_y_15;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_15, i_31);
  t = o_5(j_31, i_31, t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_31 = NULL,r_31 = NULL;
        t = eval_config_0_0(t);
        k_31 = t;
        t = term_y_15;
        r_31 = t;
        t = SSL_table_put(r_31, i_31, k_31);
        t = k_31;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
      }
  }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  t = term_j_18;
  u_31 = t;
  t = term_t_14;
  v_31 = t;
  t = term_k_18;
  t = r_5(u_31, v_31, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  t = term_j_18;
  y_31 = t;
  t = term_t_14;
  z_31 = t;
  t = term_k_18;
  t = r_5(y_31, z_31, t);
  t = term_n_18;
  w_31 = t;
  t = term_t_14;
  x_31 = t;
  t = term_o_18;
  t = r_5(w_31, x_31, t);
  t = term_p_18;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_7, n_7, o_7, t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      t = Option_3_0(p_7, q_7, s_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,p_1 = NULL;
  f_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_32 = ATgetFirst((ATermList) t);
      c_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_32);
  a_32 = t;
  t = b_32;
  t = n_75(t);
  d_32 = t;
  t = c_32;
  t = o_75(t);
  e_32 = t;
  t = (ATerm) ATinsert(CheckATermList(e_32), d_32);
  p_1 = t;
  t = SSLsetAnnotations(p_1, a_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,p_32 = NULL,q_32 = NULL,s_1 = NULL;
  k_32 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_18;
        t = e_103(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
      }
  }
  t = k_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_32 = ATgetFirst((ATermList) t);
      n_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_32);
  l_32 = t;
  t = term_i_16;
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_16, m_32);
  t = r_5(q_32, m_32, t);
  t = n_32;
  {
    static ATerm a_33 (ATerm t)
    {
      ATerm w_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_32 = NULL;
              t_32 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_32;
              LocalPopChoice(a_19);
            }
          else
            {
              t = y_18;
              t = e_103(t);
              t = Cons_2_0(_id, a_33, t);
            }
          LocalPopChoice(x_18);
        }
      else
        {
          t = w_18;
          {
            ATerm w_32 = NULL,x_32 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_32 = ATgetFirst((ATermList) t);
                x_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_32), (ATerm) ATmakeAppl(sym_Undefined_1, w_32));
          }
        }
      return(t);
    }
    t = a_33(t);
  }
  p_32 = t;
  t = (ATerm) ATinsert(CheckATermList(p_32), (ATerm) ATmakeAppl(sym_Program_1, m_32));
  s_1 = t;
  t = SSLsetAnnotations(s_1, l_32);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  if(match_string(t, "--help"))
    {
      t = m_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_33;
        }
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  t = term_w_16;
  n_33 = t;
  t = term_t_14;
  o_33 = t;
  t = term_b_19;
  t = r_5(n_33, o_33, t);
  t = term_e_19;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_103 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  h_33 = t;
  t = term_z_15;
  j_33 = t;
  t = term_a_16;
  k_33 = t;
  t = (ATerm) ATempty;
  l_33 = t;
  t = SSL_table_put(j_33, k_33, l_33);
  t = h_33;
  {
    static ATerm v_7 (ATerm t)
    {
      ATerm l_19 = t;
      int m_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_103(t);
          LocalPopChoice(m_19);
        }
      else
        {
          t = l_19;
          {
            ATerm n_19 = t;
            int o_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_7, z_7, a_8, t);
                LocalPopChoice(o_19);
              }
            else
              {
                t = n_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_7, t);
  }
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_33 = NULL;
        v_33 = t;
        {
          ATerm z_19 = t;
          int a_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_11 = NULL;
              t = v_33;
              {
                ATerm b_20 = t;
                int c_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_16;
                    t = get_config_0_0(t);
                    LocalPopChoice(c_20);
                  }
                else
                  {
                    t = b_20;
                    t = fetch_1_0(b_8, t);
                  }
              }
              t = v_33;
              t = default_system_usage_0_0(t);
              t = term_m_8;
              t_11 = t;
              t = SSL_exit(t_11);
              LocalPopChoice(a_20);
            }
          else
            {
              t = z_19;
              {
                ATerm d_12 = NULL;
                t = term_j_18;
                t = get_config_0_0(t);
                t = v_33;
                t = default_system_about_0_0(t);
                t = term_m_8;
                d_12 = t;
                t = SSL_exit(d_12);
              }
            }
        }
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          ATerm e_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
              static ATerm f_8 (ATerm t)
              {
                ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,u_1 = NULL;
                b_34 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_34 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_34);
                z_33 = t;
                t = a_34;
                if(((f_33 != NULL) && (f_33 != t)))
                  _fail(t);
                else
                  f_33 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_34);
                u_1 = t;
                t = SSLsetAnnotations(u_1, z_33);
                return(t);
              }
              t = fetch_1_0(f_8, t);
              t = term_t_8;
              x_33 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_33)), term_n_20);
              y_33 = t;
              t = SSL_printnl(x_33, y_33);
              t = (ATerm) ATmakeAppl(sym__2, term_t_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_33)), term_n_20));
              t = default_system_usage_0_0(t);
              t = term_n_8;
              w_33 = t;
              t = SSL_exit(w_33);
              LocalPopChoice(l_20);
            }
          else
            {
              t = e_20;
            }
        }
      }
  }
  g_33 = t;
  t = term_z_15;
  i_33 = t;
  t = SSL_table_destroy(i_33);
  t = g_33;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  t = parse_options_1_0(d_101, t);
  g_34 = t;
  t = term_q_20;
  j_34 = t;
  t = SSL_table_create(j_34);
  t = term_q_20;
  h_34 = t;
  t = term_r_20;
  i_34 = t;
  t = SSL_table_put(h_34, i_34, g_34);
  t = g_34;
  t = f_101(t);
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_101, t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        {
          ATerm u_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_101(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_20);
            }
          else
            {
              t = u_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm w_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = w_20;
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm b_21 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_8, j_8, k_8, t);
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = b_21;
                  {
                    ATerm d_21 = t;
                    int e_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_21);
                      }
                    else
                      {
                        t = d_21;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = input_1_0(l_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  t = term_x_13;
  l_34 = t;
  t = term_t_14;
  m_34 = t;
  t = term_f_21;
  t = r_5(l_34, m_34, t);
  t = term_g_21;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_h_21;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = output_1_0(CheckConstructors_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_8, default_usage_0_0, _id, h_8, t);
  return(t);
}
