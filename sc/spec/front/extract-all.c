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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Con_3;
Symbol sym_StratRule_3;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_Rec_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Mod_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Anno_2;
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
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_c_36;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_b_34;
ATerm term_y_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_l_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_w_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_u_30;
ATerm term_r_30;
ATerm term_g_29;
ATerm term_u_28;
ATerm term_l_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_d_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_y_25;
ATerm term_q_25;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_b_21;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_c_15;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_e_13;
ATerm term_e_11;
ATerm term_u_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
void init_constant_terms (void)
{
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Op_2, term_d_16, (ATerm) ATempty);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_ConstType_1, term_e_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_27);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__3, term_w_34, term_x_34, term_p_22);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm);
ATerm Let_2_0 (ATerm e_89 (ATerm), ATerm f_89 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm crush_3_0 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_111 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm tsubs_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm joindefs_0_0 (ATerm);
ATerm OverloadedDef_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm);
ATerm Op_2_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm i_98 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm unzip_1_0 (ATerm q_107 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm u_85 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_113 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm);
ATerm Con_3_0 (ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm y_103 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm u_102 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm Thd_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm w_106 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm copy_1_0 (ATerm z_116 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm zipr_1_0 (ATerm o_107 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm z_113 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm);
ATerm zip_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm i_128 (ATerm), ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm g_129 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm i_129 (ATerm), ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm sort_defs_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm DefinitionName_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm);
ATerm union_1_0 (ATerm d_114 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm);
ATerm definition_names_0_0 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm w_84 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm b_85 (ATerm), ATerm);
ATerm _2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_122 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm n_121 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm p_124 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm z_120 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm);
ATerm crush_2_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_122 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm n_125 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm n_126 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm m_105 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm s_127 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_127 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm p_127 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm t_124 (ATerm), ATerm);
ATerm extract_all_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), i_2), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), h_2), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_10), i_2), term_n_10), h_2), term_m_10);
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if(match_cons(p_10, sym_Mod_2))
        {
          j_2 = ATgetArgument(p_10, 0);
          k_2 = ATgetArgument(p_10, 1);
        }
      else
        _fail(t);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), l_2), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), k_2), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), j_2), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_10), l_2), term_n_10), k_2), term_q_10), j_2), term_m_10);
  return(t);
}
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
          {
            n_2 = ATgetFirst((ATermList) r_10);
            o_2 = (ATerm) ATgetNext((ATermList) r_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_2), n_2);
  {
    ATerm m_0 (ATerm t)
    {
      ATerm s_10 = t;
      int t_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MissingDefMod_0_0(t);
          ;
          LocalPopChoice(t_10);
        }
      else
        {
          t = s_10;
          t = MissingDef_0_0(t);
        }
      return(t);
    }
    t = map_1_0(m_0, t);
    t = m_2;
  }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), p_2);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = p_2;
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_10);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  f_3 = t;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_3;
  if(match_cons(t, sym__2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_3;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = k_3;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_3;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_10 = ATgetFirst((ATermList) t);
            ATerm y_10 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(y_10) == AT_LIST) && !(ATisEmpty(y_10))))
              {
                ATerm z_10 = ATgetFirst((ATermList) y_10);
                ATerm a_11 = (ATerm) ATgetNext((ATermList) y_10);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm b_11 = t;
          if((PushChoice() == 0))
            {
              ATerm o_0 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm c_11 = ATgetArgument(t, 0);
                    if(((ATgetType(c_11) != AT_INT) || (ATgetInt((ATermInt) c_11) != 0)))
                      _fail(t);
                    {
                      ATerm d_11 = ATgetArgument(t, 1);
                      if(((ATgetType(d_11) != AT_INT) || (ATgetInt((ATermInt) d_11) != 0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(o_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_11;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_3), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, g_3), term_e_11);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        {
          ATerm d_1 = NULL,e_1 = NULL;
          t = g_3;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_11 = ATgetFirst((ATermList) t);
              if(match_cons(f_11, sym__2))
                {
                  d_1 = ATgetArgument(f_11, 0);
                  e_1 = ATgetArgument(f_11, 1);
                }
              else
                _fail(t);
              {
                ATerm g_11 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(g_11) != AT_LIST) || !(ATisEmpty(g_11))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATmakeAppl(sym__2, d_1, e_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATmakeAppl(sym__2, d_1, e_1));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL,u_3 = NULL,w_3 = NULL;
  w_3 = t;
  if(match_cons(t, sym_Rec_2))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_3);
  o_3 = t;
  t = p_3;
  t = b_90(t);
  s_3 = t;
  t = q_3;
  t = c_90(t);
  u_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, s_3, u_3), o_3);
  return(t);
}
ATerm SDefT_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,f_4 = NULL,h_4 = NULL,n_4 = NULL,o_4 = NULL,t_4 = NULL,x_4 = NULL,a_5 = NULL,b_5 = NULL,d_5 = NULL;
  d_5 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
      n_4 = ATgetArgument(t, 2);
      o_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_5);
  c_4 = t;
  t = f_4;
  t = w_91(t);
  t_4 = t;
  t = h_4;
  t = x_91(t);
  x_4 = t;
  t = n_4;
  t = y_91(t);
  a_5 = t;
  t = o_4;
  t = z_91(t);
  b_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, t_4, x_4, a_5, b_5), c_4);
  return(t);
}
ATerm SDef_3_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym_SDef_3))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
      l_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_5);
  i_5 = t;
  t = j_5;
  t = t_91(t);
  n_5 = t;
  t = k_5;
  t = u_91(t);
  o_5 = t;
  t = l_5;
  t = v_91(t);
  p_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, n_5, o_5, p_5), i_5);
  return(t);
}
ATerm Let_2_0 (ATerm e_89 (ATerm), ATerm f_89 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,c_6 = NULL,e_6 = NULL;
  e_6 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_6);
  x_5 = t;
  t = y_5;
  t = e_89(t);
  a_6 = t;
  t = z_5;
  t = f_89(t);
  c_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, a_6, c_6), x_5);
  return(t);
}
ATerm sboundin_3_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(z_101, z_101, t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(b_102, b_102, z_101, t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            {
              ATerm l_11 = t;
              int m_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(b_102, b_102, b_102, z_101, t);
                  ;
                  LocalPopChoice(m_11);
                }
              else
                {
                  t = l_11;
                  t = Rec_2_0(b_102, z_101, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm i_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
      {
        ATerm o_11 = ATgetArgument(t, 2);
      }
      {
        ATerm p_11 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = i_6;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
      {
        ATerm r_11 = ATgetArgument(t, 2);
      }
      {
        ATerm s_11 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = j_6;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm p_6 = NULL;
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            p_6 = ATgetArgument(t, 0);
            {
              ATerm v_11 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_11);
        t = p_6;
      }
    else
      {
        t = t_11;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            p_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_6;
      }
    return(t);
  }
  t = map_1_0(p_0, t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm c_7 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm w_11 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
      {
        ATerm x_11 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_7;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      e_7 = ATgetArgument(t, 0);
      {
        ATerm y_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_7;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm l_9 = NULL;
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              l_9 = ATgetArgument(t, 0);
              {
                ATerm b_12 = ATgetArgument(t, 1);
              }
              {
                ATerm c_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(a_12);
          t = l_9;
        }
      else
        {
          t = z_11;
          if(match_cons(t, sym_SDefT_4))
            {
              l_9 = ATgetArgument(t, 0);
              {
                ATerm d_12 = ATgetArgument(t, 1);
              }
              {
                ATerm e_12 = ATgetArgument(t, 2);
              }
              {
                ATerm f_12 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = l_9;
        }
      return(t);
    }
    t = map_1_0(q_0, t);
  }
  return(t);
}
ATerm crush_3_0 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,l_12 = NULL;
  i_12 = t;
  t = SSL_explode_term(i_12);
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12;
  t = foldr_3_0(q_114, r_114, s_114, t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_111 (ATerm), ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm h_12 = t;
      int j_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_111(t);
          ;
          LocalPopChoice(j_12);
        }
      else
        {
          t = h_12;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm k_12 = t;
      int n_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_12 = NULL,s_12 = NULL;
          m_12 = t;
          t = d_111(t);
          s_12 = t;
          t = m_12;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = s_12;
                return(t);
              }
              t = split_2_0(t_12, v_0, t);
              t = diff_1_0(f_111, t);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = e_111(t_0, t_12, u_0, t);
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3_0(w_0, union_0_0, _id, t);
            }
          }
          ;
          LocalPopChoice(n_12);
        }
      else
        {
          t = k_12;
          {
            ATerm x_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3_0(x_0, union_0_0, t_12, t);
          }
        }
      return(t);
    }
    t = split_2_0(r_0, s_0, t);
    t = union_0_0(t);
    return(t);
  }
  t = t_12(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm x_12 = NULL,y_12 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        ATerm o_12 = ATgetArgument(t, 0);
        if(match_cons(o_12, sym_SVar_1))
          {
            x_12 = ATgetArgument(o_12, 0);
          }
        else
          _fail(t);
        y_12 = ATgetArgument(t, 1);
        k_13 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = y_12;
    t = length_0_0(t);
    l_13 = t;
    t = k_13;
    t = length_0_0(t);
    m_13 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_12, (ATerm) ATmakeAppl(sym__2, l_13, m_13)));
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm r_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(u_12);
            }
          else
            {
              t = r_12;
              {
                ATerm v_12 = t;
                int w_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_13 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        z_13 = ATgetArgument(t, 0);
                        {
                          ATerm z_12 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, z_13);
                    ;
                    LocalPopChoice(w_12);
                  }
                else
                  {
                    t = v_12;
                    {
                      ATerm a_13 = t;
                      int b_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(b_13);
                        }
                      else
                        {
                          t = a_13;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm g_14 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_13 = ATgetArgument(t, 0);
        if(match_cons(c_13, sym__2))
          {
            g_14 = ATgetArgument(c_13, 0);
            {
              ATerm d_13 = ATgetArgument(c_13, 1);
            }
          }
        else
          _fail(t);
        if((g_14 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4_0(y_0, z_0, sboundin_3_0, a_1, t);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_e_13;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm q_14 = NULL,i_1 = NULL,m_1 = NULL;
    q_14 = t;
    t = SSL_explode_term(q_14);
    if(match_cons(t, sym__2))
      {
        ATerm f_13 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) f_13) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm g_13 = ATgetArgument(t, 1);
          if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
            {
              i_1 = ATgetFirst((ATermList) g_13);
              {
                ATerm h_13 = (ATerm) ATgetNext((ATermList) g_13);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = SSL_explode_term(q_14);
    if(match_cons(t, sym__2))
      {
        ATerm i_13 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) i_13) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm j_13 = ATgetArgument(t, 1);
          if(((ATgetType(j_13) == AT_LIST) && !(ATisEmpty(j_13))))
            {
              ATerm n_13 = ATgetFirst((ATermList) j_13);
              ATerm o_13 = (ATerm) ATgetNext((ATermList) j_13);
              if(((ATgetType(o_13) == AT_LIST) && !(ATisEmpty(o_13))))
                {
                  m_1 = ATgetFirst((ATermList) o_13);
                  {
                    ATerm p_13 = (ATerm) ATgetNext((ATermList) o_13);
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
    t = (ATerm) ATmakeAppl(sym_Choice_2, i_1, m_1);
    return(t);
  }
  t = foldr_2_0(b_1, c_1, t);
  return(t);
}
ATerm tsubs_0_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm y_14 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        y_14 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = y_14;
    return(t);
  }
  t = substitute_1_0(f_1, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_15 = NULL,u_15 = NULL,i_16 = NULL,k_16 = NULL,n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_16 = ATgetFirst((ATermList) t);
      o_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_16;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_15;
            if((i_16 != t))
              {
                _fail(t);
              }
            t = u_15;
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            t = (ATerm) ATmakeAppl(sym__2, i_16, o_16);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, i_16, o_16);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  t = s_102(t);
  a_17 = t;
  t = t_102(t);
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, b_17);
  t = lookup_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm e_17 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_104(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        t = SRTS_all(e_17, t);
      }
    return(t);
  }
  t = e_17(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  g_17 = t;
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_13 = ATgetArgument(t, 0);
            ATerm x_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(v_13);
        t = g_17;
      }
    else
      {
        t = u_13;
        {
          ATerm n_17 = NULL;
          if(match_cons(t, sym__3))
            {
              h_17 = ATgetArgument(t, 0);
              i_17 = ATgetArgument(t, 1);
              j_17 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_17, i_17);
          t = zip_1_0(_id, t);
          n_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_17, j_17);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_17;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm h_1 (ATerm t)
      {
        t = p_17;
        return(t);
      }
      t = SubsVar_2_0(d_102, h_1, t);
      t = e_102(t);
      return(t);
    }
    t = alltd_1_0(g_1, t);
  }
  return(t);
}
ATerm substitute_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  t = substitute_2_0(f_102, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm w_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        y_17 = ATgetArgument(t, 0);
        a_18 = ATgetArgument(t, 1);
        w_17 = ATgetArgument(t, 2);
        t = y_17;
        if(match_cons(t, sym_SVar_1))
          {
            z_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_17;
      }
    else
      {
        if(match_cons(t, sym_Call_2))
          {
            y_17 = ATgetArgument(t, 0);
            a_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_17;
        if(match_cons(t, sym_SVar_1))
          {
            z_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_17;
      }
    return(t);
  }
  t = substitute_1_0(j_1, t);
  return(t);
}
ATerm VarDec_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  i_18 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_18);
  d_18 = t;
  t = e_18;
  t = p_91(t);
  g_18 = t;
  t = f_18;
  t = q_91(t);
  h_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, g_18, h_18), d_18);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,w_18 = NULL;
  m_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_13 = ATgetFirst((ATermList) t);
      if(match_cons(y_13, sym_SDefT_4))
        {
          n_18 = ATgetArgument(y_13, 0);
          o_18 = ATgetArgument(y_13, 1);
          p_18 = ATgetArgument(y_13, 2);
          {
            ATerm b_14 = ATgetArgument(y_13, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm a_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_18;
  {
    ATerm k_1 (ATerm t)
    {
      t = VarDec_2_0(new_0_0, _id, t);
      return(t);
    }
    t = map_1_0(k_1, t);
    r_18 = t;
    t = p_18;
    {
      ATerm l_1 (ATerm t)
      {
        t = VarDec_2_0(new_0_0, _id, t);
        return(t);
      }
      t = map_1_0(l_1, t);
      s_18 = t;
      t = r_18;
      {
        ATerm n_1 (ATerm t)
        {
          ATerm x_18 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              x_18 = ATgetArgument(t, 0);
              {
                ATerm c_14 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_18), (ATerm)ATempty, (ATerm) ATempty);
          return(t);
        }
        t = map_1_0(n_1, t);
        t_18 = t;
        t = s_18;
        {
          ATerm o_1 (ATerm t)
          {
            ATerm y_18 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                y_18 = ATgetArgument(t, 0);
                {
                  ATerm d_14 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, y_18);
            return(t);
          }
          t = map_1_0(o_1, t);
          u_18 = t;
          t = m_18;
          {
            ATerm p_1 (ATerm t)
            {
              ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,d_19 = NULL,e_19 = NULL,h_19 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  ATerm e_14 = ATgetArgument(t, 0);
                  z_18 = ATgetArgument(t, 1);
                  a_19 = ATgetArgument(t, 2);
                  b_19 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = a_19;
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm i_19 = NULL;
                  if(match_cons(t, sym_VarDec_2))
                    {
                      i_19 = ATgetArgument(t, 0);
                      {
                        ATerm f_14 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = i_19;
                  return(t);
                }
                t = map_1_0(q_1, t);
                d_19 = t;
                t = z_18;
                {
                  ATerm r_1 (ATerm t)
                  {
                    ATerm j_19 = NULL;
                    if(match_cons(t, sym_VarDec_2))
                      {
                        j_19 = ATgetArgument(t, 0);
                        {
                          ATerm h_14 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = j_19;
                    return(t);
                  }
                  t = map_1_0(r_1, t);
                  e_19 = t;
                  t = (ATerm) ATmakeAppl(sym__3, e_19, t_18, b_19);
                  t = ssubs_0_0(t);
                  h_19 = t;
                  t = (ATerm) ATmakeAppl(sym__3, d_19, u_18, h_19);
                  t = tsubs_0_0(t);
                }
              }
              return(t);
            }
            t = map_1_0(p_1, t);
            t = choices_0_0(t);
            w_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_18, r_18, s_18, w_18);
          }
        }
      }
    }
  }
  return(t);
}
ATerm joindefs_0_0 (ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL,o_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_19 = ATgetFirst((ATermList) t);
          o_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_19;
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_14 = ATgetArgument(t, 0);
      if(match_cons(k_14, sym__2))
        {
          q_19 = ATgetArgument(k_14, 0);
          r_19 = ATgetArgument(k_14, 1);
        }
      else
        _fail(t);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_19, r_19);
  t = Definitions_0_0(t);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, s_19);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  w_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      x_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
      {
        ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
        t = w_19;
        t = new_0_0(t);
        a_20 = t;
        t = new_0_0(t);
        b_20 = t;
        t = new_0_0(t);
        c_20 = t;
        t = new_0_0(t);
        d_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_20), c_20), b_20), a_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, a_20), (ATerm) ATmakeAppl(sym_Var_1, c_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, x_19, (ATerm)ATmakeAppl(sym_Var_1, a_20), (ATerm) ATmakeAppl(sym_Var_1, b_20)), (ATerm) ATmakeAppl(sym_BAM_3, v_19, (ATerm)ATmakeAppl(sym_Var_1, c_20), (ATerm) ATmakeAppl(sym_Var_1, d_20)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_14, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_20)), (ATerm) ATmakeAppl(sym_Var_1, b_20))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          x_19 = ATgetArgument(t, 0);
          {
            ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
            t = w_19;
            t = new_0_0(t);
            f_20 = t;
            t = x_19;
            {
              ATerm s_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    g_20 = ATgetArgument(t, 0);
                    h_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, f_20);
                return(t);
              }
              t = oncetd_1_0(s_1, t);
              i_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_14, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_20)), not_null(g_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_20)), (ATerm) ATmakeAppl(sym_Build_1, i_20))));
            }
          }
        }
      else
        {
          ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              x_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_19;
          t = new_0_0(t);
          k_20 = t;
          t = new_0_0(t);
          l_20 = t;
          t = x_19;
          {
            ATerm t_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  m_20 = ATgetArgument(t, 0);
                  n_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, k_20);
              return(t);
            }
            t = oncetd_1_0(t_1, t);
            o_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_m_14, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_20))))), (ATerm)ATmakeAppl(sym_Var_1, k_20), (ATerm) ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_20)), not_null(m_20)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  q_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
        t = q_20;
        t = new_0_0(t);
        t_20 = t;
        t = r_20;
        {
          ATerm x_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                v_20 = ATgetArgument(t, 0);
                u_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_20), v_20);
            return(t);
          }
          t = pat_td_1_0(x_1, t);
          w_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_14, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_20))))));
        }
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
              t = q_20;
              t = new_0_0(t);
              y_20 = t;
              t = r_20;
              {
                ATerm y_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      z_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, y_20);
                  return(t);
                }
                t = pat_td_1_0(y_1, t);
                a_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_20)), not_null(z_20))));
              }
              ;
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              {
                ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
                t = q_20;
                t = new_0_0(t);
                c_21 = t;
                t = r_20;
                {
                  ATerm z_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        d_21 = ATgetArgument(t, 0);
                        e_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_21);
                    return(t);
                  }
                  t = pat_td_1_0(z_1, t);
                  f_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_21)), not_null(d_21)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Mapp0_0_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_21;
  {
    ATerm a_2 (ATerm t)
    {
      if(match_cons(t, sym_RootApp_1))
        {
          ATerm u_14 = ATgetArgument(t, 0);
          if(match_cons(u_14, sym_Match_1))
            {
              h_21 = ATgetArgument(u_14, 0);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = h_21;
      return(t);
    }
    t = pat_td_1_0(a_2, t);
    i_21 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, i_21);
  }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm x_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
            if(match_cons(t, sym_Match_1))
              {
                m_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_21;
            if(match_cons(t, sym_RootApp_1))
              {
                n_21 = ATgetArgument(t, 0);
                t = n_21;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    n_21 = ATgetArgument(t, 0);
                    o_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_BA_2, n_21, o_21);
              }
            ;
            LocalPopChoice(z_14);
          }
        else
          {
            t = x_14;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  t_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
        t = t_21;
        t = new_0_0(t);
        w_21 = t;
        t = u_21;
        {
          ATerm b_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                x_21 = ATgetArgument(t, 0);
                y_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_21);
            return(t);
          }
          t = pat_td_1_0(b_2, t);
          z_21 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), not_null(x_21))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_21)))), (ATerm) ATmakeAppl(sym_Build_1, z_21)));
        }
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        {
          ATerm d_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
              t = t_21;
              t = new_0_0(t);
              b_22 = t;
              t = u_21;
              {
                ATerm f_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, b_22);
                  return(t);
                }
                t = pat_td_1_0(f_2, t);
                d_22 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_22)))), (ATerm) ATmakeAppl(sym_Build_1, d_22)));
              }
              ;
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
              {
                ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
                t = t_21;
                t = new_0_0(t);
                f_22 = t;
                t = u_21;
                {
                  ATerm g_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        g_22 = ATgetArgument(t, 0);
                        h_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_22);
                    return(t);
                  }
                  t = pat_td_1_0(g_2, t);
                  i_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_22), not_null(h_22), (ATerm) ATmakeAppl(sym_Var_1, f_22))), (ATerm) ATmakeAppl(sym_Build_1, i_22)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
  o_22 = t;
  if(match_cons(t, sym_As_2))
    {
      k_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_22);
  j_22 = t;
  t = k_22;
  t = l_86(t);
  m_22 = t;
  t = l_22;
  t = m_86(t);
  n_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, m_22, n_22), j_22);
  return(t);
}
ATerm PrimT_3_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  z_22 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
      v_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_22);
  s_22 = t;
  t = t_22;
  t = k_90(t);
  w_22 = t;
  t = u_22;
  t = l_90(t);
  x_22 = t;
  t = v_22;
  t = m_90(t);
  y_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, w_22, x_22, y_22), s_22);
  return(t);
}
ATerm Explode_2_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  i_23 = t;
  if(match_cons(t, sym_Explode_2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_23);
  d_23 = t;
  t = e_23;
  t = e_86(t);
  g_23 = t;
  t = f_23;
  t = f_86(t);
  h_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, g_23, h_23), d_23);
  return(t);
}
ATerm Op_2_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  r_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      n_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_23);
  m_23 = t;
  t = n_23;
  t = a_86(t);
  p_23 = t;
  t = o_23;
  t = b_86(t);
  q_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, p_23, q_23), m_23);
  return(t);
}
ATerm pat_td_1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_98(t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm t_2 (ATerm t)
              {
                t = pat_td_1_0(i_98, t);
                return(t);
              }
              t = fetch_1_0(t_2, t);
              return(t);
            }
            t = Op_2_0(_id, q_2, t);
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            {
              ATerm j_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_2 (ATerm t)
                  {
                    t = pat_td_1_0(i_98, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, u_2, t);
                  ;
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = j_15;
                  {
                    ATerm l_15 = t;
                    int n_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_2 (ATerm t)
                        {
                          t = pat_td_1_0(i_98, t);
                          return(t);
                        }
                        t = Explode_2_0(x_2, _id, t);
                        ;
                        LocalPopChoice(n_15);
                      }
                    else
                      {
                        t = l_15;
                        {
                          ATerm o_15 = t;
                          int p_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_2 (ATerm t)
                              {
                                ATerm z_2 (ATerm t)
                                {
                                  t = pat_td_1_0(i_98, t);
                                  return(t);
                                }
                                t = fetch_1_0(z_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, y_2, t);
                              ;
                              LocalPopChoice(p_15);
                            }
                          else
                            {
                              t = o_15;
                              {
                                ATerm a_3 (ATerm t)
                                {
                                  t = pat_td_1_0(i_98, t);
                                  return(t);
                                }
                                t = As_2_0(_id, a_3, t);
                              }
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
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm x_23 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      x_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL,a_24 = NULL;
        t = x_23;
        {
          ATerm b_3 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm s_15 = ATgetArgument(t, 0);
                if(match_cons(s_15, sym_Build_1))
                  {
                    z_23 = ATgetArgument(s_15, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = z_23;
            return(t);
          }
          t = pat_td_1_0(b_3, t);
          a_24 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, a_24);
        }
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        {
          ATerm c_24 = NULL,d_24 = NULL;
          t = x_23;
          {
            ATerm c_3 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm t_15 = ATgetArgument(t, 0);
                  if(match_cons(t_15, sym_Build_1))
                    {
                      c_24 = ATgetArgument(t_15, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_15 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = c_24;
              return(t);
            }
            t = pat_td_1_0(c_3, t);
            d_24 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, d_24);
          }
        }
      }
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
            if(match_cons(t, sym_Build_1))
              {
                h_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_24;
            if(match_cons(t, sym_RootApp_1))
              {
                i_24 = ATgetArgument(t, 0);
                t = i_24;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    i_24 = ATgetArgument(t, 0);
                    j_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_24), i_24);
              }
            ;
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm d_3 (ATerm t)
        {
          ATerm e_3 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(e_3, t);
          return(t);
        }
        t = Cons_2_0(_id, d_3, t);
      }
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        ATerm h_3 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, h_3, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,w_24 = NULL,x_24 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, w_24, x_24);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          w_24 = ATgetArgument(t, 0);
          t = w_24;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_24 = ATgetFirst((ATermList) t);
              s_24 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, r_24, (ATerm) ATmakeAppl(sym_LChoices_1, s_24));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_13;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              w_24 = ATgetArgument(t, 0);
              t = w_24;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_24 = ATgetFirst((ATermList) t);
                  s_24 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, r_24, (ATerm) ATmakeAppl(sym_Choices_1, s_24));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_13;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  w_24 = ATgetArgument(t, 0);
                  t = w_24;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_24 = ATgetFirst((ATermList) t);
                      s_24 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_24, (ATerm) ATmakeAppl(sym_Seqs_1, s_24));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_c_16;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_24 = ATgetArgument(t, 0);
                      x_24 = ATgetArgument(t, 1);
                      u_24 = ATgetArgument(t, 2);
                      t_24 = ATgetArgument(t, 3);
                      {
                        ATerm k_25 = NULL,l_25 = NULL;
                        t = x_24;
                        {
                          ATerm l_3 (ATerm t)
                          {
                            ATerm m_25 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                m_25 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, m_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_16), term_f_16));
                            return(t);
                          }
                          t = map1_1_0(l_3, t);
                          k_25 = t;
                          t = u_24;
                          {
                            ATerm m_3 (ATerm t)
                            {
                              ATerm n_3 (ATerm t)
                              {
                                ATerm n_25 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    n_25 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, n_25, term_f_16);
                                return(t);
                              }
                              t = try_1_0(n_3, t);
                              return(t);
                            }
                            t = map1_1_0(m_3, t);
                            l_25 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, w_24, k_25, l_25, t_24);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          w_24 = ATgetArgument(t, 0);
                          x_24 = ATgetArgument(t, 1);
                          u_24 = ATgetArgument(t, 2);
                          t_24 = ATgetArgument(t, 3);
                          {
                            ATerm g_16 = t;
                            int h_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_25 = NULL,t_25 = NULL;
                                t = u_24;
                                {
                                  ATerm t_3 (ATerm t)
                                  {
                                    ATerm u_25 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        u_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, u_25, term_f_16);
                                    return(t);
                                  }
                                  t = map1_1_0(t_3, t);
                                  s_25 = t;
                                  t = x_24;
                                  {
                                    ATerm v_3 (ATerm t)
                                    {
                                      ATerm x_3 (ATerm t)
                                      {
                                        ATerm v_25 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            v_25 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_16), term_f_16));
                                        return(t);
                                      }
                                      t = try_1_0(x_3, t);
                                      return(t);
                                    }
                                    t = map_1_0(v_3, t);
                                    t_25 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, w_24, t_25, s_25, t_24);
                                  }
                                }
                                ;
                                LocalPopChoice(h_16);
                              }
                            else
                              {
                                t = g_16;
                                {
                                  ATerm a_26 = NULL,b_26 = NULL;
                                  t = x_24;
                                  {
                                    ATerm y_3 (ATerm t)
                                    {
                                      ATerm c_26 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          c_26 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, c_26, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_16), term_f_16));
                                      return(t);
                                    }
                                    t = map1_1_0(y_3, t);
                                    a_26 = t;
                                    t = u_24;
                                    {
                                      ATerm a_4 (ATerm t)
                                      {
                                        ATerm b_4 (ATerm t)
                                        {
                                          ATerm d_26 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              d_26 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, d_26, term_f_16);
                                          return(t);
                                        }
                                        t = try_1_0(b_4, t);
                                        return(t);
                                      }
                                      t = map_1_0(a_4, t);
                                      b_26 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_24, a_26, b_26, t_24);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              w_24 = ATgetArgument(t, 0);
                              x_24 = ATgetArgument(t, 1);
                              u_24 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, x_24, (ATerm) ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, u_24), w_24)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  w_24 = ATgetArgument(t, 0);
                                  x_24 = ATgetArgument(t, 1);
                                  u_24 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, u_24)), w_24), (ATerm) ATmakeAppl(sym_Build_1, x_24)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      w_24 = ATgetArgument(t, 0);
                                      x_24 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_24, (ATerm) ATmakeAppl(sym_Match_1, x_24));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          w_24 = ATgetArgument(t, 0);
                                          x_24 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_24), x_24);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              w_24 = ATgetArgument(t, 0);
                                              x_24 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_24), w_24);
                                        }
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
ATerm unzip_1_0 (ATerm q_107 (ATerm), ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_j_16;
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm q_26 = NULL,r_26 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_26 = ATgetFirst((ATermList) t);
        r_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, q_26, r_26);
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_16 = ATgetArgument(t, 0);
        if(match_cons(l_16, sym__2))
          {
            s_26 = ATgetArgument(l_16, 0);
            u_26 = ATgetArgument(l_16, 1);
          }
        else
          _fail(t);
        {
          ATerm m_16 = ATgetArgument(t, 1);
          if(match_cons(m_16, sym__2))
            {
              t_26 = ATgetArgument(m_16, 0);
              v_26 = ATgetArgument(m_16, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_26), s_26), (ATerm) ATinsert(CheckATermList(v_26), u_26));
    return(t);
  }
  t = genzip_4_0(d_4, e_4, g_4, q_107, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm e_27 (ATerm y_26, ATerm t)
  {
    ATerm a_27 = NULL;
    t = y_26;
    {
      ATerm p_16 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_16;
        }
      t = new_0_0(t);
      a_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, a_27), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_27)))), (ATerm) ATmakeAppl(sym_Var_1, a_27)));
    }
    return(t);
  }
  ATerm b_27 = NULL,c_27 = NULL;
  b_27 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_27 = ATgetArgument(t, 0);
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_27(b_27, t);
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATmakeAppl(sym_Var_1, c_27)));
          }
      }
    }
  else
    {
      t = e_27(b_27, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm u_85 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_27);
  f_27 = t;
  t = g_27;
  t = u_85(t);
  h_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, h_27), f_27);
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      j_28 = ATgetArgument(t, 0);
      k_28 = ATgetArgument(t, 1);
      h_28 = ATgetArgument(t, 2);
      {
        ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL;
        t = h_28;
        {
          ATerm i_4 (ATerm t)
          {
            ATerm s_16 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_16;
              }
            return(t);
          }
          t = fetch_1_0(i_4, t);
          t = h_28;
          t = unzip_1_0(LiftPrimArg_0_0, t);
          {
            ATerm k_4 (ATerm t)
            {
              t = unzip_1_0(_id, t);
              return(t);
            }
            t = _2_0(concat_0_0, k_4, t);
            if(match_cons(t, sym__2))
              {
                u_1 = ATgetArgument(t, 0);
                {
                  ATerm t_16 = ATgetArgument(t, 1);
                  if(match_cons(t_16, sym__2))
                    {
                      v_1 = ATgetArgument(t_16, 0);
                      w_1 = ATgetArgument(t_16, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, u_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_1), (ATerm) ATmakeAppl(sym_PrimT_3, j_28, k_28, w_1)));
          }
        }
      }
    }
  else
    {
      ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          j_28 = ATgetArgument(t, 0);
          k_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_28;
      {
        ATerm l_4 (ATerm t)
        {
          ATerm u_16 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_16;
            }
          return(t);
        }
        t = fetch_1_0(l_4, t);
        t = k_28;
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm p_4 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, p_4, t);
          if(match_cons(t, sym__2))
            {
              c_2 = ATgetArgument(t, 0);
              {
                ATerm v_16 = ATgetArgument(t, 1);
                if(match_cons(v_16, sym__2))
                  {
                    d_2 = ATgetArgument(v_16, 0);
                    e_2 = ATgetArgument(v_16, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, c_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_2), (ATerm) ATmakeAppl(sym_PrimT_3, j_28, (ATerm)ATempty, e_2)));
        }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_113 (ATerm), ATerm t)
{
  ATerm n_28 (ATerm t)
  {
    ATerm q_4 (ATerm t)
    {
      t = b_113(t);
      t = n_28(t);
      return(t);
    }
    t = try_1_0(q_4, t);
    return(t);
  }
  t = n_28(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm w_16 = t;
  if((PushChoice() == 0))
    {
      ATerm r_4 (ATerm t)
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(r_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_16;
    }
  return(t);
}
ATerm App_2_0 (ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  t_28 = t;
  if(match_cons(t, sym_App_2))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_28);
  o_28 = t;
  t = p_28;
  t = i_86(t);
  r_28 = t;
  t = q_28;
  t = j_86(t);
  s_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, r_28, s_28), o_28);
  return(t);
}
ATerm Con_3_0 (ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  e_29 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_28 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
      a_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_29);
  x_28 = t;
  t = y_28;
  t = u_86(t);
  b_29 = t;
  t = z_28;
  t = v_86(t);
  c_29 = t;
  t = a_29;
  t = w_86(t);
  d_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, b_29, c_29, d_29), x_28);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm z_16 = t;
  if((PushChoice() == 0))
    {
      ATerm s_4 (ATerm t)
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(s_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_16;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      l_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_29;
  if(match_cons(t, sym_StratRule_3))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
      o_29 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_29), (ATerm) ATmakeAppl(sym_Where_1, o_29)), m_29));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          m_29 = ATgetArgument(t, 0);
          n_29 = ATgetArgument(t, 1);
          o_29 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_29;
      t = pureterm_0_0(t);
      t = n_29;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, n_29)), (ATerm) ATmakeAppl(sym_Where_1, o_29)), (ATerm) ATmakeAppl(sym_Match_1, m_29)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
  a_30 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_30);
  v_29 = t;
  t = w_29;
  t = o_89(t);
  y_29 = t;
  t = x_29;
  t = p_89(t);
  z_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, y_29, z_29), v_29);
  return(t);
}
ATerm oncetd_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm e_30 (ATerm t)
  {
    ATerm f_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_103(t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = f_17;
        t = SRTS_one(e_30, t);
      }
    return(t);
  }
  t = e_30(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm l_17 = ATgetArgument(t, 0);
      if(match_cons(l_17, sym_Rule_3))
        {
          f_30 = ATgetArgument(l_17, 0);
          g_30 = ATgetArgument(l_17, 1);
          h_30 = ATgetArgument(l_17, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  i_30 = t;
  t = f_30;
  {
    ATerm u_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm m_17 = ATgetArgument(t, 0);
          if(match_cons(m_17, sym_Var_1))
            {
              k_30 = ATgetArgument(m_17, 0);
            }
          else
            _fail(t);
          j_30 = ATgetArgument(t, 1);
          {
            ATerm q_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, k_30);
      return(t);
    }
    t = oncetd_1_0(u_4, t);
    l_30 = t;
    t = g_30;
    {
      ATerm v_4 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm r_17 = ATgetArgument(t, 0);
            if(match_cons(r_17, sym_Var_1))
              {
                k_30 = ATgetArgument(r_17, 0);
              }
            else
              _fail(t);
            m_30 = ATgetArgument(t, 1);
            {
              ATerm s_17 = ATgetArgument(t, 2);
              if(match_cons(s_17, sym_CallT_3))
                {
                  n_30 = ATgetArgument(s_17, 0);
                  {
                    ATerm t_17 = ATgetArgument(s_17, 1);
                    if(((ATgetType(t_17) != AT_LIST) || !(ATisEmpty(t_17))))
                      _fail(t);
                  }
                  {
                    ATerm u_17 = ATgetArgument(s_17, 2);
                    if(((ATgetType(u_17) != AT_LIST) || !(ATisEmpty(u_17))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, i_30);
        return(t);
      }
      t = oncetd_1_0(v_4, t);
      o_30 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_30), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, l_30, o_30, (ATerm) ATmakeAppl(sym_Seq_2, h_30, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(n_30), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_30), not_null(m_30), term_c_16))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_30)), (ATerm) ATmakeAppl(sym_Var_1, i_30))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm v_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = v_17;
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(w_4, t);
  return(t);
}
ATerm topdown_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  t = u_102(t);
  {
    ATerm y_4 (ATerm t)
    {
      t = topdown_1_0(u_102, t);
      return(t);
    }
    t = SRTS_all(y_4, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm c_5 (ATerm t)
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            {
              ATerm l_18 = t;
              int q_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(q_18);
                }
              else
                {
                  t = l_18;
                  {
                    ATerm v_18 = t;
                    int c_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(c_19);
                      }
                    else
                      {
                        t = v_18;
                        {
                          ATerm f_19 = t;
                          int g_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(g_19);
                            }
                          else
                            {
                              t = f_19;
                              t = Expl_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1_0(c_5, t);
    }
    return(t);
  }
  t = topdown_1_0(z_4, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Thd_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL;
  r_2 = t;
  t = SSL_explode_term(r_2);
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_19 = ATgetArgument(t, 1);
        if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
          {
            s_2 = ATgetFirst((ATermList) l_19);
            {
              ATerm m_19 = (ATerm) ATgetNext((ATermList) l_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_2;
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm s_30 = NULL;
  ATerm x_30 (ATerm t)
  {
    ATerm p_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL,v_30 = NULL,w_30 = NULL;
        t_30 = t;
        t = map_1_0(Thd_0_0, t);
        t = w_106(t);
        v_30 = t;
        t = t_30;
        {
          ATerm e_5 (ATerm t)
          {
            ATerm v_2 = NULL,w_2 = NULL;
            v_2 = t;
            t = SSL_explode_term(v_2);
            if(match_cons(t, sym__2))
              {
                ATerm y_19 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_19) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm z_19 = ATgetArgument(t, 1);
                  if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
                    {
                      ATerm e_20 = ATgetFirst((ATermList) z_19);
                      w_2 = (ATerm) ATgetNext((ATermList) z_19);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), w_2);
            return(t);
          }
          t = map_1_0(e_5, t);
          t = x_30(t);
          w_30 = t;
          t = (ATerm) ATinsert(CheckATermList(w_30), v_30);
        }
        ;
        LocalPopChoice(u_19);
      }
    else
      {
        t = p_19;
        {
          ATerm f_5 (ATerm t)
          {
            if(!(match_cons(t, sym__0)))
              _fail(t);
            return(t);
          }
          t = map_1_0(f_5, t);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = x_30(t);
  s_30 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), s_30);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  {
    ATerm j_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
        t = y_30;
        t = new_0_0(t);
        a_31 = t;
        t = new_0_0(t);
        b_31 = t;
        t = new_0_0(t);
        c_31 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_31), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, y_30), (ATerm) ATmakeAppl(sym_Var_1, b_31))), (ATerm) ATmakeAppl(sym_Var_1, c_31)), (ATerm)ATmakeAppl(sym_VarDec_2, a_31, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_16), term_f_16)), b_31, (ATerm)ATmakeAppl(sym_Var_1, b_31), c_31, (ATerm) ATmakeAppl(sym_Var_1, c_31));
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = j_20;
        {
          ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
          t = y_30;
          t = new_0_0(t);
          e_31 = t;
          t = new_0_0(t);
          f_31 = t;
          t = new_0_0(t);
          g_31 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_31), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, y_30), (ATerm) ATmakeAppl(sym_Var_1, f_31))), (ATerm) ATmakeAppl(sym_Var_1, g_31)), (ATerm)ATmakeAppl(sym_VarDec_2, e_31, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_16), term_f_16)), f_31, (ATerm)ATmakeAppl(sym_Var_1, f_31), g_31, (ATerm) ATmakeAppl(sym_Var_1, g_31));
        }
      }
  }
  return(t);
}
ATerm copy_1_0 (ATerm z_116 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm h_31 = NULL,i_31 = NULL;
    if(match_cons(t, sym__2))
      {
        h_31 = ATgetArgument(t, 0);
        i_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, h_31, i_31, (ATerm) ATempty);
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    ATerm j_31 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm s_20 = ATgetArgument(t, 0);
        if(((ATgetType(s_20) != AT_INT) || (ATgetInt((ATermInt) s_20) != 0)))
          _fail(t);
        {
          ATerm x_20 = ATgetArgument(t, 1);
        }
        j_31 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = j_31;
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
    if(match_cons(t, sym__3))
      {
        k_31 = ATgetArgument(t, 0);
        l_31 = ATgetArgument(t, 1);
        m_31 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, k_31, term_b_21);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, k_31, term_b_21);
    {
      ATerm j_21 = t;
      int k_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(k_31, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(k_21);
        }
      else
        {
          t = j_21;
          t = SSL_subtr(k_31, (ATerm) ATmakeInt(1));
        }
      n_31 = t;
      t = l_31;
      t = z_116(t);
      o_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, n_31, l_31, (ATerm) ATinsert(CheckATermList(m_31), o_31));
    }
    return(t);
  }
  t = for_3_0(g_5, h_5, r_5, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  if(match_cons(t, sym__2))
    {
      p_31 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  r_31 = t;
  t = new_0_0(t);
  s_31 = t;
  t = new_0_0(t);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_31), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_31)), (ATerm) ATmakeAppl(sym_Var_1, s_31))), (ATerm) ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_31)), (ATerm) ATmakeAppl(sym_Var_1, t_31)))), (ATerm)ATmakeAppl(sym_VarDec_2, r_31, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_16), term_f_16)), s_31, (ATerm)ATmakeAppl(sym_Var_1, s_31), t_31, (ATerm) ATmakeAppl(sym_Var_1, t_31));
  return(t);
}
ATerm zipr_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm l_21 = ATgetArgument(t, 0);
        ATerm p_21 = ATgetArgument(t, 1);
        if(((ATgetType(p_21) != AT_LIST) || !(ATisEmpty(p_21))))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm q_21 = ATgetArgument(t, 0);
        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
          {
            u_31 = ATgetFirst((ATermList) q_21);
            w_31 = (ATerm) ATgetNext((ATermList) q_21);
          }
        else
          _fail(t);
        {
          ATerm r_21 = ATgetArgument(t, 1);
          if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
            {
              v_31 = ATgetFirst((ATermList) r_21);
              x_31 = (ATerm) ATgetNext((ATermList) r_21);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_31, v_31), (ATerm) ATmakeAppl(sym__2, w_31, x_31));
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    ATerm y_31 = NULL,z_31 = NULL;
    if(match_cons(t, sym__2))
      {
        y_31 = ATgetArgument(t, 0);
        z_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(z_31), y_31);
    return(t);
  }
  t = genzip_4_0(t_5, u_5, v_5, o_107, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_32 = ATgetFirst((ATermList) t);
      e_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_32;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm s_21 = t;
      int v_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_32;
          ;
          LocalPopChoice(v_21);
        }
      else
        {
          t = s_21;
          t = e_32;
          t = last_0_0(t);
        }
    }
  else
    {
      t = e_32;
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm f_38 (ATerm q_32, ATerm r_32, ATerm s_32, ATerm t_32, ATerm t)
  {
    ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,x_33 = NULL,d_35 = NULL,r_35 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, r_32, term_b_21);
    {
      ATerm a_22 = t;
      int e_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(r_32, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(e_22);
        }
      else
        {
          t = a_22;
          t = SSL_addr(r_32, (ATerm) ATmakeInt(1));
        }
      x_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_32, term_p_22);
      t = copy_1_0(new_0_0, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_32 = ATgetFirst((ATermList) t);
          z_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_32;
      t = last_0_0(t);
      a_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_32), y_32), z_32);
      t = zipr_1_0(MkThreadApplication_0_0, t);
      t = tuple_unzip_1_0(_id, t);
      if(match_cons(t, sym__6))
        {
          b_33 = ATgetArgument(t, 0);
          c_33 = ATgetArgument(t, 1);
          d_33 = ATgetArgument(t, 2);
          e_33 = ATgetArgument(t, 3);
          x_33 = ATgetArgument(t, 4);
          d_35 = ATgetArgument(t, 5);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_33), d_33), z_32);
      t = concat_0_0(t);
      r_35 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, q_32, term_q_22), c_33, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(r_35), y_32), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_32)), (ATerm) ATmakeAppl(sym_Op_2, q_32, e_33))), (ATerm)ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_33)), (ATerm) ATmakeAppl(sym_Op_2, q_32, d_35))), (ATerm) ATmakeAppl(sym_Seqs_1, b_33)))));
    }
    return(t);
  }
  ATerm g_38 (ATerm s_35, ATerm d_36, ATerm f_36, ATerm l_36, ATerm t)
  {
    ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,x_36 = NULL,a_37 = NULL,g_37 = NULL;
    t = l_36;
    t = new_0_0(t);
    p_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_36, (ATerm) ATmakeAppl(sym_Var_1, p_36));
    t = copy_1_0(MkDistApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        q_36 = ATgetArgument(t, 0);
        r_36 = ATgetArgument(t, 1);
        s_36 = ATgetArgument(t, 2);
        t_36 = ATgetArgument(t, 3);
        x_36 = ATgetArgument(t, 4);
        a_37 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, s_36, x_36);
    t = conc_0_0(t);
    g_37 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, s_35, term_r_22), r_36, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(g_37), p_36), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_36)), (ATerm) ATmakeAppl(sym_Op_2, s_35, t_36))), (ATerm)ATmakeAppl(sym_Op_2, s_35, a_37), (ATerm) ATmakeAppl(sym_Seqs_1, q_36)))));
    return(t);
  }
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,o_37 = NULL,r_37 = NULL,c_38 = NULL;
  j_37 = t;
  if(match_cons(t, sym__3))
    {
      k_37 = ATgetArgument(t, 0);
      l_37 = ATgetArgument(t, 1);
      o_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_37;
  if(match_string(t, "T"))
    {
      t = o_37;
      if(match_cons(t, sym__2))
        {
          r_37 = ATgetArgument(t, 0);
          c_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_37;
      if(match_int(t, 0))
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_38(k_37, r_37, c_38, j_37, t);
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              {
                ATerm e_38 = NULL;
                t = j_37;
                t = new_0_0(t);
                e_38 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, k_37, term_q_22), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_38)), (ATerm) ATmakeAppl(sym_Op_2, k_37, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_38)), (ATerm) ATmakeAppl(sym_Op_2, k_37, (ATerm) ATempty))), term_c_16))));
              }
            }
        }
      else
        {
          t = f_38(k_37, r_37, c_38, j_37, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = o_37;
      if(match_cons(t, sym__2))
        {
          r_37 = ATgetArgument(t, 0);
          c_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_38(k_37, r_37, c_38, j_37, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if(match_cons(c_23, sym__2))
        {
          ATerm j_23 = ATgetArgument(c_23, 0);
          if(match_cons(j_23, sym_Mod_2))
            {
              h_38 = ATgetArgument(j_23, 0);
              i_38 = ATgetArgument(j_23, 1);
            }
          else
            _fail(t);
          j_38 = ATgetArgument(c_23, 1);
        }
      else
        _fail(t);
      k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_38, i_38, j_38);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  l_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_38, k_38);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      t = OverloadedDef_0_0(t);
      t = _2_0(joindefs_0_0, _id, t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm z_113 (ATerm), ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL;
  if(match_cons(t, sym__2))
    {
      n_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_38;
  {
    ATerm o_38 (ATerm t)
    {
      ATerm s_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(t_23);
        }
      else
        {
          t = s_23;
          {
            ATerm u_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_5 (ATerm t)
                {
                  t = m_38;
                  return(t);
                }
                t = HdMember_p__2_0(z_113, w_5, t);
                t = o_38(t);
                ;
                LocalPopChoice(v_23);
              }
            else
              {
                t = u_23;
                t = Cons_2_0(_id, o_38, t);
              }
          }
        }
      return(t);
    }
    t = o_38(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm t)
{
  ATerm p_38 (ATerm t)
  {
    ATerm w_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_107(t);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = w_23;
        t = h_107(t);
        t = _2_0(j_107, p_38, t);
        t = i_107(t);
      }
    return(t);
  }
  t = p_38(t);
  return(t);
}
ATerm zip_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm b_24 = ATgetArgument(t, 0);
        if(((ATgetType(b_24) != AT_LIST) || !(ATisEmpty(b_24))))
          _fail(t);
        {
          ATerm e_24 = ATgetArgument(t, 1);
          if(((ATgetType(e_24) != AT_LIST) || !(ATisEmpty(e_24))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,q_39 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_24 = ATgetArgument(t, 0);
        if(((ATgetType(f_24) == AT_LIST) && !(ATisEmpty(f_24))))
          {
            q_38 = ATgetFirst((ATermList) f_24);
            s_38 = (ATerm) ATgetNext((ATermList) f_24);
          }
        else
          _fail(t);
        {
          ATerm g_24 = ATgetArgument(t, 1);
          if(((ATgetType(g_24) == AT_LIST) && !(ATisEmpty(g_24))))
            {
              r_38 = ATgetFirst((ATermList) g_24);
              q_39 = (ATerm) ATgetNext((ATermList) g_24);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_38, r_38), (ATerm) ATmakeAppl(sym__2, s_38, q_39));
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    ATerm r_39 = NULL,s_39 = NULL;
    if(match_cons(t, sym__2))
      {
        r_39 = ATgetArgument(t, 0);
        s_39 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(s_39), r_39);
    return(t);
  }
  t = genzip_4_0(b_6, d_6, f_6, l_107, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_24 = ATgetFirst((ATermList) t);
      if(match_cons(k_24, sym__2))
        {
          t_39 = ATgetArgument(k_24, 0);
          u_39 = ATgetArgument(k_24, 1);
        }
      else
        _fail(t);
      v_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_39);
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_39);
  if(match_cons(t, sym__2))
    {
      if((w_39 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_39, x_39);
  t = zip_1_0(_id, t);
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_39, v_39);
  t = conc_0_0(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_6 (ATerm t)
      {
        ATerm y_40 = NULL;
        y_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_40);
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        ATerm l_6 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, l_6, t);
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_6 (ATerm t)
            {
              ATerm p_24 = t;
              int q_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_41 = NULL,k_43 = NULL,l_43 = NULL,u_43 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_41 = ATgetFirst((ATermList) t);
                      u_43 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = i_41;
                  if(match_cons(t, sym__2))
                    {
                      k_43 = ATgetArgument(t, 0);
                      l_43 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_43;
                  if((k_43 != t))
                    {
                      _fail(t);
                    }
                  t = u_43;
                  ;
                  LocalPopChoice(q_24);
                }
              else
                {
                  t = p_24;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, m_6, t);
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            {
              ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
              if(match_cons(t, sym__2))
                {
                  y_43 = ATgetArgument(t, 0);
                  z_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_43;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_44 = ATgetFirst((ATermList) t);
                  b_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_43), a_44), b_44);
            }
          }
        return(t);
      }
      t = for_3_0(g_6, h_6, k_6, t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm n_6 (ATerm t)
        {
          ATerm f_44 = NULL;
          if(match_cons(t, sym__2))
            {
              f_44 = ATgetArgument(t, 0);
              if((f_44 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(n_6, t);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm v_24 = ATgetArgument(t, 0);
      if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
        {
          g_44 = ATgetFirst((ATermList) v_24);
          h_44 = (ATerm) ATgetNext((ATermList) v_24);
        }
      else
        _fail(t);
      i_44 = ATgetArgument(t, 1);
      j_44 = ATgetArgument(t, 2);
      k_44 = ATgetArgument(t, 3);
      l_44 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_44, j_44);
  t = x_128(t);
  if(match_cons(t, sym__2))
    {
      m_44 = ATgetArgument(t, 0);
      n_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_44;
  t = y_128(t);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_44, i_44);
  t = diff_0_0(t);
  p_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_44, h_44);
  t = conc_0_0(t);
  q_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_44, i_44);
  t = conc_0_0(t);
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_44, m_44, k_44);
  t = z_128(t);
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym__5, q_44, r_44, n_44, s_44, l_44);
  return(t);
}
ATerm while_not_2_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t)
{
  ATerm t_44 (ATerm t)
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_113(t);
        ;
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = r_113(t);
        t = t_44(t);
      }
    return(t);
  }
  t = t_44(t);
  return(t);
}
ATerm for_3_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm t)
{
  t = t_113(t);
  t = while_not_2_0(u_113, v_113, t);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm i_128 (ATerm), ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm w_44 = NULL,x_44 = NULL,d_45 = NULL;
    if(match_cons(t, sym__3))
      {
        w_44 = ATgetArgument(t, 0);
        x_44 = ATgetArgument(t, 1);
        d_45 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, w_44, w_44, x_44, d_45, (ATerm) ATempty);
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    ATerm e_45 = NULL,f_45 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm a_25 = ATgetArgument(t, 0);
        if(((ATgetType(a_25) != AT_LIST) || !(ATisEmpty(a_25))))
          _fail(t);
        {
          ATerm b_25 = ATgetArgument(t, 1);
        }
        {
          ATerm c_25 = ATgetArgument(t, 2);
        }
        e_45 = ATgetArgument(t, 3);
        f_45 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, e_45, f_45);
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3_0(i_128, j_128, k_128, t);
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        {
          ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
          if(match_cons(t, sym__5))
            {
              h_45 = ATgetArgument(t, 0);
              k_45 = ATgetArgument(t, 1);
              l_45 = ATgetArgument(t, 2);
              m_45 = ATgetArgument(t, 3);
              n_45 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = h_45;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_45 = ATgetFirst((ATermList) t);
              j_45 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, j_45, k_45, l_45, m_45, (ATerm) ATinsert(CheckATermList(n_45), i_45));
        }
      }
    return(t);
  }
  t = for_3_0(o_6, q_6, r_6, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = svars_arity_0_0(t);
    {
      ATerm u_6 (ATerm t)
      {
        t = try_1_0(DefinitionExists_0_0, t);
        return(t);
      }
      t = map_1_0(u_6, t);
    }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    ATerm y_45 = NULL,z_45 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm f_25 = ATgetArgument(t, 0);
        y_45 = ATgetArgument(t, 1);
        z_45 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(z_45), y_45);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3_0(get_definition_0_0, s_6, t_6, t);
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_46 = NULL,c_46 = NULL;
        if(match_cons(t, sym__2))
          {
            b_46 = ATgetArgument(t, 0);
            c_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_46;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_46;
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = MissingDefs_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm g_129 (ATerm), ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
  if(match_cons(t, sym__2))
    {
      e_46 = ATgetArgument(t, 0);
      f_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_129(t);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_46, e_46, f_46);
  t = table_push_0_0(t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_46, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_46 = ATgetFirst((ATermList) t);
        i_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_46, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(i_46), (ATerm) ATinsert(CheckATermList(h_46), e_46)));
    t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm r_46 = NULL;
  r_46 = t;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_3 = NULL;
        t = r_46;
        {
          ATerm v_6 (ATerm t)
          {
            t = term_q_25;
            return(t);
          }
          t = rewrite_1_0(v_6, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm r_25 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_25) != ATmakeSymbol("j_0", 0, ATtrue)))
                _fail(t);
              r_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_3;
        }
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        {
          ATerm z_3 = NULL;
          t = r_46;
          {
            ATerm w_6 (ATerm t)
            {
              t = term_q_25;
              return(t);
            }
            t = rewrite_1_0(w_6, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm w_25 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("f_0", 0, ATtrue)))
                  _fail(t);
                z_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_3;
          }
        }
      }
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm i_129 (ATerm), ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,j_4 = NULL;
  x_46 = t;
  t = term_p_22;
  t = i_129(t);
  y_46 = t;
  t = SSL_table_get(y_46, x_46);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_4 = ATgetFirst((ATermList) t);
      {
        ATerm x_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_4;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm q_47 (ATerm g_47, ATerm t)
  {
    ATerm i_47 = NULL,j_47 = NULL;
    t = g_47;
    {
      ATerm x_6 (ATerm t)
      {
        t = term_y_25;
        return(t);
      }
      t = rewrite_1_0(x_6, t);
      if(match_cons(t, sym_Defined_3))
        {
          ATerm z_25 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) z_25) != ATmakeSymbol("b_0", 0, ATtrue)))
            _fail(t);
          i_47 = ATgetArgument(t, 1);
          j_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(j_47), i_47);
    }
    return(t);
  }
  ATerm m_47 = NULL,o_47 = NULL;
  m_47 = t;
  if(match_cons(t, sym__2))
    {
      ATerm e_26 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_47;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_26 = ATgetArgument(t, 0);
            ATerm i_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(g_26);
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_4 = NULL;
              t = m_47;
              {
                ATerm y_6 (ATerm t)
                {
                  t = term_y_25;
                  return(t);
                }
                t = rewrite_1_0(y_6, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm l_26 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) l_26) != ATmakeSymbol("h_0", 0, ATtrue)))
                      _fail(t);
                    m_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_4;
              }
              ;
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
              t = q_47(m_47, t);
            }
        }
      }
    else
      {
        t = f_26;
        t = q_47(m_47, t);
      }
  }
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
  r_47 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
      u_47 = ATgetArgument(t, 2);
      {
        ATerm m_26 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  v_47 = t;
  t = t_47;
  t = length_0_0(t);
  w_47 = t;
  t = u_47;
  t = length_0_0(t);
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_47, (ATerm) ATmakeAppl(sym__2, w_47, x_47));
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATempty;
      }
    y_47 = t;
    t = s_47;
    {
      ATerm p_26 = t;
      int w_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(w_26);
        }
      else
        {
          t = p_26;
          t = (ATerm) ATempty;
        }
      z_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_47, x_47)), z_47);
      t = union_0_0(t);
      a_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_47, (ATerm) ATmakeAppl(sym__2, w_47, x_47)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_26, (ATerm) ATinsert(CheckATermList(y_47), r_47)));
      {
        ATerm z_6 (ATerm t)
        {
          t = term_y_25;
          return(t);
        }
        t = assert_1_0(z_6, t);
        t = (ATerm) ATmakeAppl(sym__2, s_47, (ATerm) ATmakeAppl(sym_Defined_2, term_z_26, a_48));
        {
          ATerm a_7 (ATerm t)
          {
            t = term_q_25;
            return(t);
          }
          t = assert_1_0(a_7, t);
          t = v_47;
        }
      }
    }
  }
  return(t);
}
ATerm sort_defs_0_0 (ATerm t)
{
  t = map_1_0(RegisterSDefT_0_0, t);
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    t = term_d_27;
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    ATerm b_48 = NULL,c_48 = NULL;
    if(match_cons(t, sym__2))
      {
        b_48 = ATgetArgument(t, 0);
        c_48 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(b_48, c_48);
          ;
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
          t = SSL_addr(b_48, c_48);
        }
    }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_b_21;
    return(t);
  }
  t = foldr_3_0(b_7, d_7, f_7, t);
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,h_48 = NULL,m_48 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      d_48 = ATgetArgument(t, 0);
      e_48 = ATgetArgument(t, 1);
      f_48 = ATgetArgument(t, 2);
      {
        ATerm l_27 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = e_48;
  t = length_0_0(t);
  h_48 = t;
  t = f_48;
  t = length_0_0(t);
  m_48 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_48, (ATerm) ATmakeAppl(sym__2, h_48, m_48)));
  return(t);
}
ATerm HdMember_p__2_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_48 = ATgetFirst((ATermList) t);
      o_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_114(t);
  {
    ATerm g_7 (ATerm t)
    {
      ATerm p_48 = NULL;
      p_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_48, p_48);
      t = h_114(t);
      return(t);
    }
    t = fetch_1_0(g_7, t);
    t = o_48;
  }
  return(t);
}
ATerm union_1_0 (ATerm d_114 (ATerm), ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL;
  if(match_cons(t, sym__2))
    {
      r_48 = ATgetArgument(t, 0);
      q_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_48;
  {
    ATerm s_48 (ATerm t)
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_48;
          ;
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          {
            ATerm o_27 = t;
            int p_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_7 (ATerm t)
                {
                  t = q_48;
                  return(t);
                }
                t = HdMember_p__2_0(d_114, h_7, t);
                t = s_48(t);
                ;
                LocalPopChoice(p_27);
              }
            else
              {
                t = o_27;
                t = Cons_2_0(_id, s_48, t);
              }
          }
        }
      return(t);
    }
    t = s_48(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm t_48 = NULL;
    if(match_cons(t, sym__2))
      {
        t_48 = ATgetArgument(t, 0);
        if((t_48 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(i_7, t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_116(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm w_48 = NULL,x_48 = NULL,a_49 = NULL,b_49 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_48 = ATgetFirst((ATermList) t);
            x_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_48;
        t = o_116(t);
        a_49 = t;
        t = x_48;
        t = foldr_3_0(m_116, n_116, o_116, t);
        b_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_49, b_49);
        t = n_116(t);
      }
    }
  return(t);
}
ATerm definition_names_0_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = foldr_3_0(j_7, union_0_0, DefinitionName_0_0, t);
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,f_49 = NULL;
  c_49 = t;
  t = definition_names_0_0(t);
  d_49 = t;
  t = c_49;
  t = sort_defs_0_0(t);
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_49, f_49, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL;
  k_49 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_49);
  g_49 = t;
  t = i_49;
  t = w_84(t);
  j_49 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, j_49), g_49);
  return(t);
}
ATerm Cons_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  u_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_49 = ATgetFirst((ATermList) t);
      r_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_49);
  p_49 = t;
  t = q_49;
  t = s_84(t);
  s_49 = t;
  t = r_49;
  t = t_84(t);
  t_49 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_49), s_49), p_49);
  return(t);
}
ATerm Specification_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
  c_50 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_50);
  z_49 = t;
  t = a_50;
  t = b_85(t);
  b_50 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, b_50), z_49);
  return(t);
}
ATerm _2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,l_50 = NULL,m_50 = NULL,q_50 = NULL;
  q_50 = t;
  if(match_cons(t, sym__2))
    {
      h_50 = ATgetArgument(t, 0);
      i_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_50);
  g_50 = t;
  t = h_50;
  t = j_83(t);
  l_50 = t;
  t = i_50;
  t = k_83(t);
  m_50 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, l_50, m_50), g_50);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  x_50 = t;
  t = term_p_22;
  t = whoami_0_0(t);
  y_50 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), y_50), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_50;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
        ATerm b_51 = NULL,c_51 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_51 = ATgetFirst((ATermList) t);
            c_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_51;
        {
          ATerm k_7 (ATerm t)
          {
            t = c_51;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  g_51 = t;
  t = SSL_explode_term(g_51);
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_51;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm i_51 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_51, t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_99(t);
      }
    return(t);
  }
  t = i_51(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  if(match_cons(t, sym__2))
    {
      k_51 = ATgetArgument(t, 0);
      j_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_51;
  {
    ATerm l_7 (ATerm t)
    {
      t = j_51;
      return(t);
    }
    t = at_end_1_0(l_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm l_51 = NULL;
  ATerm m_7 (ATerm t)
  {
    ATerm n_51 = NULL;
    n_51 = t;
    t = SSL_explode_string(n_51);
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    ATerm o_51 = NULL;
    o_51 = t;
    t = SSL_explode_string(o_51);
    return(t);
  }
  t = _2_0(m_7, n_7, t);
  t = conc_0_0(t);
  l_51 = t;
  t = SSL_implode_string(l_51);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_51 = NULL;
      v_51 = t;
      t = SSL_is_string(v_51);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(o_7, t);
            ;
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            {
              ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
              a_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_52 = ATgetArgument(t, 0);
                  t = b_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_52 = ATgetArgument(t, 0);
                      t = b_52;
                      {
                        ATerm d_28 = t;
                        int e_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_28);
                          }
                        else
                          {
                            t = d_28;
                            {
                              ATerm p_7 (ATerm t)
                              {
                                t = term_f_28;
                                return(t);
                              }
                              t = debug_1_0(p_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm g_52 = NULL,h_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_52 = ATgetArgument(t, 0);
                          c_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_52;
                      t = eval_config_0_0(t);
                      g_52 = t;
                      t = c_52;
                      t = eval_config_0_0(t);
                      h_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_52, h_52);
                      t = conc_strings_0_0(t);
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
  ATerm k_52 = NULL;
  k_52 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_52);
  {
    ATerm q_7 (ATerm t)
    {
      ATerm l_52 = NULL;
      t = eval_config_0_0(t);
      l_52 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_52, l_52);
      t = l_52;
      return(t);
    }
    t = try_1_0(q_7, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_122 (ATerm), ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm m_52 = NULL,n_52 = NULL;
    m_52 = t;
    t = term_g_28;
    t = get_config_0_0(t);
    n_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_52, term_l_28);
    t = geq_0_0(t);
    t = m_52;
    t = r_122(t);
    return(t);
  }
  t = try_1_0(r_7, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_28 = ATgetArgument(t, 0);
        if(match_cons(m_28, sym_Stream_1))
          {
            o_52 = ATgetArgument(m_28, 0);
          }
        else
          _fail(t);
        p_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(o_52, p_52);
    q_52 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), q_52);
    r_52 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, r_52);
    return(t);
  }
  t = WriteToFile_1_0(s_7, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_121 (ATerm), ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  if(match_cons(t, sym__2))
    {
      s_52 = ATgetArgument(t, 0);
      t_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_52, term_u_28);
  t = open_stream_0_0(t);
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_52, t_52);
  t = n_121(t);
  t = fclose_0_0(t);
  t = t_52;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm v_28 = ATgetArgument(t, 0);
        if(match_cons(v_28, sym_Stream_1))
          {
            v_52 = ATgetArgument(v_28, 0);
          }
        else
          _fail(t);
        w_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(v_52, w_52);
    x_52 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, x_52);
    return(t);
  }
  t = WriteToFile_1_0(t_7, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm w_28 = t;
      int f_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                z_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(v_7, t);
          ;
          LocalPopChoice(f_29);
        }
      else
        {
          t = w_28;
          t = term_g_29;
          z_52 = t;
        }
      return(t);
    }
    t = _2_0(u_7, _id, t);
    t = y_52;
    {
      ATerm w_7 (ATerm t)
      {
        ATerm x_7 (ATerm t)
        {
          t = not_null(z_52);
          return(t);
        }
        t = split_2_0(x_7, _id, t);
        return(t);
      }
      t = _2_0(_id, w_7, t);
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 (ATerm t)
            {
              ATerm z_7 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(z_7, t);
              return(t);
            }
            t = _2_0(y_7, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  a_53 = t;
  t = dtime_0_0(t);
  t = a_53;
  t = p_124(t);
  b_53 = t;
  t = dtime_0_0(t);
  c_53 = t;
  t = b_53;
  if(match_cons(t, sym__2))
    {
      d_53 = ATgetArgument(t, 0);
      e_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_53), (ATerm) ATmakeAppl(sym_Runtime_1, c_53)), e_53);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_53 (ATerm m_53, ATerm t)
  {
    t = SSL_fclose(m_53);
    return(t);
  }
  ATerm p_53 = NULL,q_53 = NULL;
  q_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_53 = ATgetArgument(t, 0);
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_53);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            t = s_53(q_53, t);
          }
      }
    }
  else
    {
      t = s_53(q_53, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm z_120 (ATerm), ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  t_53 = t;
  t = z_120(t);
  u_53 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_53), u_53));
  t = t_53;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_53 = NULL;
  t = SSL_stdin_stream();
  v_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_53);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_53 = NULL;
  t = SSL_stdout_stream();
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_53);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_53 = NULL;
  t = SSL_stderr_stream();
  x_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_53);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm z_53 = NULL;
  z_53 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_53;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_53;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_53;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_29 = ATgetArgument(t, 0);
      ATerm q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_5 = NULL,s_5 = NULL;
        m_5 = t;
        t = SSL_explode_term(m_5);
        if(match_cons(t, sym__2))
          {
            ATerm t_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_29) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_29 = ATgetArgument(t, 1);
              if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
                {
                  s_5 = ATgetFirst((ATermList) u_29);
                  {
                    ATerm b_30 = (ATerm) ATgetNext((ATermList) u_29);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_5;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        {
          ATerm c_30 = t;
          int d_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
              ATerm a_8 (ATerm t)
              {
                ATerm f_54 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    f_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = f_54;
                return(t);
              }
              t = _2_0(a_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  c_54 = ATgetArgument(t, 0);
                  d_54 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(c_54, d_54);
              e_54 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, e_54);
              ;
              LocalPopChoice(d_30);
            }
          else
            {
              t = c_30;
              {
                ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
                ATerm b_8 (ATerm t)
                {
                  ATerm j_54 = NULL;
                  j_54 = t;
                  t = SSL_is_string(j_54);
                  return(t);
                }
                t = _2_0(b_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_54 = ATgetArgument(t, 0);
                    h_54 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(g_54, h_54);
                i_54 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_54);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_54 = NULL;
      n_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_54, term_r_30);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      {
        ATerm c_8 (ATerm t)
        {
          t = term_u_30;
          return(t);
        }
        t = debug_1_0(c_8, t);
        _fail(t);
      }
    }
  k_54 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_54);
  l_54 = t;
  t = k_54;
  t = fclose_0_0(t);
  t = l_54;
  return(t);
}
ATerm split_2_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  t = g_106(t);
  q_54 = t;
  t = p_54;
  t = h_106(t);
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_54, r_54);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  s_54 = t;
  {
    ATerm z_30 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              t_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(d_8, t);
        ;
        LocalPopChoice(d_31);
      }
    else
      {
        t = z_30;
        t = term_a_32;
        t_54 = t;
      }
    t = s_54;
    {
      ATerm e_8 (ATerm t)
      {
        t = not_null(t_54);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, e_8, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm v_54 = NULL;
    v_54 = t;
    if(match_string(t, "-k"))
      {
        t = v_54;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = v_54;
      }
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    ATerm w_54 = NULL,x_54 = NULL;
    w_54 = t;
    t = SSL_string_to_int(w_54);
    x_54 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), x_54);
    t = w_54;
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    t = term_b_32;
    return(t);
  }
  t = ArgOption_3_0(f_8, g_8, h_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 (ATerm t)
      {
        ATerm z_54 = NULL;
        z_54 = t;
        if(match_string(t, "-S"))
          {
            t = z_54;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = z_54;
          }
        return(t);
      }
      ATerm j_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_g_32;
        return(t);
      }
      ATerm k_8 (ATerm t)
      {
        t = term_h_32;
        return(t);
      }
      t = Option_3_0(i_8, j_8, k_8, t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = c_32;
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_8 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm m_8 (ATerm t)
            {
              ATerm a_55 = NULL,b_55 = NULL;
              a_55 = t;
              t = SSL_string_to_int(a_55);
              b_55 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_55);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, a_55);
              return(t);
            }
            ATerm n_8 (ATerm t)
            {
              t = term_k_32;
              return(t);
            }
            t = ArgOption_3_0(l_8, m_8, n_8, t);
            ;
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            {
              ATerm o_8 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_8 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_l_32;
                return(t);
              }
              ATerm q_8 (ATerm t)
              {
                t = term_m_32;
                return(t);
              }
              t = Option_3_0(o_8, p_8, q_8, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    ATerm d_55 = NULL;
    d_55 = t;
    if(match_string(t, "-o"))
      {
        t = d_55;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = d_55;
      }
    return(t);
  }
  ATerm s_8 (ATerm t)
  {
    ATerm e_55 = NULL;
    e_55 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), e_55);
    t = (ATerm) ATmakeAppl(sym_Output_1, e_55);
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    t = term_p_32;
    return(t);
  }
  t = ArgOption_3_0(r_8, s_8, t_8, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm u_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm w_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_32;
          return(t);
        }
        ATerm x_8 (ATerm t)
        {
          t = term_f_33;
          return(t);
        }
        t = Option_3_0(u_8, w_8, x_8, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
  h_55 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = h_55;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm p_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_55 = ATgetFirst((ATermList) t);
          j_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_55 = ATgetFirst((ATermList) t);
          l_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_55;
      t = i_0(t);
      t = k_55;
      t = k_0(t);
      p_55 = t;
      t = (ATerm) ATinsert(CheckATermList(l_55), p_55);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm y_8 (ATerm t)
  {
    ATerm r_55 = NULL;
    r_55 = t;
    if(match_string(t, "-i"))
      {
        t = r_55;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = r_55;
      }
    return(t);
  }
  ATerm z_8 (ATerm t)
  {
    ATerm s_55 = NULL;
    s_55 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_55);
    t = (ATerm) ATmakeAppl(sym_Input_1, s_55);
    return(t);
  }
  ATerm a_9 (ATerm t)
  {
    t = term_g_33;
    return(t);
  }
  t = ArgOption_3_0(y_8, z_8, a_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_22;
  t = whoami_0_0(t);
  t_55 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), t_55));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_116(t);
      ;
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      {
        ATerm w_55 = NULL,x_55 = NULL,a_56 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_55 = ATgetFirst((ATermList) t);
            x_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_55;
        t = foldr_2_0(k_116, l_116, t);
        a_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_55, a_56);
        t = l_116(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL;
  b_56 = t;
  t = SSL_explode_term(b_56);
  if(match_cons(t, sym__2))
    {
      ATerm o_33 = ATgetArgument(t, 0);
      c_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_56;
  t = foldr_2_0(o_114, p_114, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_56 = NULL;
  t = times_0_0(t);
  {
    ATerm b_9 (ATerm t)
    {
      t = term_d_27;
      return(t);
    }
    ATerm c_9 (ATerm t)
    {
      ATerm e_56 = NULL,f_56 = NULL;
      if(match_cons(t, sym__2))
        {
          e_56 = ATgetArgument(t, 0);
          f_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(e_56, f_56);
            ;
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            t = SSL_addr(e_56, f_56);
          }
      }
      return(t);
    }
    t = crush_2_0(b_9, c_9, t);
    d_56 = t;
    t = SSL_TicksToSeconds(d_56);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  o_56 = t;
  if(match_cons(t, sym__2))
    {
      p_56 = ATgetArgument(t, 0);
      q_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_56;
        if((p_56 != t))
          {
            _fail(t);
          }
        t = o_56;
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        t = o_56;
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_56, q_56);
              ;
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              t = SSL_gtr(p_56, q_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_122 (ATerm), ATerm t)
{
  ATerm d_9 (ATerm t)
  {
    ATerm t_56 = NULL,u_56 = NULL;
    t_56 = t;
    t = term_g_28;
    t = get_config_0_0(t);
    u_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_56, term_b_21);
    t = geq_0_0(t);
    t = t_56;
    t = q_122(t);
    return(t);
  }
  t = try_1_0(d_9, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm e_9 (ATerm t)
  {
    ATerm w_56 = NULL,x_56 = NULL;
    t = run_time_0_0(t);
    w_56 = t;
    t = term_p_22;
    t = whoami_0_0(t);
    x_56 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), w_56), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), x_56));
    t = (ATerm) ATmakeAppl(sym__2, term_v_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_33), w_56), term_w_33), x_56));
    return(t);
  }
  t = if_verbose1_1_0(e_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm n_125 (ATerm), ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
        ATerm f_9 (ATerm t)
        {
          ATerm c_34 = t;
          int d_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(f_34);
                  }
                else
                  {
                    t = e_34;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(f_9, t);
      }
    }
  t = n_125(t);
  return(t);
}
ATerm map_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm z_56 (ATerm t)
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        t = Cons_2_0(b_99, z_56, t);
      }
    return(t);
  }
  t = z_56(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_57 = ATgetFirst((ATermList) t);
      c_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_57 = NULL,i_57 = NULL;
        t = c_57;
        t = g_0(t);
        h_57 = t;
        t = b_57;
        t = e_0(t);
        i_57 = t;
        t = c_57;
        {
          ATerm g_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_57), i_57);
            return(t);
          }
          t = reverse_acc_2_0(e_0, g_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm h_9 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_9, t);
  return(t);
}
ATerm Program_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
  m_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_57);
  j_57 = t;
  t = k_57;
  t = t_93(t);
  l_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_57), j_57);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      {
        ATerm i_9 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(i_9, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_k_34;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm j_9 (ATerm t)
    {
      ATerm q_57 = NULL;
      q_57 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_57), term_l_34);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(j_9, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL;
  u_57 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_57);
  r_57 = t;
  t = s_57;
  t = u_93(t);
  t_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_57), r_57);
  return(t);
}
ATerm fetch_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm y_57 (ATerm t)
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_99, _id, t);
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        t = Cons_2_0(_id, y_57, t);
      }
    return(t);
  }
  t = y_57(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm n_126 (ATerm), ATerm t)
{
  t = fetch_1_0(n_126, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  a_58 = t;
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_34 = ATgetFirst((ATermList) t);
                ATerm r_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_58;
          }
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = (ATerm) ATinsert(ATempty, a_58);
      }
    b_58 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_58);
    t = a_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_33;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_105(t);
      ;
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_9 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm m_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_y_34;
        return(t);
      }
      ATerm n_9 (ATerm t)
      {
        t = term_z_34;
        return(t);
      }
      t = Option_3_0(k_9, m_9, n_9, t);
      ;
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      {
        ATerm o_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm p_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_35;
          return(t);
        }
        ATerm q_9 (ATerm t)
        {
          t = term_b_35;
          return(t);
        }
        t = Option_3_0(o_9, p_9, q_9, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  if(match_cons(t, sym__3))
    {
      h_58 = ATgetArgument(t, 0);
      i_58 = ATgetArgument(t, 1);
      j_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_58, i_58);
  {
    ATerm c_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_35 = ATgetArgument(t, 0);
            ATerm g_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_58, i_58);
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = c_35;
        t = (ATerm) ATempty;
      }
    k_58 = t;
    t = SSL_table_put(h_58, i_58, (ATerm) ATinsert(CheckATermList(k_58), j_58));
    t = (ATerm) ATmakeAppl(sym__3, h_58, i_58, j_58);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm p_58 = NULL;
  t = term_p_22;
  t = s_127(t);
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_35, term_i_35, p_58);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
  r_58 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_58;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm w_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_58 = ATgetFirst((ATermList) t);
          t_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_58;
      t = a_0(t);
      t = term_p_22;
      t = c_0(t);
      w_58 = t;
      t = (ATerm) ATinsert(CheckATermList(t_58), w_58);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm r_9 (ATerm t)
  {
    ATerm y_58 = NULL;
    y_58 = t;
    if(match_string(t, "--help"))
      {
        t = y_58;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = y_58;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = y_58;
          }
      }
    return(t);
  }
  ATerm s_9 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_j_35;
    return(t);
  }
  ATerm t_9 (ATerm t)
  {
    t = term_k_35;
    return(t);
  }
  t = Option_3_0(r_9, s_9, t_9, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_127 (ATerm), ATerm t)
{
  ATerm c_59 = NULL;
  c_59 = t;
  {
    ATerm u_9 (ATerm t)
    {
      t = term_l_35;
      t = q_127(t);
      return(t);
    }
    t = try_1_0(u_9, t);
    t = c_59;
    {
      ATerm v_9 (ATerm t)
      {
        ATerm d_59 = NULL;
        d_59 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_59);
        t = (ATerm) ATmakeAppl(sym_Program_1, d_59);
        return(t);
      }
      ATerm w_9 (ATerm t)
      {
        ATerm m_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_35 = t;
            int p_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_35);
              }
            else
              {
                t = o_35;
                t = q_127(t);
                t = Cons_2_0(_id, w_9, t);
              }
            ;
            LocalPopChoice(n_35);
          }
        else
          {
            t = m_35;
            {
              ATerm f_59 = NULL,g_59 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_59 = ATgetFirst((ATermList) t);
                  g_59 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_59), (ATerm) ATmakeAppl(sym_Undefined_1, f_59));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_9, w_9, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL;
  m_59 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = m_59;
  {
    ATerm x_9 (ATerm t)
    {
      ATerm q_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_127(t);
          ;
          LocalPopChoice(t_35);
        }
      else
        {
          t = q_35;
          {
            ATerm u_35 = t;
            int v_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(v_35);
              }
            else
              {
                t = u_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_9, t);
    {
      ATerm y_9 (ATerm t)
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_59 = NULL;
            t_59 = t;
            {
              ATerm y_35 = t;
              int z_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_59;
                  {
                    ATerm a_36 = t;
                    int b_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_b_34;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(b_36);
                      }
                    else
                      {
                        t = a_36;
                        {
                          ATerm z_9 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(z_9, t);
                        }
                      }
                    t = t_59;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(z_35);
                }
              else
                {
                  t = y_35;
                  t = term_x_34;
                  t = get_config_0_0(t);
                  t = t_59;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm a_10 (ATerm t)
              {
                ATerm b_10 (ATerm t)
                {
                  n_59 = t;
                  return(t);
                }
                t = Undefined_1_0(b_10, t);
                return(t);
              }
              t = option_defined_1_0(a_10, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_59)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_v_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_59)), term_c_36));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(y_9, t);
      o_59 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = o_59;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm v_8 = NULL;
  t = parse_options_1_0(p_125, t);
  v_8 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), v_8);
  t = v_8;
  t = r_125(t);
  {
    ATerm e_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_125, t);
        ;
        LocalPopChoice(g_36);
      }
    else
      {
        t = e_36;
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_125(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_36);
            }
          else
            {
              t = h_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm t)
{
  ATerm c_10 (ATerm t)
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_125(t);
        ;
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm d_10 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(e_125, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(c_10, g_125, h_125, d_10, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    ATerm f_10 (ATerm t)
    {
      ATerm w_59 = NULL,x_59 = NULL;
      w_59 = t;
      t = term_l_33;
      t = get_config_0_0(t);
      x_59 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, x_59));
      t = w_59;
      return(t);
    }
    t = if_verbose2_1_0(f_10, t);
    return(t);
  }
  t = iowrap_4_0(y_124, z_124, a_125, e_10, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm t)
{
  t = iowrap_3_0(w_124, x_124, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm t_124 (ATerm), ATerm t)
{
  ATerm g_10 (ATerm t)
  {
    t = _2_0(_id, t_124, t);
    return(t);
  }
  t = iowrap_2_0(g_10, _fail, t);
  return(t);
}
ATerm extract_all_0_0 (ATerm t)
{
  ATerm h_10 (ATerm t)
  {
    ATerm i_10 (ATerm t)
    {
      ATerm j_10 (ATerm t)
      {
        ATerm k_10 (ATerm t)
        {
          t = Strategies_1_0(all_defs_0_0, t);
          return(t);
        }
        ATerm l_10 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(k_10, l_10, t);
        return(t);
      }
      t = Cons_2_0(_id, j_10, t);
      return(t);
    }
    t = Specification_1_0(i_10, t);
    return(t);
  }
  t = iowrap_1_0(h_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = extract_all_0_0(t);
  return(t);
}
