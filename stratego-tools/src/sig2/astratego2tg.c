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
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Path_2;
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermRef_2;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Id_1;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_f_23;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_a_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_u_14;
ATerm term_o_14;
ATerm term_f_14;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_w_10;
ATerm term_x_9;
ATerm term_d_9;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
void init_constant_terms (void)
{
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_String_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_p_15, term_w_10);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_10);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_y_7);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_m_16);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_y_7);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_y_7);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_y_7);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_y_7);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_94 (ATerm), ATerm);
ATerm build_group_by_pairs_4_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm group_by_3_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm c_5 (ATerm b_56, ATerm c_56, ATerm);
ATerm r_1 (ATerm);
ATerm to_dec_prod_item_0_0 (ATerm);
ATerm d_5 (ATerm c_113 (ATerm), ATerm o_65, ATerm m_65, ATerm);
ATerm map_with_index_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm f_5 (ATerm v_55, ATerm w_55, ATerm);
ATerm end_scope_1_0 (ATerm z_112 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_112 (ATerm), ATerm);
ATerm scope_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm);
ATerm u_1 (ATerm);
ATerm x_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm to_prod_items_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm g_5 (ATerm v_30, ATerm z_30, ATerm);
ATerm h_5 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm o_63, ATerm n_63, ATerm);
ATerm i_5 (ATerm a_110 (ATerm), ATerm k_63, ATerm j_63, ATerm);
ATerm foldr_3_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm collect_om_2_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm stratego_ast_to_tg_0_0 (ATerm);
ATerm _2_0 (ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm);
ATerm l_5 (ATerm c_33, ATerm d_33, ATerm);
ATerm m_5 (ATerm i_49, ATerm j_49, ATerm);
ATerm o_5 (ATerm w_98 (ATerm), ATerm c_371, ATerm m_49, ATerm);
ATerm n_5 (ATerm e_49, ATerm f_49, ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_84 (ATerm), ATerm);
ATerm m_13 (ATerm v_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_5 (ATerm k_49, ATerm);
ATerm q_5 (ATerm e_33, ATerm f_33, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_90 (ATerm), ATerm);
ATerm k_5 (ATerm z_44, ATerm a_45, ATerm);
ATerm debug_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm w_5 (ATerm j_60, ATerm k_60, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_5 (ATerm q_55, ATerm r_55, ATerm p_55, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_5 (ATerm l_50, ATerm m_50, ATerm);
ATerm foldr_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm need_help_1_0 (ATerm e_85 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm t_5 (ATerm h_57, ATerm i_57, ATerm);
ATerm Program_1_0 (ATerm e_71 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm j_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_71 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm l_6 (ATerm);
ATerm o_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm);
ATerm t_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_101 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm parse_options_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm i_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm iowrap_3_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,m_0 = NULL,n_0 = NULL,p_0 = NULL,q_0 = NULL;
  f_0 = t;
  t = term_y_7;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_z_7;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_8), m_0), term_a_8);
  p_0 = t;
  t = SSL_printnl(n_0, p_0);
  t = term_d_8;
  q_0 = t;
  t = SSL_exit(q_0);
  t = f_0;
  return(t);
}
ATerm filter_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm g_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = g_8;
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              t = filter_1_0(r_94, t);
              return(t);
            }
            t = Cons_2_0(r_94, w_0, t);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            {
              ATerm y_0 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_8 = ATgetFirst((ATermList) t);
                  y_0 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_0;
              t = filter_1_0(r_94, t);
            }
          }
      }
    }
  return(t);
}
ATerm build_group_by_pairs_4_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  ATerm e_1 = NULL,h_1 = NULL;
  e_1 = t;
  t = term_y_7;
  t = f_84(t);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm i_1 = NULL;
      i_1 = t;
      t = c_84(t);
      if((e_1 != t))
        {
          _fail(t);
        }
      t = i_1;
      return(t);
    }
    t = filter_1_0(x_0, t);
    t = map_1_0(d_84, t);
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_1, h_1);
    t = e_84(t);
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(d_1, k_1, l_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm n_1 = NULL;
  n_1 = t;
  t = (ATerm) ATinsert(ATempty, n_1);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      m_1 = ATgetArgument(t, 0);
      if((m_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm group_by_3_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  ATerm j_1 = NULL;
  j_1 = t;
  t = map_1_0(z_83, t);
  t = foldr_3_0(z_0, b_1, c_1, t);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        t = j_1;
        return(t);
      }
      t = build_group_by_pairs_4_0(z_83, a_84, b_84, q_1, t);
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  return(t);
}
ATerm c_5 (ATerm b_56, ATerm c_56, ATerm t)
{
  ATerm o_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_56, c_56);
  t = t_5(b_56, c_56, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_1 = ATgetFirst((ATermList) t);
      {
        ATerm o_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_1;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          o_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_3;
      if(match_string(t, "String"))
        {
          t = term_s_8;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Int", 0, ATtrue)))
            _fail(t);
          t = term_t_8;
        }
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      t = to_dec_prod_item_0_0(t);
    }
  return(t);
}
ATerm to_dec_prod_item_0_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,h_3 = NULL;
  f_3 = t;
  if(match_cons(t, sym_Op_2))
    {
      h_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
      {
        ATerm l_3 = NULL;
        t = e_3;
        t = map_1_0(r_1, t);
        l_3 = t;
        t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, h_3), l_3);
      }
    }
  else
    {
      if(match_cons(t, sym_Var_1))
        {
          h_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 = NULL,f_1 = NULL,g_1 = NULL;
            t = (ATerm) ATmakeAppl(sym_Var_1, h_3);
            f_1 = t;
            t = term_w_8;
            g_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATmakeAppl(sym_Var_1, h_3));
            t = c_5(g_1, f_1, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm x_8 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) x_8) != ATmakeSymbol("b_0", 0, ATtrue)))
                  _fail(t);
                a_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Param_1, a_1);
            ;
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            t = f_3;
            {
              ATerm z_8 = t;
              if((PushChoice() == 0))
                {
                  ATerm v_1 = NULL,y_1 = NULL,z_1 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Var_1, h_3);
                  y_1 = t;
                  t = term_w_8;
                  z_1 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATmakeAppl(sym_Var_1, h_3));
                  t = c_5(z_1, y_1, t);
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm a_9 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("b_0", 0, ATtrue)))
                        _fail(t);
                      v_1 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_1;
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = z_8;
                }
              t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, h_3), (ATerm) ATempty);
            }
          }
      }
    }
  return(t);
}
ATerm d_5 (ATerm c_113 (ATerm), ATerm o_65, ATerm m_65, ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL;
  r_3 = t;
  t = c_113(t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_3, o_65, m_65);
  t = u_5(s_3, o_65, m_65, t);
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_4 = NULL;
        t = term_d_9;
        c_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_3, term_d_9);
        t = t_5(s_3, c_4, t);
        ;
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_3 = ATgetFirst((ATermList) t);
        y_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_d_9;
    a_4 = t;
    t = (ATerm) ATinsert(CheckATermList(y_3), (ATerm) ATinsert(CheckATermList(t_3), o_65));
    b_4 = t;
    t = SSL_table_put(s_3, a_4, b_4);
    t = r_3;
  }
  return(t);
}
ATerm map_with_index_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, i_4);
  {
    ATerm z_5 (ATerm t)
    {
      ATerm k_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
      if(match_cons(t, sym__2))
        {
          k_4 = ATgetArgument(t, 0);
          m_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm s_5 = NULL,v_5 = NULL,x_5 = NULL,y_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_4 = ATgetFirst((ATermList) t);
              o_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, k_4, n_4);
          t = l_92(t);
          s_5 = t;
          t = term_d_8;
          y_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_4, term_d_8);
          t = r_5(k_4, y_5, t);
          v_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_5, o_4);
          t = z_5(t);
          x_5 = t;
          t = (ATerm) ATinsert(CheckATermList(x_5), s_5);
        }
      return(t);
    }
    t = z_5(t);
  }
  return(t);
}
ATerm f_5 (ATerm v_55, ATerm w_55, ATerm t)
{
  ATerm a_6 = NULL,c_6 = NULL;
  a_6 = t;
  {
    ATerm h_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_55, w_55);
        t = t_5(v_55, w_55, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_9 = ATgetFirst((ATermList) t);
            c_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_9);
        t = SSL_table_put(v_55, w_55, c_6);
        t = (ATerm) ATmakeAppl(sym__3, v_55, w_55, c_6);
      }
    else
      {
        t = h_9;
        t = SSL_table_remove(v_55, w_55);
        t = (ATerm) ATmakeAppl(sym__2, v_55, w_55);
      }
    t = a_6;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm f_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  f_6 = t;
  t = z_112(t);
  h_6 = t;
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL;
        t = term_d_9;
        m_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_6, term_d_9);
        t = t_5(h_6, m_6, t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_6 = ATgetFirst((ATermList) t);
        i_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_d_9;
    k_6 = t;
    t = SSL_table_put(h_6, k_6, i_6);
    t = j_6;
    {
      ATerm s_1 (ATerm t)
      {
        ATerm n_6 = NULL;
        n_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_6, n_6);
        t = f_5(h_6, n_6, t);
        return(t);
      }
      t = map_1_0(s_1, t);
      t = f_6;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm o_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_89(t);
      t = m_89(t);
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = o_9;
      t = m_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,u_6 = NULL;
  p_6 = t;
  t = y_112(t);
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_6, term_d_9);
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_9 = ATgetArgument(t, 0);
            ATerm u_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_9;
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_6, term_d_9);
        t = t_5(q_6, z_6, t);
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = (ATerm) ATempty;
      }
    r_6 = t;
    t = term_d_9;
    s_6 = t;
    t = (ATerm) ATinsert(CheckATermList(r_6), (ATerm) ATempty);
    u_6 = t;
    t = SSL_table_put(q_6, s_6, u_6);
    t = p_6;
  }
  return(t);
}
ATerm scope_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm t)
{
  t = begin_scope_1_0(a_113, t);
  {
    ATerm t_1 (ATerm t)
    {
      t = end_scope_1_0(a_113, t);
      return(t);
    }
    t = restore_always_2_0(b_113, t_1, t);
  }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      q_7 = ATgetArgument(t, 0);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(match_cons(v_9, sym_Var_1))
          {
            r_7 = ATgetArgument(v_9, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, r_7);
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_9, q_7);
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_7), (ATerm) ATmakeAppl(sym_Defined_2, term_x_9, q_7));
  t = d_5(a_2, s_7, t_7, t);
  t = (ATerm) ATmakeAppl(sym__2, q_7, (ATerm) ATmakeAppl(sym_Var_1, r_7));
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm u_7 = NULL;
  if(match_cons(t, sym_ConstType_1))
    {
      u_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7;
  {
    ATerm y_9 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_7 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            w_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_7;
        if(match_string(t, "String"))
          {
            t = term_s_8;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Int", 0, ATtrue)))
              _fail(t);
            t = term_t_8;
          }
        ;
        LocalPopChoice(b_10);
      }
    else
      {
        t = y_9;
        t = to_dec_prod_item_0_0(t);
      }
  }
  return(t);
}
ATerm to_prod_items_0_0 (ATerm t)
{
  ATerm h_7 = NULL,j_7 = NULL,k_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_FunType_2))
    {
      k_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
      {
        ATerm o_7 = NULL;
        t = j_7;
        {
          ATerm w_1 (ATerm t)
          {
            t = h_7;
            {
              ATerm c_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_7 = NULL;
                  if(match_cons(t, sym_ConstType_1))
                    {
                      ATerm g_10 = ATgetArgument(t, 0);
                      if(match_cons(g_10, sym_Op_2))
                        {
                          ATerm n_10 = ATgetArgument(g_10, 0);
                          p_7 = ATgetArgument(g_10, 1);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = p_7;
                  LocalPopChoice(f_10);
                  t = map_with_index_1_0(x_1, t);
                }
              else
                {
                  t = c_10;
                }
              t = k_7;
              t = map_1_0(b_2, t);
              if(((o_7 != NULL) && (o_7 != t)))
                _fail(t);
              else
                o_7 = t;
            }
            return(t);
          }
          t = scope_2_0(u_1, w_1, t);
          t = not_null(o_7);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          k_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_7;
      {
        ATerm o_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm r_10 = ATgetArgument(t, 0);
                ATerm s_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(q_10);
            t = (ATerm) ATempty;
          }
        else
          {
            t = o_10;
            if(match_cons(t, sym_Var_1))
              {
                ATerm v_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
          }
      }
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(e_9, f_9, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_d_8;
  return(t);
}
ATerm g_5 (ATerm v_30, ATerm z_30, ATerm t)
{
  ATerm c_8 = NULL,e_8 = NULL,f_8 = NULL,h_8 = NULL,j_8 = NULL,k_8 = NULL,r_8 = NULL,y_8 = NULL;
  t = z_30;
  if(match_cons(t, sym_ConstType_1))
    {
      h_8 = ATgetArgument(t, 0);
      t = h_8;
    }
  else
    {
      if(match_cons(t, sym_FunType_2))
        {
          ATerm a_11 = ATgetArgument(t, 0);
          j_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_8;
      if(match_cons(t, sym_ConstType_1))
        {
          k_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_8;
    }
  c_8 = t;
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Op_2))
          {
            r_8 = ATgetArgument(t, 0);
            {
              ATerm k_11 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_11);
        t = r_8;
      }
    else
      {
        t = i_11;
        if(match_cons(t, sym_Var_1))
          {
            r_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_8;
      }
    t = c_8;
    {
      ATerm m_11 = t;
      int p_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Op_2))
            {
              ATerm t_11 = ATgetArgument(t, 0);
              y_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(p_11);
          t = y_8;
          t = foldr_3_0(e_2, f_2, g_2, t);
        }
      else
        {
          t = m_11;
          if(match_cons(t, sym_Var_1))
            {
              ATerm x_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_w_10;
        }
      e_8 = t;
      t = z_30;
      t = to_prod_items_0_0(t);
      f_8 = t;
      t = (ATerm) ATmakeAppl(sym_NonTermDec_3, (ATerm)ATmakeAppl(sym_Id_1, r_8), e_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Prod_2, (ATerm)ATmakeAppl(sym_Id_1, v_30), f_8)));
    }
  }
  return(t);
}
ATerm h_5 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm o_63, ATerm n_63, ATerm t)
{
  t = e_110(t);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm g_9 = NULL;
      g_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_63, g_9);
      t = d_110(t);
      return(t);
    }
    t = fetch_1_0(h_2, t);
    t = n_63;
  }
  return(t);
}
ATerm i_5 (ATerm a_110 (ATerm), ATerm k_63, ATerm j_63, ATerm t)
{
  t = k_63;
  {
    ATerm w_9 (ATerm t)
    {
      ATerm z_11 = t;
      int n_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_63;
          ;
          LocalPopChoice(n_12);
        }
      else
        {
          t = z_11;
          {
            ATerm o_12 = t;
            int p_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_9 = NULL,k_9 = NULL,p_9 = NULL;
                i_9 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    k_9 = ATgetFirst((ATermList) t);
                    p_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_9;
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = j_63;
                    return(t);
                  }
                  t = h_5(a_110, i_2, k_9, p_9, t);
                  t = w_9(t);
                }
                ;
                LocalPopChoice(p_12);
              }
            else
              {
                t = o_12;
                t = Cons_2_0(_id, w_9, t);
              }
          }
        }
      return(t);
    }
    t = w_9(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_111(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm z_9 = NULL,a_10 = NULL,d_10 = NULL,e_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_9 = ATgetFirst((ATermList) t);
            a_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_9;
        t = x_111(t);
        d_10 = t;
        t = a_10;
        t = foldr_3_0(v_111, w_111, x_111, t);
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
        t = w_111(t);
      }
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 = NULL;
      t = f_111(t);
      h_10 = t;
      t = (ATerm) ATinsert(ATempty, h_10);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        c_2 = t;
        t = SSL_explode_term(c_2);
        if(match_cons(t, sym__2))
          {
            ATerm u_12 = ATgetArgument(t, 0);
            d_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_2;
        {
          ATerm k_2 (ATerm t)
          {
            t = collect_om_2_0(f_111, g_111, t);
            return(t);
          }
          t = foldr_3_0(j_2, g_111, k_2, t);
        }
      }
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  if(match_cons(t, sym_OpDecl_2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      ATerm x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(n_2, j_10, k_10, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      if((l_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm m_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      m_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(m_10, p_10, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      t_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
      {
        ATerm y_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm x_10 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm z_12 = ATgetArgument(t, 0);
      ATerm a_13 = ATgetArgument(t, 1);
      ATerm b_13 = ATgetArgument(t, 2);
      if(((ATgetType(b_13) == AT_LIST) && !(ATisEmpty(b_13))))
        {
          x_10 = ATgetFirst((ATermList) b_13);
          {
            ATerm d_13 = (ATerm) ATgetNext((ATermList) b_13);
            if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = x_10;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(match_cons(e_13, sym__2))
        {
          y_10 = ATgetArgument(e_13, 0);
          z_10 = ATgetArgument(e_13, 1);
        }
      else
        _fail(t);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_NonTermDec_3, y_10, z_10, b_11);
  return(t);
}
ATerm stratego_ast_to_tg_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  t = collect_om_2_0(l_2, m_2, t);
  t = map_1_0(o_2, t);
  t = group_by_3_0(p_2, q_2, r_2, t);
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, i_10);
  return(t);
}
ATerm _2_0 (ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,h_0 = NULL,l_0 = NULL;
  h_11 = t;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_11);
  c_11 = t;
  t = d_11;
  t = w_65(t);
  f_11 = t;
  t = e_11;
  t = x_65(t);
  g_11 = t;
  l_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
  h_0 = t;
  t = SSLsetAnnotations(h_0, c_11);
  return(t);
}
ATerm l_5 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm l_11 = NULL;
  t = SSL_fputc(c_33, d_33);
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_11);
  return(t);
}
ATerm m_5 (ATerm i_49, ATerm j_49, ATerm t)
{
  ATerm n_11 = NULL;
  t = SSL_write_term_to_stream_text(i_49, j_49);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_11);
  return(t);
}
ATerm o_5 (ATerm w_98 (ATerm), ATerm c_371, ATerm m_49, ATerm t)
{
  ATerm o_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_371, term_g_13);
  t = open_stream_0_0(t);
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_11, m_49);
  t = w_98(t);
  t = fclose_0_0(t);
  t = m_49;
  return(t);
}
ATerm n_5 (ATerm e_49, ATerm f_49, ATerm t)
{
  ATerm q_11 = NULL;
  t = SSL_write_term_to_stream_baf(e_49, f_49);
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_11);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = fetch_1_0(y_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(z_2, v_11, w_11, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm y_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(match_cons(h_13, sym_Stream_1))
        {
          y_11 = ATgetArgument(h_13, 0);
        }
      else
        _fail(t);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(y_11, a_12, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(b_3, b_12, c_12, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      if(match_cons(i_13, sym_Stream_1))
        {
          e_12 = ATgetArgument(i_13, 0);
        }
      else
        _fail(t);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(e_12, f_12, t);
  d_12 = t;
  t = term_j_13;
  g_12 = t;
  t = d_12;
  if(match_cons(t, sym_Stream_1))
    {
      h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_13, d_12);
  t = l_5(g_12, h_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL;
  r_11 = t;
  {
    ATerm t_2 (ATerm t)
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_2, t);
          ;
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          t = term_o_13;
          if(((s_11 != NULL) && (s_11 != t)))
            _fail(t);
          else
            s_11 = t;
        }
      return(t);
    }
    t = _2_0(t_2, _id, t);
    t = r_11;
    {
      ATerm v_2 (ATerm t)
      {
        ATerm u_11 = NULL;
        u_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), u_11);
        return(t);
      }
      t = _2_0(_id, v_2, t);
      {
        ATerm p_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(w_2, x_2, t);
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = p_13;
            t = _2_0(_id, a_3, t);
          }
      }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  i_12 = t;
  t = dtime_0_0(t);
  t = i_12;
  t = g_84(t);
  j_12 = t;
  t = dtime_0_0(t);
  k_12 = t;
  t = j_12;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_12), (ATerm) ATmakeAppl(sym_Runtime_1, k_12)), m_12);
  return(t);
}
ATerm m_13 (ATerm v_12, ATerm t)
{
  t = SSL_fclose(v_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_13 = NULL,f_13 = NULL;
  f_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_13 = ATgetArgument(t, 0);
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_13);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            t = m_13(f_13, t);
          }
      }
    }
  else
    {
      t = m_13(f_13, t);
    }
  return(t);
}
ATerm p_5 (ATerm k_49, ATerm t)
{
  t = SSL_read_term_from_stream(k_49);
  return(t);
}
ATerm q_5 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm n_13 = NULL;
  t = SSL_fopen(e_33, f_33);
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_13 = NULL;
  t = SSL_stdin_stream();
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_13 = NULL;
  t = SSL_stdout_stream();
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  t = SSL_stderr_stream();
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_13);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm k_14 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      k_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  t = SSL_is_string(q_14);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      ATerm x_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_14 = NULL,s_2 = NULL;
        h_14 = t;
        t = SSL_explode_term(h_14);
        if(match_cons(t, sym__2))
          {
            ATerm a_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_14 = ATgetArgument(t, 1);
              if(((ATgetType(b_14) == AT_LIST) && !(ATisEmpty(b_14))))
                {
                  s_2 = ATgetFirst((ATermList) b_14);
                  {
                    ATerm c_14 = (ATerm) ATgetNext((ATermList) b_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = s_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = s_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = s_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_14 = NULL,j_14 = NULL;
              t = _2_0(c_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  i_14 = ATgetArgument(t, 0);
                  j_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_5(i_14, j_14, t);
              ;
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
              {
                ATerm l_14 = NULL,n_14 = NULL;
                t = _2_0(d_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_14 = ATgetArgument(t, 0);
                    n_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_5(l_14, n_14, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  ATerm g_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_14 = NULL;
      z_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_14, term_o_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = g_14;
      t = debug_1_0(g_3, t);
      _fail(t);
    }
  w_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(y_14, t);
  x_14 = t;
  t = w_14;
  t = fclose_0_0(t);
  t = x_14;
  return(t);
}
ATerm fetch_1_0 (ATerm y_90 (ATerm), ATerm t)
{
  ATerm e_15 (ATerm t)
  {
    ATerm p_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_90, _id, t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = p_14;
        t = Cons_2_0(_id, e_15, t);
      }
    return(t);
  }
  t = e_15(t);
  return(t);
}
ATerm k_5 (ATerm z_44, ATerm a_45, ATerm t)
{
  t = SSL_strcat(z_44, a_45);
  return(t);
}
ATerm debug_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  g_15 = t;
  t = u_98(t);
  h_15 = t;
  t = term_z_7;
  i_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_15), h_15);
  j_15 = t;
  t = SSL_printnl(i_15, j_15);
  t = g_15;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_15 = NULL;
      v_15 = t;
      t = SSL_is_string(v_15);
      ;
      LocalPopChoice(a_15);
    }
  else
    {
      t = v_14;
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_3, t);
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL;
              z_15 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_16 = ATgetArgument(t, 0);
                  t = c_16;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_16 = ATgetArgument(t, 0);
                      t = c_16;
                      {
                        ATerm d_15 = t;
                        int f_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_15);
                          }
                        else
                          {
                            t = d_15;
                            t = debug_1_0(j_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_16 = NULL,j_16 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_16 = ATgetArgument(t, 0);
                          d_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_16;
                      t = eval_config_0_0(t);
                      h_16 = t;
                      t = d_16;
                      t = eval_config_0_0(t);
                      j_16 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_16, j_16);
                      t = k_5(h_16, j_16, t);
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
  ATerm p_16 = NULL,q_16 = NULL;
  p_16 = t;
  t = term_k_15;
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_15, p_16);
  t = t_5(q_16, p_16, t);
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_16 = NULL,t_16 = NULL;
        t = eval_config_0_0(t);
        r_16 = t;
        t = term_k_15;
        t_16 = t;
        t = SSL_table_put(t_16, p_16, r_16);
        t = r_16;
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_16 = NULL,w_16 = NULL;
      u_16 = t;
      t = term_p_15;
      t = get_config_0_0(t);
      w_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_16, term_q_15);
      t = geq_0_0(t);
      t = u_16;
      t = z_108(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  if(match_string(t, "-k"))
    {
      t = y_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_16;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  t = SSL_string_to_int(z_16);
  a_17 = t;
  t = term_r_15;
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_15, a_17);
  t = w_5(b_17, a_17, t);
  t = z_16;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_3, m_3, n_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm f_17 = NULL;
  f_17 = t;
  if(match_string(t, "-S"))
    {
      t = f_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_17;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  t = term_p_15;
  g_17 = t;
  t = term_w_10;
  h_17 = t;
  t = term_t_15;
  t = w_5(g_17, h_17, t);
  t = term_u_15;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,l_17 = NULL;
  i_17 = t;
  t = SSL_string_to_int(i_17);
  j_17 = t;
  t = term_p_15;
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_15, j_17);
  t = w_5(l_17, j_17, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_17);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  t = term_y_15;
  m_17 = t;
  t = term_y_7;
  n_17 = t;
  t = term_a_16;
  t = w_5(m_17, n_17, t);
  t = term_b_16;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_3, q_3, w_3, t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm i_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_3, e_4, f_4, t);
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = i_16;
            t = Option_3_0(g_4, h_4, j_4, t);
          }
      }
    }
  return(t);
}
ATerm w_5 (ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm o_17 = NULL;
  t = term_k_15;
  o_17 = t;
  t = SSL_table_put(o_17, j_60, k_60);
  t = (ATerm) ATmakeAppl(sym__3, term_k_15, j_60, k_60);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_17 = NULL,b_18 = NULL,c_18 = NULL;
      t = term_y_7;
      t = d_0(t);
      z_17 = t;
      t = term_l_16;
      b_18 = t;
      t = term_m_16;
      c_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_16, term_m_16, z_17);
      t = u_5(b_18, c_18, z_17, t);
      _fail(t);
    }
  else
    {
      ATerm g_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_17 = ATgetFirst((ATermList) t);
          y_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_17;
      t = a_0(t);
      t = term_y_7;
      t = c_0(t);
      g_18 = t;
      t = (ATerm) ATinsert(CheckATermList(y_17), g_18);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm k_18 = NULL;
  k_18 = t;
  if(match_string(t, "-o"))
    {
      t = k_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_18;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  l_18 = t;
  t = term_n_16;
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, l_18);
  t = w_5(m_18, l_18, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_18);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, p_4, q_4, t);
  return(t);
}
ATerm u_5 (ATerm q_55, ATerm r_55, ATerm p_55, ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_55, r_55);
  {
    ATerm s_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_16 = ATgetArgument(t, 0);
            ATerm c_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_55, r_55);
        t = t_5(q_55, r_55, t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = s_16;
        t = (ATerm) ATempty;
      }
    p_18 = t;
    t = (ATerm) ATinsert(CheckATermList(p_18), p_55);
    q_18 = t;
    t = SSL_table_put(q_55, r_55, q_18);
    t = o_18;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,j_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_19 = NULL,p_19 = NULL,q_19 = NULL;
      t = term_y_7;
      t = k_0(t);
      m_19 = t;
      t = term_l_16;
      p_19 = t;
      t = term_m_16;
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_16, term_m_16, m_19);
      t = u_5(p_19, q_19, m_19, t);
      _fail(t);
    }
  else
    {
      ATerm w_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_19 = ATgetFirst((ATermList) t);
          c_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_19 = ATgetFirst((ATermList) t);
          j_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_19;
      t = i_0(t);
      t = d_19;
      t = j_0(t);
      w_19 = t;
      t = (ATerm) ATinsert(CheckATermList(j_19), w_19);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  if(match_string(t, "-i"))
    {
      t = c_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_20;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL;
  f_20 = t;
  t = term_d_17;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, f_20);
  t = w_5(g_20, f_20, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_20);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_7;
  t = whoami_0_0(t);
  h_20 = t;
  t = term_z_7;
  i_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_17), h_20);
  j_20 = t;
  t = SSL_printnl(i_20, j_20);
  t = term_d_8;
  k_20 = t;
  t = SSL_exit(k_20);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_5 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_50, m_50);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      t = SSL_addr(l_50, m_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_111(t);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm n_20 = NULL,o_20 = NULL,r_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_20 = ATgetFirst((ATermList) t);
            o_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_20;
        t = foldr_2_0(t_111, u_111, t);
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_20, r_20);
        t = u_111(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm z_3 = NULL,d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(z_3, d_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_20 = NULL,u_3 = NULL,v_3 = NULL;
  t = times_0_0(t);
  u_3 = t;
  t = SSL_explode_term(u_3);
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3;
  t = foldr_2_0(u_4, v_4, t);
  u_20 = t;
  t = SSL_TicksToSeconds(u_20);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,q_21 = NULL;
  n_21 = t;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_21;
        if((o_21 != t))
          {
            _fail(t);
          }
        t = n_21;
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = (ATerm) ATmakeAppl(sym__2, o_21, q_21);
        {
          ATerm a_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_21, q_21);
              ;
              LocalPopChoice(d_18);
            }
          else
            {
              t = a_18;
              t = SSL_gtr(o_21, q_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_21, q_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_21 = NULL,v_21 = NULL;
      t_21 = t;
      t = term_p_15;
      t = get_config_0_0(t);
      v_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_21, term_d_8);
      t = geq_0_0(t);
      t = t_21;
      t = y_108(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  t = run_time_0_0(t);
  x_21 = t;
  t = term_y_7;
  t = whoami_0_0(t);
  y_21 = t;
  t = term_z_7;
  z_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_18), x_21), term_h_18), y_21);
  a_22 = t;
  t = SSL_printnl(z_21, a_22);
  t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_18), x_21), term_h_18), y_21));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_10;
  b_22 = t;
  t = SSL_exit(b_22);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm j_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = j_18;
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      t = fetch_1_0(x_4, t);
    }
  t = e_85(t);
  return(t);
}
ATerm map_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm c_22 (ATerm t)
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = Cons_2_0(o_90, c_22, t);
      }
    return(t);
  }
  t = c_22(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_22 = ATgetFirst((ATermList) t);
      f_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_22 = NULL,k_22 = NULL;
        t = f_22;
        t = g_0(t);
        j_22 = t;
        t = e_22;
        t = e_0(t);
        k_22 = t;
        t = f_22;
        {
          ATerm z_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_22), k_22);
            return(t);
          }
          t = reverse_acc_2_0(e_0, z_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_7;
      t = g_0(t);
    }
  return(t);
}
ATerm t_5 (ATerm h_57, ATerm i_57, ATerm t)
{
  t = SSL_table_get(h_57, i_57);
  return(t);
}
ATerm Program_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,o_0 = NULL,r_0 = NULL;
  o_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_22);
  l_22 = t;
  t = m_22;
  t = e_71(t);
  n_22 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_22);
  o_0 = t;
  t = SSLsetAnnotations(o_0, l_22);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_22), term_y_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      t = fetch_1_0(a_5, t);
    }
  t = term_e_19;
  t = echo_0_0(t);
  t = term_l_16;
  r_22 = t;
  t = term_m_16;
  s_22 = t;
  t = term_f_19;
  t = t_5(r_22, s_22, t);
  t = reverse_acc_2_0(_id, b_5, t);
  t = map_1_0(j_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_71 (ATerm), ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,s_0 = NULL,t_0 = NULL;
  x_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_22);
  u_22 = t;
  t = v_22;
  t = f_71(t);
  w_22 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_22);
  s_0 = t;
  t = SSLsetAnnotations(s_0, u_22);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_19 = ATgetFirst((ATermList) t);
                ATerm k_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_23;
          }
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = (ATerm) ATinsert(ATempty, b_23);
      }
    c_23 = t;
    t = term_o_13;
    d_23 = t;
    t = SSL_printnl(d_23, c_23);
    t = b_23;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  t = term_l_19;
  h_23 = t;
  t = term_y_7;
  i_23 = t;
  t = term_n_19;
  t = w_5(h_23, i_23, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  t = term_l_19;
  j_23 = t;
  t = term_y_7;
  k_23 = t;
  t = term_n_19;
  t = w_5(j_23, k_23, t);
  t = term_r_19;
  l_23 = t;
  t = term_y_7;
  m_23 = t;
  t = term_s_19;
  t = w_5(l_23, m_23, t);
  t = term_t_19;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_6, d_6, e_6, t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = v_19;
      t = Option_3_0(g_6, l_6, o_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,u_0 = NULL,v_0 = NULL;
  s_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_23);
  n_23 = t;
  t = o_23;
  t = l_70(t);
  q_23 = t;
  t = p_23;
  t = m_70(t);
  r_23 = t;
  v_0 = t;
  t = (ATerm) ATinsert(CheckATermList(r_23), q_23);
  u_0 = t;
  t = SSLsetAnnotations(u_0, n_23);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  t = term_p_17;
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, x_23);
  t = w_5(y_23, x_23, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_20;
        t = f_101(t);
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
      }
    t = w_23;
    {
      ATerm v_6 (ATerm t)
      {
        ATerm b_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_20 = t;
            int l_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_20);
              }
            else
              {
                t = e_20;
                t = f_101(t);
                t = Cons_2_0(_id, v_6, t);
              }
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = b_20;
            {
              ATerm a_24 = NULL,b_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_24 = ATgetFirst((ATermList) t);
                  b_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_24), (ATerm) ATmakeAppl(sym_Undefined_1, a_24));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_6, v_6, t);
    }
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  if(match_string(t, "--help"))
    {
      t = p_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_24;
        }
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  t = term_v_18;
  q_24 = t;
  t = term_y_7;
  r_24 = t;
  t = term_m_20;
  t = w_5(q_24, r_24, t);
  t = term_p_20;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm b_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
  i_24 = t;
  t = term_l_16;
  l_24 = t;
  t = term_m_16;
  m_24 = t;
  t = (ATerm) ATempty;
  n_24 = t;
  t = SSL_table_put(l_24, m_24, n_24);
  t = i_24;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm s_20 = t;
      int t_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_101(t);
          ;
          LocalPopChoice(t_20);
        }
      else
        {
          t = s_20;
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_6, y_6, a_7, t);
                ;
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_6, t);
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_24 = NULL;
          y_24 = t;
          {
            ATerm z_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_4 = NULL;
                t = y_24;
                {
                  ATerm b_21 = t;
                  int c_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_21);
                    }
                  else
                    {
                      t = b_21;
                      t = fetch_1_0(b_7, t);
                    }
                  t = y_24;
                  t = default_system_usage_0_0(t);
                  t = term_w_10;
                  y_4 = t;
                  t = SSL_exit(y_4);
                }
                ;
                LocalPopChoice(a_21);
              }
            else
              {
                t = z_20;
                {
                  ATerm e_5 = NULL;
                  t = term_l_19;
                  t = get_config_0_0(t);
                  t = y_24;
                  t = default_system_about_0_0(t);
                  t = term_w_10;
                  e_5 = t;
                  t = SSL_exit(e_5);
                }
              }
          }
          ;
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          {
            ATerm d_21 = t;
            int e_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
                ATerm c_7 (ATerm t)
                {
                  ATerm d_7 (ATerm t)
                  {
                    if(((j_24 != NULL) && (j_24 != t)))
                      _fail(t);
                    else
                      j_24 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_7, t);
                  return(t);
                }
                t = fetch_1_0(c_7, t);
                t = term_z_7;
                z_24 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_24)), term_f_21);
                a_25 = t;
                t = SSL_printnl(z_24, a_25);
                t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_24)), term_f_21));
                t = default_system_usage_0_0(t);
                t = term_d_8;
                b_25 = t;
                t = SSL_exit(b_25);
                ;
                LocalPopChoice(e_21);
              }
            else
              {
                t = d_21;
              }
          }
        }
      k_24 = t;
      t = term_l_16;
      o_24 = t;
      t = SSL_table_destroy(o_24);
      t = k_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  t = parse_options_1_0(g_85, t);
  e_25 = t;
  t = term_g_21;
  f_25 = t;
  t = SSL_table_create(f_25);
  t = term_g_21;
  g_25 = t;
  t = term_h_21;
  h_25 = t;
  t = SSL_table_put(g_25, h_25, e_25);
  t = e_25;
  t = i_85(t);
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_85, t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_21);
            }
          else
            {
              t = k_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = if_verbose2_1_0(n_7, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  t = term_m_21;
  i_25 = t;
  t = term_y_7;
  j_25 = t;
  t = term_p_21;
  t = w_5(i_25, j_25, t);
  t = term_r_21;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  k_25 = t;
  t = term_p_17;
  t = get_config_0_0(t);
  l_25 = t;
  t = term_z_7;
  m_25 = t;
  t = (ATerm) ATinsert(ATempty, l_25);
  n_25 = t;
  t = SSL_printnl(m_25, n_25);
  t = k_25;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm u_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_84(t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = u_21;
        {
          ATerm d_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = d_22;
              {
                ATerm h_22 = t;
                int i_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_22);
                  }
                else
                  {
                    t = h_22;
                    {
                      ATerm p_22 = t;
                      int q_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_7, l_7, m_7, t);
                          ;
                          LocalPopChoice(q_22);
                        }
                      else
                        {
                          t = p_22;
                          {
                            ATerm y_22 = t;
                            int z_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_22);
                              }
                            else
                              {
                                t = y_22;
                                t = keep_option_0_0(t);
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
  ATerm g_7 (ATerm t)
  {
    ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
    o_25 = t;
    {
      ATerm a_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_25 != NULL) && (p_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_7, t);
          ;
          LocalPopChoice(e_23);
        }
      else
        {
          t = a_23;
          t = term_f_23;
          p_25 = t;
        }
      t = not_null(p_25);
      t = ReadFromFile_0_0(t);
      q_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_25, q_25);
      t = apply_strategy_1_0(p_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_7, r_84, f_7, g_7, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = _2_0(_id, stratego_ast_to_tg_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_7, _fail, default_usage_0_0, t);
  return(t);
}
