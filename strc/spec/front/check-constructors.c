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
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_OpDeclInj_1;
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
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_z_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_u_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_u_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_u_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_f_12;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
void init_constant_terms (void)
{
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_o_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Var_1, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATempty);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlay", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Keys_1, term_l_9);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_10);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, term_r_13);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_l_9);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_9);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_w_16, term_i_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_p_17);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_i_16);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_i_16);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_i_16);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_i_16);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm at_end_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_2 (ATerm v_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm j_5 (ATerm d_21, ATerm e_21, ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm g_5 (ATerm b_33, ATerm c_33, ATerm);
ATerm while_not_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm);
ATerm for_3_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm h_5 (ATerm h_19, ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm o_1 (ATerm);
ATerm t_1 (ATerm);
ATerm x_1 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm j_2 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm y_74 (ATerm), ATerm);
ATerm k_5 (ATerm x_20, ATerm y_20, ATerm);
ATerm end_scope_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_72 (ATerm), ATerm);
ATerm scope_2_0 (ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm check_constructors_p__2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm c_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm filter_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm l_5 (ATerm i_72 (ATerm), ATerm k_20, ATerm i_20, ATerm);
ATerm foldr_3_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm m_5 (ATerm i_18, ATerm k_18, ATerm l_18, ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm n_5 (ATerm y_41, ATerm z_41, ATerm);
ATerm o_5 (ATerm m_45, ATerm n_45, ATerm);
ATerm q_5 (ATerm l_92 (ATerm), ATerm x_464, ATerm q_45, ATerm);
ATerm p_5 (ATerm i_45, ATerm j_45, ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm output_1_0 (ATerm u_96 (ATerm), ATerm);
ATerm i_21 (ATerm y_19, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_5 (ATerm o_45, ATerm);
ATerm s_5 (ATerm a_42, ATerm b_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_23 (ATerm e_22, ATerm);
ATerm i_23 (ATerm i_22, ATerm l_22, ATerm m_22, ATerm);
ATerm j_23 (ATerm u_22, ATerm v_22, ATerm w_22, ATerm);
ATerm t_5 (ATerm);
ATerm i_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm v_96 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm b_6 (ATerm p_46, ATerm q_46, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_5 (ATerm s_20, ATerm t_20, ATerm r_20, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm u_5 (ATerm v_32, ATerm w_32, ATerm);
ATerm foldr_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm k_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_7 (ATerm);
ATerm need_help_1_0 (ATerm l_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_5 (ATerm q_39, ATerm r_39, ATerm);
ATerm debug_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm y_5 (ATerm j_22, ATerm k_22, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_98 (ATerm), ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm parse_options_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm j_1 = NULL,m_1 = NULL,n_1 = NULL;
    n_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_1 = ATgetFirst((ATermList) t);
        m_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_0 = NULL,g_1 = NULL,x_0 = NULL;
          t = SSLgetAnnotations(n_1);
          w_0 = t;
          t = m_1;
          t = p_1(t);
          g_1 = t;
          t = (ATerm) ATinsert(CheckATermList(g_1), j_1);
          x_0 = t;
          t = SSLsetAnnotations(x_0, w_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_1;
        t = s_76(t);
      }
    return(t);
  }
  t = p_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,o_0 = NULL;
  c_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_0;
    }
  else
    {
      ATerm a_0 (ATerm t)
      {
        t = not_null(o_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_0 = ATgetFirst((ATermList) t);
          if(((o_0 != NULL) && (o_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_0;
      t = at_end_1_0(a_0, t);
    }
  return(t);
}
ATerm i_2 (ATerm v_1, ATerm t)
{
  ATerm w_1 = NULL;
  t = SSL_explode_term(v_1);
  if(match_cons(t, sym__2))
    {
      ATerm u_0 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_0) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = z_1;
              return(t);
            }
            t = y_1;
            t = at_end_1_0(q_0, t);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            t = i_2(a_2, t);
          }
      }
    }
  else
    {
      t = i_2(a_2, t);
    }
  return(t);
}
ATerm j_5 (ATerm d_21, ATerm e_21, ATerm t)
{
  ATerm l_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_21, e_21);
  t = y_5(d_21, e_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_2 = ATgetFirst((ATermList) t);
      {
        ATerm k_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_2;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(g_3, h_3, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm u_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,d_3 = NULL,f_3 = NULL,q_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      x_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_o_9;
  q_1 = t;
  t = term_p_9;
  s_1 = t;
  t = term_r_9;
  t = j_5(s_1, q_1, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
      u_2 = ATgetArgument(t, 1);
      w_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_2;
  t = foldr_3_0(s_0, t_0, v_0, t);
  f_3 = t;
  t = SSL_int_to_string(f_3);
  a_3 = t;
  t = term_t_9;
  b_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_10), a_3), term_g_10), x_2), term_d_10), term_a_10), w_2), term_w_9), u_2), term_u_9);
  d_3 = t;
  t = SSL_printnl(b_3, d_3);
  t = (ATerm) ATmakeAppl(sym_Op_2, x_2, z_2);
  return(t);
}
ATerm g_5 (ATerm b_33, ATerm c_33, ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_33, c_33);
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      t = SSL_subtr(b_33, c_33);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_85(t);
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = z_85(t);
        t = j_3(t);
      }
    return(t);
  }
  t = j_3(t);
  return(t);
}
ATerm for_3_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm t)
{
  t = b_86(t);
  t = while_not_2_0(c_86, d_86, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm k_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      k_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_3, m_3, (ATerm) ATempty);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm n_3 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm r_10 = ATgetArgument(t, 0);
      if(((ATgetType(r_10) != AT_INT) || (ATgetInt((ATermInt) r_10) != 0)))
        _fail(t);
      {
        ATerm s_10 = ATgetArgument(t, 1);
      }
      n_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_3;
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__3))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      q_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_3, term_m_9);
  t = geq_0_0(t);
  t = term_m_9;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, term_m_9);
  t = g_5(o_3, t_3, t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_3, p_3, (ATerm) ATinsert(CheckATermList(q_3), p_3));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(y_0, z_0, b_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm b_4 = NULL,f_4 = NULL;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(b_4, f_4, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm h_5 (ATerm h_19, ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  w_3 = t;
  t = h_19;
  t = foldr_3_0(e_1, f_1, h_1, t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, term_v_10);
  t = copy_0_0(t);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, y_3, term_v_10));
  t = GenerateCheckRule_0_0(t);
  {
    ATerm a_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL,u_1 = NULL,c_2 = NULL;
        t = (ATerm) ATempty;
        u_1 = t;
        t = term_t_10;
        c_2 = t;
        t = term_d_11;
        t = j_5(c_2, u_1, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            g_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_4;
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = a_11;
        t = (ATerm) ATempty;
      }
    x_3 = t;
    t = (ATerm) ATempty;
    z_3 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_11, (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, y_3, term_v_10))));
    a_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_11, (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, y_3, term_v_10)))));
    t = l_5(i_1, z_3, a_4, t);
    t = w_3;
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm i_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      i_3 = ATgetArgument(t, 0);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(i_3, l_3, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm q_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(q_4, t_4, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm g_6 = NULL,j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      g_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(g_6, j_6, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,n_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym_Op_2))
    {
      g_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,d_4 = NULL,e_4 = NULL;
        t = n_7;
        t = foldr_3_0(k_1, l_1, o_1, t);
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, g_7, (ATerm) ATmakeAppl(sym_Keys_1, c_3));
        d_4 = t;
        t = term_j_11;
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATmakeAppl(sym_Op_2, g_7, (ATerm) ATmakeAppl(sym_Keys_1, c_3)));
        t = j_5(e_4, d_4, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm k_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_11) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, g_7, (ATerm) ATempty);
        ;
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        {
          ATerm l_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_4 = NULL,c_5 = NULL,d_5 = NULL;
              t = n_7;
              t = foldr_3_0(t_1, x_1, b_2, t);
              m_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, g_7, (ATerm) ATmakeAppl(sym_Keys_1, m_4));
              c_5 = t;
              t = term_j_11;
              d_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATmakeAppl(sym_Op_2, g_7, (ATerm) ATmakeAppl(sym_Keys_1, m_4)));
              t = j_5(d_5, c_5, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm n_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_11) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, g_7, (ATerm) ATempty);
              ;
              LocalPopChoice(m_11);
            }
          else
            {
              t = l_11;
              {
                ATerm e_6 = NULL,r_6 = NULL,t_6 = NULL;
                t = n_7;
                t = foldr_3_0(d_2, f_2, j_2, t);
                e_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, g_7, (ATerm) ATmakeAppl(sym_Keys_1, e_6));
                r_6 = t;
                t = term_j_11;
                t_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATmakeAppl(sym_Op_2, g_7, (ATerm) ATmakeAppl(sym_Keys_1, e_6)));
                t = j_5(t_6, r_6, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm o_11 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_11) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Op_2, g_7, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm y_74 (ATerm), ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          ATerm v_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_7(t);
              ;
              LocalPopChoice(x_11);
            }
          else
            {
              t = v_11;
            }
          return(t);
        }
        t = y_74(t);
        t = SRTS_all(k_2, t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = SRTS_some(u_7, t);
      }
    return(t);
  }
  t = u_7(t);
  return(t);
}
ATerm k_5 (ATerm x_20, ATerm y_20, ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  w_7 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_20, y_20);
        t = y_5(x_20, y_20, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_12 = ATgetFirst((ATermList) t);
            v_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_11);
        t = SSL_table_put(x_20, y_20, v_7);
        t = (ATerm) ATmakeAppl(sym__3, x_20, y_20, v_7);
      }
    else
      {
        t = y_11;
        t = SSL_table_remove(x_20, y_20);
        t = (ATerm) ATmakeAppl(sym__2, x_20, y_20);
      }
    t = w_7;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm x_7 = NULL,z_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  c_8 = t;
  t = f_72(t);
  b_8 = t;
  {
    ATerm c_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_8 = NULL;
        t = term_f_12;
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_8, term_f_12);
        t = y_5(b_8, e_8, t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = c_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_7 = ATgetFirst((ATermList) t);
        x_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_12;
    d_8 = t;
    t = SSL_table_put(b_8, d_8, x_7);
    t = z_7;
    {
      ATerm n_2 (ATerm t)
      {
        ATerm f_8 = NULL;
        f_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_8, f_8);
        t = k_5(b_8, f_8, t);
        return(t);
      }
      t = map_1_0(n_2, t);
      t = c_8;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm g_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_85(t);
      t = c_85(t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = g_12;
      t = c_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  ATerm k_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  z_8 = t;
  t = e_72(t);
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_8, term_f_12);
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_9 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_12 = ATgetArgument(t, 0);
            ATerm n_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_12;
        j_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_8, term_f_12);
        t = y_5(k_8, j_9, t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = (ATerm) ATempty;
      }
    a_9 = t;
    t = term_f_12;
    b_9 = t;
    t = (ATerm) ATinsert(CheckATermList(a_9), (ATerm) ATempty);
    c_9 = t;
    t = SSL_table_put(k_8, b_9, c_9);
    t = z_8;
  }
  return(t);
}
ATerm scope_2_0 (ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = end_scope_1_0(g_72, t);
    return(t);
  }
  t = begin_scope_1_0(g_72, t);
  t = restore_always_2_0(h_72, p_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm o_12 = t;
  if((PushChoice() == 0))
    {
      ATerm p_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = CheckCons_0_0(t);
          ;
          LocalPopChoice(q_12);
        }
      else
        {
          t = p_12;
          {
            ATerm c_10 = NULL,f_10 = NULL,h_10 = NULL;
            c_10 = t;
            if(match_cons(t, sym_Op_2))
              {
                f_10 = ATgetArgument(t, 0);
                h_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_10;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            t = c_10;
            t = h_5(h_10, t);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_12;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,v_9 = NULL;
  ATerm s_2 (ATerm t)
  {
    ATerm y_9 = NULL,z_9 = NULL,b_10 = NULL;
    y_9 = t;
    t = a_72(t);
    if(((v_9 != NULL) && (v_9 != t)))
      _fail(t);
    else
      v_9 = t;
    t = b_72(t);
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    t = term_o_9;
    z_9 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_3, term_r_12, q_9, v_9);
    b_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_9, (ATerm) ATmakeAppl(sym_Defined_3, term_r_12, q_9, v_9));
    t = l_5(t_2, z_9, b_10, t);
    t = y_9;
    t = manytd_1_0(v_2, t);
    return(t);
  }
  t = scope_2_0(r_2, s_2, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(y_10, z_10, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm b_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(b_12, d_12, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(h_12, i_12, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(a_13, b_13, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(d_13, e_13, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,p_10 = NULL,q_10 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      p_10 = ATgetArgument(t, 2);
      {
        ATerm y_2 (ATerm t)
        {
          ATerm x_10 = NULL;
          t = m_10;
          t = foldr_3_0(r_3, u_3, c_4, t);
          x_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_10, x_10);
          return(t);
        }
        t = p_10;
        t = check_constructors_p__2_0(y_2, e_3, t);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          l_10 = ATgetArgument(t, 0);
          m_10 = ATgetArgument(t, 1);
          p_10 = ATgetArgument(t, 2);
          q_10 = ATgetArgument(t, 3);
          {
            ATerm i_4 (ATerm t)
            {
              ATerm s_11 = NULL,w_11 = NULL;
              t = m_10;
              t = foldr_3_0(k_4, l_4, n_4, t);
              s_11 = t;
              t = p_10;
              t = foldr_3_0(o_4, p_4, r_4, t);
              w_11 = t;
              t = (ATerm) ATmakeAppl(sym__3, l_10, s_11, w_11);
              return(t);
            }
            t = q_10;
            t = check_constructors_p__2_0(i_4, j_4, t);
          }
        }
      else
        {
          ATerm s_4 (ATerm t)
          {
            ATerm v_12 = NULL,w_12 = NULL;
            t = not_null(m_10);
            t = foldr_3_0(v_4, w_4, x_4, t);
            v_12 = t;
            t = not_null(p_10);
            t = foldr_3_0(y_4, z_4, a_5, t);
            w_12 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_10), v_12, w_12);
            return(t);
          }
          if(match_cons(t, sym_RDefT_4))
            {
              if(((l_10 != NULL) && (l_10 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_10 = ATgetArgument(t, 0);
              if(((m_10 != NULL) && (m_10 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                m_10 = ATgetArgument(t, 1);
              if(((p_10 != NULL) && (p_10 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                p_10 = ATgetArgument(t, 2);
              q_10 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = q_10;
          t = check_constructors_p__2_0(s_4, u_4, t);
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,d_14 = NULL,e_14 = NULL;
  a_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_14 = ATgetFirst((ATermList) t);
          e_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_6 = NULL,i_7 = NULL,j_7 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(a_14);
            z_6 = t;
            t = d_14;
            t = a_84(t);
            i_7 = t;
            t = e_14;
            t = filter_1_0(a_84, t);
            j_7 = t;
            t = (ATerm) ATinsert(CheckATermList(j_7), i_7);
            a_1 = t;
            t = SSLsetAnnotations(a_1, z_6);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = e_14;
            t = filter_1_0(a_84, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm i_72 (ATerm), ATerm k_20, ATerm i_20, ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,m_14 = NULL,n_14 = NULL,u_14 = NULL,v_14 = NULL;
  n_14 = t;
  t = i_72(t);
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_14, k_20, i_20);
  t = z_5(j_14, k_20, i_20, t);
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_14 = NULL;
        t = term_f_12;
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_14, term_f_12);
        t = y_5(j_14, w_14, t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_14 = ATgetFirst((ATermList) t);
        m_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_12;
    u_14 = t;
    t = (ATerm) ATinsert(CheckATermList(m_14), (ATerm) ATinsert(CheckATermList(k_14), k_20));
    v_14 = t;
    t = SSL_table_put(j_14, u_14, v_14);
    t = n_14;
  }
  return(t);
}
ATerm foldr_3_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,h_15 = NULL,i_15 = NULL;
  b_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_15;
      t = w_82(t);
    }
  else
    {
      ATerm n_15 = NULL,p_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_15 = ATgetFirst((ATermList) t);
          i_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_15;
      t = y_82(t);
      n_15 = t;
      t = i_15;
      t = foldr_3_0(w_82, x_82, y_82, t);
      p_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_15, p_15);
      t = x_82(t);
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(m_16, n_16, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm b_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      b_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(b_17, d_17, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm s_15 = NULL,v_15 = NULL,w_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  w_15 = t;
  if(match_cons(t, sym_Overlay_3))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
      s_15 = ATgetArgument(t, 2);
      {
        ATerm h_16 = NULL,j_16 = NULL,k_16 = NULL;
        t = a_16;
        t = foldr_3_0(b_5, e_5, f_5, t);
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, z_15, (ATerm) ATmakeAppl(sym_Keys_1, h_16));
        j_16 = t;
        t = term_i_13;
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, z_15, (ATerm) ATmakeAppl(sym_Keys_1, h_16)), term_i_13);
        t = l_5(i_5, j_16, k_16, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, z_15, a_16, s_15);
      }
    }
  else
    {
      ATerm j_13 = t;
      int k_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_OpDeclInj_1))
            {
              ATerm l_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(k_13);
          t = w_15;
        }
      else
        {
          t = j_13;
          if(match_cons(t, sym_OpDecl_2))
            {
              z_15 = ATgetArgument(t, 0);
              a_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_16;
          if(match_cons(t, sym_FunType_2))
            {
              b_16 = ATgetArgument(t, 0);
              v_15 = ATgetArgument(t, 1);
              {
                ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
                t = b_16;
                t = foldr_3_0(v_5, w_5, a_6, t);
                y_16 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, z_15, (ATerm) ATmakeAppl(sym_Keys_1, y_16));
                z_16 = t;
                t = term_n_13;
                a_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, z_15, (ATerm) ATmakeAppl(sym_Keys_1, y_16)), term_n_13);
                t = l_5(c_6, z_16, a_17, t);
                t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_15, (ATerm) ATmakeAppl(sym_FunType_2, b_16, v_15));
              }
            }
          else
            {
              ATerm g_17 = NULL,i_17 = NULL;
              if(match_cons(t, sym_ConstType_1))
                {
                  b_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, z_15, term_o_13);
              g_17 = t;
              t = term_q_13;
              i_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, z_15, term_o_13), term_q_13);
              t = l_5(d_6, g_17, i_17, t);
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_15, (ATerm) ATmakeAppl(sym_ConstType_1, b_16));
            }
        }
    }
  return(t);
}
ATerm m_5 (ATerm i_18, ATerm k_18, ATerm l_18, ATerm t)
{
  ATerm j_17 = NULL,m_17 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(i_18), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_10), term_v_10))), term_s_13);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = k_18;
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = k_18;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = l_18;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_17 = NULL,y_7 = NULL,a_8 = NULL;
        t = (ATerm) ATempty;
        y_7 = t;
        t = term_t_10;
        a_8 = t;
        t = term_d_11;
        t = j_5(a_8, y_7, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_13) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            r_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_17;
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = (ATerm) ATempty;
      }
    j_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(i_18), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_v_10), term_v_10), term_v_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_10), term_v_10))), term_s_13));
    t = conc_0_0(t);
    m_17 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, l_18)), (ATerm) ATmakeAppl(sym_Overlays_1, k_18)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, m_17)))));
  }
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm s_17 = NULL,u_17 = NULL,v_17 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
        {
          ATerm x_13 = ATgetFirst((ATermList) w_13);
          if(match_cons(x_13, sym_Signature_1))
            {
              ATerm z_13 = ATgetArgument(x_13, 0);
              if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
                {
                  ATerm b_14 = ATgetFirst((ATermList) z_13);
                  if(match_cons(b_14, sym_Constructors_1))
                    {
                      s_17 = ATgetArgument(b_14, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_14 = (ATerm) ATgetNext((ATermList) z_13);
                    if(((ATgetType(c_14) != AT_LIST) || !(ATisEmpty(c_14))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm y_13 = (ATerm) ATgetNext((ATermList) w_13);
            if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
              {
                ATerm f_14 = ATgetFirst((ATermList) y_13);
                if(match_cons(f_14, sym_Overlays_1))
                  {
                    u_17 = ATgetArgument(f_14, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm g_14 = (ATerm) ATgetNext((ATermList) y_13);
                  if(((ATgetType(g_14) == AT_LIST) && !(ATisEmpty(g_14))))
                    {
                      ATerm h_14 = ATgetFirst((ATermList) g_14);
                      if(match_cons(h_14, sym_Strategies_1))
                        {
                          v_17 = ATgetArgument(h_14, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_14 = (ATerm) ATgetNext((ATermList) g_14);
                        if(((ATgetType(i_14) != AT_LIST) || !(ATisEmpty(i_14))))
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
  t = m_5(s_17, u_17, v_17, t);
  return(t);
}
ATerm n_5 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm w_17 = NULL;
  t = SSL_fputc(y_41, z_41);
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_17);
  return(t);
}
ATerm o_5 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm x_17 = NULL;
  t = SSL_write_term_to_stream_text(m_45, n_45);
  x_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_17);
  return(t);
}
ATerm q_5 (ATerm l_92 (ATerm), ATerm x_464, ATerm q_45, ATerm t)
{
  ATerm y_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_464, term_l_14);
  t = t_5(t);
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_17, q_45);
  t = l_92(t);
  t = fclose_0_0(t);
  t = q_45;
  return(t);
}
ATerm p_5 (ATerm i_45, ATerm j_45, ATerm t)
{
  ATerm z_17 = NULL;
  t = SSL_write_term_to_stream_baf(i_45, j_45);
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_17);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(match_cons(o_14, sym_Stream_1))
        {
          c_18 = ATgetArgument(o_14, 0);
        }
      else
        _fail(t);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(c_18, d_18, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm e_18 = NULL,h_18 = NULL,j_18 = NULL,p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(match_cons(p_14, sym_Stream_1))
        {
          p_18 = ATgetArgument(p_14, 0);
        }
      else
        _fail(t);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(p_18, q_18, t);
  e_18 = t;
  t = term_q_14;
  h_18 = t;
  t = e_18;
  if(match_cons(t, sym_Stream_1))
    {
      j_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, e_18);
  t = n_5(h_18, j_18, t);
  return(t);
}
ATerm output_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  t = u_96(t);
  b_18 = t;
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_14;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        t = term_x_14;
      }
    a_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_18, b_18);
    {
      ATerm y_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_15;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, a_18, b_18);
          LocalPopChoice(z_14);
          if(match_cons(t, sym__2))
            {
              ATerm c_15 = ATgetArgument(t, 0);
              ATerm d_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_5(f_6, a_18, b_18, t);
        }
      else
        {
          t = y_14;
          if(match_cons(t, sym__2))
            {
              ATerm e_15 = ATgetArgument(t, 0);
              ATerm f_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_5(h_6, a_18, b_18, t);
        }
    }
  }
  return(t);
}
ATerm i_21 (ATerm y_19, ATerm t)
{
  t = SSL_fclose(y_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_20 = NULL,z_20 = NULL;
  z_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_20 = ATgetArgument(t, 0);
      {
        ATerm g_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_20);
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = g_15;
            t = i_21(z_20, t);
          }
      }
    }
  else
    {
      t = i_21(z_20, t);
    }
  return(t);
}
ATerm r_5 (ATerm o_45, ATerm t)
{
  t = SSL_read_term_from_stream(o_45);
  return(t);
}
ATerm s_5 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm l_21 = NULL;
  t = SSL_fopen(a_42, b_42);
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_21 = NULL;
  t = SSL_stdin_stream();
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_21 = NULL;
  t = SSL_stdout_stream();
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_21 = NULL;
  t = SSL_stderr_stream();
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_21);
  return(t);
}
ATerm h_23 (ATerm e_22, ATerm t)
{
  ATerm f_22 = NULL;
  t = SSL_explode_term(e_22);
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_15 = ATgetArgument(t, 1);
        if(((ATgetType(l_15) == AT_LIST) && !(ATisEmpty(l_15))))
          {
            f_22 = ATgetFirst((ATermList) l_15);
            {
              ATerm m_15 = (ATerm) ATgetNext((ATermList) l_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm i_23 (ATerm i_22, ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,s_22 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(m_22);
  p_22 = t;
  t = i_22;
  if(match_cons(t, sym_Path_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_22, l_22);
  c_1 = t;
  t = SSLsetAnnotations(c_1, p_22);
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(n_22, o_22, t);
  return(t);
}
ATerm j_23 (ATerm u_22, ATerm v_22, ATerm w_22, ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,c_23 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(w_22);
  z_22 = t;
  t = SSL_is_string(u_22);
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_23, v_22);
  d_1 = t;
  t = SSLsetAnnotations(d_1, z_22);
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(x_22, y_22, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  e_23 = t;
  if(match_cons(t, sym__2))
    {
      f_23 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
      {
        ATerm o_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_23(e_23, t);
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = o_15;
            {
              ATerm r_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_23(f_23, g_23, e_23, t);
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = r_15;
                  t = j_23(f_23, g_23, e_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_23(e_23, t);
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_u_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_23 = NULL;
      n_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_23, term_c_16);
      t = t_5(t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      t = debug_1_0(i_6, t);
      _fail(t);
    }
  l_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(m_23, t);
  k_23 = t;
  t = l_23;
  t = fclose_0_0(t);
  t = k_23;
  return(t);
}
ATerm input_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = term_g_16;
    }
  t = ReadFromFile_0_0(t);
  t = v_96(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  p_23 = t;
  t = term_i_16;
  t = whoami_0_0(t);
  q_23 = t;
  t = term_t_9;
  s_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_16), q_23), term_l_16);
  t_23 = t;
  t = SSL_printnl(s_23, t_23);
  t = term_m_9;
  r_23 = t;
  t = SSL_exit(r_23);
  t = p_23;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm x_23 = NULL;
  x_23 = t;
  if(match_string(t, "-k"))
    {
      t = x_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_23;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm y_23 = NULL,e_24 = NULL,f_24 = NULL;
  y_23 = t;
  t = SSL_string_to_int(y_23);
  e_24 = t;
  t = term_p_16;
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, e_24);
  t = b_6(f_24, e_24, t);
  t = y_23;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_6, l_6, m_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  if(match_string(t, "-S"))
    {
      t = h_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_24;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  t = term_r_16;
  i_24 = t;
  t = term_l_9;
  j_24 = t;
  t = term_s_16;
  t = b_6(i_24, j_24, t);
  t = term_t_16;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  t = SSL_string_to_int(k_24);
  l_24 = t;
  t = term_r_16;
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, l_24);
  t = b_6(m_24, l_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_24);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL;
  t = term_w_16;
  n_24 = t;
  t = term_i_16;
  o_24 = t;
  t = term_x_16;
  t = b_6(n_24, o_24, t);
  t = term_c_17;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, o_6, p_6, t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = f_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_6, s_6, u_6, t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = Option_3_0(v_6, w_6, x_6, t);
          }
      }
    }
  return(t);
}
ATerm b_6 (ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm p_24 = NULL;
  t = term_n_17;
  p_24 = t;
  t = SSL_table_put(p_24, p_46, q_46);
  t = (ATerm) ATmakeAppl(sym__3, term_n_17, p_46, q_46);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
      t = term_i_16;
      t = i_0(t);
      w_24 = t;
      t = term_o_17;
      x_24 = t;
      t = term_p_17;
      y_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_17, term_p_17, w_24);
      t = z_5(x_24, y_24, w_24, t);
      _fail(t);
    }
  else
    {
      ATerm b_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_24 = ATgetFirst((ATermList) t);
          v_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_24;
      t = d_0(t);
      t = term_i_16;
      t = g_0(t);
      b_25 = t;
      t = (ATerm) ATinsert(CheckATermList(v_24), b_25);
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  if(match_string(t, "-o"))
    {
      t = d_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_25;
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  e_25 = t;
  t = term_t_14;
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_14, e_25);
  t = b_6(f_25, e_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_25);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_6, a_7, b_7, t);
  return(t);
}
ATerm z_5 (ATerm s_20, ATerm t_20, ATerm r_20, ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_20, t_20);
  {
    ATerm t_17 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_18 = ATgetArgument(t, 0);
            ATerm m_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_20, t_20);
        t = y_5(s_20, t_20, t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = t_17;
        t = (ATerm) ATempty;
      }
    i_25 = t;
    t = (ATerm) ATinsert(CheckATermList(i_25), r_20);
    j_25 = t;
    t = SSL_table_put(s_20, t_20, j_25);
    t = h_25;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
      t = term_i_16;
      t = r_0(t);
      u_25 = t;
      t = term_o_17;
      v_25 = t;
      t = term_p_17;
      w_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_17, term_p_17, u_25);
      t = z_5(v_25, w_25, u_25, t);
      _fail(t);
    }
  else
    {
      ATerm a_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_25 = ATgetFirst((ATermList) t);
          r_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_25 = ATgetFirst((ATermList) t);
          t_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_25;
      t = n_0(t);
      t = s_25;
      t = p_0(t);
      a_26 = t;
      t = (ATerm) ATinsert(CheckATermList(t_25), a_26);
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  if(match_string(t, "-i"))
    {
      t = c_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_26;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  t = term_f_16;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_16, d_26);
  t = b_6(e_26, d_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_26);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_n_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_7, d_7, e_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_16;
  t = whoami_0_0(t);
  f_26 = t;
  t = term_t_9;
  h_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_18), f_26);
  i_26 = t;
  t = SSL_printnl(h_26, i_26);
  t = term_m_9;
  g_26 = t;
  t = SSL_exit(g_26);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm u_5 (ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_32, w_32);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      t = SSL_addr(v_32, w_32);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_26;
      t = u_82(t);
    }
  else
    {
      ATerm p_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_26 = ATgetFirst((ATermList) t);
          m_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_26;
      t = foldr_2_0(u_82, v_82, t);
      p_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_26, p_26);
      t = v_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(s_8, t_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_26 = NULL,o_8 = NULL,p_8 = NULL;
  t = times_0_0(t);
  p_8 = t;
  t = SSL_explode_term(p_8);
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8;
  t = foldr_2_0(h_7, k_7, t);
  s_26 = t;
  t = SSL_TicksToSeconds(s_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym__2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_27;
        if((e_27 != t))
          {
            _fail(t);
          }
        t = d_27;
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATmakeAppl(sym__2, e_27, f_27);
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_27, f_27);
              ;
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              t = SSL_gtr(e_27, f_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_27, f_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm j_27 = NULL;
  j_27 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL;
        t = term_r_16;
        t = get_config_0_0(t);
        l_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_27, term_m_9);
        t = geq_0_0(t);
        t = j_27;
        t = v_93(t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = j_27;
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL;
  t = run_time_0_0(t);
  n_27 = t;
  t = term_i_16;
  t = whoami_0_0(t);
  o_27 = t;
  t = term_t_9;
  q_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_19), n_27), term_b_19), o_27);
  r_27 = t;
  t = SSL_printnl(q_27, r_27);
  t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_19), n_27), term_b_19), o_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_9;
  s_27 = t;
  t = SSL_exit(s_27);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_28;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_28 = ATgetArgument(t, 0);
          {
            ATerm n_9 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(b_28);
            n_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_28);
            r_1 = t;
            t = SSLsetAnnotations(r_1, n_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_28;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      t = fetch_1_0(m_7, t);
    }
  t = l_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_28 = ATgetFirst((ATermList) t);
      f_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_28 = NULL,k_28 = NULL;
        ATerm o_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_28)), not_null(k_28));
          return(t);
        }
        t = f_28;
        t = l_0(t);
        if(((j_28 != NULL) && (j_28 != t)))
          _fail(t);
        else
          j_28 = t;
        t = e_28;
        t = k_0(t);
        if(((k_28 != NULL) && (k_28 != t)))
          _fail(t);
        else
          k_28 = t;
        t = f_28;
        t = reverse_acc_2_0(k_0, o_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_16;
      t = l_0(t);
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,e_2 = NULL;
  q_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_28);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_28);
  e_2 = t;
  t = SSLsetAnnotations(e_2, o_28);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_28), term_g_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      t = fetch_1_0(p_7, t);
    }
  t = term_k_19;
  t = echo_0_0(t);
  t = term_o_17;
  m_28 = t;
  t = term_p_17;
  n_28 = t;
  t = term_l_19;
  t = y_5(m_28, n_28, t);
  t = reverse_acc_2_0(_id, q_7, t);
  t = map_1_0(r_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm q_29 (ATerm t)
  {
    ATerm m_29 = NULL,o_29 = NULL,p_29 = NULL;
    m_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_29 = ATgetFirst((ATermList) t);
        p_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_9 = NULL,e_10 = NULL,g_2 = NULL;
          t = SSLgetAnnotations(m_29);
          x_9 = t;
          t = o_29;
          t = m_76(t);
          e_10 = t;
          t = (ATerm) ATinsert(CheckATermList(p_29), e_10);
          g_2 = t;
          t = SSLsetAnnotations(g_2, x_9);
          ;
          LocalPopChoice(n_19);
        }
      else
        {
          t = m_19;
          {
            ATerm b_11 = NULL,e_11 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(m_29);
            b_11 = t;
            t = p_29;
            t = q_29(t);
            e_11 = t;
            t = (ATerm) ATinsert(CheckATermList(e_11), o_29);
            h_2 = t;
            t = SSLsetAnnotations(h_2, b_11);
          }
        }
    }
    return(t);
  }
  t = q_29(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_19 = ATgetFirst((ATermList) t);
                ATerm r_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_29;
          }
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = (ATerm) ATinsert(ATempty, u_29);
      }
    v_29 = t;
    t = term_x_14;
    w_29 = t;
    t = SSL_printnl(w_29, v_29);
    t = u_29;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm x_5 (ATerm q_39, ATerm r_39, ATerm t)
{
  t = SSL_strcat(q_39, r_39);
  return(t);
}
ATerm debug_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  a_30 = t;
  t = j_92(t);
  b_30 = t;
  t = term_t_9;
  c_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_30), b_30);
  d_30 = t;
  t = SSL_printnl(c_30, d_30);
  t = a_30;
  return(t);
}
ATerm map_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm w_30 (ATerm t)
  {
    ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
    t_30 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_30;
      }
    else
      {
        ATerm p_11 = NULL,t_11 = NULL,u_11 = NULL,m_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_30 = ATgetFirst((ATermList) t);
            v_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_30);
        p_11 = t;
        t = u_30;
        t = c_76(t);
        t_11 = t;
        t = v_30;
        t = w_30(t);
        u_11 = t;
        t = (ATerm) ATinsert(CheckATermList(u_11), t_11);
        m_2 = t;
        t = SSLsetAnnotations(m_2, p_11);
      }
    return(t);
  }
  t = w_30(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_31 = NULL;
      k_31 = t;
      t = SSL_is_string(k_31);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      {
        ATerm x_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_7, t);
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = x_19;
            {
              ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
              q_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_31 = ATgetArgument(t, 0);
                  t = r_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_31 = ATgetArgument(t, 0);
                      t = r_31;
                      {
                        ATerm a_20 = t;
                        int b_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_20);
                          }
                        else
                          {
                            t = a_20;
                            t = debug_1_0(t_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_31 = NULL,x_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_31 = ATgetArgument(t, 0);
                          s_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_31;
                      t = eval_config_0_0(t);
                      w_31 = t;
                      t = s_31;
                      t = eval_config_0_0(t);
                      x_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
                      t = x_5(w_31, x_31, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_5 (ATerm j_22, ATerm k_22, ATerm t)
{
  t = SSL_table_get(j_22, k_22);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL;
  b_32 = t;
  t = term_n_17;
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, b_32);
  t = y_5(c_32, b_32, t);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_32 = NULL,e_32 = NULL;
        t = eval_config_0_0(t);
        d_32 = t;
        t = term_n_17;
        e_32 = t;
        t = SSL_table_put(e_32, b_32, d_32);
        t = d_32;
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
      }
  }
  return(t);
}
ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL;
  t = term_e_20;
  h_32 = t;
  t = term_i_16;
  i_32 = t;
  t = term_f_20;
  t = b_6(h_32, i_32, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm j_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  t = term_e_20;
  l_32 = t;
  t = term_i_16;
  m_32 = t;
  t = term_f_20;
  t = b_6(l_32, m_32, t);
  t = term_h_20;
  j_32 = t;
  t = term_i_16;
  k_32 = t;
  t = term_j_20;
  t = b_6(j_32, k_32, t);
  t = term_l_20;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_8, h_8, i_8, t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = Option_3_0(j_8, l_8, m_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,o_2 = NULL;
  s_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_32 = ATgetFirst((ATermList) t);
      p_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_32);
  n_32 = t;
  t = o_32;
  t = v_58(t);
  q_32 = t;
  t = p_32;
  t = w_58(t);
  r_32 = t;
  t = (ATerm) ATinsert(CheckATermList(r_32), q_32);
  o_2 = t;
  t = SSLsetAnnotations(o_2, n_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,d_33 = NULL,e_33 = NULL,g_33 = NULL,h_33 = NULL,q_2 = NULL;
  z_32 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_20;
        t = o_98(t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
      }
    t = z_32;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_33 = ATgetFirst((ATermList) t);
        e_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_32);
    a_33 = t;
    t = term_r_18;
    h_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_18, d_33);
    t = b_6(h_33, d_33, t);
    t = e_33;
    {
      ATerm r_33 (ATerm t)
      {
        ATerm w_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_33 = NULL;
                k_33 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_33;
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                t = o_98(t);
                t = Cons_2_0(_id, r_33, t);
              }
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = w_20;
            {
              ATerm n_33 = NULL,o_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_33 = ATgetFirst((ATermList) t);
                  o_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_33), (ATerm) ATmakeAppl(sym_Undefined_1, n_33));
            }
          }
        return(t);
      }
      t = r_33(t);
      g_33 = t;
      t = (ATerm) ATinsert(CheckATermList(g_33), (ATerm) ATmakeAppl(sym_Program_1, d_33));
      q_2 = t;
      t = SSLsetAnnotations(q_2, a_33);
    }
  }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  if(match_string(t, "--help"))
    {
      t = e_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_34;
        }
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL;
  t = term_f_19;
  f_34 = t;
  t = term_i_16;
  g_34 = t;
  t = term_f_21;
  t = b_6(f_34, g_34, t);
  t = term_g_21;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm v_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,c_34 = NULL,d_34 = NULL;
  y_33 = t;
  t = term_o_17;
  a_34 = t;
  t = term_p_17;
  c_34 = t;
  t = (ATerm) ATempty;
  d_34 = t;
  t = SSL_table_put(a_34, c_34, d_34);
  t = y_33;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm j_21 = t;
      int k_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_98(t);
          ;
          LocalPopChoice(k_21);
        }
      else
        {
          t = j_21;
          {
            ATerm m_21 = t;
            int n_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_8, r_8, u_8, t);
                ;
                LocalPopChoice(n_21);
              }
            else
              {
                t = m_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_8, t);
    {
      ATerm r_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_34 = NULL;
          n_34 = t;
          {
            ATerm t_21 = t;
            int u_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_12 = NULL;
                t = n_34;
                {
                  ATerm v_21 = t;
                  int w_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_21);
                    }
                  else
                    {
                      t = v_21;
                      t = fetch_1_0(v_8, t);
                    }
                  t = n_34;
                  t = default_system_usage_0_0(t);
                  t = term_l_9;
                  t_12 = t;
                  t = SSL_exit(t_12);
                }
                ;
                LocalPopChoice(u_21);
              }
            else
              {
                t = t_21;
                {
                  ATerm c_13 = NULL;
                  t = term_e_20;
                  t = get_config_0_0(t);
                  t = n_34;
                  t = default_system_about_0_0(t);
                  t = term_l_9;
                  c_13 = t;
                  t = SSL_exit(c_13);
                }
              }
          }
          ;
          LocalPopChoice(s_21);
        }
      else
        {
          t = r_21;
          {
            ATerm x_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
                ATerm w_8 (ATerm t)
                {
                  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,h_4 = NULL;
                  t_34 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_34);
                  r_34 = t;
                  t = s_34;
                  if(((w_33 != NULL) && (w_33 != t)))
                    _fail(t);
                  else
                    w_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_34);
                  h_4 = t;
                  t = SSLsetAnnotations(h_4, r_34);
                  return(t);
                }
                t = fetch_1_0(w_8, t);
                t = term_t_9;
                p_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_33)), term_z_21);
                q_34 = t;
                t = SSL_printnl(p_34, q_34);
                t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_33)), term_z_21));
                t = default_system_usage_0_0(t);
                t = term_m_9;
                o_34 = t;
                t = SSL_exit(o_34);
                ;
                LocalPopChoice(y_21);
              }
            else
              {
                t = x_21;
              }
          }
        }
      x_33 = t;
      t = term_o_17;
      z_33 = t;
      t = SSL_table_destroy(z_33);
      t = x_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
  t = parse_options_1_0(n_96, t);
  y_34 = t;
  t = term_a_22;
  b_35 = t;
  t = SSL_table_create(b_35);
  t = term_a_22;
  z_34 = t;
  t = term_b_22;
  a_35 = t;
  t = SSL_table_put(z_34, a_35, y_34);
  t = y_34;
  t = p_96(t);
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_96, t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_22);
            }
          else
            {
              t = g_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm t_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = t_22;
            {
              ATerm b_23 = t;
              int d_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_9, e_9, f_9, t);
                  ;
                  LocalPopChoice(d_23);
                }
              else
                {
                  t = b_23;
                  {
                    ATerm o_23 = t;
                    int u_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(u_23);
                      }
                    else
                      {
                        t = o_23;
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
ATerm y_8 (ATerm t)
{
  t = input_1_0(g_9, t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  t = term_a_15;
  d_35 = t;
  t = term_i_16;
  e_35 = t;
  t = term_v_23;
  t = b_6(d_35, e_35, t);
  t = term_w_23;
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = output_1_0(CheckConstructors_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_8, default_usage_0_0, _id, y_8, t);
  return(t);
}
