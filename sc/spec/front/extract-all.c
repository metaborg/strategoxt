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
ATerm term_t_37;
ATerm term_c_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_f_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_o_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_i_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_k_27;
ATerm term_r_26;
ATerm term_n_26;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_d_23;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_j_16;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_f_14;
ATerm term_e_12;
ATerm term_u_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_m_9;
void init_constant_terms (void)
{
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Op_2, term_u_17, (ATerm) ATempty);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_27);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__3, term_b_36, term_c_36, term_x_23);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm);
ATerm Let_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm crush_3_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm m_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_111 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm tsubs_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm joindefs_0_0 (ATerm);
ATerm OverloadedDef_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm);
ATerm Op_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm p_98 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm unzip_1_0 (ATerm y_107 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm b_86 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm);
ATerm Con_3_0 (ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm g_104 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm c_103 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm Thd_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm e_107 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm copy_1_0 (ATerm h_117 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm zipr_1_0 (ATerm w_107 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm h_114 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm);
ATerm zip_1_0 (ATerm t_107 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm);
ATerm for_3_0 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm r_129 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm t_129 (ATerm), ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm sort_defs_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm DefinitionName_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm);
ATerm union_1_0 (ATerm l_114 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm);
ATerm definition_names_0_0 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm d_85 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm i_85 (ATerm), ATerm);
ATerm _2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_123 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm y_121 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_125 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm k_121 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm);
ATerm crush_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_123 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm y_125 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm a_94 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm t_99 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm y_126 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm u_105 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm d_128 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_128 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm a_128 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm e_125 (ATerm), ATerm);
ATerm extract_all_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm m_0 = NULL,q_0 = NULL;
  if(match_cons(t, sym__2))
    {
      m_0 = ATgetArgument(t, 0);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), q_0), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), q_0), term_k_11), m_0), term_m_9);
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Mod_2))
        {
          r_0 = ATgetArgument(m_11, 0);
          s_0 = ATgetArgument(m_11, 1);
        }
      else
        _fail(t);
      u_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), u_0), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), s_0), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), r_0), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), u_0), term_k_11), s_0), term_n_11), r_0), term_m_9);
  return(t);
}
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,y_0 = NULL;
  if(match_cons(t, sym__2))
    {
      v_0 = ATgetArgument(t, 0);
      {
        ATerm o_11 = ATgetArgument(t, 1);
        if(((ATgetType(o_11) == AT_LIST) && !(ATisEmpty(o_11))))
          {
            w_0 = ATgetFirst((ATermList) o_11);
            y_0 = (ATerm) ATgetNext((ATermList) o_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_0), w_0);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm r_11 = t;
      int s_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MissingDefMod_0_0(t);
          ;
          LocalPopChoice(s_11);
        }
      else
        {
          t = r_11;
          t = MissingDef_0_0(t);
        }
      return(t);
    }
    t = map_1_0(o_0, t);
    t = v_0;
  }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm z_0 = NULL;
  z_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), z_0);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = z_0;
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_11);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym__2))
    {
      t_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_1;
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = w_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_11 = ATgetFirst((ATermList) t);
            ATerm y_11 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
              {
                ATerm z_11 = ATgetFirst((ATermList) y_11);
                ATerm a_12 = (ATerm) ATgetNext((ATermList) y_11);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm b_12 = t;
          if((PushChoice() == 0))
            {
              ATerm p_0 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm c_12 = ATgetArgument(t, 0);
                    if(((ATgetType(c_12) != AT_INT) || (ATgetInt((ATermInt) c_12) != 0)))
                      _fail(t);
                    {
                      ATerm d_12 = ATgetArgument(t, 1);
                      if(((ATgetType(d_12) != AT_INT) || (ATgetInt((ATermInt) d_12) != 0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(p_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_12;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_1), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, t_1), term_e_12);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        {
          ATerm m_3 = NULL,r_3 = NULL;
          t = t_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_12 = ATgetFirst((ATermList) t);
              if(match_cons(f_12, sym__2))
                {
                  m_3 = ATgetArgument(f_12, 0);
                  r_3 = ATgetArgument(f_12, 1);
                }
              else
                _fail(t);
              {
                ATerm g_12 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(g_12) != AT_LIST) || !(ATisEmpty(g_12))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_1, (ATerm) ATmakeAppl(sym__2, m_3, r_3));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, t_1, (ATerm) ATmakeAppl(sym__2, m_3, r_3));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,e_2 = NULL,g_2 = NULL;
  g_2 = t;
  if(match_cons(t, sym_Rec_2))
    {
      a_2 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_2);
  z_1 = t;
  t = a_2;
  t = i_90(t);
  c_2 = t;
  t = b_2;
  t = j_90(t);
  e_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, c_2, e_2), z_1);
  return(t);
}
ATerm SDefT_4_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
      m_2 = ATgetArgument(t, 2);
      n_2 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_2);
  j_2 = t;
  t = k_2;
  t = d_92(t);
  o_2 = t;
  t = l_2;
  t = e_92(t);
  p_2 = t;
  t = m_2;
  t = f_92(t);
  q_2 = t;
  t = n_2;
  t = g_92(t);
  r_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, o_2, p_2, q_2, r_2), j_2);
  return(t);
}
ATerm SDef_3_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
  c_3 = t;
  if(match_cons(t, sym_SDef_3))
    {
      w_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
      y_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_3);
  v_2 = t;
  t = w_2;
  t = a_92(t);
  z_2 = t;
  t = x_2;
  t = b_92(t);
  a_3 = t;
  t = y_2;
  t = c_92(t);
  b_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, z_2, a_3, b_3), v_2);
  return(t);
}
ATerm Let_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  l_3 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  f_3 = t;
  t = g_3;
  t = l_89(t);
  j_3 = t;
  t = i_3;
  t = m_89(t);
  k_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, j_3, k_3), f_3);
  return(t);
}
ATerm sboundin_3_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t)
{
  ATerm h_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(h_102, h_102, t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = h_12;
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(j_102, j_102, h_102, t);
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm m_12 = t;
              int n_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(j_102, j_102, j_102, h_102, t);
                  ;
                  LocalPopChoice(n_12);
                }
              else
                {
                  t = m_12;
                  t = Rec_2_0(j_102, h_102, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm p_3 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm o_12 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      {
        ATerm p_12 = ATgetArgument(t, 2);
      }
      {
        ATerm q_12 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = p_3;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
      {
        ATerm v_12 = ATgetArgument(t, 2);
      }
      {
        ATerm w_12 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = q_3;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm x_3 = NULL;
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            x_3 = ATgetArgument(t, 0);
            {
              ATerm z_12 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_12);
        t = x_3;
      }
    else
      {
        t = x_12;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            x_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_3;
      }
    return(t);
  }
  t = map_1_0(t_0, t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm c_4 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
      {
        ATerm b_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_4;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm h_4 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      h_4 = ATgetArgument(t, 0);
      {
        ATerm c_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_4;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm o_4 = NULL;
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              o_4 = ATgetArgument(t, 0);
              {
                ATerm f_13 = ATgetArgument(t, 1);
              }
              {
                ATerm g_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(e_13);
          t = o_4;
        }
      else
        {
          t = d_13;
          if(match_cons(t, sym_SDefT_4))
            {
              o_4 = ATgetArgument(t, 0);
              {
                ATerm h_13 = ATgetArgument(t, 1);
              }
              {
                ATerm i_13 = ATgetArgument(t, 2);
              }
              {
                ATerm j_13 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = o_4;
        }
      return(t);
    }
    t = map_1_0(x_0, t);
  }
  return(t);
}
ATerm crush_3_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  e_5 = t;
  t = SSL_explode_term(e_5);
  if(match_cons(t, sym__2))
    {
      ATerm k_13 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5;
  t = foldr_3_0(y_114, z_114, a_115, t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm m_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_111 (ATerm), ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      ATerm l_13 = t;
      int n_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_111(t);
          ;
          LocalPopChoice(n_13);
        }
      else
        {
          t = l_13;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm b_1 (ATerm t)
    {
      ATerm o_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_5 = NULL,j_5 = NULL;
          h_5 = t;
          t = l_111(t);
          j_5 = t;
          t = h_5;
          {
            ATerm c_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = j_5;
                return(t);
              }
              t = split_2_0(k_5, e_1, t);
              t = diff_1_0(n_111, t);
              return(t);
            }
            ATerm d_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = m_111(c_1, k_5, d_1, t);
            {
              ATerm f_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3_0(f_1, union_0_0, _id, t);
            }
          }
          ;
          LocalPopChoice(p_13);
        }
      else
        {
          t = o_13;
          {
            ATerm g_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3_0(g_1, union_0_0, k_5, t);
          }
        }
      return(t);
    }
    t = split_2_0(a_1, b_1, t);
    t = union_0_0(t);
    return(t);
  }
  t = k_5(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        ATerm q_13 = ATgetArgument(t, 0);
        if(match_cons(q_13, sym_SVar_1))
          {
            n_5 = ATgetArgument(q_13, 0);
          }
        else
          _fail(t);
        o_5 = ATgetArgument(t, 1);
        p_5 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = o_5;
    t = length_0_0(t);
    q_5 = t;
    t = p_5;
    t = length_0_0(t);
    r_5 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_5, (ATerm) ATmakeAppl(sym__2, q_5, r_5)));
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
              {
                ATerm w_13 = t;
                int x_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_5 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        w_5 = ATgetArgument(t, 0);
                        {
                          ATerm y_13 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, w_5);
                    ;
                    LocalPopChoice(x_13);
                  }
                else
                  {
                    t = w_13;
                    {
                      ATerm b_14 = t;
                      int c_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(c_14);
                        }
                      else
                        {
                          t = b_14;
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
  ATerm j_1 (ATerm t)
  {
    ATerm z_5 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm d_14 = ATgetArgument(t, 0);
        if(match_cons(d_14, sym__2))
          {
            z_5 = ATgetArgument(d_14, 0);
            {
              ATerm e_14 = ATgetArgument(d_14, 1);
            }
          }
        else
          _fail(t);
        if((z_5 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4_0(h_1, i_1, sboundin_3_0, j_1, t);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    t = term_f_14;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm e_6 = NULL,z_3 = NULL,f_4 = NULL;
    e_6 = t;
    t = SSL_explode_term(e_6);
    if(match_cons(t, sym__2))
      {
        ATerm g_14 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) g_14) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm k_14 = ATgetArgument(t, 1);
          if(((ATgetType(k_14) == AT_LIST) && !(ATisEmpty(k_14))))
            {
              z_3 = ATgetFirst((ATermList) k_14);
              {
                ATerm l_14 = (ATerm) ATgetNext((ATermList) k_14);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = SSL_explode_term(e_6);
    if(match_cons(t, sym__2))
      {
        ATerm m_14 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) m_14) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm n_14 = ATgetArgument(t, 1);
          if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
            {
              ATerm o_14 = ATgetFirst((ATermList) n_14);
              ATerm p_14 = (ATerm) ATgetNext((ATermList) n_14);
              if(((ATgetType(p_14) == AT_LIST) && !(ATisEmpty(p_14))))
                {
                  f_4 = ATgetFirst((ATermList) p_14);
                  {
                    ATerm r_14 = (ATerm) ATgetNext((ATermList) p_14);
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
    t = (ATerm) ATmakeAppl(sym_Choice_2, z_3, f_4);
    return(t);
  }
  t = foldr_2_0(k_1, l_1, t);
  return(t);
}
ATerm tsubs_0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm h_6 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        h_6 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = h_6;
    return(t);
  }
  t = substitute_1_0(m_1, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm l_6 = NULL,o_6 = NULL,w_6 = NULL,y_6 = NULL,z_6 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_6 = ATgetFirst((ATermList) t);
      c_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_6;
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_6;
            if((w_6 != t))
              {
                _fail(t);
              }
            t = o_6;
            ;
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            t = (ATerm) ATmakeAppl(sym__2, w_6, c_7);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, w_6, c_7);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  t = a_103(t);
  e_10 = t;
  t = b_103(t);
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_10, f_10);
  t = lookup_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm g_10 (ATerm t)
  {
    ATerm u_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_104(t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = u_14;
        t = SRTS_all(g_10, t);
      }
    return(t);
  }
  t = g_10(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,t_11 = NULL,i_12 = NULL;
  p_11 = t;
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_15 = ATgetArgument(t, 0);
            ATerm b_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_14);
        t = p_11;
      }
    else
      {
        t = y_14;
        {
          ATerm r_12 = NULL;
          if(match_cons(t, sym__3))
            {
              q_11 = ATgetArgument(t, 0);
              t_11 = ATgetArgument(t, 1);
              i_12 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, q_11, t_11);
          t = zip_1_0(_id, t);
          r_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_12, i_12);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_12;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = t_12;
        return(t);
      }
      t = SubsVar_2_0(l_102, o_1, t);
      t = m_102(t);
      return(t);
    }
    t = alltd_1_0(n_1, t);
  }
  return(t);
}
ATerm substitute_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  t = substitute_2_0(n_102, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm m_13 = NULL,r_13 = NULL,z_13 = NULL,a_14 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        r_13 = ATgetArgument(t, 0);
        a_14 = ATgetArgument(t, 1);
        m_13 = ATgetArgument(t, 2);
        t = r_13;
        if(match_cons(t, sym_SVar_1))
          {
            z_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_13;
      }
    else
      {
        if(match_cons(t, sym_Call_2))
          {
            r_13 = ATgetArgument(t, 0);
            a_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_13;
        if(match_cons(t, sym_SVar_1))
          {
            z_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_13;
      }
    return(t);
  }
  t = substitute_1_0(p_1, t);
  return(t);
}
ATerm VarDec_2_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,q_14 = NULL,v_14 = NULL,w_14 = NULL;
  w_14 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_14);
  h_14 = t;
  t = i_14;
  t = w_91(t);
  q_14 = t;
  t = j_14;
  t = x_91(t);
  v_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, q_14, v_14), h_14);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm g_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,x_15 = NULL,e_16 = NULL,i_16 = NULL,k_16 = NULL,o_16 = NULL;
  g_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_15 = ATgetFirst((ATermList) t);
      if(match_cons(c_15, sym_SDefT_4))
        {
          k_15 = ATgetArgument(c_15, 0);
          l_15 = ATgetArgument(c_15, 1);
          m_15 = ATgetArgument(c_15, 2);
          {
            ATerm e_15 = ATgetArgument(c_15, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm d_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_15;
  {
    ATerm q_1 (ATerm t)
    {
      t = VarDec_2_0(new_0_0, _id, t);
      return(t);
    }
    t = map_1_0(q_1, t);
    x_15 = t;
    t = m_15;
    {
      ATerm r_1 (ATerm t)
      {
        t = VarDec_2_0(new_0_0, _id, t);
        return(t);
      }
      t = map_1_0(r_1, t);
      e_16 = t;
      t = x_15;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm p_16 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              p_16 = ATgetArgument(t, 0);
              {
                ATerm f_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_16), (ATerm)ATempty, (ATerm) ATempty);
          return(t);
        }
        t = map_1_0(x_1, t);
        i_16 = t;
        t = e_16;
        {
          ATerm y_1 (ATerm t)
          {
            ATerm q_16 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                q_16 = ATgetArgument(t, 0);
                {
                  ATerm h_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, q_16);
            return(t);
          }
          t = map_1_0(y_1, t);
          k_16 = t;
          t = g_15;
          {
            ATerm d_2 (ATerm t)
            {
              ATerm s_16 = NULL,b_17 = NULL,e_17 = NULL,j_17 = NULL,k_17 = NULL,m_17 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  ATerm i_15 = ATgetArgument(t, 0);
                  s_16 = ATgetArgument(t, 1);
                  b_17 = ATgetArgument(t, 2);
                  e_17 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = b_17;
              {
                ATerm f_2 (ATerm t)
                {
                  ATerm o_17 = NULL;
                  if(match_cons(t, sym_VarDec_2))
                    {
                      o_17 = ATgetArgument(t, 0);
                      {
                        ATerm j_15 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = o_17;
                  return(t);
                }
                t = map_1_0(f_2, t);
                j_17 = t;
                t = s_16;
                {
                  ATerm h_2 (ATerm t)
                  {
                    ATerm q_17 = NULL;
                    if(match_cons(t, sym_VarDec_2))
                      {
                        q_17 = ATgetArgument(t, 0);
                        {
                          ATerm n_15 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = q_17;
                    return(t);
                  }
                  t = map_1_0(h_2, t);
                  k_17 = t;
                  t = (ATerm) ATmakeAppl(sym__3, k_17, i_16, e_17);
                  t = ssubs_0_0(t);
                  m_17 = t;
                  t = (ATerm) ATmakeAppl(sym__3, j_17, k_16, m_17);
                  t = tsubs_0_0(t);
                }
              }
              return(t);
            }
            t = map_1_0(d_2, t);
            t = choices_0_0(t);
            o_16 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_15, x_15, e_16, o_16);
          }
        }
      }
    }
  }
  return(t);
}
ATerm joindefs_0_0 (ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_17 = NULL,a_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_17 = ATgetFirst((ATermList) t);
          a_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_17;
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_15 = ATgetArgument(t, 0);
      if(match_cons(q_15, sym__2))
        {
          f_18 = ATgetArgument(q_15, 0);
          g_18 = ATgetArgument(q_15, 1);
        }
      else
        _fail(t);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_18, g_18);
  t = Definitions_0_0(t);
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_18, h_18);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm m_18 = NULL,r_18 = NULL,s_18 = NULL;
  r_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      s_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      {
        ATerm v_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
        t = r_18;
        t = new_0_0(t);
        v_18 = t;
        t = new_0_0(t);
        z_18 = t;
        t = new_0_0(t);
        a_19 = t;
        t = new_0_0(t);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_19), a_19), z_18), v_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, v_18), (ATerm) ATmakeAppl(sym_Var_1, a_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, s_18, (ATerm)ATmakeAppl(sym_Var_1, v_18), (ATerm) ATmakeAppl(sym_Var_1, z_18)), (ATerm) ATmakeAppl(sym_BAM_3, m_18, (ATerm)ATmakeAppl(sym_Var_1, a_19), (ATerm) ATmakeAppl(sym_Var_1, b_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_r_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_19)), (ATerm) ATmakeAppl(sym_Var_1, z_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_18 = ATgetArgument(t, 0);
          {
            ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
            t = r_18;
            t = new_0_0(t);
            i_19 = t;
            t = s_18;
            {
              ATerm i_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    j_19 = ATgetArgument(t, 0);
                    k_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, i_19);
                return(t);
              }
              t = oncetd_1_0(i_2, t);
              l_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_19)), not_null(j_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_19)), (ATerm) ATmakeAppl(sym_Build_1, l_19))));
            }
          }
        }
      else
        {
          ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              s_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_18;
          t = new_0_0(t);
          n_19 = t;
          t = new_0_0(t);
          o_19 = t;
          t = s_18;
          {
            ATerm t_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  p_19 = ATgetArgument(t, 0);
                  q_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, n_19);
              return(t);
            }
            t = oncetd_1_0(t_2, t);
            r_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_s_15, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_19))))), (ATerm)ATmakeAppl(sym_Var_1, n_19), (ATerm) ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_19)), not_null(p_19)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL;
  t_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
        t = t_19;
        t = new_0_0(t);
        w_19 = t;
        t = u_19;
        {
          ATerm u_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                y_19 = ATgetArgument(t, 0);
                x_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_19), y_19);
            return(t);
          }
          t = pat_td_1_0(u_2, t);
          z_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_w_15, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_19))))));
        }
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
              t = t_19;
              t = new_0_0(t);
              b_20 = t;
              t = u_19;
              {
                ATerm d_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, b_20);
                  return(t);
                }
                t = pat_td_1_0(d_3, t);
                d_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), not_null(c_20))));
              }
              ;
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              {
                ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
                t = t_19;
                t = new_0_0(t);
                f_20 = t;
                t = u_19;
                {
                  ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        g_20 = ATgetArgument(t, 0);
                        h_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_20);
                    return(t);
                  }
                  t = pat_td_1_0(e_3, t);
                  i_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, f_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_20)), not_null(g_20)))));
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
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      j_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_20;
  {
    ATerm h_3 (ATerm t)
    {
      if(match_cons(t, sym_RootApp_1))
        {
          ATerm a_16 = ATgetArgument(t, 0);
          if(match_cons(a_16, sym_Match_1))
            {
              k_20 = ATgetArgument(a_16, 0);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = k_20;
      return(t);
    }
    t = pat_td_1_0(h_3, t);
    l_20 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, l_20);
  }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      {
        ATerm d_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
            if(match_cons(t, sym_Match_1))
              {
                p_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_20;
            if(match_cons(t, sym_RootApp_1))
              {
                q_20 = ATgetArgument(t, 0);
                t = q_20;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    q_20 = ATgetArgument(t, 0);
                    r_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_BA_2, q_20, r_20);
              }
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = d_16;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  w_20 = t;
  if(match_cons(t, sym_Build_1))
    {
      x_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
        t = w_20;
        t = new_0_0(t);
        z_20 = t;
        t = x_20;
        {
          ATerm n_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                a_21 = ATgetArgument(t, 0);
                b_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, z_20);
            return(t);
          }
          t = pat_td_1_0(n_3, t);
          c_21 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_16, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_21)), not_null(a_21))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_20)))), (ATerm) ATmakeAppl(sym_Build_1, c_21)));
        }
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
              t = w_20;
              t = new_0_0(t);
              e_21 = t;
              t = x_20;
              {
                ATerm o_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      f_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, e_21);
                  return(t);
                }
                t = pat_td_1_0(o_3, t);
                g_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_21), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_21)))), (ATerm) ATmakeAppl(sym_Build_1, g_21)));
              }
              ;
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
              {
                ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
                t = w_20;
                t = new_0_0(t);
                i_21 = t;
                t = x_20;
                {
                  ATerm s_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        j_21 = ATgetArgument(t, 0);
                        k_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_21);
                    return(t);
                  }
                  t = pat_td_1_0(s_3, t);
                  l_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_21), not_null(k_21), (ATerm) ATmakeAppl(sym_Var_1, i_21))), (ATerm) ATmakeAppl(sym_Build_1, l_21)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  r_21 = t;
  if(match_cons(t, sym_As_2))
    {
      n_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_21);
  m_21 = t;
  t = n_21;
  t = s_86(t);
  p_21 = t;
  t = o_21;
  t = t_86(t);
  q_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, p_21, q_21), m_21);
  return(t);
}
ATerm PrimT_3_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  b_22 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
      x_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_22);
  u_21 = t;
  t = v_21;
  t = r_90(t);
  y_21 = t;
  t = w_21;
  t = s_90(t);
  z_21 = t;
  t = x_21;
  t = t_90(t);
  a_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, y_21, z_21, a_22), u_21);
  return(t);
}
ATerm Explode_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  j_22 = t;
  if(match_cons(t, sym_Explode_2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_22);
  e_22 = t;
  t = f_22;
  t = l_86(t);
  h_22 = t;
  t = g_22;
  t = m_86(t);
  i_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, h_22, i_22), e_22);
  return(t);
}
ATerm Op_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  r_22 = t;
  if(match_cons(t, sym_Op_2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_22);
  m_22 = t;
  t = n_22;
  t = h_86(t);
  p_22 = t;
  t = o_22;
  t = i_86(t);
  q_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, p_22, q_22), m_22);
  return(t);
}
ATerm pat_td_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm n_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_98(t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = n_16;
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 (ATerm t)
            {
              ATerm u_3 (ATerm t)
              {
                t = pat_td_1_0(p_98, t);
                return(t);
              }
              t = fetch_1_0(u_3, t);
              return(t);
            }
            t = Op_2_0(_id, t_3, t);
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            {
              ATerm v_16 = t;
              int w_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_3 (ATerm t)
                  {
                    t = pat_td_1_0(p_98, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, v_3, t);
                  ;
                  LocalPopChoice(w_16);
                }
              else
                {
                  t = v_16;
                  {
                    ATerm x_16 = t;
                    int y_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_3 (ATerm t)
                        {
                          t = pat_td_1_0(p_98, t);
                          return(t);
                        }
                        t = Explode_2_0(w_3, _id, t);
                        ;
                        LocalPopChoice(y_16);
                      }
                    else
                      {
                        t = x_16;
                        {
                          ATerm z_16 = t;
                          int a_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_3 (ATerm t)
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = pat_td_1_0(p_98, t);
                                  return(t);
                                }
                                t = fetch_1_0(a_4, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, y_3, t);
                              ;
                              LocalPopChoice(a_17);
                            }
                          else
                            {
                              t = z_16;
                              {
                                ATerm b_4 (ATerm t)
                                {
                                  t = pat_td_1_0(p_98, t);
                                  return(t);
                                }
                                t = As_2_0(_id, b_4, t);
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
  ATerm w_22 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL,z_22 = NULL;
        t = w_22;
        {
          ATerm d_4 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm f_17 = ATgetArgument(t, 0);
                if(match_cons(f_17, sym_Build_1))
                  {
                    y_22 = ATgetArgument(f_17, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = y_22;
            return(t);
          }
          t = pat_td_1_0(d_4, t);
          z_22 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
        }
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        {
          ATerm b_23 = NULL,c_23 = NULL;
          t = w_22;
          {
            ATerm e_4 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm g_17 = ATgetArgument(t, 0);
                  if(match_cons(g_17, sym_Build_1))
                    {
                      b_23 = ATgetArgument(g_17, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_17 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = b_23;
              return(t);
            }
            t = pat_td_1_0(e_4, t);
            c_23 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, c_23);
          }
        }
      }
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm i_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = i_17;
      {
        ATerm n_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
            if(match_cons(t, sym_Build_1))
              {
                g_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_23;
            if(match_cons(t, sym_RootApp_1))
              {
                h_23 = ATgetArgument(t, 0);
                t = h_23;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    h_23 = ATgetArgument(t, 0);
                    i_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_23), h_23);
              }
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = n_17;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm g_4 (ATerm t)
        {
          ATerm i_4 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(i_4, t);
          return(t);
        }
        t = Cons_2_0(_id, g_4, t);
      }
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm j_4 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, j_4, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,v_23 = NULL,w_23 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, v_23, w_23);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          v_23 = ATgetArgument(t, 0);
          t = v_23;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_23 = ATgetFirst((ATermList) t);
              r_23 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, q_23, (ATerm) ATmakeAppl(sym_LChoices_1, r_23));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_14;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              v_23 = ATgetArgument(t, 0);
              t = v_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_23 = ATgetFirst((ATermList) t);
                  r_23 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, q_23, (ATerm) ATmakeAppl(sym_Choices_1, r_23));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_f_14;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  v_23 = ATgetArgument(t, 0);
                  t = v_23;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_23 = ATgetFirst((ATermList) t);
                      r_23 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_23, (ATerm) ATmakeAppl(sym_Seqs_1, r_23));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_t_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_23 = ATgetArgument(t, 0);
                      w_23 = ATgetArgument(t, 1);
                      t_23 = ATgetArgument(t, 2);
                      s_23 = ATgetArgument(t, 3);
                      {
                        ATerm j_24 = NULL,k_24 = NULL;
                        t = w_23;
                        {
                          ATerm k_4 (ATerm t)
                          {
                            ATerm l_24 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                l_24 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, l_24, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_17), term_x_17));
                            return(t);
                          }
                          t = map1_1_0(k_4, t);
                          j_24 = t;
                          t = t_23;
                          {
                            ATerm l_4 (ATerm t)
                            {
                              ATerm m_4 (ATerm t)
                              {
                                ATerm m_24 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    m_24 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, m_24, term_x_17);
                                return(t);
                              }
                              t = try_1_0(m_4, t);
                              return(t);
                            }
                            t = map1_1_0(l_4, t);
                            k_24 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, v_23, j_24, k_24, s_23);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          v_23 = ATgetArgument(t, 0);
                          w_23 = ATgetArgument(t, 1);
                          t_23 = ATgetArgument(t, 2);
                          s_23 = ATgetArgument(t, 3);
                          {
                            ATerm y_17 = t;
                            int z_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_24 = NULL,s_24 = NULL;
                                t = t_23;
                                {
                                  ATerm n_4 (ATerm t)
                                  {
                                    ATerm t_24 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        t_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, t_24, term_x_17);
                                    return(t);
                                  }
                                  t = map1_1_0(n_4, t);
                                  r_24 = t;
                                  t = w_23;
                                  {
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm t_4 (ATerm t)
                                      {
                                        ATerm u_24 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            u_24 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_24, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_17), term_x_17));
                                        return(t);
                                      }
                                      t = try_1_0(t_4, t);
                                      return(t);
                                    }
                                    t = map_1_0(p_4, t);
                                    s_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, v_23, s_24, r_24, s_23);
                                  }
                                }
                                ;
                                LocalPopChoice(z_17);
                              }
                            else
                              {
                                t = y_17;
                                {
                                  ATerm z_24 = NULL,a_25 = NULL;
                                  t = w_23;
                                  {
                                    ATerm u_4 (ATerm t)
                                    {
                                      ATerm b_25 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          b_25 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_17), term_x_17));
                                      return(t);
                                    }
                                    t = map1_1_0(u_4, t);
                                    z_24 = t;
                                    t = t_23;
                                    {
                                      ATerm v_4 (ATerm t)
                                      {
                                        ATerm w_4 (ATerm t)
                                        {
                                          ATerm c_25 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              c_25 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, c_25, term_x_17);
                                          return(t);
                                        }
                                        t = try_1_0(w_4, t);
                                        return(t);
                                      }
                                      t = map_1_0(v_4, t);
                                      a_25 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, v_23, z_24, a_25, s_23);
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
                              v_23 = ATgetArgument(t, 0);
                              w_23 = ATgetArgument(t, 1);
                              t_23 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, w_23, (ATerm) ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, t_23), v_23)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  v_23 = ATgetArgument(t, 0);
                                  w_23 = ATgetArgument(t, 1);
                                  t_23 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, t_23)), v_23), (ATerm) ATmakeAppl(sym_Build_1, w_23)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      v_23 = ATgetArgument(t, 0);
                                      w_23 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_23, (ATerm) ATmakeAppl(sym_Match_1, w_23));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          v_23 = ATgetArgument(t, 0);
                                          w_23 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_23), w_23);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              v_23 = ATgetArgument(t, 0);
                                              w_23 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_23), v_23);
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
ATerm unzip_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_b_18;
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm p_25 = NULL,q_25 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_25 = ATgetFirst((ATermList) t);
        q_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_25, q_25);
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_18 = ATgetArgument(t, 0);
        if(match_cons(c_18, sym__2))
          {
            r_25 = ATgetArgument(c_18, 0);
            t_25 = ATgetArgument(c_18, 1);
          }
        else
          _fail(t);
        {
          ATerm d_18 = ATgetArgument(t, 1);
          if(match_cons(d_18, sym__2))
            {
              s_25 = ATgetArgument(d_18, 0);
              u_25 = ATgetArgument(d_18, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_25), r_25), (ATerm) ATinsert(CheckATermList(u_25), t_25));
    return(t);
  }
  t = genzip_4_0(x_4, y_4, z_4, y_107, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm d_26 (ATerm x_25, ATerm t)
  {
    ATerm z_25 = NULL;
    t = x_25;
    {
      ATerm e_18 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_18;
        }
      t = new_0_0(t);
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, z_25), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_25), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_25)))), (ATerm) ATmakeAppl(sym_Var_1, z_25)));
    }
    return(t);
  }
  ATerm a_26 = NULL,b_26 = NULL;
  a_26 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_26 = ATgetArgument(t, 0);
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_26(a_26, t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATmakeAppl(sym_Var_1, b_26)));
          }
      }
    }
  else
    {
      t = d_26(a_26, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  h_26 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_26);
  e_26 = t;
  t = f_26;
  t = b_86(t);
  g_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, g_26), e_26);
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
      f_27 = ATgetArgument(t, 2);
      {
        ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
        t = f_27;
        {
          ATerm a_5 (ATerm t)
          {
            ATerm l_18 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_18;
              }
            return(t);
          }
          t = fetch_1_0(a_5, t);
          t = f_27;
          t = unzip_1_0(LiftPrimArg_0_0, t);
          {
            ATerm b_5 (ATerm t)
            {
              t = unzip_1_0(_id, t);
              return(t);
            }
            t = _2_0(concat_0_0, b_5, t);
            if(match_cons(t, sym__2))
              {
                q_4 = ATgetArgument(t, 0);
                {
                  ATerm n_18 = ATgetArgument(t, 1);
                  if(match_cons(n_18, sym__2))
                    {
                      r_4 = ATgetArgument(n_18, 0);
                      s_4 = ATgetArgument(n_18, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, q_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_4), (ATerm) ATmakeAppl(sym_PrimT_3, h_27, i_27, s_4)));
          }
        }
      }
    }
  else
    {
      ATerm c_5 = NULL,g_5 = NULL,l_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_27 = ATgetArgument(t, 0);
          i_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_27;
      {
        ATerm d_5 (ATerm t)
        {
          ATerm o_18 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_18;
            }
          return(t);
        }
        t = fetch_1_0(d_5, t);
        t = i_27;
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm i_5 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, i_5, t);
          if(match_cons(t, sym__2))
            {
              c_5 = ATgetArgument(t, 0);
              {
                ATerm p_18 = ATgetArgument(t, 1);
                if(match_cons(p_18, sym__2))
                  {
                    g_5 = ATgetArgument(p_18, 0);
                    l_5 = ATgetArgument(p_18, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, c_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_5), (ATerm) ATmakeAppl(sym_PrimT_3, h_27, (ATerm)ATempty, l_5)));
        }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm l_27 (ATerm t)
  {
    ATerm m_5 (ATerm t)
    {
      t = j_113(t);
      t = l_27(t);
      return(t);
    }
    t = try_1_0(m_5, t);
    return(t);
  }
  t = l_27(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm q_18 = t;
  if((PushChoice() == 0))
    {
      ATerm s_5 (ATerm t)
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(s_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_18;
    }
  return(t);
}
ATerm App_2_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  r_27 = t;
  if(match_cons(t, sym_App_2))
    {
      n_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_27);
  m_27 = t;
  t = n_27;
  t = p_86(t);
  p_27 = t;
  t = o_27;
  t = q_86(t);
  q_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, p_27, q_27), m_27);
  return(t);
}
ATerm Con_3_0 (ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym_Con_3))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
      x_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_28);
  u_27 = t;
  t = v_27;
  t = b_87(t);
  y_27 = t;
  t = w_27;
  t = c_87(t);
  z_27 = t;
  t = x_27;
  t = d_87(t);
  a_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, y_27, z_27, a_28), u_27);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm w_18 = t;
  if((PushChoice() == 0))
    {
      ATerm u_5 (ATerm t)
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(u_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_18;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      h_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_28;
  if(match_cons(t, sym_StratRule_3))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
      k_28 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_28), (ATerm) ATmakeAppl(sym_Where_1, k_28)), i_28));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          i_28 = ATgetArgument(t, 0);
          j_28 = ATgetArgument(t, 1);
          k_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_28;
      t = pureterm_0_0(t);
      t = j_28;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, j_28)), (ATerm) ATmakeAppl(sym_Where_1, k_28)), (ATerm) ATmakeAppl(sym_Match_1, i_28)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  w_28 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_28 = ATgetArgument(t, 0);
      t_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_28);
  r_28 = t;
  t = s_28;
  t = v_89(t);
  u_28 = t;
  t = t_28;
  t = w_89(t);
  v_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, u_28, v_28), r_28);
  return(t);
}
ATerm oncetd_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm z_28 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_104(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = SRTS_one(z_28, t);
      }
    return(t);
  }
  t = z_28(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm e_19 = ATgetArgument(t, 0);
      if(match_cons(e_19, sym_Rule_3))
        {
          a_29 = ATgetArgument(e_19, 0);
          b_29 = ATgetArgument(e_19, 1);
          c_29 = ATgetArgument(e_19, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  d_29 = t;
  t = a_29;
  {
    ATerm x_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm f_19 = ATgetArgument(t, 0);
          if(match_cons(f_19, sym_Var_1))
            {
              f_29 = ATgetArgument(f_19, 0);
            }
          else
            _fail(t);
          e_29 = ATgetArgument(t, 1);
          {
            ATerm g_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_29);
      return(t);
    }
    t = oncetd_1_0(x_5, t);
    g_29 = t;
    t = b_29;
    {
      ATerm y_5 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm h_19 = ATgetArgument(t, 0);
            if(match_cons(h_19, sym_Var_1))
              {
                f_29 = ATgetArgument(h_19, 0);
              }
            else
              _fail(t);
            h_29 = ATgetArgument(t, 1);
            {
              ATerm m_19 = ATgetArgument(t, 2);
              if(match_cons(m_19, sym_CallT_3))
                {
                  i_29 = ATgetArgument(m_19, 0);
                  {
                    ATerm s_19 = ATgetArgument(m_19, 1);
                    if(((ATgetType(s_19) != AT_LIST) || !(ATisEmpty(s_19))))
                      _fail(t);
                  }
                  {
                    ATerm v_19 = ATgetArgument(m_19, 2);
                    if(((ATgetType(v_19) != AT_LIST) || !(ATisEmpty(v_19))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, d_29);
        return(t);
      }
      t = oncetd_1_0(y_5, t);
      j_29 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_29), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_29, j_29, (ATerm) ATmakeAppl(sym_Seq_2, c_29, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(i_29), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_29), not_null(h_29), term_t_17))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_29)), (ATerm) ATmakeAppl(sym_Var_1, d_29))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm a_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = a_20;
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(a_6, t);
  return(t);
}
ATerm topdown_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  t = c_103(t);
  {
    ATerm b_6 (ATerm t)
    {
      t = topdown_1_0(c_103, t);
      return(t);
    }
    t = SRTS_all(b_6, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm d_6 (ATerm t)
      {
        ATerm o_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = o_20;
            {
              ATerm t_20 = t;
              int u_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(u_20);
                }
              else
                {
                  t = t_20;
                  {
                    ATerm v_20 = t;
                    int y_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(y_20);
                      }
                    else
                      {
                        t = v_20;
                        {
                          ATerm d_21 = t;
                          int h_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(h_21);
                            }
                          else
                            {
                              t = d_21;
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
      t = repeat_1_0(d_6, t);
    }
    return(t);
  }
  t = topdown_1_0(c_6, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Thd_0_0 (ATerm t)
{
  ATerm t_5 = NULL,v_5 = NULL;
  t_5 = t;
  t = SSL_explode_term(t_5);
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_21 = ATgetArgument(t, 1);
        if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
          {
            v_5 = ATgetFirst((ATermList) t_21);
            {
              ATerm c_22 = (ATerm) ATgetNext((ATermList) t_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_5;
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm n_29 = NULL;
  ATerm s_29 (ATerm t)
  {
    ATerm d_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_29 = NULL,q_29 = NULL,r_29 = NULL;
        o_29 = t;
        t = map_1_0(Thd_0_0, t);
        t = e_107(t);
        q_29 = t;
        t = o_29;
        {
          ATerm f_6 (ATerm t)
          {
            ATerm i_6 = NULL,j_6 = NULL;
            i_6 = t;
            t = SSL_explode_term(i_6);
            if(match_cons(t, sym__2))
              {
                ATerm l_22 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_22) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm s_22 = ATgetArgument(t, 1);
                  if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
                    {
                      ATerm t_22 = ATgetFirst((ATermList) s_22);
                      j_6 = (ATerm) ATgetNext((ATermList) s_22);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), j_6);
            return(t);
          }
          t = map_1_0(f_6, t);
          t = s_29(t);
          r_29 = t;
          t = (ATerm) ATinsert(CheckATermList(r_29), q_29);
        }
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = d_22;
        {
          ATerm g_6 (ATerm t)
          {
            if(!(match_cons(t, sym__0)))
              _fail(t);
            return(t);
          }
          t = map_1_0(g_6, t);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = s_29(t);
  n_29 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), n_29);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
        t = t_29;
        t = new_0_0(t);
        v_29 = t;
        t = new_0_0(t);
        w_29 = t;
        t = new_0_0(t);
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_29), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, t_29), (ATerm) ATmakeAppl(sym_Var_1, w_29))), (ATerm) ATmakeAppl(sym_Var_1, x_29)), (ATerm)ATmakeAppl(sym_VarDec_2, v_29, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_17), term_x_17)), w_29, (ATerm)ATmakeAppl(sym_Var_1, w_29), x_29, (ATerm) ATmakeAppl(sym_Var_1, x_29));
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
          t = t_29;
          t = new_0_0(t);
          z_29 = t;
          t = new_0_0(t);
          a_30 = t;
          t = new_0_0(t);
          b_30 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_29), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, t_29), (ATerm) ATmakeAppl(sym_Var_1, a_30))), (ATerm) ATmakeAppl(sym_Var_1, b_30)), (ATerm)ATmakeAppl(sym_VarDec_2, z_29, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_17), term_x_17)), a_30, (ATerm)ATmakeAppl(sym_Var_1, a_30), b_30, (ATerm) ATmakeAppl(sym_Var_1, b_30));
        }
      }
  }
  return(t);
}
ATerm copy_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm c_30 = NULL,d_30 = NULL;
    if(match_cons(t, sym__2))
      {
        c_30 = ATgetArgument(t, 0);
        d_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, c_30, d_30, (ATerm) ATempty);
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    ATerm e_30 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm x_22 = ATgetArgument(t, 0);
        if(((ATgetType(x_22) != AT_INT) || (ATgetInt((ATermInt) x_22) != 0)))
          _fail(t);
        {
          ATerm a_23 = ATgetArgument(t, 1);
        }
        e_30 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = e_30;
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
    if(match_cons(t, sym__3))
      {
        f_30 = ATgetArgument(t, 0);
        g_30 = ATgetArgument(t, 1);
        h_30 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_30, term_d_23);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, f_30, term_d_23);
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(f_30, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          t = SSL_subtr(f_30, (ATerm) ATmakeInt(1));
        }
      i_30 = t;
      t = g_30;
      t = h_117(t);
      j_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, i_30, g_30, (ATerm) ATinsert(CheckATermList(h_30), j_30));
    }
    return(t);
  }
  t = for_3_0(k_6, m_6, p_6, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  if(match_cons(t, sym__2))
    {
      k_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  m_30 = t;
  t = new_0_0(t);
  n_30 = t;
  t = new_0_0(t);
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_30), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_30)), (ATerm) ATmakeAppl(sym_Var_1, n_30))), (ATerm) ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_30)), (ATerm) ATmakeAppl(sym_Var_1, o_30)))), (ATerm)ATmakeAppl(sym_VarDec_2, m_30, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_17), term_x_17)), n_30, (ATerm)ATmakeAppl(sym_Var_1, n_30), o_30, (ATerm) ATmakeAppl(sym_Var_1, o_30));
  return(t);
}
ATerm zipr_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm j_23 = ATgetArgument(t, 0);
        ATerm k_23 = ATgetArgument(t, 1);
        if(((ATgetType(k_23) != AT_LIST) || !(ATisEmpty(k_23))))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_23 = ATgetArgument(t, 0);
        if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
          {
            p_30 = ATgetFirst((ATermList) l_23);
            r_30 = (ATerm) ATgetNext((ATermList) l_23);
          }
        else
          _fail(t);
        {
          ATerm m_23 = ATgetArgument(t, 1);
          if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
            {
              q_30 = ATgetFirst((ATermList) m_23);
              s_30 = (ATerm) ATgetNext((ATermList) m_23);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_30, q_30), (ATerm) ATmakeAppl(sym__2, r_30, s_30));
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    ATerm t_30 = NULL,u_30 = NULL;
    if(match_cons(t, sym__2))
      {
        t_30 = ATgetArgument(t, 0);
        u_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(u_30), t_30);
    return(t);
  }
  t = genzip_4_0(q_6, r_6, t_6, w_107, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_30 = ATgetFirst((ATermList) t);
      z_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm n_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_30;
          ;
          LocalPopChoice(o_23);
        }
      else
        {
          t = n_23;
          t = z_30;
          t = last_0_0(t);
        }
    }
  else
    {
      t = z_30;
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm a_33 (ATerm l_31, ATerm m_31, ATerm n_31, ATerm o_31, ATerm t)
  {
    ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, m_31, term_d_23);
    {
      ATerm p_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(m_31, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(u_23);
        }
      else
        {
          t = p_23;
          t = SSL_addr(m_31, (ATerm) ATmakeInt(1));
        }
      s_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_31, term_x_23);
      t = copy_1_0(new_0_0, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_31 = ATgetFirst((ATermList) t);
          u_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_31;
      t = last_0_0(t);
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_31), t_31), u_31);
      t = zipr_1_0(MkThreadApplication_0_0, t);
      t = tuple_unzip_1_0(_id, t);
      if(match_cons(t, sym__6))
        {
          w_31 = ATgetArgument(t, 0);
          x_31 = ATgetArgument(t, 1);
          y_31 = ATgetArgument(t, 2);
          z_31 = ATgetArgument(t, 3);
          a_32 = ATgetArgument(t, 4);
          b_32 = ATgetArgument(t, 5);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_32), y_31), u_31);
      t = concat_0_0(t);
      c_32 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, l_31, term_y_23), x_31, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(c_32), t_31), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_31)), (ATerm) ATmakeAppl(sym_Op_2, l_31, z_31))), (ATerm)ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_31)), (ATerm) ATmakeAppl(sym_Op_2, l_31, b_32))), (ATerm) ATmakeAppl(sym_Seqs_1, w_31)))));
    }
    return(t);
  }
  ATerm b_33 (ATerm d_32, ATerm e_32, ATerm f_32, ATerm g_32, ATerm t)
  {
    ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
    t = g_32;
    t = new_0_0(t);
    k_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_32, (ATerm) ATmakeAppl(sym_Var_1, k_32));
    t = copy_1_0(MkDistApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        l_32 = ATgetArgument(t, 0);
        m_32 = ATgetArgument(t, 1);
        n_32 = ATgetArgument(t, 2);
        o_32 = ATgetArgument(t, 3);
        p_32 = ATgetArgument(t, 4);
        q_32 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, n_32, p_32);
    t = conc_0_0(t);
    r_32 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, d_32, term_z_23), m_32, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(r_32), k_32), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_32)), (ATerm) ATmakeAppl(sym_Op_2, d_32, o_32))), (ATerm)ATmakeAppl(sym_Op_2, d_32, q_32), (ATerm) ATmakeAppl(sym_Seqs_1, l_32)))));
    return(t);
  }
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  s_32 = t;
  if(match_cons(t, sym__3))
    {
      t_32 = ATgetArgument(t, 0);
      u_32 = ATgetArgument(t, 1);
      v_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_32;
  if(match_string(t, "T"))
    {
      t = v_32;
      if(match_cons(t, sym__2))
        {
          w_32 = ATgetArgument(t, 0);
          x_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_32;
      if(match_int(t, 0))
        {
          ATerm a_24 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_33(t_32, w_32, x_32, s_32, t);
              ;
              LocalPopChoice(b_24);
            }
          else
            {
              t = a_24;
              {
                ATerm z_32 = NULL;
                t = s_32;
                t = new_0_0(t);
                z_32 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, t_32, term_y_23), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_32), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_32)), (ATerm) ATmakeAppl(sym_Op_2, t_32, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_32)), (ATerm) ATmakeAppl(sym_Op_2, t_32, (ATerm) ATempty))), term_t_17))));
              }
            }
        }
      else
        {
          t = a_33(t_32, w_32, x_32, s_32, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = v_32;
      if(match_cons(t, sym__2))
        {
          w_32 = ATgetArgument(t, 0);
          x_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_33(t_32, w_32, x_32, s_32, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,y_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      if(match_cons(c_24, sym__2))
        {
          ATerm d_24 = ATgetArgument(c_24, 0);
          if(match_cons(d_24, sym_Mod_2))
            {
              c_33 = ATgetArgument(d_24, 0);
              d_33 = ATgetArgument(d_24, 1);
            }
          else
            _fail(t);
          e_33 = ATgetArgument(c_24, 1);
        }
      else
        _fail(t);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_33, d_33, e_33);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, f_33);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = OverloadedDef_0_0(t);
      t = _2_0(joindefs_0_0, _id, t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm h_114 (ATerm), ATerm t)
{
  ATerm e_35 = NULL,s_35 = NULL;
  if(match_cons(t, sym__2))
    {
      s_35 = ATgetArgument(t, 0);
      e_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_35;
  {
    ATerm t_35 (ATerm t)
    {
      ATerm g_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(h_24);
        }
      else
        {
          t = g_24;
          {
            ATerm i_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_6 (ATerm t)
                {
                  t = e_35;
                  return(t);
                }
                t = HdMember_p__2_0(h_114, u_6, t);
                t = t_35(t);
                ;
                LocalPopChoice(n_24);
              }
            else
              {
                t = i_24;
                t = Cons_2_0(_id, t_35, t);
              }
          }
        }
      return(t);
    }
    t = t_35(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm t)
{
  ATerm e_36 (ATerm t)
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_107(t);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = p_107(t);
        t = _2_0(r_107, e_36, t);
        t = q_107(t);
      }
    return(t);
  }
  t = e_36(t);
  return(t);
}
ATerm zip_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm q_24 = ATgetArgument(t, 0);
        if(((ATgetType(q_24) != AT_LIST) || !(ATisEmpty(q_24))))
          _fail(t);
        {
          ATerm v_24 = ATgetArgument(t, 1);
          if(((ATgetType(v_24) != AT_LIST) || !(ATisEmpty(v_24))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    ATerm g_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm w_24 = ATgetArgument(t, 0);
        if(((ATgetType(w_24) == AT_LIST) && !(ATisEmpty(w_24))))
          {
            g_36 = ATgetFirst((ATermList) w_24);
            n_36 = (ATerm) ATgetNext((ATermList) w_24);
          }
        else
          _fail(t);
        {
          ATerm x_24 = ATgetArgument(t, 1);
          if(((ATgetType(x_24) == AT_LIST) && !(ATisEmpty(x_24))))
            {
              m_36 = ATgetFirst((ATermList) x_24);
              o_36 = (ATerm) ATgetNext((ATermList) x_24);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_36, m_36), (ATerm) ATmakeAppl(sym__2, n_36, o_36));
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    ATerm p_36 = NULL,q_36 = NULL;
    if(match_cons(t, sym__2))
      {
        p_36 = ATgetArgument(t, 0);
        q_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(q_36), p_36);
    return(t);
  }
  t = genzip_4_0(v_6, x_6, a_7, t_107, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,y_36 = NULL,b_37 = NULL,h_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_24 = ATgetFirst((ATermList) t);
      if(match_cons(y_24, sym__2))
        {
          r_36 = ATgetArgument(y_24, 0);
          s_36 = ATgetArgument(y_24, 1);
        }
      else
        _fail(t);
      t_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_36);
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_36);
  if(match_cons(t, sym__2))
    {
      if((u_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_37, y_36);
  t = zip_1_0(_id, t);
  h_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_37, t_36);
  t = conc_0_0(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_7 (ATerm t)
      {
        ATerm s_37 = NULL;
        s_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_37);
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        ATerm g_7 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, g_7, t);
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_7 (ATerm t)
            {
              ATerm h_25 = t;
              int i_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_38 = ATgetFirst((ATermList) t);
                      h_38 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_38;
                  if(match_cons(t, sym__2))
                    {
                      f_38 = ATgetArgument(t, 0);
                      g_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = g_38;
                  if((f_38 != t))
                    {
                      _fail(t);
                    }
                  t = h_38;
                  ;
                  LocalPopChoice(i_25);
                }
              else
                {
                  t = h_25;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, h_7, t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            {
              ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_38 = ATgetArgument(t, 0);
                  m_38 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_38;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_38 = ATgetFirst((ATermList) t);
                  o_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_38), n_38), o_38);
            }
          }
        return(t);
      }
      t = for_3_0(d_7, e_7, f_7, t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm j_7 (ATerm t)
        {
          ATerm s_38 = NULL;
          if(match_cons(t, sym__2))
            {
              s_38 = ATgetArgument(t, 0);
              if((s_38 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(j_7, t);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm j_25 = ATgetArgument(t, 0);
      if(((ATgetType(j_25) == AT_LIST) && !(ATisEmpty(j_25))))
        {
          t_38 = ATgetFirst((ATermList) j_25);
          r_39 = (ATerm) ATgetNext((ATermList) j_25);
        }
      else
        _fail(t);
      s_39 = ATgetArgument(t, 1);
      t_39 = ATgetArgument(t, 2);
      u_39 = ATgetArgument(t, 3);
      v_39 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_38, t_39);
  t = i_129(t);
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_39;
  t = j_129(t);
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_39, s_39);
  t = diff_0_0(t);
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_39, r_39);
  t = conc_0_0(t);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_39, s_39);
  t = conc_0_0(t);
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_38, w_39, u_39);
  t = k_129(t);
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym__5, a_40, b_40, x_39, c_40, v_39);
  return(t);
}
ATerm while_not_2_0 (ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm t)
{
  ATerm l_40 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_113(t);
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = z_113(t);
        t = l_40(t);
      }
    return(t);
  }
  t = l_40(t);
  return(t);
}
ATerm for_3_0 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm t)
{
  t = b_114(t);
  t = while_not_2_0(c_114, d_114, t);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm a_41 = NULL,j_41 = NULL,l_43 = NULL;
    if(match_cons(t, sym__3))
      {
        a_41 = ATgetArgument(t, 0);
        j_41 = ATgetArgument(t, 1);
        l_43 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, a_41, a_41, j_41, l_43, (ATerm) ATempty);
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    ATerm m_43 = NULL,v_43 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm m_25 = ATgetArgument(t, 0);
        if(((ATgetType(m_25) != AT_LIST) || !(ATisEmpty(m_25))))
          _fail(t);
        {
          ATerm n_25 = ATgetArgument(t, 1);
        }
        {
          ATerm o_25 = ATgetArgument(t, 2);
        }
        m_43 = ATgetArgument(t, 3);
        v_43 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, m_43, v_43);
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3_0(t_128, u_128, v_128, t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
          if(match_cons(t, sym__5))
            {
              x_43 = ATgetArgument(t, 0);
              a_44 = ATgetArgument(t, 1);
              b_44 = ATgetArgument(t, 2);
              c_44 = ATgetArgument(t, 3);
              d_44 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = x_43;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_43 = ATgetFirst((ATermList) t);
              z_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, z_43, a_44, b_44, c_44, (ATerm) ATinsert(CheckATermList(d_44), y_43));
        }
      }
    return(t);
  }
  t = for_3_0(k_7, l_7, m_7, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    t = svars_arity_0_0(t);
    {
      ATerm p_7 (ATerm t)
      {
        t = try_1_0(DefinitionExists_0_0, t);
        return(t);
      }
      t = map_1_0(p_7, t);
    }
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    ATerm m_44 = NULL,n_44 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm y_25 = ATgetArgument(t, 0);
        m_44 = ATgetArgument(t, 1);
        n_44 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(n_44), m_44);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3_0(get_definition_0_0, n_7, o_7, t);
  {
    ATerm c_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_44 = NULL,q_44 = NULL;
        if(match_cons(t, sym__2))
          {
            p_44 = ATgetArgument(t, 0);
            q_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_44;
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = c_26;
        t = MissingDefs_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm r_129 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_129(t);
  u_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_44, s_44, t_44);
  t = table_push_0_0(t);
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_44, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_44 = ATgetFirst((ATermList) t);
        w_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_44, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_44), (ATerm) ATinsert(CheckATermList(v_44), s_44)));
    t = (ATerm) ATmakeAppl(sym__2, s_44, t_44);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm k_45 = NULL;
  k_45 = t;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 = NULL;
        t = k_45;
        {
          ATerm q_7 (ATerm t)
          {
            t = term_n_26;
            return(t);
          }
          t = rewrite_1_0(q_7, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm o_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_26) != ATmakeSymbol("j_0", 0, ATtrue)))
                _fail(t);
              n_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_6;
        }
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        {
          ATerm s_6 = NULL;
          t = k_45;
          {
            ATerm r_7 (ATerm t)
            {
              t = term_n_26;
              return(t);
            }
            t = rewrite_1_0(r_7, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm p_26 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_26) != ATmakeSymbol("f_0", 0, ATtrue)))
                  _fail(t);
                s_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_6;
          }
        }
      }
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm t_129 (ATerm), ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,b_7 = NULL;
  q_45 = t;
  t = term_x_23;
  t = t_129(t);
  r_45 = t;
  t = SSL_table_get(r_45, q_45);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_7 = ATgetFirst((ATermList) t);
      {
        ATerm q_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_7;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm l_46 (ATerm b_46, ATerm t)
  {
    ATerm d_46 = NULL,e_46 = NULL;
    t = b_46;
    {
      ATerm s_7 (ATerm t)
      {
        t = term_r_26;
        return(t);
      }
      t = rewrite_1_0(s_7, t);
      if(match_cons(t, sym_Defined_3))
        {
          ATerm s_26 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) s_26) != ATmakeSymbol("b_0", 0, ATtrue)))
            _fail(t);
          d_46 = ATgetArgument(t, 1);
          e_46 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(e_46), d_46);
    }
    return(t);
  }
  ATerm h_46 = NULL,j_46 = NULL;
  h_46 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_26 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_46;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_26 = ATgetArgument(t, 0);
            ATerm x_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(v_26);
        {
          ATerm y_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_7 = NULL;
              t = h_46;
              {
                ATerm t_7 (ATerm t)
                {
                  t = term_r_26;
                  return(t);
                }
                t = rewrite_1_0(t_7, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm a_27 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) a_27) != ATmakeSymbol("h_0", 0, ATtrue)))
                      _fail(t);
                    i_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_7;
              }
              ;
              LocalPopChoice(z_26);
            }
          else
            {
              t = y_26;
              t = l_46(h_46, t);
            }
        }
      }
    else
      {
        t = u_26;
        t = l_46(h_46, t);
      }
  }
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL;
  m_46 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
      p_46 = ATgetArgument(t, 2);
      {
        ATerm b_27 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  q_46 = t;
  t = o_46;
  t = length_0_0(t);
  r_46 = t;
  t = p_46;
  t = length_0_0(t);
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, (ATerm) ATmakeAppl(sym__2, r_46, s_46));
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = (ATerm) ATempty;
      }
    t_46 = t;
    t = n_46;
    {
      ATerm e_27 = t;
      int j_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(j_27);
        }
      else
        {
          t = e_27;
          t = (ATerm) ATempty;
        }
      u_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_46, s_46)), u_46);
      t = union_0_0(t);
      v_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_46, (ATerm) ATmakeAppl(sym__2, r_46, s_46)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_27, (ATerm) ATinsert(CheckATermList(t_46), m_46)));
      {
        ATerm w_7 (ATerm t)
        {
          t = term_r_26;
          return(t);
        }
        t = assert_1_0(w_7, t);
        t = (ATerm) ATmakeAppl(sym__2, n_46, (ATerm) ATmakeAppl(sym_Defined_2, term_s_27, v_46));
        {
          ATerm x_7 (ATerm t)
          {
            t = term_n_26;
            return(t);
          }
          t = assert_1_0(x_7, t);
          t = q_46;
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
  ATerm y_7 (ATerm t)
  {
    t = term_t_27;
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    ATerm w_46 = NULL,x_46 = NULL;
    if(match_cons(t, sym__2))
      {
        w_46 = ATgetArgument(t, 0);
        x_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm c_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(w_46, x_46);
          ;
          LocalPopChoice(d_28);
        }
      else
        {
          t = c_28;
          t = SSL_addr(w_46, x_46);
        }
    }
    return(t);
  }
  ATerm a_8 (ATerm t)
  {
    t = term_d_23;
    return(t);
  }
  t = foldr_3_0(y_7, z_7, a_8, t);
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,c_47 = NULL,d_47 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      y_46 = ATgetArgument(t, 0);
      z_46 = ATgetArgument(t, 1);
      a_47 = ATgetArgument(t, 2);
      {
        ATerm e_28 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = z_46;
  t = length_0_0(t);
  c_47 = t;
  t = a_47;
  t = length_0_0(t);
  d_47 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_46, (ATerm) ATmakeAppl(sym__2, c_47, d_47)));
  return(t);
}
ATerm HdMember_p__2_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_47 = ATgetFirst((ATermList) t);
      f_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_114(t);
  {
    ATerm b_8 (ATerm t)
    {
      ATerm g_47 = NULL;
      g_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_47, g_47);
      t = p_114(t);
      return(t);
    }
    t = fetch_1_0(b_8, t);
    t = f_47;
  }
  return(t);
}
ATerm union_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  if(match_cons(t, sym__2))
    {
      i_47 = ATgetArgument(t, 0);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_47;
  {
    ATerm j_47 (ATerm t)
    {
      ATerm f_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_47;
          ;
          LocalPopChoice(g_28);
        }
      else
        {
          t = f_28;
          {
            ATerm l_28 = t;
            int m_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_8 (ATerm t)
                {
                  t = h_47;
                  return(t);
                }
                t = HdMember_p__2_0(l_114, c_8, t);
                t = j_47(t);
                ;
                LocalPopChoice(m_28);
              }
            else
              {
                t = l_28;
                t = Cons_2_0(_id, j_47, t);
              }
          }
        }
      return(t);
    }
    t = j_47(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm k_47 = NULL;
    if(match_cons(t, sym__2))
      {
        k_47 = ATgetArgument(t, 0);
        if((k_47 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(d_8, t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_116(t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm n_47 = NULL,o_47 = NULL,r_47 = NULL,s_47 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_47 = ATgetFirst((ATermList) t);
            o_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_47;
        t = w_116(t);
        r_47 = t;
        t = o_47;
        t = foldr_3_0(u_116, v_116, w_116, t);
        s_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
        t = v_116(t);
      }
    }
  return(t);
}
ATerm definition_names_0_0 (ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = foldr_3_0(e_8, union_0_0, DefinitionName_0_0, t);
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  t = definition_names_0_0(t);
  u_47 = t;
  t = t_47;
  t = sort_defs_0_0(t);
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_47, v_47, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  z_47 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_47);
  w_47 = t;
  t = x_47;
  t = d_85(t);
  y_47 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, y_47), w_47);
  return(t);
}
ATerm Cons_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  h_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_48 = ATgetFirst((ATermList) t);
      e_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_48);
  c_48 = t;
  t = d_48;
  t = z_84(t);
  f_48 = t;
  t = e_48;
  t = a_85(t);
  g_48 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_48), f_48), c_48);
  return(t);
}
ATerm Specification_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  r_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_48);
  o_48 = t;
  t = p_48;
  t = i_85(t);
  q_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, q_48), o_48);
  return(t);
}
ATerm _2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
  z_48 = t;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_48);
  u_48 = t;
  t = v_48;
  t = q_83(t);
  x_48 = t;
  t = w_48;
  t = r_83(t);
  y_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_48, y_48), u_48);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  c_49 = t;
  t = term_x_23;
  t = whoami_0_0(t);
  d_49 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), d_49), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_49;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm h_49 = NULL,j_49 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_49 = ATgetFirst((ATermList) t);
            j_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_49;
        {
          ATerm f_8 (ATerm t)
          {
            t = j_49;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_8, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL;
  n_49 = t;
  t = SSL_explode_term(n_49);
  if(match_cons(t, sym__2))
    {
      ATerm x_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_49;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm q_49 (ATerm t)
  {
    ATerm y_28 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_49, t);
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = y_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_99(t);
      }
    return(t);
  }
  t = q_49(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_49;
  {
    ATerm g_8 (ATerm t)
    {
      t = r_49;
      return(t);
    }
    t = at_end_1_0(g_8, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm t_49 = NULL;
  ATerm h_8 (ATerm t)
  {
    ATerm u_49 = NULL;
    u_49 = t;
    t = SSL_explode_string(u_49);
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    ATerm v_49 = NULL;
    v_49 = t;
    t = SSL_explode_string(v_49);
    return(t);
  }
  t = _2_0(h_8, i_8, t);
  t = conc_0_0(t);
  t_49 = t;
  t = SSL_implode_string(t_49);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_50 = NULL;
      c_50 = t;
      t = SSL_is_string(c_50);
      ;
      LocalPopChoice(u_29);
    }
  else
    {
      t = p_29;
      {
        ATerm y_29 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(j_8, t);
            ;
            LocalPopChoice(v_30);
          }
        else
          {
            t = y_29;
            {
              ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
              g_50 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_50 = ATgetArgument(t, 0);
                  t = h_50;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_50 = ATgetArgument(t, 0);
                      t = h_50;
                      {
                        ATerm w_30 = t;
                        int x_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_30);
                          }
                        else
                          {
                            t = w_30;
                            {
                              ATerm k_8 (ATerm t)
                              {
                                t = term_a_31;
                                return(t);
                              }
                              t = debug_1_0(k_8, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_50 = NULL,s_50 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_50 = ATgetArgument(t, 0);
                          i_50 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_50;
                      t = eval_config_0_0(t);
                      r_50 = t;
                      t = i_50;
                      t = eval_config_0_0(t);
                      s_50 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_50, s_50);
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
  ATerm y_50 = NULL;
  y_50 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_50);
  {
    ATerm l_8 (ATerm t)
    {
      ATerm z_50 = NULL;
      t = eval_config_0_0(t);
      z_50 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_50, z_50);
      t = z_50;
      return(t);
    }
    t = try_1_0(l_8, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm a_51 = NULL,b_51 = NULL;
    a_51 = t;
    t = term_b_31;
    t = get_config_0_0(t);
    b_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_51, term_c_31);
    t = geq_0_0(t);
    t = a_51;
    t = c_123(t);
    return(t);
  }
  t = try_1_0(m_8, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm d_31 = ATgetArgument(t, 0);
        if(match_cons(d_31, sym_Stream_1))
          {
            c_51 = ATgetArgument(d_31, 0);
          }
        else
          _fail(t);
        d_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(c_51, d_51);
    e_51 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), e_51);
    f_51 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, f_51);
    return(t);
  }
  t = WriteToFile_1_0(n_8, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm y_121 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  if(match_cons(t, sym__2))
    {
      g_51 = ATgetArgument(t, 0);
      h_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_51, term_e_31);
  t = open_stream_0_0(t);
  i_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_51, h_51);
  t = y_121(t);
  t = fclose_0_0(t);
  t = h_51;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_31 = ATgetArgument(t, 0);
        if(match_cons(f_31, sym_Stream_1))
          {
            j_51 = ATgetArgument(f_31, 0);
          }
        else
          _fail(t);
        k_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(j_51, k_51);
    l_51 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, l_51);
    return(t);
  }
  t = WriteToFile_1_0(o_8, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_51 = NULL,o_51 = NULL;
  m_51 = t;
  {
    ATerm p_8 (ATerm t)
    {
      ATerm g_31 = t;
      int h_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_8 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                o_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(q_8, t);
          ;
          LocalPopChoice(h_31);
        }
      else
        {
          t = g_31;
          t = term_i_31;
          o_51 = t;
        }
      return(t);
    }
    t = _2_0(p_8, _id, t);
    t = m_51;
    {
      ATerm r_8 (ATerm t)
      {
        ATerm s_8 (ATerm t)
        {
          t = not_null(o_51);
          return(t);
        }
        t = split_2_0(s_8, _id, t);
        return(t);
      }
      t = _2_0(_id, r_8, t);
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_8 (ATerm t)
            {
              ATerm u_8 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(u_8, t);
              return(t);
            }
            t = _2_0(t_8, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
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
ATerm apply_strategy_1_0 (ATerm a_125 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
  p_51 = t;
  t = dtime_0_0(t);
  t = p_51;
  t = a_125(t);
  r_51 = t;
  t = dtime_0_0(t);
  s_51 = t;
  t = r_51;
  if(match_cons(t, sym__2))
    {
      t_51 = ATgetArgument(t, 0);
      u_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_51), (ATerm) ATmakeAppl(sym_Runtime_1, s_51)), u_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_52 (ATerm d_52, ATerm t)
  {
    t = SSL_fclose(d_52);
    return(t);
  }
  ATerm g_52 = NULL,h_52 = NULL;
  h_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_52 = ATgetArgument(t, 0);
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_52);
            ;
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            t = j_52(h_52, t);
          }
      }
    }
  else
    {
      t = j_52(h_52, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm k_121 (ATerm), ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  k_52 = t;
  t = k_121(t);
  l_52 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_52), l_52));
  t = k_52;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_52 = NULL;
  t = SSL_stdin_stream();
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_52);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_52 = NULL;
  t = SSL_stdout_stream();
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_52);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_52 = NULL;
  t = SSL_stderr_stream();
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_52);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm q_52 = NULL;
  q_52 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      ATerm h_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL,v_7 = NULL;
        u_7 = t;
        t = SSL_explode_term(u_7);
        if(match_cons(t, sym__2))
          {
            ATerm y_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_33 = ATgetArgument(t, 1);
              if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
                {
                  v_7 = ATgetFirst((ATermList) g_33);
                  {
                    ATerm h_33 = (ATerm) ATgetNext((ATermList) g_33);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_7;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        {
          ATerm i_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
              ATerm v_8 (ATerm t)
              {
                ATerm w_52 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    w_52 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_52;
                return(t);
              }
              t = _2_0(v_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  t_52 = ATgetArgument(t, 0);
                  u_52 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(t_52, u_52);
              v_52 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, v_52);
              ;
              LocalPopChoice(j_33);
            }
          else
            {
              t = i_33;
              {
                ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
                ATerm w_8 (ATerm t)
                {
                  ATerm a_53 = NULL;
                  a_53 = t;
                  t = SSL_is_string(a_53);
                  return(t);
                }
                t = _2_0(w_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    x_52 = ATgetArgument(t, 0);
                    y_52 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(x_52, y_52);
                z_52 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, z_52);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_53 = NULL;
      e_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_53, term_m_33);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      {
        ATerm x_8 (ATerm t)
        {
          t = term_n_33;
          return(t);
        }
        t = debug_1_0(x_8, t);
        _fail(t);
      }
    }
  b_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(d_53);
  c_53 = t;
  t = b_53;
  t = fclose_0_0(t);
  t = c_53;
  return(t);
}
ATerm split_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  g_53 = t;
  t = o_106(t);
  h_53 = t;
  t = g_53;
  t = p_106(t);
  i_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  j_53 = t;
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_8 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              k_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(y_8, t);
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        t = term_q_33;
        k_53 = t;
      }
    t = j_53;
    {
      ATerm z_8 (ATerm t)
      {
        t = not_null(k_53);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, z_8, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    ATerm m_53 = NULL;
    m_53 = t;
    if(match_string(t, "-k"))
      {
        t = m_53;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = m_53;
      }
    return(t);
  }
  ATerm b_9 (ATerm t)
  {
    ATerm n_53 = NULL,o_53 = NULL;
    n_53 = t;
    t = SSL_string_to_int(n_53);
    o_53 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), o_53);
    t = n_53;
    return(t);
  }
  ATerm c_9 (ATerm t)
  {
    t = term_r_33;
    return(t);
  }
  t = ArgOption_3_0(a_9, b_9, c_9, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_9 (ATerm t)
      {
        ATerm q_53 = NULL;
        q_53 = t;
        if(match_string(t, "-S"))
          {
            t = q_53;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = q_53;
          }
        return(t);
      }
      ATerm e_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_u_33;
        return(t);
      }
      ATerm f_9 (ATerm t)
      {
        t = term_v_33;
        return(t);
      }
      t = Option_3_0(d_9, e_9, f_9, t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm w_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_9 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm h_9 (ATerm t)
            {
              ATerm r_53 = NULL,s_53 = NULL;
              r_53 = t;
              t = SSL_string_to_int(r_53);
              s_53 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_53);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, r_53);
              return(t);
            }
            ATerm i_9 (ATerm t)
            {
              t = term_z_33;
              return(t);
            }
            t = ArgOption_3_0(g_9, h_9, i_9, t);
            ;
            LocalPopChoice(x_33);
          }
        else
          {
            t = w_33;
            {
              ATerm j_9 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm k_9 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_a_34;
                return(t);
              }
              ATerm l_9 (ATerm t)
              {
                t = term_b_34;
                return(t);
              }
              t = Option_3_0(j_9, k_9, l_9, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    ATerm u_53 = NULL;
    u_53 = t;
    if(match_string(t, "-o"))
      {
        t = u_53;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = u_53;
      }
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    ATerm v_53 = NULL;
    v_53 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_53);
    t = (ATerm) ATmakeAppl(sym_Output_1, v_53);
    return(t);
  }
  ATerm p_9 (ATerm t)
  {
    t = term_e_34;
    return(t);
  }
  t = ArgOption_3_0(n_9, o_9, p_9, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm q_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm r_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_h_34;
          return(t);
        }
        ATerm s_9 (ATerm t)
        {
          t = term_i_34;
          return(t);
        }
        t = Option_3_0(q_9, r_9, s_9, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
  y_53 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = y_53;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm g_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_53 = ATgetFirst((ATermList) t);
          a_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_54 = ATgetFirst((ATermList) t);
          c_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_53;
      t = i_0(t);
      t = b_54;
      t = k_0(t);
      g_54 = t;
      t = (ATerm) ATinsert(CheckATermList(c_54), g_54);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm t_9 (ATerm t)
  {
    ATerm i_54 = NULL;
    i_54 = t;
    if(match_string(t, "-i"))
      {
        t = i_54;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = i_54;
      }
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    ATerm j_54 = NULL;
    j_54 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_54);
    t = (ATerm) ATmakeAppl(sym_Input_1, j_54);
    return(t);
  }
  ATerm v_9 (ATerm t)
  {
    t = term_j_34;
    return(t);
  }
  t = ArgOption_3_0(t_9, u_9, v_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_23;
  t = whoami_0_0(t);
  k_54 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_54));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_34;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_116(t);
      ;
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm n_54 = NULL,o_54 = NULL,r_54 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_54 = ATgetFirst((ATermList) t);
            o_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_54;
        t = foldr_2_0(s_116, t_116, t);
        r_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_54, r_54);
        t = t_116(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  s_54 = t;
  t = SSL_explode_term(s_54);
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      t_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_54;
  t = foldr_2_0(w_114, x_114, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_54 = NULL;
  t = times_0_0(t);
  {
    ATerm w_9 (ATerm t)
    {
      t = term_t_27;
      return(t);
    }
    ATerm x_9 (ATerm t)
    {
      ATerm v_54 = NULL,w_54 = NULL;
      if(match_cons(t, sym__2))
        {
          v_54 = ATgetArgument(t, 0);
          w_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_34 = t;
        int t_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(v_54, w_54);
            ;
            LocalPopChoice(t_34);
          }
        else
          {
            t = s_34;
            t = SSL_addr(v_54, w_54);
          }
      }
      return(t);
    }
    t = crush_2_0(w_9, x_9, t);
    u_54 = t;
    t = SSL_TicksToSeconds(u_54);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  if(match_cons(t, sym__2))
    {
      g_55 = ATgetArgument(t, 0);
      h_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_55;
        if((g_55 != t))
          {
            _fail(t);
          }
        t = f_55;
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = f_55;
        {
          ATerm w_34 = t;
          int x_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_55, h_55);
              ;
              LocalPopChoice(x_34);
            }
          else
            {
              t = w_34;
              t = SSL_gtr(g_55, h_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_55, h_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm k_55 = NULL,l_55 = NULL;
    k_55 = t;
    t = term_b_31;
    t = get_config_0_0(t);
    l_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_55, term_d_23);
    t = geq_0_0(t);
    t = k_55;
    t = b_123(t);
    return(t);
  }
  t = try_1_0(y_9, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm z_9 (ATerm t)
  {
    ATerm n_55 = NULL,o_55 = NULL;
    t = run_time_0_0(t);
    n_55 = t;
    t = term_x_23;
    t = whoami_0_0(t);
    o_55 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), n_55), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), o_55));
    t = (ATerm) ATmakeAppl(sym__2, term_y_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_35), n_55), term_z_34), o_55));
    return(t);
  }
  t = if_verbose1_1_0(z_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm y_125 (ATerm), ATerm t)
{
  ATerm b_35 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_35);
    }
  else
    {
      t = b_35;
      {
        ATerm a_10 (ATerm t)
        {
          ATerm f_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(g_35);
            }
          else
            {
              t = f_35;
              {
                ATerm h_35 = t;
                int i_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(i_35);
                  }
                else
                  {
                    t = h_35;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(a_10, t);
      }
    }
  t = y_125(t);
  return(t);
}
ATerm map_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm q_55 (ATerm t)
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        t = Cons_2_0(i_99, q_55, t);
      }
    return(t);
  }
  t = q_55(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_55 = ATgetFirst((ATermList) t);
      t_55 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_55 = NULL,y_55 = NULL;
        t = t_55;
        t = g_0(t);
        x_55 = t;
        t = s_55;
        t = e_0(t);
        y_55 = t;
        t = t_55;
        {
          ATerm b_10 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_55), y_55);
            return(t);
          }
          t = reverse_acc_2_0(e_0, b_10, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_23;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm c_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, c_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL;
  c_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_56);
  z_55 = t;
  t = a_56;
  t = a_94(t);
  b_56 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, b_56), z_55);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      {
        ATerm d_10 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(d_10, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_n_35;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm h_10 (ATerm t)
    {
      ATerm f_56 = NULL;
      f_56 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_56), term_o_35);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(h_10, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  j_56 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_56);
  g_56 = t;
  t = h_56;
  t = b_94(t);
  i_56 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, i_56), g_56);
  return(t);
}
ATerm fetch_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm m_56 (ATerm t)
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_99, _id, t);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = Cons_2_0(_id, m_56, t);
      }
    return(t);
  }
  t = m_56(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  t = fetch_1_0(y_126, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL;
  o_56 = t;
  {
    ATerm r_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_35 = ATgetFirst((ATermList) t);
                ATerm w_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_56;
          }
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = r_35;
        t = (ATerm) ATinsert(ATempty, o_56);
      }
    p_56 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_56);
    t = o_56;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_105(t);
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_10 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm j_10 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_d_36;
        return(t);
      }
      ATerm k_10 (ATerm t)
      {
        t = term_f_36;
        return(t);
      }
      t = Option_3_0(i_10, j_10, k_10, t);
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      {
        ATerm m_10 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_10 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_h_36;
          return(t);
        }
        ATerm o_10 (ATerm t)
        {
          t = term_i_36;
          return(t);
        }
        t = Option_3_0(m_10, n_10, o_10, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL;
  if(match_cons(t, sym__3))
    {
      v_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
      x_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_56, w_56);
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_36 = ATgetArgument(t, 0);
            ATerm v_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_56, w_56);
        ;
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        t = (ATerm) ATempty;
      }
    y_56 = t;
    t = SSL_table_put(v_56, w_56, (ATerm) ATinsert(CheckATermList(y_56), x_56));
    t = (ATerm) ATmakeAppl(sym__3, v_56, w_56, x_56);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  ATerm d_57 = NULL;
  t = term_x_23;
  t = d_128(t);
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_36, term_x_36, d_57);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_57 = NULL,h_57 = NULL,i_57 = NULL;
  f_57 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = f_57;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm l_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_57 = ATgetFirst((ATermList) t);
          i_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_57;
      t = a_0(t);
      t = term_x_23;
      t = c_0(t);
      l_57 = t;
      t = (ATerm) ATinsert(CheckATermList(i_57), l_57);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm p_10 (ATerm t)
  {
    ATerm n_57 = NULL;
    n_57 = t;
    if(match_string(t, "--help"))
      {
        t = n_57;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = n_57;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = n_57;
          }
      }
    return(t);
  }
  ATerm q_10 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_z_36;
    return(t);
  }
  ATerm r_10 (ATerm t)
  {
    t = term_a_37;
    return(t);
  }
  t = Option_3_0(p_10, q_10, r_10, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_128 (ATerm), ATerm t)
{
  ATerm r_57 = NULL;
  r_57 = t;
  {
    ATerm s_10 (ATerm t)
    {
      t = term_c_37;
      t = b_128(t);
      return(t);
    }
    t = try_1_0(s_10, t);
    t = r_57;
    {
      ATerm t_10 (ATerm t)
      {
        ATerm s_57 = NULL;
        s_57 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_57);
        t = (ATerm) ATmakeAppl(sym_Program_1, s_57);
        return(t);
      }
      ATerm u_10 (ATerm t)
      {
        ATerm d_37 = t;
        int e_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_37 = t;
            int g_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_37);
              }
            else
              {
                t = f_37;
                t = b_128(t);
                t = Cons_2_0(_id, u_10, t);
              }
            ;
            LocalPopChoice(e_37);
          }
        else
          {
            t = d_37;
            {
              ATerm u_57 = NULL,v_57 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_57 = ATgetFirst((ATermList) t);
                  v_57 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_57), (ATerm) ATmakeAppl(sym_Undefined_1, u_57));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_10, u_10, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm a_128 (ATerm), ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  b_58 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = b_58;
  {
    ATerm v_10 (ATerm t)
    {
      ATerm i_37 = t;
      int j_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_128(t);
          ;
          LocalPopChoice(j_37);
        }
      else
        {
          t = i_37;
          {
            ATerm k_37 = t;
            int l_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(l_37);
              }
            else
              {
                t = k_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_10, t);
    {
      ATerm w_10 (ATerm t)
      {
        ATerm m_37 = t;
        int n_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_58 = NULL;
            i_58 = t;
            {
              ATerm o_37 = t;
              int p_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_58;
                  {
                    ATerm q_37 = t;
                    int r_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_d_35;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(r_37);
                      }
                    else
                      {
                        t = q_37;
                        {
                          ATerm x_10 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(x_10, t);
                        }
                      }
                    t = i_58;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(p_37);
                }
              else
                {
                  t = o_37;
                  t = term_c_36;
                  t = get_config_0_0(t);
                  t = i_58;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(n_37);
          }
        else
          {
            t = m_37;
            {
              ATerm y_10 (ATerm t)
              {
                ATerm z_10 (ATerm t)
                {
                  c_58 = t;
                  return(t);
                }
                t = Undefined_1_0(z_10, t);
                return(t);
              }
              t = option_defined_1_0(y_10, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_58)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_y_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_58)), term_t_37));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(w_10, t);
      d_58 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = d_58;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm t)
{
  ATerm l_10 = NULL;
  t = parse_options_1_0(a_126, t);
  l_10 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), l_10);
  t = l_10;
  t = c_126(t);
  {
    ATerm u_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_126, t);
        ;
        LocalPopChoice(v_37);
      }
    else
      {
        t = u_37;
        {
          ATerm w_37 = t;
          int x_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_126(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_37);
            }
          else
            {
              t = w_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm a_11 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_125(t);
        ;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm b_11 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(p_125, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_11, r_125, s_125, b_11, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm t)
{
  ATerm c_11 (ATerm t)
  {
    ATerm d_11 (ATerm t)
    {
      ATerm l_58 = NULL,m_58 = NULL;
      l_58 = t;
      t = term_o_34;
      t = get_config_0_0(t);
      m_58 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, m_58));
      t = l_58;
      return(t);
    }
    t = if_verbose2_1_0(d_11, t);
    return(t);
  }
  t = iowrap_4_0(j_125, k_125, l_125, c_11, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm t)
{
  t = iowrap_3_0(h_125, i_125, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm e_125 (ATerm), ATerm t)
{
  ATerm e_11 (ATerm t)
  {
    t = _2_0(_id, e_125, t);
    return(t);
  }
  t = iowrap_2_0(e_11, _fail, t);
  return(t);
}
ATerm extract_all_0_0 (ATerm t)
{
  ATerm f_11 (ATerm t)
  {
    ATerm g_11 (ATerm t)
    {
      ATerm h_11 (ATerm t)
      {
        ATerm i_11 (ATerm t)
        {
          t = Strategies_1_0(all_defs_0_0, t);
          return(t);
        }
        ATerm j_11 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(i_11, j_11, t);
        return(t);
      }
      t = Cons_2_0(_id, h_11, t);
      return(t);
    }
    t = Specification_1_0(g_11, t);
    return(t);
  }
  t = iowrap_1_0(f_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = extract_all_0_0(t);
  return(t);
}
