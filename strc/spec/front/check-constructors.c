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
ATerm term_u_23;
ATerm term_t_23;
ATerm term_n_23;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_o_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_r_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
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
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_e_12;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
void init_constant_terms (void)
{
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_n_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Var_1, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_s_10, (ATerm) ATempty);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlay", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Keys_1, term_k_9);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_10);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, term_n_13);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_k_9);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_9);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_e_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_m_17);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_e_16);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_e_16);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_c_19, term_e_16);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_e_16);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm at_end_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_2 (ATerm v_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm j_5 (ATerm c_21, ATerm d_21, ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm g_5 (ATerm y_32, ATerm z_32, ATerm);
ATerm while_not_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm h_5 (ATerm g_19, ATerm);
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
ATerm manytd_1_0 (ATerm t_74 (ATerm), ATerm);
ATerm k_5 (ATerm w_20, ATerm x_20, ATerm);
ATerm end_scope_1_0 (ATerm a_72 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm z_71 (ATerm), ATerm);
ATerm scope_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm check_constructors_p__2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm);
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
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm l_5 (ATerm d_72 (ATerm), ATerm j_20, ATerm h_20, ATerm);
ATerm foldr_3_0 (ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm m_5 (ATerm h_18, ATerm j_18, ATerm k_18, ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm n_5 (ATerm u_41, ATerm v_41, ATerm);
ATerm o_5 (ATerm i_45, ATerm j_45, ATerm);
ATerm q_5 (ATerm g_92 (ATerm), ATerm x_460, ATerm m_45, ATerm);
ATerm p_5 (ATerm e_45, ATerm f_45, ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm output_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm h_21 (ATerm x_19, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_5 (ATerm k_45, ATerm);
ATerm s_5 (ATerm w_41, ATerm x_41, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_23 (ATerm d_22, ATerm);
ATerm h_23 (ATerm h_22, ATerm k_22, ATerm l_22, ATerm);
ATerm i_23 (ATerm t_22, ATerm u_22, ATerm v_22, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm q_96 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_6 (ATerm l_46, ATerm m_46, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_5 (ATerm r_20, ATerm s_20, ATerm q_20, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_5 (ATerm s_32, ATerm t_32, ATerm);
ATerm foldr_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm j_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_93 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm need_help_1_0 (ATerm g_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_5 (ATerm m_39, ATerm n_39, ATerm);
ATerm debug_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm x_5 (ATerm i_22, ATerm j_22, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_58 (ATerm), ATerm s_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_98 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm parse_options_1_0 (ATerm i_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_76 (ATerm), ATerm t)
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
        t = n_76(t);
      }
    return(t);
  }
  t = p_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL;
  o_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_0;
    }
  else
    {
      ATerm a_0 (ATerm t)
      {
        t = not_null(q_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_0 = ATgetFirst((ATermList) t);
          if(((q_0 != NULL) && (q_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_0;
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
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = z_1;
              return(t);
            }
            t = y_1;
            t = at_end_1_0(r_0, t);
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
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
ATerm j_5 (ATerm c_21, ATerm d_21, ATerm t)
{
  ATerm l_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_21, d_21);
  t = x_5(c_21, d_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_2 = ATgetFirst((ATermList) t);
      {
        ATerm j_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_2;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_k_9;
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
  t = t_5(g_3, h_3, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_l_9;
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
  t = term_n_9;
  q_1 = t;
  t = term_o_9;
  s_1 = t;
  t = term_q_9;
  t = j_5(s_1, q_1, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("l_0", 0, ATtrue)))
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
  t = term_s_9;
  b_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_10), a_3), term_f_10), x_2), term_c_10), term_z_9), w_2), term_v_9), u_2), term_t_9);
  d_3 = t;
  t = SSL_printnl(b_3, d_3);
  t = (ATerm) ATmakeAppl(sym_Op_2, x_2, z_2);
  return(t);
}
ATerm g_5 (ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(y_32, z_32);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      t = SSL_subtr(y_32, z_32);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_85(t);
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        t = u_85(t);
        t = j_3(t);
      }
    return(t);
  }
  t = j_3(t);
  return(t);
}
ATerm for_3_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  t = w_85(t);
  t = while_not_2_0(x_85, y_85, t);
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
      ATerm q_10 = ATgetArgument(t, 0);
      if(((ATgetType(q_10) != AT_INT) || (ATgetInt((ATermInt) q_10) != 0)))
        _fail(t);
      {
        ATerm r_10 = ATgetArgument(t, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, o_3, term_l_9);
  t = geq_0_0(t);
  t = term_l_9;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, term_l_9);
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
  t = term_k_9;
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
  t = t_5(b_4, f_4, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm h_5 (ATerm g_19, ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  w_3 = t;
  t = g_19;
  t = foldr_3_0(e_1, f_1, h_1, t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, term_u_10);
  t = copy_0_0(t);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, y_3, term_u_10));
  t = GenerateCheckRule_0_0(t);
  {
    ATerm z_10 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL,u_1 = NULL,c_2 = NULL;
        t = (ATerm) ATempty;
        u_1 = t;
        t = term_s_10;
        c_2 = t;
        t = term_c_11;
        t = j_5(c_2, u_1, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_11) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            g_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_4;
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATempty;
      }
    x_3 = t;
    t = (ATerm) ATempty;
    z_3 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_11, (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, y_3, term_u_10))));
    a_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_11, (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, y_3, term_u_10)))));
    t = l_5(i_1, z_3, a_4, t);
    t = w_3;
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_k_9;
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
  t = t_5(i_3, l_3, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_k_9;
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
  t = t_5(q_4, t_4, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm f_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(f_6, i_6, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,m_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym_Op_2))
    {
      f_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,d_4 = NULL,e_4 = NULL;
        t = m_7;
        t = foldr_3_0(k_1, l_1, o_1, t);
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, f_7, (ATerm) ATmakeAppl(sym_Keys_1, c_3));
        d_4 = t;
        t = term_i_11;
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATmakeAppl(sym_Op_2, f_7, (ATerm) ATmakeAppl(sym_Keys_1, c_3)));
        t = j_5(e_4, d_4, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm j_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_11) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, f_7, (ATerm) ATempty);
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_4 = NULL,c_5 = NULL,d_5 = NULL;
              t = m_7;
              t = foldr_3_0(t_1, x_1, b_2, t);
              m_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, f_7, (ATerm) ATmakeAppl(sym_Keys_1, m_4));
              c_5 = t;
              t = term_i_11;
              d_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATmakeAppl(sym_Op_2, f_7, (ATerm) ATmakeAppl(sym_Keys_1, m_4)));
              t = j_5(d_5, c_5, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm m_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_11) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, f_7, (ATerm) ATempty);
              ;
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
              {
                ATerm d_6 = NULL,q_6 = NULL,s_6 = NULL;
                t = m_7;
                t = foldr_3_0(d_2, f_2, j_2, t);
                d_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, f_7, (ATerm) ATmakeAppl(sym_Keys_1, d_6));
                q_6 = t;
                t = term_i_11;
                s_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATmakeAppl(sym_Op_2, f_7, (ATerm) ATmakeAppl(sym_Keys_1, d_6)));
                t = j_5(s_6, q_6, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm n_11 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_11) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Op_2, f_7, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm t_74 (ATerm), ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          ATerm u_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_7(t);
              ;
              LocalPopChoice(w_11);
            }
          else
            {
              t = u_11;
            }
          return(t);
        }
        t = t_74(t);
        t = SRTS_all(k_2, t);
        ;
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = SRTS_some(t_7, t);
      }
    return(t);
  }
  t = t_7(t);
  return(t);
}
ATerm k_5 (ATerm w_20, ATerm x_20, ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  v_7 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
        t = x_5(w_20, x_20, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_11 = ATgetFirst((ATermList) t);
            u_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_11);
        t = SSL_table_put(w_20, x_20, u_7);
        t = (ATerm) ATmakeAppl(sym__3, w_20, x_20, u_7);
      }
    else
      {
        t = x_11;
        t = SSL_table_remove(w_20, x_20);
        t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
      }
    t = v_7;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,y_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  b_8 = t;
  t = a_72(t);
  a_8 = t;
  {
    ATerm b_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL;
        t = term_e_12;
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_8, term_e_12);
        t = x_5(a_8, d_8, t);
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = b_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_7 = ATgetFirst((ATermList) t);
        w_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_12;
    c_8 = t;
    t = SSL_table_put(a_8, c_8, w_7);
    t = y_7;
    {
      ATerm n_2 (ATerm t)
      {
        ATerm e_8 = NULL;
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_8, e_8);
        t = k_5(a_8, e_8, t);
        return(t);
      }
      t = map_1_0(n_2, t);
      t = b_8;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm f_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_84(t);
      t = x_84(t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = f_12;
      t = x_84(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  y_8 = t;
  t = z_71(t);
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, term_e_12);
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_12 = ATgetArgument(t, 0);
            ATerm m_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_12;
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, term_e_12);
        t = x_5(j_8, i_9, t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATempty;
      }
    z_8 = t;
    t = term_e_12;
    a_9 = t;
    t = (ATerm) ATinsert(CheckATermList(z_8), (ATerm) ATempty);
    b_9 = t;
    t = SSL_table_put(j_8, a_9, b_9);
    t = y_8;
  }
  return(t);
}
ATerm scope_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = end_scope_1_0(b_72, t);
    return(t);
  }
  t = begin_scope_1_0(b_72, t);
  t = restore_always_2_0(c_72, p_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm n_12 = t;
  if((PushChoice() == 0))
    {
      ATerm o_12 = t;
      int p_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = CheckCons_0_0(t);
          ;
          LocalPopChoice(p_12);
        }
      else
        {
          t = o_12;
          {
            ATerm b_10 = NULL,e_10 = NULL,g_10 = NULL;
            b_10 = t;
            if(match_cons(t, sym_Op_2))
              {
                e_10 = ATgetArgument(t, 0);
                g_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_10;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            t = b_10;
            t = h_5(g_10, t);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_12;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,u_9 = NULL;
  ATerm s_2 (ATerm t)
  {
    ATerm x_9 = NULL,y_9 = NULL,a_10 = NULL;
    x_9 = t;
    t = v_71(t);
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    t = w_71(t);
    if(((p_9 != NULL) && (p_9 != t)))
      _fail(t);
    else
      p_9 = t;
    t = term_n_9;
    y_9 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_3, term_q_12, p_9, u_9);
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATmakeAppl(sym_Defined_3, term_q_12, p_9, u_9));
    t = l_5(t_2, y_9, a_10, t);
    t = x_9;
    t = manytd_1_0(v_2, t);
    return(t);
  }
  t = scope_2_0(r_2, s_2, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL;
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(x_10, y_10, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm a_12 = NULL,c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(a_12, c_12, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(g_12, h_12, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(z_12, a_13, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(c_13, d_13, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
      o_10 = ATgetArgument(t, 2);
      {
        ATerm y_2 (ATerm t)
        {
          ATerm w_10 = NULL;
          t = l_10;
          t = foldr_3_0(r_3, u_3, c_4, t);
          w_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_10, w_10);
          return(t);
        }
        t = o_10;
        t = check_constructors_p__2_0(y_2, e_3, t);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          k_10 = ATgetArgument(t, 0);
          l_10 = ATgetArgument(t, 1);
          o_10 = ATgetArgument(t, 2);
          p_10 = ATgetArgument(t, 3);
          {
            ATerm i_4 (ATerm t)
            {
              ATerm r_11 = NULL,v_11 = NULL;
              t = l_10;
              t = foldr_3_0(k_4, l_4, n_4, t);
              r_11 = t;
              t = o_10;
              t = foldr_3_0(o_4, p_4, r_4, t);
              v_11 = t;
              t = (ATerm) ATmakeAppl(sym__3, k_10, r_11, v_11);
              return(t);
            }
            t = p_10;
            t = check_constructors_p__2_0(i_4, j_4, t);
          }
        }
      else
        {
          ATerm s_4 (ATerm t)
          {
            ATerm u_12 = NULL,v_12 = NULL;
            t = not_null(l_10);
            t = foldr_3_0(v_4, w_4, x_4, t);
            u_12 = t;
            t = not_null(o_10);
            t = foldr_3_0(y_4, z_4, a_5, t);
            v_12 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_10), u_12, v_12);
            return(t);
          }
          if(match_cons(t, sym_RDefT_4))
            {
              if(((k_10 != NULL) && (k_10 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_10 = ATgetArgument(t, 0);
              if(((l_10 != NULL) && (l_10 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                l_10 = ATgetArgument(t, 1);
              if(((o_10 != NULL) && (o_10 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                o_10 = ATgetArgument(t, 2);
              p_10 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = p_10;
          t = check_constructors_p__2_0(s_4, u_4, t);
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,c_14 = NULL,d_14 = NULL;
  z_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_13;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_14 = ATgetFirst((ATermList) t);
          d_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 = NULL,h_7 = NULL,i_7 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(z_13);
            y_6 = t;
            t = c_14;
            t = v_83(t);
            h_7 = t;
            t = d_14;
            t = filter_1_0(v_83, t);
            i_7 = t;
            t = (ATerm) ATinsert(CheckATermList(i_7), h_7);
            a_1 = t;
            t = SSLsetAnnotations(a_1, y_6);
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = d_14;
            t = filter_1_0(v_83, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm d_72 (ATerm), ATerm j_20, ATerm h_20, ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,l_14 = NULL,m_14 = NULL,t_14 = NULL,u_14 = NULL;
  m_14 = t;
  t = d_72(t);
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_14, j_20, h_20);
  t = y_5(i_14, j_20, h_20, t);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_14 = NULL;
        t = term_e_12;
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_14, term_e_12);
        t = x_5(i_14, v_14, t);
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_14 = ATgetFirst((ATermList) t);
        l_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_12;
    t_14 = t;
    t = (ATerm) ATinsert(CheckATermList(l_14), (ATerm) ATinsert(CheckATermList(j_14), j_20));
    u_14 = t;
    t = SSL_table_put(i_14, t_14, u_14);
    t = m_14;
  }
  return(t);
}
ATerm foldr_3_0 (ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,g_15 = NULL,h_15 = NULL;
  a_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_15;
      t = r_82(t);
    }
  else
    {
      ATerm m_15 = NULL,o_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_15 = ATgetFirst((ATermList) t);
          h_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_15;
      t = t_82(t);
      m_15 = t;
      t = h_15;
      t = foldr_3_0(r_82, s_82, t_82, t);
      o_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_15, o_15);
      t = s_82(t);
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(l_16, m_16, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm a_17 = NULL,c_17 = NULL;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(a_17, c_17, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm r_15 = NULL,u_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
      r_15 = ATgetArgument(t, 2);
      {
        ATerm g_16 = NULL,i_16 = NULL,j_16 = NULL;
        t = z_15;
        t = foldr_3_0(b_5, e_5, f_5, t);
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, y_15, (ATerm) ATmakeAppl(sym_Keys_1, g_16));
        i_16 = t;
        t = term_h_13;
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, y_15, (ATerm) ATmakeAppl(sym_Keys_1, g_16)), term_h_13);
        t = l_5(i_5, i_16, j_16, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, y_15, z_15, r_15);
      }
    }
  else
    {
      if(match_cons(t, sym_OpDecl_2))
        {
          y_15 = ATgetArgument(t, 0);
          z_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_15;
      if(match_cons(t, sym_FunType_2))
        {
          a_16 = ATgetArgument(t, 0);
          u_15 = ATgetArgument(t, 1);
          {
            ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
            t = a_16;
            t = foldr_3_0(u_5, v_5, z_5, t);
            x_16 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, y_15, (ATerm) ATmakeAppl(sym_Keys_1, x_16));
            y_16 = t;
            t = term_j_13;
            z_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, y_15, (ATerm) ATmakeAppl(sym_Keys_1, x_16)), term_j_13);
            t = l_5(b_6, y_16, z_16, t);
            t = (ATerm) ATmakeAppl(sym_OpDecl_2, y_15, (ATerm) ATmakeAppl(sym_FunType_2, a_16, u_15));
          }
        }
      else
        {
          ATerm f_17 = NULL,h_17 = NULL;
          if(match_cons(t, sym_ConstType_1))
            {
              a_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, y_15, term_k_13);
          f_17 = t;
          t = term_m_13;
          h_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, y_15, term_k_13), term_m_13);
          t = l_5(c_6, f_17, h_17, t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, y_15, (ATerm) ATmakeAppl(sym_ConstType_1, a_16));
        }
    }
  return(t);
}
ATerm m_5 (ATerm h_18, ATerm j_18, ATerm k_18, ATerm t)
{
  ATerm i_17 = NULL,l_17 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(h_18), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_10), term_u_10))), term_o_13);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = j_18;
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = j_18;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = k_18;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_17 = NULL,x_7 = NULL,z_7 = NULL;
        t = (ATerm) ATempty;
        x_7 = t;
        t = term_s_10;
        z_7 = t;
        t = term_c_11;
        t = j_5(z_7, x_7, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_13) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            q_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_17;
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = (ATerm) ATempty;
      }
    i_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(h_18), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_u_10), term_u_10), term_u_10))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_10), term_u_10))), term_o_13));
    t = conc_0_0(t);
    l_17 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, k_18)), (ATerm) ATmakeAppl(sym_Overlays_1, j_18)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, l_17)))));
  }
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm r_17 = NULL,t_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
        {
          ATerm t_13 = ATgetFirst((ATermList) s_13);
          if(match_cons(t_13, sym_Signature_1))
            {
              ATerm v_13 = ATgetArgument(t_13, 0);
              if(((ATgetType(v_13) == AT_LIST) && !(ATisEmpty(v_13))))
                {
                  ATerm w_13 = ATgetFirst((ATermList) v_13);
                  if(match_cons(w_13, sym_Constructors_1))
                    {
                      r_17 = ATgetArgument(w_13, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_13 = (ATerm) ATgetNext((ATermList) v_13);
                    if(((ATgetType(x_13) != AT_LIST) || !(ATisEmpty(x_13))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm u_13 = (ATerm) ATgetNext((ATermList) s_13);
            if(((ATgetType(u_13) == AT_LIST) && !(ATisEmpty(u_13))))
              {
                ATerm y_13 = ATgetFirst((ATermList) u_13);
                if(match_cons(y_13, sym_Overlays_1))
                  {
                    t_17 = ATgetArgument(y_13, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm a_14 = (ATerm) ATgetNext((ATermList) u_13);
                  if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
                    {
                      ATerm b_14 = ATgetFirst((ATermList) a_14);
                      if(match_cons(b_14, sym_Strategies_1))
                        {
                          u_17 = ATgetArgument(b_14, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm e_14 = (ATerm) ATgetNext((ATermList) a_14);
                        if(((ATgetType(e_14) != AT_LIST) || !(ATisEmpty(e_14))))
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
  t = m_5(r_17, t_17, u_17, t);
  return(t);
}
ATerm n_5 (ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm v_17 = NULL;
  t = SSL_fputc(u_41, v_41);
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_17);
  return(t);
}
ATerm o_5 (ATerm i_45, ATerm j_45, ATerm t)
{
  ATerm w_17 = NULL;
  t = SSL_write_term_to_stream_text(i_45, j_45);
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_17);
  return(t);
}
ATerm q_5 (ATerm g_92 (ATerm), ATerm x_460, ATerm m_45, ATerm t)
{
  ATerm x_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_460, term_f_14);
  t = open_stream_0_0(t);
  x_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_17, m_45);
  t = g_92(t);
  t = fclose_0_0(t);
  t = m_45;
  return(t);
}
ATerm p_5 (ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm y_17 = NULL;
  t = SSL_write_term_to_stream_baf(e_45, f_45);
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_17);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      if(match_cons(g_14, sym_Stream_1))
        {
          b_18 = ATgetArgument(g_14, 0);
        }
      else
        _fail(t);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(b_18, c_18, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm d_18 = NULL,g_18 = NULL,i_18 = NULL,o_18 = NULL,p_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_14 = ATgetArgument(t, 0);
      if(match_cons(h_14, sym_Stream_1))
        {
          o_18 = ATgetArgument(h_14, 0);
        }
      else
        _fail(t);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(o_18, p_18, t);
  d_18 = t;
  t = term_k_14;
  g_18 = t;
  t = d_18;
  if(match_cons(t, sym_Stream_1))
    {
      i_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_14, d_18);
  t = n_5(g_18, i_18, t);
  return(t);
}
ATerm output_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  t = p_96(t);
  a_18 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_14;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = term_q_14;
      }
    z_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_17, a_18);
    {
      ATerm r_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_14;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, z_17, a_18);
          LocalPopChoice(s_14);
          if(match_cons(t, sym__2))
            {
              ATerm x_14 = ATgetArgument(t, 0);
              ATerm y_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_5(e_6, z_17, a_18, t);
        }
      else
        {
          t = r_14;
          if(match_cons(t, sym__2))
            {
              ATerm z_14 = ATgetArgument(t, 0);
              ATerm b_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_5(g_6, z_17, a_18, t);
        }
    }
  }
  return(t);
}
ATerm h_21 (ATerm x_19, ATerm t)
{
  t = SSL_fclose(x_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_20 = NULL,y_20 = NULL;
  y_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_20 = ATgetArgument(t, 0);
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_20);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            t = h_21(y_20, t);
          }
      }
    }
  else
    {
      t = h_21(y_20, t);
    }
  return(t);
}
ATerm r_5 (ATerm k_45, ATerm t)
{
  t = SSL_read_term_from_stream(k_45);
  return(t);
}
ATerm s_5 (ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm k_21 = NULL;
  t = SSL_fopen(w_41, x_41);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_21 = NULL;
  t = SSL_stdin_stream();
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_21 = NULL;
  t = SSL_stdout_stream();
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_21 = NULL;
  t = SSL_stderr_stream();
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_21);
  return(t);
}
ATerm g_23 (ATerm d_22, ATerm t)
{
  ATerm e_22 = NULL;
  t = SSL_explode_term(d_22);
  if(match_cons(t, sym__2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_15 = ATgetArgument(t, 1);
        if(((ATgetType(f_15) == AT_LIST) && !(ATisEmpty(f_15))))
          {
            e_22 = ATgetFirst((ATermList) f_15);
            {
              ATerm i_15 = (ATerm) ATgetNext((ATermList) f_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm h_23 (ATerm h_22, ATerm k_22, ATerm l_22, ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,r_22 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(l_22);
  o_22 = t;
  t = h_22;
  if(match_cons(t, sym_Path_1))
    {
      r_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_22, k_22);
  c_1 = t;
  t = SSLsetAnnotations(c_1, o_22);
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(m_22, n_22, t);
  return(t);
}
ATerm i_23 (ATerm t_22, ATerm u_22, ATerm v_22, ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,b_23 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(v_22);
  y_22 = t;
  t = SSL_is_string(t_22);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_23, u_22);
  d_1 = t;
  t = SSLsetAnnotations(d_1, y_22);
  if(match_cons(t, sym__2))
    {
      w_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(w_22, x_22, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_15 = ATgetArgument(t, 0);
      ATerm k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_23 = t;
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
      {
        ATerm l_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_23(d_23, t);
            ;
            LocalPopChoice(n_15);
          }
        else
          {
            t = l_15;
            {
              ATerm p_15 = t;
              int q_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_23(e_23, f_23, d_23, t);
                  ;
                  LocalPopChoice(q_15);
                }
              else
                {
                  t = p_15;
                  t = i_23(e_23, f_23, d_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_23(d_23, t);
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  ATerm t_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23 = NULL;
      m_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_23, term_w_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = t_15;
      t = debug_1_0(h_6, t);
      _fail(t);
    }
  k_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(l_23, t);
  j_23 = t;
  t = k_23;
  t = fclose_0_0(t);
  t = j_23;
  return(t);
}
ATerm input_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm x_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = x_15;
      t = term_d_16;
    }
  t = ReadFromFile_0_0(t);
  t = q_96(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  o_23 = t;
  t = term_e_16;
  t = whoami_0_0(t);
  p_23 = t;
  t = term_s_9;
  r_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_16), p_23), term_f_16);
  s_23 = t;
  t = SSL_printnl(r_23, s_23);
  t = term_l_9;
  q_23 = t;
  t = SSL_exit(q_23);
  t = o_23;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  if(match_string(t, "-k"))
    {
      t = w_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_23;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm x_23 = NULL,d_24 = NULL,e_24 = NULL;
  x_23 = t;
  t = SSL_string_to_int(x_23);
  d_24 = t;
  t = term_k_16;
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, d_24);
  t = a_6(e_24, d_24, t);
  t = x_23;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  if(match_string(t, "-S"))
    {
      t = g_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_24;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  t = term_o_16;
  h_24 = t;
  t = term_k_9;
  i_24 = t;
  t = term_p_16;
  t = a_6(h_24, i_24, t);
  t = term_q_16;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_r_16;
  return(t);
}
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  t = SSL_string_to_int(j_24);
  k_24 = t;
  t = term_o_16;
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, k_24);
  t = a_6(l_24, k_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_24);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  t = term_t_16;
  m_24 = t;
  t = term_e_16;
  n_24 = t;
  t = term_u_16;
  t = a_6(m_24, n_24, t);
  t = term_v_16;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_6, n_6, o_6, t);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = b_17;
      {
        ATerm e_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_6, r_6, t_6, t);
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = e_17;
            t = Option_3_0(u_6, v_6, w_6, t);
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm o_24 = NULL;
  t = term_j_17;
  o_24 = t;
  t = SSL_table_put(o_24, l_46, m_46);
  t = (ATerm) ATmakeAppl(sym__3, term_j_17, l_46, m_46);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
      t = term_e_16;
      t = f_0(t);
      v_24 = t;
      t = term_k_17;
      w_24 = t;
      t = term_m_17;
      x_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_m_17, v_24);
      t = y_5(w_24, x_24, v_24, t);
      _fail(t);
    }
  else
    {
      ATerm a_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_24 = ATgetFirst((ATermList) t);
          u_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_24;
      t = b_0(t);
      t = term_e_16;
      t = d_0(t);
      a_25 = t;
      t = (ATerm) ATinsert(CheckATermList(u_24), a_25);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  if(match_string(t, "-o"))
    {
      t = c_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_25;
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL;
  d_25 = t;
  t = term_p_14;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_14, d_25);
  t = a_6(e_25, d_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_25);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, z_6, a_7, t);
  return(t);
}
ATerm y_5 (ATerm r_20, ATerm s_20, ATerm q_20, ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            ATerm e_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
        t = x_5(r_20, s_20, t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = (ATerm) ATempty;
      }
    h_25 = t;
    t = (ATerm) ATinsert(CheckATermList(h_25), q_20);
    i_25 = t;
    t = SSL_table_put(r_20, s_20, i_25);
    t = g_25;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
      t = term_e_16;
      t = n_0(t);
      t_25 = t;
      t = term_k_17;
      u_25 = t;
      t = term_m_17;
      v_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_m_17, t_25);
      t = y_5(u_25, v_25, t_25, t);
      _fail(t);
    }
  else
    {
      ATerm z_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_25 = ATgetFirst((ATermList) t);
          q_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_25 = ATgetFirst((ATermList) t);
          s_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_25;
      t = k_0(t);
      t = r_25;
      t = m_0(t);
      z_25 = t;
      t = (ATerm) ATinsert(CheckATermList(s_25), z_25);
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  if(match_string(t, "-i"))
    {
      t = b_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_26;
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL;
  c_26 = t;
  t = term_c_16;
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_16, c_26);
  t = a_6(d_26, c_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_26);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_7, c_7, d_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_16;
  t = whoami_0_0(t);
  e_26 = t;
  t = term_s_9;
  g_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_18), e_26);
  h_26 = t;
  t = SSL_printnl(g_26, h_26);
  t = term_l_9;
  f_26 = t;
  t = SSL_exit(f_26);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_5 (ATerm s_32, ATerm t_32, ATerm t)
{
  ATerm n_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_32, t_32);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = n_18;
      t = SSL_addr(s_32, t_32);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_26;
      t = p_82(t);
    }
  else
    {
      ATerm o_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_26 = ATgetFirst((ATermList) t);
          l_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_26;
      t = foldr_2_0(p_82, q_82, t);
      o_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_26, o_26);
      t = q_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(r_8, s_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_26 = NULL,n_8 = NULL,o_8 = NULL;
  t = times_0_0(t);
  o_8 = t;
  t = SSL_explode_term(o_8);
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8;
  t = foldr_2_0(g_7, j_7, t);
  r_26 = t;
  t = SSL_TicksToSeconds(r_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_27;
        if((d_27 != t))
          {
            _fail(t);
          }
        t = c_27;
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = (ATerm) ATmakeAppl(sym__2, d_27, e_27);
        {
          ATerm u_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_27, e_27);
              ;
              LocalPopChoice(v_18);
            }
          else
            {
              t = u_18;
              t = SSL_gtr(d_27, e_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_27, e_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_27 = NULL;
        t = term_o_16;
        t = get_config_0_0(t);
        k_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_27, term_l_9);
        t = geq_0_0(t);
        t = i_27;
        t = q_93(t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = i_27;
      }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,p_27 = NULL,q_27 = NULL;
  t = run_time_0_0(t);
  m_27 = t;
  t = term_e_16;
  t = whoami_0_0(t);
  n_27 = t;
  t = term_s_9;
  p_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_18), m_27), term_y_18), n_27);
  q_27 = t;
  t = SSL_printnl(p_27, q_27);
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_18), m_27), term_y_18), n_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_9;
  r_27 = t;
  t = SSL_exit(r_27);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  a_28 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_28;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_27 = ATgetArgument(t, 0);
          {
            ATerm m_9 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(a_28);
            m_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_27);
            r_1 = t;
            t = SSLsetAnnotations(r_1, m_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_28;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      t = fetch_1_0(l_7, t);
    }
  t = g_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_28 = ATgetFirst((ATermList) t);
      e_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_28 = NULL,j_28 = NULL;
        ATerm n_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_28)), not_null(j_28));
          return(t);
        }
        t = e_28;
        t = i_0(t);
        if(((i_28 != NULL) && (i_28 != t)))
          _fail(t);
        else
          i_28 = t;
        t = d_28;
        t = g_0(t);
        if(((j_28 != NULL) && (j_28 != t)))
          _fail(t);
        else
          j_28 = t;
        t = e_28;
        t = reverse_acc_2_0(g_0, n_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_16;
      t = i_0(t);
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,e_2 = NULL;
  p_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_28);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_28);
  e_2 = t;
  t = SSLsetAnnotations(e_2, n_28);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_28), term_d_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = fetch_1_0(o_7, t);
    }
  t = term_h_19;
  t = echo_0_0(t);
  t = term_k_17;
  l_28 = t;
  t = term_m_17;
  m_28 = t;
  t = term_i_19;
  t = x_5(l_28, m_28, t);
  t = reverse_acc_2_0(_id, p_7, t);
  t = map_1_0(q_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm p_29 (ATerm t)
  {
    ATerm l_29 = NULL,n_29 = NULL,o_29 = NULL;
    l_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_29 = ATgetFirst((ATermList) t);
        o_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_19 = t;
      int k_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_9 = NULL,d_10 = NULL,g_2 = NULL;
          t = SSLgetAnnotations(l_29);
          w_9 = t;
          t = n_29;
          t = h_76(t);
          d_10 = t;
          t = (ATerm) ATinsert(CheckATermList(o_29), d_10);
          g_2 = t;
          t = SSLsetAnnotations(g_2, w_9);
          ;
          LocalPopChoice(k_19);
        }
      else
        {
          t = j_19;
          {
            ATerm a_11 = NULL,d_11 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(l_29);
            a_11 = t;
            t = o_29;
            t = p_29(t);
            d_11 = t;
            t = (ATerm) ATinsert(CheckATermList(d_11), n_29);
            h_2 = t;
            t = SSLsetAnnotations(h_2, a_11);
          }
        }
    }
    return(t);
  }
  t = p_29(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
  t_29 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_19 = ATgetFirst((ATermList) t);
                ATerm o_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_29;
          }
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATinsert(ATempty, t_29);
      }
    u_29 = t;
    t = term_q_14;
    v_29 = t;
    t = SSL_printnl(v_29, u_29);
    t = t_29;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_5 (ATerm m_39, ATerm n_39, ATerm t)
{
  t = SSL_strcat(m_39, n_39);
  return(t);
}
ATerm debug_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  z_29 = t;
  t = e_92(t);
  a_30 = t;
  t = term_s_9;
  b_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_29), a_30);
  c_30 = t;
  t = SSL_printnl(b_30, c_30);
  t = z_29;
  return(t);
}
ATerm map_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm x_30 (ATerm t)
  {
    ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
    s_30 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_30;
      }
    else
      {
        ATerm o_11 = NULL,s_11 = NULL,t_11 = NULL,m_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_30 = ATgetFirst((ATermList) t);
            u_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_30);
        o_11 = t;
        t = t_30;
        t = x_75(t);
        s_11 = t;
        t = u_30;
        t = x_30(t);
        t_11 = t;
        t = (ATerm) ATinsert(CheckATermList(t_11), s_11);
        m_2 = t;
        t = SSLsetAnnotations(m_2, o_11);
      }
    return(t);
  }
  t = x_30(t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_31 = NULL;
      j_31 = t;
      t = SSL_is_string(j_31);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_7, t);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            {
              ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
              p_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_31 = ATgetArgument(t, 0);
                  t = q_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_31 = ATgetArgument(t, 0);
                      t = q_31;
                      {
                        ATerm w_19 = t;
                        int y_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_19);
                          }
                        else
                          {
                            t = w_19;
                            t = debug_1_0(s_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_31 = NULL,w_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_31 = ATgetArgument(t, 0);
                          r_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_31;
                      t = eval_config_0_0(t);
                      v_31 = t;
                      t = r_31;
                      t = eval_config_0_0(t);
                      w_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_31, w_31);
                      t = w_5(v_31, w_31, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm x_5 (ATerm i_22, ATerm j_22, ATerm t)
{
  t = SSL_table_get(i_22, j_22);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  a_32 = t;
  t = term_j_17;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_17, a_32);
  t = x_5(b_32, a_32, t);
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_32 = NULL,d_32 = NULL;
        t = eval_config_0_0(t);
        c_32 = t;
        t = term_j_17;
        d_32 = t;
        t = SSL_table_put(d_32, a_32, c_32);
        t = c_32;
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
      }
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL;
  t = term_b_20;
  g_32 = t;
  t = term_e_16;
  h_32 = t;
  t = term_c_20;
  t = a_6(g_32, h_32, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  t = term_b_20;
  k_32 = t;
  t = term_e_16;
  l_32 = t;
  t = term_c_20;
  t = a_6(k_32, l_32, t);
  t = term_e_20;
  i_32 = t;
  t = term_e_16;
  j_32 = t;
  t = term_f_20;
  t = a_6(i_32, j_32, t);
  t = term_g_20;
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_8, g_8, h_8, t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      t = Option_3_0(i_8, k_8, l_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_58 (ATerm), ATerm s_58 (ATerm), ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,o_2 = NULL;
  r_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_32 = ATgetFirst((ATermList) t);
      o_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_32);
  m_32 = t;
  t = n_32;
  t = r_58(t);
  p_32 = t;
  t = o_32;
  t = s_58(t);
  q_32 = t;
  t = (ATerm) ATinsert(CheckATermList(q_32), p_32);
  o_2 = t;
  t = SSLsetAnnotations(o_2, m_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,f_33 = NULL,g_33 = NULL,q_2 = NULL;
  a_33 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_20;
        t = j_98(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
      }
    t = a_33;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_33 = ATgetFirst((ATermList) t);
        d_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_33);
    b_33 = t;
    t = term_m_18;
    g_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_18, c_33);
    t = a_6(g_33, c_33, t);
    t = d_33;
    {
      ATerm q_33 (ATerm t)
      {
        ATerm p_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_33 = NULL;
                j_33 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_33;
                ;
                LocalPopChoice(z_20);
              }
            else
              {
                t = v_20;
                t = j_98(t);
                t = Cons_2_0(_id, q_33, t);
              }
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = p_20;
            {
              ATerm m_33 = NULL,n_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_33 = ATgetFirst((ATermList) t);
                  n_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_33), (ATerm) ATmakeAppl(sym_Undefined_1, m_33));
            }
          }
        return(t);
      }
      t = q_33(t);
      f_33 = t;
      t = (ATerm) ATinsert(CheckATermList(f_33), (ATerm) ATmakeAppl(sym_Program_1, c_33));
      q_2 = t;
      t = SSLsetAnnotations(q_2, b_33);
    }
  }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  if(match_string(t, "--help"))
    {
      t = d_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_34;
        }
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  t = term_c_19;
  e_34 = t;
  t = term_e_16;
  f_34 = t;
  t = term_a_21;
  t = a_6(e_34, f_34, t);
  t = term_b_21;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm u_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  x_33 = t;
  t = term_k_17;
  a_34 = t;
  t = term_m_17;
  b_34 = t;
  t = (ATerm) ATempty;
  c_34 = t;
  t = SSL_table_put(a_34, b_34, c_34);
  t = x_33;
  {
    ATerm m_8 (ATerm t)
    {
      ATerm f_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_98(t);
          ;
          LocalPopChoice(g_21);
        }
      else
        {
          t = f_21;
          {
            ATerm i_21 = t;
            int j_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_8, q_8, t_8, t);
                ;
                LocalPopChoice(j_21);
              }
            else
              {
                t = i_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_8, t);
    {
      ATerm l_21 = t;
      int m_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_34 = NULL;
          m_34 = t;
          {
            ATerm q_21 = t;
            int r_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_12 = NULL;
                t = m_34;
                {
                  ATerm s_21 = t;
                  int t_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_21);
                    }
                  else
                    {
                      t = s_21;
                      t = fetch_1_0(u_8, t);
                    }
                  t = m_34;
                  t = default_system_usage_0_0(t);
                  t = term_k_9;
                  s_12 = t;
                  t = SSL_exit(s_12);
                }
                ;
                LocalPopChoice(r_21);
              }
            else
              {
                t = q_21;
                {
                  ATerm b_13 = NULL;
                  t = term_b_20;
                  t = get_config_0_0(t);
                  t = m_34;
                  t = default_system_about_0_0(t);
                  t = term_k_9;
                  b_13 = t;
                  t = SSL_exit(b_13);
                }
              }
          }
          ;
          LocalPopChoice(m_21);
        }
      else
        {
          t = l_21;
          {
            ATerm u_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
                ATerm v_8 (ATerm t)
                {
                  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,h_4 = NULL;
                  s_34 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_34);
                  q_34 = t;
                  t = r_34;
                  if(((v_33 != NULL) && (v_33 != t)))
                    _fail(t);
                  else
                    v_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_34);
                  h_4 = t;
                  t = SSLsetAnnotations(h_4, q_34);
                  return(t);
                }
                t = fetch_1_0(v_8, t);
                t = term_s_9;
                o_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_33)), term_w_21);
                p_34 = t;
                t = SSL_printnl(o_34, p_34);
                t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_33)), term_w_21));
                t = default_system_usage_0_0(t);
                t = term_l_9;
                n_34 = t;
                t = SSL_exit(n_34);
                ;
                LocalPopChoice(v_21);
              }
            else
              {
                t = u_21;
              }
          }
        }
      w_33 = t;
      t = term_k_17;
      z_33 = t;
      t = SSL_table_destroy(z_33);
      t = w_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  t = parse_options_1_0(i_96, t);
  x_34 = t;
  t = term_x_21;
  a_35 = t;
  t = SSL_table_create(a_35);
  t = term_x_21;
  y_34 = t;
  t = term_y_21;
  z_34 = t;
  t = SSL_table_put(y_34, z_34, x_34);
  t = x_34;
  t = k_96(t);
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_96, t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        {
          ATerm b_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_22);
            }
          else
            {
              t = b_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm s_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_9, d_9, e_9, t);
                  ;
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = s_22;
                  {
                    ATerm a_23 = t;
                    int c_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(c_23);
                      }
                    else
                      {
                        t = a_23;
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
ATerm x_8 (ATerm t)
{
  t = input_1_0(f_9, t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL;
  t = term_w_14;
  c_35 = t;
  t = term_e_16;
  d_35 = t;
  t = term_n_23;
  t = a_6(c_35, d_35, t);
  t = term_t_23;
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = output_1_0(CheckConstructors_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_8, default_usage_0_0, _id, x_8, t);
  return(t);
}
