#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Overlays_1;
static Symbol sym_Signature_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Overlay_3;
static Symbol sym_Op_2;
static Symbol sym_Path_2;
static Symbol sym_SDefT_4;
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_OpDeclInj_1;
static Symbol sym_OpDeclQ_2;
static Symbol sym_OpDecl_2;
static Symbol sym_Sort_2;
static Symbol sym_SortVar_1;
static Symbol sym_Constructors_1;
static Symbol sym_RDefT_4;
static Symbol sym_Keys_0;
static Symbol sym_Keys_1;
static Symbol sym_Keys_2;
static Symbol sym_Keys_3;
static Symbol sym_Keys_4;
static Symbol sym_Keys_5;
static Symbol sym_Keys_6;
static Symbol sym_Keys_7;
static Symbol sym_Keys_8;
static Symbol sym_Keys_9;
static Symbol sym_Keys_10;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Path_1;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_OpDeclInj_1 = ATmakeSymbol("OpDeclInj", 1, ATfalse);
  ATprotectSymbol(sym_OpDeclInj_1);
  sym_OpDeclQ_2 = ATmakeSymbol("OpDeclQ", 2, ATfalse);
  ATprotectSymbol(sym_OpDeclQ_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortVar_1 = ATmakeSymbol("SortVar", 1, ATfalse);
  ATprotectSymbol(sym_SortVar_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
static ATerm term_p_22;
static ATerm term_o_22;
static ATerm term_n_22;
static ATerm term_u_21;
static ATerm term_t_21;
static ATerm term_s_21;
static ATerm term_l_21;
static ATerm term_k_21;
static ATerm term_j_20;
static ATerm term_i_20;
static ATerm term_h_20;
static ATerm term_g_20;
static ATerm term_f_20;
static ATerm term_x_19;
static ATerm term_s_19;
static ATerm term_r_19;
static ATerm term_q_19;
static ATerm term_p_19;
static ATerm term_o_19;
static ATerm term_n_19;
static ATerm term_m_19;
static ATerm term_j_19;
static ATerm term_i_19;
static ATerm term_f_19;
static ATerm term_d_19;
static ATerm term_c_19;
static ATerm term_s_18;
static ATerm term_r_18;
static ATerm term_m_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_f_18;
static ATerm term_e_18;
static ATerm term_d_18;
static ATerm term_c_18;
static ATerm term_b_18;
static ATerm term_a_18;
static ATerm term_z_17;
static ATerm term_y_17;
static ATerm term_x_17;
static ATerm term_u_17;
static ATerm term_r_17;
static ATerm term_q_17;
static ATerm term_p_17;
static ATerm term_o_17;
static ATerm term_j_17;
static ATerm term_i_17;
static ATerm term_d_17;
static ATerm term_z_16;
static ATerm term_o_16;
static ATerm term_n_16;
static ATerm term_m_16;
static ATerm term_j_16;
static ATerm term_i_16;
static ATerm term_s_15;
static ATerm term_r_15;
static ATerm term_l_15;
static ATerm term_k_15;
static ATerm term_j_15;
static ATerm term_f_15;
static ATerm term_c_15;
static ATerm term_w_14;
static ATerm term_e_14;
static ATerm term_d_14;
static ATerm term_c_14;
static ATerm term_b_14;
static ATerm term_l_13;
static ATerm term_e_13;
static ATerm term_d_13;
static ATerm term_n_12;
static ATerm term_m_12;
static ATerm term_j_12;
static ATerm term_h_12;
static ATerm term_g_12;
static ATerm term_d_12;
static ATerm term_b_12;
static ATerm term_t_11;
static ATerm term_r_11;
static ATerm term_a_11;
static ATerm term_z_10;
static ATerm term_y_10;
static ATerm term_x_10;
static ATerm term_k_10;
static ATerm term_o_9;
static ATerm term_i_9;
static ATerm term_h_9;
static ATerm term_g_9;
static ATerm term_f_9;
static ATerm term_e_9;
static ATerm term_d_9;
static ATerm term_c_9;
static ATerm term_z_8;
static ATerm term_y_8;
static ATerm term_x_8;
static ATerm term_v_8;
static ATerm term_s_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_x_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("overlay", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Keys_1, term_s_8);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Sort_2, term_m_12, (ATerm) ATempty);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_r_15);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_z_16);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_q_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_s_8);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_8);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_i_17);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_z_17);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_i_17);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_i_17);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_i_17);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__3, term_p_17, term_q_17, (ATerm) ATempty);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_f_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_m_19);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_i_17);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm s_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm CheckConsError_0_0 (ATerm t);
static ATerm i_5 (ATerm w_26, ATerm x_26, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm CheckCons_0_0 (ATerm t);
ATerm manytd_1_0 (ATerm o_114 (ATerm), ATerm t);
static ATerm j_5 (ATerm q_26, ATerm r_26, ATerm t);
ATerm end_scope_1_0 (ATerm z_110 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_110 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm check_constructors_p__2_0 (ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm check_constructors_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_131 (ATerm), ATerm t);
static ATerm k_5 (ATerm c_111 (ATerm), ATerm h_25, ATerm f_25, ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm GenerateCheckRule_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm e_116 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm u_130 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm TupleType_0_0 (ATerm t);
ATerm TupleDecl_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm q_5 (ATerm h_23, ATerm j_23, ATerm k_23, ATerm t);
ATerm CheckConstructors_0_0 (ATerm t);
static ATerm r_5 (ATerm n_38, ATerm o_38, ATerm t);
static ATerm s_5 (ATerm p_44, ATerm q_44, ATerm t);
static ATerm u_5 (ATerm a_122 (ATerm), ATerm w_424, ATerm v_44, ATerm t);
static ATerm t_5 (ATerm l_44, ATerm m_44, ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm output_1_0 (ATerm w_142 (ATerm), ATerm t);
static ATerm h_22 (ATerm y_21, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_5 (ATerm r_44, ATerm t);
static ATerm w_5 (ATerm t_36, ATerm u_36, ATerm t);
static ATerm x_5 (ATerm p_38, ATerm q_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_26 (ATerm b_23, ATerm t);
static ATerm h_26 (ATerm f_23, ATerm g_23, ATerm l_23, ATerm t);
static ATerm i_26 (ATerm p_25, ATerm q_25, ATerm r_25, ATerm t);
static ATerm y_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm x_142 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm e_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm default_system_usage_2_0 (ATerm v_144 (ATerm), ATerm w_144 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_6 (ATerm j_42, ATerm k_42, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_6 (ATerm l_26, ATerm m_26, ATerm k_26, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_5 (ATerm y_45, ATerm z_45, ATerm t);
ATerm foldr_2_0 (ATerm q_130 (ATerm), ATerm r_130 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_117 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_6 (ATerm a_31, ATerm b_31, ATerm c_31, ATerm t);
ATerm lookup_table_0_1 (ATerm x_27, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_31, ATerm j_31, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_6 (ATerm f_31, ATerm g_31, ATerm t);
static ATerm c_6 (ATerm k_31, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_123 (ATerm), ATerm t);
static ATerm j_6 (ATerm d_31, ATerm e_31, ATerm t);
static ATerm e_6 (ATerm e_28, ATerm f_28, ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_144 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm parse_options_3_0 (ATerm n_144 (ATerm), ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm q_142 (ATerm), ATerm r_142 (ATerm), ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm u_142 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm z_0 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(z_0, b_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_v_8;
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,m_0 = NULL,q_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,i_0 = NULL,o_0 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      m_0 = ATgetArgument(t, 0);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_x_8;
  i_0 = t;
  t = term_y_8;
  o_0 = t;
  t = term_z_8;
  t = i_5(o_0, i_0, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      a_0 = ATgetArgument(t, 1);
      c_0 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_0;
  t = foldr_3_0(s_0, y_0, d_1, t);
  w_0 = t;
  t = SSL_int_to_string(w_0);
  t_0 = t;
  t = term_c_9;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), t_0), term_h_9), m_0), term_g_9), term_f_9), c_0), term_e_9), a_0), term_d_9);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = (ATerm) ATmakeAppl(sym_Op_2, m_0, q_0);
  return(t);
}
static ATerm i_5 (ATerm w_26, ATerm x_26, ATerm t)
{
  ATerm e_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_26, x_26);
  t = e_6(w_26, x_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_1 = ATgetFirst((ATermList) t);
      {
        ATerm l_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      k_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(k_2, l_2, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_v_8;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(b_3, c_3, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_v_8;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm j_4 = NULL,m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(j_4, m_4, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_v_8;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
  i_3 = t;
  if(match_cons(t, sym_Op_2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,p_2 = NULL,r_2 = NULL;
        t = k_3;
        t = foldr_3_0(f_1, i_1, j_1, t);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, j_3, (ATerm) ATmakeAppl(sym_Keys_1, d_2));
        p_2 = t;
        t = term_o_9;
        r_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, (ATerm) ATmakeAppl(sym_Op_2, j_3, (ATerm) ATmakeAppl(sym_Keys_1, d_2)));
        t = i_5(r_2, p_2, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm s_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, j_3, (ATerm) ATempty);
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          ATerm t_9 = t;
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_2 = NULL,n_3 = NULL,q_3 = NULL;
              t = k_3;
              t = foldr_3_0(l_1, m_1, n_1, t);
              z_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, j_3, (ATerm) ATmakeAppl(sym_Keys_1, z_2));
              n_3 = t;
              t = term_o_9;
              q_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_o_9, (ATerm) ATmakeAppl(sym_Op_2, j_3, (ATerm) ATmakeAppl(sym_Keys_1, z_2)));
              t = i_5(q_3, n_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm w_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_9) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, j_3, (ATerm) ATempty);
              LocalPopChoice(u_9);
            }
          else
            {
              t = t_9;
              {
                ATerm g_4 = NULL,u_4 = NULL,v_4 = NULL;
                t = k_3;
                t = foldr_3_0(p_1, r_1, s_1, t);
                g_4 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, j_3, (ATerm) ATmakeAppl(sym_Keys_1, g_4));
                u_4 = t;
                t = term_o_9;
                v_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_9, (ATerm) ATmakeAppl(sym_Op_2, j_3, (ATerm) ATmakeAppl(sym_Keys_1, g_4)));
                t = i_5(v_4, u_4, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm x_9 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_9) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Op_2, j_3, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  static ATerm u_3 (ATerm t);
  static ATerm u_3 (ATerm t)
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm v_1 (ATerm t);
        static ATerm v_1 (ATerm t)
        {
          ATerm b_10 = t;
          int c_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_3(t);
              LocalPopChoice(c_10);
            }
          else
            {
              t = b_10;
            }
          return(t);
        }
        t = o_114(t);
        t = SRTS_all(v_1, t);
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = SRTS_some(u_3, t);
      }
    return(t);
  }
  t = u_3(t);
  return(t);
}
static ATerm j_5 (ATerm q_26, ATerm r_26, ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  w_3 = t;
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_26, r_26);
        t = e_6(q_26, r_26, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_10 = ATgetFirst((ATermList) t);
            v_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_10);
        {
          ATerm x_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_26, r_26, v_3);
          t = lookup_table_0_1(q_26, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_6(r_26, v_3, x_3, t);
          t = (ATerm) ATmakeAppl(sym__3, q_26, r_26, v_3);
        }
      }
    else
      {
        t = d_10;
        {
          ATerm z_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_26, r_26);
          t = lookup_table_0_1(q_26, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_6(r_26, z_3, t);
          t = (ATerm) ATmakeAppl(sym__2, q_26, r_26);
        }
      }
  }
  t = w_3;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_110 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,h_4 = NULL,k_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
  l_4 = t;
  t = z_110(t);
  k_4 = t;
  {
    ATerm g_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL;
        t = term_k_10;
        t_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_4, term_k_10);
        t = e_6(k_4, t_4, t);
        {
          ATerm l_10 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_10;
            }
        }
        LocalPopChoice(j_10);
      }
    else
      {
        t = g_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_4 = ATgetFirst((ATermList) t);
      c_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_4, term_k_10, c_4);
  t = lookup_table_0_1(k_4, t);
  p_4 = t;
  t = term_k_10;
  n_4 = t;
  t = p_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(n_4, c_4, o_4, t);
  t = h_4;
  {
    static ATerm w_1 (ATerm t);
    static ATerm w_1 (ATerm t)
    {
      ATerm y_4 = NULL;
      y_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_4, y_4);
      t = j_5(k_4, y_4, t);
      return(t);
    }
    t = map_1_0(w_1, t);
  }
  t = l_4;
  return(t);
}
ATerm restore_always_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_133(t);
      t = d_133(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      t = d_133(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,n_6 = NULL;
  l_5 = t;
  t = y_110(t);
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, term_k_10);
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_10 = ATgetArgument(t, 0);
            ATerm v_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_10;
        t_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_5, term_k_10);
        t = e_6(e_5, t_6, t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = (ATerm) ATempty;
      }
  }
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_5, term_k_10, (ATerm) ATinsert(CheckATermList(m_5), (ATerm) ATempty));
  t = lookup_table_0_1(e_5, t);
  n_6 = t;
  t = term_k_10;
  n_5 = t;
  t = (ATerm) ATinsert(CheckATermList(m_5), (ATerm) ATempty);
  o_5 = t;
  t = n_6;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(n_5, o_5, p_5, t);
  t = l_5;
  return(t);
}
ATerm scope_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm t)
{
  static ATerm x_1 (ATerm t);
  static ATerm x_1 (ATerm t)
  {
    t = end_scope_1_0(a_111, t);
    return(t);
  }
  t = begin_scope_1_0(a_111, t);
  t = restore_always_2_0(b_111, x_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_y_8;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm w_10 = t;
  if((PushChoice() == 0))
    {
      t = CheckCons_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_10;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL;
  static ATerm b_2 (ATerm t);
  static ATerm b_2 (ATerm t)
  {
    ATerm w_6 = NULL,x_6 = NULL,z_6 = NULL;
    w_6 = t;
    t = u_110(t);
    if(((v_6 != NULL) && (v_6 != t)))
      _fail(t);
    else
      v_6 = t;
    t = v_110(t);
    if(((u_6 != NULL) && (u_6 != t)))
      _fail(t);
    else
      u_6 = t;
    t = term_x_8;
    x_6 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_3, term_x_10, u_6, v_6);
    z_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATmakeAppl(sym_Defined_3, term_x_10, u_6, v_6));
    t = k_5(e_2, x_6, z_6, t);
    t = w_6;
    t = manytd_1_0(f_2, t);
    return(t);
  }
  t = scope_2_0(z_1, b_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(t_7, u_7, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_v_8;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(h_8, i_8, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_v_8;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm j_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym__2))
    {
      j_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(j_8, l_8, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_v_8;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm w_8 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(w_8, b_9, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_v_8;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(q_9, r_9, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_v_8;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm c_7 = NULL,k_7 = NULL,n_7 = NULL,o_7 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      c_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
      n_7 = ATgetArgument(t, 2);
      {
        static ATerm g_2 (ATerm t);
        static ATerm g_2 (ATerm t)
        {
          ATerm s_7 = NULL;
          t = k_7;
          t = foldr_3_0(i_2, j_2, m_2, t);
          s_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_7, s_7);
          return(t);
        }
        t = n_7;
        t = check_constructors_p__2_0(g_2, h_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          c_7 = ATgetArgument(t, 0);
          k_7 = ATgetArgument(t, 1);
          n_7 = ATgetArgument(t, 2);
          o_7 = ATgetArgument(t, 3);
          {
            static ATerm n_2 (ATerm t);
            static ATerm n_2 (ATerm t)
            {
              ATerm b_8 = NULL,e_8 = NULL;
              t = k_7;
              t = foldr_3_0(q_2, s_2, t_2, t);
              b_8 = t;
              t = n_7;
              t = foldr_3_0(u_2, v_2, w_2, t);
              e_8 = t;
              t = (ATerm) ATmakeAppl(sym__3, c_7, b_8, e_8);
              return(t);
            }
            t = o_7;
            t = check_constructors_p__2_0(n_2, o_2, t);
          }
        }
      else
        {
          static ATerm x_2 (ATerm t);
          static ATerm x_2 (ATerm t)
          {
            ATerm t_8 = NULL,u_8 = NULL;
            t = not_null(k_7);
            t = foldr_3_0(a_3, d_3, e_3, t);
            t_8 = t;
            t = not_null(n_7);
            t = foldr_3_0(f_3, g_3, h_3, t);
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_7), t_8, u_8);
            return(t);
          }
          if(match_cons(t, sym_RDefT_4))
            {
              if(((c_7 != NULL) && (c_7 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_7 = ATgetArgument(t, 0);
              if(((k_7 != NULL) && (k_7 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                k_7 = ATgetArgument(t, 1);
              if(((n_7 != NULL) && (n_7 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                n_7 = ATgetArgument(t, 2);
              o_7 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = o_7;
          t = check_constructors_p__2_0(x_2, y_2, t);
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm u_131 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,b_11 = NULL;
  t_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_10;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_10 = ATgetFirst((ATermList) t);
          b_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_5 = NULL,f_5 = NULL,g_5 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(t_10);
            b_5 = t;
            t = u_10;
            t = u_131(t);
            f_5 = t;
            t = b_11;
            t = filter_1_0(u_131, t);
            g_5 = t;
            t = (ATerm) ATinsert(CheckATermList(g_5), f_5);
            x_0 = t;
            t = SSLsetAnnotations(x_0, b_5);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = b_11;
            t = filter_1_0(u_131, t);
          }
      }
    }
  return(t);
}
static ATerm k_5 (ATerm c_111 (ATerm), ATerm h_25, ATerm f_25, ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,j_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  j_11 = t;
  t = c_111(t);
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_11, h_25, f_25);
  t = f_6(e_11, h_25, f_25, t);
  {
    ATerm i_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL;
        t = term_k_10;
        p_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_k_10);
        t = e_6(e_11, p_11, t);
        {
          ATerm q_11 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_11;
            }
        }
        LocalPopChoice(k_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_11 = ATgetFirst((ATermList) t);
      g_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_11, term_k_10, (ATerm) ATinsert(CheckATermList(g_11), (ATerm) ATinsert(CheckATermList(f_11), h_25)));
  t = lookup_table_0_1(e_11, t);
  o_11 = t;
  t = term_k_10;
  l_11 = t;
  t = (ATerm) ATinsert(CheckATermList(g_11), (ATerm) ATinsert(CheckATermList(f_11), h_25));
  m_11 = t;
  t = o_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(l_11, m_11, n_11, t);
  t = j_11;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(x_12, y_12, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_v_8;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_o_9;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm k_13 = NULL,n_13 = NULL;
  if(match_cons(t, sym__2))
    {
      k_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(k_13, n_13, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_v_8;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_o_9;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,c_12 = NULL,e_12 = NULL,i_12 = NULL;
  x_11 = t;
  if(match_cons(t, sym_Overlay_3))
    {
      c_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
      v_11 = ATgetArgument(t, 2);
      {
        ATerm o_12 = NULL,p_12 = NULL,w_12 = NULL;
        t = e_12;
        t = foldr_3_0(l_3, m_3, o_3, t);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, c_12, (ATerm) ATmakeAppl(sym_Keys_1, o_12));
        p_12 = t;
        t = term_t_11;
        w_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, c_12, (ATerm) ATmakeAppl(sym_Keys_1, o_12)), term_t_11);
        t = k_5(p_3, p_12, w_12, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, c_12, e_12, v_11);
      }
    }
  else
    {
      ATerm u_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_OpDeclInj_1))
            {
              ATerm z_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(y_11);
          t = x_11;
        }
      else
        {
          t = u_11;
          if(match_cons(t, sym_OpDecl_2))
            {
              c_12 = ATgetArgument(t, 0);
              e_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_12;
          if(match_cons(t, sym_FunType_2))
            {
              i_12 = ATgetArgument(t, 0);
              w_11 = ATgetArgument(t, 1);
              {
                ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
                t = i_12;
                t = foldr_3_0(r_3, s_3, t_3, t);
                h_13 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, c_12, (ATerm) ATmakeAppl(sym_Keys_1, h_13));
                i_13 = t;
                t = term_d_12;
                j_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, c_12, (ATerm) ATmakeAppl(sym_Keys_1, h_13)), term_d_12);
                t = k_5(y_3, i_13, j_13, t);
                t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_12, (ATerm) ATmakeAppl(sym_FunType_2, i_12, w_11));
              }
            }
          else
            {
              ATerm r_13 = NULL,s_13 = NULL;
              if(match_cons(t, sym_ConstType_1))
                {
                  i_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, c_12, term_g_12);
              r_13 = t;
              t = term_j_12;
              s_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, c_12, term_g_12), term_j_12);
              t = k_5(a_4, r_13, s_13, t);
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_12, (ATerm) ATmakeAppl(sym_ConstType_1, i_12));
            }
        }
    }
  return(t);
}
ATerm escape_chars_1_0 (ATerm e_116 (ATerm), ATerm t)
{
  static ATerm r_14 (ATerm t);
  static ATerm r_14 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,a_1 = NULL;
        t = e_116(t);
        a_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_13 = ATgetFirst((ATermList) t);
            y_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_14);
        w_13 = t;
        t = y_13;
        t = Cons_2_0(_id, r_14, t);
        z_13 = t;
        t = (ATerm) ATinsert(CheckATermList(z_13), x_13);
        a_1 = t;
        t = SSLsetAnnotations(a_1, w_13);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm n_14 = NULL,o_14 = NULL,q_14 = NULL;
          q_14 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_14 = ATgetFirst((ATermList) t);
              o_14 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm p_6 = NULL,a_7 = NULL,c_1 = NULL;
                t = SSLgetAnnotations(q_14);
                p_6 = t;
                t = o_14;
                t = r_14(t);
                a_7 = t;
                t = (ATerm) ATinsert(CheckATermList(a_7), n_14);
                c_1 = t;
                t = SSLsetAnnotations(c_1, p_6);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_14;
            }
        }
      }
    return(t);
  }
  t = r_14(t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm u_130 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,a_15 = NULL,b_15 = NULL;
  y_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_14;
      t = s_130(t);
    }
  else
    {
      ATerm g_15 = NULL,h_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_15 = ATgetFirst((ATermList) t);
          b_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_15;
      t = u_130(t);
      g_15 = t;
      t = b_15;
      t = foldr_3_0(s_130, t_130, u_130, t);
      h_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_15, h_15);
      t = t_130(t);
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_n_12;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,h_7 = NULL;
  m_15 = t;
  t = SSL_explode_term(m_15);
  if(match_cons(t, sym__2))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_12 = ATgetArgument(t, 1);
        if(((ATgetType(r_12) == AT_LIST) && !(ATisEmpty(r_12))))
          {
            n_15 = ATgetFirst((ATermList) r_12);
            {
              ATerm s_12 = (ATerm) ATgetNext((ATermList) r_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(m_15);
  if(match_cons(t, sym__2))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_12 = ATgetArgument(t, 1);
        if(((ATgetType(v_12) == AT_LIST) && !(ATisEmpty(v_12))))
          {
            ATerm a_13 = ATgetFirst((ATermList) v_12);
            ATerm b_13 = (ATerm) ATgetNext((ATermList) v_12);
            if(((ATgetType(b_13) == AT_LIST) && !(ATisEmpty(b_13))))
              {
                h_7 = ATgetFirst((ATermList) b_13);
                {
                  ATerm c_13 = (ATerm) ATgetNext((ATermList) b_13);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, h_7), n_15));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm p_15 = NULL;
  if(match_cons(t, sym_ConstType_1))
    {
      p_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_15;
  return(t);
}
ATerm TupleType_0_0 (ATerm t)
{
  ATerm i_15 = NULL;
  t = foldr_3_0(b_4, d_4, e_4, t);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term_e_13, (ATerm) ATinsert(ATempty, i_15)));
  return(t);
}
ATerm TupleDecl_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  if(match_cons(t, sym_OpDeclInj_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_17;
  if(match_cons(t, sym_FunType_2))
    {
      b_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      t = c_17;
      if(match_cons(t, sym_ConstType_1))
        {
          r_16 = ATgetArgument(t, 0);
          t = r_16;
          if(match_cons(t, sym_SortVar_1))
            {
              s_16 = ATgetArgument(t, 0);
              t = b_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_16 = ATgetFirst((ATermList) t);
                  u_16 = (ATerm) ATgetNext((ATermList) t);
                  t = u_16;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = t_16;
                      if(match_cons(t, sym_ConstType_1))
                        {
                          p_16 = ATgetArgument(t, 0);
                          t = p_16;
                          if(match_cons(t, sym_SortVar_1))
                            {
                              q_16 = ATgetArgument(t, 0);
                              {
                                ATerm f_13 = t;
                                int g_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = s_16;
                                    if((q_16 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_SortVar_1, q_16))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term_e_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Sort_2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, term_n_12), (ATerm) ATmakeAppl(sym_SortVar_1, q_16))))))));
                                    LocalPopChoice(g_13);
                                  }
                                else
                                  {
                                    t = f_13;
                                    t = b_17;
                                    t = TupleType_0_0(t);
                                    if((c_17 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, a_17);
                                  }
                              }
                            }
                          else
                            {
                              t = b_17;
                              t = TupleType_0_0(t);
                              if((c_17 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, a_17);
                            }
                        }
                      else
                        {
                          t = b_17;
                          t = TupleType_0_0(t);
                          if((c_17 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, a_17);
                        }
                    }
                  else
                    {
                      t = b_17;
                      t = TupleType_0_0(t);
                      if((c_17 != t))
                        {
                          _fail(t);
                        }
                      t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, a_17);
                    }
                }
              else
                {
                  t = b_17;
                  t = TupleType_0_0(t);
                  if((c_17 != t))
                    {
                      _fail(t);
                    }
                  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, a_17);
                }
            }
          else
            {
              t = b_17;
              t = TupleType_0_0(t);
              if((c_17 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, a_17);
            }
        }
      else
        {
          t = b_17;
          t = TupleType_0_0(t);
          if((c_17 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, a_17);
        }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          b_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_17;
      if(match_cons(t, sym_Sort_2))
        {
          t_16 = ATgetArgument(t, 0);
          u_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_16;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Tuple", 0, ATtrue)))
        _fail(t);
      t = u_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_16 = ATgetFirst((ATermList) t);
          y_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_16;
      if(match_cons(t, sym_Sort_2))
        {
          w_16 = ATgetArgument(t, 0);
          x_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_16;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = x_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term_e_13, (ATerm) ATinsert(ATempty, term_n_12))));
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm m_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = TupleDecl_0_0(t);
          LocalPopChoice(v_13);
        }
      else
        {
          t = q_13;
          {
            ATerm b_20 = NULL,d_20 = NULL,e_20 = NULL,w_7 = NULL,c_8 = NULL;
            b_20 = t;
            if(match_cons(t, sym_OpDeclQ_2))
              {
                d_20 = ATgetArgument(t, 0);
                e_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_explode_string(d_20);
            t = escape_chars_1_0(i_4, t);
            c_8 = t;
            t = SSL_implode_string(c_8);
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_7, e_20);
          }
        }
      LocalPopChoice(p_13);
    }
  else
    {
      t = m_13;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm f_8 = NULL,k_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_8 = ATgetFirst((ATermList) t);
      k_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_8;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(k_8), term_c_14), term_b_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(k_8), term_b_14), term_b_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(k_8), term_d_14), term_b_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(k_8), term_e_14), term_b_14);
            }
        }
    }
  return(t);
}
static ATerm q_5 (ATerm h_23, ATerm j_23, ATerm k_23, ATerm t)
{
  ATerm e_19 = NULL;
  t = h_23;
  t = map_1_0(f_4, t);
  e_19 = t;
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = j_23;
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = j_23;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = k_23;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, k_23)), (ATerm) ATmakeAppl(sym_Overlays_1, j_23)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, e_19)))));
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm f_14 = ATgetArgument(t, 0);
      if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
        {
          ATerm g_14 = ATgetFirst((ATermList) f_14);
          if(match_cons(g_14, sym_Signature_1))
            {
              ATerm i_14 = ATgetArgument(g_14, 0);
              if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
                {
                  ATerm j_14 = ATgetFirst((ATermList) i_14);
                  if(match_cons(j_14, sym_Constructors_1))
                    {
                      o_20 = ATgetArgument(j_14, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_14 = (ATerm) ATgetNext((ATermList) i_14);
                    if(((ATgetType(k_14) != AT_LIST) || !(ATisEmpty(k_14))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm h_14 = (ATerm) ATgetNext((ATermList) f_14);
            if(((ATgetType(h_14) == AT_LIST) && !(ATisEmpty(h_14))))
              {
                ATerm l_14 = ATgetFirst((ATermList) h_14);
                if(match_cons(l_14, sym_Overlays_1))
                  {
                    p_20 = ATgetArgument(l_14, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm s_14 = (ATerm) ATgetNext((ATermList) h_14);
                  if(((ATgetType(s_14) == AT_LIST) && !(ATisEmpty(s_14))))
                    {
                      ATerm t_14 = ATgetFirst((ATermList) s_14);
                      if(match_cons(t_14, sym_Strategies_1))
                        {
                          q_20 = ATgetArgument(t_14, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm v_14 = (ATerm) ATgetNext((ATermList) s_14);
                        if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
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
  t = q_5(o_20, p_20, q_20, t);
  return(t);
}
static ATerm r_5 (ATerm n_38, ATerm o_38, ATerm t)
{
  ATerm r_20 = NULL;
  t = SSL_fputc(n_38, o_38);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_20);
  return(t);
}
static ATerm s_5 (ATerm p_44, ATerm q_44, ATerm t)
{
  ATerm s_20 = NULL;
  t = SSL_write_term_to_stream_text(p_44, q_44);
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_20);
  return(t);
}
static ATerm u_5 (ATerm a_122 (ATerm), ATerm w_424, ATerm v_44, ATerm t)
{
  ATerm v_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_424, term_w_14);
  t = y_5(t);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_20, v_44);
  t = a_122(t);
  t = fclose_0_0(t);
  t = v_44;
  return(t);
}
static ATerm t_5 (ATerm l_44, ATerm m_44, ATerm t)
{
  ATerm w_20 = NULL;
  t = SSL_write_term_to_stream_baf(l_44, m_44);
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_20);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm f_21 = NULL,i_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_14 = ATgetArgument(t, 0);
      if(match_cons(x_14, sym_Stream_1))
        {
          f_21 = ATgetArgument(x_14, 0);
        }
      else
        _fail(t);
      i_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(f_21, i_21, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm j_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_14 = ATgetArgument(t, 0);
      if(match_cons(z_14, sym_Stream_1))
        {
          o_21 = ATgetArgument(z_14, 0);
        }
      else
        _fail(t);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(o_21, q_21, t);
  j_21 = t;
  t = term_c_15;
  m_21 = t;
  t = j_21;
  if(match_cons(t, sym_Stream_1))
    {
      n_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_15, j_21);
  t = r_5(m_21, n_21, t);
  return(t);
}
ATerm output_1_0 (ATerm w_142 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  t = w_142(t);
  y_20 = t;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL,a_21 = NULL;
        t = term_f_15;
        z_20 = t;
        t = term_j_15;
        a_21 = t;
        t = term_k_15;
        t = e_6(z_20, a_21, t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        t = term_l_15;
      }
  }
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_20, y_20);
  {
    ATerm o_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_21 = NULL,e_21 = NULL;
        t = term_f_15;
        d_21 = t;
        t = term_r_15;
        e_21 = t;
        t = term_s_15;
        t = e_6(d_21, e_21, t);
        t = (ATerm) ATmakeAppl(sym__2, x_20, y_20);
        LocalPopChoice(q_15);
        if(match_cons(t, sym__2))
          {
            ATerm t_15 = ATgetArgument(t, 0);
            ATerm u_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_5(q_4, x_20, y_20, t);
      }
    else
      {
        t = o_15;
        if(match_cons(t, sym__2))
          {
            ATerm v_15 = ATgetArgument(t, 0);
            ATerm w_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_5(r_4, x_20, y_20, t);
      }
  }
  return(t);
}
static ATerm h_22 (ATerm y_21, ATerm t)
{
  t = SSL_fclose(y_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  f_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_22 = ATgetArgument(t, 0);
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_22);
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            t = h_22(f_22, t);
          }
      }
    }
  else
    {
      t = h_22(f_22, t);
    }
  return(t);
}
static ATerm v_5 (ATerm r_44, ATerm t)
{
  t = SSL_read_term_from_stream(r_44);
  return(t);
}
static ATerm w_5 (ATerm t_36, ATerm u_36, ATerm t)
{
  t = SSL_strcat(t_36, u_36);
  return(t);
}
static ATerm x_5 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm i_22 = NULL;
  t = SSL_fopen(p_38, q_38);
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_22 = NULL;
  t = SSL_stdin_stream();
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_22 = NULL;
  t = SSL_stdout_stream();
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_22 = NULL;
  t = SSL_stderr_stream();
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_22);
  return(t);
}
static ATerm g_26 (ATerm b_23, ATerm t)
{
  ATerm c_23 = NULL;
  t = SSL_explode_term(b_23);
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_16 = ATgetArgument(t, 1);
        if(((ATgetType(a_16) == AT_LIST) && !(ATisEmpty(a_16))))
          {
            c_23 = ATgetFirst((ATermList) a_16);
            {
              ATerm b_16 = (ATerm) ATgetNext((ATermList) a_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_26 (ATerm f_23, ATerm g_23, ATerm l_23, ATerm t)
{
  ATerm m_23 = NULL,t_23 = NULL,u_23 = NULL,v_24 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(l_23);
  u_23 = t;
  t = f_23;
  if(match_cons(t, sym_Path_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_24, g_23);
  g_1 = t;
  t = SSLsetAnnotations(g_1, u_23);
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      t_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(m_23, t_23, t);
  return(t);
}
static ATerm i_26 (ATerm p_25, ATerm q_25, ATerm r_25, ATerm t)
{
  ATerm s_25 = NULL,u_25 = NULL,v_25 = NULL,a_26 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(r_25);
  v_25 = t;
  t = SSL_is_string(p_25);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_26, q_25);
  h_1 = t;
  t = SSLsetAnnotations(h_1, v_25);
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(s_25, u_25, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_26(c_26, t);
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_26(d_26, e_26, c_26, t);
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
                  t = i_26(d_26, e_26, c_26, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_26(c_26, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_26 = NULL,t_26 = NULL,u_26 = NULL,b_27 = NULL;
  b_27 = t;
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_27, term_i_16);
        t = y_5(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
          ATerm j_9 = NULL,k_9 = NULL;
          t = term_j_16;
          k_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_16, b_27);
          t = w_5(k_9, b_27, t);
          j_9 = t;
          t = SSL_perror(j_9);
          _fail(t);
        }
      }
  }
  t_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_5(u_26, t);
  n_26 = t;
  t = t_26;
  t = fclose_0_0(t);
  t = n_26;
  return(t);
}
ATerm input_1_0 (ATerm x_142 (ATerm), ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_27 = NULL,j_27 = NULL;
      t = term_f_15;
      g_27 = t;
      t = term_m_16;
      j_27 = t;
      t = term_n_16;
      t = e_6(g_27, j_27, t);
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      t = term_o_16;
    }
  t = ReadFromFile_0_0(t);
  t = x_142(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  t = term_f_15;
  k_27 = t;
  t = term_z_16;
  l_27 = t;
  t = term_d_17;
  t = e_6(k_27, l_27, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  p_27 = t;
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_17 = ATgetFirst((ATermList) t);
                ATerm h_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_27;
          }
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = (ATerm) ATinsert(ATempty, p_27);
      }
  }
  q_27 = t;
  t = term_l_15;
  r_27 = t;
  t = SSL_printnl(r_27, q_27);
  t = p_27;
  return(t);
}
ATerm map_1_0 (ATerm e_123 (ATerm), ATerm t)
{
  static ATerm v_28 (ATerm t);
  static ATerm v_28 (ATerm t)
  {
    ATerm r_28 = NULL,t_28 = NULL,u_28 = NULL;
    r_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_28;
      }
    else
      {
        ATerm p_9 = NULL,v_9 = NULL,a_10 = NULL,k_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_28 = ATgetFirst((ATermList) t);
            u_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_28);
        p_9 = t;
        t = t_28;
        t = e_123(t);
        v_9 = t;
        t = u_28;
        t = v_28(t);
        a_10 = t;
        t = (ATerm) ATinsert(CheckATermList(a_10), v_9);
        k_1 = t;
        t = SSLsetAnnotations(k_1, p_9);
      }
    return(t);
  }
  t = v_28(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_29 = ATgetFirst((ATermList) t);
      h_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_29 = NULL,s_29 = NULL;
        static ATerm s_4 (ATerm t);
        static ATerm s_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_29)), not_null(s_29));
          return(t);
        }
        t = h_29;
        t = r_0(t);
        if(((r_29 != NULL) && (r_29 != t)))
          _fail(t);
        else
          r_29 = t;
        t = g_29;
        t = p_0(t);
        if(((s_29 != NULL) && (s_29 != t)))
          _fail(t);
        else
          s_29 = t;
        t = h_29;
        t = reverse_acc_2_0(p_0, s_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_17;
      t = r_0(t);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,i_30 = NULL,o_1 = NULL;
  i_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_30);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_30);
  o_1 = t;
  t = SSLsetAnnotations(o_1, f_30);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm o_30 = NULL;
  o_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_30), term_j_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm v_144 (ATerm), ATerm w_144 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_30 = NULL,e_30 = NULL;
      t = term_f_15;
      c_30 = t;
      t = term_z_16;
      e_30 = t;
      t = term_d_17;
      t = e_6(c_30, e_30, t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      t = fetch_1_0(w_4, t);
    }
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_144(t);
        t = echo_0_0(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
      }
  }
  t = term_o_17;
  t = echo_0_0(t);
  t = term_p_17;
  y_29 = t;
  t = term_q_17;
  z_29 = t;
  t = term_r_17;
  t = e_6(y_29, z_29, t);
  t = reverse_acc_2_0(_id, x_4, t);
  t = map_1_0(z_4, t);
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_30 = NULL;
        t = w_144(t);
        p_30 = t;
        t = (ATerm) ATinsert(CheckATermList(p_30), term_u_17);
        t = echo_0_0(t);
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
      }
  }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,q_1 = NULL;
  x_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_30);
  q_1 = t;
  t = SSLsetAnnotations(q_1, v_30);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL,u_30 = NULL;
        t = term_f_15;
        t_30 = t;
        t = term_z_16;
        u_30 = t;
        t = term_d_17;
        t = e_6(t_30, u_30, t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = fetch_1_0(a_5, t);
      }
  }
  t = s_30;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  if(match_string(t, "-k"))
    {
      t = z_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_30;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm h_31 = NULL,l_31 = NULL,m_31 = NULL;
  h_31 = t;
  t = SSL_string_to_int(h_31);
  l_31 = t;
  t = term_x_17;
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, l_31);
  t = h_6(m_31, l_31, t);
  t = h_31;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, d_5, h_5, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  if(match_string(t, "-S"))
    {
      t = o_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_31;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  t = term_z_17;
  p_31 = t;
  t = term_s_8;
  q_31 = t;
  t = term_a_18;
  t = h_6(p_31, q_31, t);
  t = term_b_18;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_c_18;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  t = SSL_string_to_int(r_31);
  s_31 = t;
  t = term_z_17;
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, s_31);
  t = h_6(t_31, s_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_31);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  t = term_e_18;
  u_31 = t;
  t = term_i_17;
  v_31 = t;
  t = term_f_18;
  t = h_6(u_31, v_31, t);
  t = term_g_18;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_6, d_6, g_6, t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_6, l_6, m_6, t);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            t = Option_3_0(o_6, q_6, r_6, t);
          }
      }
    }
  return(t);
}
static ATerm h_6 (ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  t = term_f_15;
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_15, j_42, k_42);
  t = lookup_table_0_1(w_31, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(j_42, k_42, x_31, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_15, j_42, k_42);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
      t = term_i_17;
      t = g_0(t);
      d_32 = t;
      t = term_p_17;
      e_32 = t;
      t = term_q_17;
      f_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_17, term_q_17, d_32);
      t = f_6(e_32, f_32, d_32, t);
      _fail(t);
    }
  else
    {
      ATerm i_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_32 = ATgetFirst((ATermList) t);
          c_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_32;
      t = d_0(t);
      t = term_i_17;
      t = f_0(t);
      i_32 = t;
      t = (ATerm) ATinsert(CheckATermList(c_32), i_32);
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm k_32 = NULL;
  k_32 = t;
  if(match_string(t, "-o"))
    {
      t = k_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_32;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  n_32 = t;
  t = term_j_15;
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, n_32);
  t = h_6(o_32, n_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_32);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_6, y_6, b_7, t);
  return(t);
}
static ATerm f_6 (ATerm l_26, ATerm m_26, ATerm k_26, ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_26, m_26);
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_18 = ATgetArgument(t, 0);
            ATerm q_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_26, m_26);
        t = e_6(l_26, m_26, t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = n_18;
        t = (ATerm) ATempty;
      }
  }
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_26, m_26, (ATerm) ATinsert(CheckATermList(r_32), k_26));
  t = lookup_table_0_1(l_26, t);
  u_32 = t;
  t = (ATerm) ATinsert(CheckATermList(r_32), k_26);
  s_32 = t;
  t = u_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(m_26, s_32, t_32, t);
  t = q_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
      t = term_i_17;
      t = n_0(t);
      f_33 = t;
      t = term_p_17;
      g_33 = t;
      t = term_q_17;
      h_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_17, term_q_17, f_33);
      t = f_6(g_33, h_33, f_33, t);
      _fail(t);
    }
  else
    {
      ATerm l_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_33 = ATgetFirst((ATermList) t);
          c_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_33 = ATgetFirst((ATermList) t);
          e_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_33;
      t = j_0(t);
      t = d_33;
      t = l_0(t);
      l_33 = t;
      t = (ATerm) ATinsert(CheckATermList(e_33), l_33);
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  if(match_string(t, "-i"))
    {
      t = n_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_33;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  o_33 = t;
  t = term_m_16;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, o_33);
  t = h_6(p_33, o_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_33);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_7, e_7, f_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_17;
  t = whoami_0_0(t);
  q_33 = t;
  t = term_c_9;
  s_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_18), q_33);
  t_33 = t;
  t = SSL_printnl(s_33, t_33);
  t = term_v_8;
  r_33 = t;
  t = SSL_exit(r_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  t = term_f_15;
  u_33 = t;
  t = term_z_16;
  v_33 = t;
  t = term_d_17;
  t = e_6(u_33, v_33, t);
  return(t);
}
static ATerm z_5 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_45, z_45);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      t = SSL_addr(y_45, z_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_130 (ATerm), ATerm r_130 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_33;
      t = q_130(t);
    }
  else
    {
      ATerm c_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_33 = ATgetFirst((ATermList) t);
          z_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_33;
      t = foldr_2_0(q_130, r_130, t);
      c_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_33, c_34);
      t = r_130(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(m_10, n_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_34 = NULL,h_10 = NULL,i_10 = NULL;
  t = times_0_0(t);
  i_10 = t;
  t = SSL_explode_term(i_10);
  if(match_cons(t, sym__2))
    {
      ATerm v_18 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10;
  t = foldr_2_0(g_7, i_7, t);
  f_34 = t;
  t = SSL_TicksToSeconds(f_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  if(match_cons(t, sym__2))
    {
      r_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_34;
        if((r_34 != t))
          {
            _fail(t);
          }
        t = q_34;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATmakeAppl(sym__2, r_34, s_34);
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_34, s_34);
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              t = SSL_gtr(r_34, s_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_34, s_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
        t = term_f_15;
        z_34 = t;
        t = term_z_17;
        a_35 = t;
        t = term_c_19;
        t = e_6(z_34, a_35, t);
        y_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_34, term_v_8);
        t = geq_0_0(t);
        t = w_34;
        t = y_117(t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = w_34;
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,f_35 = NULL,g_35 = NULL;
  t = run_time_0_0(t);
  c_35 = t;
  t = term_i_17;
  t = whoami_0_0(t);
  d_35 = t;
  t = term_c_9;
  f_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_19), c_35), term_d_19), d_35);
  g_35 = t;
  t = SSL_printnl(f_35, g_35);
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_19), c_35), term_d_19), d_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_8;
  h_35 = t;
  t = SSL_exit(h_35);
  return(t);
}
static ATerm i_6 (ATerm a_31, ATerm b_31, ATerm c_31, ATerm t)
{
  ATerm i_35 = NULL;
  t = SSL_hashtable_put(c_31, a_31, b_31);
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_35);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_27, ATerm t)
{
  ATerm r_35 = NULL;
  t = table_hashtable_0_0(t);
  r_35 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL;
        t = r_35;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_6(x_27, h_11, t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        {
          ATerm s_11 = NULL;
          t = x_27;
          t = table_create_0_0(t);
          t = r_35;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_6(x_27, s_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_31, ATerm j_31, ATerm t)
{
  ATerm u_35 = NULL;
  t = SSL_hashtable_create(i_31, j_31);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_35);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,z_35 = NULL,a_36 = NULL;
  v_35 = t;
  t = term_i_19;
  z_35 = t;
  t = term_j_19;
  a_36 = t;
  t = v_35;
  t = new_hashtable_0_2(z_35, a_36, t);
  w_35 = t;
  t = v_35;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(v_35, w_35, x_35, t);
  t = v_35;
  return(t);
}
static ATerm b_6 (ATerm f_31, ATerm g_31, ATerm t)
{
  ATerm b_36 = NULL;
  t = SSL_hashtable_remove(g_31, f_31);
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_36);
  return(t);
}
static ATerm c_6 (ATerm k_31, ATerm t)
{
  ATerm c_36 = NULL;
  t = SSL_hashtable_destroy(k_31);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_36);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_36 = NULL;
  t = SSL_table_hashtable();
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_36);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  e_36 = t;
  t = table_hashtable_0_0(t);
  f_36 = t;
  t = lookup_table_0_1(e_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(h_36, t);
  t = f_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(e_36, g_36, t);
  t = e_36;
  return(t);
}
ATerm fetch_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  static ATerm g_37 (ATerm t);
  static ATerm g_37 (ATerm t)
  {
    ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
    d_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_37 = ATgetFirst((ATermList) t);
        f_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_12 = NULL,f_12 = NULL,t_1 = NULL;
          t = SSLgetAnnotations(d_37);
          a_12 = t;
          t = e_37;
          t = m_123(t);
          f_12 = t;
          t = (ATerm) ATinsert(CheckATermList(f_37), f_12);
          t_1 = t;
          t = SSLsetAnnotations(t_1, a_12);
          LocalPopChoice(l_19);
        }
      else
        {
          t = k_19;
          {
            ATerm t_12 = NULL,z_12 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(d_37);
            t_12 = t;
            t = f_37;
            t = g_37(t);
            z_12 = t;
            t = (ATerm) ATinsert(CheckATermList(z_12), e_37);
            u_1 = t;
            t = SSLsetAnnotations(u_1, t_12);
          }
        }
    }
    return(t);
  }
  t = g_37(t);
  return(t);
}
static ATerm j_6 (ATerm d_31, ATerm e_31, ATerm t)
{
  t = SSL_hashtable_get(e_31, d_31);
  return(t);
}
static ATerm e_6 (ATerm e_28, ATerm f_28, ATerm t)
{
  ATerm j_37 = NULL;
  t = lookup_table_0_1(e_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(f_28, j_37, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL;
  t = term_m_19;
  l_37 = t;
  t = term_i_17;
  m_37 = t;
  t = term_n_19;
  t = h_6(l_37, m_37, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_o_19;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
  t = term_m_19;
  p_37 = t;
  t = term_i_17;
  q_37 = t;
  t = term_n_19;
  t = h_6(p_37, q_37, t);
  t = term_p_19;
  n_37 = t;
  t = term_i_17;
  o_37 = t;
  t = term_q_19;
  t = h_6(n_37, o_37, t);
  t = term_r_19;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_s_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_7, m_7, p_7, t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = Option_3_0(q_7, r_7, v_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,y_1 = NULL;
  w_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_37 = ATgetFirst((ATermList) t);
      t_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_37);
  r_37 = t;
  t = s_37;
  t = f_88(t);
  u_37 = t;
  t = t_37;
  t = g_88(t);
  v_37 = t;
  t = (ATerm) ATinsert(CheckATermList(v_37), u_37);
  y_1 = t;
  t = SSLsetAnnotations(y_1, r_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_144 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,g_38 = NULL,h_38 = NULL,a_2 = NULL;
  b_38 = t;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_19;
        t = q_144(t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
      }
  }
  t = b_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_38 = ATgetFirst((ATermList) t);
      e_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  c_38 = t;
  t = term_z_16;
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_16, d_38);
  t = h_6(h_38, d_38, t);
  t = e_38;
  {
    static ATerm x_38 (ATerm t);
    static ATerm x_38 (ATerm t)
    {
      ATerm y_19 = t;
      int z_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_38 = NULL;
              k_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_38;
              LocalPopChoice(c_20);
            }
          else
            {
              t = a_20;
              t = q_144(t);
              t = Cons_2_0(_id, x_38, t);
            }
          LocalPopChoice(z_19);
        }
      else
        {
          t = y_19;
          {
            ATerm t_38 = NULL,u_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_38 = ATgetFirst((ATermList) t);
                u_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_38), (ATerm) ATmakeAppl(sym_Undefined_1, t_38));
          }
        }
      return(t);
    }
    t = x_38(t);
  }
  g_38 = t;
  t = (ATerm) ATinsert(CheckATermList(g_38), (ATerm) ATmakeAppl(sym_Program_1, d_38));
  a_2 = t;
  t = SSLsetAnnotations(a_2, c_38);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm k_39 = NULL;
  k_39 = t;
  if(match_string(t, "--help"))
    {
      t = k_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_39;
        }
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL;
  t = term_f_20;
  l_39 = t;
  t = term_i_17;
  m_39 = t;
  t = term_g_20;
  t = h_6(l_39, m_39, t);
  t = term_h_20;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm n_144 (ATerm), ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
  e_39 = t;
  t = term_p_17;
  f_39 = t;
  t = term_j_20;
  t = lookup_table_0_1(f_39, t);
  j_39 = t;
  t = term_q_17;
  g_39 = t;
  t = (ATerm) ATempty;
  h_39 = t;
  t = j_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(g_39, h_39, i_39, t);
  t = e_39;
  {
    static ATerm x_7 (ATerm t);
    static ATerm x_7 (ATerm t)
    {
      ATerm k_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_144(t);
          LocalPopChoice(l_20);
        }
      else
        {
          t = k_20;
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_7, z_7, a_8, t);
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_7, t);
  }
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_39 = NULL;
        x_39 = t;
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_13 = NULL;
              t = x_39;
              {
                ATerm g_21 = t;
                int h_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_13 = NULL,u_13 = NULL;
                    t = term_f_15;
                    t_13 = t;
                    t = term_f_20;
                    u_13 = t;
                    t = term_k_21;
                    t = e_6(t_13, u_13, t);
                    LocalPopChoice(h_21);
                  }
                else
                  {
                    t = g_21;
                    t = fetch_1_0(d_8, t);
                  }
              }
              t = x_39;
              t = o_144(t);
              t = term_s_8;
              o_13 = t;
              t = SSL_exit(o_13);
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              {
                ATerm m_14 = NULL,p_14 = NULL,u_14 = NULL;
                t = term_f_15;
                p_14 = t;
                t = term_m_19;
                u_14 = t;
                t = term_l_21;
                t = e_6(p_14, u_14, t);
                t = x_39;
                t = p_144(t);
                t = term_s_8;
                m_14 = t;
                t = SSL_exit(m_14);
              }
            }
        }
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        {
          ATerm p_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
              static ATerm g_8 (ATerm t);
              static ATerm g_8 (ATerm t)
              {
                ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,c_2 = NULL;
                d_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_40);
                b_40 = t;
                t = c_40;
                if(((c_39 != NULL) && (c_39 != t)))
                  _fail(t);
                else
                  c_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_40);
                c_2 = t;
                t = SSLsetAnnotations(c_2, b_40);
                return(t);
              }
              t = fetch_1_0(g_8, t);
              t = term_c_9;
              z_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_39)), term_s_21);
              a_40 = t;
              t = SSL_printnl(z_39, a_40);
              t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_39)), term_s_21));
              t = o_144(t);
              t = term_v_8;
              y_39 = t;
              t = SSL_exit(y_39);
              LocalPopChoice(r_21);
            }
          else
            {
              t = p_21;
            }
        }
      }
  }
  d_39 = t;
  t = term_p_17;
  t = table_destroy_0_0(t);
  t = d_39;
  return(t);
}
ATerm option_wrap_5_0 (ATerm q_142 (ATerm), ATerm r_142 (ATerm), ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm u_142 (ATerm), ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  t = parse_options_3_0(q_142, r_142, s_142, t);
  i_40 = t;
  t = term_t_21;
  t = table_create_0_0(t);
  t = term_t_21;
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_21, term_u_21, i_40);
  t = lookup_table_0_1(j_40, t);
  m_40 = t;
  t = term_u_21;
  k_40 = t;
  t = m_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(k_40, i_40, l_40, t);
  t = i_40;
  t = t_142(t);
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_142(t);
        t = report_success_0_0(t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm x_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_21);
    }
  else
    {
      t = x_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm c_22 = t;
              int d_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_8, p_8, q_8, t);
                  LocalPopChoice(d_22);
                }
              else
                {
                  t = c_22;
                  {
                    ATerm g_22 = t;
                    int m_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(m_22);
                      }
                    else
                      {
                        t = g_22;
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
static ATerm n_8 (ATerm t)
{
  t = input_1_0(r_8, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL;
  t = term_r_15;
  o_40 = t;
  t = term_i_17;
  p_40 = t;
  t = term_n_22;
  t = h_6(o_40, p_40, t);
  t = term_o_22;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_p_22;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = output_1_0(CheckConstructors_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(m_8, default_system_usage_0_0, default_system_about_0_0, _id, n_8, t);
  return(t);
}
