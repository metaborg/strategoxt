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
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
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
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_q_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_d_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_t_37;
ATerm term_e_37;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_m_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_f_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_v_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_u_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_g_16;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_c_13;
void init_constant_terms (void)
{
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Sort_2, term_q_25, (ATerm) ATempty);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("overloading external definition: ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_a_19);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_19);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_x_25);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_o_35, term_p_35);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_t_37, term_x_25);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_x_25);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_x_25);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym__2, term_f_33, term_x_25);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm h_8 (ATerm z_21, ATerm b_22, ATerm c_22, ATerm);
ATerm a_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm sboundin_3_0 (ATerm e_89 (ATerm), ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm o_8 (ATerm s_32, ATerm r_32, ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm k_1 (ATerm);
ATerm free_vars2_4_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm v_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_100 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm u_8 (ATerm p_30, ATerm q_30, ATerm r_30, ATerm);
ATerm a_40 (ATerm l_39, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm h_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm d_91 (ATerm), ATerm);
ATerm y_8 (ATerm c_26, ATerm d_26, ATerm e_26, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm z_89 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm tuple_unzip_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm z_8 (ATerm o_51, ATerm p_51, ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm copy_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm a_9 (ATerm v_20, ATerm w_20, ATerm);
ATerm last_0_0 (ATerm);
ATerm o_56 (ATerm s_53, ATerm t_53, ATerm u_53, ATerm v_53, ATerm);
ATerm s_56 (ATerm f_55, ATerm g_55, ATerm l_55, ATerm m_55, ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm l_6 (ATerm);
ATerm o_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm JoinDefsExt_0_0 (ATerm);
ATerm h_59 (ATerm e_57, ATerm f_57, ATerm g_57, ATerm h_57, ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_96 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm w_61 (ATerm o_61, ATerm);
ATerm conc_0_0 (ATerm);
ATerm g_9 (ATerm v_103 (ATerm), ATerm a_48, ATerm z_47, ATerm);
ATerm genzip_4_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm l_9 (ATerm e_667, ATerm j_667, ATerm k_67, ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm f_67 (ATerm h_65, ATerm k_65, ATerm l_65, ATerm);
ATerm u_7 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm n_9 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm h_68, ATerm e_68, ATerm m_68, ATerm i_68, ATerm f_68, ATerm g_68, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm f_8 (ATerm);
ATerm i_8 (ATerm);
ATerm m_25 (ATerm v_24, ATerm w_24, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm v_8 (ATerm);
ATerm x_8 (ATerm);
ATerm RegisterExtSDefInl_0_0 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm m_9 (ATerm);
ATerm p_9 (ATerm);
ATerm r_9 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm RegisterExtSDef_0_0 (ATerm);
ATerm q_9 (ATerm i_119 (ATerm), ATerm f_69, ATerm d_69, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm s_9 (ATerm t_64, ATerm u_64, ATerm);
ATerm n_76 (ATerm b_76, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm x_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm DefinitionName_0_0 (ATerm);
ATerm t_9 (ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm g_48, ATerm f_48, ATerm);
ATerm u_9 (ATerm a_104 (ATerm), ATerm c_48, ATerm b_48, ATerm);
ATerm foldr_3_0 (ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm);
ATerm y_11 (ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm);
ATerm v_9 (ATerm t_54, ATerm u_54, ATerm);
ATerm w_9 (ATerm h_58, ATerm i_58, ATerm);
ATerm y_9 (ATerm p_111 (ATerm), ATerm y_524, ATerm l_58, ATerm);
ATerm x_9 (ATerm d_58, ATerm e_58, ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm output_1_0 (ATerm y_115 (ATerm), ATerm);
ATerm c_81 (ATerm w_80, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm z_9 (ATerm j_58, ATerm);
ATerm a_10 (ATerm v_54, ATerm w_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_82 (ATerm m_81, ATerm);
ATerm o_82 (ATerm q_81, ATerm r_81, ATerm s_81, ATerm);
ATerm p_82 (ATerm a_82, ATerm b_82, ATerm c_82, ATerm);
ATerm b_10 (ATerm);
ATerm f_12 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm z_115 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm g_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_10 (ATerm k_59, ATerm l_59, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm b_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_10 (ATerm i_64, ATerm j_64, ATerm h_64, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_10 (ATerm i_51, ATerm j_51, ATerm);
ATerm foldr_2_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_112 (ATerm), ATerm);
ATerm k_13 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_13 (ATerm);
ATerm need_help_1_0 (ATerm p_115 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm o_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_96 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_10 (ATerm r_47, ATerm s_47, ATerm);
ATerm debug_1_0 (ATerm n_111 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_96 (ATerm), ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_10 (ATerm z_65, ATerm a_66, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm j_14 (ATerm);
ATerm l_14 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_117 (ATerm), ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm parse_options_1_0 (ATerm r_117 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm h_8 (ATerm z_21, ATerm b_22, ATerm c_22, ATerm t)
{
  ATerm p_0 = NULL,t_0 = NULL;
  t = term_c_13;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_15), c_22), term_k_15), b_22), term_i_15), z_21), term_f_15);
  t_0 = t;
  t = SSL_printnl(p_0, t_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_15), c_22), term_k_15), b_22), term_i_15), z_21), term_f_15);
  return(t);
}
ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      if(((ATgetType(n_15) != AT_INT) || (ATgetInt((ATermInt) n_15) != 0)))
        _fail(t);
      {
        ATerm o_15 = ATgetArgument(t, 1);
        if(((ATgetType(o_15) != AT_INT) || (ATgetInt((ATermInt) o_15) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_1;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = z_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm p_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL;
        t = w_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_15 = ATgetFirst((ATermList) t);
            ATerm c_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
              {
                ATerm d_16 = ATgetFirst((ATermList) c_16);
                ATerm e_16 = (ATerm) ATgetNext((ATermList) c_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm f_16 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_16;
            }
          t = term_c_13;
          v_0 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_g_16);
          w_0 = t;
          t = SSL_printnl(v_0, w_0);
          t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_g_16);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = p_15;
        {
          ATerm c_1 = NULL,d_1 = NULL;
          t = w_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_16 = ATgetFirst((ATermList) t);
              if(match_cons(h_16, sym__2))
                {
                  c_1 = ATgetArgument(h_16, 0);
                  d_1 = ATgetArgument(h_16, 1);
                }
              else
                _fail(t);
              {
                ATerm j_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(j_16) != AT_LIST) || !(ATisEmpty(j_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_1, (ATerm) ATmakeAppl(sym__2, c_1, d_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, w_1, (ATerm) ATmakeAppl(sym__2, c_1, d_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm e_89 (ATerm), ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
      {
        ATerm t_1 = NULL,d_2 = NULL,e_2 = NULL,f_1 = NULL;
        t = SSLgetAnnotations(k_4);
        t_1 = t;
        t = l_4;
        t = e_89(t);
        d_2 = t;
        t = m_4;
        t = e_89(t);
        e_2 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, d_2, e_2);
        f_1 = t;
        t = SSLsetAnnotations(f_1, t_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_4 = ATgetArgument(t, 0);
          m_4 = ATgetArgument(t, 1);
          i_4 = ATgetArgument(t, 2);
          {
            ATerm z_3 = NULL,t_4 = NULL,u_4 = NULL,c_5 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(k_4);
            z_3 = t;
            t = l_4;
            t = g_89(t);
            t_4 = t;
            t = m_4;
            t = g_89(t);
            u_4 = t;
            t = i_4;
            t = e_89(t);
            c_5 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, t_4, u_4, c_5);
            h_1 = t;
            t = SSLsetAnnotations(h_1, z_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_4 = ATgetArgument(t, 0);
              m_4 = ATgetArgument(t, 1);
              i_4 = ATgetArgument(t, 2);
              j_4 = ATgetArgument(t, 3);
              {
                ATerm r_5 = NULL,y_5 = NULL,c_6 = NULL,e_6 = NULL,i_6 = NULL,i_1 = NULL;
                t = SSLgetAnnotations(k_4);
                r_5 = t;
                t = l_4;
                t = g_89(t);
                y_5 = t;
                t = m_4;
                t = g_89(t);
                c_6 = t;
                t = i_4;
                t = g_89(t);
                e_6 = t;
                t = j_4;
                t = e_89(t);
                i_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_5, c_6, e_6, i_6);
                i_1 = t;
                t = SSLsetAnnotations(i_1, r_5);
              }
            }
          else
            {
              ATerm c_7 = NULL,h_7 = NULL,k_7 = NULL,j_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  l_4 = ATgetArgument(t, 0);
                  m_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_4);
              c_7 = t;
              t = l_4;
              t = g_89(t);
              h_7 = t;
              t = m_4;
              t = e_89(t);
              k_7 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, h_7, k_7);
              j_1 = t;
              t = SSLsetAnnotations(j_1, c_7);
            }
        }
    }
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm w_4 = NULL;
  ATerm p_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_4 = ATgetArgument(t, 0);
          {
            ATerm c_18 = ATgetArgument(t, 1);
          }
          {
            ATerm d_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_18);
      t = w_4;
    }
  else
    {
      t = p_17;
      if(match_cons(t, sym_SDefT_4))
        {
          w_4 = ATgetArgument(t, 0);
          {
            ATerm e_18 = ATgetArgument(t, 1);
          }
          {
            ATerm f_18 = ATgetArgument(t, 2);
          }
          {
            ATerm i_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = w_4;
    }
  return(t);
}
ATerm o_8 (ATerm s_32, ATerm r_32, ATerm t)
{
  t = s_32;
  t = map_1_0(r_0, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL;
  if(match_cons(t, sym__2))
    {
      j_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(a_1, j_8, k_8, t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      if((w_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(g_1, j_9, k_9, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm o_9 = NULL;
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      if((o_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      p_6 = ATgetArgument(t, 0);
      if((p_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm v_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_100 (ATerm), ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm x_5 = NULL,z_5 = NULL,a_6 = NULL;
    a_6 = t;
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_100(t);
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          t = (ATerm) ATempty;
        }
      x_5 = t;
      t = a_6;
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL,d_8 = NULL,e_8 = NULL;
            t = u_100(t);
            b_6 = t;
            t = a_6;
            {
              ATerm u_0 (ATerm t)
              {
                ATerm x_7 = NULL;
                t = q_6(t);
                x_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_7, b_6);
                t = g_9(w_100, x_7, b_6, t);
                return(t);
              }
              t = v_100(u_0, q_6, x_0, t);
              e_8 = t;
              t = SSL_explode_term(e_8);
              if(match_cons(t, sym__2))
                {
                  ATerm o_18 = ATgetArgument(t, 0);
                  d_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_8;
              t = foldr_3_0(y_0, z_0, _id, t);
            }
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            {
              ATerm b_9 = NULL;
              t = SSL_explode_term(a_6);
              if(match_cons(t, sym__2))
                {
                  ATerm s_18 = ATgetArgument(t, 0);
                  b_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_9;
              t = foldr_3_0(b_1, e_1, q_6, t);
            }
          }
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_5, z_5);
        t = u_9(k_1, x_5, z_5, t);
      }
    }
    return(t);
  }
  t = q_6(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,f_7 = NULL,g_7 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_18 = ATgetArgument(t, 0);
      if(match_cons(t_18, sym_SVar_1))
        {
          z_6 = ATgetArgument(t_18, 0);
        }
      else
        _fail(t);
      a_7 = ATgetArgument(t, 1);
      b_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_7;
  t = foldr_3_0(o_1, p_1, s_1, t);
  f_7 = t;
  t = b_7;
  t = foldr_3_0(u_1, c_2, f_2, t);
  g_7 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_6, (ATerm) ATmakeAppl(sym__2, f_7, g_7)));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,r_7 = NULL,s_7 = NULL,v_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
      t = n_7;
      t = o_8(o_7, r_7, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_7 = ATgetArgument(t, 0);
          r_7 = ATgetArgument(t, 1);
          s_7 = ATgetArgument(t, 2);
          t = r_7;
          t = map_1_0(g_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              o_7 = ATgetArgument(t, 0);
              r_7 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, o_7);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  o_7 = ATgetArgument(t, 0);
                  r_7 = ATgetArgument(t, 1);
                  s_7 = ATgetArgument(t, 2);
                  v_7 = ATgetArgument(t, 3);
                  t = r_7;
                  t = map_1_0(j_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_7 = ATgetArgument(t, 0);
                      r_7 = ATgetArgument(t, 1);
                      s_7 = ATgetArgument(t, 2);
                      v_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_7;
                  t = map_1_0(k_2, t);
                }
            }
        }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(match_cons(u_18, sym__2))
        {
          o_11 = ATgetArgument(u_18, 0);
          {
            ATerm v_18 = ATgetArgument(u_18, 1);
          }
        }
      else
        _fail(t);
      if((o_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      i_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(i_7, j_7, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(l_7, m_7, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm r_8 = NULL;
  ATerm e_19 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_8 = ATgetArgument(t, 0);
          {
            ATerm e_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_20);
      t = r_8;
    }
  else
    {
      t = e_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_8;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm i_10 = NULL;
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_10 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_20);
      t = i_10;
    }
  else
    {
      t = f_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_10;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm l_11 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_11 = ATgetArgument(t, 0);
          {
            ATerm k_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = l_11;
    }
  else
    {
      t = i_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_11;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(l_1, m_1, sboundin_3_0, n_1, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  h_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      i_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
      {
        ATerm o_20 = NULL,s_20 = NULL,t_20 = NULL,x_20 = NULL;
        t = h_19;
        t = new_0_0(t);
        o_20 = t;
        t = new_0_0(t);
        s_20 = t;
        t = new_0_0(t);
        t_20 = t;
        t = new_0_0(t);
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_20), t_20), s_20), o_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, o_20), (ATerm) ATmakeAppl(sym_Var_1, t_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, i_19, (ATerm)ATmakeAppl(sym_Var_1, o_20), (ATerm) ATmakeAppl(sym_Var_1, s_20)), (ATerm) ATmakeAppl(sym_BAM_3, g_19, (ATerm)ATmakeAppl(sym_Var_1, t_20), (ATerm) ATmakeAppl(sym_Var_1, x_20)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_20)), (ATerm) ATmakeAppl(sym_Var_1, s_20))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_19 = ATgetArgument(t, 0);
          {
            ATerm c_21 = NULL,f_21 = NULL,m_21 = NULL,n_21 = NULL;
            t = h_19;
            t = new_0_0(t);
            m_21 = t;
            t = i_19;
            {
              ATerm l_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      c_21 = ATgetArgument(t, 0);
                    if(((f_21 != NULL) && (f_21 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      f_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_21);
                return(t);
              }
              t = oncetd_1_0(l_2, t);
              n_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_21)), not_null(c_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_21)), (ATerm) ATmakeAppl(sym_Build_1, n_21))));
            }
          }
        }
      else
        {
          ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,w_21 = NULL,y_21 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              i_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_19;
          t = new_0_0(t);
          s_21 = t;
          t = new_0_0(t);
          w_21 = t;
          t = i_19;
          {
            ATerm m_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((q_21 != NULL) && (q_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_21 = ATgetArgument(t, 0);
                  if(((r_21 != NULL) && (r_21 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    r_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, s_21);
              return(t);
            }
            t = oncetd_1_0(m_2, t);
            y_21 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_21), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_21)), (ATerm) ATmakeAppl(sym_PrimT_3, term_n_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_21))))), (ATerm)ATmakeAppl(sym_Var_1, s_21), (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_21)), not_null(q_21)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm h_22 = NULL,k_22 = NULL;
  h_22 = t;
  if(match_cons(t, sym_Match_1))
    {
      k_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_22 = NULL,v_22 = NULL,g_23 = NULL,i_23 = NULL;
        t = h_22;
        t = new_0_0(t);
        g_23 = t;
        t = k_22;
        {
          ATerm n_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((q_22 != NULL) && (q_22 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_22 = ATgetArgument(t, 0);
                if(((v_22 != NULL) && (v_22 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  v_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_23), q_22);
            return(t);
          }
          t = pat_td_1_0(n_2, t);
          i_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_23), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_23))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_22))))));
        }
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_23 = NULL,s_23 = NULL,u_23 = NULL;
              t = h_22;
              t = new_0_0(t);
              s_23 = t;
              t = k_22;
              {
                ATerm o_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_23 != NULL) && (r_23 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_23);
                  return(t);
                }
                t = pat_td_1_0(o_2, t);
                u_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_23)), not_null(r_23))));
              }
              ;
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              {
                ATerm w_23 = NULL,a_24 = NULL,d_24 = NULL,j_24 = NULL;
                t = h_22;
                t = new_0_0(t);
                d_24 = t;
                t = k_22;
                {
                  ATerm p_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((a_24 != NULL) && (a_24 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          a_24 = ATgetArgument(t, 0);
                        if(((w_23 != NULL) && (w_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_24);
                    return(t);
                  }
                  t = pat_td_1_0(p_2, t);
                  j_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, d_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_23)), not_null(a_24)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_88(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
        h_33 = t;
        if(match_cons(t, sym_Op_2))
          {
            i_33 = ATgetArgument(t, 0);
            j_33 = ATgetArgument(t, 1);
            {
              ATerm y_10 = NULL,b_11 = NULL,q_1 = NULL;
              t = SSLgetAnnotations(h_33);
              y_10 = t;
              t = j_33;
              {
                ATerm q_2 (ATerm t)
                {
                  t = pat_td_1_0(f_88, t);
                  return(t);
                }
                t = fetch_1_0(q_2, t);
                b_11 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, i_33, b_11);
                q_1 = t;
                t = SSLsetAnnotations(q_1, y_10);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                i_33 = ATgetArgument(t, 0);
                j_33 = ATgetArgument(t, 1);
                {
                  ATerm d_21 = t;
                  int e_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_11 = NULL,z_11 = NULL,r_1 = NULL;
                      t = SSLgetAnnotations(h_33);
                      v_11 = t;
                      t = j_33;
                      t = pat_td_1_0(f_88, t);
                      z_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, i_33, z_11);
                      r_1 = t;
                      t = SSLsetAnnotations(r_1, v_11);
                      ;
                      LocalPopChoice(e_21);
                    }
                  else
                    {
                      t = d_21;
                      {
                        ATerm h_12 = NULL,l_12 = NULL,a_2 = NULL;
                        t = SSLgetAnnotations(h_33);
                        h_12 = t;
                        t = i_33;
                        t = pat_td_1_0(f_88, t);
                        l_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, l_12, j_33);
                        a_2 = t;
                        t = SSLsetAnnotations(a_2, h_12);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    i_33 = ATgetArgument(t, 0);
                    j_33 = ATgetArgument(t, 1);
                    g_33 = ATgetArgument(t, 2);
                    {
                      ATerm m_13 = NULL,y_13 = NULL,b_2 = NULL;
                      t = SSLgetAnnotations(h_33);
                      m_13 = t;
                      t = g_33;
                      {
                        ATerm t_2 (ATerm t)
                        {
                          t = pat_td_1_0(f_88, t);
                          return(t);
                        }
                        t = fetch_1_0(t_2, t);
                        y_13 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, i_33, j_33, y_13);
                        b_2 = t;
                        t = SSLsetAnnotations(b_2, m_13);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        i_33 = ATgetArgument(t, 0);
                        j_33 = ATgetArgument(t, 1);
                        g_33 = ATgetArgument(t, 2);
                        {
                          ATerm t_14 = NULL,x_14 = NULL,h_2 = NULL;
                          t = SSLgetAnnotations(h_33);
                          t_14 = t;
                          t = g_33;
                          {
                            ATerm u_2 (ATerm t)
                            {
                              t = pat_td_1_0(f_88, t);
                              return(t);
                            }
                            t = fetch_1_0(u_2, t);
                            x_14 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, i_33, j_33, x_14);
                            h_2 = t;
                            t = SSLsetAnnotations(h_2, t_14);
                          }
                        }
                      }
                    else
                      {
                        ATerm g_15 = NULL,l_15 = NULL,i_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            i_33 = ATgetArgument(t, 0);
                            j_33 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_33);
                        g_15 = t;
                        t = j_33;
                        t = pat_td_1_0(f_88, t);
                        l_15 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, i_33, l_15);
                        i_2 = t;
                        t = SSLsetAnnotations(i_2, g_15);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm f_34 = NULL,j_34 = NULL;
  f_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL,l_34 = NULL,n_34 = NULL,r_34 = NULL;
        t = f_34;
        t = new_0_0(t);
        n_34 = t;
        t = j_34;
        {
          ATerm w_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_34 != NULL) && (k_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_34 = ATgetArgument(t, 0);
                if(((l_34 != NULL) && (l_34 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, n_34);
            return(t);
          }
          t = pat_td_1_0(w_2, t);
          r_34 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_34)), not_null(k_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_34)))), (ATerm) ATmakeAppl(sym_Build_1, r_34)));
        }
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_34 = NULL,w_34 = NULL,b_35 = NULL;
              t = f_34;
              t = new_0_0(t);
              w_34 = t;
              t = j_34;
              {
                ATerm b_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((u_34 != NULL) && (u_34 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, w_34);
                  return(t);
                }
                t = pat_td_1_0(b_3, t);
                b_35 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_34)))), (ATerm) ATmakeAppl(sym_Build_1, b_35)));
              }
              ;
              LocalPopChoice(l_21);
            }
          else
            {
              t = k_21;
              {
                ATerm c_35 = NULL,g_35 = NULL,i_35 = NULL,l_35 = NULL;
                t = f_34;
                t = new_0_0(t);
                i_35 = t;
                t = j_34;
                {
                  ATerm c_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((c_35 != NULL) && (c_35 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          c_35 = ATgetArgument(t, 0);
                        if(((g_35 != NULL) && (g_35 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_35);
                    return(t);
                  }
                  t = pat_td_1_0(c_3, t);
                  l_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_35), not_null(g_35), (ATerm) ATmakeAppl(sym_Var_1, i_35))), (ATerm) ATmakeAppl(sym_Build_1, l_35)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,z_35 = NULL,a_36 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_35 = ATgetArgument(t, 0);
      a_36 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_35, a_36);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_35 = ATgetArgument(t, 0);
          t = z_35;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_35 = ATgetFirst((ATermList) t);
              w_35 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_35, (ATerm) ATmakeAppl(sym_LChoices_1, w_35));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_o_21;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_35 = ATgetArgument(t, 0);
              t = z_35;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_35 = ATgetFirst((ATermList) t);
                  w_35 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_35, (ATerm) ATmakeAppl(sym_Choices_1, w_35));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_o_21;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_35 = ATgetArgument(t, 0);
                  t = z_35;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_35 = ATgetFirst((ATermList) t);
                      w_35 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_35, (ATerm) ATmakeAppl(sym_Seqs_1, w_35));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_p_21;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_35 = ATgetArgument(t, 0);
                      a_36 = ATgetArgument(t, 1);
                      x_35 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_36, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, x_35), z_35)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          z_35 = ATgetArgument(t, 0);
                          a_36 = ATgetArgument(t, 1);
                          x_35 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_35)), z_35), (ATerm) ATmakeAppl(sym_Build_1, a_36)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              z_35 = ATgetArgument(t, 0);
                              a_36 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_35, (ATerm) ATmakeAppl(sym_Match_1, a_36));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  z_35 = ATgetArgument(t, 0);
                                  a_36 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_35), a_36);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      z_35 = ATgetArgument(t, 0);
                                      a_36 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_36), z_35);
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
ATerm d_3 (ATerm t)
{
  ATerm t_21 = t;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,r_2 = NULL;
      z_37 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_37);
      x_37 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_37);
      r_2 = t;
      t = SSLsetAnnotations(r_2, x_37);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_21;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_21;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm c_38 = NULL,e_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_38 = ATgetFirst((ATermList) t);
      e_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_38, e_38);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,l_38 = NULL,n_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      if(match_cons(v_21, sym__2))
        {
          f_38 = ATgetArgument(v_21, 0);
          g_38 = ATgetArgument(v_21, 1);
        }
      else
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(match_cons(x_21, sym__2))
          {
            l_38 = ATgetArgument(x_21, 0);
            n_38 = ATgetArgument(x_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_38), f_38), (ATerm) ATinsert(CheckATermList(n_38), g_38));
  return(t);
}
ATerm i_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_21;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_38 = ATgetFirst((ATermList) t);
      u_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_38, u_38);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,g_39 = NULL,h_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      if(match_cons(a_22, sym__2))
        {
          v_38 = ATgetArgument(a_22, 0);
          w_38 = ATgetArgument(a_22, 1);
        }
      else
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(match_cons(d_22, sym__2))
          {
            g_39 = ATgetArgument(d_22, 0);
            h_39 = ATgetArgument(d_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_39), v_38), (ATerm) ATinsert(CheckATermList(h_39), w_38));
  return(t);
}
ATerm u_8 (ATerm p_30, ATerm q_30, ATerm r_30, ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,s_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,s_2 = NULL;
  t = r_30;
  t = fetch_1_0(d_3, t);
  t = r_30;
  t = genzip_4_0(e_3, f_3, h_3, LiftPrimArg_0_0, t);
  w_37 = t;
  if(match_cons(t, sym__2))
    {
      p_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_37);
  o_37 = t;
  t = p_37;
  t = concat_0_0(t);
  u_37 = t;
  t = s_37;
  t = genzip_4_0(i_3, l_3, m_3, _id, t);
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
  s_2 = t;
  t = SSLsetAnnotations(s_2, o_37);
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      {
        ATerm e_22 = ATgetArgument(t, 1);
        if(match_cons(e_22, sym__2))
          {
            m_37 = ATgetArgument(e_22, 0);
            n_37 = ATgetArgument(e_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, l_37, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_37), (ATerm) ATmakeAppl(sym_CallT_3, p_30, q_30, n_37)));
  return(t);
}
ATerm a_40 (ATerm l_39, ATerm t)
{
  ATerm n_39 = NULL;
  t = l_39;
  {
    ATerm f_22 = t;
    if((PushChoice() == 0))
      {
        ATerm o_39 = NULL,t_39 = NULL,u_39 = NULL,v_2 = NULL;
        u_39 = t;
        if(match_cons(t, sym_Var_1))
          {
            t_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_39);
        o_39 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, t_39);
        v_2 = t;
        t = SSLsetAnnotations(v_2, o_39);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_22;
      }
    t = new_0_0(t);
    n_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_39), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_39), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_39)))), (ATerm) ATmakeAppl(sym_Var_1, n_39)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  v_39 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_39 = ATgetArgument(t, 0);
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_40(v_39, t);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATmakeAppl(sym_Var_1, w_39)));
          }
      }
    }
  else
    {
      t = a_40(v_39, t);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm l_22 = t;
  if((PushChoice() == 0))
    {
      ATerm y_16 = NULL,c_17 = NULL,d_17 = NULL,x_2 = NULL;
      d_17 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_17);
      y_16 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_17);
      x_2 = t;
      t = SSLsetAnnotations(x_2, y_16);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_22;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_21;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_17 = ATgetFirst((ATermList) t);
      f_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_17, f_17);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if(match_cons(m_22, sym__2))
        {
          g_17 = ATgetArgument(m_22, 0);
          h_17 = ATgetArgument(m_22, 1);
        }
      else
        _fail(t);
      {
        ATerm n_22 = ATgetArgument(t, 1);
        if(match_cons(n_22, sym__2))
          {
            i_17 = ATgetArgument(n_22, 0);
            j_17 = ATgetArgument(n_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_17), g_17), (ATerm) ATinsert(CheckATermList(j_17), h_17));
  return(t);
}
ATerm u_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_21;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_17 = ATgetFirst((ATermList) t);
      l_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,w_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      if(match_cons(o_22, sym__2))
        {
          r_17 = ATgetArgument(o_22, 0);
          s_17 = ATgetArgument(o_22, 1);
        }
      else
        _fail(t);
      {
        ATerm p_22 = ATgetArgument(t, 1);
        if(match_cons(p_22, sym__2))
          {
            w_17 = ATgetArgument(p_22, 0);
            x_17 = ATgetArgument(p_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_17), r_17), (ATerm) ATinsert(CheckATermList(x_17), s_17));
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm r_22 = t;
  if((PushChoice() == 0))
    {
      ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,z_2 = NULL;
      q_19 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_19);
      o_19 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_19);
      z_2 = t;
      t = SSLsetAnnotations(z_2, o_19);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_22;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_21;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_19 = ATgetFirst((ATermList) t);
      s_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_19, s_19);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_22 = ATgetArgument(t, 0);
      if(match_cons(s_22, sym__2))
        {
          t_19 = ATgetArgument(s_22, 0);
          u_19 = ATgetArgument(s_22, 1);
        }
      else
        _fail(t);
      {
        ATerm t_22 = ATgetArgument(t, 1);
        if(match_cons(t_22, sym__2))
          {
            v_19 = ATgetArgument(t_22, 0);
            w_19 = ATgetArgument(t_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_19), t_19), (ATerm) ATinsert(CheckATermList(w_19), u_19));
  return(t);
}
ATerm n_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_21;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_19 = ATgetFirst((ATermList) t);
      y_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_19, y_19);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_22 = ATgetArgument(t, 0);
      if(match_cons(w_22, sym__2))
        {
          z_19 = ATgetArgument(w_22, 0);
          a_20 = ATgetArgument(w_22, 1);
        }
      else
        _fail(t);
      {
        ATerm x_22 = ATgetArgument(t, 1);
        if(match_cons(x_22, sym__2))
          {
            b_20 = ATgetArgument(x_22, 0);
            d_20 = ATgetArgument(x_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_20), z_19), (ATerm) ATinsert(CheckATermList(d_20), a_20));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm v_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      b_45 = ATgetArgument(t, 0);
      c_45 = ATgetArgument(t, 1);
      v_44 = ATgetArgument(t, 2);
      {
        ATerm m_16 = NULL,o_16 = NULL,p_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,y_2 = NULL;
        t = v_44;
        t = fetch_1_0(n_3, t);
        t = v_44;
        t = genzip_4_0(p_3, s_3, t_3, LiftPrimArg_0_0, t);
        w_16 = t;
        if(match_cons(t, sym__2))
          {
            s_16 = ATgetArgument(t, 0);
            t_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_16);
        r_16 = t;
        t = s_16;
        t = concat_0_0(t);
        u_16 = t;
        t = t_16;
        t = genzip_4_0(u_3, w_3, y_3, _id, t);
        v_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_16, v_16);
        y_2 = t;
        t = SSLsetAnnotations(y_2, r_16);
        if(match_cons(t, sym__2))
          {
            m_16 = ATgetArgument(t, 0);
            {
              ATerm z_22 = ATgetArgument(t, 1);
              if(match_cons(z_22, sym__2))
                {
                  o_16 = ATgetArgument(z_22, 0);
                  p_16 = ATgetArgument(z_22, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_16), (ATerm) ATmakeAppl(sym_PrimT_3, b_45, c_45, p_16)));
      }
    }
  else
    {
      ATerm w_18 = NULL,c_19 = NULL,d_19 = NULL,f_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,a_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          b_45 = ATgetArgument(t, 0);
          c_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_45;
      t = fetch_1_0(a_4, t);
      t = c_45;
      t = genzip_4_0(c_4, e_4, h_4, LiftPrimArg_0_0, t);
      n_19 = t;
      if(match_cons(t, sym__2))
        {
          j_19 = ATgetArgument(t, 0);
          k_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_19);
      f_19 = t;
      t = j_19;
      t = concat_0_0(t);
      l_19 = t;
      t = k_19;
      t = genzip_4_0(n_4, p_4, q_4, _id, t);
      m_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_19, m_19);
      a_3 = t;
      t = SSLsetAnnotations(a_3, f_19);
      if(match_cons(t, sym__2))
        {
          w_18 = ATgetArgument(t, 0);
          {
            ATerm a_23 = ATgetArgument(t, 1);
            if(match_cons(a_23, sym__2))
              {
                c_19 = ATgetArgument(a_23, 0);
                d_19 = ATgetArgument(a_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, w_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_19), (ATerm) ATmakeAppl(sym_PrimT_3, b_45, (ATerm)ATempty, d_19)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm k_45 (ATerm t)
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_102(t);
        t = k_45(t);
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
      }
    return(t);
  }
  t = k_45(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,e_46 = NULL,f_46 = NULL;
  f_46 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_45 = ATgetArgument(t, 0);
      z_45 = ATgetArgument(t, 1);
      e_46 = ATgetArgument(t, 2);
      {
        ATerm m_20 = NULL,g_3 = NULL;
        t = SSLgetAnnotations(f_46);
        m_20 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_45, z_45, e_46);
        g_3 = t;
        t = SSLsetAnnotations(g_3, m_20);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = f_46;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm h_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(r_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_23;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  h_47 = t;
  if(match_cons(t, sym_Con_3))
    {
      i_47 = ATgetArgument(t, 0);
      j_47 = ATgetArgument(t, 1);
      g_47 = ATgetArgument(t, 2);
      {
        ATerm i_21 = NULL,j_3 = NULL;
        t = SSLgetAnnotations(h_47);
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, i_47, j_47, g_47);
        j_3 = t;
        t = SSLsetAnnotations(j_3, i_21);
      }
    }
  else
    {
      ATerm g_22 = NULL,k_3 = NULL;
      if(match_cons(t, sym_App_2))
        {
          i_47 = ATgetArgument(t, 0);
          j_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_47);
      g_22 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, i_47, j_47);
      k_3 = t;
      t = SSLsetAnnotations(k_3, g_22);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm j_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(v_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,t_47 = NULL,u_47 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      p_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_47;
  if(match_cons(t, sym_StratRule_3))
    {
      q_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
      u_47 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_47), (ATerm) ATmakeAppl(sym_Where_1, u_47)), q_47));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          q_47 = ATgetArgument(t, 0);
          t_47 = ATgetArgument(t, 1);
          u_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_47;
      t = pureterm_0_0(t);
      t = t_47;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, t_47)), (ATerm) ATmakeAppl(sym_Where_1, u_47)), (ATerm) ATmakeAppl(sym_Match_1, q_47)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm d_91 (ATerm), ATerm t)
{
  ATerm m_48 (ATerm t)
  {
    ATerm k_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_91(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = k_23;
        t = SRTS_one(m_48, t);
      }
    return(t);
  }
  t = m_48(t);
  return(t);
}
ATerm y_8 (ATerm c_26, ATerm d_26, ATerm e_26, ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  t = new_0_0(t);
  r_48 = t;
  t = c_26;
  {
    ATerm x_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm n_23 = ATgetArgument(t, 0);
          if(match_cons(n_23, sym_Var_1))
            {
              if(((q_48 != NULL) && (q_48 != ATgetArgument(n_23, 0))))
                _fail(ATgetArgument(n_23, 0));
              else
                q_48 = ATgetArgument(n_23, 0);
            }
          else
            _fail(t);
          if(((o_48 != NULL) && (o_48 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_48 = ATgetArgument(t, 1);
          {
            ATerm o_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_48);
      return(t);
    }
    t = oncetd_1_0(x_4, t);
    s_48 = t;
    t = d_26;
    {
      ATerm y_4 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm q_23 = ATgetArgument(t, 0);
            if(match_cons(q_23, sym_Var_1))
              {
                if(((q_48 != NULL) && (q_48 != ATgetArgument(q_23, 0))))
                  _fail(ATgetArgument(q_23, 0));
                else
                  q_48 = ATgetArgument(q_23, 0);
              }
            else
              _fail(t);
            if(((p_48 != NULL) && (p_48 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              p_48 = ATgetArgument(t, 1);
            {
              ATerm t_23 = ATgetArgument(t, 2);
              if(match_cons(t_23, sym_CallT_3))
                {
                  if(((n_48 != NULL) && (n_48 != ATgetArgument(t_23, 0))))
                    _fail(ATgetArgument(t_23, 0));
                  else
                    n_48 = ATgetArgument(t_23, 0);
                  {
                    ATerm v_23 = ATgetArgument(t_23, 1);
                    if(((ATgetType(v_23) != AT_LIST) || !(ATisEmpty(v_23))))
                      _fail(t);
                  }
                  {
                    ATerm x_23 = ATgetArgument(t_23, 2);
                    if(((ATgetType(x_23) != AT_LIST) || !(ATisEmpty(x_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, r_48);
        return(t);
      }
      t = oncetd_1_0(y_4, t);
      t_48 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_48), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, s_48, t_48, (ATerm) ATmakeAppl(sym_Seq_2, e_26, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(n_48), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_48), not_null(p_48), term_p_21))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_48)), (ATerm) ATmakeAppl(sym_Var_1, r_48))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = t;
      int c_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
          n_49 = t;
          if(match_cons(t, sym_SRule_1))
            {
              o_49 = ATgetArgument(t, 0);
              t = o_49;
              if(match_cons(t, sym_Rule_3))
                {
                  k_49 = ATgetArgument(t, 0);
                  l_49 = ATgetArgument(t, 1);
                  m_49 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_49;
              t = y_8(k_49, l_49, m_49, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm u_22 = NULL,y_22 = NULL,o_3 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  o_49 = ATgetArgument(t, 0);
                  p_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_49);
              u_22 = t;
              t = p_49;
              t = desugarRule_0_0(t);
              y_22 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, o_49, y_22);
              o_3 = t;
              t = SSLsetAnnotations(o_3, u_22);
            }
          ;
          LocalPopChoice(c_24);
        }
      else
        {
          t = b_24;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    t = topdown_1_0(z_89, t);
    return(t);
  }
  t = z_89(t);
  t = SRTS_all(z_4, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
    }
  t = repeat_1_0(b_5, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm i_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = i_24;
      {
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
            n_50 = t;
            if(match_cons(t, sym_CallT_3))
              {
                o_50 = ATgetArgument(t, 0);
                p_50 = ATgetArgument(t, 1);
                q_50 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_50;
            t = u_8(o_50, p_50, q_50, t);
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
            {
              ATerm n_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = n_24;
                  {
                    ATerm p_24 = t;
                    int q_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(q_24);
                      }
                    else
                      {
                        t = p_24;
                        {
                          ATerm s_24 = t;
                          int t_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_24 = t;
                              int x_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      x_50 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_50;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      y_50 = ATgetArgument(t, 0);
                                      t = y_50;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          y_50 = ATgetArgument(t, 0);
                                          z_50 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, y_50, z_50);
                                    }
                                  ;
                                  LocalPopChoice(x_24);
                                }
                              else
                                {
                                  t = u_24;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(t_24);
                            }
                          else
                            {
                              t = s_24;
                              t = Expl_0_0(t);
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
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(a_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm s_51 = NULL,z_51 = NULL;
  z_51 = t;
  t = SSL_explode_term(z_51);
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_25 = ATgetArgument(t, 1);
        if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
          {
            s_51 = ATgetFirst((ATermList) e_25);
            {
              ATerm h_25 = (ATerm) ATgetNext((ATermList) e_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_51;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  f_23 = t;
  t = SSL_explode_term(f_23);
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_25 = ATgetArgument(t, 1);
        if(((ATgetType(j_25) == AT_LIST) && !(ATisEmpty(j_25))))
          {
            ATerm k_25 = ATgetFirst((ATermList) j_25);
            d_23 = (ATerm) ATgetNext((ATermList) j_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_p_20;
  e_23 = t;
  t = SSL_mkterm(e_23, d_23);
  return(t);
}
ATerm f_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  ATerm a_52 (ATerm t)
  {
    ATerm l_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_51 = NULL,n_51 = NULL,q_51 = NULL;
        k_51 = t;
        t = map_1_0(d_5, t);
        t = b_94(t);
        n_51 = t;
        t = k_51;
        t = map_1_0(e_5, t);
        t = a_52(t);
        q_51 = t;
        t = (ATerm) ATinsert(CheckATermList(q_51), n_51);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = l_25;
        t = map_1_0(f_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = a_52(t);
  h_51 = t;
  t = term_p_20;
  g_51 = t;
  t = SSL_mkterm(g_51, h_51);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm b_52 = NULL;
  b_52 = t;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_52 = NULL,e_52 = NULL,h_52 = NULL;
        t = b_52;
        t = new_0_0(t);
        d_52 = t;
        t = new_0_0(t);
        e_52 = t;
        t = new_0_0(t);
        h_52 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_52), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, b_52), (ATerm) ATmakeAppl(sym_Var_1, e_52))), (ATerm) ATmakeAppl(sym_Var_1, h_52)), (ATerm)ATmakeAppl(sym_VarDec_2, d_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_25), term_s_25)), e_52, (ATerm)ATmakeAppl(sym_Var_1, e_52), h_52, (ATerm) ATmakeAppl(sym_Var_1, h_52));
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        {
          ATerm j_52 = NULL,l_52 = NULL,m_52 = NULL;
          t = b_52;
          t = new_0_0(t);
          j_52 = t;
          t = new_0_0(t);
          l_52 = t;
          t = new_0_0(t);
          m_52 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_52), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, b_52), (ATerm) ATmakeAppl(sym_Var_1, l_52))), (ATerm) ATmakeAppl(sym_Var_1, m_52)), (ATerm)ATmakeAppl(sym_VarDec_2, j_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_25), term_s_25)), l_52, (ATerm)ATmakeAppl(sym_Var_1, l_52), m_52, (ATerm) ATmakeAppl(sym_Var_1, m_52));
        }
      }
  }
  return(t);
}
ATerm z_8 (ATerm o_51, ATerm p_51, ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_51, p_51);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = SSL_subtr(o_51, p_51);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm n_52 = NULL,p_52 = NULL;
  if(match_cons(t, sym__2))
    {
      n_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_52, p_52, (ATerm) ATempty);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm q_52 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if(((ATgetType(v_25) != AT_INT) || (ATgetInt((ATermInt) v_25) != 0)))
        _fail(t);
      {
        ATerm w_25 = ATgetArgument(t, 1);
      }
      q_52 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_52;
  return(t);
}
ATerm copy_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
    if(match_cons(t, sym__3))
      {
        r_52 = ATgetArgument(t, 0);
        s_52 = ATgetArgument(t, 1);
        t_52 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, r_52, term_b_19);
    t = geq_0_0(t);
    t = term_b_19;
    w_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_52, term_b_19);
    t = z_8(r_52, w_52, t);
    u_52 = t;
    t = s_52;
    t = y_106(t);
    v_52 = t;
    t = (ATerm) ATmakeAppl(sym__3, u_52, s_52, (ATerm) ATinsert(CheckATermList(t_52), v_52));
    return(t);
  }
  t = for_3_0(g_5, h_5, j_5, t);
  return(t);
}
ATerm a_9 (ATerm v_20, ATerm w_20, ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  t = new_0_0(t);
  x_52 = t;
  t = new_0_0(t);
  y_52 = t;
  t = new_0_0(t);
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_52), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_20)), (ATerm) ATmakeAppl(sym_Var_1, y_52))), (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_20)), (ATerm) ATmakeAppl(sym_Var_1, z_52)))), (ATerm)ATmakeAppl(sym_VarDec_2, x_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_25), term_s_25)), y_52, (ATerm)ATmakeAppl(sym_Var_1, y_52), z_52, (ATerm) ATmakeAppl(sym_Var_1, z_52));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_53 = ATgetFirst((ATermList) t);
      e_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_53;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_53;
    }
  else
    {
      t = e_53;
      t = last_0_0(t);
    }
  return(t);
}
ATerm o_56 (ATerm s_53, ATerm t_53, ATerm u_53, ATerm v_53, ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  t = term_b_19;
  k_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_53, term_b_19);
  t = c_10(t_53, k_54, t);
  j_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_54, term_x_25);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_54 = ATgetFirst((ATermList) t);
      b_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_54;
  t = last_0_0(t);
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_54), a_54), b_54);
  t = genzip_4_0(k_5, m_5, n_5, o_5, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      c_54 = ATgetArgument(t, 0);
      d_54 = ATgetArgument(t, 1);
      e_54 = ATgetArgument(t, 2);
      f_54 = ATgetArgument(t, 3);
      g_54 = ATgetArgument(t, 4);
      h_54 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_54), e_54), b_54);
  t = concat_0_0(t);
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, s_53, term_y_25), d_54, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(i_54), a_54), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_54)), (ATerm) ATmakeAppl(sym_Op_2, s_53, f_54))), (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_53)), (ATerm) ATmakeAppl(sym_Op_2, s_53, h_54))), (ATerm) ATmakeAppl(sym_Seqs_1, c_54)))));
  return(t);
}
ATerm s_56 (ATerm f_55, ATerm g_55, ATerm l_55, ATerm m_55, ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
  t = m_55;
  t = new_0_0(t);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_55, (ATerm) ATmakeAppl(sym_Var_1, q_55));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
      t_55 = ATgetArgument(t, 2);
      a_56 = ATgetArgument(t, 3);
      b_56 = ATgetArgument(t, 4);
      c_56 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_55, b_56);
  t = conc_0_0(t);
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, f_55, term_z_25), s_55, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(d_56), q_55), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_55)), (ATerm) ATmakeAppl(sym_Op_2, f_55, a_56))), (ATerm)ATmakeAppl(sym_Op_2, f_55, c_56), (ATerm) ATmakeAppl(sym_Seqs_1, r_55)))));
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      ATerm b_26 = ATgetArgument(t, 1);
      if(((ATgetType(b_26) != AT_LIST) || !(ATisEmpty(b_26))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if(((ATgetType(f_26) == AT_LIST) && !(ATisEmpty(f_26))))
        {
          l_54 = ATgetFirst((ATermList) f_26);
          m_54 = (ATerm) ATgetNext((ATermList) f_26);
        }
      else
        _fail(t);
      {
        ATerm g_26 = ATgetArgument(t, 1);
        if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
          {
            n_54 = ATgetFirst((ATermList) g_26);
            o_54 = (ATerm) ATgetNext((ATermList) g_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_54, n_54), (ATerm) ATmakeAppl(sym__2, m_54, o_54));
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm p_54 = NULL,b_55 = NULL;
  if(match_cons(t, sym__2))
    {
      p_54 = ATgetArgument(t, 0);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_55), p_54);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  if(match_cons(t, sym__2))
    {
      c_55 = ATgetArgument(t, 0);
      d_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_9(c_55, d_55, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
  f_56 = t;
  if(match_cons(t, sym__3))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
      i_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_56;
  if(match_string(t, "T"))
    {
      t = i_56;
      if(match_cons(t, sym__2))
        {
          j_56 = ATgetArgument(t, 0);
          k_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_56;
      if(match_int(t, 0))
        {
          ATerm h_26 = t;
          int i_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_56(g_56, j_56, k_56, f_56, t);
              ;
              LocalPopChoice(i_26);
            }
          else
            {
              t = h_26;
              {
                ATerm n_56 = NULL;
                t = f_56;
                t = new_0_0(t);
                n_56 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, g_56, term_y_25), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_56), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_56)), (ATerm) ATmakeAppl(sym_Op_2, g_56, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_56)), (ATerm) ATmakeAppl(sym_Op_2, g_56, (ATerm) ATempty))), term_p_21))));
              }
            }
        }
      else
        {
          t = o_56(g_56, j_56, k_56, f_56, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = i_56;
      if(match_cons(t, sym__2))
        {
          j_56 = ATgetArgument(t, 0);
          k_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_56(g_56, j_56, k_56, f_56, t);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm u_11 = NULL,x_11 = NULL,k_10 = NULL;
  u_11 = t;
  t = SSL_explode_term(u_11);
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
          {
            x_11 = ATgetFirst((ATermList) k_26);
            {
              ATerm l_26 = (ATerm) ATgetNext((ATermList) k_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(u_11);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(((ATgetType(n_26) == AT_LIST) && !(ATisEmpty(n_26))))
          {
            ATerm o_26 = ATgetFirst((ATermList) n_26);
            ATerm p_26 = (ATerm) ATgetNext((ATermList) n_26);
            if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
              {
                k_10 = ATgetFirst((ATermList) p_26);
                {
                  ATerm r_26 = (ATerm) ATgetNext((ATermList) p_26);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, x_11, k_10);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(p_5, q_5, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_12 = ATgetFirst((ATermList) t);
      s_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_12;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_12;
            if((p_12 != t))
              {
                _fail(t);
              }
            t = n_12;
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            t = (ATerm) ATmakeAppl(sym__2, p_12, s_12);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_12, s_12);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_91(t);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = SRTS_all(p_13, t);
      }
    return(t);
  }
  t = p_13(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(((ATgetType(x_26) != AT_LIST) || !(ATisEmpty(x_26))))
        _fail(t);
      {
        ATerm y_26 = ATgetArgument(t, 1);
        if(((ATgetType(y_26) != AT_LIST) || !(ATisEmpty(y_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
        {
          c_14 = ATgetFirst((ATermList) z_26);
          d_14 = (ATerm) ATgetNext((ATermList) z_26);
        }
      else
        _fail(t);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(((ATgetType(a_27) == AT_LIST) && !(ATisEmpty(a_27))))
          {
            e_14 = ATgetFirst((ATermList) a_27);
            f_14 = (ATerm) ATgetNext((ATermList) a_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_14, e_14), (ATerm) ATmakeAppl(sym__2, d_14, f_14));
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm i_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_14), i_14);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  s_13 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_27 = ATgetArgument(t, 0);
            ATerm f_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(c_27);
        t = s_13;
      }
    else
      {
        t = b_27;
        {
          ATerm b_14 = NULL;
          if(match_cons(t, sym__3))
            {
              t_13 = ATgetArgument(t, 0);
              u_13 = ATgetArgument(t, 1);
              v_13 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_13, u_13);
          t = genzip_4_0(s_5, t_5, u_5, _id, t);
          b_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_14, v_13);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  ATerm v_5 (ATerm t)
  {
    ATerm o_10 = NULL;
    t = i_89(t);
    o_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_10, not_null(n_14));
    t = lookup_0_0(t);
    t = j_89(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14;
  t = alltd_1_0(v_5, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,i_16 = NULL,k_16 = NULL,q_3 = NULL;
  k_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_16);
  z_15 = t;
  t = a_16;
  t = new_0_0(t);
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_16, b_16);
  q_3 = t;
  t = SSLsetAnnotations(q_3, z_15);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm l_16 = NULL,n_16 = NULL,q_16 = NULL,x_16 = NULL,z_16 = NULL,r_3 = NULL;
  z_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_16);
  l_16 = t;
  t = n_16;
  t = new_0_0(t);
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_16, q_16);
  r_3 = t;
  t = SSLsetAnnotations(r_3, l_16);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm a_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_17 = ATgetArgument(t, 0);
      {
        ATerm g_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_17), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm b_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      b_17 = ATgetArgument(t, 0);
      {
        ATerm i_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, b_17);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm v_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_17 = ATgetArgument(t, 0);
      {
        ATerm j_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_17;
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm y_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_17 = ATgetArgument(t, 0);
      {
        ATerm k_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_17;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm z_17 = NULL,b_18 = NULL,g_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      b_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      z_17 = ATgetArgument(t, 2);
      t = b_18;
      if(match_cons(t, sym_SVar_1))
        {
          g_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_17;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_18;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          b_18 = ATgetArgument(t, 0);
          h_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_18;
      if(match_cons(t, sym_SVar_1))
        {
          g_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_18;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm l_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_18;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm h_15 = NULL,j_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,x_15 = NULL;
  t_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_27 = ATgetFirst((ATermList) t);
      if(match_cons(m_27, sym_SDefT_4))
        {
          h_15 = ATgetArgument(m_27, 0);
          j_15 = ATgetArgument(m_27, 1);
          q_15 = ATgetArgument(m_27, 2);
          {
            ATerm p_27 = ATgetArgument(m_27, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm n_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_15;
  t = map_1_0(w_5, t);
  r_15 = t;
  t = q_15;
  t = map_1_0(d_6, t);
  s_15 = t;
  t = r_15;
  t = map_1_0(f_6, t);
  v_15 = t;
  t = s_15;
  t = map_1_0(h_6, t);
  u_15 = t;
  t = t_15;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,q_17 = NULL,t_17 = NULL,u_17 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm q_27 = ATgetArgument(t, 0);
          m_17 = ATgetArgument(t, 1);
          n_17 = ATgetArgument(t, 2);
          o_17 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = n_17;
      t = map_1_0(l_6, t);
      q_17 = t;
      t = m_17;
      t = map_1_0(o_6, t);
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_17, v_15, o_17);
      t = substitute_2_0(r_6, _id, t);
      t_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, q_17, u_15, t_17);
      t = substitute_2_0(s_6, _id, t);
      return(t);
    }
    t = map_1_0(k_6, t);
    t = choices_0_0(t);
    x_15 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, h_15, r_15, s_15, x_15);
  }
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  t = term_c_13;
  q_18 = t;
  t = (ATerm) ATinsert(ATempty, term_r_27);
  r_18 = t;
  t = SSL_printnl(q_18, r_18);
  t = term_b_19;
  p_18 = t;
  t = SSL_exit(p_18);
  t = (ATerm) ATinsert(ATempty, term_r_27);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm x_18 = NULL;
  ATerm t_6 (ATerm t)
  {
    ATerm y_18 = NULL,z_18 = NULL;
    y_18 = t;
    {
      ATerm u_27 = t;
      int w_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDef_3))
            {
              z_18 = ATgetArgument(t, 0);
              {
                ATerm x_27 = ATgetArgument(t, 1);
              }
              {
                ATerm y_27 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(w_27);
          t = z_18;
          if(((x_18 != NULL) && (x_18 != t)))
            _fail(t);
          else
            x_18 = t;
          t = y_18;
        }
      else
        {
          t = u_27;
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              z_18 = ATgetArgument(t, 0);
              {
                ATerm z_27 = ATgetArgument(t, 1);
              }
              {
                ATerm a_28 = ATgetArgument(t, 2);
              }
              {
                ATerm b_28 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = z_18;
          if(((x_18 != NULL) && (x_18 != t)))
            _fail(t);
          else
            x_18 = t;
          t = y_18;
        }
    }
    return(t);
  }
  t = fetch_1_0(t_6, t);
  t = not_null(x_18);
  t = debug_1_0(u_6, t);
  t = giving_up_0_0(t);
  return(t);
}
ATerm h_59 (ATerm e_57, ATerm f_57, ATerm g_57, ATerm h_57, ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,v_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
  t = Definitions_0_0(t);
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_57, g_57);
  o_57 = t;
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      ATerm d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_57);
  m_57 = t;
  t = l_57;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_57 = NULL,t_57 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_57 = ATgetFirst((ATermList) t);
            t_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_57;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_57;
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefsExt_0_0(t);
              ;
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              t = JoinDefs2_0_0(t);
            }
        }
      }
    n_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_57, g_57);
    v_3 = t;
    t = SSLsetAnnotations(v_3, m_57);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,f_58 = NULL,o_58 = NULL,p_58 = NULL,r_58 = NULL,x_58 = NULL;
  f_58 = t;
  if(match_cons(t, sym__2))
    {
      o_58 = ATgetArgument(t, 0);
      x_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_58;
  if(match_cons(t, sym__2))
    {
      p_58 = ATgetArgument(t, 0);
      r_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_58;
  if(match_cons(t, sym_Mod_2))
    {
      b_58 = ATgetArgument(t, 0);
      c_58 = ATgetArgument(t, 1);
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_59 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, b_58, c_58, r_58);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            g_59 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_59, x_58);
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            t = h_59(p_58, r_58, x_58, f_58, t);
          }
      }
    }
  else
    {
      t = h_59(p_58, r_58, x_58, f_58, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm f_61 (ATerm t)
  {
    ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
    v_60 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_60 = ATgetFirst((ATermList) t);
        u_60 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_23 = NULL,p_23 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(v_60);
          l_23 = t;
          t = u_60;
          t = f_61(t);
          p_23 = t;
          t = (ATerm) ATinsert(CheckATermList(p_23), t_60);
          x_3 = t;
          t = SSLsetAnnotations(x_3, l_23);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_60;
        t = q_96(t);
      }
    return(t);
  }
  t = f_61(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_59 = NULL,n_59 = NULL,q_59 = NULL;
  j_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_59;
    }
  else
    {
      ATerm v_6 (ATerm t)
      {
        t = not_null(q_59);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_59 = ATgetFirst((ATermList) t);
          if(((q_59 != NULL) && (q_59 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_59;
      t = at_end_1_0(v_6, t);
    }
  return(t);
}
ATerm w_61 (ATerm o_61, ATerm t)
{
  ATerm p_61 = NULL;
  t = SSL_explode_term(o_61);
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_61;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
  t_61 = t;
  if(match_cons(t, sym__2))
    {
      r_61 = ATgetArgument(t, 0);
      s_61 = ATgetArgument(t, 1);
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_6 (ATerm t)
            {
              t = s_61;
              return(t);
            }
            t = r_61;
            t = at_end_1_0(w_6, t);
            ;
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            t = w_61(t_61, t);
          }
      }
    }
  else
    {
      t = w_61(t_61, t);
    }
  return(t);
}
ATerm g_9 (ATerm v_103 (ATerm), ATerm a_48, ATerm z_47, ATerm t)
{
  ATerm p_62 (ATerm t)
  {
    ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL;
    k_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_62;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_62 = ATgetFirst((ATermList) t);
            m_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_62;
              {
                ATerm x_6 (ATerm t)
                {
                  t = z_47;
                  return(t);
                }
                t = t_9(v_103, x_6, l_62, m_62, t);
                t = p_62(t);
              }
              ;
              LocalPopChoice(o_28);
            }
          else
            {
              t = n_28;
              {
                ATerm e_24 = NULL,h_24 = NULL,b_4 = NULL;
                t = SSLgetAnnotations(k_62);
                e_24 = t;
                t = m_62;
                t = p_62(t);
                h_24 = t;
                t = (ATerm) ATinsert(CheckATermList(h_24), l_62);
                b_4 = t;
                t = SSLsetAnnotations(b_4, e_24);
              }
            }
        }
      }
    return(t);
  }
  t = a_48;
  t = p_62(t);
  return(t);
}
ATerm genzip_4_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm t)
{
  ATerm g_63 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_94(t);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        {
          ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,d_63 = NULL,d_4 = NULL;
          t = m_94(t);
          d_63 = t;
          if(match_cons(t, sym__2))
            {
              u_62 = ATgetArgument(t, 0);
              v_62 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_63);
          t_62 = t;
          t = u_62;
          t = o_94(t);
          w_62 = t;
          t = v_62;
          t = g_63(t);
          x_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_62, x_62);
          d_4 = t;
          t = SSLsetAnnotations(d_4, t_62);
          t = n_94(t);
        }
      }
    return(t);
  }
  t = g_63(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_28 = ATgetArgument(t, 0);
      if(((ATgetType(r_28) != AT_LIST) || !(ATisEmpty(r_28))))
        _fail(t);
      {
        ATerm s_28 = ATgetArgument(t, 1);
        if(((ATgetType(s_28) != AT_LIST) || !(ATisEmpty(s_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm y_63 = NULL,a_64 = NULL,d_64 = NULL,e_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
        {
          y_63 = ATgetFirst((ATermList) u_28);
          a_64 = (ATerm) ATgetNext((ATermList) u_28);
        }
      else
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
          {
            d_64 = ATgetFirst((ATermList) v_28);
            e_64 = (ATerm) ATgetNext((ATermList) v_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_63, d_64), (ATerm) ATmakeAppl(sym__2, a_64, e_64));
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm g_64 = NULL,k_64 = NULL;
  if(match_cons(t, sym__2))
    {
      g_64 = ATgetArgument(t, 0);
      k_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_64), g_64);
  return(t);
}
ATerm l_9 (ATerm e_667, ATerm j_667, ATerm k_67, ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,n_63 = NULL,o_63 = NULL;
  t = SSL_explode_term(j_667);
  if(match_cons(t, sym__2))
    {
      i_63 = ATgetArgument(t, 0);
      n_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_667);
  if(match_cons(t, sym__2))
    {
      if((i_63 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_63, n_63);
  t = genzip_4_0(y_6, d_7, e_7, _id, t);
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_63, k_67);
  t = conc_0_0(t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm c_65 = NULL;
  c_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_65);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,f_4 = NULL;
  g_65 = t;
  if(match_cons(t, sym__2))
    {
      e_65 = ATgetArgument(t, 0);
      f_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_65);
  d_65 = t;
  t = f_65;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_65, f_65);
  f_4 = t;
  t = SSLsetAnnotations(f_4, d_65);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm k_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL;
  k_66 = t;
  if(match_cons(t, sym__2))
    {
      n_66 = ATgetArgument(t, 0);
      o_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_66 = ATgetFirst((ATermList) t);
      q_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_67(n_66, o_66, k_66, t);
            ;
            LocalPopChoice(y_28);
          }
        else
          {
            t = w_28;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_66), p_66), q_66);
          }
      }
    }
  else
    {
      t = f_67(n_66, o_66, k_66, t);
    }
  return(t);
}
ATerm f_67 (ATerm h_65, ATerm k_65, ATerm l_65, ATerm t)
{
  ATerm m_65 = NULL,s_65 = NULL,g_4 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  t = SSLgetAnnotations(l_65);
  m_65 = t;
  t = k_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_65 = ATgetFirst((ATermList) t);
      y_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_65;
  if(match_cons(t, sym__2))
    {
      w_65 = ATgetArgument(t, 0);
      x_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_65;
        if((w_65 != t))
          {
            _fail(t);
          }
        t = y_65;
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = z_28;
        t = k_65;
        t = l_9(w_65, x_65, y_65, t);
      }
    s_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_65, s_65);
    g_4 = t;
    t = SSLsetAnnotations(g_4, m_65);
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm d_67 = NULL;
  if(match_cons(t, sym__2))
    {
      d_67 = ATgetArgument(t, 0);
      if((d_67 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_7, q_7, t_7, t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm w_66 = NULL,x_66 = NULL,a_67 = NULL;
        w_66 = t;
        if(match_cons(t, sym__2))
          {
            x_66 = ATgetArgument(t, 0);
            a_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_66;
        t = g_9(u_7, x_66, a_67, t);
      }
    }
  return(t);
}
ATerm n_9 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm h_68, ATerm e_68, ATerm m_68, ATerm i_68, ATerm f_68, ATerm g_68, ATerm t)
{
  ATerm g_67 = NULL,l_67 = NULL,m_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_68, i_68);
  t = z_118(t);
  if(match_cons(t, sym__2))
    {
      l_67 = ATgetArgument(t, 0);
      g_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_67;
  t = a_119(t);
  m_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_67, m_68);
  t = diff_0_0(t);
  o_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_67, e_68);
  t = conc_0_0(t);
  p_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_67, m_68);
  t = conc_0_0(t);
  q_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_68, l_67, f_68);
  t = b_119(t);
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym__5, p_67, q_67, g_67, r_67, g_68);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
        {
          t_67 = ATgetFirst((ATermList) f_29);
          u_67 = (ATerm) ATgetNext((ATermList) f_29);
        }
      else
        _fail(t);
      v_67 = ATgetArgument(t, 1);
      w_67 = ATgetArgument(t, 2);
      x_67 = ATgetArgument(t, 3);
      y_67 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = n_9(z_118, a_119, b_119, t_67, u_67, v_67, w_67, x_67, y_67, t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t)
{
  ATerm z_67 (ATerm t)
  {
    ATerm g_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_103(t);
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = g_29;
        t = n_103(t);
        t = z_67(t);
      }
    return(t);
  }
  t = z_67(t);
  return(t);
}
ATerm for_3_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm t)
{
  t = p_103(t);
  t = while_not_2_0(q_103, r_103, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL;
  if(match_cons(t, sym__3))
    {
      v_68 = ATgetArgument(t, 0);
      w_68 = ATgetArgument(t, 1);
      x_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, v_68, v_68, w_68, x_68, (ATerm) ATempty);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if(((ATgetType(j_29) != AT_LIST) || !(ATisEmpty(j_29))))
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
      }
      {
        ATerm l_29 = ATgetArgument(t, 2);
      }
      a_69 = ATgetArgument(t, 3);
      b_69 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_69, b_69);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, a_8, b_8, t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
        if(match_cons(t, sym__5))
          {
            n_69 = ATgetArgument(t, 0);
            q_69 = ATgetArgument(t, 1);
            r_69 = ATgetArgument(t, 2);
            s_69 = ATgetArgument(t, 3);
            t_69 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = n_69;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_69 = ATgetFirst((ATermList) t);
            p_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, p_69, q_69, r_69, s_69, (ATerm) ATinsert(CheckATermList(t_69), o_69));
      }
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(f_8, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm p_29 = ATgetArgument(t, 0);
      j_69 = ATgetArgument(t, 1);
      k_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_69), j_69);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
    }
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,f_25 = NULL,g_25 = NULL;
  d_25 = t;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_25;
  if(match_cons(t, sym_Mod_2))
    {
      b_25 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
      {
        ATerm s_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_25;
            t = h_8(b_25, c_25, g_25, t);
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = s_29;
            t = m_25(f_25, g_25, t);
          }
      }
    }
  else
    {
      t = m_25(f_25, g_25, t);
    }
  return(t);
}
ATerm m_25 (ATerm v_24, ATerm w_24, ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  t = term_c_13;
  z_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_15), w_24), term_k_15), v_24), term_f_15);
  a_25 = t;
  t = SSL_printnl(z_24, a_25);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_15), w_24), term_k_15), v_24), term_f_15);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,p_71 = NULL;
  t = for_3_0(w_7, y_7, z_7, t);
  k_71 = t;
  if(match_cons(t, sym__2))
    {
      l_71 = ATgetArgument(t, 0);
      m_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_71;
    }
  else
    {
      ATerm r_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_71 = ATgetFirst((ATermList) t);
          p_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(p_71), n_71);
      t = map_1_0(i_8, t);
      t = term_b_19;
      r_24 = t;
      t = SSL_exit(r_24);
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL;
  if(match_cons(t, sym__2))
    {
      k_72 = ATgetArgument(t, 0);
      l_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(k_72, l_72, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm o_72 = NULL,r_72 = NULL;
  if(match_cons(t, sym__2))
    {
      o_72 = ATgetArgument(t, 0);
      r_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(o_72, r_72, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm s_72 = NULL;
  if(match_cons(t, sym__2))
    {
      s_72 = ATgetArgument(t, 0);
      if((s_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL;
  x_71 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      b_72 = ATgetArgument(t, 0);
      v_71 = ATgetArgument(t, 1);
      w_71 = ATgetArgument(t, 2);
      {
        ATerm x_29 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  d_72 = t;
  t = v_71;
  t = foldr_3_0(l_8, m_8, n_8, t);
  y_71 = t;
  t = w_71;
  t = foldr_3_0(p_8, q_8, s_8, t);
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_72, (ATerm) ATmakeAppl(sym__2, y_71, z_71));
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = (ATerm) ATempty;
      }
    f_72 = t;
    t = b_72;
    {
      ATerm c_30 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(d_30);
        }
      else
        {
          t = c_30;
          t = (ATerm) ATempty;
        }
      e_72 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_71, z_71));
      j_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_71, z_71)), e_72);
      t = u_9(t_8, j_72, e_72, t);
      c_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_72, (ATerm) ATmakeAppl(sym__2, y_71, z_71));
      h_72 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_30, (ATerm) ATinsert(CheckATermList(f_72), x_71));
      i_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_72, (ATerm) ATmakeAppl(sym__2, y_71, z_71)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_30, (ATerm) ATinsert(CheckATermList(f_72), x_71)));
      t = q_9(v_8, h_72, i_72, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_30, c_72);
      g_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_72, (ATerm) ATmakeAppl(sym_Defined_2, term_f_30, c_72));
      t = q_9(x_8, b_72, g_72, t);
      t = d_72;
    }
  }
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL;
  if(match_cons(t, sym__2))
    {
      y_73 = ATgetArgument(t, 0);
      z_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(y_73, z_73, t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL;
  if(match_cons(t, sym__2))
    {
      a_74 = ATgetArgument(t, 0);
      b_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(a_74, b_74, t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm e_74 = NULL;
  if(match_cons(t, sym__2))
    {
      e_74 = ATgetArgument(t, 0);
      if((e_74 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,y_72 = NULL,b_73 = NULL,e_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,t_73 = NULL,x_73 = NULL;
  y_72 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      h_73 = ATgetArgument(t, 0);
      t_72 = ATgetArgument(t, 1);
      u_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  j_73 = t;
  t = t_72;
  t = foldr_3_0(c_9, d_9, f_9, t);
  b_73 = t;
  t = u_72;
  t = foldr_3_0(h_9, m_9, p_9, t);
  e_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_73, (ATerm) ATmakeAppl(sym__2, b_73, e_73));
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        t = (ATerm) ATempty;
      }
    n_73 = t;
    t = h_73;
    {
      ATerm i_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(j_30);
        }
      else
        {
          t = i_30;
          t = (ATerm) ATempty;
        }
      k_73 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_73, e_73));
      x_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_73, e_73)), k_73);
      t = u_9(r_9, x_73, k_73, t);
      i_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_73, (ATerm) ATmakeAppl(sym__2, b_73, e_73));
      p_73 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_30, (ATerm) ATinsert(CheckATermList(n_73), y_72));
      t_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_73, (ATerm) ATmakeAppl(sym__2, b_73, e_73)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_30, (ATerm) ATinsert(CheckATermList(n_73), y_72)));
      t = q_9(d_10, p_73, t_73, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_30, i_73);
      o_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_73, (ATerm) ATmakeAppl(sym_Defined_2, term_l_30, i_73));
      t = q_9(e_10, h_73, o_73, t);
      t = j_73;
    }
  }
  return(t);
}
ATerm q_9 (ATerm i_119 (ATerm), ATerm f_69, ATerm d_69, ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL;
  i_74 = t;
  t = i_119(t);
  f_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_74, f_69, d_69);
  t = h_10(f_74, f_69, d_69, t);
  {
    ATerm o_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_74 = NULL;
        t = term_v_30;
        l_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_74, term_v_30);
        t = g_10(f_74, l_74, t);
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = o_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_74 = ATgetFirst((ATermList) t);
        h_74 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_30;
    j_74 = t;
    t = (ATerm) ATinsert(CheckATermList(h_74), (ATerm) ATinsert(CheckATermList(g_74), f_69));
    k_74 = t;
    t = SSL_table_put(f_74, j_74, k_74);
    t = i_74;
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm c_75 = NULL;
  c_75 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_26 = NULL,u_26 = NULL;
        t = term_w_29;
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_29, c_75);
        t = s_9(u_26, c_75, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_30) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
            q_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_26;
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_27 = NULL,h_27 = NULL;
              t = term_w_29;
              h_27 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_29, c_75);
              t = s_9(h_27, c_75, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm b_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  e_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_27;
              ;
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              {
                ATerm c_31 = t;
                int d_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_27 = NULL,o_27 = NULL;
                    t = term_w_29;
                    o_27 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_w_29, c_75);
                    t = s_9(o_27, c_75, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm e_31 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) e_31) != ATmakeSymbol("j_0", 0, ATtrue)))
                          _fail(t);
                        l_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = l_27;
                    ;
                    LocalPopChoice(d_31);
                  }
                else
                  {
                    t = c_31;
                    {
                      ATerm s_27 = NULL,v_27 = NULL;
                      t = term_w_29;
                      v_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_w_29, c_75);
                      t = s_9(v_27, c_75, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm f_31 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) f_31) != ATmakeSymbol("f_0", 0, ATtrue)))
                            _fail(t);
                          s_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_27;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm s_9 (ATerm t_64, ATerm u_64, ATerm t)
{
  ATerm h_75 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_64, u_64);
  t = g_10(t_64, u_64, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_75 = ATgetFirst((ATermList) t);
      {
        ATerm h_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_75;
  return(t);
}
ATerm n_76 (ATerm b_76, ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,t_28 = NULL;
  t = term_v_29;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_29, b_76);
  t = s_9(t_28, b_76, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm i_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_31) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      d_76 = ATgetArgument(t, 1);
      e_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_76), d_76);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm h_76 = NULL,j_76 = NULL;
  h_76 = t;
  if(match_cons(t, sym__2))
    {
      ATerm j_31 = ATgetArgument(t, 0);
      j_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_76;
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_31 = ATgetArgument(t, 0);
            ATerm n_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(l_31);
        {
          ATerm o_31 = t;
          int q_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_28 = NULL,a_29 = NULL;
              t = term_v_29;
              a_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_29, h_76);
              t = s_9(a_29, h_76, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm r_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_31) != ATmakeSymbol("q_0", 0, ATtrue)))
                    _fail(t);
                  x_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_28;
              ;
              LocalPopChoice(q_31);
            }
          else
            {
              t = o_31;
              {
                ATerm t_31 = t;
                int u_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_29 = NULL,h_29 = NULL;
                    t = term_v_29;
                    h_29 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_v_29, h_76);
                    t = s_9(h_29, h_76, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm v_31 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) v_31) != ATmakeSymbol("m_0", 0, ATtrue)))
                          _fail(t);
                        e_29 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = e_29;
                    ;
                    LocalPopChoice(u_31);
                  }
                else
                  {
                    t = t_31;
                    {
                      ATerm w_31 = t;
                      int x_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_29 = NULL,t_29 = NULL;
                          t = term_v_29;
                          t_29 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_v_29, h_76);
                          t = s_9(t_29, h_76, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm y_31 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) y_31) != ATmakeSymbol("h_0", 0, ATtrue)))
                                _fail(t);
                              o_29 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = o_29;
                          ;
                          LocalPopChoice(x_31);
                        }
                      else
                        {
                          t = w_31;
                          t = n_76(h_76, t);
                        }
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = k_31;
        t = n_76(h_76, t);
      }
  }
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL;
  if(match_cons(t, sym__2))
    {
      c_77 = ATgetArgument(t, 0);
      d_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(c_77, d_77, t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL;
  if(match_cons(t, sym__2))
    {
      e_77 = ATgetArgument(t, 0);
      f_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(e_77, f_77, t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm g_77 = NULL;
  if(match_cons(t, sym__2))
    {
      g_77 = ATgetArgument(t, 0);
      if((g_77 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL;
  q_76 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_76 = ATgetArgument(t, 0);
      o_76 = ATgetArgument(t, 1);
      p_76 = ATgetArgument(t, 2);
      {
        ATerm z_31 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  v_76 = t;
  t = o_76;
  t = foldr_3_0(l_10, m_10, n_10, t);
  r_76 = t;
  t = p_76;
  t = foldr_3_0(p_10, q_10, t_10, t);
  s_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_76, (ATerm) ATmakeAppl(sym__2, r_76, s_76));
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        t = (ATerm) ATempty;
      }
    x_76 = t;
    t = t_76;
    {
      ATerm c_32 = t;
      int e_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(e_32);
        }
      else
        {
          t = c_32;
          t = (ATerm) ATempty;
        }
      w_76 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_76, s_76));
      b_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_76, s_76)), w_76);
      t = u_9(u_10, b_77, w_76, t);
      u_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_76, (ATerm) ATmakeAppl(sym__2, r_76, s_76));
      z_76 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_32, (ATerm) ATinsert(CheckATermList(x_76), q_76));
      a_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_76, (ATerm) ATmakeAppl(sym__2, r_76, s_76)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_32, (ATerm) ATinsert(CheckATermList(x_76), q_76)));
      t = q_9(v_10, z_76, a_77, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_32, u_76);
      y_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_76, (ATerm) ATmakeAppl(sym_Defined_2, term_g_32, u_76));
      t = q_9(w_10, t_76, y_76, t);
      t = v_76;
    }
  }
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL;
  if(match_cons(t, sym__2))
    {
      t_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(t_77, u_77, t);
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  if(match_cons(t, sym__2))
    {
      v_77 = ATgetArgument(t, 0);
      w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(v_77, w_77, t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL;
  if(match_cons(t, sym__2))
    {
      c_78 = ATgetArgument(t, 0);
      d_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(c_78, d_78, t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  if(match_cons(t, sym__2))
    {
      e_78 = ATgetArgument(t, 0);
      f_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(e_78, f_78, t);
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL;
  if(match_cons(t, sym__2))
    {
      m_78 = ATgetArgument(t, 0);
      n_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(m_78, n_78, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL;
  if(match_cons(t, sym__2))
    {
      o_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(o_78, p_78, t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL;
  i_77 = t;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            j_77 = ATgetArgument(t, 0);
            k_77 = ATgetArgument(t, 1);
            l_77 = ATgetArgument(t, 2);
            {
              ATerm k_32 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_32);
        {
          ATerm q_77 = NULL,r_77 = NULL;
          t = k_77;
          t = foldr_3_0(x_10, z_10, a_11, t);
          q_77 = t;
          t = l_77;
          t = foldr_3_0(c_11, d_11, e_11, t);
          r_77 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_77, (ATerm) ATmakeAppl(sym__2, q_77, r_77)));
        }
      }
    else
      {
        t = i_32;
        if(match_cons(t, sym_ExtSDef_3))
          {
            j_77 = ATgetArgument(t, 0);
            k_77 = ATgetArgument(t, 1);
            l_77 = ATgetArgument(t, 2);
            {
              ATerm a_78 = NULL,b_78 = NULL;
              t = k_77;
              t = foldr_3_0(f_11, g_11, h_11, t);
              a_78 = t;
              t = l_77;
              t = foldr_3_0(i_11, j_11, k_11, t);
              b_78 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_77, (ATerm) ATmakeAppl(sym__2, a_78, b_78)));
            }
          }
        else
          {
            ATerm j_78 = NULL,k_78 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                j_77 = ATgetArgument(t, 0);
                k_77 = ATgetArgument(t, 1);
                l_77 = ATgetArgument(t, 2);
                {
                  ATerm l_32 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = k_77;
            t = foldr_3_0(m_11, n_11, p_11, t);
            j_78 = t;
            t = l_77;
            t = foldr_3_0(q_11, r_11, s_11, t);
            k_78 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_77, (ATerm) ATmakeAppl(sym__2, j_78, k_78)));
          }
      }
  }
  return(t);
}
ATerm t_9 (ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm g_48, ATerm f_48, ATerm t)
{
  t = e_104(t);
  {
    ATerm t_11 (ATerm t)
    {
      ATerm q_78 = NULL;
      q_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_48, q_78);
      t = d_104(t);
      return(t);
    }
    t = fetch_1_0(t_11, t);
    t = f_48;
  }
  return(t);
}
ATerm u_9 (ATerm a_104 (ATerm), ATerm c_48, ATerm b_48, ATerm t)
{
  ATerm g_79 (ATerm t)
  {
    ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
    b_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_48;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_79 = ATgetFirst((ATermList) t);
            d_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_79;
              {
                ATerm w_11 (ATerm t)
                {
                  t = b_48;
                  return(t);
                }
                t = t_9(a_104, w_11, c_79, d_79, t);
                t = g_79(t);
              }
              ;
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              {
                ATerm y_29 = NULL,b_30 = NULL,o_4 = NULL;
                t = SSLgetAnnotations(b_79);
                y_29 = t;
                t = d_79;
                t = g_79(t);
                b_30 = t;
                t = (ATerm) ATinsert(CheckATermList(b_30), c_79);
                o_4 = t;
                t = SSLsetAnnotations(o_4, y_29);
              }
            }
        }
      }
    return(t);
  }
  t = c_48;
  t = g_79(t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
  j_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_79;
      t = k_106(t);
    }
  else
    {
      ATerm o_79 = NULL,p_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_79 = ATgetFirst((ATermList) t);
          l_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_79;
      t = m_106(t);
      o_79 = t;
      t = l_79;
      t = foldr_3_0(k_106, l_106, m_106, t);
      p_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_79, p_79);
      t = l_106(t);
    }
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL;
  if(match_cons(t, sym__2))
    {
      t_79 = ATgetArgument(t, 0);
      u_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(b_12, t_79, u_79, t);
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm v_79 = NULL;
  if(match_cons(t, sym__2))
    {
      v_79 = ATgetArgument(t, 0);
      if((v_79 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm q_32 = t;
        int t_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            ;
            LocalPopChoice(t_32);
          }
        else
          {
            t = q_32;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
  s_79 = t;
  t = foldr_3_0(y_11, a_12, DefinitionName_0_0, t);
  q_79 = t;
  t = s_79;
  t = map_1_0(c_12, t);
  r_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_79, r_79, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm t)
{
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,s_4 = NULL;
  b_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_79 = ATgetFirst((ATermList) t);
      y_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_80);
  w_79 = t;
  t = x_79;
  t = c_74(t);
  z_79 = t;
  t = y_79;
  t = d_74(t);
  a_80 = t;
  t = (ATerm) ATinsert(CheckATermList(a_80), z_79);
  s_4 = t;
  t = SSLsetAnnotations(s_4, w_79);
  return(t);
}
ATerm v_9 (ATerm t_54, ATerm u_54, ATerm t)
{
  ATerm c_80 = NULL;
  t = SSL_fputc(t_54, u_54);
  c_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_80);
  return(t);
}
ATerm w_9 (ATerm h_58, ATerm i_58, ATerm t)
{
  ATerm d_80 = NULL;
  t = SSL_write_term_to_stream_text(h_58, i_58);
  d_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_80);
  return(t);
}
ATerm y_9 (ATerm p_111 (ATerm), ATerm y_524, ATerm l_58, ATerm t)
{
  ATerm e_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_524, term_u_32);
  t = b_10(t);
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_80, l_58);
  t = p_111(t);
  t = fclose_0_0(t);
  t = l_58;
  return(t);
}
ATerm x_9 (ATerm d_58, ATerm e_58, ATerm t)
{
  ATerm f_80 = NULL;
  t = SSL_write_term_to_stream_baf(d_58, e_58);
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_80);
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm i_80 = NULL,j_80 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_32 = ATgetArgument(t, 0);
      if(match_cons(v_32, sym_Stream_1))
        {
          i_80 = ATgetArgument(v_32, 0);
        }
      else
        _fail(t);
      j_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_9(i_80, j_80, t);
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      if(match_cons(w_32, sym_Stream_1))
        {
          n_80 = ATgetArgument(w_32, 0);
        }
      else
        _fail(t);
      o_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(n_80, o_80, t);
  k_80 = t;
  t = term_x_32;
  l_80 = t;
  t = k_80;
  if(match_cons(t, sym_Stream_1))
    {
      m_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_32, k_80);
  t = v_9(l_80, m_80, t);
  return(t);
}
ATerm output_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL;
  t = y_115(t);
  h_80 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_33;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = term_c_33;
      }
    g_80 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_80, h_80);
    {
      ATerm d_33 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_f_33;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, g_80, h_80);
          LocalPopChoice(e_33);
          if(match_cons(t, sym__2))
            {
              ATerm k_33 = ATgetArgument(t, 0);
              ATerm l_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_9(d_12, g_80, h_80, t);
        }
      else
        {
          t = d_33;
          if(match_cons(t, sym__2))
            {
              ATerm o_33 = ATgetArgument(t, 0);
              ATerm p_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_9(e_12, g_80, h_80, t);
        }
    }
  }
  return(t);
}
ATerm c_81 (ATerm w_80, ATerm t)
{
  t = SSL_fclose(w_80);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL;
  a_81 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_80 = ATgetArgument(t, 0);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_80);
            ;
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            t = c_81(a_81, t);
          }
      }
    }
  else
    {
      t = c_81(a_81, t);
    }
  return(t);
}
ATerm z_9 (ATerm j_58, ATerm t)
{
  t = SSL_read_term_from_stream(j_58);
  return(t);
}
ATerm a_10 (ATerm v_54, ATerm w_54, ATerm t)
{
  ATerm d_81 = NULL;
  t = SSL_fopen(v_54, w_54);
  d_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_81);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_81 = NULL;
  t = SSL_stdin_stream();
  e_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_81);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_81 = NULL;
  t = SSL_stdout_stream();
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_81);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_81 = NULL;
  t = SSL_stderr_stream();
  g_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_81);
  return(t);
}
ATerm n_82 (ATerm m_81, ATerm t)
{
  ATerm n_81 = NULL;
  t = SSL_explode_term(m_81);
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_33 = ATgetArgument(t, 1);
        if(((ATgetType(t_33) == AT_LIST) && !(ATisEmpty(t_33))))
          {
            n_81 = ATgetFirst((ATermList) t_33);
            {
              ATerm u_33 = (ATerm) ATgetNext((ATermList) t_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_81;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_81;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_81;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_81;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_82 (ATerm q_81, ATerm r_81, ATerm s_81, ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,y_81 = NULL,i_5 = NULL;
  t = SSLgetAnnotations(s_81);
  v_81 = t;
  t = q_81;
  if(match_cons(t, sym_Path_1))
    {
      y_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_81, r_81);
  i_5 = t;
  t = SSLsetAnnotations(i_5, v_81);
  if(match_cons(t, sym__2))
    {
      t_81 = ATgetArgument(t, 0);
      u_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10(t_81, u_81, t);
  return(t);
}
ATerm p_82 (ATerm a_82, ATerm b_82, ATerm c_82, ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,i_82 = NULL,l_5 = NULL;
  t = SSLgetAnnotations(c_82);
  f_82 = t;
  t = SSL_is_string(a_82);
  i_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_82, b_82);
  l_5 = t;
  t = SSLsetAnnotations(l_5, f_82);
  if(match_cons(t, sym__2))
    {
      d_82 = ATgetArgument(t, 0);
      e_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10(d_82, e_82, t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  if(match_cons(t, sym__2))
    {
      l_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_82(k_82, t);
            ;
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm x_33 = t;
              int y_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_82(l_82, m_82, k_82, t);
                  ;
                  LocalPopChoice(y_33);
                }
              else
                {
                  t = x_33;
                  t = p_82(l_82, m_82, k_82, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_82(k_82, t);
    }
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL;
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_82 = NULL;
      t_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_82, term_c_34);
      t = b_10(t);
      ;
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      t = debug_1_0(f_12, t);
      _fail(t);
    }
  r_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_9(s_82, t);
  q_82 = t;
  t = r_82;
  t = fclose_0_0(t);
  t = q_82;
  return(t);
}
ATerm input_1_0 (ATerm z_115 (ATerm), ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      t = term_i_34;
    }
  t = ReadFromFile_0_0(t);
  t = z_115(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  v_82 = t;
  t = term_x_25;
  t = whoami_0_0(t);
  w_82 = t;
  t = term_c_13;
  y_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_34), w_82), term_m_34);
  z_82 = t;
  t = SSL_printnl(y_82, z_82);
  t = term_b_19;
  x_82 = t;
  t = SSL_exit(x_82);
  t = v_82;
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm b_83 = NULL;
  b_83 = t;
  if(match_string(t, "-k"))
    {
      t = b_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_83;
    }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
  c_83 = t;
  t = SSL_string_to_int(c_83);
  d_83 = t;
  t = term_p_34;
  e_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_34, d_83);
  t = j_10(e_83, d_83, t);
  t = c_83;
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = term_s_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_12, i_12, j_12, t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm g_83 = NULL;
  g_83 = t;
  if(match_string(t, "-S"))
    {
      t = g_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_83;
    }
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL;
  t = term_t_34;
  h_83 = t;
  t = term_a_19;
  i_83 = t;
  t = term_v_34;
  t = j_10(h_83, i_83, t);
  t = term_x_34;
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm v_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL;
  j_83 = t;
  t = SSL_string_to_int(j_83);
  k_83 = t;
  t = term_t_34;
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_34, k_83);
  t = j_10(l_83, k_83, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_83);
  return(t);
}
ATerm x_12 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm y_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm m_83 = NULL,n_83 = NULL;
  t = term_a_35;
  m_83 = t;
  t = term_x_25;
  n_83 = t;
  t = term_d_35;
  t = j_10(m_83, n_83, t);
  t = term_e_35;
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_f_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_12, t_12, u_12, t);
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = h_35;
      {
        ATerm k_35 = t;
        int m_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_12, w_12, x_12, t);
            ;
            LocalPopChoice(m_35);
          }
        else
          {
            t = k_35;
            t = Option_3_0(y_12, z_12, a_13, t);
          }
      }
    }
  return(t);
}
ATerm j_10 (ATerm k_59, ATerm l_59, ATerm t)
{
  ATerm o_83 = NULL;
  t = term_n_35;
  o_83 = t;
  t = SSL_table_put(o_83, k_59, l_59);
  t = (ATerm) ATmakeAppl(sym__3, term_n_35, k_59, l_59);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL;
      t = term_x_25;
      t = e_0(t);
      t_83 = t;
      t = term_o_35;
      u_83 = t;
      t = term_p_35;
      v_83 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_35, term_p_35, t_83);
      t = h_10(u_83, v_83, t_83, t);
      _fail(t);
    }
  else
    {
      ATerm y_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_83 = ATgetFirst((ATermList) t);
          s_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_83;
      t = c_0(t);
      t = term_x_25;
      t = d_0(t);
      y_83 = t;
      t = (ATerm) ATinsert(CheckATermList(s_83), y_83);
    }
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm a_84 = NULL;
  a_84 = t;
  if(match_string(t, "-o"))
    {
      t = a_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_84;
    }
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL;
  b_84 = t;
  t = term_a_33;
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_33, b_84);
  t = j_10(c_84, b_84, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_84);
  return(t);
}
ATerm e_13 (ATerm t)
{
  t = term_q_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_13, d_13, e_13, t);
  return(t);
}
ATerm h_10 (ATerm i_64, ATerm j_64, ATerm h_64, ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
  e_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_64, j_64);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_35 = ATgetArgument(t, 0);
            ATerm u_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_64, j_64);
        t = g_10(i_64, j_64, t);
        ;
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = (ATerm) ATempty;
      }
    f_84 = t;
    t = (ATerm) ATinsert(CheckATermList(f_84), h_64);
    g_84 = t;
    t = SSL_table_put(i_64, j_64, g_84);
    t = e_84;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL;
      t = term_x_25;
      t = n_0(t);
      r_84 = t;
      t = term_o_35;
      s_84 = t;
      t = term_p_35;
      t_84 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_35, term_p_35, r_84);
      t = h_10(s_84, t_84, r_84, t);
      _fail(t);
    }
  else
    {
      ATerm x_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_84 = ATgetFirst((ATermList) t);
          o_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_84;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_84 = ATgetFirst((ATermList) t);
          q_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_84;
      t = k_0(t);
      t = p_84;
      t = l_0(t);
      x_84 = t;
      t = (ATerm) ATinsert(CheckATermList(q_84), x_84);
    }
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm z_84 = NULL;
  z_84 = t;
  if(match_string(t, "-i"))
    {
      t = z_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_84;
    }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL;
  a_85 = t;
  t = term_g_34;
  b_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_34, a_85);
  t = j_10(b_85, a_85, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_85);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_y_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_13, g_13, h_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_25;
  t = whoami_0_0(t);
  c_85 = t;
  t = term_c_13;
  e_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_36), c_85);
  f_85 = t;
  t = SSL_printnl(e_85, f_85);
  t = term_b_19;
  d_85 = t;
  t = SSL_exit(d_85);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_36;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_10 (ATerm i_51, ATerm j_51, ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_51, j_51);
      ;
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      t = SSL_addr(i_51, j_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
  h_85 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_85;
      t = i_106(t);
    }
  else
    {
      ATerm m_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_85 = ATgetFirst((ATermList) t);
          j_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_85;
      t = foldr_2_0(i_106, j_106, t);
      m_85 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_85, m_85);
      t = j_106(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__2))
    {
      t_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(t_30, u_30, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_85 = NULL,m_30 = NULL,n_30 = NULL;
  t = times_0_0(t);
  n_30 = t;
  t = SSL_explode_term(n_30);
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_30;
  t = foldr_2_0(i_13, j_13, t);
  p_85 = t;
  t = SSL_TicksToSeconds(p_85);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL;
  a_86 = t;
  if(match_cons(t, sym__2))
    {
      b_86 = ATgetArgument(t, 0);
      c_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_86;
        if((b_86 != t))
          {
            _fail(t);
          }
        t = a_86;
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = (ATerm) ATmakeAppl(sym__2, b_86, c_86);
        {
          ATerm i_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_86, c_86);
              ;
              LocalPopChoice(j_36);
            }
          else
            {
              t = i_36;
              t = SSL_gtr(b_86, c_86);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_86, c_86);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm g_86 = NULL;
  g_86 = t;
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_86 = NULL;
        t = term_t_34;
        t = get_config_0_0(t);
        i_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_86, term_b_19);
        t = geq_0_0(t);
        t = g_86;
        t = z_112(t);
        ;
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = g_86;
      }
  }
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,n_86 = NULL,o_86 = NULL;
  t = run_time_0_0(t);
  k_86 = t;
  t = term_x_25;
  t = whoami_0_0(t);
  l_86 = t;
  t = term_c_13;
  n_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_36), k_86), term_m_36), l_86);
  o_86 = t;
  t = SSL_printnl(n_86, o_86);
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_36), k_86), term_m_36), l_86));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_86 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_19;
  p_86 = t;
  t = SSL_exit(p_86);
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL;
  y_86 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_86;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_86 = ATgetArgument(t, 0);
          {
            ATerm g_31 = NULL,g_6 = NULL;
            t = SSLgetAnnotations(y_86);
            g_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_86);
            g_6 = t;
            t = SSLsetAnnotations(g_6, g_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_86;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      t = fetch_1_0(l_13, t);
    }
  t = p_115(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_87 = ATgetFirst((ATermList) t);
      c_87 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_87 = NULL,h_87 = NULL;
        ATerm n_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_87)), not_null(h_87));
          return(t);
        }
        t = c_87;
        t = i_0(t);
        if(((g_87 != NULL) && (g_87 != t)))
          _fail(t);
        else
          g_87 = t;
        t = b_87;
        t = g_0(t);
        if(((h_87 != NULL) && (h_87 != t)))
          _fail(t);
        else
          h_87 = t;
        t = c_87;
        t = reverse_acc_2_0(g_0, n_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_25;
      t = i_0(t);
    }
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL,j_6 = NULL;
  n_87 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_87);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_87);
  j_6 = t;
  t = SSLsetAnnotations(j_6, l_87);
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm p_87 = NULL;
  p_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_87), term_r_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL;
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      t = fetch_1_0(o_13, t);
    }
  t = term_u_36;
  t = echo_0_0(t);
  t = term_o_35;
  j_87 = t;
  t = term_p_35;
  k_87 = t;
  t = term_v_36;
  t = g_10(j_87, k_87, t);
  t = reverse_acc_2_0(_id, q_13, t);
  t = map_1_0(r_13, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm o_88 (ATerm t)
  {
    ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
    l_88 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_88 = ATgetFirst((ATermList) t);
        n_88 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_36 = t;
      int x_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_31 = NULL,s_31 = NULL,m_6 = NULL;
          t = SSLgetAnnotations(l_88);
          p_31 = t;
          t = m_88;
          t = k_96(t);
          s_31 = t;
          t = (ATerm) ATinsert(CheckATermList(n_88), s_31);
          m_6 = t;
          t = SSLsetAnnotations(m_6, p_31);
          ;
          LocalPopChoice(x_36);
        }
      else
        {
          t = w_36;
          {
            ATerm d_32 = NULL,h_32 = NULL,n_6 = NULL;
            t = SSLgetAnnotations(l_88);
            d_32 = t;
            t = n_88;
            t = o_88(t);
            h_32 = t;
            t = (ATerm) ATinsert(CheckATermList(h_32), m_88);
            n_6 = t;
            t = SSLsetAnnotations(n_6, d_32);
          }
        }
    }
    return(t);
  }
  t = o_88(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
  s_88 = t;
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_88;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_37 = ATgetFirst((ATermList) t);
                ATerm b_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_88;
          }
        ;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        t = (ATerm) ATinsert(ATempty, s_88);
      }
    t_88 = t;
    t = term_c_33;
    u_88 = t;
    t = SSL_printnl(u_88, t_88);
    t = s_88;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_36;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_10 (ATerm r_47, ATerm s_47, ATerm t)
{
  t = SSL_strcat(r_47, s_47);
  return(t);
}
ATerm debug_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL;
  y_88 = t;
  t = n_111(t);
  z_88 = t;
  t = term_c_13;
  a_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_88), z_88);
  b_89 = t;
  t = SSL_printnl(a_89, b_89);
  t = y_88;
  return(t);
}
ATerm map_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm v_89 (ATerm t)
  {
    ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL;
    s_89 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_89;
      }
    else
      {
        ATerm b_33 = NULL,m_33 = NULL,n_33 = NULL,c_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_89 = ATgetFirst((ATermList) t);
            u_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_89);
        b_33 = t;
        t = t_89;
        t = a_96(t);
        m_33 = t;
        t = u_89;
        t = v_89(t);
        n_33 = t;
        t = (ATerm) ATinsert(CheckATermList(n_33), m_33);
        c_8 = t;
        t = SSLsetAnnotations(c_8, b_33);
      }
    return(t);
  }
  t = v_89(t);
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
    }
  return(t);
}
ATerm x_13 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_90 = NULL;
      g_90 = t;
      t = SSL_is_string(g_90);
      ;
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_13, t);
            ;
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            {
              ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
              m_90 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_90 = ATgetArgument(t, 0);
                  t = n_90;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_90 = ATgetArgument(t, 0);
                      t = n_90;
                      {
                        ATerm j_37 = t;
                        int k_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_37);
                          }
                        else
                          {
                            t = j_37;
                            t = debug_1_0(x_13, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_90 = NULL,t_90 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_90 = ATgetArgument(t, 0);
                          o_90 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_90;
                      t = eval_config_0_0(t);
                      s_90 = t;
                      t = o_90;
                      t = eval_config_0_0(t);
                      t_90 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_90, t_90);
                      t = f_10(s_90, t_90, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_10 (ATerm z_65, ATerm a_66, ATerm t)
{
  t = SSL_table_get(z_65, a_66);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL;
  x_90 = t;
  t = term_n_35;
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_35, x_90);
  t = g_10(y_90, x_90, t);
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_90 = NULL,a_91 = NULL;
        t = eval_config_0_0(t);
        z_90 = t;
        t = term_n_35;
        a_91 = t;
        t = SSL_table_put(a_91, x_90, z_90);
        t = z_90;
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
      }
  }
  return(t);
}
ATerm z_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm f_91 = NULL,g_91 = NULL;
  t = term_t_37;
  f_91 = t;
  t = term_x_25;
  g_91 = t;
  t = term_a_38;
  t = j_10(f_91, g_91, t);
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_14 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL;
  t = term_t_37;
  j_91 = t;
  t = term_x_25;
  k_91 = t;
  t = term_a_38;
  t = j_10(j_91, k_91, t);
  t = term_d_38;
  h_91 = t;
  t = term_x_25;
  i_91 = t;
  t = term_h_38;
  t = j_10(h_91, i_91, t);
  t = term_i_38;
  return(t);
}
ATerm l_14 (ATerm t)
{
  t = term_j_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_13, a_14, g_14, t);
      ;
      LocalPopChoice(m_38);
    }
  else
    {
      t = k_38;
      t = Option_3_0(h_14, j_14, l_14, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_117 (ATerm), ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL,t_91 = NULL,u_91 = NULL,w_91 = NULL,x_91 = NULL,g_8 = NULL;
  p_91 = t;
  {
    ATerm o_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_38;
        t = s_117(t);
        ;
        LocalPopChoice(p_38);
      }
    else
      {
        t = o_38;
      }
    t = p_91;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_91 = ATgetFirst((ATermList) t);
        u_91 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_91);
    q_91 = t;
    t = term_c_36;
    x_91 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_36, t_91);
    t = j_10(x_91, t_91, t);
    t = u_91;
    {
      ATerm h_92 (ATerm t)
      {
        ATerm r_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_38 = t;
            int y_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_92 = NULL;
                a_92 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_92;
                ;
                LocalPopChoice(y_38);
              }
            else
              {
                t = x_38;
                t = s_117(t);
                t = Cons_2_0(_id, h_92, t);
              }
            ;
            LocalPopChoice(s_38);
          }
        else
          {
            t = r_38;
            {
              ATerm d_92 = NULL,e_92 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_92 = ATgetFirst((ATermList) t);
                  e_92 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_92), (ATerm) ATmakeAppl(sym_Undefined_1, d_92));
            }
          }
        return(t);
      }
      t = h_92(t);
      w_91 = t;
      t = (ATerm) ATinsert(CheckATermList(w_91), (ATerm) ATmakeAppl(sym_Program_1, t_91));
      g_8 = t;
      t = SSLsetAnnotations(g_8, q_91);
    }
  }
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm t_92 = NULL;
  t_92 = t;
  if(match_string(t, "--help"))
    {
      t = t_92;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_92;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_92;
        }
    }
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL;
  t = term_q_36;
  u_92 = t;
  t = term_x_25;
  v_92 = t;
  t = term_z_38;
  t = j_10(u_92, v_92, t);
  t = term_a_39;
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm s_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_117 (ATerm), ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL;
  o_92 = t;
  t = term_o_35;
  q_92 = t;
  t = term_p_35;
  r_92 = t;
  t = (ATerm) ATempty;
  s_92 = t;
  t = SSL_table_put(q_92, r_92, s_92);
  t = o_92;
  {
    ATerm o_14 (ATerm t)
    {
      ATerm c_39 = t;
      int d_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_117(t);
          ;
          LocalPopChoice(d_39);
        }
      else
        {
          t = c_39;
          {
            ATerm e_39 = t;
            int f_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_14, q_14, r_14, t);
                ;
                LocalPopChoice(f_39);
              }
            else
              {
                t = e_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_14, t);
    {
      ATerm i_39 = t;
      int j_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_93 = NULL;
          c_93 = t;
          {
            ATerm k_39 = t;
            int m_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_34 = NULL;
                t = c_93;
                {
                  ATerm p_39 = t;
                  int q_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_36;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_39);
                    }
                  else
                    {
                      t = p_39;
                      t = fetch_1_0(s_14, t);
                    }
                  t = c_93;
                  t = default_system_usage_0_0(t);
                  t = term_a_19;
                  h_34 = t;
                  t = SSL_exit(h_34);
                }
                ;
                LocalPopChoice(m_39);
              }
            else
              {
                t = k_39;
                {
                  ATerm q_34 = NULL;
                  t = term_t_37;
                  t = get_config_0_0(t);
                  t = c_93;
                  t = default_system_about_0_0(t);
                  t = term_a_19;
                  q_34 = t;
                  t = SSL_exit(q_34);
                }
              }
          }
          ;
          LocalPopChoice(j_39);
        }
      else
        {
          t = i_39;
          {
            ATerm r_39 = t;
            int s_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL;
                ATerm u_14 (ATerm t)
                {
                  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,e_9 = NULL;
                  i_93 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_93 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_93);
                  g_93 = t;
                  t = h_93;
                  if(((m_92 != NULL) && (m_92 != t)))
                    _fail(t);
                  else
                    m_92 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_93);
                  e_9 = t;
                  t = SSLsetAnnotations(e_9, g_93);
                  return(t);
                }
                t = fetch_1_0(u_14, t);
                t = term_c_13;
                e_93 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_92)), term_x_39);
                f_93 = t;
                t = SSL_printnl(e_93, f_93);
                t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_92)), term_x_39));
                t = default_system_usage_0_0(t);
                t = term_b_19;
                d_93 = t;
                t = SSL_exit(d_93);
                ;
                LocalPopChoice(s_39);
              }
            else
              {
                t = r_39;
              }
          }
        }
      n_92 = t;
      t = term_o_35;
      p_92 = t;
      t = SSL_table_destroy(p_92);
      t = n_92;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL;
  t = parse_options_1_0(r_115, t);
  p_93 = t;
  t = term_y_39;
  s_93 = t;
  t = SSL_table_create(s_93);
  t = term_y_39;
  q_93 = t;
  t = term_z_39;
  r_93 = t;
  t = SSL_table_put(q_93, r_93, p_93);
  t = p_93;
  t = t_115(t);
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_115, t);
        ;
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        {
          ATerm d_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_115(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_40);
            }
          else
            {
              t = d_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_40);
    }
  else
    {
      t = f_40;
      {
        ATerm h_40 = t;
        int i_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(i_40);
          }
        else
          {
            t = h_40;
            {
              ATerm j_40 = t;
              int k_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_14, z_14, a_15, t);
                  ;
                  LocalPopChoice(k_40);
                }
              else
                {
                  t = j_40;
                  {
                    ATerm l_40 = t;
                    int m_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(m_40);
                      }
                    else
                      {
                        t = l_40;
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
ATerm w_14 (ATerm t)
{
  t = input_1_0(b_15, t);
  return(t);
}
ATerm y_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL;
  t = term_f_33;
  u_93 = t;
  t = term_x_25;
  v_93 = t;
  t = term_n_40;
  t = j_10(u_93, v_93, t);
  t = term_o_40;
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = output_1_0(c_15, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,s_10 = NULL,r_10 = NULL;
  g_94 = t;
  if(match_cons(t, sym_Specification_1))
    {
      y_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_94);
  x_93 = t;
  t = y_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_94 = ATgetFirst((ATermList) t);
      d_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_93);
  z_93 = t;
  t = d_94;
  t = Cons_2_0(d_15, e_15, t);
  e_94 = t;
  t = (ATerm) ATinsert(CheckATermList(e_94), a_94);
  r_10 = t;
  t = SSLsetAnnotations(r_10, z_93);
  f_94 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_94);
  s_10 = t;
  t = SSLsetAnnotations(s_10, x_93);
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,i_9 = NULL;
  k_94 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_94);
  h_94 = t;
  t = i_94;
  t = all_defs_0_0(t);
  j_94 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, j_94);
  i_9 = t;
  t = SSLsetAnnotations(i_9, h_94);
  return(t);
}
ATerm e_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_14, default_usage_0_0, _id, w_14, t);
  return(t);
}
