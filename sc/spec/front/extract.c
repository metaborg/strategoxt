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
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Constructors_1;
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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_z_43;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_k_41;
ATerm term_b_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_v_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_u_39;
ATerm term_j_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_p_38;
ATerm term_f_38;
ATerm term_c_38;
ATerm term_y_37;
ATerm term_t_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_g_35;
ATerm term_r_34;
ATerm term_i_33;
ATerm term_g_32;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_k_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_f_29;
ATerm term_t_28;
ATerm term_k_28;
ATerm term_r_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_k_24;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_n_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_p_15;
ATerm term_n_13;
ATerm term_c_13;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_s_11;
void init_constant_terms (void)
{
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("a_2", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Op_2, term_t_18, (ATerm) ATempty);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_f_29);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_b_30);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_29);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym__3, term_s_40, term_t_40, term_m_25);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm t_116 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm i_89 (ATerm), ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm needed_constructors_0_0 (ATerm);
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm);
ATerm Let_2_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm crush_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm c_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_119 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm tsubs_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm g_106 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm z_103 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm joindefs_0_0 (ATerm);
ATerm OverloadedDef_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm);
ATerm Op_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm u_133 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm unzip_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm f_90 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm z_120 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm);
ATerm Con_3_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm o_104 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm Thd_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm q_108 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm copy_1_0 (ATerm t_115 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm zipr_1_0 (ATerm i_109 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm n_112 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm);
ATerm zip_1_0 (ATerm f_109 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm s_133 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm);
ATerm for_3_0 (ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm p_116 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm);
ATerm union_1_0 (ATerm r_112 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm Arities_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm r_116 (ATerm), ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm sort_defs_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm h_89 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm m_89 (ATerm), ATerm);
ATerm _2_0 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm g_111 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_127 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm h_126 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm j_129 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm t_125 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm);
ATerm crush_2_0 (ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_127 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm h_130 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_110 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm v_101 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm a_111 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm h_131 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm m_132 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm k_132 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm j_132 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm n_129 (ATerm), ATerm);
ATerm extract_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      k_1 = ATgetArgument(t, 0);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, k_1, (ATerm) ATempty);
        {
          ATerm b_0 (ATerm t)
          {
            t = term_s_11;
            return(t);
          }
          t = rewrite_1_0(b_0, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm u_11 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_11) != ATmakeSymbol("a_2", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, k_1, l_1);
        }
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, k_1, (ATerm) ATempty);
        {
          ATerm f_0 (ATerm t)
          {
            t = term_s_11;
            return(t);
          }
          t = rewrite_1_0(f_0, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm v_11 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_11) != ATmakeSymbol("x_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, k_1, l_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_116 (ATerm), ATerm t)
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = filter_1_0(t_116, t);
              return(t);
            }
            t = Cons_2_0(t_116, h_0, t);
            ;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            {
              ATerm r_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_12 = ATgetFirst((ATermList) t);
                  r_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_1;
              t = filter_1_0(t_116, t);
            }
          }
      }
    }
  return(t);
}
ATerm Constructors_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  w_1 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      u_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_1);
  t_1 = t;
  t = u_1;
  t = e_90(t);
  v_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, v_1), t_1);
  return(t);
}
ATerm Signature_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL;
  e_2 = t;
  if(match_cons(t, sym_Signature_1))
    {
      c_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_2);
  b_2 = t;
  t = c_2;
  t = i_89(t);
  d_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, d_2), b_2);
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  i_2 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            j_2 = ATgetArgument(t, 0);
            {
              ATerm e_12 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_12);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, j_2, (ATerm) ATempty), term_g_12);
        {
          ATerm o_0 (ATerm t)
          {
            t = term_s_11;
            return(t);
          }
          t = assert_1_0(o_0, t);
          t = i_2;
        }
      }
    else
      {
        t = c_12;
        if(match_cons(t, sym_Op_2))
          {
            j_2 = ATgetArgument(t, 0);
            {
              ATerm h_12 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, j_2, (ATerm) ATempty), term_j_12);
        {
          ATerm q_0 (ATerm t)
          {
            t = term_s_11;
            return(t);
          }
          t = assert_1_0(q_0, t);
          t = i_2;
        }
      }
  }
  return(t);
}
ATerm needed_constructors_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
        {
          r_2 = ATgetFirst((ATermList) k_12);
          {
            ATerm l_12 = (ATerm) ATgetNext((ATermList) k_12);
            if(((ATgetType(l_12) == AT_LIST) && !(ATisEmpty(l_12))))
              {
                ATerm n_12 = ATgetFirst((ATermList) l_12);
                if(match_cons(n_12, sym_Strategies_1))
                  {
                    s_2 = ATgetArgument(n_12, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm o_12 = (ATerm) ATgetNext((ATermList) l_12);
                  if(((ATgetType(o_12) != AT_LIST) || !(ATisEmpty(o_12))))
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
  t = s_2;
  {
    ATerm r_0 (ATerm t)
    {
      t = try_1_0(DeclareConstructorNeeded_0_0, t);
      return(t);
    }
    t = topdown_1_0(r_0, t);
    t = r_2;
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            t = filter_1_0(ConstructorNeeded_0_0, t);
            return(t);
          }
          t = Constructors_1_0(w_0, t);
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(u_0, v_0, t);
        return(t);
      }
      t = Signature_1_0(t_0, t);
      t_2 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, s_2)), t_2));
    }
  }
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      u_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), v_2), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), u_2), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_12), v_2), term_r_12), u_2), term_p_12);
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_12 = ATgetArgument(t, 0);
      if(match_cons(t_12, sym_Mod_2))
        {
          w_2 = ATgetArgument(t_12, 0);
          x_2 = ATgetArgument(t_12, 1);
        }
      else
        _fail(t);
      y_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), y_2), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), x_2), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), w_2), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_12), y_2), term_r_12), x_2), term_u_12), w_2), term_p_12);
  return(t);
}
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      {
        ATerm z_12 = ATgetArgument(t, 1);
        if(((ATgetType(z_12) == AT_LIST) && !(ATisEmpty(z_12))))
          {
            a_3 = ATgetFirst((ATermList) z_12);
            b_3 = (ATerm) ATgetNext((ATermList) z_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_3), a_3);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm a_13 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MissingDefMod_0_0(t);
          ;
          LocalPopChoice(b_13);
        }
      else
        {
          t = a_13;
          t = MissingDef_0_0(t);
        }
      return(t);
    }
    t = map_1_0(x_0, t);
    t = z_2;
  }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), c_3);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_3;
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_13);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL;
  t_3 = t;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = y_3;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_3;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_13 = ATgetFirst((ATermList) t);
            ATerm h_13 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
              {
                ATerm i_13 = ATgetFirst((ATermList) h_13);
                ATerm j_13 = (ATerm) ATgetNext((ATermList) h_13);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm k_13 = t;
          if((PushChoice() == 0))
            {
              ATerm y_0 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm l_13 = ATgetArgument(t, 0);
                    if(((ATgetType(l_13) != AT_INT) || (ATgetInt((ATermInt) l_13) != 0)))
                      _fail(t);
                    {
                      ATerm m_13 = ATgetArgument(t, 1);
                      if(((ATgetType(m_13) != AT_INT) || (ATgetInt((ATermInt) m_13) != 0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(y_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_13;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_3), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, u_3), term_n_13);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        {
          ATerm f_4 = NULL,h_4 = NULL;
          t = u_3;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_13 = ATgetFirst((ATermList) t);
              if(match_cons(o_13, sym__2))
                {
                  f_4 = ATgetArgument(o_13, 0);
                  h_4 = ATgetArgument(o_13, 1);
                }
              else
                _fail(t);
              {
                ATerm q_13 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(q_13) != AT_LIST) || !(ATisEmpty(q_13))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_3, (ATerm) ATmakeAppl(sym__2, f_4, h_4));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, u_3, (ATerm) ATmakeAppl(sym__2, f_4, h_4));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,e_4 = NULL,g_4 = NULL,j_4 = NULL,l_4 = NULL,r_4 = NULL;
  r_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      e_4 = ATgetArgument(t, 0);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_4);
  c_4 = t;
  t = e_4;
  t = m_94(t);
  j_4 = t;
  t = g_4;
  t = n_94(t);
  l_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, j_4, l_4), c_4);
  return(t);
}
ATerm SDefT_4_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,e_5 = NULL,f_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  o_5 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
      h_5 = ATgetArgument(t, 2);
      i_5 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_5);
  b_5 = t;
  t = e_5;
  t = h_96(t);
  j_5 = t;
  t = f_5;
  t = i_96(t);
  l_5 = t;
  t = h_5;
  t = j_96(t);
  m_5 = t;
  t = i_5;
  t = k_96(t);
  n_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, j_5, l_5, m_5, n_5), b_5);
  return(t);
}
ATerm SDef_3_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  c_6 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
      v_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_6);
  s_5 = t;
  t = t_5;
  t = e_96(t);
  y_5 = t;
  t = u_5;
  t = f_96(t);
  a_6 = t;
  t = v_5;
  t = g_96(t);
  b_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, y_5, a_6, b_6), s_5);
  return(t);
}
ATerm Let_2_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm t)
{
  ATerm g_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  m_6 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  g_6 = t;
  t = i_6;
  t = p_93(t);
  k_6 = t;
  t = j_6;
  t = q_93(t);
  l_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, k_6, l_6), g_6);
  return(t);
}
ATerm sboundin_3_0 (ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm r_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(t_103, t_103, t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = r_13;
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(v_103, v_103, t_103, t);
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
                  t = SDefT_4_0(v_103, v_103, v_103, t_103, t);
                  ;
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  t = Rec_2_0(v_103, t_103, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm p_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
      {
        ATerm z_13 = ATgetArgument(t, 2);
      }
      {
        ATerm a_14 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = p_6;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm s_6 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm b_14 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
      {
        ATerm c_14 = ATgetArgument(t, 2);
      }
      {
        ATerm d_14 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = s_6;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm c_7 = NULL;
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            c_7 = ATgetArgument(t, 0);
            {
              ATerm g_14 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_14);
        t = c_7;
      }
    else
      {
        t = e_14;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            c_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_7;
      }
    return(t);
  }
  t = map_1_0(z_0, t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm i_7 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
      {
        ATerm j_14 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_7;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm n_7 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      n_7 = ATgetArgument(t, 0);
      {
        ATerm k_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_7;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm f_9 = NULL;
      ATerm l_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              f_9 = ATgetArgument(t, 0);
              {
                ATerm o_14 = ATgetArgument(t, 1);
              }
              {
                ATerm p_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(n_14);
          t = f_9;
        }
      else
        {
          t = l_14;
          if(match_cons(t, sym_SDefT_4))
            {
              f_9 = ATgetArgument(t, 0);
              {
                ATerm q_14 = ATgetArgument(t, 1);
              }
              {
                ATerm r_14 = ATgetArgument(t, 2);
              }
              {
                ATerm s_14 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = f_9;
        }
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm crush_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,k_11 = NULL;
  t_10 = t;
  t = SSL_explode_term(t_10);
  if(match_cons(t, sym__2))
    {
      ATerm t_14 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11;
  t = foldr_3_0(e_113, f_113, g_113, t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm c_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_119 (ATerm), ATerm t)
{
  ATerm m_12 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm v_14 = t;
      int w_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_119(t);
          ;
          LocalPopChoice(w_14);
        }
      else
        {
          t = v_14;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      ATerm x_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_11 = NULL,a_12 = NULL;
          t_11 = t;
          t = b_119(t);
          a_12 = t;
          t = t_11;
          {
            ATerm d_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = a_12;
                return(t);
              }
              t = split_2_0(m_12, f_1, t);
              t = diff_1_0(d_119, t);
              return(t);
            }
            ATerm e_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = c_119(d_1, m_12, e_1, t);
            {
              ATerm g_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3_0(g_1, union_0_0, _id, t);
            }
          }
          ;
          LocalPopChoice(y_14);
        }
      else
        {
          t = x_14;
          {
            ATerm h_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3_0(h_1, union_0_0, m_12, t);
          }
        }
      return(t);
    }
    t = split_2_0(b_1, c_1, t);
    t = union_0_0(t);
    return(t);
  }
  t = m_12(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm q_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        ATerm b_15 = ATgetArgument(t, 0);
        if(match_cons(b_15, sym_SVar_1))
          {
            q_12 = ATgetArgument(b_15, 0);
          }
        else
          _fail(t);
        v_12 = ATgetArgument(t, 1);
        w_12 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = v_12;
    t = length_0_0(t);
    x_12 = t;
    t = w_12;
    t = length_0_0(t);
    y_12 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATmakeAppl(sym__2, x_12, y_12)));
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
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
                    ATerm d_13 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        d_13 = ATgetArgument(t, 0);
                        {
                          ATerm j_15 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, d_13);
                    ;
                    LocalPopChoice(i_15);
                  }
                else
                  {
                    t = h_15;
                    {
                      ATerm l_15 = t;
                      int m_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(m_15);
                        }
                      else
                        {
                          t = l_15;
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
  ATerm n_1 (ATerm t)
  {
    ATerm p_13 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm n_15 = ATgetArgument(t, 0);
        if(match_cons(n_15, sym__2))
          {
            p_13 = ATgetArgument(n_15, 0);
            {
              ATerm o_15 = ATgetArgument(n_15, 1);
            }
          }
        else
          _fail(t);
        if((p_13 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4_0(i_1, m_1, sboundin_3_0, n_1, t);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = term_p_15;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm s_13 = NULL,n_4 = NULL,t_4 = NULL;
    s_13 = t;
    t = SSL_explode_term(s_13);
    if(match_cons(t, sym__2))
      {
        ATerm q_15 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) q_15) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm r_15 = ATgetArgument(t, 1);
          if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
            {
              n_4 = ATgetFirst((ATermList) r_15);
              {
                ATerm s_15 = (ATerm) ATgetNext((ATermList) r_15);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = SSL_explode_term(s_13);
    if(match_cons(t, sym__2))
      {
        ATerm t_15 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) t_15) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm u_15 = ATgetArgument(t, 1);
          if(((ATgetType(u_15) == AT_LIST) && !(ATisEmpty(u_15))))
            {
              ATerm v_15 = ATgetFirst((ATermList) u_15);
              ATerm w_15 = (ATerm) ATgetNext((ATermList) u_15);
              if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
                {
                  t_4 = ATgetFirst((ATermList) w_15);
                  {
                    ATerm x_15 = (ATerm) ATgetNext((ATermList) w_15);
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
    t = (ATerm) ATmakeAppl(sym_Choice_2, n_4, t_4);
    return(t);
  }
  t = foldr_2_0(o_1, p_1, t);
  return(t);
}
ATerm tsubs_0_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm h_14 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        h_14 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = h_14;
    return(t);
  }
  t = substitute_1_0(q_1, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_14 = NULL,u_14 = NULL,z_14 = NULL,a_15 = NULL,c_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_15 = ATgetFirst((ATermList) t);
      k_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_15;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_14;
            if((z_14 != t))
              {
                _fail(t);
              }
            t = u_14;
            ;
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            t = (ATerm) ATmakeAppl(sym__2, z_14, k_15);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, z_14, k_15);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,s_16 = NULL;
  t = m_104(t);
  o_16 = t;
  t = n_104(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_16, s_16);
  t = lookup_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm t_16 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_106(t);
        ;
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = SRTS_all(t_16, t);
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm w_16 = NULL,d_17 = NULL,i_17 = NULL,m_17 = NULL;
  w_16 = t;
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
        LocalPopChoice(d_16);
        t = w_16;
      }
    else
      {
        t = c_16;
        {
          ATerm r_17 = NULL;
          if(match_cons(t, sym__3))
            {
              d_17 = ATgetArgument(t, 0);
              i_17 = ATgetArgument(t, 1);
              m_17 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_17, i_17);
          t = zip_1_0(_id, t);
          r_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_17, m_17);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,x_17 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      x_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_17;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm y_1 (ATerm t)
      {
        t = x_17;
        return(t);
      }
      t = SubsVar_2_0(x_103, y_1, t);
      t = y_103(t);
      return(t);
    }
    t = alltd_1_0(s_1, t);
  }
  return(t);
}
ATerm substitute_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  t = substitute_2_0(z_103, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm k_18 = NULL,m_18 = NULL,p_18 = NULL,q_18 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        m_18 = ATgetArgument(t, 0);
        q_18 = ATgetArgument(t, 1);
        k_18 = ATgetArgument(t, 2);
        t = m_18;
        if(match_cons(t, sym_SVar_1))
          {
            p_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_18;
      }
    else
      {
        if(match_cons(t, sym_Call_2))
          {
            m_18 = ATgetArgument(t, 0);
            q_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_18;
        if(match_cons(t, sym_SVar_1))
          {
            p_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_18;
      }
    return(t);
  }
  t = substitute_1_0(z_1, t);
  return(t);
}
ATerm VarDec_2_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_19);
  w_18 = t;
  t = x_18;
  t = a_96(t);
  d_19 = t;
  t = y_18;
  t = b_96(t);
  e_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, d_19, e_19), w_18);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,w_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,e_20 = NULL;
  p_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_16 = ATgetFirst((ATermList) t);
      if(match_cons(g_16, sym_SDefT_4))
        {
          q_19 = ATgetArgument(g_16, 0);
          r_19 = ATgetArgument(g_16, 1);
          s_19 = ATgetArgument(g_16, 2);
          {
            ATerm i_16 = ATgetArgument(g_16, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm h_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_19;
  {
    ATerm f_2 (ATerm t)
    {
      t = VarDec_2_0(new_0_0, _id, t);
      return(t);
    }
    t = map_1_0(f_2, t);
    w_19 = t;
    t = s_19;
    {
      ATerm g_2 (ATerm t)
      {
        t = VarDec_2_0(new_0_0, _id, t);
        return(t);
      }
      t = map_1_0(g_2, t);
      z_19 = t;
      t = w_19;
      {
        ATerm h_2 (ATerm t)
        {
          ATerm g_20 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              g_20 = ATgetArgument(t, 0);
              {
                ATerm j_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_20), (ATerm)ATempty, (ATerm) ATempty);
          return(t);
        }
        t = map_1_0(h_2, t);
        a_20 = t;
        t = z_19;
        {
          ATerm k_2 (ATerm t)
          {
            ATerm k_20 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                k_20 = ATgetArgument(t, 0);
                {
                  ATerm k_16 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_20);
            return(t);
          }
          t = map_1_0(k_2, t);
          b_20 = t;
          t = p_19;
          {
            ATerm l_2 (ATerm t)
            {
              ATerm l_20 = NULL,m_20 = NULL,o_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  ATerm l_16 = ATgetArgument(t, 0);
                  l_20 = ATgetArgument(t, 1);
                  m_20 = ATgetArgument(t, 2);
                  o_20 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = m_20;
              {
                ATerm m_2 (ATerm t)
                {
                  ATerm t_20 = NULL;
                  if(match_cons(t, sym_VarDec_2))
                    {
                      t_20 = ATgetArgument(t, 0);
                      {
                        ATerm m_16 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = t_20;
                  return(t);
                }
                t = map_1_0(m_2, t);
                q_20 = t;
                t = l_20;
                {
                  ATerm n_2 (ATerm t)
                  {
                    ATerm u_20 = NULL;
                    if(match_cons(t, sym_VarDec_2))
                      {
                        u_20 = ATgetArgument(t, 0);
                        {
                          ATerm n_16 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = u_20;
                    return(t);
                  }
                  t = map_1_0(n_2, t);
                  r_20 = t;
                  t = (ATerm) ATmakeAppl(sym__3, r_20, a_20, o_20);
                  t = ssubs_0_0(t);
                  s_20 = t;
                  t = (ATerm) ATmakeAppl(sym__3, q_20, b_20, s_20);
                  t = tsubs_0_0(t);
                }
              }
              return(t);
            }
            t = map_1_0(l_2, t);
            t = choices_0_0(t);
            e_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_19, w_19, z_19, e_20);
          }
        }
      }
    }
  }
  return(t);
}
ATerm joindefs_0_0 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_20 = NULL,z_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_20 = ATgetFirst((ATermList) t);
          z_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_20;
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if(match_cons(r_16, sym__2))
        {
          b_21 = ATgetArgument(r_16, 0);
          c_21 = ATgetArgument(r_16, 1);
        }
      else
        _fail(t);
      d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_21, c_21);
  t = Definitions_0_0(t);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_21, d_21);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  h_21 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      i_21 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
      {
        ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
        t = h_21;
        t = new_0_0(t);
        l_21 = t;
        t = new_0_0(t);
        m_21 = t;
        t = new_0_0(t);
        n_21 = t;
        t = new_0_0(t);
        o_21 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_21), n_21), m_21), l_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, l_21), (ATerm) ATmakeAppl(sym_Var_1, n_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, i_21, (ATerm)ATmakeAppl(sym_Var_1, l_21), (ATerm) ATmakeAppl(sym_Var_1, m_21)), (ATerm) ATmakeAppl(sym_BAM_3, g_21, (ATerm)ATmakeAppl(sym_Var_1, n_21), (ATerm) ATmakeAppl(sym_Var_1, o_21)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_16, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_21)), (ATerm) ATmakeAppl(sym_Var_1, m_21))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_21 = ATgetArgument(t, 0);
          {
            ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
            t = h_21;
            t = new_0_0(t);
            q_21 = t;
            t = i_21;
            {
              ATerm o_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    r_21 = ATgetArgument(t, 0);
                    s_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, q_21);
                return(t);
              }
              t = oncetd_1_0(o_2, t);
              t_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_16, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_21)), not_null(r_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_21)), (ATerm) ATmakeAppl(sym_Build_1, t_21))));
            }
          }
        }
      else
        {
          ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              i_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_21;
          t = new_0_0(t);
          v_21 = t;
          t = new_0_0(t);
          w_21 = t;
          t = i_21;
          {
            ATerm p_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  x_21 = ATgetArgument(t, 0);
                  y_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, v_21);
              return(t);
            }
            t = oncetd_1_0(p_2, t);
            z_21 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_21), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_21)), (ATerm) ATmakeAppl(sym_PrimT_3, term_v_16, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_21))))), (ATerm)ATmakeAppl(sym_Var_1, v_21), (ATerm) ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), not_null(x_21)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  b_22 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
        t = b_22;
        t = new_0_0(t);
        e_22 = t;
        t = c_22;
        {
          ATerm q_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                g_22 = ATgetArgument(t, 0);
                f_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_22), g_22);
            return(t);
          }
          t = pat_td_1_0(q_2, t);
          h_22 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_22), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_17, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_22))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_22))))));
        }
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        {
          ATerm b_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
              t = b_22;
              t = new_0_0(t);
              j_22 = t;
              t = c_22;
              {
                ATerm d_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      k_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_22);
                  return(t);
                }
                t = pat_td_1_0(d_3, t);
                l_22 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_22)), not_null(k_22))));
              }
              ;
              LocalPopChoice(c_17);
            }
          else
            {
              t = b_17;
              {
                ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
                t = b_22;
                t = new_0_0(t);
                n_22 = t;
                t = c_22;
                {
                  ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        o_22 = ATgetArgument(t, 0);
                        p_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_22);
                    return(t);
                  }
                  t = pat_td_1_0(e_3, t);
                  q_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_22)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_22)), not_null(o_22)))));
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
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      r_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_22;
  {
    ATerm f_3 (ATerm t)
    {
      if(match_cons(t, sym_RootApp_1))
        {
          ATerm e_17 = ATgetArgument(t, 0);
          if(match_cons(e_17, sym_Match_1))
            {
              s_22 = ATgetArgument(e_17, 0);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = s_22;
      return(t);
    }
    t = pat_td_1_0(f_3, t);
    t_22 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, t_22);
  }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm h_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
            if(match_cons(t, sym_Match_1))
              {
                x_22 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = x_22;
            if(match_cons(t, sym_RootApp_1))
              {
                y_22 = ATgetArgument(t, 0);
                t = y_22;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    y_22 = ATgetArgument(t, 0);
                    z_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_BA_2, y_22, z_22);
              }
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = h_17;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  e_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
        t = e_23;
        t = new_0_0(t);
        h_23 = t;
        t = f_23;
        {
          ATerm g_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                i_23 = ATgetArgument(t, 0);
                j_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, h_23);
            return(t);
          }
          t = pat_td_1_0(g_3, t);
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_23)), not_null(i_23))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_23)))), (ATerm) ATmakeAppl(sym_Build_1, k_23)));
        }
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
              t = e_23;
              t = new_0_0(t);
              m_23 = t;
              t = f_23;
              {
                ATerm h_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      n_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_23);
                  return(t);
                }
                t = pat_td_1_0(h_3, t);
                o_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_23), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_23)))), (ATerm) ATmakeAppl(sym_Build_1, o_23)));
              }
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              {
                ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
                t = e_23;
                t = new_0_0(t);
                q_23 = t;
                t = f_23;
                {
                  ATerm i_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        r_23 = ATgetArgument(t, 0);
                        s_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, q_23);
                    return(t);
                  }
                  t = pat_td_1_0(i_3, t);
                  t_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_23), not_null(s_23), (ATerm) ATmakeAppl(sym_Var_1, q_23))), (ATerm) ATmakeAppl(sym_Build_1, t_23)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  z_23 = t;
  if(match_cons(t, sym_As_2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_23);
  u_23 = t;
  t = v_23;
  t = w_90(t);
  x_23 = t;
  t = w_23;
  t = x_90(t);
  y_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, x_23, y_23), u_23);
  return(t);
}
ATerm PrimT_3_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  j_24 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
      f_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_24);
  c_24 = t;
  t = d_24;
  t = v_94(t);
  g_24 = t;
  t = e_24;
  t = w_94(t);
  h_24 = t;
  t = f_24;
  t = x_94(t);
  i_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, g_24, h_24, i_24), c_24);
  return(t);
}
ATerm Explode_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_Explode_2))
    {
      n_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_24);
  m_24 = t;
  t = n_24;
  t = p_90(t);
  p_24 = t;
  t = o_24;
  t = q_90(t);
  q_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, p_24, q_24), m_24);
  return(t);
}
ATerm Op_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  z_24 = t;
  if(match_cons(t, sym_Op_2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_24);
  u_24 = t;
  t = v_24;
  t = l_90(t);
  x_24 = t;
  t = w_24;
  t = m_90(t);
  y_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, x_24, y_24), u_24);
  return(t);
}
ATerm pat_td_1_0 (ATerm u_133 (ATerm), ATerm t)
{
  ATerm q_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_133(t);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = q_17;
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              ATerm k_3 (ATerm t)
              {
                t = pat_td_1_0(u_133, t);
                return(t);
              }
              t = fetch_1_0(k_3, t);
              return(t);
            }
            t = Op_2_0(_id, j_3, t);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            {
              ATerm w_17 = t;
              int y_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_3 (ATerm t)
                  {
                    t = pat_td_1_0(u_133, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, l_3, t);
                  ;
                  LocalPopChoice(y_17);
                }
              else
                {
                  t = w_17;
                  {
                    ATerm z_17 = t;
                    int a_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_3 (ATerm t)
                        {
                          t = pat_td_1_0(u_133, t);
                          return(t);
                        }
                        t = Explode_2_0(m_3, _id, t);
                        ;
                        LocalPopChoice(a_18);
                      }
                    else
                      {
                        t = z_17;
                        {
                          ATerm b_18 = t;
                          int c_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_3 (ATerm t)
                              {
                                ATerm o_3 (ATerm t)
                                {
                                  t = pat_td_1_0(u_133, t);
                                  return(t);
                                }
                                t = fetch_1_0(o_3, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, n_3, t);
                              ;
                              LocalPopChoice(c_18);
                            }
                          else
                            {
                              t = b_18;
                              {
                                ATerm p_3 (ATerm t)
                                {
                                  t = pat_td_1_0(u_133, t);
                                  return(t);
                                }
                                t = As_2_0(_id, p_3, t);
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
  ATerm e_25 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL,h_25 = NULL;
        t = e_25;
        {
          ATerm q_3 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm f_18 = ATgetArgument(t, 0);
                if(match_cons(f_18, sym_Build_1))
                  {
                    g_25 = ATgetArgument(f_18, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = g_25;
            return(t);
          }
          t = pat_td_1_0(q_3, t);
          h_25 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, h_25);
        }
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm j_25 = NULL,k_25 = NULL;
          t = e_25;
          {
            ATerm r_3 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm g_18 = ATgetArgument(t, 0);
                  if(match_cons(g_18, sym_Build_1))
                    {
                      j_25 = ATgetArgument(g_18, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_18 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = j_25;
              return(t);
            }
            t = pat_td_1_0(r_3, t);
            k_25 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, k_25);
          }
        }
      }
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm l_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
            if(match_cons(t, sym_Build_1))
              {
                o_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_25;
            if(match_cons(t, sym_RootApp_1))
              {
                p_25 = ATgetArgument(t, 0);
                t = p_25;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    p_25 = ATgetArgument(t, 0);
                    q_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_25), p_25);
              }
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = l_18;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm s_3 (ATerm t)
        {
          ATerm x_3 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(x_3, t);
          return(t);
        }
        t = Cons_2_0(_id, s_3, t);
      }
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = o_18;
      {
        ATerm z_3 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, z_3, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,d_26 = NULL,e_26 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_26, e_26);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_26 = ATgetArgument(t, 0);
          t = d_26;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_25 = ATgetFirst((ATermList) t);
              z_25 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, y_25, (ATerm) ATmakeAppl(sym_LChoices_1, z_25));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_p_15;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_26 = ATgetArgument(t, 0);
              t = d_26;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_25 = ATgetFirst((ATermList) t);
                  z_25 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, y_25, (ATerm) ATmakeAppl(sym_Choices_1, z_25));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_p_15;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_26 = ATgetArgument(t, 0);
                  t = d_26;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_25 = ATgetFirst((ATermList) t);
                      z_25 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_25, (ATerm) ATmakeAppl(sym_Seqs_1, z_25));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_s_18;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_26 = ATgetArgument(t, 0);
                      e_26 = ATgetArgument(t, 1);
                      b_26 = ATgetArgument(t, 2);
                      a_26 = ATgetArgument(t, 3);
                      {
                        ATerm r_26 = NULL,s_26 = NULL;
                        t = e_26;
                        {
                          ATerm a_4 (ATerm t)
                          {
                            ATerm t_26 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                t_26 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, t_26, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_18), term_v_18));
                            return(t);
                          }
                          t = map1_1_0(a_4, t);
                          r_26 = t;
                          t = b_26;
                          {
                            ATerm b_4 (ATerm t)
                            {
                              ATerm d_4 (ATerm t)
                              {
                                ATerm u_26 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    u_26 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, u_26, term_v_18);
                                return(t);
                              }
                              t = try_1_0(d_4, t);
                              return(t);
                            }
                            t = map1_1_0(b_4, t);
                            s_26 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, d_26, r_26, s_26, a_26);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_26 = ATgetArgument(t, 0);
                          e_26 = ATgetArgument(t, 1);
                          b_26 = ATgetArgument(t, 2);
                          a_26 = ATgetArgument(t, 3);
                          {
                            ATerm z_18 = t;
                            int a_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_26 = NULL,a_27 = NULL;
                                t = b_26;
                                {
                                  ATerm i_4 (ATerm t)
                                  {
                                    ATerm b_27 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        b_27 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, b_27, term_v_18);
                                    return(t);
                                  }
                                  t = map1_1_0(i_4, t);
                                  z_26 = t;
                                  t = e_26;
                                  {
                                    ATerm k_4 (ATerm t)
                                    {
                                      ATerm m_4 (ATerm t)
                                      {
                                        ATerm c_27 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            c_27 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_27, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_18), term_v_18));
                                        return(t);
                                      }
                                      t = try_1_0(m_4, t);
                                      return(t);
                                    }
                                    t = map_1_0(k_4, t);
                                    a_27 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, d_26, a_27, z_26, a_26);
                                  }
                                }
                                ;
                                LocalPopChoice(a_19);
                              }
                            else
                              {
                                t = z_18;
                                {
                                  ATerm h_27 = NULL,i_27 = NULL;
                                  t = e_26;
                                  {
                                    ATerm o_4 (ATerm t)
                                    {
                                      ATerm j_27 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          j_27 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_27, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_18), term_v_18));
                                      return(t);
                                    }
                                    t = map1_1_0(o_4, t);
                                    h_27 = t;
                                    t = b_26;
                                    {
                                      ATerm p_4 (ATerm t)
                                      {
                                        ATerm q_4 (ATerm t)
                                        {
                                          ATerm k_27 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              k_27 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, k_27, term_v_18);
                                          return(t);
                                        }
                                        t = try_1_0(q_4, t);
                                        return(t);
                                      }
                                      t = map_1_0(p_4, t);
                                      i_27 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, d_26, h_27, i_27, a_26);
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
                              d_26 = ATgetArgument(t, 0);
                              e_26 = ATgetArgument(t, 1);
                              b_26 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, e_26, (ATerm) ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, b_26), d_26)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_26 = ATgetArgument(t, 0);
                                  e_26 = ATgetArgument(t, 1);
                                  b_26 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_26)), d_26), (ATerm) ATmakeAppl(sym_Build_1, e_26)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_26 = ATgetArgument(t, 0);
                                      e_26 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_26, (ATerm) ATmakeAppl(sym_Match_1, e_26));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_26 = ATgetArgument(t, 0);
                                          e_26 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_26), e_26);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_26 = ATgetArgument(t, 0);
                                              e_26 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_26), d_26);
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
ATerm unzip_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_b_19;
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm x_27 = NULL,y_27 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_27 = ATgetFirst((ATermList) t);
        y_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_19 = ATgetArgument(t, 0);
        if(match_cons(c_19, sym__2))
          {
            z_27 = ATgetArgument(c_19, 0);
            b_28 = ATgetArgument(c_19, 1);
          }
        else
          _fail(t);
        {
          ATerm g_19 = ATgetArgument(t, 1);
          if(match_cons(g_19, sym__2))
            {
              a_28 = ATgetArgument(g_19, 0);
              c_28 = ATgetArgument(g_19, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_28), z_27), (ATerm) ATinsert(CheckATermList(c_28), b_28));
    return(t);
  }
  t = genzip_4_0(s_4, u_4, v_4, k_109, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm l_28 (ATerm f_28, ATerm t)
  {
    ATerm h_28 = NULL;
    t = f_28;
    {
      ATerm h_19 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_19;
        }
      t = new_0_0(t);
      h_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_28), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_28), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_28)))), (ATerm) ATmakeAppl(sym_Var_1, h_28)));
    }
    return(t);
  }
  ATerm i_28 = NULL,j_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_28 = ATgetArgument(t, 0);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_28(i_28, t);
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_18, (ATerm) ATmakeAppl(sym_Var_1, j_28)));
          }
      }
    }
  else
    {
      t = l_28(i_28, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm f_90 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  p_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_28);
  m_28 = t;
  t = n_28;
  t = f_90(t);
  o_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, o_28), m_28);
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
      n_29 = ATgetArgument(t, 2);
      {
        ATerm d_5 = NULL,g_5 = NULL,k_5 = NULL;
        t = n_29;
        {
          ATerm w_4 (ATerm t)
          {
            ATerm k_19 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_19;
              }
            return(t);
          }
          t = fetch_1_0(w_4, t);
          t = n_29;
          t = unzip_1_0(LiftPrimArg_0_0, t);
          {
            ATerm x_4 (ATerm t)
            {
              t = unzip_1_0(_id, t);
              return(t);
            }
            t = _2_0(concat_0_0, x_4, t);
            if(match_cons(t, sym__2))
              {
                d_5 = ATgetArgument(t, 0);
                {
                  ATerm l_19 = ATgetArgument(t, 1);
                  if(match_cons(l_19, sym__2))
                    {
                      g_5 = ATgetArgument(l_19, 0);
                      k_5 = ATgetArgument(l_19, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, d_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_5), (ATerm) ATmakeAppl(sym_PrimT_3, p_29, q_29, k_5)));
          }
        }
      }
    }
  else
    {
      ATerm h_6 = NULL,q_6 = NULL,r_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          p_29 = ATgetArgument(t, 0);
          q_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_29;
      {
        ATerm y_4 (ATerm t)
        {
          ATerm m_19 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_19;
            }
          return(t);
        }
        t = fetch_1_0(y_4, t);
        t = q_29;
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm z_4 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, z_4, t);
          if(match_cons(t, sym__2))
            {
              h_6 = ATgetArgument(t, 0);
              {
                ATerm n_19 = ATgetArgument(t, 1);
                if(match_cons(n_19, sym__2))
                  {
                    q_6 = ATgetArgument(n_19, 0);
                    r_6 = ATgetArgument(n_19, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, h_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_6), (ATerm) ATmakeAppl(sym_PrimT_3, p_29, (ATerm)ATempty, r_6)));
        }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm z_120 (ATerm), ATerm t)
{
  ATerm t_29 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      t = z_120(t);
      t = t_29(t);
      return(t);
    }
    t = try_1_0(a_5, t);
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm o_19 = t;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(c_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_19;
    }
  return(t);
}
ATerm App_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  z_29 = t;
  if(match_cons(t, sym_App_2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_29);
  u_29 = t;
  t = v_29;
  t = t_90(t);
  x_29 = t;
  t = w_29;
  t = u_90(t);
  y_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, x_29, y_29), u_29);
  return(t);
}
ATerm Con_3_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  j_30 = t;
  if(match_cons(t, sym_Con_3))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
      f_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_30);
  c_30 = t;
  t = d_30;
  t = f_91(t);
  g_30 = t;
  t = e_30;
  t = g_91(t);
  h_30 = t;
  t = f_30;
  t = h_91(t);
  i_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, g_30, h_30, i_30), c_30);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm v_19 = t;
  if((PushChoice() == 0))
    {
      ATerm p_5 (ATerm t)
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(p_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_19;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      p_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_30;
  if(match_cons(t, sym_StratRule_3))
    {
      q_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
      s_30 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_30), (ATerm) ATmakeAppl(sym_Where_1, s_30)), q_30));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          q_30 = ATgetArgument(t, 0);
          r_30 = ATgetArgument(t, 1);
          s_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_30;
      t = pureterm_0_0(t);
      t = r_30;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, r_30)), (ATerm) ATmakeAppl(sym_Where_1, s_30)), (ATerm) ATmakeAppl(sym_Match_1, q_30)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  e_31 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_31);
  z_30 = t;
  t = a_31;
  t = z_93(t);
  c_31 = t;
  t = b_31;
  t = a_94(t);
  d_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, c_31, d_31), z_30);
  return(t);
}
ATerm oncetd_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm h_31 (ATerm t)
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_105(t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = SRTS_one(h_31, t);
      }
    return(t);
  }
  t = h_31(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      if(match_cons(f_20, sym_Rule_3))
        {
          i_31 = ATgetArgument(f_20, 0);
          j_31 = ATgetArgument(f_20, 1);
          k_31 = ATgetArgument(f_20, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  l_31 = t;
  t = i_31;
  {
    ATerm q_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm h_20 = ATgetArgument(t, 0);
          if(match_cons(h_20, sym_Var_1))
            {
              n_31 = ATgetArgument(h_20, 0);
            }
          else
            _fail(t);
          m_31 = ATgetArgument(t, 1);
          {
            ATerm i_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, n_31);
      return(t);
    }
    t = oncetd_1_0(q_5, t);
    o_31 = t;
    t = j_31;
    {
      ATerm r_5 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm j_20 = ATgetArgument(t, 0);
            if(match_cons(j_20, sym_Var_1))
              {
                n_31 = ATgetArgument(j_20, 0);
              }
            else
              _fail(t);
            p_31 = ATgetArgument(t, 1);
            {
              ATerm n_20 = ATgetArgument(t, 2);
              if(match_cons(n_20, sym_CallT_3))
                {
                  q_31 = ATgetArgument(n_20, 0);
                  {
                    ATerm p_20 = ATgetArgument(n_20, 1);
                    if(((ATgetType(p_20) != AT_LIST) || !(ATisEmpty(p_20))))
                      _fail(t);
                  }
                  {
                    ATerm v_20 = ATgetArgument(n_20, 2);
                    if(((ATgetType(v_20) != AT_LIST) || !(ATisEmpty(v_20))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, l_31);
        return(t);
      }
      t = oncetd_1_0(r_5, t);
      r_31 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_31), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, o_31, r_31, (ATerm) ATmakeAppl(sym_Seq_2, k_31, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(q_31), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_31), not_null(p_31), term_s_18))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_31)), (ATerm) ATmakeAppl(sym_Var_1, l_31))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        {
          ATerm a_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(f_21);
            }
          else
            {
              t = a_21;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(w_5, t);
  return(t);
}
ATerm topdown_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  t = o_104(t);
  {
    ATerm x_5 (ATerm t)
    {
      t = topdown_1_0(o_104, t);
      return(t);
    }
    t = SRTS_all(x_5, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm d_6 (ATerm t)
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            {
              ATerm p_21 = t;
              int u_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(u_21);
                }
              else
                {
                  t = p_21;
                  {
                    ATerm a_22 = t;
                    int d_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(d_22);
                      }
                    else
                      {
                        t = a_22;
                        {
                          ATerm i_22 = t;
                          int m_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(m_22);
                            }
                          else
                            {
                              t = i_22;
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
  t = topdown_1_0(z_5, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Thd_0_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  w_6 = t;
  t = SSL_explode_term(w_6);
  if(match_cons(t, sym__2))
    {
      ATerm u_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_22 = ATgetArgument(t, 1);
        if(((ATgetType(v_22) == AT_LIST) && !(ATisEmpty(v_22))))
          {
            x_6 = ATgetFirst((ATermList) v_22);
            {
              ATerm w_22 = (ATerm) ATgetNext((ATermList) v_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_6;
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm v_31 = NULL;
  ATerm a_32 (ATerm t)
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_31 = NULL,y_31 = NULL,z_31 = NULL;
        w_31 = t;
        t = map_1_0(Thd_0_0, t);
        t = q_108(t);
        y_31 = t;
        t = w_31;
        {
          ATerm e_6 (ATerm t)
          {
            ATerm b_7 = NULL,d_7 = NULL;
            b_7 = t;
            t = SSL_explode_term(b_7);
            if(match_cons(t, sym__2))
              {
                ATerm c_23 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_23) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm d_23 = ATgetArgument(t, 1);
                  if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
                    {
                      ATerm g_23 = ATgetFirst((ATermList) d_23);
                      d_7 = (ATerm) ATgetNext((ATermList) d_23);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), d_7);
            return(t);
          }
          t = map_1_0(e_6, t);
          t = a_32(t);
          z_31 = t;
          t = (ATerm) ATinsert(CheckATermList(z_31), y_31);
        }
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm f_6 (ATerm t)
          {
            if(!(match_cons(t, sym__0)))
              _fail(t);
            return(t);
          }
          t = map_1_0(f_6, t);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = a_32(t);
  v_31 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), v_31);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  {
    ATerm l_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
        t = b_32;
        t = new_0_0(t);
        d_32 = t;
        t = new_0_0(t);
        e_32 = t;
        t = new_0_0(t);
        f_32 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_32), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, b_32), (ATerm) ATmakeAppl(sym_Var_1, e_32))), (ATerm) ATmakeAppl(sym_Var_1, f_32)), (ATerm)ATmakeAppl(sym_VarDec_2, d_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_18), term_v_18)), e_32, (ATerm)ATmakeAppl(sym_Var_1, e_32), f_32, (ATerm) ATmakeAppl(sym_Var_1, f_32));
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = l_23;
        {
          ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
          t = b_32;
          t = new_0_0(t);
          h_32 = t;
          t = new_0_0(t);
          i_32 = t;
          t = new_0_0(t);
          j_32 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_32), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, b_32), (ATerm) ATmakeAppl(sym_Var_1, i_32))), (ATerm) ATmakeAppl(sym_Var_1, j_32)), (ATerm)ATmakeAppl(sym_VarDec_2, h_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_18), term_v_18)), i_32, (ATerm)ATmakeAppl(sym_Var_1, i_32), j_32, (ATerm) ATmakeAppl(sym_Var_1, j_32));
        }
      }
  }
  return(t);
}
ATerm copy_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm k_32 = NULL,l_32 = NULL;
    if(match_cons(t, sym__2))
      {
        k_32 = ATgetArgument(t, 0);
        l_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, k_32, l_32, (ATerm) ATempty);
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    ATerm m_32 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm a_24 = ATgetArgument(t, 0);
        if(((ATgetType(a_24) != AT_INT) || (ATgetInt((ATermInt) a_24) != 0)))
          _fail(t);
        {
          ATerm b_24 = ATgetArgument(t, 1);
        }
        m_32 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = m_32;
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
    if(match_cons(t, sym__3))
      {
        n_32 = ATgetArgument(t, 0);
        o_32 = ATgetArgument(t, 1);
        p_32 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, n_32, term_k_24);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, n_32, term_k_24);
    {
      ATerm l_24 = t;
      int s_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(n_32, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(s_24);
        }
      else
        {
          t = l_24;
          t = SSL_subtr(n_32, (ATerm) ATmakeInt(1));
        }
      q_32 = t;
      t = o_32;
      t = t_115(t);
      r_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, q_32, o_32, (ATerm) ATinsert(CheckATermList(p_32), r_32));
    }
    return(t);
  }
  t = for_3_0(n_6, o_6, t_6, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  if(match_cons(t, sym__2))
    {
      s_32 = ATgetArgument(t, 0);
      t_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  u_32 = t;
  t = new_0_0(t);
  v_32 = t;
  t = new_0_0(t);
  w_32 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_32), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_32)), (ATerm) ATmakeAppl(sym_Var_1, v_32))), (ATerm) ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_32)), (ATerm) ATmakeAppl(sym_Var_1, w_32)))), (ATerm)ATmakeAppl(sym_VarDec_2, u_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_18), term_v_18)), v_32, (ATerm)ATmakeAppl(sym_Var_1, v_32), w_32, (ATerm) ATmakeAppl(sym_Var_1, w_32));
  return(t);
}
ATerm zipr_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm t_24 = ATgetArgument(t, 0);
        ATerm a_25 = ATgetArgument(t, 1);
        if(((ATgetType(a_25) != AT_LIST) || !(ATisEmpty(a_25))))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_25 = ATgetArgument(t, 0);
        if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
          {
            x_32 = ATgetFirst((ATermList) b_25);
            z_32 = (ATerm) ATgetNext((ATermList) b_25);
          }
        else
          _fail(t);
        {
          ATerm c_25 = ATgetArgument(t, 1);
          if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
            {
              y_32 = ATgetFirst((ATermList) c_25);
              a_33 = (ATerm) ATgetNext((ATermList) c_25);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_32, y_32), (ATerm) ATmakeAppl(sym__2, z_32, a_33));
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    ATerm b_33 = NULL,c_33 = NULL;
    if(match_cons(t, sym__2))
      {
        b_33 = ATgetArgument(t, 0);
        c_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(c_33), b_33);
    return(t);
  }
  t = genzip_4_0(u_6, v_6, y_6, i_109, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_33 = ATgetFirst((ATermList) t);
      h_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_33;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm d_25 = t;
      int f_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_33;
          ;
          LocalPopChoice(f_25);
        }
      else
        {
          t = d_25;
          t = h_33;
          t = last_0_0(t);
        }
    }
  else
    {
      t = h_33;
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm i_35 (ATerm t_33, ATerm u_33, ATerm v_33, ATerm w_33, ATerm t)
  {
    ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, u_33, term_k_24);
    {
      ATerm i_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(u_33, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(l_25);
        }
      else
        {
          t = i_25;
          t = SSL_addr(u_33, (ATerm) ATmakeInt(1));
        }
      a_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_34, term_m_25);
      t = copy_1_0(new_0_0, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_34 = ATgetFirst((ATermList) t);
          c_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_34;
      t = last_0_0(t);
      d_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_34), b_34), c_34);
      t = zipr_1_0(MkThreadApplication_0_0, t);
      t = tuple_unzip_1_0(_id, t);
      if(match_cons(t, sym__6))
        {
          e_34 = ATgetArgument(t, 0);
          f_34 = ATgetArgument(t, 1);
          g_34 = ATgetArgument(t, 2);
          h_34 = ATgetArgument(t, 3);
          i_34 = ATgetArgument(t, 4);
          j_34 = ATgetArgument(t, 5);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_34), g_34), c_34);
      t = concat_0_0(t);
      k_34 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, t_33, term_n_25), f_34, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(k_34), b_34), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_34)), (ATerm) ATmakeAppl(sym_Op_2, t_33, h_34))), (ATerm)ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_34)), (ATerm) ATmakeAppl(sym_Op_2, t_33, j_34))), (ATerm) ATmakeAppl(sym_Seqs_1, e_34)))));
    }
    return(t);
  }
  ATerm j_35 (ATerm l_34, ATerm m_34, ATerm n_34, ATerm o_34, ATerm t)
  {
    ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
    t = o_34;
    t = new_0_0(t);
    s_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_34, (ATerm) ATmakeAppl(sym_Var_1, s_34));
    t = copy_1_0(MkDistApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        t_34 = ATgetArgument(t, 0);
        u_34 = ATgetArgument(t, 1);
        v_34 = ATgetArgument(t, 2);
        w_34 = ATgetArgument(t, 3);
        x_34 = ATgetArgument(t, 4);
        y_34 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, v_34, x_34);
    t = conc_0_0(t);
    z_34 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, l_34, term_r_25), u_34, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(z_34), s_34), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_34)), (ATerm) ATmakeAppl(sym_Op_2, l_34, w_34))), (ATerm)ATmakeAppl(sym_Op_2, l_34, y_34), (ATerm) ATmakeAppl(sym_Seqs_1, t_34)))));
    return(t);
  }
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  a_35 = t;
  if(match_cons(t, sym__3))
    {
      b_35 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
      d_35 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_35;
  if(match_string(t, "T"))
    {
      t = d_35;
      if(match_cons(t, sym__2))
        {
          e_35 = ATgetArgument(t, 0);
          f_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_35;
      if(match_int(t, 0))
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_35(b_35, e_35, f_35, a_35, t);
              ;
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
              {
                ATerm h_35 = NULL;
                t = a_35;
                t = new_0_0(t);
                h_35 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, b_35, term_n_25), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_35)), (ATerm) ATmakeAppl(sym_Op_2, b_35, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_35)), (ATerm) ATmakeAppl(sym_Op_2, b_35, (ATerm) ATempty))), term_s_18))));
              }
            }
        }
      else
        {
          t = i_35(b_35, e_35, f_35, a_35, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = d_35;
      if(match_cons(t, sym__2))
        {
          e_35 = ATgetArgument(t, 0);
          f_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_35(b_35, e_35, f_35, a_35, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      if(match_cons(u_25, sym__2))
        {
          ATerm v_25 = ATgetArgument(u_25, 0);
          if(match_cons(v_25, sym_Mod_2))
            {
              k_35 = ATgetArgument(v_25, 0);
              l_35 = ATgetArgument(v_25, 1);
            }
          else
            _fail(t);
          m_35 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_35, l_35, m_35);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_35, n_35);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      t = OverloadedDef_0_0(t);
      t = _2_0(joindefs_0_0, _id, t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm n_112 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  if(match_cons(t, sym__2))
    {
      q_35 = ATgetArgument(t, 0);
      p_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_35;
  {
    ATerm r_35 (ATerm t)
    {
      ATerm c_26 = t;
      int f_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(f_26);
        }
      else
        {
          t = c_26;
          {
            ATerm g_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_6 (ATerm t)
                {
                  t = p_35;
                  return(t);
                }
                t = HdMember_p__2_0(n_112, z_6, t);
                t = r_35(t);
                ;
                LocalPopChoice(h_26);
              }
            else
              {
                t = g_26;
                t = Cons_2_0(_id, r_35, t);
              }
          }
        }
      return(t);
    }
    t = r_35(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t)
{
  ATerm s_35 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_109(t);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = b_109(t);
        t = _2_0(d_109, s_35, t);
        t = c_109(t);
      }
    return(t);
  }
  t = s_35(t);
  return(t);
}
ATerm zip_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm k_26 = ATgetArgument(t, 0);
        if(((ATgetType(k_26) != AT_LIST) || !(ATisEmpty(k_26))))
          _fail(t);
        {
          ATerm l_26 = ATgetArgument(t, 1);
          if(((ATgetType(l_26) != AT_LIST) || !(ATisEmpty(l_26))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_26 = ATgetArgument(t, 0);
        if(((ATgetType(m_26) == AT_LIST) && !(ATisEmpty(m_26))))
          {
            t_35 = ATgetFirst((ATermList) m_26);
            v_35 = (ATerm) ATgetNext((ATermList) m_26);
          }
        else
          _fail(t);
        {
          ATerm n_26 = ATgetArgument(t, 1);
          if(((ATgetType(n_26) == AT_LIST) && !(ATisEmpty(n_26))))
            {
              u_35 = ATgetFirst((ATermList) n_26);
              w_35 = (ATerm) ATgetNext((ATermList) n_26);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_35, u_35), (ATerm) ATmakeAppl(sym__2, v_35, w_35));
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL;
    if(match_cons(t, sym__2))
      {
        x_35 = ATgetArgument(t, 0);
        y_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(y_35), x_35);
    return(t);
  }
  t = genzip_4_0(a_7, e_7, f_7, f_109, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_26 = ATgetFirst((ATermList) t);
      if(match_cons(o_26, sym__2))
        {
          z_35 = ATgetArgument(o_26, 0);
          a_36 = ATgetArgument(o_26, 1);
        }
      else
        _fail(t);
      b_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_36);
  if(match_cons(t, sym__2))
    {
      c_36 = ATgetArgument(t, 0);
      d_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_35);
  if(match_cons(t, sym__2))
    {
      if((c_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_36, d_36);
  t = zip_1_0(_id, t);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_36, b_36);
  t = conc_0_0(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_7 (ATerm t)
      {
        ATerm k_36 = NULL;
        k_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_36);
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        ATerm l_7 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, l_7, t);
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 (ATerm t)
            {
              ATerm x_26 = t;
              int y_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_36 = ATgetFirst((ATermList) t);
                      p_36 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = m_36;
                  if(match_cons(t, sym__2))
                    {
                      n_36 = ATgetArgument(t, 0);
                      o_36 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = o_36;
                  if((n_36 != t))
                    {
                      _fail(t);
                    }
                  t = p_36;
                  ;
                  LocalPopChoice(y_26);
                }
              else
                {
                  t = x_26;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, o_7, t);
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
              if(match_cons(t, sym__2))
                {
                  t_36 = ATgetArgument(t, 0);
                  u_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_36;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_36 = ATgetFirst((ATermList) t);
                  w_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_36), v_36), w_36);
            }
          }
        return(t);
      }
      t = for_3_0(g_7, h_7, k_7, t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm p_7 (ATerm t)
        {
          ATerm e_37 = NULL;
          if(match_cons(t, sym__2))
            {
              e_37 = ATgetArgument(t, 0);
              if((e_37 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(p_7, t);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm s_133 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(((ATgetType(d_27) == AT_LIST) && !(ATisEmpty(d_27))))
        {
          f_37 = ATgetFirst((ATermList) d_27);
          g_37 = (ATerm) ATgetNext((ATermList) d_27);
        }
      else
        _fail(t);
      h_37 = ATgetArgument(t, 1);
      i_37 = ATgetArgument(t, 2);
      j_37 = ATgetArgument(t, 3);
      k_37 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_37, i_37);
  t = q_133(t);
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_37;
  t = r_133(t);
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_37, h_37);
  t = diff_0_0(t);
  o_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, g_37);
  t = conc_0_0(t);
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, h_37);
  t = conc_0_0(t);
  q_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_37, l_37, j_37);
  t = s_133(t);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__5, p_37, q_37, m_37, r_37, k_37);
  return(t);
}
ATerm while_not_2_0 (ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm t)
{
  ATerm s_37 (ATerm t)
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_121(t);
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = p_121(t);
        t = s_37(t);
      }
    return(t);
  }
  t = s_37(t);
  return(t);
}
ATerm for_3_0 (ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm t)
{
  t = r_121(t);
  t = while_not_2_0(s_121, t_121, t);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm w_37 = NULL,x_37 = NULL,z_37 = NULL;
    if(match_cons(t, sym__3))
      {
        w_37 = ATgetArgument(t, 0);
        x_37 = ATgetArgument(t, 1);
        z_37 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, w_37, w_37, x_37, z_37, (ATerm) ATempty);
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    ATerm a_38 = NULL,b_38 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm g_27 = ATgetArgument(t, 0);
        if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
          _fail(t);
        {
          ATerm l_27 = ATgetArgument(t, 1);
        }
        {
          ATerm m_27 = ATgetArgument(t, 2);
        }
        a_38 = ATgetArgument(t, 3);
        b_38 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3_0(b_133, c_133, d_133, t);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        {
          ATerm d_38 = NULL,e_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
          if(match_cons(t, sym__5))
            {
              d_38 = ATgetArgument(t, 0);
              h_38 = ATgetArgument(t, 1);
              i_38 = ATgetArgument(t, 2);
              j_38 = ATgetArgument(t, 3);
              k_38 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = d_38;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_38 = ATgetFirst((ATermList) t);
              g_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, g_38, h_38, i_38, j_38, (ATerm) ATinsert(CheckATermList(k_38), e_38));
        }
      }
    return(t);
  }
  t = for_3_0(q_7, r_7, s_7, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    t = svars_arity_0_0(t);
    {
      ATerm x_7 (ATerm t)
      {
        t = try_1_0(DefinitionExists_0_0, t);
        return(t);
      }
      t = map_1_0(x_7, t);
    }
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    ATerm u_38 = NULL,v_38 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm p_27 = ATgetArgument(t, 0);
        u_38 = ATgetArgument(t, 1);
        v_38 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(v_38), u_38);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3_0(get_definition_0_0, u_7, v_7, t);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL,y_38 = NULL;
        if(match_cons(t, sym__2))
          {
            x_38 = ATgetArgument(t, 0);
            y_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_38;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_38;
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = MissingDefs_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm p_116 (ATerm), ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,h_39 = NULL,i_39 = NULL,m_39 = NULL;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_116(t);
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_39, c_39, d_39);
  t = table_push_0_0(t);
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(h_39, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_39 = ATgetFirst((ATermList) t);
        m_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(h_39, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_39), (ATerm) ATinsert(CheckATermList(i_39), c_39)));
    t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_39 = ATgetFirst((ATermList) t);
      o_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_112(t);
  {
    ATerm y_7 (ATerm t)
    {
      ATerm p_39 = NULL;
      p_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_39, p_39);
      t = v_112(t);
      return(t);
    }
    t = fetch_1_0(y_7, t);
    t = o_39;
  }
  return(t);
}
ATerm union_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  if(match_cons(t, sym__2))
    {
      r_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_39;
  {
    ATerm s_39 (ATerm t)
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_39;
          ;
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          {
            ATerm w_27 = t;
            int d_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_7 (ATerm t)
                {
                  t = q_39;
                  return(t);
                }
                t = HdMember_p__2_0(r_112, z_7, t);
                t = s_39(t);
                ;
                LocalPopChoice(d_28);
              }
            else
              {
                t = w_27;
                t = Cons_2_0(_id, s_39, t);
              }
          }
        }
      return(t);
    }
    t = s_39(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm t_39 = NULL;
    if(match_cons(t, sym__2))
      {
        t_39 = ATgetArgument(t, 0);
        if((t_39 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(a_8, t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm c_40 = NULL;
  c_40 = t;
  {
    ATerm e_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        t = c_40;
        {
          ATerm b_8 (ATerm t)
          {
            t = term_k_28;
            return(t);
          }
          t = rewrite_1_0(b_8, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm q_28 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_28) != ATmakeSymbol("s_0", 0, ATtrue)))
                _fail(t);
              j_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_7;
        }
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = e_28;
        {
          ATerm m_7 = NULL;
          t = c_40;
          {
            ATerm c_8 (ATerm t)
            {
              t = term_k_28;
              return(t);
            }
            t = rewrite_1_0(c_8, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm r_28 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_28) != ATmakeSymbol("m_0", 0, ATtrue)))
                  _fail(t);
                m_7 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_7;
          }
        }
      }
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,t_7 = NULL;
  k_40 = t;
  t = term_m_25;
  t = r_116(t);
  l_40 = t;
  t = SSL_table_get(l_40, k_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_7 = ATgetFirst((ATermList) t);
      {
        ATerm s_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_7;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm e_41 (ATerm u_40, ATerm t)
  {
    ATerm w_40 = NULL,x_40 = NULL;
    t = u_40;
    {
      ATerm d_8 (ATerm t)
      {
        t = term_t_28;
        return(t);
      }
      t = rewrite_1_0(d_8, t);
      if(match_cons(t, sym_Defined_3))
        {
          ATerm u_28 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) u_28) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          w_40 = ATgetArgument(t, 1);
          x_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(x_40), w_40);
    }
    return(t);
  }
  ATerm a_41 = NULL,c_41 = NULL;
  a_41 = t;
  if(match_cons(t, sym__2))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_41;
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_28 = ATgetArgument(t, 0);
            ATerm z_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_28);
        {
          ATerm a_29 = t;
          int b_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL;
              t = a_41;
              {
                ATerm e_8 (ATerm t)
                {
                  t = term_t_28;
                  return(t);
                }
                t = rewrite_1_0(e_8, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm c_29 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_29) != ATmakeSymbol("p_0", 0, ATtrue)))
                      _fail(t);
                    w_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_7;
              }
              ;
              LocalPopChoice(b_29);
            }
          else
            {
              t = a_29;
              t = e_41(a_41, t);
            }
        }
      }
    else
      {
        t = w_28;
        t = e_41(a_41, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_115(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm h_41 = NULL,i_41 = NULL,l_41 = NULL,m_41 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_41 = ATgetFirst((ATermList) t);
            i_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_41;
        t = i_115(t);
        l_41 = t;
        t = i_41;
        t = foldr_3_0(g_115, h_115, i_115, t);
        m_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_41, m_41);
        t = h_115(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    t = term_f_29;
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    ATerm n_41 = NULL,o_41 = NULL;
    if(match_cons(t, sym__2))
      {
        n_41 = ATgetArgument(t, 0);
        o_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm g_29 = t;
      int h_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(n_41, o_41);
          ;
          LocalPopChoice(h_29);
        }
      else
        {
          t = g_29;
          t = SSL_addr(n_41, o_41);
        }
    }
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    t = term_k_24;
    return(t);
  }
  t = foldr_3_0(f_8, g_8, h_8, t);
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  p_41 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_41 = ATgetArgument(t, 0);
      r_41 = ATgetArgument(t, 1);
      s_41 = ATgetArgument(t, 2);
      {
        ATerm i_29 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t_41 = t;
  t = r_41;
  t = length_0_0(t);
  u_41 = t;
  t = s_41;
  t = length_0_0(t);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_41, (ATerm) ATmakeAppl(sym__2, u_41, v_41));
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = (ATerm) ATempty;
      }
    w_41 = t;
    t = q_41;
    {
      ATerm l_29 = t;
      int m_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(m_29);
        }
      else
        {
          t = l_29;
          t = (ATerm) ATempty;
        }
      x_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_41, v_41)), x_41);
      t = union_0_0(t);
      y_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_41, (ATerm) ATmakeAppl(sym__2, u_41, v_41)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_29, (ATerm) ATinsert(CheckATermList(w_41), p_41)));
      {
        ATerm i_8 (ATerm t)
        {
          t = term_t_28;
          return(t);
        }
        t = assert_1_0(i_8, t);
        t = (ATerm) ATmakeAppl(sym__2, q_41, (ATerm) ATmakeAppl(sym_Defined_2, term_s_29, y_41));
        {
          ATerm l_8 (ATerm t)
          {
            t = term_k_28;
            return(t);
          }
          t = assert_1_0(l_8, t);
          t = t_41;
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
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm z_41 = NULL;
  t = sort_defs_0_0(t);
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_k_30), z_41, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm h_89 (ATerm), ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
  d_42 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_42);
  a_42 = t;
  t = b_42;
  t = h_89(t);
  c_42 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, c_42), a_42);
  return(t);
}
ATerm Cons_2_0 (ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  l_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_42 = ATgetFirst((ATermList) t);
      i_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_42);
  g_42 = t;
  t = h_42;
  t = d_89(t);
  j_42 = t;
  t = i_42;
  t = e_89(t);
  k_42 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_42), j_42), g_42);
  return(t);
}
ATerm Specification_1_0 (ATerm m_89 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  r_42 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_42);
  o_42 = t;
  t = p_42;
  t = m_89(t);
  q_42 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, q_42), o_42);
  return(t);
}
ATerm _2_0 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  z_42 = t;
  if(match_cons(t, sym__2))
    {
      v_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_42);
  u_42 = t;
  t = v_42;
  t = u_87(t);
  x_42 = t;
  t = w_42;
  t = v_87(t);
  y_42 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_42, y_42), u_42);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  c_43 = t;
  t = term_m_25;
  t = whoami_0_0(t);
  d_43 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), d_43), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_43;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm g_43 = NULL,h_43 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_43 = ATgetFirst((ATermList) t);
            h_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_43;
        {
          ATerm m_8 (ATerm t)
          {
            t = h_43;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_8, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  l_43 = t;
  t = SSL_explode_term(l_43);
  if(match_cons(t, sym__2))
    {
      ATerm n_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_43;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  ATerm n_43 (ATerm t)
  {
    ATerm o_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_43, t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = o_30;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_111(t);
      }
    return(t);
  }
  t = n_43(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  if(match_cons(t, sym__2))
    {
      p_43 = ATgetArgument(t, 0);
      o_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_43;
  {
    ATerm n_8 (ATerm t)
    {
      t = o_43;
      return(t);
    }
    t = at_end_1_0(n_8, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm q_43 = NULL;
  ATerm o_8 (ATerm t)
  {
    ATerm r_43 = NULL;
    r_43 = t;
    t = SSL_explode_string(r_43);
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    ATerm s_43 = NULL;
    s_43 = t;
    t = SSL_explode_string(s_43);
    return(t);
  }
  t = _2_0(o_8, p_8, t);
  t = conc_0_0(t);
  q_43 = t;
  t = SSL_implode_string(q_43);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_43 = NULL;
      y_43 = t;
      t = SSL_is_string(y_43);
      ;
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm y_30 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(q_8, t);
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = y_30;
            {
              ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
              h_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_44 = ATgetArgument(t, 0);
                  t = i_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_44 = ATgetArgument(t, 0);
                      t = i_44;
                      {
                        ATerm g_31 = t;
                        int s_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_31);
                          }
                        else
                          {
                            t = g_31;
                            {
                              ATerm r_8 (ATerm t)
                              {
                                t = term_t_31;
                                return(t);
                              }
                              t = debug_1_0(r_8, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm n_44 = NULL,o_44 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_44 = ATgetArgument(t, 0);
                          j_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_44;
                      t = eval_config_0_0(t);
                      n_44 = t;
                      t = j_44;
                      t = eval_config_0_0(t);
                      o_44 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
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
  ATerm r_44 = NULL;
  r_44 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_44);
  {
    ATerm s_8 (ATerm t)
    {
      ATerm s_44 = NULL;
      t = eval_config_0_0(t);
      s_44 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_44, s_44);
      t = s_44;
      return(t);
    }
    t = try_1_0(s_8, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_127 (ATerm), ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm t_44 = NULL,w_44 = NULL;
    t_44 = t;
    t = term_u_31;
    t = get_config_0_0(t);
    w_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_44, term_x_31);
    t = geq_0_0(t);
    t = t_44;
    t = l_127(t);
    return(t);
  }
  t = try_1_0(t_8, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm u_8 (ATerm t)
  {
    ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_32 = ATgetArgument(t, 0);
        if(match_cons(c_32, sym_Stream_1))
          {
            x_44 = ATgetArgument(c_32, 0);
          }
        else
          _fail(t);
        y_44 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(x_44, y_44);
    z_44 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), z_44);
    a_45 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, a_45);
    return(t);
  }
  t = WriteToFile_1_0(u_8, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm h_126 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
  if(match_cons(t, sym__2))
    {
      b_45 = ATgetArgument(t, 0);
      c_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_45, term_g_32);
  t = open_stream_0_0(t);
  d_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_45, c_45);
  t = h_126(t);
  t = fclose_0_0(t);
  t = c_45;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm v_8 (ATerm t)
  {
    ATerm e_45 = NULL,f_45 = NULL,k_45 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm d_33 = ATgetArgument(t, 0);
        if(match_cons(d_33, sym_Stream_1))
          {
            e_45 = ATgetArgument(d_33, 0);
          }
        else
          _fail(t);
        f_45 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(e_45, f_45);
    k_45 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, k_45);
    return(t);
  }
  t = WriteToFile_1_0(v_8, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_45 = NULL,p_45 = NULL;
  l_45 = t;
  {
    ATerm w_8 (ATerm t)
    {
      ATerm e_33 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_8 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                p_45 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(x_8, t);
          ;
          LocalPopChoice(f_33);
        }
      else
        {
          t = e_33;
          t = term_i_33;
          p_45 = t;
        }
      return(t);
    }
    t = _2_0(w_8, _id, t);
    t = l_45;
    {
      ATerm y_8 (ATerm t)
      {
        ATerm z_8 (ATerm t)
        {
          t = not_null(p_45);
          return(t);
        }
        t = split_2_0(z_8, _id, t);
        return(t);
      }
      t = _2_0(_id, y_8, t);
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 (ATerm t)
            {
              ATerm b_9 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(b_9, t);
              return(t);
            }
            t = _2_0(a_9, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
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
ATerm apply_strategy_1_0 (ATerm j_129 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  s_45 = t;
  t = dtime_0_0(t);
  t = s_45;
  t = j_129(t);
  t_45 = t;
  t = dtime_0_0(t);
  u_45 = t;
  t = t_45;
  if(match_cons(t, sym__2))
    {
      v_45 = ATgetArgument(t, 0);
      w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_45), (ATerm) ATmakeAppl(sym_Runtime_1, u_45)), w_45);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_46 (ATerm e_46, ATerm t)
  {
    t = SSL_fclose(e_46);
    return(t);
  }
  ATerm h_46 = NULL,i_46 = NULL;
  i_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_46 = ATgetArgument(t, 0);
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_46);
            ;
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            t = k_46(i_46, t);
          }
      }
    }
  else
    {
      t = k_46(i_46, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm t_125 (ATerm), ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL;
  l_46 = t;
  t = t_125(t);
  m_46 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_46), m_46));
  t = l_46;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_46 = NULL;
  t = SSL_stdin_stream();
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_46);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_46 = NULL;
  t = SSL_stdout_stream();
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_46);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_46 = NULL;
  t = SSL_stderr_stream();
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_46);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm r_46 = NULL;
  r_46 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_46;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_46;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_46;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_33 = ATgetArgument(t, 0);
      ATerm o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL,k_8 = NULL;
        j_8 = t;
        t = SSL_explode_term(j_8);
        if(match_cons(t, sym__2))
          {
            ATerm r_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_33) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_33 = ATgetArgument(t, 1);
              if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
                {
                  k_8 = ATgetFirst((ATermList) s_33);
                  {
                    ATerm x_33 = (ATerm) ATgetNext((ATermList) s_33);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_8;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
              ATerm c_9 (ATerm t)
              {
                ATerm b_47 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_47;
                return(t);
              }
              t = _2_0(c_9, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_46 = ATgetArgument(t, 0);
                  z_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_46, z_46);
              a_47 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_47);
              ;
              LocalPopChoice(z_33);
            }
          else
            {
              t = y_33;
              {
                ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
                ATerm d_9 (ATerm t)
                {
                  ATerm f_47 = NULL;
                  f_47 = t;
                  t = SSL_is_string(f_47);
                  return(t);
                }
                t = _2_0(d_9, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_47 = ATgetArgument(t, 0);
                    d_47 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_47, d_47);
                e_47 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_47);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_47 = NULL,n_47 = NULL,o_47 = NULL;
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_47 = NULL;
      p_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_47, term_r_34);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm e_9 (ATerm t)
        {
          t = term_g_35;
          return(t);
        }
        t = debug_1_0(e_9, t);
        _fail(t);
      }
    }
  i_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(o_47);
  n_47 = t;
  t = i_47;
  t = fclose_0_0(t);
  t = n_47;
  return(t);
}
ATerm split_2_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
  r_47 = t;
  t = a_108(t);
  s_47 = t;
  t = r_47;
  t = b_108(t);
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_47, t_47);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  u_47 = t;
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_9 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              v_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(g_9, t);
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = term_i_36;
        v_47 = t;
      }
    t = u_47;
    {
      ATerm h_9 (ATerm t)
      {
        t = not_null(v_47);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, h_9, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm i_9 (ATerm t)
  {
    ATerm x_47 = NULL;
    x_47 = t;
    if(match_string(t, "-k"))
      {
        t = x_47;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = x_47;
      }
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    ATerm y_47 = NULL,z_47 = NULL;
    y_47 = t;
    t = SSL_string_to_int(y_47);
    z_47 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_47);
    t = y_47;
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = term_j_36;
    return(t);
  }
  t = ArgOption_3_0(i_9, j_9, k_9, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_9 (ATerm t)
      {
        ATerm b_48 = NULL;
        b_48 = t;
        if(match_string(t, "-S"))
          {
            t = b_48;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = b_48;
          }
        return(t);
      }
      ATerm m_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_r_36;
        return(t);
      }
      ATerm n_9 (ATerm t)
      {
        t = term_s_36;
        return(t);
      }
      t = Option_3_0(l_9, m_9, n_9, t);
      ;
      LocalPopChoice(q_36);
    }
  else
    {
      t = l_36;
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_9 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm p_9 (ATerm t)
            {
              ATerm c_48 = NULL,d_48 = NULL;
              c_48 = t;
              t = SSL_string_to_int(c_48);
              d_48 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_48);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, c_48);
              return(t);
            }
            ATerm q_9 (ATerm t)
            {
              t = term_z_36;
              return(t);
            }
            t = ArgOption_3_0(o_9, p_9, q_9, t);
            ;
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
            {
              ATerm r_9 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm s_9 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_a_37;
                return(t);
              }
              ATerm t_9 (ATerm t)
              {
                t = term_b_37;
                return(t);
              }
              t = Option_3_0(r_9, s_9, t_9, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm u_9 (ATerm t)
  {
    ATerm f_48 = NULL;
    f_48 = t;
    if(match_string(t, "-o"))
      {
        t = f_48;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_48;
      }
    return(t);
  }
  ATerm v_9 (ATerm t)
  {
    ATerm g_48 = NULL;
    g_48 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_48);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_48);
    return(t);
  }
  ATerm w_9 (ATerm t)
  {
    t = term_t_37;
    return(t);
  }
  t = ArgOption_3_0(u_9, v_9, w_9, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm x_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm y_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_37;
          return(t);
        }
        ATerm z_9 (ATerm t)
        {
          t = term_c_38;
          return(t);
        }
        t = Option_3_0(x_9, y_9, z_9, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL;
  j_48 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = j_48;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm r_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_48 = ATgetFirst((ATermList) t);
          l_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_48 = ATgetFirst((ATermList) t);
          n_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_48;
      t = i_0(t);
      t = m_48;
      t = k_0(t);
      r_48 = t;
      t = (ATerm) ATinsert(CheckATermList(n_48), r_48);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    ATerm t_48 = NULL;
    t_48 = t;
    if(match_string(t, "-i"))
      {
        t = t_48;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_48;
      }
    return(t);
  }
  ATerm b_10 (ATerm t)
  {
    ATerm u_48 = NULL;
    u_48 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_48);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_48);
    return(t);
  }
  ATerm c_10 (ATerm t)
  {
    t = term_f_38;
    return(t);
  }
  t = ArgOption_3_0(a_10, b_10, c_10, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_38);
    }
  else
    {
      t = l_38;
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_25;
  t = whoami_0_0(t);
  v_48 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_48));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_38;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_115(t);
      ;
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
      {
        ATerm y_48 = NULL,z_48 = NULL,c_49 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_48 = ATgetFirst((ATermList) t);
            z_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_48;
        t = foldr_2_0(e_115, f_115, t);
        c_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_48, c_49);
        t = f_115(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL;
  d_49 = t;
  t = SSL_explode_term(d_49);
  if(match_cons(t, sym__2))
    {
      ATerm s_38 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_49;
  t = foldr_2_0(c_113, d_113, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_49 = NULL;
  t = times_0_0(t);
  {
    ATerm d_10 (ATerm t)
    {
      t = term_f_29;
      return(t);
    }
    ATerm e_10 (ATerm t)
    {
      ATerm g_49 = NULL,h_49 = NULL;
      if(match_cons(t, sym__2))
        {
          g_49 = ATgetArgument(t, 0);
          h_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_38 = t;
        int w_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(g_49, h_49);
            ;
            LocalPopChoice(w_38);
          }
        else
          {
            t = t_38;
            t = SSL_addr(g_49, h_49);
          }
      }
      return(t);
    }
    t = crush_2_0(d_10, e_10, t);
    f_49 = t;
    t = SSL_TicksToSeconds(f_49);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  if(match_cons(t, sym__2))
    {
      r_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_49;
        if((r_49 != t))
          {
            _fail(t);
          }
        t = q_49;
        ;
        LocalPopChoice(a_39);
      }
    else
      {
        t = z_38;
        t = q_49;
        {
          ATerm b_39 = t;
          int e_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_49, s_49);
              ;
              LocalPopChoice(e_39);
            }
          else
            {
              t = b_39;
              t = SSL_gtr(r_49, s_49);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_49, s_49);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_127 (ATerm), ATerm t)
{
  ATerm f_10 (ATerm t)
  {
    ATerm v_49 = NULL,w_49 = NULL;
    v_49 = t;
    t = term_u_31;
    t = get_config_0_0(t);
    w_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_49, term_k_24);
    t = geq_0_0(t);
    t = v_49;
    t = k_127(t);
    return(t);
  }
  t = try_1_0(f_10, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm g_10 (ATerm t)
  {
    ATerm y_49 = NULL,z_49 = NULL;
    t = run_time_0_0(t);
    y_49 = t;
    t = term_m_25;
    t = whoami_0_0(t);
    z_49 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_49), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_49));
    t = (ATerm) ATmakeAppl(sym__2, term_f_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_39), y_49), term_g_39), z_49));
    return(t);
  }
  t = if_verbose1_1_0(g_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm h_130 (ATerm), ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      {
        ATerm h_10 (ATerm t)
        {
          ATerm v_39 = t;
          int w_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(w_39);
            }
          else
            {
              t = v_39;
              {
                ATerm x_39 = t;
                int y_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(y_39);
                  }
                else
                  {
                    t = x_39;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(h_10, t);
      }
    }
  t = h_130(t);
  return(t);
}
ATerm map_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  ATerm b_50 (ATerm t)
  {
    ATerm z_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_40);
      }
    else
      {
        t = z_39;
        t = Cons_2_0(p_110, b_50, t);
      }
    return(t);
  }
  t = b_50(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_50 = ATgetFirst((ATermList) t);
      f_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_50 = NULL,p_50 = NULL;
        t = f_50;
        t = g_0(t);
        o_50 = t;
        t = e_50;
        t = e_0(t);
        p_50 = t;
        t = f_50;
        {
          ATerm i_10 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_50), p_50);
            return(t);
          }
          t = reverse_acc_2_0(e_0, i_10, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_25;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm j_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, j_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm q_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
  x_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_50);
  q_50 = t;
  t = v_50;
  t = v_101(t);
  w_50 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, w_50), q_50);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_40);
    }
  else
    {
      t = b_40;
      {
        ATerm k_10 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(k_10, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_e_40;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm l_10 (ATerm t)
    {
      ATerm a_51 = NULL;
      a_51 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, a_51), term_f_40);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(l_10, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
  g_51 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_51);
  d_51 = t;
  t = e_51;
  t = w_101(t);
  f_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, f_51), d_51);
  return(t);
}
ATerm fetch_1_0 (ATerm a_111 (ATerm), ATerm t)
{
  ATerm j_51 (ATerm t)
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_111, _id, t);
        ;
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = Cons_2_0(_id, j_51, t);
      }
    return(t);
  }
  t = j_51(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm h_131 (ATerm), ATerm t)
{
  t = fetch_1_0(h_131, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL;
  l_51 = t;
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_40 = ATgetFirst((ATermList) t);
                ATerm n_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_51;
          }
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = (ATerm) ATinsert(ATempty, l_51);
      }
    m_51 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_51);
    t = l_51;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_38;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_107(t);
      ;
      LocalPopChoice(p_40);
    }
  else
    {
      t = o_40;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_10 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm n_10 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_v_40;
        return(t);
      }
      ATerm o_10 (ATerm t)
      {
        t = term_y_40;
        return(t);
      }
      t = Option_3_0(m_10, n_10, o_10, t);
      ;
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      {
        ATerm p_10 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_10 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_40;
          return(t);
        }
        ATerm r_10 (ATerm t)
        {
          t = term_b_41;
          return(t);
        }
        t = Option_3_0(p_10, q_10, r_10, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  if(match_cons(t, sym__3))
    {
      s_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
      u_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
  {
    ATerm d_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_41 = ATgetArgument(t, 0);
            ATerm j_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_51, t_51);
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = d_41;
        t = (ATerm) ATempty;
      }
    v_51 = t;
    t = SSL_table_put(s_51, t_51, (ATerm) ATinsert(CheckATermList(v_51), u_51));
    t = (ATerm) ATmakeAppl(sym__3, s_51, t_51, u_51);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm m_132 (ATerm), ATerm t)
{
  ATerm a_52 = NULL;
  t = term_m_25;
  t = m_132(t);
  a_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_41, term_e_42, a_52);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
  c_52 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_52;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm h_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_52 = ATgetFirst((ATermList) t);
          e_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_52;
      t = a_0(t);
      t = term_m_25;
      t = c_0(t);
      h_52 = t;
      t = (ATerm) ATinsert(CheckATermList(e_52), h_52);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm s_10 (ATerm t)
  {
    ATerm j_52 = NULL;
    j_52 = t;
    if(match_string(t, "--help"))
      {
        t = j_52;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = j_52;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = j_52;
          }
      }
    return(t);
  }
  ATerm u_10 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_f_42;
    return(t);
  }
  ATerm v_10 (ATerm t)
  {
    t = term_m_42;
    return(t);
  }
  t = Option_3_0(s_10, u_10, v_10, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_132 (ATerm), ATerm t)
{
  ATerm n_52 = NULL;
  n_52 = t;
  {
    ATerm w_10 (ATerm t)
    {
      t = term_n_42;
      t = k_132(t);
      return(t);
    }
    t = try_1_0(w_10, t);
    t = n_52;
    {
      ATerm x_10 (ATerm t)
      {
        ATerm o_52 = NULL;
        o_52 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_52);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_52);
        return(t);
      }
      ATerm y_10 (ATerm t)
      {
        ATerm s_42 = t;
        int t_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_43 = t;
            int b_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_43);
              }
            else
              {
                t = a_43;
                t = k_132(t);
                t = Cons_2_0(_id, y_10, t);
              }
            ;
            LocalPopChoice(t_42);
          }
        else
          {
            t = s_42;
            {
              ATerm q_52 = NULL,r_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_52 = ATgetFirst((ATermList) t);
                  r_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_52), (ATerm) ATmakeAppl(sym_Undefined_1, q_52));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_10, y_10, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm j_132 (ATerm), ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  x_52 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_52;
  {
    ATerm a_11 (ATerm t)
    {
      ATerm e_43 = t;
      int f_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_132(t);
          ;
          LocalPopChoice(f_43);
        }
      else
        {
          t = e_43;
          {
            ATerm i_43 = t;
            int j_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(j_43);
              }
            else
              {
                t = i_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_11, t);
    {
      ATerm b_11 (ATerm t)
      {
        ATerm k_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_53 = NULL;
            e_53 = t;
            {
              ATerm u_43 = t;
              int v_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_53;
                  {
                    ATerm w_43 = t;
                    int x_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_u_39;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(x_43);
                      }
                    else
                      {
                        t = w_43;
                        {
                          ATerm c_11 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(c_11, t);
                        }
                      }
                    t = e_53;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(v_43);
                }
              else
                {
                  t = u_43;
                  t = term_t_40;
                  t = get_config_0_0(t);
                  t = e_53;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(t_43);
          }
        else
          {
            t = k_43;
            {
              ATerm d_11 (ATerm t)
              {
                ATerm e_11 (ATerm t)
                {
                  y_52 = t;
                  return(t);
                }
                t = Undefined_1_0(e_11, t);
                return(t);
              }
              t = option_defined_1_0(d_11, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_52)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_f_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_52)), term_z_43));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(b_11, t);
      z_52 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_52;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t)
{
  ATerm z_10 = NULL;
  t = parse_options_1_0(j_130, t);
  z_10 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_10);
  t = z_10;
  t = l_130(t);
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_130, t);
        ;
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        {
          ATerm c_44 = t;
          int d_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_130(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_44);
            }
          else
            {
              t = c_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm t)
{
  ATerm f_11 (ATerm t)
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_129(t);
        ;
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm g_11 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(y_129, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_11, a_130, b_130, g_11, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t)
{
  ATerm h_11 (ATerm t)
  {
    ATerm i_11 (ATerm t)
    {
      ATerm h_53 = NULL,i_53 = NULL;
      h_53 = t;
      t = term_p_38;
      t = get_config_0_0(t);
      i_53 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, i_53));
      t = h_53;
      return(t);
    }
    t = if_verbose2_1_0(i_11, t);
    return(t);
  }
  t = iowrap_4_0(s_129, t_129, u_129, h_11, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm t)
{
  t = iowrap_3_0(q_129, r_129, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm n_129 (ATerm), ATerm t)
{
  ATerm j_11 (ATerm t)
  {
    t = _2_0(_id, n_129, t);
    return(t);
  }
  t = iowrap_2_0(j_11, _fail, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    ATerm m_11 (ATerm t)
    {
      ATerm n_11 (ATerm t)
      {
        ATerm o_11 (ATerm t)
        {
          t = Strategies_1_0(needed_defs_0_0, t);
          return(t);
        }
        ATerm p_11 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(o_11, p_11, t);
        return(t);
      }
      t = Cons_2_0(_id, n_11, t);
      return(t);
    }
    t = Specification_1_0(m_11, t);
    t = needed_constructors_0_0(t);
    return(t);
  }
  t = iowrap_1_0(l_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = extract_0_0(t);
  return(t);
}
