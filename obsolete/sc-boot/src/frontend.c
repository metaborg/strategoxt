#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Scopes_0;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_TNil_0 = ATmakeSymbol("TNil", 0, ATfalse);
  ATprotectSymbol(sym_TNil_0);
  sym_TCons_2 = ATmakeSymbol("TCons", 2, ATfalse);
  ATprotectSymbol(sym_TCons_2);
  sym_Pair_2 = ATmakeSymbol("Pair", 2, ATfalse);
  ATprotectSymbol(sym_Pair_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm q_49 (ATerm), ATerm r_49 (ATerm));
ATerm Con_3 (ATerm, ATerm n_49 (ATerm), ATerm o_49 (ATerm), ATerm p_49 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm w_73 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm y_50 (ATerm));
ATerm Specification_1 (ATerm, ATerm a_51 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm g_54 (ATerm));
ATerm Rec_2 (ATerm, ATerm z_51 (ATerm), ATerm a_52 (ATerm));
ATerm Let_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm sboundin_3 (ATerm, ATerm h_54 (ATerm), ATerm i_54 (ATerm), ATerm j_54 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm y_51 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm a_57 (ATerm, ATerm (ATerm)), ATerm b_57 (ATerm), ATerm c_57 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_57 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm debug_1 (ATerm, ATerm b_61 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm FunType_2 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm ConstType_1 (ATerm, ATerm b_51 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm));
ATerm CheckCons_2 (ATerm, ATerm w_53 (ATerm), ATerm x_53 (ATerm));
ATerm manytd_1 (ATerm, ATerm e_75 (ATerm));
ATerm check_constructors_1 (ATerm, ATerm l_0 (ATerm));
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm f_55 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm o_51 (ATerm), ATerm p_51 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm c_54 (ATerm));
ATerm Var_1 (ATerm, ATerm k_51 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm y_56 (ATerm), ATerm z_56 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm m_56 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm d_71 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm i_71 (ATerm));
ATerm substitute_6 (ATerm, ATerm k_57 (ATerm), ATerm l_57 (ATerm, ATerm (ATerm)), ATerm m_57 (ATerm), ATerm n_57 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_57 (ATerm, ATerm (ATerm)), ATerm p_57 (ATerm));
ATerm substitute_5 (ATerm, ATerm r_57 (ATerm), ATerm s_57 (ATerm, ATerm (ATerm)), ATerm t_57 (ATerm), ATerm u_57 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_57 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm d_55 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm e_55 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm Overlay_3 (ATerm, ATerm s_50 (ATerm), ATerm t_50 (ATerm), ATerm u_50 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm v_67 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm z_53 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm d_50 (ATerm), ATerm e_50 (ATerm), ATerm f_50 (ATerm));
ATerm BAM_3 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm), ATerm m_49 (ATerm));
ATerm BA_2 (ATerm, ATerm i_49 (ATerm), ATerm j_49 (ATerm));
ATerm AM_2 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm));
ATerm MA_2 (ATerm, ATerm e_49 (ATerm), ATerm f_49 (ATerm));
ATerm Match_1 (ATerm, ATerm z_52 (ATerm));
ATerm Build_1 (ATerm, ATerm a_53 (ATerm));
ATerm constructs_1 (ATerm, ATerm y_53 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm l_50 (ATerm), ATerm m_50 (ATerm), ATerm n_50 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm w_50 (ATerm));
ATerm Signature_1 (ATerm, ATerm v_50 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm strings_to_vars_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm new_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm SplitDynamicRule_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm x_76 (ATerm));
ATerm one_dist_1 (ATerm, ATerm e_71 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm t_71 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm r_70 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm o_50 (ATerm));
ATerm Scope_2 (ATerm, ATerm d_53 (ATerm), ATerm e_53 (ATerm));
ATerm tboundin_3 (ATerm, ATerm d_54 (ATerm), ATerm e_54 (ATerm), ATerm f_54 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm l_64 (ATerm));
ATerm crush_3 (ATerm, ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm b_66 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm));
ATerm for_3 (ATerm, ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm));
ATerm HdMember_1 (ATerm, ATerm o_65 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm j_55 (ATerm), ATerm k_55 (ATerm), ATerm l_55 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm i_72 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm f_57 (ATerm), ATerm g_57 (ATerm));
ATerm alltd_1 (ATerm, ATerm k_74 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm));
ATerm zip_1 (ATerm, ATerm c_68 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm h_57 (ATerm), ATerm i_57 (ATerm));
ATerm substitute_1 (ATerm, ATerm j_57 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm p_63 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_64 (ATerm), ATerm i_64 (ATerm));
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_72 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm i_53 (ATerm), ATerm j_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_60 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_62 (ATerm), ATerm y_62 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_60 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_58 (ATerm));
ATerm map_1 (ATerm, ATerm p_69 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_75 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_58 (ATerm));
ATerm Program_1 (ATerm, ATerm j_44 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_44 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_76 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_58 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_53 (ATerm), ATerm n_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_58 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_59 (ATerm), ATerm s_59 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_59 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
  j_5 = t;
  h_5 :
  if(match_cons(j_5, sym_ExplodeCong_2))
    {
      k_5 = ATgetArgument(j_5, 0);
      i_5 = ATgetArgument(j_5, 1);
      {
        ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
        ATerm r_5 = NULL;
        ATerm s_5 = NULL;
        t = new_0(t);
        r_5 = t;
        if(n_5 != NULL && n_5 != r_5)
          _fail(r_5);
        else
          n_5 = r_5;
        {
          ATerm t_5 = NULL;
          t = new_0(t);
          s_5 = t;
          if(o_5 != NULL && o_5 != s_5)
            _fail(s_5);
          else
            o_5 = s_5;
          {
            ATerm u_5 = NULL;
            t = new_0(t);
            t_5 = t;
            if(p_5 != NULL && p_5 != t_5)
              _fail(t_5);
            else
              p_5 = t_5;
            t = new_0(t);
            u_5 = t;
            if(q_5 != NULL && q_5 != u_5)
              _fail(u_5);
            else
              q_5 = u_5;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_5), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_5)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(k_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_5))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_5))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_5)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_5)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
      }
    }
  else
    {
      if(match_cons(j_5, sym_Build_1))
        {
          k_5 = ATgetArgument(j_5, 0);
          {
            ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL;
            ATerm a_6 = NULL;
            ATerm e_6 = NULL;
            t = new_0(t);
            a_6 = t;
            if(y_5 != NULL && y_5 != a_6)
              _fail(a_6);
            else
              y_5 = a_6;
            t = not_null(k_5);
            {
              ATerm a_0 (ATerm t)
              {
                ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
                b_6 = t;
                a_5 :
                if(match_cons(b_6, sym_Explode_2))
                  {
                    c_6 = ATgetArgument(b_6, 0);
                    d_6 = ATgetArgument(b_6, 1);
                    if(w_5 != NULL && w_5 != c_6)
                      _fail(c_6);
                    else
                      w_5 = c_6;
                    if(x_5 != NULL && x_5 != d_6)
                      _fail(d_6);
                    else
                      x_5 = d_6;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_5));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, a_0);
              e_6 = t;
              if(z_5 != NULL && z_5 != e_6)
                _fail(e_6);
              else
                z_5 = e_6;
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_5), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_5))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_5)))));
          }
        }
      else
        {
          if(match_cons(j_5, sym_Match_1))
            {
              k_5 = ATgetArgument(j_5, 0);
              {
                ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
                ATerm l_6 = NULL;
                ATerm m_6 = NULL;
                t = new_0(t);
                l_6 = t;
                if(i_6 != NULL && i_6 != l_6)
                  _fail(l_6);
                else
                  i_6 = l_6;
                {
                  ATerm q_6 = NULL;
                  t = new_0(t);
                  m_6 = t;
                  if(j_6 != NULL && j_6 != m_6)
                    _fail(m_6);
                  else
                    j_6 = m_6;
                  t = not_null(k_5);
                  {
                    ATerm b_0 (ATerm t)
                    {
                      ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
                      n_6 = t;
                      f_5 :
                      if(match_cons(n_6, sym_Explode_2))
                        {
                          o_6 = ATgetArgument(n_6, 0);
                          p_6 = ATgetArgument(n_6, 1);
                          if(g_6 != NULL && g_6 != o_6)
                            _fail(o_6);
                          else
                            g_6 = o_6;
                          if(h_6 != NULL && h_6 != p_6)
                            _fail(p_6);
                          else
                            h_6 = p_6;
                          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_6));
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, b_0);
                    q_6 = t;
                    if(k_6 != NULL && k_6 != q_6)
                      _fail(q_6);
                    else
                      k_6 = q_6;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_6), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_6)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_6), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_6))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_6)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_6)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_Match_1))
    {
      q_7 = ATgetArgument(p_7, 0);
      {
        ATerm q_10 = t;
        if(PushChoice()==0)
          {
            ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
            ATerm v_7 = NULL;
            ATerm y_7 = NULL;
            t = new_0(t);
            v_7 = t;
            if(t_7 != NULL && t_7 != v_7)
              _fail(v_7);
            else
              t_7 = v_7;
            t = not_null(q_7);
            {
              ATerm c_0 (ATerm t)
              {
                ATerm w_7 = NULL,x_7 = NULL;
                w_7 = t;
                j_7 :
                if(match_cons(w_7, sym_RootApp_1))
                  {
                    x_7 = ATgetArgument(w_7, 0);
                    if(s_7 != NULL && s_7 != x_7)
                      _fail(x_7);
                    else
                      s_7 = x_7;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_7));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, c_0);
              y_7 = t;
              if(u_7 != NULL && u_7 != y_7)
                _fail(y_7);
              else
                u_7 = y_7;
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_7)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_7))), not_null(s_7))));
            PopChoice();
          }
        else
          {
            t = q_10;
            {
              ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
              ATerm g_8 = NULL;
              t = not_null(q_7);
              {
                ATerm m_0 (ATerm t)
                {
                  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
                  d_8 = t;
                  m_7 :
                  if(match_cons(d_8, sym_App_2))
                    {
                      e_8 = ATgetArgument(d_8, 0);
                      f_8 = ATgetArgument(d_8, 1);
                      if(a_8 != NULL && a_8 != e_8)
                        _fail(e_8);
                      else
                        a_8 = e_8;
                      if(b_8 != NULL && b_8 != f_8)
                        _fail(f_8);
                      else
                        b_8 = f_8;
                      t = (ATerm) ATmakeAppl(sym_Wld_0);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, m_0);
                g_8 = t;
                if(c_8 != NULL && c_8 != g_8)
                  _fail(g_8);
                else
                  c_8 = g_8;
              }
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_8)), (ATerm) ATmakeAppl(sym_BA_2, not_null(a_8), not_null(b_8)));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp1_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
  s_8 = t;
  q_8 :
  if(match_cons(s_8, sym_Match_1))
    {
      t_8 = ATgetArgument(s_8, 0);
      r_8 :
      if(match_cons(t_8, sym_RootApp_1))
        {
          u_8 = ATgetArgument(t_8, 0);
          t = not_null(u_8);
        }
      else
        {
          if(match_cons(t_8, sym_App_2))
            {
              u_8 = ATgetArgument(t_8, 0);
              v_8 = ATgetArgument(t_8, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(u_8), not_null(v_8));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp0_0 (ATerm t)
{
  ATerm p_9 = NULL,g_12 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym_Match_1))
    {
      g_12 = ATgetArgument(p_9, 0);
      {
        ATerm i_12 = NULL,j_12 = NULL;
        ATerm n_12 = NULL;
        t = not_null(g_12);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
            k_12 = t;
            d_9 :
            if(match_cons(k_12, sym_RootApp_1))
              {
                l_12 = ATgetArgument(k_12, 0);
                e_9 :
                if(match_cons(l_12, sym_Match_1))
                  {
                    m_12 = ATgetArgument(l_12, 0);
                    if(i_12 != NULL && i_12 != m_12)
                      _fail(m_12);
                    else
                      i_12 = m_12;
                    t = not_null(i_12);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, n_0);
          n_12 = t;
          if(j_12 != NULL && j_12 != n_12)
            _fail(n_12);
          else
            j_12 = n_12;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(j_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  c_17 = t;
  d_16 :
  if(match_cons(c_17, sym_Build_1))
    {
      d_17 = ATgetArgument(c_17, 0);
      {
        ATerm r_10 = t;
        if(PushChoice()==0)
          {
            ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
            ATerm o_18 = NULL;
            ATerm y_18 = NULL;
            t = new_0(t);
            o_18 = t;
            if(m_18 != NULL && m_18 != o_18)
              _fail(o_18);
            else
              m_18 = o_18;
            t = not_null(d_17);
            {
              ATerm o_0 (ATerm t)
              {
                ATerm w_18 = NULL,x_18 = NULL;
                w_18 = t;
                c_15 :
                if(match_cons(w_18, sym_RootApp_1))
                  {
                    x_18 = ATgetArgument(w_18, 0);
                    if(l_18 != NULL && l_18 != x_18)
                      _fail(x_18);
                    else
                      l_18 = x_18;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_18));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, o_0);
              y_18 = t;
              if(n_18 != NULL && n_18 != y_18)
                _fail(y_18);
              else
                n_18 = y_18;
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_18), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_18))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_18))));
            PopChoice();
          }
        else
          {
            t = r_10;
            {
              ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
              ATerm o_19 = NULL;
              ATerm s_19 = NULL;
              t = new_0(t);
              o_19 = t;
              if(m_19 != NULL && m_19 != o_19)
                _fail(o_19);
              else
                m_19 = o_19;
              t = not_null(d_17);
              {
                ATerm p_0 (ATerm t)
                {
                  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
                  p_19 = t;
                  b_16 :
                  if(match_cons(p_19, sym_App_2))
                    {
                      q_19 = ATgetArgument(p_19, 0);
                      r_19 = ATgetArgument(p_19, 1);
                      if(k_19 != NULL && k_19 != q_19)
                        _fail(q_19);
                      else
                        k_19 = q_19;
                      if(l_19 != NULL && l_19 != r_19)
                        _fail(r_19);
                      else
                        l_19 = r_19;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_19));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, p_0);
                s_19 = t;
                if(n_19 != NULL && n_19 != s_19)
                  _fail(s_19);
                else
                  n_19 = s_19;
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_19), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(k_19), not_null(l_19), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_19)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_19))));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  h_20 = t;
  d_20 :
  if(match_cons(h_20, sym_Build_1))
    {
      i_20 = ATgetArgument(h_20, 0);
      g_20 :
      if(match_cons(i_20, sym_RootApp_1))
        {
          j_20 = ATgetArgument(i_20, 0);
          t = not_null(j_20);
        }
      else
        {
          if(match_cons(i_20, sym_App_2))
            {
              j_20 = ATgetArgument(i_20, 0);
              k_20 = ATgetArgument(i_20, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_20)), not_null(j_20));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp0_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym_Build_1))
    {
      j_22 = ATgetArgument(i_22, 0);
      {
        ATerm s_10 = t;
        if(PushChoice()==0)
          {
            ATerm l_22 = NULL,m_22 = NULL;
            ATerm q_22 = NULL;
            t = not_null(j_22);
            {
              ATerm q_0 (ATerm t)
              {
                ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
                n_22 = t;
                x_21 :
                if(match_cons(n_22, sym_RootApp_1))
                  {
                    o_22 = ATgetArgument(n_22, 0);
                    y_21 :
                    if(match_cons(o_22, sym_Build_1))
                      {
                        p_22 = ATgetArgument(o_22, 0);
                        if(l_22 != NULL && l_22 != p_22)
                          _fail(p_22);
                        else
                          l_22 = p_22;
                        t = not_null(l_22);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, q_0);
              q_22 = t;
              if(m_22 != NULL && m_22 != q_22)
                _fail(q_22);
              else
                m_22 = q_22;
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_22));
            PopChoice();
          }
        else
          {
            t = s_10;
            {
              ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
              ATerm a_23 = NULL;
              t = not_null(j_22);
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
                  v_22 = t;
                  b_22 :
                  if(match_cons(v_22, sym_App_2))
                    {
                      w_22 = ATgetArgument(v_22, 0);
                      y_22 = ATgetArgument(v_22, 1);
                      c_22 :
                      if(match_cons(w_22, sym_Build_1))
                        {
                          x_22 = ATgetArgument(w_22, 0);
                          if(t_22 != NULL && t_22 != x_22)
                            _fail(x_22);
                          else
                            t_22 = x_22;
                          if(s_22 != NULL && s_22 != y_22)
                            _fail(y_22);
                          else
                            s_22 = y_22;
                          t = not_null(t_22);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, r_0);
                a_23 = t;
                if(u_22 != NULL && u_22 != a_23)
                  _fail(a_23);
                else
                  u_22 = a_23;
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_22));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm j_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  v_24 = t;
  c_24 :
  if(match_cons(v_24, sym_InfixApp_3))
    {
      w_24 = ATgetArgument(v_24, 0);
      s_24 = ATgetArgument(v_24, 1);
      j_24 = ATgetArgument(v_24, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(s_24), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
    }
  else
    {
      if(match_cons(v_24, sym_BAM_3))
        {
          w_24 = ATgetArgument(v_24, 0);
          s_24 = ATgetArgument(v_24, 1);
          j_24 = ATgetArgument(v_24, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_24)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_24)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(v_24, sym_AM_2))
            {
              w_24 = ATgetArgument(v_24, 0);
              s_24 = ATgetArgument(v_24, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_24), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_24)));
            }
          else
            {
              if(match_cons(v_24, sym_MA_2))
                {
                  w_24 = ATgetArgument(v_24, 0);
                  s_24 = ATgetArgument(v_24, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_24)), not_null(s_24));
                }
              else
                {
                  if(match_cons(v_24, sym_BA_2))
                    {
                      w_24 = ATgetArgument(v_24, 0);
                      s_24 = ATgetArgument(v_24, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_24)), not_null(w_24));
                    }
                  else
                    {
                      if(match_cons(v_24, sym_Lets_2))
                        {
                          w_24 = ATgetArgument(v_24, 0);
                          s_24 = ATgetArgument(v_24, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_24), not_null(s_24));
                        }
                      else
                        {
                          if(match_cons(v_24, sym_LChoices_1))
                            {
                              w_24 = ATgetArgument(v_24, 0);
                              d_24 :
                              if(match_cons(w_24, sym_Cons_2))
                                {
                                  t_24 = ATgetArgument(w_24, 0);
                                  u_24 = ATgetArgument(w_24, 1);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_24), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_24)));
                                }
                              else
                                {
                                  if(match_cons(w_24, sym_Nil_0))
                                    t = (ATerm) ATmakeAppl(sym_Fail_0);
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(v_24, sym_Choices_1))
                                {
                                  w_24 = ATgetArgument(v_24, 0);
                                  e_24 :
                                  if(match_cons(w_24, sym_Cons_2))
                                    {
                                      t_24 = ATgetArgument(w_24, 0);
                                      u_24 = ATgetArgument(w_24, 1);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_24), (ATerm) ATmakeAppl(sym_Choices_1, not_null(u_24)));
                                    }
                                  else
                                    {
                                      if(match_cons(w_24, sym_Nil_0))
                                        t = (ATerm) ATmakeAppl(sym_Fail_0);
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(v_24, sym_Seqs_1))
                                    {
                                      w_24 = ATgetArgument(v_24, 0);
                                      i_24 :
                                      if(match_cons(w_24, sym_Cons_2))
                                        {
                                          t_24 = ATgetArgument(w_24, 0);
                                          u_24 = ATgetArgument(w_24, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_24), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_24)));
                                        }
                                      else
                                        {
                                          if(match_cons(w_24, sym_Nil_0))
                                            t = (ATerm) ATmakeAppl(sym_Id_0);
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    _fail(t);
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
ATerm Wld_0 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  k_26 :
  if(!(match_cons(l_26, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm t_10 = t;
  if(PushChoice()==0)
    {
      ATerm s_0 (ATerm t)
      {
        ATerm u_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = u_10;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, s_0);
      PopChoice();
      _fail(t);
    }
  else
    t = t_10;
  return(t);
}
ATerm App_2 (ATerm t, ATerm q_49 (ATerm), ATerm r_49 (ATerm))
{
  ATerm q_26 = NULL,t_26 = NULL,u_26 = NULL;
  q_26 = t;
  p_26 :
  if(match_cons(q_26, sym_App_2))
    {
      t_26 = ATgetArgument(q_26, 0);
      u_26 = ATgetArgument(q_26, 1);
      {
        ATerm x_26 = NULL;
        t = not_null(t_26);
        {
          ATerm z_26 = NULL;
          t = q_49(t);
          x_26 = t;
          t = not_null(u_26);
          t = r_49(t);
          z_26 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_26), not_null(z_26));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm n_49 (ATerm), ATerm o_49 (ATerm), ATerm p_49 (ATerm))
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym_Con_3))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      m_27 = ATgetArgument(j_27, 2);
      {
        ATerm q_27 = NULL;
        t = not_null(k_27);
        {
          ATerm s_27 = NULL;
          t = n_49(t);
          q_27 = t;
          t = not_null(l_27);
          {
            ATerm u_27 = NULL;
            t = o_49(t);
            s_27 = t;
            t = not_null(m_27);
            t = p_49(t);
            u_27 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(q_27), not_null(s_27), not_null(u_27));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pureterm_0 (ATerm t)
{
  ATerm v_10 = t;
  if(PushChoice()==0)
    {
      ATerm t_0 (ATerm t)
      {
        ATerm w_10 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = w_10;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, t_0);
      PopChoice();
      _fail(t);
    }
  else
    t = v_10;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  f_28 = t;
  d_28 :
  if(match_cons(f_28, sym_SRule_1))
    {
      g_28 = ATgetArgument(f_28, 0);
      e_28 :
      if(match_cons(g_28, sym_StratRule_3))
        {
          h_28 = ATgetArgument(g_28, 0);
          i_28 = ATgetArgument(g_28, 1);
          j_28 = ATgetArgument(g_28, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(j_28)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_28), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(g_28, sym_Rule_3))
            {
              h_28 = ATgetArgument(g_28, 0);
              i_28 = ATgetArgument(g_28, 1);
              j_28 = ATgetArgument(g_28, 2);
              t = not_null(h_28);
              t = pureterm_0(t);
              t = not_null(i_28);
              t = buildterm_0(t);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_28)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(j_28)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_28)), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm t_28 (ATerm t)
  {
    ATerm x_10 = t;
    if(PushChoice()==0)
      {
        t = w_73(t);
        PopChoice();
      }
    else
      {
        t = x_10;
        t = _one(t, t_28);
      }
    return(t);
  }
  t = t_28(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
  k_29 = t;
  i_29 :
  if(match_cons(k_29, sym_SRule_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      j_29 :
      if(match_cons(l_29, sym_Rule_3))
        {
          m_29 = ATgetArgument(l_29, 0);
          n_29 = ATgetArgument(l_29, 1);
          o_29 = ATgetArgument(l_29, 2);
          {
            ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
            ATerm a_30 = NULL;
            ATerm g_30 = NULL;
            t = new_0(t);
            a_30 = t;
            if(x_29 != NULL && x_29 != a_30)
              _fail(a_30);
            else
              x_29 = a_30;
            t = not_null(m_29);
            {
              ATerm o_30 = NULL;
              ATerm u_0 (ATerm t)
              {
                ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
                b_30 = t;
                x_28 :
                if(match_cons(b_30, sym_Con_3))
                  {
                    c_30 = ATgetArgument(b_30, 0);
                    e_30 = ATgetArgument(b_30, 1);
                    f_30 = ATgetArgument(b_30, 2);
                    y_28 :
                    if(match_cons(c_30, sym_Var_1))
                      {
                        d_30 = ATgetArgument(c_30, 0);
                        if(w_29 != NULL && w_29 != d_30)
                          _fail(d_30);
                        else
                          w_29 = d_30;
                        if(u_29 != NULL && u_29 != e_30)
                          _fail(e_30);
                        else
                          u_29 = e_30;
                        if(s_29 != NULL && s_29 != f_30)
                          _fail(f_30);
                        else
                          s_29 = f_30;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_29));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, u_0);
              g_30 = t;
              if(y_29 != NULL && y_29 != g_30)
                _fail(g_30);
              else
                y_29 = g_30;
              t = not_null(n_29);
              {
                ATerm v_0 (ATerm t)
                {
                  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
                  h_30 = t;
                  d_29 :
                  if(match_cons(h_30, sym_Con_3))
                    {
                      i_30 = ATgetArgument(h_30, 0);
                      k_30 = ATgetArgument(h_30, 1);
                      l_30 = ATgetArgument(h_30, 2);
                      e_29 :
                      if(match_cons(i_30, sym_Var_1))
                        {
                          j_30 = ATgetArgument(i_30, 0);
                          f_29 :
                          if(match_cons(l_30, sym_Call_2))
                            {
                              m_30 = ATgetArgument(l_30, 0);
                              n_30 = ATgetArgument(l_30, 1);
                              g_29 :
                              if(match_cons(n_30, sym_Nil_0))
                                {
                                  if(w_29 != NULL && w_29 != j_30)
                                    _fail(j_30);
                                  else
                                    w_29 = j_30;
                                  if(v_29 != NULL && v_29 != k_30)
                                    _fail(k_30);
                                  else
                                    v_29 = k_30;
                                  if(t_29 != NULL && t_29 != m_30)
                                    _fail(m_30);
                                  else
                                    t_29 = m_30;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_29));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, v_0);
                o_30 = t;
                if(z_29 != NULL && z_29 != o_30)
                  _fail(o_30);
                else
                  z_29 = o_30;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_29), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_29), not_null(z_29), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_29), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(t_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_29), not_null(v_29), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_29)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_29)))))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm desugarRule_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm y_10 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = y_10;
        {
          ATerm z_10 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = z_10;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm a_11 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = a_11;
            {
              ATerm b_11 = t;
              if(PushChoice()==0)
                {
                  ATerm c_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = c_11;
                      {
                        ATerm d_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = d_11;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = b_11;
                  {
                    ATerm e_11 = t;
                    if(PushChoice()==0)
                      {
                        ATerm f_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Mapp0_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = f_11;
                            {
                              ATerm g_11 = t;
                              if(PushChoice()==0)
                                {
                                  t = Mapp1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = g_11;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        PopChoice();
                      }
                    else
                      {
                        t = e_11;
                        t = Expl_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, y_0);
    }
    return(t);
  }
  t = topdown_1(t, x_0);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, z_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm y_50 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym_Strategies_1))
    {
      a_31 = ATgetArgument(z_30, 0);
      {
        ATerm c_31 = NULL;
        t = not_null(a_31);
        t = y_50(t);
        c_31 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_31));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm a_51 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL;
  j_31 = t;
  i_31 :
  if(match_cons(j_31, sym_Specification_1))
    {
      k_31 = ATgetArgument(j_31, 0);
      {
        ATerm m_31 = NULL;
        t = not_null(k_31);
        t = a_51(t);
        m_31 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(m_31));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_cons(s_31, sym_Cons_2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      t = not_null(t_31);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm g_54 (ATerm))
{
  ATerm h_11 = t;
  if(PushChoice()==0)
    {
      ATerm a_1 (ATerm t)
      {
        t = split_2(t, _id, g_54);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,t_32 = NULL,u_32 = NULL;
            i_32 = t;
            z_31 :
            if(match_cons(i_32, sym_TCons_2))
              {
                j_32 = ATgetArgument(i_32, 0);
                n_32 = ATgetArgument(i_32, 1);
                a_32 :
                if(match_cons(j_32, sym_SDef_3))
                  {
                    k_32 = ATgetArgument(j_32, 0);
                    l_32 = ATgetArgument(j_32, 1);
                    m_32 = ATgetArgument(j_32, 2);
                    b_32 :
                    if(match_cons(n_32, sym_TCons_2))
                      {
                        t_32 = ATgetArgument(n_32, 0);
                        u_32 = ATgetArgument(n_32, 1);
                        c_32 :
                        if(match_cons(u_32, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_32), not_null(l_32), not_null(m_32));
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, b_1);
        }
        return(t);
      }
      t = Let_2(t, a_1, _id);
      PopChoice();
    }
  else
    {
      t = h_11;
      {
        ATerm i_11 = t;
        if(PushChoice()==0)
          {
            ATerm c_1 (ATerm t)
            {
              t = split_2(t, _id, g_54);
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,e_33 = NULL,f_33 = NULL;
                  y_32 = t;
                  e_32 :
                  if(match_cons(y_32, sym_TCons_2))
                    {
                      z_32 = ATgetArgument(y_32, 0);
                      c_33 = ATgetArgument(y_32, 1);
                      f_32 :
                      if(match_cons(z_32, sym_VarDec_2))
                        {
                          a_33 = ATgetArgument(z_32, 0);
                          b_33 = ATgetArgument(z_32, 1);
                          g_32 :
                          if(match_cons(c_33, sym_TCons_2))
                            {
                              e_33 = ATgetArgument(c_33, 0);
                              f_33 = ATgetArgument(c_33, 1);
                              h_32 :
                              if(match_cons(f_33, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(e_33), not_null(b_33));
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, d_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, c_1, _id);
            PopChoice();
          }
        else
          {
            t = i_11;
            {
              ATerm e_1 (ATerm t)
              {
                t = g_54(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, e_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm z_51 (ATerm), ATerm a_52 (ATerm))
{
  ATerm p_33 = NULL,q_33 = NULL,s_33 = NULL;
  p_33 = t;
  o_33 :
  if(match_cons(p_33, sym_Rec_2))
    {
      q_33 = ATgetArgument(p_33, 0);
      s_33 = ATgetArgument(p_33, 1);
      {
        ATerm v_33 = NULL;
        t = not_null(q_33);
        {
          ATerm x_33 = NULL;
          t = z_51(t);
          v_33 = t;
          t = not_null(s_33);
          t = a_52(t);
          x_33 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(v_33), not_null(x_33));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm))
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym_Let_2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      {
        ATerm p_34 = NULL;
        t = not_null(h_34);
        {
          ATerm r_34 = NULL;
          t = b_52(t);
          p_34 = t;
          t = not_null(i_34);
          t = c_52(t);
          r_34 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_34), not_null(r_34));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm h_54 (ATerm), ATerm i_54 (ATerm), ATerm j_54 (ATerm))
{
  ATerm j_11 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, h_54, h_54);
      PopChoice();
    }
  else
    {
      t = j_11;
      {
        ATerm k_11 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, j_54, j_54, h_54);
            PopChoice();
          }
        else
          {
            t = k_11;
            t = Rec_2(t, j_54, h_54);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  x_34 :
  if(match_cons(y_34, sym_Rec_2))
    {
      z_34 = ATgetArgument(y_34, 0);
      a_35 = ATgetArgument(y_34, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,r_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym_SDef_3))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      r_35 = ATgetArgument(m_35, 2);
      t = not_null(o_35);
      {
        ATerm f_1 (ATerm t)
        {
          ATerm z_35 = NULL,c_36 = NULL,e_36 = NULL;
          z_35 = t;
          k_35 :
          if(match_cons(z_35, sym_VarDec_2))
            {
              c_36 = ATgetArgument(z_35, 0);
              e_36 = ATgetArgument(z_35, 1);
              t = not_null(c_36);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, f_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym_Let_2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      t = not_null(n_36);
      {
        ATerm g_1 (ATerm t)
        {
          ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
          r_36 = t;
          k_36 :
          if(match_cons(r_36, sym_SDef_3))
            {
              s_36 = ATgetArgument(r_36, 0);
              t_36 = ATgetArgument(r_36, 1);
              u_36 = ATgetArgument(r_36, 2);
              t = not_null(s_36);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, g_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm y_51 (ATerm))
{
  ATerm d_37 = NULL,i_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym_SVar_1))
    {
      i_37 = ATgetArgument(d_37, 0);
      {
        ATerm k_37 = NULL;
        t = not_null(i_37);
        t = y_51(t);
        k_37 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(k_37));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm l_11 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = l_11;
        {
          ATerm m_11 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = m_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, h_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm a_57 (ATerm, ATerm (ATerm)), ATerm b_57 (ATerm), ATerm c_57 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_57 (ATerm, ATerm (ATerm)))
{
  ATerm x_37 = NULL;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_37), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm a_38 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        ATerm n_11 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, a_57);
            PopChoice();
          }
        else
          {
            t = n_11;
            t = RnBinding_2(t, b_57, d_57);
            t = DistBinding_2(t, a_38, c_57);
          }
        return(t);
      }
      t = env_alltd_1(t, i_1);
      return(t);
    }
    t = a_38(t);
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  e_38 = t;
  d_38 :
  if(match_cons(e_38, sym_SDef_3))
    {
      f_38 = ATgetArgument(e_38, 0);
      g_38 = ATgetArgument(e_38, 1);
      h_38 = ATgetArgument(e_38, 2);
      {
        ATerm p_38 = NULL;
        ATerm q_38 = NULL;
        t = not_null(h_38);
        t = tvars_0(t);
        q_38 = t;
        if(p_38 != NULL && p_38 != q_38)
          _fail(q_38);
        else
          p_38 = q_38;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_38), not_null(g_38), (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_38), not_null(h_38)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym_RDef_3))
    {
      x_38 = ATgetArgument(w_38, 0);
      y_38 = ATgetArgument(w_38, 1);
      z_38 = ATgetArgument(w_38, 2);
      {
        ATerm d_39 = NULL;
        ATerm e_39 = NULL;
        t = not_null(z_38);
        t = tvars_0(t);
        e_39 = t;
        if(d_39 != NULL && d_39 != e_39)
          _fail(e_39);
        else
          d_39 = e_39;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_38), not_null(y_38), (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_39), (ATerm) ATmakeAppl(sym_SRule_1, not_null(z_38))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm i_39 = NULL;
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_39)), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  x_39 = t;
  u_39 :
  if(match_cons(x_39, sym_OpDecl_2))
    {
      y_39 = ATgetArgument(x_39, 0);
      z_39 = ATgetArgument(x_39, 1);
      v_39 :
      if(match_cons(z_39, sym_FunType_2))
        {
          a_40 = ATgetArgument(z_39, 0);
          w_39 = ATgetArgument(z_39, 1);
          {
            ATerm e_40 = NULL,f_40 = NULL,y_40 = NULL;
            ATerm o_11;
            o_11 = t;
            {
              ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
              t = not_null(a_40);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm g_40 = NULL,m_40 = NULL;
                  t = new_0(t);
                  {
                    ATerm p_11;
                    p_11 = t;
                    {
                      ATerm l_40 = NULL;
                      l_40 = t;
                      if(g_40 != NULL && g_40 != l_40)
                        _fail(l_40);
                      else
                        g_40 = l_40;
                    }
                    t = p_11;
                    {
                      ATerm n_40 = NULL;
                      n_40 = t;
                      if(m_40 != NULL && m_40 != n_40)
                        _fail(n_40);
                      else
                        m_40 = n_40;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(g_40), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  }
                  return(t);
                }
                t = map_1(t, j_1);
                t = unzip_0(t);
                o_40 = t;
                q_39 :
                if(match_cons(o_40, sym_TCons_2))
                  {
                    p_40 = ATgetArgument(o_40, 0);
                    q_40 = ATgetArgument(o_40, 1);
                    r_39 :
                    if(match_cons(q_40, sym_TCons_2))
                      {
                        r_40 = ATgetArgument(q_40, 0);
                        s_40 = ATgetArgument(q_40, 1);
                        s_39 :
                        if(match_cons(s_40, sym_TNil_0))
                          {
                            if(e_40 != NULL && e_40 != p_40)
                              _fail(p_40);
                            else
                              e_40 = p_40;
                            if(f_40 != NULL && f_40 != r_40)
                              _fail(r_40);
                            else
                              f_40 = r_40;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            }
            t = o_11;
            {
              ATerm z_40 = NULL;
              t = not_null(f_40);
              t = map_1(t, MkCall_0);
              z_40 = t;
              if(y_40 != NULL && y_40 != z_40)
                _fail(z_40);
              else
                y_40 = z_40;
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_39), not_null(e_40), (ATerm) ATmakeAppl(sym_Cong_2, not_null(y_39), not_null(y_40)));
            }
          }
        }
      else
        {
          if(match_cons(z_39, sym_ConstType_1))
            {
              a_40 = ATgetArgument(z_39, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_39), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cong_2, not_null(y_39), (ATerm) ATmakeAppl(sym_Nil_0)));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCongDefs_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_Constructors_1))
    {
      w_41 = ATgetArgument(v_41, 0);
      t = not_null(w_41);
      t = map_1(t, MkCongDef_0);
    }
  else
    {
      if(match_cons(v_41, sym_Sorts_1))
        {
          w_41 = ATgetArgument(v_41, 0);
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm congdefs_0 (ATerm t)
{
  t = map_1(t, MkCongDefs_0);
  t = concat_0(t);
  return(t);
}
ATerm RulesToSdefs_0 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL;
  w_44 = t;
  q_44 :
  if(match_cons(w_44, sym_Specification_1))
    {
      x_44 = ATgetArgument(w_44, 0);
      r_44 :
      if(match_cons(x_44, sym_Cons_2))
        {
          y_44 = ATgetArgument(x_44, 0);
          a_45 = ATgetArgument(x_44, 1);
          s_44 :
          if(match_cons(y_44, sym_Signature_1))
            {
              z_44 = ATgetArgument(y_44, 0);
              t_44 :
              if(match_cons(a_45, sym_Cons_2))
                {
                  b_45 = ATgetArgument(a_45, 0);
                  d_45 = ATgetArgument(a_45, 1);
                  u_44 :
                  if(match_cons(b_45, sym_Strategies_1))
                    {
                      c_45 = ATgetArgument(b_45, 0);
                      v_44 :
                      if(match_cons(d_45, sym_Nil_0))
                        {
                          ATerm g_45 = NULL;
                          ATerm h_45 = NULL,j_45 = NULL,l_45 = NULL;
                          ATerm q_11;
                          q_11 = t;
                          {
                            ATerm i_45 = NULL;
                            t = not_null(z_44);
                            t = congdefs_0(t);
                            i_45 = t;
                            if(h_45 != NULL && h_45 != i_45)
                              _fail(i_45);
                            else
                              h_45 = i_45;
                          }
                          t = q_11;
                          {
                            ATerm k_45 = NULL;
                            t = not_null(c_45);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm r_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = RDtoSD_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = r_11;
                                    t = DeclareVariables_0(t);
                                  }
                                return(t);
                              }
                              t = map_1(t, k_1);
                              k_45 = t;
                              if(j_45 != NULL && j_45 != k_45)
                                _fail(k_45);
                              else
                                j_45 = k_45;
                            }
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_45), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_45), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = conc_0(t);
                            l_45 = t;
                            if(g_45 != NULL && g_45 != l_45)
                              _fail(l_45);
                            else
                              g_45 = l_45;
                          }
                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(z_44)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(g_45)), (ATerm) ATmakeAppl(sym_Nil_0))));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm b_61 (ATerm))
{
  ATerm s_11;
  s_11 = t;
  {
    ATerm s_45 = NULL,u_45 = NULL;
    ATerm t_11;
    t_11 = t;
    {
      ATerm t_45 = NULL;
      t = b_61(t);
      t_45 = t;
      if(s_45 != NULL && s_45 != t_45)
        _fail(t_45);
      else
        s_45 = t_45;
    }
    t = t_11;
    {
      ATerm v_45 = NULL;
      v_45 = t;
      if(u_45 != NULL && u_45 != v_45)
        _fail(v_45);
      else
        u_45 = v_45;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_45), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_45), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
    }
  }
  t = s_11;
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  t = SSL_int_to_string(not_null(z_45));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  g_46 = t;
  d_46 :
  if(match_cons(g_46, sym_TCons_2))
    {
      h_46 = ATgetArgument(g_46, 0);
      i_46 = ATgetArgument(g_46, 1);
      e_46 :
      if(match_cons(i_46, sym_TCons_2))
        {
          j_46 = ATgetArgument(i_46, 0);
          k_46 = ATgetArgument(i_46, 1);
          f_46 :
          if(match_cons(k_46, sym_TNil_0))
            {
              ATerm u_11 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(h_46), not_null(j_46));
                  PopChoice();
                }
              else
                {
                  t = u_11;
                  t = SSL_addr(not_null(h_46), not_null(j_46));
                }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, l_1, add_0, m_1);
  return(t);
}
ATerm FunType_2 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  s_46 = t;
  r_46 :
  if(match_cons(s_46, sym_FunType_2))
    {
      t_46 = ATgetArgument(s_46, 0);
      u_46 = ATgetArgument(s_46, 1);
      {
        ATerm x_46 = NULL;
        t = not_null(t_46);
        {
          ATerm z_46 = NULL;
          t = c_51(t);
          x_46 = t;
          t = not_null(u_46);
          t = d_51(t);
          z_46 = t;
          t = (ATerm) ATmakeAppl(sym_FunType_2, not_null(x_46), not_null(z_46));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstType_1 (ATerm t, ATerm b_51 (ATerm))
{
  ATerm h_47 = NULL,i_47 = NULL;
  h_47 = t;
  g_47 :
  if(match_cons(h_47, sym_ConstType_1))
    {
      i_47 = ATgetArgument(h_47, 0);
      {
        ATerm k_47 = NULL;
        t = not_null(i_47);
        t = b_51(t);
        k_47 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, not_null(k_47));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OpDecl_2 (ATerm t, ATerm g_51 (ATerm), ATerm h_51 (ATerm))
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_cons(s_47, sym_OpDecl_2))
    {
      t_47 = ATgetArgument(s_47, 0);
      u_47 = ATgetArgument(s_47, 1);
      {
        ATerm x_47 = NULL;
        t = not_null(t_47);
        {
          ATerm z_47 = NULL;
          t = g_51(t);
          x_47 = t;
          t = not_null(u_47);
          t = h_51(t);
          z_47 = t;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(x_47), not_null(z_47));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CheckCons_2 (ATerm t, ATerm w_53 (ATerm), ATerm x_53 (ATerm))
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  j_48 :
  if(match_cons(k_48, sym_Op_2))
    {
      l_48 = ATgetArgument(k_48, 0);
      m_48 = ATgetArgument(k_48, 1);
      {
        ATerm t_48 = NULL;
        ATerm v_11 = t;
        if(PushChoice()==0)
          {
            t = x_53(t);
            {
              ATerm n_1 (ATerm t)
              {
                ATerm p_48 = NULL;
                ATerm o_1 (ATerm t)
                {
                  ATerm q_48 = NULL;
                  q_48 = t;
                  if(l_48 != NULL && l_48 != q_48)
                    _fail(q_48);
                  else
                    l_48 = q_48;
                  return(t);
                }
                ATerm p_1 (ATerm t)
                {
                  ATerm w_11 = t;
                  if(PushChoice()==0)
                    {
                      ATerm r_48 = NULL;
                      t = ConstType_1(t, _id);
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      r_48 = t;
                      if(p_48 != NULL && p_48 != r_48)
                        _fail(r_48);
                      else
                        p_48 = r_48;
                      PopChoice();
                    }
                  else
                    {
                      t = w_11;
                      {
                        ATerm q_1 (ATerm t)
                        {
                          ATerm s_48 = NULL;
                          s_48 = t;
                          if(p_48 != NULL && p_48 != s_48)
                            _fail(s_48);
                          else
                            p_48 = s_48;
                          return(t);
                        }
                        t = FunType_2(t, q_1, _id);
                      }
                    }
                  return(t);
                }
                t = OpDecl_2(t, o_1, p_1);
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_48), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_48), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = zip_1(t, _id);
                return(t);
              }
              t = fetch_1(t, n_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          t = v_11;
        {
          ATerm u_48 = NULL;
          t = not_null(m_48);
          t = length_0(t);
          t = int_to_string_0(t);
          u_48 = t;
          if(t_48 != NULL && t_48 != u_48)
            _fail(u_48);
          else
            t_48 = u_48;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
          t = concat_strings_0(t);
          t = debug_1(t, w_53);
        }
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(l_48), not_null(m_48));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm manytd_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm a_49 (ATerm t)
  {
    ATerm x_11 = t;
    if(PushChoice()==0)
      {
        t = e_75(t);
        {
          ATerm r_1 (ATerm t)
          {
            t = try_1(t, a_49);
            return(t);
          }
          t = _all(t, r_1);
        }
        PopChoice();
      }
    else
      {
        t = x_11;
        t = _some(t, a_49);
      }
    return(t);
  }
  t = a_49(t);
  return(t);
}
ATerm check_constructors_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  u_49 = t;
  t_49 :
  if(match_cons(u_49, sym_SDef_3))
    {
      v_49 = ATgetArgument(u_49, 0);
      w_49 = ATgetArgument(u_49, 1);
      x_49 = ATgetArgument(u_49, 2);
      {
        ATerm b_50 = NULL;
        ATerm c_50 = NULL;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        t = concat_strings_0(t);
        c_50 = t;
        if(b_50 != NULL && b_50 != c_50)
          _fail(c_50);
        else
          b_50 = c_50;
        t = not_null(x_49);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              t = not_null(b_50);
              return(t);
            }
            t = CheckCons_2(t, t_1, l_0);
            return(t);
          }
          t = manytd_1(t, s_1);
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_49), not_null(w_49), not_null(x_49));
      }
    }
  else
    {
      if(match_cons(u_49, sym_RDef_3))
        {
          v_49 = ATgetArgument(u_49, 0);
          w_49 = ATgetArgument(u_49, 1);
          x_49 = ATgetArgument(u_49, 2);
          {
            ATerm j_50 = NULL;
            ATerm k_50 = NULL;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
            t = concat_strings_0(t);
            k_50 = t;
            if(j_50 != NULL && j_50 != k_50)
              _fail(k_50);
            else
              j_50 = k_50;
            t = not_null(x_49);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm v_1 (ATerm t)
                {
                  t = not_null(j_50);
                  return(t);
                }
                t = CheckCons_2(t, v_1, l_0);
                return(t);
              }
              t = manytd_1(t, u_1);
            }
            t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(v_49), not_null(w_49), not_null(x_49));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
  t_51 = t;
  f_51 :
  if(match_cons(t_51, sym_Specification_1))
    {
      u_51 = ATgetArgument(t_51, 0);
      i_51 :
      if(match_cons(u_51, sym_Cons_2))
        {
          v_51 = ATgetArgument(u_51, 0);
          i_52 = ATgetArgument(u_51, 1);
          j_51 :
          if(match_cons(v_51, sym_Signature_1))
            {
              w_51 = ATgetArgument(v_51, 0);
              l_51 :
              if(match_cons(w_51, sym_Cons_2))
                {
                  x_51 = ATgetArgument(w_51, 0);
                  h_52 = ATgetArgument(w_51, 1);
                  m_51 :
                  if(match_cons(x_51, sym_Constructors_1))
                    {
                      g_52 = ATgetArgument(x_51, 0);
                      n_51 :
                      if(match_cons(h_52, sym_Nil_0))
                        {
                          q_51 :
                          if(match_cons(i_52, sym_Cons_2))
                            {
                              j_52 = ATgetArgument(i_52, 0);
                              l_52 = ATgetArgument(i_52, 1);
                              r_51 :
                              if(match_cons(j_52, sym_Strategies_1))
                                {
                                  k_52 = ATgetArgument(j_52, 0);
                                  s_51 :
                                  if(match_cons(l_52, sym_Nil_0))
                                    {
                                      ATerm o_52 = NULL;
                                      t = not_null(k_52);
                                      {
                                        ATerm w_1 (ATerm t)
                                        {
                                          ATerm x_1 (ATerm t)
                                          {
                                            t = not_null(g_52);
                                            return(t);
                                          }
                                          t = check_constructors_1(t, x_1);
                                          return(t);
                                        }
                                        t = filter_1(t, w_1);
                                        o_52 = t;
                                        e_51 :
                                        if(!(match_cons(o_52, sym_Nil_0)))
                                          _fail(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(g_52)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(k_52)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays2_1 (ATerm t, ATerm f_55 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm z_11 = t;
      if(PushChoice()==0)
        {
          ATerm t_52 = NULL;
          t = f_55(t);
          t_52 = t;
          q_52 :
          if(!(match_cons(t_52, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = z_11;
    }
    t = y_11;
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = ExpOverlay_1(t, f_55);
          return(t);
        }
        t = try_1(t, a_2);
        return(t);
      }
      t = topdown_1(t, z_1);
    }
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
  g_53 = t;
  c_53 :
  if(match_cons(g_53, sym_BuildDefault_1))
    {
      h_53 = ATgetArgument(g_53, 0);
      t = (ATerm) ATmakeAppl(sym_Id_0);
    }
  else
    {
      if(match_cons(g_53, sym_Real_1))
        {
          h_53 = ATgetArgument(g_53, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(h_53)));
        }
      else
        {
          if(match_cons(g_53, sym_Int_1))
            {
              h_53 = ATgetArgument(g_53, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(h_53)));
            }
          else
            {
              if(match_cons(g_53, sym_Str_1))
                {
                  h_53 = ATgetArgument(g_53, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(h_53)));
                }
              else
                {
                  if(match_cons(g_53, sym_Op_2))
                    {
                      h_53 = ATgetArgument(g_53, 0);
                      f_53 = ATgetArgument(g_53, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_53)), not_null(f_53));
                    }
                  else
                    {
                      if(match_cons(g_53, sym_Var_1))
                        {
                          h_53 = ATgetArgument(g_53, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_53)), (ATerm) ATmakeAppl(sym_Nil_0));
                        }
                      else
                        _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm o_51 (ATerm), ATerm p_51 (ATerm))
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
  r_54 = t;
  q_54 :
  if(match_cons(r_54, sym_Op_2))
    {
      s_54 = ATgetArgument(r_54, 0);
      t_54 = ATgetArgument(r_54, 1);
      {
        ATerm w_54 = NULL;
        t = not_null(s_54);
        {
          ATerm y_54 = NULL;
          t = o_51(t);
          w_54 = t;
          t = not_null(t_54);
          t = p_51(t);
          y_54 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(w_54), not_null(y_54));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, c_2);
    return(t);
  }
  t = try_1(t, b_2);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
  r_55 = t;
  q_55 :
  if(match_cons(r_55, sym_Overlay_3))
    {
      s_55 = ATgetArgument(r_55, 0);
      t_55 = ATgetArgument(r_55, 1);
      u_55 = ATgetArgument(r_55, 2);
      {
        ATerm y_55 = NULL,c_56 = NULL;
        ATerm a_12;
        a_12 = t;
        {
          ATerm b_56 = NULL;
          t = not_null(t_55);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm z_55 = NULL;
              ATerm a_56 = NULL;
              a_56 = t;
              if(z_55 != NULL && z_55 != a_56)
                _fail(a_56);
              else
                z_55 = a_56;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_55), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
              return(t);
            }
            t = map_1(t, d_2);
            b_56 = t;
            if(y_55 != NULL && y_55 != b_56)
              _fail(b_56);
            else
              y_55 = b_56;
          }
        }
        t = a_12;
        {
          ATerm d_56 = NULL;
          t = not_null(u_55);
          t = trm_to_cong_0(t);
          d_56 = t;
          if(c_56 != NULL && c_56 != d_56)
            _fail(d_56);
          else
            c_56 = d_56;
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_55), not_null(y_55), not_null(c_56));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm c_54 (ATerm))
{
  t = Scope_2(t, c_54, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm l_56 = NULL,n_56 = NULL;
  l_56 = t;
  k_56 :
  if(match_cons(l_56, sym_Var_1))
    {
      n_56 = ATgetArgument(l_56, 0);
      {
        ATerm p_56 = NULL;
        t = not_null(n_56);
        t = k_51(t);
        p_56 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_56));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
  a_58 = t;
  w_57 :
  if(match_cons(a_58, sym_TCons_2))
    {
      b_58 = ATgetArgument(a_58, 0);
      c_58 = ATgetArgument(a_58, 1);
      x_57 :
      if(match_cons(c_58, sym_TCons_2))
        {
          d_58 = ATgetArgument(c_58, 0);
          e_58 = ATgetArgument(c_58, 1);
          y_57 :
          if(match_cons(e_58, sym_TCons_2))
            {
              f_58 = ATgetArgument(e_58, 0);
              g_58 = ATgetArgument(e_58, 1);
              z_57 :
              if(match_cons(g_58, sym_TNil_0))
                {
                  t = not_null(b_58);
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm k_58 = NULL;
                      k_58 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = s_56(t);
                      return(t);
                    }
                    ATerm f_2 (ATerm t)
                    {
                      ATerm m_58 = NULL;
                      m_58 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = s_56(t);
                      return(t);
                    }
                    t = t_56(t, e_2, f_2, _id);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm y_56 (ATerm), ATerm z_56 (ATerm, ATerm (ATerm)))
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL;
  g_59 = t;
  d_59 :
  if(match_cons(g_59, sym_TCons_2))
    {
      h_59 = ATgetArgument(g_59, 0);
      i_59 = ATgetArgument(g_59, 1);
      e_59 :
      if(match_cons(i_59, sym_TCons_2))
        {
          j_59 = ATgetArgument(i_59, 0);
          k_59 = ATgetArgument(i_59, 1);
          f_59 :
          if(match_cons(k_59, sym_TNil_0))
            {
              ATerm p_59 = NULL,q_59 = NULL,t_59 = NULL,c_60 = NULL;
              ATerm b_12;
              b_12 = t;
              {
                ATerm u_59 = NULL;
                t = not_null(h_59);
                {
                  ATerm v_59 = NULL;
                  t = y_56(t);
                  u_59 = t;
                  if(p_59 != NULL && p_59 != u_59)
                    _fail(u_59);
                  else
                    p_59 = u_59;
                  {
                    ATerm z_59 = NULL,b_60 = NULL;
                    t = map_1(t, new_0);
                    v_59 = t;
                    if(q_59 != NULL && q_59 != v_59)
                      _fail(v_59);
                    else
                      q_59 = v_59;
                    {
                      ATerm a_60 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      a_60 = t;
                      if(z_59 != NULL && z_59 != a_60)
                        _fail(a_60);
                      else
                        z_59 = a_60;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      b_60 = t;
                      if(t_59 != NULL && t_59 != b_60)
                        _fail(b_60);
                      else
                        t_59 = b_60;
                    }
                  }
                }
              }
              t = b_12;
              {
                ATerm d_60 = NULL;
                t = not_null(h_59);
                {
                  ATerm g_2 (ATerm t)
                  {
                    t = not_null(q_59);
                    return(t);
                  }
                  t = z_56(t, g_2);
                  d_60 = t;
                  if(c_60 != NULL && c_60 != d_60)
                    _fail(d_60);
                  else
                    c_60 = d_60;
                }
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_59), (ATerm) ATmakeAppl(sym_TNil_0))));
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
  o_60 = t;
  n_60 :
  if(match_cons(o_60, sym_TCons_2))
    {
      p_60 = ATgetArgument(o_60, 0);
      q_60 = ATgetArgument(o_60, 1);
      t = not_null(p_60);
    }
  else
    _fail(t);
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm m_56 (ATerm, ATerm (ATerm)))
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,c_61 = NULL,d_61 = NULL;
  y_60 = t;
  v_60 :
  if(match_cons(y_60, sym_TCons_2))
    {
      z_60 = ATgetArgument(y_60, 0);
      a_61 = ATgetArgument(y_60, 1);
      w_60 :
      if(match_cons(a_61, sym_TCons_2))
        {
          c_61 = ATgetArgument(a_61, 0);
          d_61 = ATgetArgument(a_61, 1);
          x_60 :
          if(match_cons(d_61, sym_TNil_0))
            {
              t = not_null(z_60);
              {
                ATerm h_2 (ATerm t)
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = not_null(c_61);
                    return(t);
                  }
                  t = split_2(t, _id, i_2);
                  t = lookup_0(t);
                  return(t);
                }
                t = m_56(t, h_2);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm d_71 (ATerm))
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL;
  m_61 = t;
  j_61 :
  if(match_cons(m_61, sym_TCons_2))
    {
      n_61 = ATgetArgument(m_61, 0);
      o_61 = ATgetArgument(m_61, 1);
      k_61 :
      if(match_cons(o_61, sym_TCons_2))
        {
          p_61 = ATgetArgument(o_61, 0);
          q_61 = ATgetArgument(o_61, 1);
          l_61 :
          if(match_cons(q_61, sym_TNil_0))
            {
              t = not_null(n_61);
              {
                ATerm j_2 (ATerm t)
                {
                  ATerm t_61 = NULL;
                  t_61 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = d_71(t);
                  return(t);
                }
                t = _all(t, j_2);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm x_61 (ATerm t)
  {
    ATerm c_12 = t;
    if(PushChoice()==0)
      {
        t = i_71(t);
        PopChoice();
      }
    else
      {
        t = c_12;
        t = all_dist_1(t, x_61);
      }
    return(t);
  }
  t = x_61(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm k_57 (ATerm), ATerm l_57 (ATerm, ATerm (ATerm)), ATerm m_57 (ATerm), ATerm n_57 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_57 (ATerm, ATerm (ATerm)), ATerm p_57 (ATerm))
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
  t = subs_args_0(t);
  c_62 = t;
  z_61 :
  if(match_cons(c_62, sym_TCons_2))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      a_62 :
      if(match_cons(e_62, sym_TCons_2))
        {
          f_62 = ATgetArgument(e_62, 0);
          g_62 = ATgetArgument(e_62, 1);
          b_62 :
          if(match_cons(g_62, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm k_62 (ATerm t)
                {
                  ATerm k_2 (ATerm t)
                  {
                    ATerm d_12 = t;
                    if(PushChoice()==0)
                      {
                        t = RnVar_1(t, l_57);
                        PopChoice();
                      }
                    else
                      {
                        t = d_12;
                        {
                          ATerm e_12 = t;
                          if(PushChoice()==0)
                            {
                              t = Fst_0(t);
                              {
                                ATerm l_2 (ATerm t)
                                {
                                  t = not_null(d_62);
                                  return(t);
                                }
                                t = SubsVar_2(t, k_57, l_2);
                                t = p_57(t);
                              }
                              PopChoice();
                            }
                          else
                            {
                              t = e_12;
                              t = RnBinding_2(t, m_57, o_57);
                              t = DistBinding_2(t, k_62, n_57);
                            }
                        }
                      }
                    return(t);
                  }
                  t = env_alltd_1(t, k_2);
                  return(t);
                }
                t = k_62(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm substitute_5 (ATerm t, ATerm r_57 (ATerm), ATerm s_57 (ATerm, ATerm (ATerm)), ATerm t_57 (ATerm), ATerm u_57 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_57 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, r_57, s_57, t_57, u_57, v_57, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL;
  s_62 = t;
  r_62 :
  if(match_cons(s_62, sym_Op_2))
    {
      t_62 = ATgetArgument(s_62, 0);
      u_62 = ATgetArgument(s_62, 1);
      {
        ATerm z_62 = NULL,a_63 = NULL;
        t = d_55(t);
        {
          ATerm m_2 (ATerm t)
          {
            ATerm f_12;
            f_12 = t;
            {
              ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL;
              b_63 = t;
              q_62 :
              if(match_cons(b_63, sym_Overlay_3))
                {
                  c_63 = ATgetArgument(b_63, 0);
                  d_63 = ATgetArgument(b_63, 1);
                  e_63 = ATgetArgument(b_63, 2);
                  {
                    ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,j_63 = NULL;
                    if(t_62 != NULL && t_62 != c_63)
                      _fail(c_63);
                    else
                      t_62 = c_63;
                    if(f_63 != NULL && f_63 != d_63)
                      _fail(d_63);
                    else
                      f_63 = d_63;
                    if(g_63 != NULL && g_63 != e_63)
                      _fail(e_63);
                    else
                      g_63 = e_63;
                    {
                      ATerm h_12;
                      h_12 = t;
                      {
                        ATerm i_63 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = zip_1(t, _id);
                        i_63 = t;
                        if(h_63 != NULL && h_63 != i_63)
                          _fail(i_63);
                        else
                          h_63 = i_63;
                      }
                      t = h_12;
                      {
                        ATerm k_63 = NULL;
                        t = not_null(h_63);
                        j_63 = t;
                        if(z_62 != NULL && z_62 != j_63)
                          _fail(j_63);
                        else
                          z_62 = j_63;
                        t = not_null(g_63);
                        k_63 = t;
                        if(a_63 != NULL && a_63 != k_63)
                          _fail(k_63);
                        else
                          a_63 = k_63;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_63), (ATerm) ATmakeAppl(sym_TNil_0)));
                      }
                    }
                  }
                }
              else
                _fail(t);
            }
            t = f_12;
            return(t);
          }
          t = fetch_1(t, m_2);
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_63), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = tsubstitute_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm e_55 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm o_12;
    o_12 = t;
    {
      ATerm p_12 = t;
      if(PushChoice()==0)
        {
          ATerm s_63 = NULL;
          t = e_55(t);
          s_63 = t;
          r_63 :
          if(!(match_cons(s_63, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = p_12;
    }
    t = o_12;
    {
      ATerm o_2 (ATerm t)
      {
        ATerm p_2 (ATerm t)
        {
          t = ExpOverlay_1(t, e_55);
          return(t);
        }
        t = repeat_1(t, p_2);
        return(t);
      }
      t = topdown_1(t, o_2);
    }
    return(t);
  }
  t = try_1(t, n_2);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm g_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
  g_64 = t;
  y_63 :
  if(match_cons(g_64, sym_Specification_1))
    {
      m_64 = ATgetArgument(g_64, 0);
      z_63 :
      if(match_cons(m_64, sym_Cons_2))
        {
          n_64 = ATgetArgument(m_64, 0);
          p_64 = ATgetArgument(m_64, 1);
          a_64 :
          if(match_cons(n_64, sym_Signature_1))
            {
              o_64 = ATgetArgument(n_64, 0);
              b_64 :
              if(match_cons(p_64, sym_Cons_2))
                {
                  q_64 = ATgetArgument(p_64, 0);
                  s_64 = ATgetArgument(p_64, 1);
                  c_64 :
                  if(match_cons(q_64, sym_Overlays_1))
                    {
                      r_64 = ATgetArgument(q_64, 0);
                      d_64 :
                      if(match_cons(s_64, sym_Cons_2))
                        {
                          t_64 = ATgetArgument(s_64, 0);
                          v_64 = ATgetArgument(s_64, 1);
                          e_64 :
                          if(match_cons(t_64, sym_Strategies_1))
                            {
                              u_64 = ATgetArgument(t_64, 0);
                              f_64 :
                              if(match_cons(v_64, sym_Nil_0))
                                {
                                  ATerm z_64 = NULL,b_65 = NULL;
                                  ATerm q_12;
                                  q_12 = t;
                                  {
                                    ATerm a_65 = NULL;
                                    t = not_null(r_64);
                                    {
                                      ATerm q_2 (ATerm t)
                                      {
                                        t = not_null(r_64);
                                        return(t);
                                      }
                                      t = exp_overlays1_1(t, q_2);
                                      a_65 = t;
                                      if(z_64 != NULL && z_64 != a_65)
                                        _fail(a_65);
                                      else
                                        z_64 = a_65;
                                    }
                                  }
                                  t = q_12;
                                  {
                                    ATerm c_65 = NULL,e_65 = NULL,g_65 = NULL;
                                    ATerm r_12;
                                    r_12 = t;
                                    {
                                      ATerm d_65 = NULL;
                                      t = not_null(r_64);
                                      t = map_1(t, Overlay_to_Congdef_0);
                                      d_65 = t;
                                      if(c_65 != NULL && c_65 != d_65)
                                        _fail(d_65);
                                      else
                                        c_65 = d_65;
                                    }
                                    t = r_12;
                                    {
                                      ATerm f_65 = NULL;
                                      t = not_null(u_64);
                                      {
                                        ATerm r_2 (ATerm t)
                                        {
                                          t = not_null(z_64);
                                          return(t);
                                        }
                                        t = exp_overlays2_1(t, r_2);
                                        f_65 = t;
                                        if(e_65 != NULL && e_65 != f_65)
                                          _fail(f_65);
                                        else
                                          e_65 = f_65;
                                      }
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_65), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      g_65 = t;
                                      if(b_65 != NULL && b_65 != g_65)
                                        _fail(g_65);
                                      else
                                        b_65 = g_65;
                                    }
                                    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(o_64)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(b_65)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm s_12;
  s_12 = t;
  {
    ATerm p_65 = NULL;
    ATerm q_65 = NULL;
    q_65 = t;
    if(p_65 != NULL && p_65 != q_65)
      _fail(q_65);
    else
      p_65 = q_65;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_65), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
  }
  t = s_12;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm t_12;
  t_12 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = t_12;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL;
  f_66 = t;
  y_65 :
  if(match_cons(f_66, sym_TCons_2))
    {
      g_66 = ATgetArgument(f_66, 0);
      h_66 = ATgetArgument(f_66, 1);
      c_66 :
      if(match_cons(h_66, sym_TCons_2))
        {
          i_66 = ATgetArgument(h_66, 0);
          j_66 = ATgetArgument(h_66, 1);
          d_66 :
          if(match_cons(j_66, sym_TCons_2))
            {
              k_66 = ATgetArgument(j_66, 0);
              l_66 = ATgetArgument(j_66, 1);
              e_66 :
              if(match_cons(l_66, sym_TNil_0))
                {
                  ATerm p_66 = NULL,r_66 = NULL;
                  ATerm u_12;
                  u_12 = t;
                  {
                    ATerm q_66 = NULL;
                    t = not_null(g_66);
                    t = MsgU_0(t);
                    q_66 = t;
                    if(p_66 != NULL && p_66 != q_66)
                      _fail(q_66);
                    else
                      p_66 = q_66;
                  }
                  t = u_12;
                  {
                    ATerm s_66 = NULL;
                    t = not_null(k_66);
                    t = MsgE_0(t);
                    s_66 = t;
                    if(r_66 != NULL && r_66 != s_66)
                      _fail(s_66);
                    else
                      r_66 = s_66;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_66), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_66), (ATerm) ATmakeAppl(sym_Nil_0)));
                    t = concat_0(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm MsgE_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
  f_67 = t;
  z_66 :
  if(match_cons(f_67, sym_Cons_2))
    {
      d_67 = ATgetArgument(f_67, 0);
      e_67 = ATgetArgument(f_67, 1);
      a_67 :
      if(match_cons(e_67, sym_Cons_2))
        {
          b_67 = ATgetArgument(e_67, 0);
          c_67 = ATgetArgument(e_67, 1);
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_67), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_67), not_null(c_67))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        }
      else
        {
          if(match_cons(e_67, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_67), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(f_67, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm MsgU_0 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,w_67 = NULL,d_68 = NULL;
  d_68 = t;
  q_67 :
  if(match_cons(d_68, sym_Cons_2))
    {
      u_67 = ATgetArgument(d_68, 0);
      w_67 = ATgetArgument(d_68, 1);
      r_67 :
      if(match_cons(w_67, sym_Cons_2))
        {
          s_67 = ATgetArgument(w_67, 0);
          t_67 = ATgetArgument(w_67, 1);
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_67), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_67), not_null(t_67))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        }
      else
        {
          if(match_cons(w_67, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_67), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(d_68, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm MsgS_0 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
  s_68 = t;
  o_68 :
  if(match_cons(s_68, sym_TCons_2))
    {
      t_68 = ATgetArgument(s_68, 0);
      u_68 = ATgetArgument(s_68, 1);
      p_68 :
      if(match_cons(u_68, sym_TCons_2))
        {
          v_68 = ATgetArgument(u_68, 0);
          w_68 = ATgetArgument(u_68, 1);
          q_68 :
          if(match_cons(w_68, sym_TCons_2))
            {
              x_68 = ATgetArgument(w_68, 0);
              y_68 = ATgetArgument(w_68, 1);
              r_68 :
              if(match_cons(y_68, sym_TNil_0))
                {
                  ATerm c_69 = NULL,e_69 = NULL;
                  ATerm v_12;
                  v_12 = t;
                  {
                    ATerm d_69 = NULL;
                    t = not_null(t_68);
                    t = MsgU_0(t);
                    d_69 = t;
                    if(c_69 != NULL && c_69 != d_69)
                      _fail(d_69);
                    else
                      c_69 = d_69;
                  }
                  t = v_12;
                  {
                    ATerm f_69 = NULL;
                    t = not_null(x_68);
                    t = MsgE_0(t);
                    f_69 = t;
                    if(e_69 != NULL && e_69 != f_69)
                      _fail(f_69);
                    else
                      e_69 = f_69;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_69), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_69), (ATerm) ATmakeAppl(sym_Nil_0)));
                    t = concat_0(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm MkMsg_0 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
  s_69 = t;
  r_69 :
  if(match_cons(s_69, sym_Overlay_3))
    {
      t_69 = ATgetArgument(s_69, 0);
      u_69 = ATgetArgument(s_69, 1);
      v_69 = ATgetArgument(s_69, 2);
      {
        ATerm b_70 = NULL;
        ATerm c_70 = NULL;
        t = not_null(v_69);
        t = map_1(t, MsgR_0);
        t = concat_0(t);
        c_70 = t;
        if(b_70 != NULL && b_70 != c_70)
          _fail(c_70);
        else
          b_70 = c_70;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(b_70))));
      }
    }
  else
    {
      if(match_cons(s_69, sym_SDef_3))
        {
          t_69 = ATgetArgument(s_69, 0);
          u_69 = ATgetArgument(s_69, 1);
          v_69 = ATgetArgument(s_69, 2);
          {
            ATerm i_70 = NULL;
            ATerm j_70 = NULL;
            t = not_null(v_69);
            t = map_1(t, MsgS_0);
            t = concat_0(t);
            j_70 = t;
            if(i_70 != NULL && i_70 != j_70)
              _fail(j_70);
            else
              i_70 = j_70;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(i_70))));
          }
        }
      else
        {
          if(match_cons(s_69, sym_RDef_3))
            {
              t_69 = ATgetArgument(s_69, 0);
              u_69 = ATgetArgument(s_69, 1);
              v_69 = ATgetArgument(s_69, 2);
              {
                ATerm n_70 = NULL;
                ATerm o_70 = NULL;
                t = not_null(v_69);
                t = map_1(t, MsgR_0);
                t = concat_0(t);
                o_70 = t;
                if(n_70 != NULL && n_70 != o_70)
                  _fail(o_70);
                else
                  n_70 = o_70;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(n_70))));
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm err_msg_0 (ATerm t)
{
  t = MkMsg_0(t);
  t = fatal_error_0(t);
  return(t);
}
ATerm Overlay_3 (ATerm t, ATerm s_50 (ATerm), ATerm t_50 (ATerm), ATerm u_50 (ATerm))
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,k_71 = NULL;
  f_71 = t;
  c_71 :
  if(match_cons(f_71, sym_Overlay_3))
    {
      g_71 = ATgetArgument(f_71, 0);
      h_71 = ATgetArgument(f_71, 1);
      k_71 = ATgetArgument(f_71, 2);
      {
        ATerm o_71 = NULL;
        t = not_null(g_71);
        {
          ATerm q_71 = NULL;
          t = s_50(t);
          o_71 = t;
          t = not_null(h_71);
          {
            ATerm s_71 = NULL;
            t = t_50(t);
            q_71 = t;
            t = not_null(k_71);
            t = u_50(t);
            s_71 = t;
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(o_71), not_null(q_71), not_null(s_71));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Union_0 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
  t_72 = t;
  e_72 :
  if(match_cons(t_72, sym_TCons_2))
    {
      u_72 = ATgetArgument(t_72, 0);
      b_73 = ATgetArgument(t_72, 1);
      f_72 :
      if(match_cons(u_72, sym_TCons_2))
        {
          v_72 = ATgetArgument(u_72, 0);
          w_72 = ATgetArgument(u_72, 1);
          k_72 :
          if(match_cons(w_72, sym_TCons_2))
            {
              x_72 = ATgetArgument(w_72, 0);
              y_72 = ATgetArgument(w_72, 1);
              l_72 :
              if(match_cons(y_72, sym_TCons_2))
                {
                  z_72 = ATgetArgument(y_72, 0);
                  a_73 = ATgetArgument(y_72, 1);
                  m_72 :
                  if(match_cons(a_73, sym_TNil_0))
                    {
                      n_72 :
                      if(match_cons(b_73, sym_TCons_2))
                        {
                          c_73 = ATgetArgument(b_73, 0);
                          j_73 = ATgetArgument(b_73, 1);
                          o_72 :
                          if(match_cons(c_73, sym_TCons_2))
                            {
                              d_73 = ATgetArgument(c_73, 0);
                              e_73 = ATgetArgument(c_73, 1);
                              p_72 :
                              if(match_cons(e_73, sym_TCons_2))
                                {
                                  f_73 = ATgetArgument(e_73, 0);
                                  g_73 = ATgetArgument(e_73, 1);
                                  q_72 :
                                  if(match_cons(g_73, sym_TCons_2))
                                    {
                                      h_73 = ATgetArgument(g_73, 0);
                                      i_73 = ATgetArgument(g_73, 1);
                                      r_72 :
                                      if(match_cons(i_73, sym_TNil_0))
                                        {
                                          s_72 :
                                          if(match_cons(j_73, sym_TNil_0))
                                            {
                                              ATerm q_73 = NULL,s_73 = NULL,u_73 = NULL;
                                              ATerm w_12;
                                              w_12 = t;
                                              {
                                                ATerm r_73 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = union_0(t);
                                                r_73 = t;
                                                if(q_73 != NULL && q_73 != r_73)
                                                  _fail(r_73);
                                                else
                                                  q_73 = r_73;
                                              }
                                              t = w_12;
                                              {
                                                ATerm x_12;
                                                x_12 = t;
                                                {
                                                  ATerm t_73 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  t_73 = t;
                                                  if(s_73 != NULL && s_73 != t_73)
                                                    _fail(t_73);
                                                  else
                                                    s_73 = t_73;
                                                }
                                                t = x_12;
                                                {
                                                  ATerm v_73 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  v_73 = t;
                                                  if(u_73 != NULL && u_73 != v_73)
                                                    _fail(v_73);
                                                  else
                                                    u_73 = v_73;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_73), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                }
                                              }
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  f_74 = t;
  d_74 :
  if(match_cons(f_74, sym_TCons_2))
    {
      g_74 = ATgetArgument(f_74, 0);
      h_74 = ATgetArgument(f_74, 1);
      e_74 :
      if(match_cons(h_74, sym_TCons_2))
        {
          i_74 = ATgetArgument(h_74, 0);
          j_74 = ATgetArgument(h_74, 1);
          t = not_null(i_74);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm r_74 = NULL;
  r_74 = t;
  t = SSL_explode_term(not_null(r_74));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  t = Snd_0(t);
  {
    ATerm s_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
      return(t);
    }
    ATerm t_2 (ATerm t)
    {
      t = cart_1(t, Union_0);
      return(t);
    }
    t = foldr_2(t, s_2, t_2);
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL;
  q_75 = t;
  z_74 :
  if(match_cons(q_75, sym_TCons_2))
    {
      r_75 = ATgetArgument(q_75, 0);
      y_75 = ATgetArgument(q_75, 1);
      a_75 :
      if(match_cons(r_75, sym_TCons_2))
        {
          s_75 = ATgetArgument(r_75, 0);
          t_75 = ATgetArgument(r_75, 1);
          b_75 :
          if(match_cons(t_75, sym_TCons_2))
            {
              u_75 = ATgetArgument(t_75, 0);
              v_75 = ATgetArgument(t_75, 1);
              c_75 :
              if(match_cons(v_75, sym_TCons_2))
                {
                  w_75 = ATgetArgument(v_75, 0);
                  x_75 = ATgetArgument(v_75, 1);
                  d_75 :
                  if(match_cons(x_75, sym_TNil_0))
                    {
                      g_75 :
                      if(match_cons(y_75, sym_TCons_2))
                        {
                          z_75 = ATgetArgument(y_75, 0);
                          n_76 = ATgetArgument(y_75, 1);
                          h_75 :
                          if(match_cons(z_75, sym_TCons_2))
                            {
                              a_76 = ATgetArgument(z_75, 0);
                              i_76 = ATgetArgument(z_75, 1);
                              i_75 :
                              if(match_cons(i_76, sym_TCons_2))
                                {
                                  j_76 = ATgetArgument(i_76, 0);
                                  k_76 = ATgetArgument(i_76, 1);
                                  j_75 :
                                  if(match_cons(k_76, sym_TCons_2))
                                    {
                                      l_76 = ATgetArgument(k_76, 0);
                                      m_76 = ATgetArgument(k_76, 1);
                                      o_75 :
                                      if(match_cons(m_76, sym_TNil_0))
                                        {
                                          p_75 :
                                          if(match_cons(n_76, sym_TNil_0))
                                            {
                                              ATerm u_76 = NULL,a_77 = NULL,c_77 = NULL;
                                              ATerm y_12;
                                              y_12 = t;
                                              {
                                                ATerm v_76 = NULL,z_76 = NULL;
                                                ATerm y_76 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = diff_0(t);
                                                y_76 = t;
                                                if(v_76 != NULL && v_76 != y_76)
                                                  _fail(y_76);
                                                else
                                                  v_76 = y_76;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = union_0(t);
                                                z_76 = t;
                                                if(u_76 != NULL && u_76 != z_76)
                                                  _fail(z_76);
                                                else
                                                  u_76 = z_76;
                                              }
                                              t = y_12;
                                              {
                                                ATerm z_12;
                                                z_12 = t;
                                                {
                                                  ATerm b_77 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  b_77 = t;
                                                  if(a_77 != NULL && a_77 != b_77)
                                                    _fail(b_77);
                                                  else
                                                    a_77 = b_77;
                                                }
                                                t = z_12;
                                                {
                                                  ATerm d_77 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  d_77 = t;
                                                  if(c_77 != NULL && c_77 != d_77)
                                                    _fail(d_77);
                                                  else
                                                    c_77 = d_77;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_77), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                }
                                              }
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm cart_1 (ATerm t, ATerm v_67 (ATerm))
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  p_77 = t;
  m_77 :
  if(match_cons(p_77, sym_TCons_2))
    {
      q_77 = ATgetArgument(p_77, 0);
      r_77 = ATgetArgument(p_77, 1);
      n_77 :
      if(match_cons(r_77, sym_TCons_2))
        {
          s_77 = ATgetArgument(r_77, 0);
          t_77 = ATgetArgument(r_77, 1);
          o_77 :
          if(match_cons(t_77, sym_TNil_0))
            {
              t = not_null(q_77);
              {
                ATerm u_2 (ATerm t)
                {
                  ATerm w_77 = NULL;
                  w_77 = t;
                  t = not_null(s_77);
                  {
                    ATerm v_2 (ATerm t)
                    {
                      ATerm y_77 = NULL;
                      y_77 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_77), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = v_67(t);
                      return(t);
                    }
                    t = map_1(t, v_2);
                  }
                  return(t);
                }
                t = map_1(t, u_2);
                {
                  ATerm w_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = foldr_2(t, w_2, union_0);
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm seqs_join_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, x_2, y_2);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm z_53 (ATerm))
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL;
  n_78 = t;
  j_78 :
  if(match_cons(n_78, sym_TCons_2))
    {
      o_78 = ATgetArgument(n_78, 0);
      p_78 = ATgetArgument(n_78, 1);
      k_78 :
      if(match_cons(p_78, sym_TCons_2))
        {
          q_78 = ATgetArgument(p_78, 0);
          r_78 = ATgetArgument(p_78, 1);
          l_78 :
          if(match_cons(r_78, sym_TCons_2))
            {
              s_78 = ATgetArgument(r_78, 0);
              t_78 = ATgetArgument(r_78, 1);
              m_78 :
              if(match_cons(t_78, sym_TNil_0))
                {
                  ATerm x_78 = NULL,b_79 = NULL;
                  ATerm a_13;
                  a_13 = t;
                  {
                    ATerm y_78 = NULL,a_79 = NULL;
                    ATerm z_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    t = z_53(t);
                    z_78 = t;
                    if(y_78 != NULL && y_78 != z_78)
                      _fail(z_78);
                    else
                      y_78 = z_78;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_78), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = diff_0(t);
                    a_79 = t;
                    if(x_78 != NULL && x_78 != a_79)
                      _fail(a_79);
                    else
                      x_78 = a_79;
                  }
                  t = a_13;
                  {
                    ATerm c_79 = NULL,g_79 = NULL;
                    ATerm d_79 = NULL,f_79 = NULL;
                    ATerm e_79 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    t = z_53(t);
                    e_79 = t;
                    if(d_79 != NULL && d_79 != e_79)
                      _fail(e_79);
                    else
                      d_79 = e_79;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_79), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = isect_0(t);
                    f_79 = t;
                    if(c_79 != NULL && c_79 != f_79)
                      _fail(f_79);
                    else
                      c_79 = f_79;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_78), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    g_79 = t;
                    if(b_79 != NULL && b_79 != g_79)
                      _fail(g_79);
                    else
                      b_79 = g_79;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_79), (ATerm) ATmakeAppl(sym_TNil_0))));
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UDjoin_0 (ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL;
  c_80 = t;
  z_79 :
  if(match_cons(c_80, sym_Overlay_3))
    {
      d_80 = ATgetArgument(c_80, 0);
      b_80 = ATgetArgument(c_80, 1);
      a_80 = ATgetArgument(c_80, 2);
      {
        ATerm h_80 = NULL;
        ATerm i_80 = NULL;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_80), (ATerm) ATmakeAppl(sym_Nil_0)));
        t = seqs_join_0(t);
        i_80 = t;
        if(h_80 != NULL && h_80 != i_80)
          _fail(i_80);
        else
          h_80 = i_80;
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(d_80), not_null(b_80), not_null(h_80));
      }
    }
  else
    {
      if(match_cons(c_80, sym_Scope_2))
        {
          d_80 = ATgetArgument(c_80, 0);
          b_80 = ATgetArgument(c_80, 1);
          t = not_null(b_80);
          {
            ATerm z_2 (ATerm t)
            {
              ATerm a_3 (ATerm t)
              {
                t = not_null(d_80);
                return(t);
              }
              t = JoinScope_1(t, a_3);
              return(t);
            }
            t = map_1(t, z_2);
          }
        }
      else
        {
          if(match_cons(c_80, sym_Cong_2))
            {
              d_80 = ATgetArgument(c_80, 0);
              b_80 = ATgetArgument(c_80, 1);
              t = not_null(b_80);
              t = seqs_join_0(t);
            }
          else
            {
              if(match_cons(c_80, sym_BAM_3))
                {
                  d_80 = ATgetArgument(c_80, 0);
                  b_80 = ATgetArgument(c_80, 1);
                  a_80 = ATgetArgument(c_80, 2);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_80), (ATerm) ATmakeAppl(sym_Nil_0))));
                  t = seqs_join_0(t);
                }
              else
                {
                  if(match_cons(c_80, sym_BA_2))
                    {
                      d_80 = ATgetArgument(c_80, 0);
                      b_80 = ATgetArgument(c_80, 1);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_Nil_0)));
                      t = seqs_join_0(t);
                    }
                  else
                    {
                      if(match_cons(c_80, sym_AM_2))
                        {
                          d_80 = ATgetArgument(c_80, 0);
                          b_80 = ATgetArgument(c_80, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_Nil_0)));
                          t = seqs_join_0(t);
                        }
                      else
                        {
                          if(match_cons(c_80, sym_MA_2))
                            {
                              d_80 = ATgetArgument(c_80, 0);
                              b_80 = ATgetArgument(c_80, 1);
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_Nil_0)));
                              t = seqs_join_0(t);
                            }
                          else
                            {
                              if(match_cons(c_80, sym_StratRule_3))
                                {
                                  d_80 = ATgetArgument(c_80, 0);
                                  b_80 = ATgetArgument(c_80, 1);
                                  a_80 = ATgetArgument(c_80, 2);
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_Nil_0))));
                                  t = seqs_join_0(t);
                                }
                              else
                                {
                                  if(match_cons(c_80, sym_Rule_3))
                                    {
                                      d_80 = ATgetArgument(c_80, 0);
                                      b_80 = ATgetArgument(c_80, 1);
                                      a_80 = ATgetArgument(c_80, 2);
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_Nil_0))));
                                      t = seqs_join_0(t);
                                    }
                                  else
                                    {
                                      if(match_cons(c_80, sym_Seq_2))
                                        {
                                          d_80 = ATgetArgument(c_80, 0);
                                          b_80 = ATgetArgument(c_80, 1);
                                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_Nil_0)));
                                          t = seqs_join_0(t);
                                        }
                                      else
                                        {
                                          if(match_cons(c_80, sym_Seqs_1))
                                            {
                                              d_80 = ATgetArgument(c_80, 0);
                                              t = not_null(d_80);
                                              t = seqs_join_0(t);
                                            }
                                          else
                                            _fail(t);
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
ATerm Cong_2 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm))
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL;
  w_81 = t;
  v_81 :
  if(match_cons(w_81, sym_Cong_2))
    {
      x_81 = ATgetArgument(w_81, 0);
      y_81 = ATgetArgument(w_81, 1);
      {
        ATerm b_82 = NULL;
        t = not_null(x_81);
        {
          ATerm d_82 = NULL;
          t = r_52(t);
          b_82 = t;
          t = not_null(y_81);
          t = s_52(t);
          d_82 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(b_82), not_null(d_82));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm use_term_0 (ATerm t)
{
  ATerm k_82 = NULL;
  ATerm m_82 = NULL;
  k_82 = t;
  {
    ATerm n_82 = NULL;
    t = not_null(k_82);
    t = tvars_0(t);
    n_82 = t;
    if(m_82 != NULL && m_82 != n_82)
      _fail(n_82);
    else
      m_82 = n_82;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(m_82), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  }
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm t_82 = NULL;
  ATerm v_82 = NULL;
  t_82 = t;
  {
    ATerm w_82 = NULL;
    t = not_null(t_82);
    t = tvars_0(t);
    w_82 = t;
    if(v_82 != NULL && v_82 != w_82)
      _fail(w_82);
    else
      v_82 = w_82;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_82), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm d_50 (ATerm), ATerm e_50 (ATerm), ATerm f_50 (ATerm))
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL;
  e_83 = t;
  d_83 :
  if(match_cons(e_83, sym_Rule_3))
    {
      f_83 = ATgetArgument(e_83, 0);
      g_83 = ATgetArgument(e_83, 1);
      h_83 = ATgetArgument(e_83, 2);
      {
        ATerm l_83 = NULL;
        t = not_null(f_83);
        {
          ATerm n_83 = NULL;
          t = d_50(t);
          l_83 = t;
          t = not_null(g_83);
          {
            ATerm p_83 = NULL;
            t = e_50(t);
            n_83 = t;
            t = not_null(h_83);
            t = f_50(t);
            p_83 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_83), not_null(n_83), not_null(p_83));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BAM_3 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm), ATerm m_49 (ATerm))
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL;
  b_84 = t;
  a_84 :
  if(match_cons(b_84, sym_BAM_3))
    {
      c_84 = ATgetArgument(b_84, 0);
      d_84 = ATgetArgument(b_84, 1);
      e_84 = ATgetArgument(b_84, 2);
      {
        ATerm i_84 = NULL;
        t = not_null(c_84);
        {
          ATerm k_84 = NULL;
          t = k_49(t);
          i_84 = t;
          t = not_null(d_84);
          {
            ATerm m_84 = NULL;
            t = l_49(t);
            k_84 = t;
            t = not_null(e_84);
            t = m_49(t);
            m_84 = t;
            t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_84), not_null(k_84), not_null(m_84));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BA_2 (ATerm t, ATerm i_49 (ATerm), ATerm j_49 (ATerm))
{
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL;
  x_84 = t;
  w_84 :
  if(match_cons(x_84, sym_BA_2))
    {
      y_84 = ATgetArgument(x_84, 0);
      z_84 = ATgetArgument(x_84, 1);
      {
        ATerm c_85 = NULL;
        t = not_null(y_84);
        {
          ATerm e_85 = NULL;
          t = i_49(t);
          c_85 = t;
          t = not_null(z_84);
          t = j_49(t);
          e_85 = t;
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(c_85), not_null(e_85));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AM_2 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm))
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
  n_85 = t;
  m_85 :
  if(match_cons(n_85, sym_AM_2))
    {
      o_85 = ATgetArgument(n_85, 0);
      p_85 = ATgetArgument(n_85, 1);
      {
        ATerm s_85 = NULL;
        t = not_null(o_85);
        {
          ATerm u_85 = NULL;
          t = g_49(t);
          s_85 = t;
          t = not_null(p_85);
          t = h_49(t);
          u_85 = t;
          t = (ATerm) ATmakeAppl(sym_AM_2, not_null(s_85), not_null(u_85));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MA_2 (ATerm t, ATerm e_49 (ATerm), ATerm f_49 (ATerm))
{
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
  e_86 = t;
  d_86 :
  if(match_cons(e_86, sym_MA_2))
    {
      f_86 = ATgetArgument(e_86, 0);
      g_86 = ATgetArgument(e_86, 1);
      {
        ATerm j_86 = NULL;
        t = not_null(f_86);
        {
          ATerm l_86 = NULL;
          t = e_49(t);
          j_86 = t;
          t = not_null(g_86);
          t = f_49(t);
          l_86 = t;
          t = (ATerm) ATmakeAppl(sym_MA_2, not_null(j_86), not_null(l_86));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm z_52 (ATerm))
{
  ATerm u_86 = NULL,v_86 = NULL;
  u_86 = t;
  t_86 :
  if(match_cons(u_86, sym_Match_1))
    {
      v_86 = ATgetArgument(u_86, 0);
      {
        ATerm x_86 = NULL;
        t = not_null(v_86);
        t = z_52(t);
        x_86 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(x_86));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm a_53 (ATerm))
{
  ATerm e_87 = NULL,f_87 = NULL;
  e_87 = t;
  d_87 :
  if(match_cons(e_87, sym_Build_1))
    {
      f_87 = ATgetArgument(e_87, 0);
      {
        ATerm h_87 = NULL;
        t = not_null(f_87);
        t = a_53(t);
        h_87 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_87));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm y_53 (ATerm))
{
  ATerm b_13 = t;
  if(PushChoice()==0)
    {
      t = Build_1(t, use_term_0);
      PopChoice();
    }
  else
    {
      t = b_13;
      {
        ATerm c_13 = t;
        if(PushChoice()==0)
          {
            t = Match_1(t, def_term_0);
            PopChoice();
          }
        else
          {
            t = c_13;
            {
              ATerm d_13 = t;
              if(PushChoice()==0)
                {
                  t = MA_2(t, def_term_0, y_53);
                  PopChoice();
                }
              else
                {
                  t = d_13;
                  {
                    ATerm e_13 = t;
                    if(PushChoice()==0)
                      {
                        t = AM_2(t, y_53, def_term_0);
                        PopChoice();
                      }
                    else
                      {
                        t = e_13;
                        {
                          ATerm f_13 = t;
                          if(PushChoice()==0)
                            {
                              t = BA_2(t, y_53, use_term_0);
                              PopChoice();
                            }
                          else
                            {
                              t = f_13;
                              {
                                ATerm g_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BAM_3(t, y_53, use_term_0, def_term_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_13;
                                    {
                                      ATerm h_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Scope_2(t, _id, y_53);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = h_13;
                                          {
                                            ATerm i_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, y_53);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = i_13;
                                                {
                                                  ATerm j_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = j_13;
                                                      {
                                                        ATerm b_3 (ATerm t)
                                                        {
                                                          t = map_1(t, y_53);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, b_3);
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
ATerm use_def_0 (ATerm t)
{
  ATerm k_13 = t;
  if(PushChoice()==0)
    {
      t = constructs_1(t, use_def_0);
      PopChoice();
    }
  else
    {
      t = k_13;
      t = _all(t, use_def_0);
    }
  {
    ATerm l_13 = t;
    if(PushChoice()==0)
      {
        t = UDjoin_0(t);
        PopChoice();
      }
    else
      {
        t = l_13;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm l_50 (ATerm), ATerm m_50 (ATerm), ATerm n_50 (ATerm))
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL,v_87 = NULL;
  r_87 = t;
  q_87 :
  if(match_cons(r_87, sym_RDef_3))
    {
      s_87 = ATgetArgument(r_87, 0);
      t_87 = ATgetArgument(r_87, 1);
      v_87 = ATgetArgument(r_87, 2);
      {
        ATerm z_87 = NULL;
        t = not_null(s_87);
        {
          ATerm b_88 = NULL;
          t = l_50(t);
          z_87 = t;
          t = not_null(t_87);
          {
            ATerm d_88 = NULL;
            t = m_50(t);
            b_88 = t;
            t = not_null(v_87);
            t = n_50(t);
            d_88 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(z_87), not_null(b_88), not_null(d_88));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm), ATerm f_52 (ATerm))
{
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL;
  o_88 = t;
  n_88 :
  if(match_cons(o_88, sym_SDef_3))
    {
      p_88 = ATgetArgument(o_88, 0);
      q_88 = ATgetArgument(o_88, 1);
      r_88 = ATgetArgument(o_88, 2);
      {
        ATerm w_88 = NULL;
        t = not_null(p_88);
        {
          ATerm y_88 = NULL;
          t = d_52(t);
          w_88 = t;
          t = not_null(q_88);
          {
            ATerm a_89 = NULL;
            t = e_52(t);
            y_88 = t;
            t = not_null(r_88);
            t = f_52(t);
            a_89 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(w_88), not_null(y_88), not_null(a_89));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm check_0 (ATerm t)
{
  ATerm m_13 = t;
  if(PushChoice()==0)
    {
      ATerm c_3 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm n_13 = t;
          if(PushChoice()==0)
            {
              ATerm d_3 (ATerm t)
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = TCons_2(t, Nil_0, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, _id, f_3);
                  return(t);
                }
                t = TCons_2(t, Nil_0, e_3);
                return(t);
              }
              t = Cons_2(t, d_3, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            t = n_13;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, c_3);
      t = err_msg_0(t);
      PopChoice();
    }
  else
    {
      t = m_13;
      {
        ATerm o_13 = t;
        if(PushChoice()==0)
          {
            ATerm g_3 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm p_13 = t;
                if(PushChoice()==0)
                  {
                    ATerm h_3 (ATerm t)
                    {
                      ATerm i_3 (ATerm t)
                      {
                        ATerm j_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, _id, j_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, i_3);
                      return(t);
                    }
                    t = Cons_2(t, h_3, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = p_13;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, g_3);
            t = err_msg_0(t);
            PopChoice();
          }
        else
          {
            t = o_13;
            t = Overlay_3(t, _id, _id, _id);
            t = use_def_0(t);
            {
              ATerm q_13 = t;
              if(PushChoice()==0)
                {
                  ATerm k_3 (ATerm t)
                  {
                    ATerm l_3 (ATerm t)
                    {
                      ATerm m_3 (ATerm t)
                      {
                        ATerm n_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, Nil_0, n_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, m_3);
                      return(t);
                    }
                    t = Cons_2(t, l_3, Nil_0);
                    return(t);
                  }
                  t = Overlay_3(t, _id, _id, k_3);
                  PopChoice();
                  _fail(t);
                }
              else
                t = q_13;
              t = err_msg_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm h_89 = NULL;
  t = filter_1(t, check_0);
  h_89 = t;
  g_89 :
  if(!(match_cons(h_89, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm w_50 (ATerm))
{
  ATerm l_89 = NULL,m_89 = NULL;
  l_89 = t;
  k_89 :
  if(match_cons(l_89, sym_Overlays_1))
    {
      m_89 = ATgetArgument(l_89, 0);
      {
        ATerm o_89 = NULL;
        t = not_null(m_89);
        t = w_50(t);
        o_89 = t;
        t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(o_89));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm v_50 (ATerm))
{
  ATerm w_89 = NULL,x_89 = NULL;
  w_89 = t;
  v_89 :
  if(match_cons(w_89, sym_Signature_1))
    {
      x_89 = ATgetArgument(w_89, 0);
      {
        ATerm z_89 = NULL;
        t = not_null(x_89);
        t = v_50(t);
        z_89 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(z_89));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spec_use_def_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        ATerm t_3 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, t_3, Nil_0);
        return(t);
      }
      t = Cons_2(t, r_3, s_3);
      return(t);
    }
    t = Cons_2(t, p_3, q_3);
    return(t);
  }
  t = Specification_1(t, o_3);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL;
  n_90 = t;
  e_90 :
  if(match_cons(n_90, sym_TCons_2))
    {
      o_90 = ATgetArgument(n_90, 0);
      t_90 = ATgetArgument(n_90, 1);
      f_90 :
      if(match_cons(o_90, sym_TCons_2))
        {
          p_90 = ATgetArgument(o_90, 0);
          q_90 = ATgetArgument(o_90, 1);
          g_90 :
          if(match_cons(q_90, sym_TCons_2))
            {
              r_90 = ATgetArgument(q_90, 0);
              s_90 = ATgetArgument(q_90, 1);
              h_90 :
              if(match_cons(s_90, sym_TNil_0))
                {
                  i_90 :
                  if(match_cons(t_90, sym_TCons_2))
                    {
                      u_90 = ATgetArgument(t_90, 0);
                      z_90 = ATgetArgument(t_90, 1);
                      j_90 :
                      if(match_cons(u_90, sym_TCons_2))
                        {
                          v_90 = ATgetArgument(u_90, 0);
                          w_90 = ATgetArgument(u_90, 1);
                          k_90 :
                          if(match_cons(w_90, sym_TCons_2))
                            {
                              x_90 = ATgetArgument(w_90, 0);
                              y_90 = ATgetArgument(w_90, 1);
                              l_90 :
                              if(match_cons(y_90, sym_TNil_0))
                                {
                                  m_90 :
                                  if(match_cons(z_90, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_90), not_null(v_90)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_90), not_null(x_90)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip3_0 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL;
  h_91 = t;
  g_91 :
  if(match_cons(h_91, sym_Cons_2))
    {
      i_91 = ATgetArgument(h_91, 0);
      j_91 = ATgetArgument(h_91, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_91), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm p_91 = NULL;
  p_91 = t;
  o_91 :
  if(match_cons(p_91, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  else
    _fail(t);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm strings_to_vars_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm s_91 = NULL;
    s_91 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_91));
    return(t);
  }
  t = map_1(t, u_3);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
  x_91 = t;
  w_91 :
  if(match_cons(x_91, sym_Cons_2))
    {
      y_91 = ATgetArgument(x_91, 0);
      z_91 = ATgetArgument(x_91, 1);
      t = not_null(z_91);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL;
  j_92 = t;
  g_92 :
  if(match_cons(j_92, sym_TCons_2))
    {
      k_92 = ATgetArgument(j_92, 0);
      l_92 = ATgetArgument(j_92, 1);
      h_92 :
      if(match_cons(l_92, sym_TCons_2))
        {
          m_92 = ATgetArgument(l_92, 0);
          n_92 = ATgetArgument(l_92, 1);
          i_92 :
          if(match_cons(n_92, sym_TNil_0))
            {
              t = not_null(k_92);
              {
                ATerm r_92 (ATerm t)
                {
                  ATerm r_13 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = r_13;
                      {
                        ATerm s_13 = t;
                        if(PushChoice()==0)
                          {
                            ATerm t_13;
                            t_13 = t;
                            {
                              ATerm v_3 (ATerm t)
                              {
                                t = not_null(m_92);
                                return(t);
                              }
                              t = HdMember_1(t, v_3);
                            }
                            t = t_13;
                            t = Cons_2(t, _id, r_92);
                            PopChoice();
                          }
                        else
                          {
                            t = s_13;
                            t = Tl_0(t);
                            t = r_92(t);
                          }
                      }
                    }
                  return(t);
                }
                t = r_92(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL;
  w_92 = t;
  t_92 :
  if(match_cons(w_92, sym_TCons_2))
    {
      x_92 = ATgetArgument(w_92, 0);
      y_92 = ATgetArgument(w_92, 1);
      u_92 :
      if(match_cons(y_92, sym_TCons_2))
        {
          z_92 = ATgetArgument(y_92, 0);
          a_93 = ATgetArgument(y_92, 1);
          v_92 :
          if(match_cons(a_93, sym_TNil_0))
            {
              if(x_92 != NULL && x_92 != z_92)
                _fail(z_92);
              else
                x_92 = z_92;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL;
  ATerm n_95 (ATerm t)
  {
    ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,z_94 = NULL;
    ATerm u_13;
    u_13 = t;
    {
      ATerm o_94 = NULL,q_94 = NULL,s_94 = NULL;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_94), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm v_13 = t;
        if(PushChoice()==0)
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = v_13;
        {
          ATerm w_13;
          w_13 = t;
          {
            ATerm p_94 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            t = j_0(t);
            p_94 = t;
            if(o_94 != NULL && o_94 != p_94)
              _fail(p_94);
            else
              o_94 = p_94;
          }
          t = w_13;
          {
            ATerm r_94 = NULL;
            t = not_null(b_94);
            t = tvars_0(t);
            r_94 = t;
            if(q_94 != NULL && q_94 != r_94)
              _fail(r_94);
            else
              q_94 = r_94;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_94), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = isect_0(t);
            {
              ATerm t_94 = NULL,v_94 = NULL,x_94 = NULL;
              t = strings_to_vars_0(t);
              s_94 = t;
              if(l_94 != NULL && l_94 != s_94)
                _fail(s_94);
              else
                l_94 = s_94;
              {
                ATerm x_13;
                x_13 = t;
                {
                  ATerm u_94 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  t = j_0(t);
                  u_94 = t;
                  if(t_94 != NULL && t_94 != u_94)
                    _fail(u_94);
                  else
                    t_94 = u_94;
                }
                t = x_13;
                {
                  ATerm w_94 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = tvars_0(t);
                  w_94 = t;
                  if(v_94 != NULL && v_94 != w_94)
                    _fail(w_94);
                  else
                    v_94 = w_94;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_94), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = isect_0(t);
                  {
                    ATerm y_94 = NULL;
                    t = strings_to_vars_0(t);
                    x_94 = t;
                    if(m_94 != NULL && m_94 != x_94)
                      _fail(x_94);
                    else
                      m_94 = x_94;
                    t = new_0(t);
                    y_94 = t;
                    if(n_94 != NULL && n_94 != y_94)
                      _fail(y_94);
                    else
                      n_94 = y_94;
                  }
                }
              }
            }
          }
        }
      }
    }
    t = u_13;
    {
      ATerm a_95 = NULL;
      t = not_null(y_93);
      t = k_0(t);
      a_95 = t;
      if(z_94 != NULL && z_94 != a_95)
        _fail(a_95);
      else
        z_94 = a_95;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(z_94), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(l_94)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(n_94)), not_null(m_94))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(y_93), not_null(z_93), (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_94), not_null(c_94), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(y_93))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(l_94)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(n_94)), not_null(m_94)))), not_null(f_94)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
    return(t);
  }
  ATerm o_95 (ATerm t)
  {
    ATerm f_95 = NULL,l_95 = NULL;
    ATerm y_13;
    y_13 = t;
    {
      ATerm g_95 = NULL,i_95 = NULL,k_95 = NULL;
      ATerm z_13;
      z_13 = t;
      {
        ATerm h_95 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = j_0(t);
        h_95 = t;
        if(g_95 != NULL && g_95 != h_95)
          _fail(h_95);
        else
          g_95 = h_95;
      }
      t = z_13;
      {
        ATerm j_95 = NULL;
        t = not_null(b_94);
        t = tvars_0(t);
        j_95 = t;
        if(i_95 != NULL && i_95 != j_95)
          _fail(j_95);
        else
          i_95 = j_95;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_95), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = isect_0(t);
        t = strings_to_vars_0(t);
        k_95 = t;
        if(f_95 != NULL && f_95 != k_95)
          _fail(k_95);
        else
          f_95 = k_95;
      }
    }
    t = y_13;
    {
      ATerm m_95 = NULL;
      t = not_null(y_93);
      t = k_0(t);
      m_95 = t;
      if(l_95 != NULL && l_95 != m_95)
        _fail(m_95);
      else
        l_95 = m_95;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(l_95), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(f_95)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(y_93), not_null(z_93), (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_94), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(y_93))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(f_95)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_94), (ATerm) ATmakeAppl(sym_Fail_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
    return(t);
  }
  x_93 = t;
  r_93 :
  if(match_cons(x_93, sym_RDef_3))
    {
      y_93 = ATgetArgument(x_93, 0);
      z_93 = ATgetArgument(x_93, 1);
      a_94 = ATgetArgument(x_93, 2);
      s_93 :
      if(match_cons(a_94, sym_Rule_3))
        {
          b_94 = ATgetArgument(a_94, 0);
          c_94 = ATgetArgument(a_94, 1);
          f_94 = ATgetArgument(a_94, 2);
          t_93 :
          if(match_cons(c_94, sym_Op_2))
            {
              d_94 = ATgetArgument(c_94, 0);
              e_94 = ATgetArgument(c_94, 1);
              u_93 :
              if(match_cons(e_94, sym_Nil_0))
                {
                  v_93 :
                  if(match_string(d_94, "Undefined"))
                    {
                      ATerm a_14 = t;
                      if(PushChoice()==0)
                        {
                          t = n_95(t);
                          PopChoice();
                        }
                      else
                        {
                          t = a_14;
                          t = o_95(t);
                        }
                    }
                  else
                    t = n_95(t);
                }
              else
                {
                  w_93 :
                  t = n_95(t);
                }
            }
          else
            t = n_95(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm split_dynamic_rules_0 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  l_96 = t;
  f_96 :
  if(match_cons(l_96, sym_TCons_2))
    {
      m_96 = ATgetArgument(l_96, 0);
      o_96 = ATgetArgument(l_96, 1);
      g_96 :
      if(match_cons(m_96, sym_OverrideDynamicRules_1))
        {
          n_96 = ATgetArgument(m_96, 0);
          h_96 :
          if(match_cons(o_96, sym_TCons_2))
            {
              p_96 = ATgetArgument(o_96, 0);
              q_96 = ATgetArgument(o_96, 1);
              i_96 :
              if(match_cons(q_96, sym_TNil_0))
                {
                  t = not_null(n_96);
                  {
                    ATerm w_3 (ATerm t)
                    {
                      ATerm x_3 (ATerm t)
                      {
                        t = not_null(p_96);
                        return(t);
                      }
                      ATerm y_3 (ATerm t)
                      {
                        ATerm t_96 = NULL;
                        t_96 = t;
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(t_96))), (ATerm) ATmakeAppl(sym_Nil_0)));
                        return(t);
                      }
                      t = SplitDynamicRule_2(t, x_3, y_3);
                      return(t);
                    }
                    t = map_1(t, w_3);
                    t = unzip_0(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(m_96, sym_DynamicRules_1))
            {
              n_96 = ATgetArgument(m_96, 0);
              j_96 :
              if(match_cons(o_96, sym_TCons_2))
                {
                  p_96 = ATgetArgument(o_96, 0);
                  q_96 = ATgetArgument(o_96, 1);
                  k_96 :
                  if(match_cons(q_96, sym_TNil_0))
                    {
                      t = not_null(n_96);
                      {
                        ATerm z_3 (ATerm t)
                        {
                          ATerm a_4 (ATerm t)
                          {
                            t = not_null(p_96);
                            return(t);
                          }
                          ATerm b_4 (ATerm t)
                          {
                            ATerm x_96 = NULL;
                            x_96 = t;
                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(x_96))), (ATerm) ATmakeAppl(sym_Nil_0)));
                            return(t);
                          }
                          t = SplitDynamicRule_2(t, a_4, b_4);
                          return(t);
                        }
                        t = map_1(t, z_3);
                        t = unzip_0(t);
                      }
                    }
                  else
                    _fail(t);
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
  return(t);
}
ATerm dist_scope_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL;
  k_97 = t;
  g_97 :
  if(match_cons(k_97, sym_TCons_2))
    {
      l_97 = ATgetArgument(k_97, 0);
      o_97 = ATgetArgument(k_97, 1);
      h_97 :
      if(match_cons(l_97, sym_Scope_2))
        {
          m_97 = ATgetArgument(l_97, 0);
          n_97 = ATgetArgument(l_97, 1);
          i_97 :
          if(match_cons(o_97, sym_TCons_2))
            {
              p_97 = ATgetArgument(o_97, 0);
              q_97 = ATgetArgument(o_97, 1);
              j_97 :
              if(match_cons(q_97, sym_TNil_0))
                {
                  ATerm u_97 = NULL;
                  ATerm v_97 = NULL,x_97 = NULL;
                  ATerm w_97 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_97), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_97), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = union_0(t);
                  w_97 = t;
                  if(v_97 != NULL && v_97 != w_97)
                    _fail(w_97);
                  else
                    v_97 = w_97;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_97), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_97), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = x_76(t);
                  x_97 = t;
                  if(u_97 != NULL && u_97 != x_97)
                    _fail(x_97);
                  else
                    u_97 = x_97;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_97), not_null(u_97));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm one_dist_1 (ATerm t, ATerm e_71 (ATerm))
{
  ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL;
  g_98 = t;
  d_98 :
  if(match_cons(g_98, sym_TCons_2))
    {
      h_98 = ATgetArgument(g_98, 0);
      i_98 = ATgetArgument(g_98, 1);
      e_98 :
      if(match_cons(i_98, sym_TCons_2))
        {
          j_98 = ATgetArgument(i_98, 0);
          k_98 = ATgetArgument(i_98, 1);
          f_98 :
          if(match_cons(k_98, sym_TNil_0))
            {
              t = not_null(h_98);
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm n_98 = NULL;
                  n_98 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_98), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_98), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = e_71(t);
                  return(t);
                }
                t = _one(t, c_4);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm s_98 (ATerm t)
  {
    ATerm b_14 = t;
    if(PushChoice()==0)
      {
        t = t_71(t);
        PopChoice();
      }
    else
      {
        t = b_14;
        t = one_dist_1(t, s_98);
      }
    return(t);
  }
  t = s_98(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL;
  b_99 = t;
  a_99 :
  if(match_cons(b_99, sym_Cons_2))
    {
      c_99 = ATgetArgument(b_99, 0);
      d_99 = ATgetArgument(b_99, 1);
      {
        ATerm g_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
        ATerm l_99 = NULL;
        t = not_null(c_99);
        {
          ATerm r_99 = NULL;
          t = tvars_0(t);
          l_99 = t;
          if(j_99 != NULL && j_99 != l_99)
            _fail(l_99);
          else
            j_99 = l_99;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_99), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_99), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm u_99 (ATerm t)
            {
              ATerm d_4 (ATerm t)
              {
                ATerm c_14 = t;
                if(PushChoice()==0)
                  {
                    t = dist_scope_1(t, u_99);
                    PopChoice();
                  }
                else
                  {
                    t = c_14;
                    {
                      ATerm m_99 = NULL,n_99 = NULL,o_99 = NULL,p_99 = NULL,q_99 = NULL;
                      t = split_dynamic_rules_0(t);
                      m_99 = t;
                      w_98 :
                      if(match_cons(m_99, sym_TCons_2))
                        {
                          n_99 = ATgetArgument(m_99, 0);
                          o_99 = ATgetArgument(m_99, 1);
                          x_98 :
                          if(match_cons(o_99, sym_TCons_2))
                            {
                              p_99 = ATgetArgument(o_99, 0);
                              q_99 = ATgetArgument(o_99, 1);
                              y_98 :
                              if(match_cons(q_99, sym_TNil_0))
                                {
                                  if(i_99 != NULL && i_99 != n_99)
                                    _fail(n_99);
                                  else
                                    i_99 = n_99;
                                  if(g_99 != NULL && g_99 != p_99)
                                    _fail(p_99);
                                  else
                                    g_99 = p_99;
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_99));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  }
                return(t);
              }
              t = env_oncetd_1(t, d_4);
              return(t);
            }
            t = u_99(t);
            r_99 = t;
            if(k_99 != NULL && k_99 != r_99)
              _fail(r_99);
            else
              k_99 = r_99;
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_99), not_null(g_99)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_99), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm y_99 (ATerm t)
  {
    t = r_70(t);
    {
      ATerm d_14 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = d_14;
          t = Cons_2(t, _id, y_99);
        }
    }
    return(t);
  }
  t = y_99(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, e_4);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
  f_100 = t;
  b_100 :
  if(match_cons(f_100, sym_DynRuleScope_2))
    {
      g_100 = ATgetArgument(f_100, 0);
      h_100 = ATgetArgument(f_100, 1);
      c_100 :
      if(match_cons(g_100, sym_Cons_2))
        {
          d_100 = ATgetArgument(g_100, 0);
          e_100 = ATgetArgument(g_100, 1);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_100))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DynRuleScope_2, not_null(e_100), not_null(h_100)), (ATerm) ATmakeAppl(sym_Nil_0))));
        }
      else
        {
          if(match_cons(g_100, sym_Nil_0))
            t = not_null(h_100);
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm define_rule_scope_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, f_4);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm h_4 (ATerm t)
    {
      ATerm i_4 (ATerm t)
      {
        ATerm j_4 (ATerm t)
        {
          ATerm k_4 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, k_4);
          return(t);
        }
        t = Cons_2(t, j_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, i_4);
      return(t);
    }
    t = Cons_2(t, _id, h_4);
    return(t);
  }
  t = Specification_1(t, g_4);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm t_100 = NULL,u_100 = NULL;
  t_100 = t;
  r_100 :
  if(match_cons(t_100, sym_ScopeDefault_1))
    {
      u_100 = ATgetArgument(t_100, 0);
      {
        ATerm w_100 = NULL;
        ATerm x_100 = NULL;
        t = not_null(u_100);
        t = tvars_0(t);
        x_100 = t;
        if(w_100 != NULL && w_100 != x_100)
          _fail(x_100);
        else
          w_100 = x_100;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_100), not_null(u_100));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm o_50 (ATerm))
{
  ATerm e_101 = NULL,f_101 = NULL;
  e_101 = t;
  d_101 :
  if(match_cons(e_101, sym_DynamicRules_1))
    {
      f_101 = ATgetArgument(e_101, 0);
      {
        ATerm h_101 = NULL;
        t = not_null(f_101);
        t = o_50(t);
        h_101 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(h_101));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm d_53 (ATerm), ATerm e_53 (ATerm))
{
  ATerm q_101 = NULL,s_101 = NULL,t_101 = NULL;
  q_101 = t;
  o_101 :
  if(match_cons(q_101, sym_Scope_2))
    {
      s_101 = ATgetArgument(q_101, 0);
      t_101 = ATgetArgument(q_101, 1);
      {
        ATerm w_101 = NULL;
        t = not_null(s_101);
        {
          ATerm y_101 = NULL;
          t = d_53(t);
          w_101 = t;
          t = not_null(t_101);
          t = e_53(t);
          y_101 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_101), not_null(y_101));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm d_54 (ATerm), ATerm e_54 (ATerm), ATerm f_54 (ATerm))
{
  ATerm e_14 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, f_54, d_54);
      PopChoice();
    }
  else
    {
      t = e_14;
      t = DynamicRules_1(t, d_54);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm g_102 = NULL,h_102 = NULL;
  g_102 = t;
  e_102 :
  if(match_cons(g_102, sym_DynamicRules_1))
    {
      h_102 = ATgetArgument(g_102, 0);
      t = not_null(h_102);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL;
  s_102 = t;
  m_102 :
  if(match_cons(s_102, sym_LRule_1))
    {
      t_102 = ATgetArgument(s_102, 0);
      o_102 :
      if(match_cons(t_102, sym_Rule_3))
        {
          p_102 = ATgetArgument(t_102, 0);
          q_102 = ATgetArgument(t_102, 1);
          r_102 = ATgetArgument(t_102, 2);
          t = not_null(p_102);
          t = tvars_0(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(s_102, sym_Scope_2))
        {
          t_102 = ATgetArgument(s_102, 0);
          u_102 = ATgetArgument(s_102, 1);
          t = not_null(t_102);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL;
  e_103 = t;
  d_103 :
  if(match_cons(e_103, sym_Var_1))
    {
      f_103 = ATgetArgument(e_103, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_103), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL;
  m_103 = t;
  j_103 :
  if(match_cons(m_103, sym_TCons_2))
    {
      n_103 = ATgetArgument(m_103, 0);
      o_103 = ATgetArgument(m_103, 1);
      k_103 :
      if(match_cons(o_103, sym_TCons_2))
        {
          p_103 = ATgetArgument(o_103, 0);
          q_103 = ATgetArgument(o_103, 1);
          l_103 :
          if(match_cons(q_103, sym_TNil_0))
            {
              t = not_null(n_103);
              {
                ATerm u_103 (ATerm t)
                {
                  ATerm f_14 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(p_103);
                      PopChoice();
                    }
                  else
                    {
                      t = f_14;
                      {
                        ATerm g_14 = t;
                        if(PushChoice()==0)
                          {
                            ATerm l_4 (ATerm t)
                            {
                              t = not_null(p_103);
                              return(t);
                            }
                            t = HdMember_1(t, l_4);
                            t = u_103(t);
                            PopChoice();
                          }
                        else
                          {
                            t = g_14;
                            t = Cons_2(t, _id, u_103);
                          }
                      }
                    }
                  return(t);
                }
                t = u_103(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm l_64 (ATerm))
{
  ATerm h_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = j_64(t);
      PopChoice();
    }
  else
    {
      t = h_14;
      {
        ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL;
        z_103 = t;
        y_103 :
        if(match_cons(z_103, sym_Cons_2))
          {
            a_104 = ATgetArgument(z_103, 0);
            b_104 = ATgetArgument(z_103, 1);
            {
              ATerm e_104 = NULL,g_104 = NULL;
              ATerm i_14;
              i_14 = t;
              {
                ATerm f_104 = NULL;
                t = not_null(a_104);
                t = l_64(t);
                f_104 = t;
                if(e_104 != NULL && e_104 != f_104)
                  _fail(f_104);
                else
                  e_104 = f_104;
              }
              t = i_14;
              {
                ATerm h_104 = NULL;
                t = not_null(b_104);
                t = foldr_3(t, j_64, k_64, l_64);
                h_104 = t;
                if(g_104 != NULL && g_104 != h_104)
                  _fail(h_104);
                else
                  g_104 = h_104;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_104), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_104), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = k_64(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm b_66 (ATerm))
{
  ATerm r_104 = NULL;
  ATerm t_104 = NULL;
  r_104 = t;
  {
    ATerm u_104 = NULL;
    ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL;
    t = not_null(r_104);
    u_104 = t;
    t = SSL_explode_term(not_null(u_104));
    w_104 = t;
    o_104 :
    if(match_cons(w_104, sym_TCons_2))
      {
        x_104 = ATgetArgument(w_104, 0);
        y_104 = ATgetArgument(w_104, 1);
        p_104 :
        if(match_cons(y_104, sym_TCons_2))
          {
            z_104 = ATgetArgument(y_104, 0);
            a_105 = ATgetArgument(y_104, 1);
            q_104 :
            if(match_cons(a_105, sym_TNil_0))
              {
                if(t_104 != NULL && t_104 != z_104)
                  _fail(z_104);
                else
                  t_104 = z_104;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(t_104);
    t = foldr_3(t, z_65, a_66, b_66);
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL,o_105 = NULL,p_105 = NULL;
  j_105 = t;
  f_105 :
  if(match_cons(j_105, sym_TCons_2))
    {
      k_105 = ATgetArgument(j_105, 0);
      l_105 = ATgetArgument(j_105, 1);
      g_105 :
      if(match_cons(l_105, sym_TCons_2))
        {
          m_105 = ATgetArgument(l_105, 0);
          p_105 = ATgetArgument(l_105, 1);
          h_105 :
          if(match_cons(m_105, sym_Cons_2))
            {
              n_105 = ATgetArgument(m_105, 0);
              o_105 = ATgetArgument(m_105, 1);
              i_105 :
              if(match_cons(p_105, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_105), not_null(k_105)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_105), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL,q_106 = NULL,s_106 = NULL,t_106 = NULL;
  l_106 = t;
  h_106 :
  if(match_cons(l_106, sym_Cons_2))
    {
      m_106 = ATgetArgument(l_106, 0);
      t_106 = ATgetArgument(l_106, 1);
      i_106 :
      if(match_cons(m_106, sym_TCons_2))
        {
          n_106 = ATgetArgument(m_106, 0);
          o_106 = ATgetArgument(m_106, 1);
          j_106 :
          if(match_cons(o_106, sym_TCons_2))
            {
              q_106 = ATgetArgument(o_106, 0);
              s_106 = ATgetArgument(o_106, 1);
              k_106 :
              if(match_cons(s_106, sym_TNil_0))
                {
                  ATerm x_106 = NULL,y_106 = NULL,i_107 = NULL,r_107 = NULL;
                  ATerm j_14;
                  j_14 = t;
                  {
                    ATerm z_106 = NULL;
                    ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,g_107 = NULL;
                    t = not_null(q_106);
                    z_106 = t;
                    t = SSL_explode_term(not_null(z_106));
                    b_107 = t;
                    x_105 :
                    if(match_cons(b_107, sym_TCons_2))
                      {
                        c_107 = ATgetArgument(b_107, 0);
                        d_107 = ATgetArgument(b_107, 1);
                        y_105 :
                        if(match_cons(d_107, sym_TCons_2))
                          {
                            e_107 = ATgetArgument(d_107, 0);
                            g_107 = ATgetArgument(d_107, 1);
                            z_105 :
                            if(match_cons(g_107, sym_TNil_0))
                              {
                                if(x_106 != NULL && x_106 != c_107)
                                  _fail(c_107);
                                else
                                  x_106 = c_107;
                                if(y_106 != NULL && y_106 != e_107)
                                  _fail(e_107);
                                else
                                  y_106 = e_107;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = j_14;
                  {
                    ATerm k_14;
                    k_14 = t;
                    {
                      ATerm k_107 = NULL;
                      ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL;
                      t = not_null(n_106);
                      k_107 = t;
                      t = SSL_explode_term(not_null(k_107));
                      m_107 = t;
                      d_106 :
                      if(match_cons(m_107, sym_TCons_2))
                        {
                          n_107 = ATgetArgument(m_107, 0);
                          o_107 = ATgetArgument(m_107, 1);
                          e_106 :
                          if(match_cons(o_107, sym_TCons_2))
                            {
                              p_107 = ATgetArgument(o_107, 0);
                              q_107 = ATgetArgument(o_107, 1);
                              f_106 :
                              if(match_cons(q_107, sym_TNil_0))
                                {
                                  if(x_106 != NULL && x_106 != n_107)
                                    _fail(n_107);
                                  else
                                    x_106 = n_107;
                                  if(i_107 != NULL && i_107 != p_107)
                                    _fail(p_107);
                                  else
                                    i_107 = p_107;
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                    t = k_14;
                    {
                      ATerm s_107 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_107), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_106), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      s_107 = t;
                      if(r_107 != NULL && r_107 != s_107)
                        _fail(s_107);
                      else
                        r_107 = s_107;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_107), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_106), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                    }
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL,k_108 = NULL;
  e_108 = t;
  a_108 :
  if(match_cons(e_108, sym_Cons_2))
    {
      f_108 = ATgetArgument(e_108, 0);
      k_108 = ATgetArgument(e_108, 1);
      b_108 :
      if(match_cons(f_108, sym_TCons_2))
        {
          g_108 = ATgetArgument(f_108, 0);
          h_108 = ATgetArgument(f_108, 1);
          c_108 :
          if(match_cons(h_108, sym_TCons_2))
            {
              i_108 = ATgetArgument(h_108, 0);
              j_108 = ATgetArgument(h_108, 1);
              d_108 :
              if(match_cons(j_108, sym_TNil_0))
                {
                  ATerm m_108 = NULL;
                  if(g_108 != NULL && g_108 != i_108)
                    _fail(i_108);
                  else
                    g_108 = i_108;
                  if(m_108 != NULL && m_108 != k_108)
                    _fail(k_108);
                  else
                    m_108 = k_108;
                  t = not_null(m_108);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm))
{
  ATerm o_108 (ATerm t)
  {
    ATerm l_14 = t;
    if(PushChoice()==0)
      {
        t = b_76(t);
        PopChoice();
      }
    else
      {
        t = l_14;
        t = c_76(t);
        t = o_108(t);
      }
    return(t);
  }
  t = o_108(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm))
{
  t = e_76(t);
  t = while_not_2(t, f_76, g_76);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL;
  s_108 = t;
  r_108 :
  if(match_cons(s_108, sym_Cons_2))
    {
      t_108 = ATgetArgument(s_108, 0);
      u_108 = ATgetArgument(s_108, 1);
      t = o_65(t);
      {
        ATerm m_4 (ATerm t)
        {
          ATerm x_108 = NULL;
          x_108 = t;
          if(t_108 != NULL && t_108 != x_108)
            _fail(x_108);
          else
            t_108 = x_108;
          return(t);
        }
        t = fetch_1(t, m_4);
      }
      t = not_null(u_108);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm m_14 = t;
  if(PushChoice()==0)
    {
      ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL;
      f_109 = t;
      b_109 :
      if(match_cons(f_109, sym_TCons_2))
        {
          g_109 = ATgetArgument(f_109, 0);
          h_109 = ATgetArgument(f_109, 1);
          c_109 :
          if(match_cons(h_109, sym_TCons_2))
            {
              i_109 = ATgetArgument(h_109, 0);
              j_109 = ATgetArgument(h_109, 1);
              d_109 :
              if(match_cons(j_109, sym_TNil_0))
                {
                  t = not_null(g_109);
                  {
                    ATerm p_109 (ATerm t)
                    {
                      ATerm n_14 = t;
                      if(PushChoice()==0)
                        {
                          t = Nil_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = n_14;
                          {
                            ATerm o_14 = t;
                            if(PushChoice()==0)
                              {
                                ATerm n_4 (ATerm t)
                                {
                                  t = not_null(i_109);
                                  return(t);
                                }
                                t = HdMember_1(t, n_4);
                                t = p_109(t);
                                PopChoice();
                              }
                            else
                              {
                                t = o_14;
                                t = Cons_2(t, _id, p_109);
                              }
                          }
                        }
                      return(t);
                    }
                    t = p_109(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = m_14;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm m_109 = NULL;
          m_109 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_109), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          ATerm r_4 (ATerm t)
          {
            t = TCons_2(t, Nil_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, r_4);
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          ATerm p_14 = t;
          if(PushChoice()==0)
            {
              ATerm s_4 (ATerm t)
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm q_14 = t;
                  if(PushChoice()==0)
                    {
                      t = UfIdem_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_14;
                      t = UfDecompose_0(t);
                    }
                  return(t);
                }
                t = TCons_2(t, t_4, TNil_0);
                return(t);
              }
              t = TCons_2(t, _id, s_4);
              PopChoice();
            }
          else
            {
              t = p_14;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, o_4, p_4, q_4);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm j_55 (ATerm), ATerm k_55 (ATerm), ATerm l_55 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm u_109 (ATerm t)
  {
    ATerm r_14 = t;
    if(PushChoice()==0)
      {
        t = j_55(t);
        PopChoice();
      }
    else
      {
        t = r_14;
        {
          ATerm s_14 = t;
          if(PushChoice()==0)
            {
              ATerm s_109 = NULL;
              ATerm t_14;
              t_14 = t;
              {
                ATerm t_109 = NULL;
                t = k_55(t);
                t_109 = t;
                if(s_109 != NULL && s_109 != t_109)
                  _fail(t_109);
                else
                  s_109 = t_109;
              }
              t = t_14;
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm w_4 (ATerm t)
                  {
                    t = not_null(s_109);
                    return(t);
                  }
                  t = split_2(t, u_109, w_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm v_4 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = l_55(t, u_4, u_109, v_4);
                {
                  ATerm x_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, x_4, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = s_14;
              {
                ATerm y_4 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, y_4, union_0, u_109);
              }
            }
        }
      }
    return(t);
  }
  t = u_109(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm u_14 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = u_14;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, z_4, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL,d_110 = NULL,e_110 = NULL;
  a_110 = t;
  y_109 :
  if(match_cons(a_110, sym_LRule_1))
    {
      b_110 = ATgetArgument(a_110, 0);
      z_109 :
      if(match_cons(b_110, sym_Rule_3))
        {
          c_110 = ATgetArgument(b_110, 0);
          d_110 = ATgetArgument(b_110, 1);
          e_110 = ATgetArgument(b_110, 2);
          {
            ATerm i_110 = NULL;
            ATerm j_110 = NULL;
            t = not_null(c_110);
            t = tvars_0(t);
            j_110 = t;
            if(i_110 != NULL && i_110 != j_110)
              _fail(j_110);
            else
              i_110 = j_110;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_110), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_110), not_null(d_110), not_null(e_110))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm m_110 (ATerm t)
  {
    t = _all(t, m_110);
    t = i_72(t);
    return(t);
  }
  t = m_110(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm v_14 = t;
      if(PushChoice()==0)
        {
          t = DefLRule_0(t);
          PopChoice();
        }
      else
        {
          t = v_14;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, c_5);
    return(t);
  }
  t = bottomup_1(t, b_5);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm p_110 = NULL,q_110 = NULL;
  p_110 = t;
  o_110 :
  if(match_cons(p_110, sym_Var_1))
    {
      q_110 = ATgetArgument(p_110, 0);
      t = not_null(q_110);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL;
  y_110 = t;
  u_110 :
  if(match_cons(y_110, sym_TCons_2))
    {
      z_110 = ATgetArgument(y_110, 0);
      a_111 = ATgetArgument(y_110, 1);
      v_110 :
      if(match_cons(a_111, sym_TCons_2))
        {
          c_111 = ATgetArgument(a_111, 0);
          f_111 = ATgetArgument(a_111, 1);
          w_110 :
          if(match_cons(c_111, sym_Cons_2))
            {
              d_111 = ATgetArgument(c_111, 0);
              e_111 = ATgetArgument(c_111, 1);
              x_110 :
              if(match_cons(f_111, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_110), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_111), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look1_0 (ATerm t)
{
  ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL;
  s_111 = t;
  l_111 :
  if(match_cons(s_111, sym_TCons_2))
    {
      t_111 = ATgetArgument(s_111, 0);
      u_111 = ATgetArgument(s_111, 1);
      m_111 :
      if(match_cons(u_111, sym_TCons_2))
        {
          v_111 = ATgetArgument(u_111, 0);
          d_112 = ATgetArgument(u_111, 1);
          n_111 :
          if(match_cons(v_111, sym_Cons_2))
            {
              w_111 = ATgetArgument(v_111, 0);
              c_112 = ATgetArgument(v_111, 1);
              o_111 :
              if(match_cons(w_111, sym_TCons_2))
                {
                  x_111 = ATgetArgument(w_111, 0);
                  z_111 = ATgetArgument(w_111, 1);
                  p_111 :
                  if(match_cons(z_111, sym_TCons_2))
                    {
                      a_112 = ATgetArgument(z_111, 0);
                      b_112 = ATgetArgument(z_111, 1);
                      q_111 :
                      if(match_cons(b_112, sym_TNil_0))
                        {
                          r_111 :
                          if(match_cons(d_112, sym_TNil_0))
                            {
                              ATerm f_112 = NULL;
                              if(t_111 != NULL && t_111 != x_111)
                                _fail(x_111);
                              else
                                t_111 = x_111;
                              if(f_112 != NULL && f_112 != a_112)
                                _fail(a_112);
                              else
                                f_112 = a_112;
                              t = not_null(f_112);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm w_14 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = w_14;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm f_57 (ATerm), ATerm g_57 (ATerm))
{
  ATerm m_112 = NULL;
  ATerm o_112 = NULL,p_112 = NULL;
  m_112 = t;
  {
    ATerm q_112 = NULL;
    t = not_null(m_112);
    {
      ATerm r_112 = NULL;
      t = f_57(t);
      q_112 = t;
      if(o_112 != NULL && o_112 != q_112)
        _fail(q_112);
      else
        o_112 = q_112;
      t = g_57(t);
      r_112 = t;
      if(p_112 != NULL && p_112 != r_112)
        _fail(r_112);
      else
        p_112 = r_112;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_112), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_112), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm w_112 (ATerm t)
  {
    ATerm x_14 = t;
    if(PushChoice()==0)
      {
        t = k_74(t);
        PopChoice();
      }
    else
      {
        t = x_14;
        t = _all(t, w_112);
      }
    return(t);
  }
  t = w_112(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL;
  b_113 = t;
  y_112 :
  if(match_cons(b_113, sym_TCons_2))
    {
      c_113 = ATgetArgument(b_113, 0);
      d_113 = ATgetArgument(b_113, 1);
      z_112 :
      if(match_cons(d_113, sym_TCons_2))
        {
          e_113 = ATgetArgument(d_113, 0);
          f_113 = ATgetArgument(d_113, 1);
          a_113 :
          if(match_cons(f_113, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_113), not_null(e_113));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm q_113 = NULL,r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL;
  q_113 = t;
  l_113 :
  if(match_cons(q_113, sym_TCons_2))
    {
      r_113 = ATgetArgument(q_113, 0);
      u_113 = ATgetArgument(q_113, 1);
      m_113 :
      if(match_cons(r_113, sym_Cons_2))
        {
          s_113 = ATgetArgument(r_113, 0);
          t_113 = ATgetArgument(r_113, 1);
          n_113 :
          if(match_cons(u_113, sym_TCons_2))
            {
              v_113 = ATgetArgument(u_113, 0);
              y_113 = ATgetArgument(u_113, 1);
              o_113 :
              if(match_cons(v_113, sym_Cons_2))
                {
                  w_113 = ATgetArgument(v_113, 0);
                  x_113 = ATgetArgument(v_113, 1);
                  p_113 :
                  if(match_cons(y_113, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_113), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_113), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_113), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_113), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm l_114 = NULL,m_114 = NULL,n_114 = NULL,o_114 = NULL,p_114 = NULL;
  l_114 = t;
  g_114 :
  if(match_cons(l_114, sym_TCons_2))
    {
      m_114 = ATgetArgument(l_114, 0);
      n_114 = ATgetArgument(l_114, 1);
      h_114 :
      if(match_cons(m_114, sym_Nil_0))
        {
          i_114 :
          if(match_cons(n_114, sym_TCons_2))
            {
              o_114 = ATgetArgument(n_114, 0);
              p_114 = ATgetArgument(n_114, 1);
              j_114 :
              if(match_cons(o_114, sym_Nil_0))
                {
                  k_114 :
                  if(match_cons(p_114, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm))
{
  ATerm r_114 (ATerm t)
  {
    ATerm y_14 = t;
    if(PushChoice()==0)
      {
        t = x_67(t);
        PopChoice();
      }
    else
      {
        t = y_14;
        t = y_67(t);
        {
          ATerm d_5 (ATerm t)
          {
            t = TCons_2(t, r_114, TNil_0);
            return(t);
          }
          t = TCons_2(t, a_68, d_5);
          t = z_67(t);
        }
      }
    return(t);
  }
  t = r_114(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_68 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_68);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL;
  z_114 = t;
  v_114 :
  if(match_cons(z_114, sym_TCons_2))
    {
      a_115 = ATgetArgument(z_114, 0);
      b_115 = ATgetArgument(z_114, 1);
      w_114 :
      if(match_cons(b_115, sym_TCons_2))
        {
          c_115 = ATgetArgument(b_115, 0);
          d_115 = ATgetArgument(b_115, 1);
          x_114 :
          if(match_cons(d_115, sym_TNil_0))
            {
              ATerm h_115 = NULL;
              if(h_115 != NULL && h_115 != c_115)
                _fail(c_115);
              else
                h_115 = c_115;
            }
          else
            {
              if(match_cons(d_115, sym_TCons_2))
                {
                  e_115 = ATgetArgument(d_115, 0);
                  f_115 = ATgetArgument(d_115, 1);
                  y_114 :
                  if(match_cons(f_115, sym_TNil_0))
                    {
                      ATerm n_115 = NULL;
                      ATerm o_115 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_115), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      o_115 = t;
                      if(n_115 != NULL && n_115 != o_115)
                        _fail(o_115);
                      else
                        n_115 = o_115;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_115), (ATerm) ATmakeAppl(sym_TNil_0)));
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
    }
  else
    _fail(t);
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm h_57 (ATerm), ATerm i_57 (ATerm))
{
  ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL;
  t = subs_args_0(t);
  w_115 = t;
  t_115 :
  if(match_cons(w_115, sym_TCons_2))
    {
      x_115 = ATgetArgument(w_115, 0);
      y_115 = ATgetArgument(w_115, 1);
      u_115 :
      if(match_cons(y_115, sym_TCons_2))
        {
          z_115 = ATgetArgument(y_115, 0);
          a_116 = ATgetArgument(y_115, 1);
          v_115 :
          if(match_cons(a_116, sym_TNil_0))
            {
              t = not_null(z_115);
              {
                ATerm e_5 (ATerm t)
                {
                  ATerm g_5 (ATerm t)
                  {
                    t = not_null(x_115);
                    return(t);
                  }
                  t = SubsVar_2(t, h_57, g_5);
                  t = i_57(t);
                  return(t);
                }
                t = alltd_1(t, e_5);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm j_57 (ATerm))
{
  t = substitute_2(t, j_57, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm h_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL;
  h_116 = t;
  f_116 :
  if(match_cons(h_116, sym_OpDecl_2))
    {
      i_116 = ATgetArgument(h_116, 0);
      j_116 = ATgetArgument(h_116, 1);
      g_116 :
      if(match_cons(j_116, sym_ConstType_1))
        {
          k_116 = ATgetArgument(j_116, 0);
          t = not_null(i_116);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpNames_0 (ATerm t)
{
  ATerm p_116 = NULL,q_116 = NULL;
  p_116 = t;
  o_116 :
  if(match_cons(p_116, sym_Constructors_1))
    {
      q_116 = ATgetArgument(p_116, 0);
      t = not_null(q_116);
      t = filter_1(t, OpName_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL;
  w_116 = t;
  u_116 :
  if(match_cons(w_116, sym_Overlay_3))
    {
      x_116 = ATgetArgument(w_116, 0);
      y_116 = ATgetArgument(w_116, 1);
      z_116 = ATgetArgument(w_116, 2);
      v_116 :
      if(match_cons(y_116, sym_Nil_0))
        t = not_null(x_116);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Names_0 (ATerm t)
{
  ATerm g_117 = NULL,h_117 = NULL;
  g_117 = t;
  f_117 :
  if(match_cons(g_117, sym_Overlays_1))
    {
      h_117 = ATgetArgument(g_117, 0);
      t = not_null(h_117);
      t = filter_1(t, OLName_0);
    }
  else
    {
      if(match_cons(g_117, sym_Signature_1))
        {
          h_117 = ATgetArgument(g_117, 0);
          t = not_null(h_117);
          t = filter_1(t, OpNames_0);
          t = concat_0(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm z_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = z_14;
      {
        ATerm a_15 = t;
        if(PushChoice()==0)
          {
            ATerm l_5 (ATerm t)
            {
              t = filter_1(t, p_63);
              return(t);
            }
            t = Cons_2(t, p_63, l_5);
            PopChoice();
          }
        else
          {
            t = a_15;
            {
              ATerm o_117 = NULL,p_117 = NULL,q_117 = NULL;
              o_117 = t;
              n_117 :
              if(match_cons(o_117, sym_Cons_2))
                {
                  p_117 = ATgetArgument(o_117, 0);
                  q_117 = ATgetArgument(o_117, 1);
                  t = not_null(q_117);
                  t = filter_1(t, p_63);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm const_names_0 (ATerm t)
{
  t = filter_1(t, Names_0);
  t = concat_0(t);
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm x_117 = NULL,d_118 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm c_118 = NULL;
    t = const_names_0(t);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm y_117 = NULL,a_118 = NULL;
        ATerm d_15;
        d_15 = t;
        {
          ATerm z_117 = NULL;
          z_117 = t;
          if(y_117 != NULL && y_117 != z_117)
            _fail(z_117);
          else
            y_117 = z_117;
        }
        t = d_15;
        {
          ATerm b_118 = NULL;
          b_118 = t;
          if(a_118 != NULL && a_118 != b_118)
            _fail(b_118);
          else
            a_118 = b_118;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_117), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_118), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        }
        return(t);
      }
      t = map_1(t, m_5);
      c_118 = t;
      if(x_117 != NULL && x_117 != c_118)
        _fail(c_118);
      else
        x_117 = c_118;
    }
  }
  t = b_15;
  {
    ATerm e_118 = NULL;
    e_118 = t;
    if(d_118 != NULL && d_118 != e_118)
      _fail(e_118);
    else
      d_118 = e_118;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_118), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = tsubs_0(t);
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL;
  o_118 = t;
  k_118 :
  if(match_cons(o_118, sym_TCons_2))
    {
      p_118 = ATgetArgument(o_118, 0);
      q_118 = ATgetArgument(o_118, 1);
      l_118 :
      if(match_cons(q_118, sym_TCons_2))
        {
          r_118 = ATgetArgument(q_118, 0);
          s_118 = ATgetArgument(q_118, 1);
          m_118 :
          if(match_cons(s_118, sym_TCons_2))
            {
              t_118 = ATgetArgument(s_118, 0);
              u_118 = ATgetArgument(s_118, 1);
              n_118 :
              if(match_cons(u_118, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(p_118)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Overlays_1, not_null(r_118)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(t_118)), (ATerm) ATmakeAppl(sym_Nil_0)))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL;
  d_119 = t;
  a_119 :
  if(match_cons(d_119, sym_TCons_2))
    {
      e_119 = ATgetArgument(d_119, 0);
      f_119 = ATgetArgument(d_119, 1);
      b_119 :
      if(match_cons(f_119, sym_TCons_2))
        {
          g_119 = ATgetArgument(f_119, 0);
          h_119 = ATgetArgument(f_119, 1);
          c_119 :
          if(match_cons(h_119, sym_TNil_0))
            {
              t = not_null(e_119);
              {
                ATerm v_5 (ATerm t)
                {
                  t = not_null(g_119);
                  return(t);
                }
                t = at_end_1(t, v_5);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm a_120 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL,s_120 = NULL;
  a_120 = t;
  p_119 :
  if(match_cons(a_120, sym_TCons_2))
    {
      b_120 = ATgetArgument(a_120, 0);
      k_120 = ATgetArgument(a_120, 1);
      q_119 :
      if(match_cons(b_120, sym_TCons_2))
        {
          c_120 = ATgetArgument(b_120, 0);
          d_120 = ATgetArgument(b_120, 1);
          r_119 :
          if(match_cons(d_120, sym_TCons_2))
            {
              f_120 = ATgetArgument(d_120, 0);
              g_120 = ATgetArgument(d_120, 1);
              s_119 :
              if(match_cons(g_120, sym_TCons_2))
                {
                  h_120 = ATgetArgument(g_120, 0);
                  j_120 = ATgetArgument(g_120, 1);
                  t_119 :
                  if(match_cons(j_120, sym_TNil_0))
                    {
                      u_119 :
                      if(match_cons(k_120, sym_TCons_2))
                        {
                          l_120 = ATgetArgument(k_120, 0);
                          s_120 = ATgetArgument(k_120, 1);
                          v_119 :
                          if(match_cons(l_120, sym_TCons_2))
                            {
                              m_120 = ATgetArgument(l_120, 0);
                              n_120 = ATgetArgument(l_120, 1);
                              w_119 :
                              if(match_cons(n_120, sym_TCons_2))
                                {
                                  o_120 = ATgetArgument(n_120, 0);
                                  p_120 = ATgetArgument(n_120, 1);
                                  x_119 :
                                  if(match_cons(p_120, sym_TCons_2))
                                    {
                                      q_120 = ATgetArgument(p_120, 0);
                                      r_120 = ATgetArgument(p_120, 1);
                                      y_119 :
                                      if(match_cons(r_120, sym_TNil_0))
                                        {
                                          z_119 :
                                          if(match_cons(s_120, sym_TNil_0))
                                            {
                                              ATerm a_121 = NULL,c_121 = NULL,e_121 = NULL;
                                              ATerm e_15;
                                              e_15 = t;
                                              {
                                                ATerm b_121 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_120), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_120), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = conc_0(t);
                                                b_121 = t;
                                                if(a_121 != NULL && a_121 != b_121)
                                                  _fail(b_121);
                                                else
                                                  a_121 = b_121;
                                              }
                                              t = e_15;
                                              {
                                                ATerm f_15;
                                                f_15 = t;
                                                {
                                                  ATerm d_121 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_120), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_120), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  d_121 = t;
                                                  if(c_121 != NULL && c_121 != d_121)
                                                    _fail(d_121);
                                                  else
                                                    c_121 = d_121;
                                                }
                                                t = f_15;
                                                {
                                                  ATerm f_121 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_120), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_120), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  f_121 = t;
                                                  if(e_121 != NULL && e_121 != f_121)
                                                    _fail(f_121);
                                                  else
                                                    e_121 = f_121;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_121), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_121), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_121), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                }
                                              }
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_64 (ATerm), ATerm i_64 (ATerm))
{
  ATerm g_15 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = h_64(t);
      PopChoice();
    }
  else
    {
      t = g_15;
      {
        ATerm n_121 = NULL,o_121 = NULL,p_121 = NULL;
        n_121 = t;
        m_121 :
        if(match_cons(n_121, sym_Cons_2))
          {
            o_121 = ATgetArgument(n_121, 0);
            p_121 = ATgetArgument(n_121, 1);
            {
              ATerm s_121 = NULL;
              ATerm t_121 = NULL;
              t = not_null(p_121);
              t = foldr_2(t, h_64, i_64);
              t_121 = t;
              if(s_121 != NULL && s_121 != t_121)
                _fail(t_121);
              else
                s_121 = t_121;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_121), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_121), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = i_64(t);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm NormBSIG_0 (ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL;
  a_122 = t;
  z_121 :
  if(match_cons(a_122, sym_Sorts_1))
    {
      b_122 = ATgetArgument(a_122, 0);
      t = (ATerm) ATmakeAppl(sym_Nil_0);
    }
  else
    {
      if(match_cons(a_122, sym_Constructors_1))
        {
          b_122 = ATgetArgument(a_122, 0);
          t = not_null(b_122);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm normalize_sigs_0 (ATerm t)
{
  t = map_1(t, NormBSIG_0);
  t = concat_0(t);
  return(t);
}
ATerm NormBSP_0 (ATerm t)
{
  ATerm n_122 = NULL,o_122 = NULL;
  n_122 = t;
  m_122 :
  if(match_cons(n_122, sym_Overlays_1))
    {
      o_122 = ATgetArgument(n_122, 0);
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_122), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
    }
  else
    {
      if(match_cons(n_122, sym_Rules_1))
        {
          o_122 = ATgetArgument(n_122, 0);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_122), (ATerm) ATmakeAppl(sym_TNil_0))));
        }
      else
        {
          if(match_cons(n_122, sym_Strategies_1))
            {
              o_122 = ATgetArgument(n_122, 0);
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_122), (ATerm) ATmakeAppl(sym_TNil_0))));
            }
          else
            {
              if(match_cons(n_122, sym_Signature_1))
                {
                  o_122 = ATgetArgument(n_122, 0);
                  {
                    ATerm t_122 = NULL;
                    ATerm u_122 = NULL;
                    t = not_null(o_122);
                    t = normalize_sigs_0(t);
                    u_122 = t;
                    if(t_122 != NULL && t_122 != u_122)
                      _fail(u_122);
                    else
                      t_122 = u_122;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_122), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
                  }
                }
              else
                _fail(t);
            }
        }
    }
  return(t);
}
ATerm BSpecs_0 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL;
  c_123 = t;
  b_123 :
  if(match_cons(c_123, sym_Specification_1))
    {
      d_123 = ATgetArgument(c_123, 0);
      t = not_null(d_123);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm g_123 (ATerm t)
  {
    t = g_72(t);
    t = _all(t, g_123);
    return(t);
  }
  t = g_123(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm r_6 (ATerm t)
    {
      ATerm j_123 = NULL,k_123 = NULL;
      j_123 = t;
      i_123 :
      if(match_cons(j_123, sym_DefaultVarDec_1))
        {
          k_123 = ATgetArgument(j_123, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_123), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, r_6);
    return(t);
  }
  t = topdown_1(t, f_6);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = DefineSugar_0(t);
  t = BSpecs_0(t);
  t = map_1(t, NormBSP_0);
  {
    ATerm s_6 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      return(t);
    }
    t = foldr_2(t, s_6, Combine_0);
    t = MkSpec_0(t);
    t = Specification_1(t, vars_to_consts_0);
    t = define_lrules_0(t);
    t = LiftDynamicRules_0(t);
  }
  return(t);
}
ATerm frontend_transformation_0 (ATerm t)
{
  t = normalize_spec_0(t);
  {
    ATerm h_15;
    h_15 = t;
    t = spec_use_def_0(t);
    t = h_15;
    t = ExpandOverlays_0(t);
    t = CheckConstructors_0(t);
    t = RulesToSdefs_0(t);
    t = strename_0(t);
    {
      ATerm t_6 (ATerm t)
      {
        ATerm u_6 (ATerm t)
        {
          ATerm v_6 (ATerm t)
          {
            t = Strategies_1(t, desugar_spec_0);
            return(t);
          }
          t = Cons_2(t, v_6, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, u_6);
        return(t);
      }
      t = Specification_1(t, t_6);
    }
  }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm o_123 = NULL;
  o_123 = t;
  n_123 :
  if(!(match_cons(o_123, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm i_53 (ATerm), ATerm j_53 (ATerm))
{
  ATerm t_123 = NULL,u_123 = NULL,v_123 = NULL;
  t_123 = t;
  s_123 :
  if(match_cons(t_123, sym_TCons_2))
    {
      u_123 = ATgetArgument(t_123, 0);
      v_123 = ATgetArgument(t_123, 1);
      {
        ATerm y_123 = NULL;
        t = not_null(u_123);
        {
          ATerm a_124 = NULL;
          t = i_53(t);
          y_123 = t;
          t = not_null(v_123);
          t = j_53(t);
          a_124 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_123), not_null(a_124));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm h_124 = NULL;
  ATerm i_15;
  i_15 = t;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm i_124 = NULL,j_124 = NULL;
      i_124 = t;
      g_124 :
      if(match_cons(i_124, sym_Program_1))
        {
          j_124 = ATgetArgument(i_124, 0);
          if(h_124 != NULL && h_124 != j_124)
            _fail(j_124);
          else
            h_124 = j_124;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, w_6);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_124), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = i_15;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_124 = NULL,s_124 = NULL;
  ATerm x_6 (ATerm t)
  {
    ATerm y_6 (ATerm t)
    {
      ATerm j_15 = t;
      if(PushChoice()==0)
        {
          ATerm a_7 (ATerm t)
          {
            ATerm t_124 = NULL;
            t_124 = t;
            l_124 :
            if(!(match_cons(t_124, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_7);
          PopChoice();
          _fail(t);
        }
      else
        t = j_15;
      return(t);
    }
    ATerm z_6 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, y_6, z_6);
    {
      ATerm b_7 (ATerm t)
      {
        ATerm d_7 (ATerm t)
        {
          ATerm u_124 = NULL,v_124 = NULL;
          u_124 = t;
          n_124 :
          if(match_cons(u_124, sym_Runtime_1))
            {
              v_124 = ATgetArgument(u_124, 0);
              if(s_124 != NULL && s_124 != v_124)
                _fail(v_124);
              else
                s_124 = v_124;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, d_7);
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, b_7, c_7);
      {
        ATerm e_7 (ATerm t)
        {
          ATerm g_7 (ATerm t)
          {
            ATerm w_124 = NULL,x_124 = NULL;
            w_124 = t;
            p_124 :
            if(match_cons(w_124, sym_Program_1))
              {
                x_124 = ATgetArgument(w_124, 0);
                if(q_124 != NULL && q_124 != x_124)
                  _fail(x_124);
                else
                  q_124 = x_124;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_7);
          return(t);
        }
        ATerm f_7 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, e_7, f_7);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_124), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_124), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, x_6);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_125 = NULL,f_125 = NULL,g_125 = NULL,h_125 = NULL,i_125 = NULL;
  e_125 = t;
  b_125 :
  if(match_cons(e_125, sym_TCons_2))
    {
      f_125 = ATgetArgument(e_125, 0);
      g_125 = ATgetArgument(e_125, 1);
      c_125 :
      if(match_cons(g_125, sym_TCons_2))
        {
          h_125 = ATgetArgument(g_125, 0);
          i_125 = ATgetArgument(g_125, 1);
          d_125 :
          if(match_cons(i_125, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(f_125), not_null(h_125));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_125 = NULL,r_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL;
  q_125 = t;
  n_125 :
  if(match_cons(q_125, sym_TCons_2))
    {
      r_125 = ATgetArgument(q_125, 0);
      t_125 = ATgetArgument(q_125, 1);
      o_125 :
      if(match_cons(t_125, sym_TCons_2))
        {
          u_125 = ATgetArgument(t_125, 0);
          v_125 = ATgetArgument(t_125, 1);
          p_125 :
          if(match_cons(v_125, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(r_125), not_null(u_125));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_126 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm l_15 = t;
      if(PushChoice()==0)
        {
          ATerm k_7 (ATerm t)
          {
            ATerm e_126 = NULL,f_126 = NULL;
            e_126 = t;
            a_126 :
            if(match_cons(e_126, sym_Output_1))
              {
                f_126 = ATgetArgument(e_126, 0);
                if(d_126 != NULL && d_126 != f_126)
                  _fail(f_126);
                else
                  d_126 = f_126;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_7);
          PopChoice();
        }
      else
        {
          t = l_15;
          {
            ATerm g_126 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            g_126 = t;
            if(d_126 != NULL && d_126 != g_126)
              _fail(g_126);
            else
              d_126 = g_126;
          }
        }
      return(t);
    }
    ATerm i_7 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, h_7, i_7);
  }
  t = k_15;
  {
    ATerm l_7 (ATerm t)
    {
      ATerm n_7 (ATerm t)
      {
        ATerm r_7 (ATerm t)
        {
          t = not_null(d_126);
          return(t);
        }
        t = split_2(t, r_7, _id);
        return(t);
      }
      t = TCons_2(t, n_7, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, l_7);
    {
      ATerm m_15 = t;
      if(PushChoice()==0)
        {
          ATerm z_7 (ATerm t)
          {
            ATerm i_8 (ATerm t)
            {
              ATerm i_126 = NULL;
              i_126 = t;
              c_126 :
              if(!(match_cons(i_126, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, i_8);
            return(t);
          }
          ATerm h_8 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, z_7, h_8);
          PopChoice();
        }
      else
        {
          t = m_15;
          {
            ATerm j_8 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, j_8);
          }
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm i_60 (ATerm))
{
  ATerm q_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL;
  ATerm n_15;
  n_15 = t;
  t = dtime_0(t);
  t = n_15;
  t = i_60(t);
  {
    ATerm o_15;
    o_15 = t;
    {
      ATerm r_126 = NULL;
      t = dtime_0(t);
      r_126 = t;
      if(q_126 != NULL && q_126 != r_126)
        _fail(r_126);
      else
        q_126 = r_126;
    }
    t = o_15;
    s_126 = t;
    n_126 :
    if(match_cons(s_126, sym_TCons_2))
      {
        t_126 = ATgetArgument(s_126, 0);
        u_126 = ATgetArgument(s_126, 1);
        o_126 :
        if(match_cons(u_126, sym_TCons_2))
          {
            v_126 = ATgetArgument(u_126, 0);
            w_126 = ATgetArgument(u_126, 1);
            p_126 :
            if(match_cons(w_126, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(q_126)), not_null(t_126)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_126), (ATerm) ATmakeAppl(sym_TNil_0)));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_127 = NULL;
  c_127 = t;
  t = SSL_ReadFromFile(not_null(c_127));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm))
{
  ATerm i_127 = NULL;
  ATerm k_127 = NULL,m_127 = NULL;
  i_127 = t;
  {
    ATerm p_15;
    p_15 = t;
    {
      ATerm l_127 = NULL;
      t = not_null(i_127);
      t = x_62(t);
      l_127 = t;
      if(k_127 != NULL && k_127 != l_127)
        _fail(l_127);
      else
        k_127 = l_127;
    }
    t = p_15;
    {
      ATerm n_127 = NULL;
      t = not_null(i_127);
      t = y_62(t);
      n_127 = t;
      if(m_127 != NULL && m_127 != n_127)
        _fail(n_127);
      else
        m_127 = n_127;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_127), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_127), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_127 = NULL;
  ATerm q_15;
  q_15 = t;
  {
    ATerm r_15 = t;
    if(PushChoice()==0)
      {
        ATerm k_8 (ATerm t)
        {
          ATerm v_127 = NULL,w_127 = NULL;
          v_127 = t;
          s_127 :
          if(match_cons(v_127, sym_Input_1))
            {
              w_127 = ATgetArgument(v_127, 0);
              if(u_127 != NULL && u_127 != w_127)
                _fail(w_127);
              else
                u_127 = w_127;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_8);
        PopChoice();
      }
    else
      {
        t = r_15;
        {
          ATerm x_127 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          x_127 = t;
          if(u_127 != NULL && u_127 != x_127)
            _fail(x_127);
          else
            u_127 = x_127;
        }
      }
  }
  t = q_15;
  {
    ATerm l_8 (ATerm t)
    {
      t = not_null(u_127);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_8);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_128 = NULL;
  d_128 = t;
  c_128 :
  if(!(match_cons(d_128, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm s_15 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = s_15;
        {
          ATerm t_15 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = t_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_8);
  t = h_60(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_128 = NULL;
  f_128 = t;
  t = SSL_table_create(not_null(f_128));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_128 = NULL;
  k_128 = t;
  {
    ATerm u_15;
    u_15 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_128), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = u_15;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL,w_128 = NULL;
  s_128 = t;
  q_128 :
  if(match_string(s_128, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(s_128, sym_Cons_2))
        {
          t_128 = ATgetArgument(s_128, 0);
          u_128 = ATgetArgument(s_128, 1);
          r_128 :
          if(match_cons(u_128, sym_Cons_2))
            {
              v_128 = ATgetArgument(u_128, 0);
              w_128 = ATgetArgument(u_128, 1);
              {
                ATerm a_129 = NULL;
                ATerm v_15;
                v_15 = t;
                t = not_null(t_128);
                t = g_0(t);
                t = v_15;
                {
                  ATerm b_129 = NULL;
                  t = not_null(v_128);
                  t = h_0(t);
                  b_129 = t;
                  if(a_129 != NULL && a_129 != b_129)
                    _fail(b_129);
                  else
                    a_129 = b_129;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_129), not_null(w_128));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_15 = t;
  if(PushChoice()==0)
    {
      ATerm n_8 (ATerm t)
      {
        ATerm s_129 = NULL;
        s_129 = t;
        f_129 :
        if(!(match_string(s_129, "-S")))
          {
            if(!(match_string(s_129, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm o_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm p_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, n_8, o_8, p_8);
      PopChoice();
    }
  else
    {
      t = w_15;
      {
        ATerm x_15 = t;
        if(PushChoice()==0)
          {
            ATerm w_8 (ATerm t)
            {
              ATerm t_129 = NULL;
              t_129 = t;
              g_129 :
              if(!(match_string(t_129, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm x_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm y_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, w_8, x_8, y_8);
            PopChoice();
          }
        else
          {
            t = x_15;
            {
              ATerm y_15 = t;
              if(PushChoice()==0)
                {
                  ATerm z_8 (ATerm t)
                  {
                    ATerm u_129 = NULL;
                    u_129 = t;
                    h_129 :
                    if(!(match_string(u_129, "-v")))
                      {
                        if(!(match_string(u_129, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm a_9 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm b_9 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, z_8, a_9, b_9);
                  PopChoice();
                }
              else
                {
                  t = y_15;
                  {
                    ATerm z_15 = t;
                    if(PushChoice()==0)
                      {
                        ATerm c_9 (ATerm t)
                        {
                          ATerm v_129 = NULL;
                          v_129 = t;
                          i_129 :
                          if(!(match_string(v_129, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm f_9 (ATerm t)
                        {
                          ATerm x_129 = NULL;
                          ATerm y_129 = NULL;
                          y_129 = t;
                          if(x_129 != NULL && x_129 != y_129)
                            _fail(y_129);
                          else
                            x_129 = y_129;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(x_129));
                          return(t);
                        }
                        ATerm g_9 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, c_9, f_9, g_9);
                        PopChoice();
                      }
                    else
                      {
                        t = z_15;
                        {
                          ATerm a_16 = t;
                          if(PushChoice()==0)
                            {
                              ATerm h_9 (ATerm t)
                              {
                                ATerm z_129 = NULL;
                                z_129 = t;
                                k_129 :
                                if(!(match_string(z_129, "-i")))
                                  {
                                    if(!(match_string(z_129, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm i_9 (ATerm t)
                              {
                                ATerm a_130 = NULL;
                                ATerm b_130 = NULL;
                                b_130 = t;
                                if(a_130 != NULL && a_130 != b_130)
                                  _fail(b_130);
                                else
                                  a_130 = b_130;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_130));
                                return(t);
                              }
                              ATerm j_9 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, h_9, i_9, j_9);
                              PopChoice();
                            }
                          else
                            {
                              t = a_16;
                              {
                                ATerm c_16 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm k_9 (ATerm t)
                                    {
                                      ATerm c_130 = NULL;
                                      c_130 = t;
                                      n_129 :
                                      if(!(match_string(c_130, "-o")))
                                        {
                                          if(!(match_string(c_130, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm l_9 (ATerm t)
                                    {
                                      ATerm d_130 = NULL;
                                      ATerm e_130 = NULL;
                                      e_130 = t;
                                      if(d_130 != NULL && d_130 != e_130)
                                        _fail(e_130);
                                      else
                                        d_130 = e_130;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_130));
                                      return(t);
                                    }
                                    ATerm m_9 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, k_9, l_9, m_9);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_16;
                                    {
                                      ATerm e_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm n_9 (ATerm t)
                                          {
                                            ATerm f_130 = NULL;
                                            f_130 = t;
                                            q_129 :
                                            if(!(match_string(f_130, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm q_9 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm r_9 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, n_9, q_9, r_9);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = e_16;
                                          {
                                            ATerm s_9 (ATerm t)
                                            {
                                              ATerm g_130 = NULL;
                                              g_130 = t;
                                              r_129 :
                                              if(!(match_string(g_130, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_9 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm u_9 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, s_9, t_9, u_9);
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
            }
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_130 = NULL;
  l_130 = t;
  t = SSL_table_destroy(not_null(l_130));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_130 = NULL;
  p_130 = t;
  t = SSL_exit(not_null(p_130));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_130 = NULL;
  t_130 = t;
  t = SSL_implode_string(not_null(t_130));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm w_130 (ATerm t)
  {
    ATerm f_16 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, w_130);
        PopChoice();
      }
    else
      {
        t = f_16;
        t = Nil_0(t);
        t = d_70(t);
      }
    return(t);
  }
  t = w_130(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_16 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = g_16;
      {
        ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL;
        z_130 = t;
        y_130 :
        if(match_cons(z_130, sym_Cons_2))
          {
            a_131 = ATgetArgument(z_130, 0);
            b_131 = ATgetArgument(z_130, 1);
            t = not_null(a_131);
            {
              ATerm v_9 (ATerm t)
              {
                t = not_null(b_131);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, v_9);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_131 = NULL;
  h_131 = t;
  t = SSL_explode_string(not_null(h_131));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm k_131 (ATerm t)
  {
    ATerm h_16 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = h_16;
        t = Cons_2(t, p_69, k_131);
      }
    return(t);
  }
  t = k_131(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm q_131 = NULL,r_131 = NULL,s_131 = NULL,t_131 = NULL,u_131 = NULL;
  q_131 = t;
  m_131 :
  if(match_cons(q_131, sym_TCons_2))
    {
      r_131 = ATgetArgument(q_131, 0);
      s_131 = ATgetArgument(q_131, 1);
      n_131 :
      if(match_cons(r_131, sym_Nil_0))
        {
          o_131 :
          if(match_cons(s_131, sym_TCons_2))
            {
              t_131 = ATgetArgument(s_131, 0);
              u_131 = ATgetArgument(s_131, 1);
              p_131 :
              if(match_cons(u_131, sym_TNil_0))
                t = not_null(t_131);
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Rev_0 (ATerm t)
{
  ATerm c_132 = NULL,d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL,i_132 = NULL;
  c_132 = t;
  y_131 :
  if(match_cons(c_132, sym_TCons_2))
    {
      d_132 = ATgetArgument(c_132, 0);
      g_132 = ATgetArgument(c_132, 1);
      z_131 :
      if(match_cons(d_132, sym_Cons_2))
        {
          e_132 = ATgetArgument(d_132, 0);
          f_132 = ATgetArgument(d_132, 1);
          a_132 :
          if(match_cons(g_132, sym_TCons_2))
            {
              h_132 = ATgetArgument(g_132, 0);
              i_132 = ATgetArgument(g_132, 1);
              b_132 :
              if(match_cons(i_132, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_132), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_132), not_null(h_132)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  ATerm n_132 (ATerm t)
  {
    ATerm i_16 = t;
    if(PushChoice()==0)
      {
        t = k_75(t);
        t = n_132(t);
        PopChoice();
      }
    else
      {
        t = i_16;
        t = l_75(t);
      }
    return(t);
  }
  t = n_132(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_75 (ATerm))
{
  t = repeat_2(t, n_75, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm p_132 = NULL;
  p_132 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_132), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_44 (ATerm))
{
  ATerm v_132 = NULL,w_132 = NULL;
  v_132 = t;
  u_132 :
  if(match_cons(v_132, sym_Program_1))
    {
      w_132 = ATgetArgument(v_132, 0);
      {
        ATerm y_132 = NULL;
        t = not_null(w_132);
        t = j_44(t);
        y_132 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_132));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm g_133 = NULL;
  ATerm w_9 (ATerm t)
  {
    ATerm x_9 (ATerm t)
    {
      ATerm h_133 = NULL;
      h_133 = t;
      if(g_133 != NULL && g_133 != h_133)
        _fail(h_133);
      else
        g_133 = h_133;
      return(t);
    }
    t = Program_1(t, x_9);
    return(t);
  }
  t = option_defined_1(t, w_9);
  {
    ATerm y_9 (ATerm t)
    {
      ATerm i_133 = NULL;
      ATerm j_133 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm z_9 (ATerm t)
        {
          t = not_null(g_133);
          return(t);
        }
        t = short_description_1(t, z_9);
        t = concat_strings_0(t);
        j_133 = t;
        if(i_133 != NULL && i_133 != j_133)
          _fail(j_133);
        else
          i_133 = j_133;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_133), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, y_9);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm a_10 (ATerm t)
      {
        ATerm k_133 = NULL;
        k_133 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_133), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, a_10);
      {
        ATerm b_10 (ATerm t)
        {
          ATerm m_133 = NULL;
          ATerm n_133 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm c_10 (ATerm t)
            {
              t = not_null(g_133);
              return(t);
            }
            t = long_description_1(t, c_10);
            t = concat_strings_0(t);
            n_133 = t;
            if(m_133 != NULL && m_133 != n_133)
              _fail(n_133);
            else
              m_133 = n_133;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_133), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, b_10);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_133 = NULL,x_133 = NULL,y_133 = NULL,z_133 = NULL,a_134 = NULL;
  w_133 = t;
  t_133 :
  if(match_cons(w_133, sym_TCons_2))
    {
      x_133 = ATgetArgument(w_133, 0);
      y_133 = ATgetArgument(w_133, 1);
      u_133 :
      if(match_cons(y_133, sym_TCons_2))
        {
          z_133 = ATgetArgument(y_133, 0);
          a_134 = ATgetArgument(y_133, 1);
          v_133 :
          if(match_cons(a_134, sym_TNil_0))
            {
              ATerm j_16;
              j_16 = t;
              t = SSL_printnl(not_null(x_133), not_null(z_133));
              t = j_16;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_44 (ATerm))
{
  ATerm l_134 = NULL,m_134 = NULL;
  l_134 = t;
  k_134 :
  if(match_cons(l_134, sym_Undefined_1))
    {
      m_134 = ATgetArgument(l_134, 0);
      {
        ATerm o_134 = NULL;
        t = not_null(m_134);
        t = k_44(t);
        o_134 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_134));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm x_69 (ATerm))
{
  ATerm s_134 (ATerm t)
  {
    ATerm k_16 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, x_69, _id);
        PopChoice();
      }
    else
      {
        t = k_16;
        t = Cons_2(t, _id, s_134);
      }
    return(t);
  }
  t = s_134(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_59 (ATerm))
{
  t = fetch_1(t, m_59);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_134 = NULL;
  u_134 = t;
  t_134 :
  if(!(match_cons(u_134, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_76 (ATerm))
{
  ATerm l_16 = t;
  if(PushChoice()==0)
    {
      t = h_76(t);
      PopChoice();
    }
  else
    t = l_16;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_134 = NULL,a_135 = NULL,b_135 = NULL,d_135 = NULL,e_135 = NULL;
  z_134 = t;
  w_134 :
  if(match_cons(z_134, sym_TCons_2))
    {
      a_135 = ATgetArgument(z_134, 0);
      b_135 = ATgetArgument(z_134, 1);
      x_134 :
      if(match_cons(b_135, sym_TCons_2))
        {
          d_135 = ATgetArgument(b_135, 0);
          e_135 = ATgetArgument(b_135, 1);
          y_134 :
          if(match_cons(e_135, sym_TNil_0))
            t = SSL_table_get(not_null(a_135), not_null(d_135));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_135 = NULL,p_135 = NULL,q_135 = NULL,r_135 = NULL,s_135 = NULL,t_135 = NULL,u_135 = NULL;
  o_135 = t;
  k_135 :
  if(match_cons(o_135, sym_TCons_2))
    {
      p_135 = ATgetArgument(o_135, 0);
      q_135 = ATgetArgument(o_135, 1);
      l_135 :
      if(match_cons(q_135, sym_TCons_2))
        {
          r_135 = ATgetArgument(q_135, 0);
          s_135 = ATgetArgument(q_135, 1);
          m_135 :
          if(match_cons(s_135, sym_TCons_2))
            {
              t_135 = ATgetArgument(s_135, 0);
              u_135 = ATgetArgument(s_135, 1);
              n_135 :
              if(match_cons(u_135, sym_TNil_0))
                {
                  ATerm m_16;
                  m_16 = t;
                  {
                    ATerm y_135 = NULL;
                    ATerm z_135 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_135), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_135), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm n_16 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = n_16;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      z_135 = t;
                      if(y_135 != NULL && y_135 != z_135)
                        _fail(z_135);
                      else
                        y_135 = z_135;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_135), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_135), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_135), not_null(y_135)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = m_16;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_58 (ATerm))
{
  ATerm d_136 = NULL;
  ATerm e_136 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = s_58(t);
  e_136 = t;
  if(d_136 != NULL && d_136 != e_136)
    _fail(e_136);
  else
    d_136 = e_136;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_136), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm k_136 = NULL,l_136 = NULL,m_136 = NULL;
  k_136 = t;
  j_136 :
  if(match_string(k_136, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(k_136, sym_Cons_2))
        {
          l_136 = ATgetArgument(k_136, 0);
          m_136 = ATgetArgument(k_136, 1);
          {
            ATerm p_136 = NULL;
            ATerm o_16;
            o_16 = t;
            t = not_null(l_136);
            t = d_0(t);
            t = o_16;
            {
              ATerm q_136 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              q_136 = t;
              if(p_136 != NULL && p_136 != q_136)
                _fail(q_136);
              else
                p_136 = q_136;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_136), not_null(m_136));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm d_10 (ATerm t)
  {
    ATerm v_136 = NULL;
    v_136 = t;
    u_136 :
    if(!(match_string(v_136, "--help")))
      {
        if(!(match_string(v_136, "-h")))
          {
            if(!(match_string(v_136, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm e_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm f_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, d_10, e_10, f_10);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL;
  y_136 = t;
  x_136 :
  if(match_cons(y_136, sym_Cons_2))
    {
      z_136 = ATgetArgument(y_136, 0);
      a_137 = ATgetArgument(y_136, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_136)), not_null(a_137));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_53 (ATerm), ATerm n_53 (ATerm))
{
  ATerm i_137 = NULL,j_137 = NULL,k_137 = NULL;
  i_137 = t;
  h_137 :
  if(match_cons(i_137, sym_Cons_2))
    {
      j_137 = ATgetArgument(i_137, 0);
      k_137 = ATgetArgument(i_137, 1);
      {
        ATerm n_137 = NULL;
        t = not_null(j_137);
        {
          ATerm p_137 = NULL;
          t = m_53(t);
          n_137 = t;
          t = not_null(k_137);
          t = n_53(t);
          p_137 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_137), not_null(p_137));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm v_137 = NULL;
  v_137 = t;
  u_137 :
  if(!(match_cons(v_137, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm p_16;
  p_16 = t;
  {
    ATerm g_10 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = q_58(t);
      return(t);
    }
    t = try_1(t, g_10);
  }
  t = p_16;
  {
    ATerm h_10 (ATerm t)
    {
      ATerm x_137 = NULL;
      x_137 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_137));
      return(t);
    }
    ATerm i_10 (ATerm t)
    {
      ATerm q_16 = t;
      if(PushChoice()==0)
        {
          ATerm r_16 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = r_16;
              t = q_58(t);
              t = Cons_2(t, _id, i_10);
            }
          PopChoice();
        }
      else
        {
          t = q_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_10, i_10);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_138 = NULL,h_138 = NULL,i_138 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm j_138 = NULL,k_138 = NULL,l_138 = NULL,m_138 = NULL,n_138 = NULL,o_138 = NULL,p_138 = NULL;
    j_138 = t;
    c_138 :
    if(match_cons(j_138, sym_TCons_2))
      {
        k_138 = ATgetArgument(j_138, 0);
        l_138 = ATgetArgument(j_138, 1);
        d_138 :
        if(match_cons(l_138, sym_TCons_2))
          {
            m_138 = ATgetArgument(l_138, 0);
            n_138 = ATgetArgument(l_138, 1);
            e_138 :
            if(match_cons(n_138, sym_TCons_2))
              {
                o_138 = ATgetArgument(n_138, 0);
                p_138 = ATgetArgument(n_138, 1);
                f_138 :
                if(match_cons(p_138, sym_TNil_0))
                  {
                    if(g_138 != NULL && g_138 != k_138)
                      _fail(k_138);
                    else
                      g_138 = k_138;
                    if(h_138 != NULL && h_138 != m_138)
                      _fail(m_138);
                    else
                      h_138 = m_138;
                    if(i_138 != NULL && i_138 != o_138)
                      _fail(o_138);
                    else
                      i_138 = o_138;
                    t = SSL_table_put(not_null(g_138), not_null(h_138), not_null(i_138));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = s_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm s_138 = NULL;
  ATerm t_16;
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = t_16;
  {
    ATerm j_10 (ATerm t)
    {
      ATerm u_16 = t;
      if(PushChoice()==0)
        {
          t = p_58(t);
          PopChoice();
        }
      else
        {
          t = u_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_10);
    {
      ATerm k_10 (ATerm t)
      {
        ATerm v_16 = t;
        if(PushChoice()==0)
          {
            t = option_defined_1(t, Help_0);
            t = system_usage_0(t);
            t = (ATerm) ATmakeInt(0);
            t = exit_0(t);
            PopChoice();
          }
        else
          {
            t = v_16;
            {
              ATerm l_10 (ATerm t)
              {
                ATerm m_10 (ATerm t)
                {
                  ATerm t_138 = NULL;
                  t_138 = t;
                  if(s_138 != NULL && s_138 != t_138)
                    _fail(t_138);
                  else
                    s_138 = t_138;
                  return(t);
                }
                t = Undefined_1(t, m_10);
                return(t);
              }
              t = option_defined_1(t, l_10);
              {
                ATerm w_16;
                w_16 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_138), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = w_16;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_10);
      {
        ATerm x_16;
        x_16 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = x_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  ATerm n_10 (ATerm t)
  {
    ATerm y_16 = t;
    if(PushChoice()==0)
      {
        t = x_59(t);
        PopChoice();
      }
    else
      {
        t = y_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, n_10);
  t = store_options_0(t);
  {
    ATerm z_16 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, y_59);
        PopChoice();
      }
    else
      {
        t = z_16;
        {
          ATerm a_17 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, w_59);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = a_17;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_59 (ATerm), ATerm s_59 (ATerm))
{
  t = iowrap_3(t, r_59, s_59, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm o_10 (ATerm t)
  {
    ATerm p_10 (ATerm t)
    {
      t = TCons_2(t, o_59, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, p_10);
    return(t);
  }
  t = iowrap_2(t, o_10, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = frontend_0(t);
  return(t);
}
