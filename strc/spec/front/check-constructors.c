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
ATerm term_r_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_s_22;
ATerm term_v_21;
ATerm term_p_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_b_20;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_n_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_k_12;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_z_0;
void init_constant_terms (void)
{
  ATprotect(&(term_z_0));
  term_z_0 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_u_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Var_1, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATempty);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlay", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Keys_1, term_s_9);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_11);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, term_t_13);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_s_16, term_s_9);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_9);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_k_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_n_17, term_o_17);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_k_16);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_k_16);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_k_16);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_k_16);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("barf: ", 0, ATtrue));
}
ATerm debug_1_0 (ATerm x_103 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_2 (ATerm b_2, ATerm);
ATerm conc_0_0 (ATerm);
ATerm j_5 (ATerm w_32, ATerm x_32, ATerm);
ATerm u_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm g_5 (ATerm s_44, ATerm t_44, ATerm);
ATerm while_not_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm h_5 (ATerm a_31, ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm y_1 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm n_2 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm k_5 (ATerm q_32, ATerm r_32, ATerm);
ATerm end_scope_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm scope_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm check_constructors_p__2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm u_3 (ATerm);
ATerm k_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm filter_1_0 (ATerm o_95 (ATerm), ATerm);
ATerm l_5 (ATerm x_83 (ATerm), ATerm d_32, ATerm b_32, ATerm);
ATerm foldr_3_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm m_5 (ATerm b_30, ATerm d_30, ATerm e_30, ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm n_5 (ATerm o_53, ATerm p_53, ATerm);
ATerm o_5 (ATerm c_57, ATerm d_57, ATerm);
ATerm q_5 (ATerm z_103 (ATerm), ATerm q_490, ATerm g_57, ATerm);
ATerm p_5 (ATerm y_56, ATerm z_56, ATerm);
ATerm i_6 (ATerm);
ATerm l_6 (ATerm);
ATerm output_1_0 (ATerm i_108 (ATerm), ATerm);
ATerm v_19 (ATerm p_19, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_5 (ATerm e_57, ATerm);
ATerm s_5 (ATerm q_53, ATerm r_53, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_21 (ATerm f_20, ATerm);
ATerm j_21 (ATerm j_20, ATerm k_20, ATerm l_20, ATerm);
ATerm k_21 (ATerm t_20, ATerm w_20, ATerm x_20, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_6 (ATerm f_58, ATerm g_58, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_5 (ATerm l_32, ATerm m_32, ATerm k_32, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_5 (ATerm m_44, ATerm n_44, ATerm);
ATerm foldr_2_0 (ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_7 (ATerm);
ATerm n_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_105 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm need_help_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_5 (ATerm g_51, ATerm h_51, ATerm);
ATerm map_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm x_5 (ATerm c_34, ATerm d_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_7 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_110 (ATerm), ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm parse_options_1_0 (ATerm b_110 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,q_0 = NULL,r_0 = NULL;
  n_0 = t;
  t = x_103(t);
  o_0 = t;
  t = term_z_0;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_0), o_0);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = n_0;
  return(t);
}
ATerm at_end_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm s_1 = NULL,u_1 = NULL,w_1 = NULL;
    w_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_1 = ATgetFirst((ATermList) t);
        u_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_1 = NULL,f_1 = NULL,d_1 = NULL;
          t = SSLgetAnnotations(w_1);
          a_1 = t;
          t = u_1;
          t = x_1(t);
          f_1 = t;
          t = (ATerm) ATinsert(CheckATermList(f_1), s_1);
          d_1 = t;
          t = SSLsetAnnotations(d_1, a_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_1;
        t = h_88(t);
      }
    return(t);
  }
  t = x_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_0 = NULL,v_0 = NULL,w_0 = NULL;
  t_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_0;
    }
  else
    {
      ATerm p_0 (ATerm t)
      {
        t = not_null(w_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((v_0 != NULL) && (v_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            v_0 = ATgetFirst((ATermList) t);
          if(((w_0 != NULL) && (w_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(v_0);
      t = at_end_1_0(p_0, t);
    }
  return(t);
}
ATerm u_2 (ATerm b_2, ATerm t)
{
  ATerm c_2 = NULL;
  t = SSL_explode_term(b_2);
  if(match_cons(t, sym__2))
    {
      ATerm m_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL,l_2 = NULL;
  if(((l_2 != NULL) && (l_2 != t)))
    _fail(t);
  else
    l_2 = t;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = not_null(g_2);
              return(t);
            }
            t = not_null(e_2);
            t = at_end_1_0(s_0, t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            t = u_2(not_null(l_2), t);
          }
      }
    }
  else
    {
      t = u_2(not_null(l_2), t);
    }
  return(t);
}
ATerm j_5 (ATerm w_32, ATerm x_32, ATerm t)
{
  ATerm x_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_32, x_32);
  t = x_5(w_32, x_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_2 = ATgetFirst((ATermList) t);
      {
        ATerm r_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_2;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      n_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(n_3, p_3, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,o_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      e_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_u_9;
  o_1 = t;
  t = term_v_9;
  r_1 = t;
  t = term_x_9;
  t = j_5(r_1, o_1, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_9) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
      c_3 = ATgetArgument(t, 1);
      d_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_3;
  t = foldr_3_0(u_0, x_0, y_0, t);
  m_3 = t;
  t = SSL_int_to_string(m_3);
  i_3 = t;
  t = term_z_0;
  j_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_10), i_3), term_k_10), e_3), term_j_10), term_g_10), d_3), term_c_10), c_3), term_a_10);
  k_3 = t;
  t = SSL_printnl(j_3, k_3);
  t = (ATerm) ATmakeAppl(sym_Op_2, e_3, g_3);
  return(t);
}
ATerm g_5 (ATerm s_44, ATerm t_44, ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(s_44, t_44);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      t = SSL_subtr(s_44, t_44);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm q_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_97(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = q_10;
        t = n_97(t);
        t = q_3(t);
      }
    return(t);
  }
  t = q_3(t);
  return(t);
}
ATerm for_3_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm t)
{
  t = p_97(t);
  t = while_not_2_0(q_97, r_97, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_3, s_3, (ATerm) ATempty);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm t_3 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      if(((ATgetType(u_10) != AT_INT) || (ATgetInt((ATermInt) u_10) != 0)))
        _fail(t);
      {
        ATerm x_10 = ATgetArgument(t, 1);
      }
      t_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_3;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__3))
    {
      v_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
      y_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_3, term_t_9);
  t = geq_0_0(t);
  t = term_t_9;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, term_t_9);
  t = g_5(v_3, a_4, t);
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_3, w_3, (ATerm) ATinsert(CheckATermList(y_3), w_3));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(b_1, c_1, e_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(l_4, m_4, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm h_5 (ATerm a_31, ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,i_4 = NULL,j_4 = NULL;
  c_4 = t;
  t = a_31;
  t = foldr_3_0(h_1, i_1, j_1, t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, term_b_11);
  t = copy_0_0(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, e_4, term_b_11));
  t = GenerateCheckRule_0_0(t);
  {
    ATerm g_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL,v_1 = NULL,z_1 = NULL;
        t = (ATerm) ATempty;
        v_1 = t;
        t = term_z_10;
        z_1 = t;
        t = term_j_11;
        t = j_5(z_1, v_1, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_11) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            n_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_4;
        ;
        LocalPopChoice(i_11);
      }
    else
      {
        t = g_11;
        t = (ATerm) ATempty;
      }
    d_4 = t;
    t = (ATerm) ATempty;
    i_4 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_11, (ATerm) ATinsert(CheckATermList(d_4), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, e_4, term_b_11))));
    j_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_11, (ATerm) ATinsert(CheckATermList(d_4), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, e_4, term_b_11)))));
    t = l_5(l_1, i_4, j_4, t);
    t = c_4;
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm f_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(f_3, h_3, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(s_4, t_4, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(j_6, k_6, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,t_7 = NULL;
  l_7 = t;
  if(match_cons(t, sym_Op_2))
    {
      m_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 = NULL,x_3 = NULL,f_4 = NULL;
        t = t_7;
        t = foldr_3_0(n_1, p_1, q_1, t);
        y_2 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, m_7, (ATerm) ATmakeAppl(sym_Keys_1, y_2));
        x_3 = t;
        t = term_o_11;
        f_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_11, (ATerm) ATmakeAppl(sym_Op_2, m_7, (ATerm) ATmakeAppl(sym_Keys_1, y_2)));
        t = j_5(f_4, x_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm p_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_11) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, m_7, (ATerm) ATempty);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_4 = NULL,y_4 = NULL,c_5 = NULL;
              t = t_7;
              t = foldr_3_0(y_1, d_2, f_2, t);
              q_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, m_7, (ATerm) ATmakeAppl(sym_Keys_1, q_4));
              y_4 = t;
              t = term_o_11;
              c_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_o_11, (ATerm) ATmakeAppl(sym_Op_2, m_7, (ATerm) ATmakeAppl(sym_Keys_1, q_4)));
              t = j_5(c_5, y_4, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm t_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_11) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, m_7, (ATerm) ATempty);
              ;
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
              {
                ATerm d_6 = NULL,q_6 = NULL,v_6 = NULL;
                t = t_7;
                t = foldr_3_0(j_2, k_2, n_2, t);
                d_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, m_7, (ATerm) ATmakeAppl(sym_Keys_1, d_6));
                q_6 = t;
                t = term_o_11;
                v_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_11, (ATerm) ATmakeAppl(sym_Op_2, m_7, (ATerm) ATmakeAppl(sym_Keys_1, d_6)));
                t = j_5(v_6, q_6, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm u_11 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_11) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Op_2, m_7, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm x_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 (ATerm t)
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_8(t);
              ;
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
            }
          return(t);
        }
        t = n_86(t);
        t = SRTS_all(o_2, t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = x_11;
        t = SRTS_some(a_8, t);
      }
    return(t);
  }
  t = a_8(t);
  return(t);
}
ATerm k_5 (ATerm q_32, ATerm r_32, ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  c_8 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
        t = x_5(q_32, r_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_12 = ATgetFirst((ATermList) t);
            b_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_12);
        t = SSL_table_put(q_32, r_32, b_8);
        t = (ATerm) ATmakeAppl(sym__3, q_32, r_32, b_8);
      }
    else
      {
        t = d_12;
        t = SSL_table_remove(q_32, r_32);
        t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
      }
    t = c_8;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,f_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  if(((i_8 != NULL) && (i_8 != t)))
    _fail(t);
  else
    i_8 = t;
  t = u_83(t);
  if(((h_8 != NULL) && (h_8 != t)))
    _fail(t);
  else
    h_8 = t;
  {
    ATerm g_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 = NULL;
        t = term_k_12;
        k_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), term_k_12);
        t = x_5(not_null(h_8), k_8, t);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = g_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_8 != NULL) && (f_8 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_8 = ATgetFirst((ATermList) t);
        if(((d_8 != NULL) && (d_8 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          d_8 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_12;
    if(((j_8 != NULL) && (j_8 != t)))
      _fail(t);
    else
      j_8 = t;
    t = SSL_table_put(not_null(h_8), not_null(j_8), not_null(d_8));
    t = not_null(f_8);
    {
      ATerm p_2 (ATerm t)
      {
        ATerm l_8 = NULL;
        l_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), l_8);
        t = k_5(not_null(h_8), l_8, t);
        return(t);
      }
      t = map_1_0(p_2, t);
      t = not_null(i_8);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_96(t);
      t = q_96(t);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = q_96(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  f_9 = t;
  t = t_83(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_8, term_k_12);
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_12 = ATgetArgument(t, 0);
            ATerm s_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_12;
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_8, term_k_12);
        t = x_5(q_8, p_9, t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = (ATerm) ATempty;
      }
    g_9 = t;
    t = term_k_12;
    h_9 = t;
    t = (ATerm) ATinsert(CheckATermList(g_9), (ATerm) ATempty);
    i_9 = t;
    t = SSL_table_put(q_8, h_9, i_9);
    t = f_9;
  }
  return(t);
}
ATerm scope_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = end_scope_1_0(v_83, t);
    return(t);
  }
  t = begin_scope_1_0(v_83, t);
  t = restore_always_2_0(w_83, r_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm t_12 = t;
  if((PushChoice() == 0))
    {
      ATerm v_12 = t;
      int w_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = CheckCons_0_0(t);
          ;
          LocalPopChoice(w_12);
        }
      else
        {
          t = v_12;
          {
            ATerm i_10 = NULL,l_10 = NULL,n_10 = NULL;
            i_10 = t;
            if(match_cons(t, sym_Op_2))
              {
                l_10 = ATgetArgument(t, 0);
                n_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_10;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            t = i_10;
            t = h_5(n_10, t);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_12;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,b_10 = NULL;
  ATerm t_2 (ATerm t)
  {
    ATerm e_10 = NULL,f_10 = NULL,h_10 = NULL;
    e_10 = t;
    t = p_83(t);
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    t = q_83(t);
    if(((w_9 != NULL) && (w_9 != t)))
      _fail(t);
    else
      w_9 = t;
    t = term_u_9;
    f_10 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_3, term_x_12, not_null(w_9), not_null(b_10));
    h_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATmakeAppl(sym_Defined_3, term_x_12, not_null(w_9), not_null(b_10)));
    t = l_5(v_2, f_10, h_10, t);
    t = e_10;
    t = manytd_1_0(w_2, t);
    return(t);
  }
  t = scope_2_0(s_2, t_2, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_y_12;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(e_11, f_11, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm h_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(h_12, j_12, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(n_12, o_12, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(g_13, h_13, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(j_13, k_13, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,v_10 = NULL,w_10 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      r_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
      v_10 = ATgetArgument(t, 2);
      {
        ATerm a_3 (ATerm t)
        {
          ATerm d_11 = NULL;
          t = not_null(s_10);
          t = foldr_3_0(l_3, o_3, u_3, t);
          d_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_10), d_11);
          return(t);
        }
        t = not_null(v_10);
        t = check_constructors_p__2_0(a_3, b_3, t);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          r_10 = ATgetArgument(t, 0);
          s_10 = ATgetArgument(t, 1);
          v_10 = ATgetArgument(t, 2);
          w_10 = ATgetArgument(t, 3);
          {
            ATerm h_4 (ATerm t)
            {
              ATerm y_11 = NULL,c_12 = NULL;
              t = not_null(s_10);
              t = foldr_3_0(o_4, p_4, r_4, t);
              y_11 = t;
              t = not_null(v_10);
              t = foldr_3_0(u_4, v_4, w_4, t);
              c_12 = t;
              t = (ATerm) ATmakeAppl(sym__3, not_null(r_10), y_11, c_12);
              return(t);
            }
            t = not_null(w_10);
            t = check_constructors_p__2_0(h_4, k_4, t);
          }
        }
      else
        {
          ATerm x_4 (ATerm t)
          {
            ATerm b_13 = NULL,c_13 = NULL;
            t = not_null(s_10);
            t = foldr_3_0(a_5, b_5, d_5, t);
            b_13 = t;
            t = not_null(v_10);
            t = foldr_3_0(e_5, f_5, i_5, t);
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_10), b_13, c_13);
            return(t);
          }
          if(match_cons(t, sym_RDefT_4))
            {
              if(((r_10 != NULL) && (r_10 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_10 = ATgetArgument(t, 0);
              if(((s_10 != NULL) && (s_10 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                s_10 = ATgetArgument(t, 1);
              if(((v_10 != NULL) && (v_10 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                v_10 = ATgetArgument(t, 2);
              if(((w_10 != NULL) && (w_10 != ATgetArgument(t, 3))))
                _fail(ATgetArgument(t, 3));
              else
                w_10 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = not_null(w_10);
          t = check_constructors_p__2_0(x_4, z_4, t);
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,j_14 = NULL,k_14 = NULL;
  g_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_14 = ATgetFirst((ATermList) t);
          k_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_7 = NULL,f_7 = NULL,i_7 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(g_14);
            c_7 = t;
            t = j_14;
            t = o_95(t);
            f_7 = t;
            t = k_14;
            t = filter_1_0(o_95, t);
            i_7 = t;
            t = (ATerm) ATinsert(CheckATermList(i_7), f_7);
            g_1 = t;
            t = SSLsetAnnotations(g_1, c_7);
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            t = k_14;
            t = filter_1_0(o_95, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm x_83 (ATerm), ATerm d_32, ATerm b_32, ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,s_14 = NULL,t_14 = NULL,a_15 = NULL,b_15 = NULL;
  t_14 = t;
  t = x_83(t);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_14, d_32, b_32);
  t = y_5(p_14, d_32, b_32, t);
  {
    ATerm i_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL;
        t = term_k_12;
        c_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_14, term_k_12);
        t = x_5(p_14, c_15, t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = i_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_14 = ATgetFirst((ATermList) t);
        s_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_12;
    a_15 = t;
    t = (ATerm) ATinsert(CheckATermList(s_14), (ATerm) ATinsert(CheckATermList(q_14), d_32));
    b_15 = t;
    t = SSL_table_put(p_14, a_15, b_15);
    t = t_14;
  }
  return(t);
}
ATerm foldr_3_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  ATerm h_15 = NULL,n_15 = NULL,o_15 = NULL;
  h_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_15;
      t = l_94(t);
    }
  else
    {
      ATerm t_15 = NULL,v_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_15 = ATgetFirst((ATermList) t);
          o_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_15;
      t = n_94(t);
      t_15 = t;
      t = o_15;
      t = foldr_3_0(l_94, m_94, n_94, t);
      v_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_15, v_15);
      t = m_94(t);
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(x_16, y_16, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(h_17, i_17, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm y_15 = NULL,c_16 = NULL,f_16 = NULL,g_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
      y_15 = ATgetArgument(t, 2);
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
        t = g_16;
        t = foldr_3_0(u_5, v_5, z_5, t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, f_16, (ATerm) ATmakeAppl(sym_Keys_1, o_16));
        p_16 = t;
        t = term_n_13;
        q_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, f_16, (ATerm) ATmakeAppl(sym_Keys_1, o_16)), term_n_13);
        t = l_5(b_6, p_16, q_16, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, f_16, g_16, y_15);
      }
    }
  else
    {
      if(match_cons(t, sym_OpDecl_2))
        {
          f_16 = ATgetArgument(t, 0);
          g_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_16;
      if(match_cons(t, sym_FunType_2))
        {
          i_16 = ATgetArgument(t, 0);
          c_16 = ATgetArgument(t, 1);
          {
            ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
            t = i_16;
            t = foldr_3_0(c_6, e_6, f_6, t);
            d_17 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, f_16, (ATerm) ATmakeAppl(sym_Keys_1, d_17));
            e_17 = t;
            t = term_p_13;
            f_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, f_16, (ATerm) ATmakeAppl(sym_Keys_1, d_17)), term_p_13);
            t = l_5(g_6, e_17, f_17, t);
            t = (ATerm) ATmakeAppl(sym_OpDecl_2, f_16, (ATerm) ATmakeAppl(sym_FunType_2, i_16, c_16));
          }
        }
      else
        {
          ATerm q_17 = NULL,r_17 = NULL;
          if(match_cons(t, sym_ConstType_1))
            {
              i_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, f_16, term_q_13);
          q_17 = t;
          t = term_s_13;
          r_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, f_16, term_q_13), term_s_13);
          t = l_5(h_6, q_17, r_17, t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, f_16, (ATerm) ATmakeAppl(sym_ConstType_1, i_16));
        }
    }
  return(t);
}
ATerm m_5 (ATerm b_30, ATerm d_30, ATerm e_30, ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(b_30), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_11), term_b_11))), term_u_13);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = d_30;
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = d_30;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_30;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_17 = NULL,r_7 = NULL,s_7 = NULL;
        t = (ATerm) ATempty;
        r_7 = t;
        t = term_z_10;
        s_7 = t;
        t = term_j_11;
        t = j_5(s_7, r_7, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm x_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_13) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            w_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_17;
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATempty;
      }
    t_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(b_30), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_b_11), term_b_11), term_b_11))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_11), term_b_11))), term_u_13));
    t = conc_0_0(t);
    u_17 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, e_30)), (ATerm) ATmakeAppl(sym_Overlays_1, d_30)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, u_17)))));
  }
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
        {
          ATerm z_13 = ATgetFirst((ATermList) y_13);
          if(match_cons(z_13, sym_Signature_1))
            {
              ATerm b_14 = ATgetArgument(z_13, 0);
              if(((ATgetType(b_14) == AT_LIST) && !(ATisEmpty(b_14))))
                {
                  ATerm c_14 = ATgetFirst((ATermList) b_14);
                  if(match_cons(c_14, sym_Constructors_1))
                    {
                      x_17 = ATgetArgument(c_14, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm d_14 = (ATerm) ATgetNext((ATermList) b_14);
                    if(((ATgetType(d_14) != AT_LIST) || !(ATisEmpty(d_14))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm a_14 = (ATerm) ATgetNext((ATermList) y_13);
            if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
              {
                ATerm e_14 = ATgetFirst((ATermList) a_14);
                if(match_cons(e_14, sym_Overlays_1))
                  {
                    y_17 = ATgetArgument(e_14, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm f_14 = (ATerm) ATgetNext((ATermList) a_14);
                  if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
                    {
                      ATerm h_14 = ATgetFirst((ATermList) f_14);
                      if(match_cons(h_14, sym_Strategies_1))
                        {
                          z_17 = ATgetArgument(h_14, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_14 = (ATerm) ATgetNext((ATermList) f_14);
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
  t = m_5(x_17, y_17, z_17, t);
  return(t);
}
ATerm n_5 (ATerm o_53, ATerm p_53, ATerm t)
{
  ATerm a_18 = NULL;
  t = SSL_fputc(o_53, p_53);
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_18);
  return(t);
}
ATerm o_5 (ATerm c_57, ATerm d_57, ATerm t)
{
  ATerm b_18 = NULL;
  t = SSL_write_term_to_stream_text(c_57, d_57);
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_18);
  return(t);
}
ATerm q_5 (ATerm z_103 (ATerm), ATerm q_490, ATerm g_57, ATerm t)
{
  ATerm c_18 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_490, term_l_14);
  t = open_stream_0_0(t);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_18, g_57);
  t = z_103(t);
  t = fclose_0_0(t);
  t = g_57;
  return(t);
}
ATerm p_5 (ATerm y_56, ATerm z_56, ATerm t)
{
  ATerm d_18 = NULL;
  t = SSL_write_term_to_stream_baf(y_56, z_56);
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_18);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_14 = ATgetArgument(t, 0);
      if(match_cons(m_14, sym_Stream_1))
        {
          k_18 = ATgetArgument(m_14, 0);
        }
      else
        _fail(t);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(k_18, l_18, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm m_18 = NULL,q_18 = NULL,t_18 = NULL,w_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_14 = ATgetArgument(t, 0);
      if(match_cons(n_14, sym_Stream_1))
        {
          w_18 = ATgetArgument(n_14, 0);
        }
      else
        _fail(t);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(w_18, z_18, t);
  m_18 = t;
  t = term_o_14;
  q_18 = t;
  t = m_18;
  if(match_cons(t, sym_Stream_1))
    {
      t_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_14, m_18);
  t = n_5(q_18, t_18, t);
  return(t);
}
ATerm output_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,j_18 = NULL;
  t = i_108(t);
  j_18 = t;
  {
    ATerm r_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_14;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = r_14;
        t = term_w_14;
      }
    g_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_18, j_18);
    {
      ATerm x_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_14;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, g_18, j_18);
          LocalPopChoice(y_14);
          if(match_cons(t, sym__2))
            {
              ATerm d_15 = ATgetArgument(t, 0);
              ATerm e_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_5(i_6, g_18, j_18, t);
        }
      else
        {
          t = x_14;
          if(match_cons(t, sym__2))
            {
              ATerm f_15 = ATgetArgument(t, 0);
              ATerm g_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_5(l_6, g_18, j_18, t);
        }
    }
  }
  return(t);
}
ATerm v_19 (ATerm p_19, ATerm t)
{
  t = SSL_fclose(p_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  t_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_19 = ATgetArgument(t, 0);
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_19);
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            t = v_19(t_19, t);
          }
      }
    }
  else
    {
      t = v_19(t_19, t);
    }
  return(t);
}
ATerm r_5 (ATerm e_57, ATerm t)
{
  t = SSL_read_term_from_stream(e_57);
  return(t);
}
ATerm s_5 (ATerm q_53, ATerm r_53, ATerm t)
{
  ATerm w_19 = NULL;
  t = SSL_fopen(q_53, r_53);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_19);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_19 = NULL;
  t = SSL_stdin_stream();
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  t = SSL_stdout_stream();
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_19 = NULL;
  t = SSL_stderr_stream();
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_19);
  return(t);
}
ATerm i_21 (ATerm f_20, ATerm t)
{
  ATerm g_20 = NULL;
  t = SSL_explode_term(f_20);
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_15 = ATgetArgument(t, 1);
        if(((ATgetType(l_15) == AT_LIST) && !(ATisEmpty(l_15))))
          {
            g_20 = ATgetFirst((ATermList) l_15);
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
  t = g_20;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_20;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_20;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_20;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_21 (ATerm j_20, ATerm k_20, ATerm l_20, ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,r_20 = NULL,k_1 = NULL;
  t = SSLgetAnnotations(l_20);
  o_20 = t;
  t = j_20;
  if(match_cons(t, sym_Path_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_20, k_20);
  k_1 = t;
  t = SSLsetAnnotations(k_1, o_20);
  if(match_cons(t, sym__2))
    {
      m_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(m_20, n_20, t);
  return(t);
}
ATerm k_21 (ATerm t_20, ATerm w_20, ATerm x_20, ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,d_21 = NULL,m_1 = NULL;
  t = SSLgetAnnotations(x_20);
  a_21 = t;
  t = SSL_is_string(t_20);
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_21, w_20);
  m_1 = t;
  t = SSLsetAnnotations(m_1, a_21);
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(y_20, z_20, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_15 = ATgetArgument(t, 0);
      ATerm q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_21 = t;
  if(match_cons(t, sym__2))
    {
      g_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_21(f_21, t);
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            {
              ATerm u_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_21(g_21, h_21, f_21, t);
                  ;
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = u_15;
                  t = k_21(g_21, h_21, f_21, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_21(f_21, t);
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL;
      o_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_21, term_b_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      t = debug_1_0(m_6, t);
      _fail(t);
    }
  m_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(n_21, t);
  l_21 = t;
  t = m_21;
  t = fclose_0_0(t);
  t = l_21;
  return(t);
}
ATerm input_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = term_j_16;
    }
  t = ReadFromFile_0_0(t);
  t = j_108(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  q_21 = t;
  t = term_k_16;
  t = whoami_0_0(t);
  r_21 = t;
  t = term_z_0;
  t_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_16), r_21), term_l_16);
  u_21 = t;
  t = SSL_printnl(t_21, u_21);
  t = term_t_9;
  s_21 = t;
  t = SSL_exit(s_21);
  t = q_21;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm w_21 = NULL;
  w_21 = t;
  if(match_string(t, "-k"))
    {
      t = w_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_21;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  t = SSL_string_to_int(x_21);
  y_21 = t;
  t = term_n_16;
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, y_21);
  t = a_6(z_21, y_21, t);
  t = x_21;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_r_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_6, o_6, p_6, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  if(match_string(t, "-S"))
    {
      t = b_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_22;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  t = term_s_16;
  c_22 = t;
  t = term_s_9;
  d_22 = t;
  t = term_t_16;
  t = a_6(c_22, d_22, t);
  t = term_u_16;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  t = SSL_string_to_int(e_22);
  f_22 = t;
  t = term_s_16;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_16, f_22);
  t = a_6(g_22, f_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_22);
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  t = term_z_16;
  h_22 = t;
  t = term_k_16;
  i_22 = t;
  t = term_a_17;
  t = a_6(h_22, i_22, t);
  t = term_b_17;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_6, s_6, t_6, t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = g_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_6, w_6, x_6, t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = Option_3_0(y_6, z_6, a_7, t);
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm f_58, ATerm g_58, ATerm t)
{
  ATerm j_22 = NULL;
  t = term_m_17;
  j_22 = t;
  t = SSL_table_put(j_22, f_58, g_58);
  t = (ATerm) ATmakeAppl(sym__3, term_m_17, f_58, g_58);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
      t = term_k_16;
      t = d_0(t);
      o_22 = t;
      t = term_n_17;
      p_22 = t;
      t = term_o_17;
      q_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_17, term_o_17, o_22);
      t = y_5(p_22, q_22, o_22, t);
      _fail(t);
    }
  else
    {
      ATerm t_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_22 = ATgetFirst((ATermList) t);
          n_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_22;
      t = a_0(t);
      t = term_k_16;
      t = c_0(t);
      t_22 = t;
      t = (ATerm) ATinsert(CheckATermList(n_22), t_22);
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  if(match_string(t, "-o"))
    {
      t = v_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_22;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  t = term_v_14;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, w_22);
  t = a_6(x_22, w_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_22);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_7, d_7, e_7, t);
  return(t);
}
ATerm y_5 (ATerm l_32, ATerm m_32, ATerm k_32, ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_32, m_32);
  {
    ATerm s_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_18 = ATgetArgument(t, 0);
            ATerm f_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_32, m_32);
        t = x_5(l_32, m_32, t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = s_17;
        t = (ATerm) ATempty;
      }
    a_23 = t;
    t = (ATerm) ATinsert(CheckATermList(a_23), k_32);
    b_23 = t;
    t = SSL_table_put(l_32, m_32, b_23);
    t = z_22;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
      t = term_k_16;
      t = l_0(t);
      m_23 = t;
      t = term_n_17;
      n_23 = t;
      t = term_o_17;
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_17, term_o_17, m_23);
      t = y_5(n_23, o_23, m_23, t);
      _fail(t);
    }
  else
    {
      ATerm s_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_23 = ATgetFirst((ATermList) t);
          j_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_23 = ATgetFirst((ATermList) t);
          l_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_23;
      t = i_0(t);
      t = k_23;
      t = k_0(t);
      s_23 = t;
      t = (ATerm) ATinsert(CheckATermList(l_23), s_23);
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  if(match_string(t, "-i"))
    {
      t = u_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_23;
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  t = term_h_16;
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, v_23);
  t = a_6(w_23, v_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_23);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_7, h_7, j_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_16;
  t = whoami_0_0(t);
  x_23 = t;
  t = term_z_0;
  z_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_18), x_23);
  a_24 = t;
  t = SSL_printnl(z_23, a_24);
  t = term_t_9;
  y_23 = t;
  t = SSL_exit(y_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_5 (ATerm m_44, ATerm n_44, ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_44, n_44);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      t = SSL_addr(m_44, n_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_24;
      t = j_94(t);
    }
  else
    {
      ATerm h_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_24 = ATgetFirst((ATermList) t);
          e_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_24;
      t = foldr_2_0(j_94, k_94, t);
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_24, h_24);
      t = k_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(v_8, w_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_24 = NULL,r_8 = NULL,s_8 = NULL;
  t = times_0_0(t);
  s_8 = t;
  t = SSL_explode_term(s_8);
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  t = foldr_2_0(k_7, n_7, t);
  k_24 = t;
  t = SSL_TicksToSeconds(k_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym__2))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_24;
        if((w_24 != t))
          {
            _fail(t);
          }
        t = v_24;
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = s_18;
        t = (ATerm) ATmakeAppl(sym__2, w_24, x_24);
        {
          ATerm v_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_24, x_24);
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = v_18;
              t = SSL_gtr(w_24, x_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_24, x_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  {
    ATerm y_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL;
        t = term_s_16;
        t = get_config_0_0(t);
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_25, term_t_9);
        t = geq_0_0(t);
        t = b_25;
        t = j_105(t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = y_18;
        t = b_25;
      }
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,i_25 = NULL,j_25 = NULL;
  t = run_time_0_0(t);
  f_25 = t;
  t = term_k_16;
  t = whoami_0_0(t);
  g_25 = t;
  t = term_z_0;
  i_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_19), f_25), term_b_19), g_25);
  j_25 = t;
  t = SSL_printnl(i_25, j_25);
  t = (ATerm) ATmakeAppl(sym__2, term_z_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_19), f_25), term_b_19), g_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_9;
  k_25 = t;
  t = SSL_exit(k_25);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  t_25 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_25;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_25 = ATgetArgument(t, 0);
          {
            ATerm q_9 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(t_25);
            q_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_25);
            t_1 = t;
            t = SSLsetAnnotations(t_1, q_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_25;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_107 (ATerm), ATerm t)
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
      t = fetch_1_0(p_7, t);
    }
  t = z_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_25 = ATgetFirst((ATermList) t);
      x_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_26 = NULL,c_26 = NULL;
        ATerm q_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_26)), not_null(c_26));
          return(t);
        }
        t = not_null(x_25);
        t = g_0(t);
        if(((b_26 != NULL) && (b_26 != t)))
          _fail(t);
        else
          b_26 = t;
        t = not_null(w_25);
        t = e_0(t);
        if(((c_26 != NULL) && (c_26 != t)))
          _fail(t);
        else
          c_26 = t;
        t = not_null(x_25);
        t = reverse_acc_2_0(e_0, q_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_16;
      t = g_0(t);
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,a_2 = NULL;
  i_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_26);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_26);
  a_2 = t;
  t = SSLsetAnnotations(a_2, g_26);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_26), term_g_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      t = fetch_1_0(u_7, t);
    }
  t = term_j_19;
  t = echo_0_0(t);
  t = term_n_17;
  e_26 = t;
  t = term_o_17;
  f_26 = t;
  t = term_k_19;
  t = x_5(e_26, f_26, t);
  t = reverse_acc_2_0(_id, v_7, t);
  t = map_1_0(w_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm h_27 (ATerm t)
  {
    ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
    e_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_27 = ATgetFirst((ATermList) t);
        g_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_19 = t;
      int m_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_9 = NULL,d_10 = NULL,h_2 = NULL;
          t = SSLgetAnnotations(e_27);
          z_9 = t;
          t = f_27;
          t = b_88(t);
          d_10 = t;
          t = (ATerm) ATinsert(CheckATermList(g_27), d_10);
          h_2 = t;
          t = SSLsetAnnotations(h_2, z_9);
          ;
          LocalPopChoice(m_19);
        }
      else
        {
          t = l_19;
          {
            ATerm y_10 = NULL,h_11 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(e_27);
            y_10 = t;
            t = g_27;
            t = h_27(t);
            h_11 = t;
            t = (ATerm) ATinsert(CheckATermList(h_11), f_27);
            i_2 = t;
            t = SSLsetAnnotations(i_2, y_10);
          }
        }
    }
    return(t);
  }
  t = h_27(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_27;
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
            t = l_27;
          }
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = (ATerm) ATinsert(ATempty, l_27);
      }
    m_27 = t;
    t = term_w_14;
    n_27 = t;
    t = SSL_printnl(n_27, m_27);
    t = l_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_5 (ATerm g_51, ATerm h_51, ATerm t)
{
  t = SSL_strcat(g_51, h_51);
  return(t);
}
ATerm map_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm f_28 (ATerm t)
  {
    ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
    c_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_28;
      }
    else
      {
        ATerm s_11 = NULL,v_11 = NULL,w_11 = NULL,m_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_28 = ATgetFirst((ATermList) t);
            e_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_28);
        s_11 = t;
        t = d_28;
        t = r_87(t);
        v_11 = t;
        t = e_28;
        t = f_28(t);
        w_11 = t;
        t = (ATerm) ATinsert(CheckATermList(w_11), v_11);
        m_2 = t;
        t = SSLsetAnnotations(m_2, s_11);
      }
    return(t);
  }
  t = f_28(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm u_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = u_19;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL;
      n_28 = t;
      t = SSL_is_string(n_28);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      {
        ATerm e_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_7, t);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = e_20;
            {
              ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
              t_28 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_28 = ATgetArgument(t, 0);
                  t = u_28;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_28 = ATgetArgument(t, 0);
                      t = u_28;
                      {
                        ATerm i_20 = t;
                        int p_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_20);
                          }
                        else
                          {
                            t = i_20;
                            t = debug_1_0(y_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_28 = NULL,a_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_28 = ATgetArgument(t, 0);
                          v_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_28;
                      t = eval_config_0_0(t);
                      z_28 = t;
                      t = v_28;
                      t = eval_config_0_0(t);
                      a_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
                      t = w_5(z_28, a_29, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm x_5 (ATerm c_34, ATerm d_34, ATerm t)
{
  t = SSL_table_get(c_34, d_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  e_29 = t;
  t = term_m_17;
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_17, e_29);
  t = x_5(f_29, e_29, t);
  {
    ATerm q_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL,h_29 = NULL;
        t = eval_config_0_0(t);
        g_29 = t;
        t = term_m_17;
        h_29 = t;
        t = SSL_table_put(h_29, e_29, g_29);
        t = g_29;
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = q_20;
      }
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  t = term_u_20;
  k_29 = t;
  t = term_k_16;
  l_29 = t;
  t = term_v_20;
  t = a_6(k_29, l_29, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
  t = term_u_20;
  o_29 = t;
  t = term_k_16;
  p_29 = t;
  t = term_v_20;
  t = a_6(o_29, p_29, t);
  t = term_c_21;
  m_29 = t;
  t = term_k_16;
  n_29 = t;
  t = term_e_21;
  t = a_6(m_29, n_29, t);
  t = term_p_21;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_7, e_8, g_8, t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = a_22;
      t = Option_3_0(m_8, n_8, o_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,q_2 = NULL;
  v_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_29);
  q_29 = t;
  t = r_29;
  t = l_70(t);
  t_29 = t;
  t = s_29;
  t = m_70(t);
  u_29 = t;
  t = (ATerm) ATinsert(CheckATermList(u_29), t_29);
  q_2 = t;
  t = SSLsetAnnotations(q_2, q_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,c_30 = NULL,i_30 = NULL,j_30 = NULL,x_30 = NULL,b_31 = NULL,z_2 = NULL;
  if(((a_30 != NULL) && (a_30 != t)))
    _fail(t);
  else
    a_30 = t;
  {
    ATerm l_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_22;
        t = c_110(t);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = l_22;
      }
    t = not_null(a_30);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_30 != NULL) && (i_30 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_30 = ATgetFirst((ATermList) t);
        if(((j_30 != NULL) && (j_30 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          j_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(a_30));
    if(((c_30 != NULL) && (c_30 != t)))
      _fail(t);
    else
      c_30 = t;
    t = term_n_18;
    if(((b_31 != NULL) && (b_31 != t)))
      _fail(t);
    else
      b_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_18, not_null(i_30));
    t = a_6(not_null(b_31), not_null(i_30), t);
    t = not_null(j_30);
    {
      ATerm o_32 (ATerm t)
      {
        ATerm u_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_31 = NULL;
                f_31 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_31;
                ;
                LocalPopChoice(d_23);
              }
            else
              {
                t = c_23;
                t = c_110(t);
                t = Cons_2_0(_id, o_32, t);
              }
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = u_22;
            {
              ATerm g_32 = NULL,h_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_32 = ATgetFirst((ATermList) t);
                  h_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_32), (ATerm) ATmakeAppl(sym_Undefined_1, g_32));
            }
          }
        return(t);
      }
      t = o_32(t);
      if(((x_30 != NULL) && (x_30 != t)))
        _fail(t);
      else
        x_30 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(x_30)), (ATerm) ATmakeAppl(sym_Program_1, not_null(i_30)));
      if(((z_2 != NULL) && (z_2 != t)))
        _fail(t);
      else
        z_2 = t;
      t = SSLsetAnnotations(not_null(z_2), not_null(c_30));
    }
  }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  if(match_string(t, "--help"))
    {
      t = f_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_33;
        }
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  t = term_f_19;
  g_33 = t;
  t = term_k_16;
  h_33 = t;
  t = term_e_23;
  t = a_6(g_33, h_33, t);
  t = term_f_23;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm y_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  if(((a_33 != NULL) && (a_33 != t)))
    _fail(t);
  else
    a_33 = t;
  t = term_n_17;
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  t = term_o_17;
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  t = (ATerm) ATempty;
  if(((e_33 != NULL) && (e_33 != t)))
    _fail(t);
  else
    e_33 = t;
  t = SSL_table_put(not_null(c_33), not_null(d_33), not_null(e_33));
  t = not_null(a_33);
  {
    ATerm p_8 (ATerm t)
    {
      ATerm h_23 = t;
      int p_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_110(t);
          ;
          LocalPopChoice(p_23);
        }
      else
        {
          t = h_23;
          {
            ATerm q_23 = t;
            int r_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_8, u_8, x_8, t);
                ;
                LocalPopChoice(r_23);
              }
            else
              {
                t = q_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_8, t);
    {
      ATerm t_23 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_33 = NULL;
          o_33 = t;
          {
            ATerm f_24 = t;
            int g_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_12 = NULL;
                t = o_33;
                {
                  ATerm i_24 = t;
                  int j_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_24);
                    }
                  else
                    {
                      t = i_24;
                      t = fetch_1_0(y_8, t);
                    }
                  t = o_33;
                  t = default_system_usage_0_0(t);
                  t = term_s_9;
                  u_12 = t;
                  t = SSL_exit(u_12);
                }
                ;
                LocalPopChoice(g_24);
              }
            else
              {
                t = f_24;
                {
                  ATerm a_13 = NULL;
                  t = term_u_20;
                  t = get_config_0_0(t);
                  t = o_33;
                  t = default_system_about_0_0(t);
                  t = term_s_9;
                  a_13 = t;
                  t = SSL_exit(a_13);
                }
              }
          }
          ;
          LocalPopChoice(b_24);
        }
      else
        {
          t = t_23;
          {
            ATerm l_24 = t;
            int m_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
                ATerm z_8 (ATerm t)
                {
                  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,g_4 = NULL;
                  u_33 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_33 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_33);
                  s_33 = t;
                  t = t_33;
                  if(((y_32 != NULL) && (y_32 != t)))
                    _fail(t);
                  else
                    y_32 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_33);
                  g_4 = t;
                  t = SSLsetAnnotations(g_4, s_33);
                  return(t);
                }
                t = fetch_1_0(z_8, t);
                t = term_z_0;
                if(((q_33 != NULL) && (q_33 != t)))
                  _fail(t);
                else
                  q_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), term_n_24);
                if(((r_33 != NULL) && (r_33 != t)))
                  _fail(t);
                else
                  r_33 = t;
                t = SSL_printnl(not_null(q_33), not_null(r_33));
                t = (ATerm) ATmakeAppl(sym__2, term_z_0, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), term_n_24));
                t = default_system_usage_0_0(t);
                t = term_t_9;
                if(((p_33 != NULL) && (p_33 != t)))
                  _fail(t);
                else
                  p_33 = t;
                t = SSL_exit(not_null(p_33));
                ;
                LocalPopChoice(m_24);
              }
            else
              {
                t = l_24;
              }
          }
        }
      if(((z_32 != NULL) && (z_32 != t)))
        _fail(t);
      else
        z_32 = t;
      t = term_n_17;
      if(((b_33 != NULL) && (b_33 != t)))
        _fail(t);
      else
        b_33 = t;
      t = SSL_table_destroy(not_null(b_33));
      t = not_null(z_32);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,e_34 = NULL;
  t = parse_options_1_0(b_108, t);
  z_33 = t;
  t = term_o_24;
  e_34 = t;
  t = SSL_table_create(e_34);
  t = term_o_24;
  a_34 = t;
  t = term_p_24;
  b_34 = t;
  t = SSL_table_put(a_34, b_34, z_33);
  t = z_33;
  t = d_108(t);
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_108, t);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        {
          ATerm s_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_108(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_24);
            }
          else
            {
              t = s_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm u_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = u_24;
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            {
              ATerm c_25 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_9, d_9, e_9, t);
                  ;
                  LocalPopChoice(e_25);
                }
              else
                {
                  t = c_25;
                  {
                    ATerm h_25 = t;
                    int l_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(l_25);
                      }
                    else
                      {
                        t = h_25;
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
ATerm b_9 (ATerm t)
{
  t = input_1_0(j_9, t);
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
  ATerm g_34 = NULL,h_34 = NULL;
  t = term_z_14;
  g_34 = t;
  t = term_k_16;
  h_34 = t;
  t = term_m_25;
  t = a_6(g_34, h_34, t);
  t = term_n_25;
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = output_1_0(k_9, t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CheckConstructors_0_0(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      t = debug_1_0(l_9, t);
      _fail(t);
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_9, default_usage_0_0, _id, b_9, t);
  return(t);
}
