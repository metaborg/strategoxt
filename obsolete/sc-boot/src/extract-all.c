#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm SDef_3 (ATerm, ATerm h_52 (ATerm), ATerm i_52 (ATerm), ATerm j_52 (ATerm));
ATerm Let_2 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm));
ATerm sboundin_3 (ATerm, ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm t_74 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm d_61 (ATerm), ATerm e_61 (ATerm), ATerm f_61 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm diff_1 (ATerm, ATerm y_60 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm l_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_65 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm r_59 (ATerm), ATerm s_59 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm u_73 (ATerm), ATerm v_73 (ATerm));
ATerm alltd_1 (ATerm, ATerm u_72 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm w_73 (ATerm), ATerm x_73 (ATerm));
ATerm substitute_1 (ATerm, ATerm y_73 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm k_52 (ATerm), ATerm l_52 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
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
ATerm App_2 (ATerm, ATerm d_50 (ATerm), ATerm e_50 (ATerm));
ATerm Con_3 (ATerm, ATerm a_50 (ATerm), ATerm b_50 (ATerm), ATerm c_50 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm h_53 (ATerm), ATerm i_53 (ATerm));
ATerm oncetd_1 (ATerm, ATerm g_72 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm q_70 (ATerm));
ATerm desugar_0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm a_69 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm j_60 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm z_67 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm u_67 (ATerm));
ATerm zip_1 (ATerm, ATerm w_67 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm g_54 (ATerm), ATerm h_54 (ATerm), ATerm i_54 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm for_3 (ATerm, ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm n_63 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm a_54 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm c_54 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm s_60 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm v_59 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm l_51 (ATerm));
ATerm Cons_2 (ATerm, ATerm q_53 (ATerm), ATerm r_53 (ATerm));
ATerm Specification_1 (ATerm, ATerm n_51 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm m_53 (ATerm), ATerm n_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_57 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_57 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_76 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_56 (ATerm));
ATerm map_1 (ATerm, ATerm p_75 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_62 (ATerm), ATerm s_62 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_62 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_56 (ATerm));
ATerm Program_1 (ATerm, ATerm t_48 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_48 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_70 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_56 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_56 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_56 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_57 (ATerm), ATerm k_57 (ATerm), ATerm l_57 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_57 (ATerm), ATerm f_57 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_57 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm f_2 = NULL;
  f_2 = t;
  e_2 :
  if(!(match_cons(f_2, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
  k_2 = t;
  h_2 :
  if(match_cons(k_2, sym_TCons_2))
    {
      l_2 = ATgetArgument(k_2, 0);
      m_2 = ATgetArgument(k_2, 1);
      i_2 :
      if(match_cons(m_2, sym_TCons_2))
        {
          n_2 = ATgetArgument(m_2, 0);
          o_2 = ATgetArgument(m_2, 1);
          j_2 :
          if(match_cons(o_2, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
              t = error_0(t);
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
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  x_2 = t;
  t_2 :
  if(match_cons(x_2, sym_TCons_2))
    {
      y_2 = ATgetArgument(x_2, 0);
      b_3 = ATgetArgument(x_2, 1);
      u_2 :
      if(match_cons(y_2, sym_Mod_2))
        {
          z_2 = ATgetArgument(y_2, 0);
          a_3 = ATgetArgument(y_2, 1);
          v_2 :
          if(match_cons(b_3, sym_TCons_2))
            {
              c_3 = ATgetArgument(b_3, 0);
              d_3 = ATgetArgument(b_3, 1);
              w_2 :
              if(match_cons(d_3, sym_TNil_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("^", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_3), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_3), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))));
                  t = error_0(t);
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
ATerm MissingDefs_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  n_3 = t;
  j_3 :
  if(match_cons(n_3, sym_TCons_2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      k_3 :
      if(match_cons(p_3, sym_TCons_2))
        {
          q_3 = ATgetArgument(p_3, 0);
          t_3 = ATgetArgument(p_3, 1);
          l_3 :
          if(match_cons(q_3, sym_Cons_2))
            {
              r_3 = ATgetArgument(q_3, 0);
              s_3 = ATgetArgument(q_3, 1);
              m_3 :
              if(match_cons(t_3, sym_TNil_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_3), not_null(s_3));
                  {
                    ATerm a_0 (ATerm t)
                    {
                      ATerm f_10 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = f_10;
                          t = MissingDef_0(t);
                        }
                      return(t);
                    }
                    t = map_1(t, a_0);
                  }
                  t = not_null(o_3);
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
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
  d_4 = t;
  z_3 :
  if(match_cons(d_4, sym_TCons_2))
    {
      e_4 = ATgetArgument(d_4, 0);
      f_4 = ATgetArgument(d_4, 1);
      a_4 :
      if(match_cons(f_4, sym_TCons_2))
        {
          g_4 = ATgetArgument(f_4, 0);
          h_4 = ATgetArgument(f_4, 1);
          b_4 :
          if(match_cons(g_4, sym_Nil_0))
            {
              c_4 :
              if(match_cons(h_4, sym_TNil_0))
                t = not_null(e_4);
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
ATerm fatal_error_0 (ATerm t)
{
  ATerm i_10;
  i_10 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = i_10;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm l_10;
  l_10 = t;
  {
    ATerm l_4 = NULL;
    ATerm m_4 = NULL;
    m_4 = t;
    if(l_4 != NULL && l_4 != m_4)
      _fail(m_4);
    else
      l_4 = m_4;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_4), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
  }
  t = l_10;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  b_5 = t;
  x_4 :
  if(match_cons(b_5, sym_TCons_2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      y_4 :
      if(match_cons(d_5, sym_TCons_2))
        {
          e_5 = ATgetArgument(d_5, 0);
          f_5 = ATgetArgument(d_5, 1);
          z_4 :
          if(match_int(e_5, 0))
            {
              a_5 :
              if(match_cons(f_5, sym_TNil_0))
                {
                  ATerm m_10 = t;
                  if(PushChoice()==0)
                    {
                      ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
                      t = not_null(c_5);
                      t = Arities_0(t);
                      h_5 = t;
                      s_4 :
                      if(match_cons(h_5, sym_Cons_2))
                        {
                          i_5 = ATgetArgument(h_5, 0);
                          j_5 = ATgetArgument(h_5, 1);
                          t_4 :
                          if(match_cons(j_5, sym_Cons_2))
                            {
                              k_5 = ATgetArgument(j_5, 0);
                              l_5 = ATgetArgument(j_5, 1);
                              {
                                ATerm n_10 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm j_0 (ATerm t)
                                    {
                                      ATerm m_5 = NULL;
                                      m_5 = t;
                                      r_4 :
                                      if(!(match_int(m_5, 0)))
                                        _fail(t);
                                      return(t);
                                    }
                                    t = fetch_1(t, j_0);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = n_10;
                                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_5), (ATerm) ATmakeAppl(sym_Nil_0)));
                                t = error_0(t);
                                t = giving_up_0(t);
                              }
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
                      t = m_10;
                      {
                        ATerm o_5 = NULL;
                        ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
                        t = not_null(c_5);
                        t = Arities_0(t);
                        p_5 = t;
                        v_4 :
                        if(match_cons(p_5, sym_Cons_2))
                          {
                            q_5 = ATgetArgument(p_5, 0);
                            r_5 = ATgetArgument(p_5, 1);
                            w_4 :
                            if(match_cons(r_5, sym_Nil_0))
                              {
                                if(o_5 != NULL && o_5 != q_5)
                                  _fail(q_5);
                                else
                                  o_5 = q_5;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_5), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = Definitions_0(t);
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_5), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Rec_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_Rec_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      {
        ATerm f_6 = NULL;
        t = not_null(b_6);
        {
          ATerm h_6 = NULL;
          t = d_52(t);
          f_6 = t;
          t = not_null(c_6);
          t = e_52(t);
          h_6 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(f_6), not_null(h_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm h_52 (ATerm), ATerm i_52 (ATerm), ATerm j_52 (ATerm))
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym_SDef_3))
    {
      s_6 = ATgetArgument(r_6, 0);
      t_6 = ATgetArgument(r_6, 1);
      u_6 = ATgetArgument(r_6, 2);
      {
        ATerm y_6 = NULL;
        t = not_null(s_6);
        {
          ATerm a_7 = NULL;
          t = h_52(t);
          y_6 = t;
          t = not_null(t_6);
          {
            ATerm c_7 = NULL;
            t = i_52(t);
            a_7 = t;
            t = not_null(u_6);
            t = j_52(t);
            c_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_6), not_null(a_7), not_null(c_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm))
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym_Let_2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      {
        ATerm r_7 = NULL;
        t = not_null(n_7);
        {
          ATerm t_7 = NULL;
          t = f_52(t);
          r_7 = t;
          t = not_null(o_7);
          t = g_52(t);
          t_7 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_7), not_null(t_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm t_74 (ATerm))
{
  ATerm o_10 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, r_74, r_74);
      PopChoice();
    }
  else
    {
      t = o_10;
      {
        ATerm p_10 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, t_74, t_74, r_74);
            PopChoice();
          }
        else
          {
            t = p_10;
            t = Rec_2(t, t_74, r_74);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym_Rec_2))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_8), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym_SDef_3))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      n_8 = ATgetArgument(k_8, 2);
      t = not_null(m_8);
      {
        ATerm k_0 (ATerm t)
        {
          ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
          r_8 = t;
          i_8 :
          if(match_cons(r_8, sym_VarDec_2))
            {
              s_8 = ATgetArgument(r_8, 0);
              t_8 = ATgetArgument(r_8, 1);
              t = not_null(s_8);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, k_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_Let_2))
    {
      c_9 = ATgetArgument(b_9, 0);
      d_9 = ATgetArgument(b_9, 1);
      t = not_null(c_9);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
          g_9 = t;
          z_8 :
          if(match_cons(g_9, sym_SDef_3))
            {
              h_9 = ATgetArgument(g_9, 0);
              i_9 = ATgetArgument(g_9, 1);
              j_9 = ATgetArgument(g_9, 2);
              t = not_null(h_9);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, l_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm d_61 (ATerm), ATerm e_61 (ATerm), ATerm f_61 (ATerm))
{
  ATerm e_10 = NULL;
  ATerm g_10 = NULL;
  e_10 = t;
  {
    ATerm h_10 = NULL;
    ATerm j_10 = NULL,k_10 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
    t = not_null(e_10);
    h_10 = t;
    t = SSL_explode_term(not_null(h_10));
    j_10 = t;
    y_9 :
    if(match_cons(j_10, sym_TCons_2))
      {
        k_10 = ATgetArgument(j_10, 0);
        f_11 = ATgetArgument(j_10, 1);
        c_10 :
        if(match_cons(f_11, sym_TCons_2))
          {
            g_11 = ATgetArgument(f_11, 0);
            h_11 = ATgetArgument(f_11, 1);
            d_10 :
            if(match_cons(h_11, sym_TNil_0))
              {
                if(g_10 != NULL && g_10 != g_11)
                  _fail(g_11);
                else
                  g_10 = g_11;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(g_10);
    t = foldr_3(t, d_61, e_61, f_61);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Cons_2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      t = u_60(t);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm d_12 = NULL;
          d_12 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_11), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_12), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = t_60(t);
          return(t);
        }
        t = fetch_1(t, m_0);
      }
      t = not_null(a_12);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,v_12 = NULL,w_12 = NULL;
  l_12 = t;
  i_12 :
  if(match_cons(l_12, sym_TCons_2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      j_12 :
      if(match_cons(n_12, sym_TCons_2))
        {
          v_12 = ATgetArgument(n_12, 0);
          w_12 = ATgetArgument(n_12, 1);
          k_12 :
          if(match_cons(w_12, sym_TNil_0))
            {
              t = not_null(m_12);
              {
                ATerm a_13 (ATerm t)
                {
                  ATerm q_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_10;
                      {
                        ATerm r_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm n_0 (ATerm t)
                            {
                              t = not_null(v_12);
                              return(t);
                            }
                            t = HdMember_p__2(t, y_60, n_0);
                            t = a_13(t);
                            PopChoice();
                          }
                        else
                          {
                            t = r_10;
                            t = Cons_2(t, _id, a_13);
                          }
                      }
                    }
                  return(t);
                }
                t = a_13(t);
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
ATerm free_vars2_4 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm l_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_65 (ATerm))
{
  ATerm h_13 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      ATerm s_10 = t;
      if(PushChoice()==0)
        {
          t = j_65(t);
          PopChoice();
        }
      else
        {
          t = s_10;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      ATerm t_10 = t;
      if(PushChoice()==0)
        {
          ATerm c_13 = NULL;
          ATerm u_10;
          u_10 = t;
          {
            ATerm d_13 = NULL;
            t = k_65(t);
            d_13 = t;
            if(c_13 != NULL && c_13 != d_13)
              _fail(d_13);
            else
              c_13 = d_13;
          }
          t = u_10;
          {
            ATerm q_0 (ATerm t)
            {
              ATerm s_0 (ATerm t)
              {
                t = not_null(c_13);
                return(t);
              }
              t = split_2(t, h_13, s_0);
              t = diff_1(t, m_65);
              return(t);
            }
            ATerm r_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = l_65(t, q_0, h_13, r_0);
            {
              ATerm t_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Nil_0);
                return(t);
              }
              t = crush_3(t, t_0, union_0, _id);
            }
          }
          PopChoice();
        }
      else
        {
          t = t_10;
          {
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = crush_3(t, u_0, union_0, h_13);
          }
        }
      return(t);
    }
    t = split_2(t, o_0, p_0);
    t = union_0(t);
    return(t);
  }
  t = h_13(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,a_14 = NULL;
    w_13 = t;
    l_13 :
    if(match_cons(w_13, sym_Call_2))
      {
        x_13 = ATgetArgument(w_13, 0);
        a_14 = ATgetArgument(w_13, 1);
        m_13 :
        if(match_cons(x_13, sym_SVar_1))
          {
            y_13 = ATgetArgument(x_13, 0);
            {
              ATerm d_14 = NULL;
              ATerm e_14 = NULL;
              t = not_null(a_14);
              t = length_0(t);
              e_14 = t;
              if(d_14 != NULL && d_14 != e_14)
                _fail(e_14);
              else
                d_14 = e_14;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(y_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_14), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = v_10;
        {
          ATerm w_10 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = w_10;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
    f_14 = t;
    q_13 :
    if(match_cons(f_14, sym_TCons_2))
      {
        g_14 = ATgetArgument(f_14, 0);
        l_14 = ATgetArgument(f_14, 1);
        r_13 :
        if(match_cons(g_14, sym_TCons_2))
          {
            h_14 = ATgetArgument(g_14, 0);
            i_14 = ATgetArgument(g_14, 1);
            s_13 :
            if(match_cons(i_14, sym_TCons_2))
              {
                j_14 = ATgetArgument(i_14, 0);
                k_14 = ATgetArgument(i_14, 1);
                t_13 :
                if(match_cons(k_14, sym_TNil_0))
                  {
                    u_13 :
                    if(match_cons(l_14, sym_TCons_2))
                      {
                        m_14 = ATgetArgument(l_14, 0);
                        n_14 = ATgetArgument(l_14, 1);
                        v_13 :
                        if(match_cons(n_14, sym_TNil_0))
                          {
                            if(h_14 != NULL && h_14 != m_14)
                              _fail(m_14);
                            else
                              h_14 = m_14;
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
  t = free_vars2_4(t, v_0, w_0, sboundin_3, x_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm e_15 = NULL,i_15 = NULL,j_15 = NULL,s_15 = NULL,t_15 = NULL;
  e_15 = t;
  c_15 :
  if(match_cons(e_15, sym_TCons_2))
    {
      i_15 = ATgetArgument(e_15, 0);
      j_15 = ATgetArgument(e_15, 1);
      d_15 :
      if(match_cons(j_15, sym_TCons_2))
        {
          s_15 = ATgetArgument(j_15, 0);
          t_15 = ATgetArgument(j_15, 1);
          t = not_null(s_15);
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
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_TCons_2))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      t = not_null(b_16);
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_59 (ATerm), ATerm s_59 (ATerm))
{
  ATerm x_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = r_59(t);
      PopChoice();
    }
  else
    {
      t = x_10;
      {
        ATerm l_16 = NULL,m_16 = NULL,s_16 = NULL;
        l_16 = t;
        k_16 :
        if(match_cons(l_16, sym_Cons_2))
          {
            m_16 = ATgetArgument(l_16, 0);
            s_16 = ATgetArgument(l_16, 1);
            {
              ATerm v_16 = NULL;
              ATerm w_16 = NULL;
              t = not_null(s_16);
              t = foldr_2(t, r_59, s_59);
              w_16 = t;
              if(v_16 != NULL && v_16 != w_16)
                _fail(w_16);
              else
                v_16 = w_16;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_16), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = s_59(t);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Fail_0);
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm b_17 = NULL,f_17 = NULL;
    ATerm y_10;
    y_10 = t;
    {
      ATerm c_17 = NULL;
      t = Fst_0(t);
      c_17 = t;
      if(b_17 != NULL && b_17 != c_17)
        _fail(c_17);
      else
        b_17 = c_17;
    }
    t = y_10;
    {
      ATerm g_17 = NULL;
      t = Snd_0(t);
      g_17 = t;
      if(f_17 != NULL && f_17 != g_17)
        _fail(g_17);
      else
        f_17 = g_17;
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_17), not_null(f_17));
    }
    return(t);
  }
  t = foldr_2(t, y_0, z_0);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  p_17 = t;
  m_17 :
  if(match_cons(p_17, sym_Call_2))
    {
      q_17 = ATgetArgument(p_17, 0);
      s_17 = ATgetArgument(p_17, 1);
      n_17 :
      if(match_cons(q_17, sym_SVar_1))
        {
          r_17 = ATgetArgument(q_17, 0);
          o_17 :
          if(match_cons(s_17, sym_Nil_0))
            t = not_null(r_17);
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
ATerm Look2_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  a_18 = t;
  w_17 :
  if(match_cons(a_18, sym_TCons_2))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      x_17 :
      if(match_cons(c_18, sym_TCons_2))
        {
          f_18 = ATgetArgument(c_18, 0);
          i_18 = ATgetArgument(c_18, 1);
          y_17 :
          if(match_cons(f_18, sym_Cons_2))
            {
              g_18 = ATgetArgument(f_18, 0);
              h_18 = ATgetArgument(f_18, 1);
              z_17 :
              if(match_cons(i_18, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  v_18 = t;
  o_18 :
  if(match_cons(v_18, sym_TCons_2))
    {
      w_18 = ATgetArgument(v_18, 0);
      x_18 = ATgetArgument(v_18, 1);
      p_18 :
      if(match_cons(x_18, sym_TCons_2))
        {
          y_18 = ATgetArgument(x_18, 0);
          f_19 = ATgetArgument(x_18, 1);
          q_18 :
          if(match_cons(y_18, sym_Cons_2))
            {
              z_18 = ATgetArgument(y_18, 0);
              e_19 = ATgetArgument(y_18, 1);
              r_18 :
              if(match_cons(z_18, sym_TCons_2))
                {
                  a_19 = ATgetArgument(z_18, 0);
                  b_19 = ATgetArgument(z_18, 1);
                  s_18 :
                  if(match_cons(b_19, sym_TCons_2))
                    {
                      c_19 = ATgetArgument(b_19, 0);
                      d_19 = ATgetArgument(b_19, 1);
                      t_18 :
                      if(match_cons(d_19, sym_TNil_0))
                        {
                          u_18 :
                          if(match_cons(f_19, sym_TNil_0))
                            {
                              ATerm h_19 = NULL;
                              if(w_18 != NULL && w_18 != a_19)
                                _fail(a_19);
                              else
                                w_18 = a_19;
                              if(h_19 != NULL && h_19 != c_19)
                                _fail(c_19);
                              else
                                h_19 = c_19;
                              t = not_null(h_19);
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
  ATerm z_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = z_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm u_73 (ATerm), ATerm v_73 (ATerm))
{
  ATerm r_19 = NULL;
  ATerm t_19 = NULL,u_19 = NULL;
  r_19 = t;
  {
    ATerm v_19 = NULL;
    t = not_null(r_19);
    {
      ATerm d_20 = NULL;
      t = u_73(t);
      v_19 = t;
      if(t_19 != NULL && t_19 != v_19)
        _fail(v_19);
      else
        t_19 = v_19;
      t = v_73(t);
      d_20 = t;
      if(u_19 != NULL && u_19 != d_20)
        _fail(d_20);
      else
        u_19 = d_20;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm h_20 (ATerm t)
  {
    ATerm a_11 = t;
    if(PushChoice()==0)
      {
        t = u_72(t);
        PopChoice();
      }
    else
      {
        t = a_11;
        t = _all(t, h_20);
      }
    return(t);
  }
  t = h_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  b_21 = t;
  w_20 :
  if(match_cons(b_21, sym_TCons_2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      x_20 :
      if(match_cons(d_21, sym_TCons_2))
        {
          e_21 = ATgetArgument(d_21, 0);
          f_21 = ATgetArgument(d_21, 1);
          y_20 :
          if(match_cons(f_21, sym_TNil_0))
            {
              ATerm j_21 = NULL;
              if(j_21 != NULL && j_21 != e_21)
                _fail(e_21);
              else
                j_21 = e_21;
            }
          else
            {
              if(match_cons(f_21, sym_TCons_2))
                {
                  g_21 = ATgetArgument(f_21, 0);
                  h_21 = ATgetArgument(f_21, 1);
                  a_21 :
                  if(match_cons(h_21, sym_TNil_0))
                    {
                      ATerm r_21 = NULL;
                      ATerm s_21 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      s_21 = t;
                      if(r_21 != NULL && r_21 != s_21)
                        _fail(s_21);
                      else
                        r_21 = s_21;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm w_73 (ATerm), ATerm x_73 (ATerm))
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  t = subs_args_0(t);
  a_22 = t;
  x_21 :
  if(match_cons(a_22, sym_TCons_2))
    {
      b_22 = ATgetArgument(a_22, 0);
      c_22 = ATgetArgument(a_22, 1);
      y_21 :
      if(match_cons(c_22, sym_TCons_2))
        {
          d_22 = ATgetArgument(c_22, 0);
          e_22 = ATgetArgument(c_22, 1);
          z_21 :
          if(match_cons(e_22, sym_TNil_0))
            {
              t = not_null(d_22);
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = not_null(b_22);
                    return(t);
                  }
                  t = SubsVar_2(t, w_73, b_1);
                  t = x_73(t);
                  return(t);
                }
                t = alltd_1(t, a_1);
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
ATerm substitute_1 (ATerm t, ATerm y_73 (ATerm))
{
  t = substitute_2(t, y_73, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm k_52 (ATerm), ATerm l_52 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_VarDec_2))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      {
        ATerm r_22 = NULL;
        t = not_null(n_22);
        {
          ATerm t_22 = NULL;
          t = k_52(t);
          r_22 = t;
          t = not_null(o_22);
          t = l_52(t);
          t_22 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_22), not_null(t_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  m_23 = t;
  k_23 :
  if(match_cons(m_23, sym_Cons_2))
    {
      n_23 = ATgetArgument(m_23, 0);
      r_23 = ATgetArgument(m_23, 1);
      l_23 :
      if(match_cons(n_23, sym_SDef_3))
        {
          o_23 = ATgetArgument(n_23, 0);
          p_23 = ATgetArgument(n_23, 1);
          q_23 = ATgetArgument(n_23, 2);
          {
            ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,t_24 = NULL;
            ATerm b_11;
            b_11 = t;
            {
              ATerm z_23 = NULL;
              t = not_null(p_23);
              {
                ATerm f_24 = NULL;
                ATerm c_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, c_1);
                z_23 = t;
                if(w_23 != NULL && w_23 != z_23)
                  _fail(z_23);
                else
                  w_23 = z_23;
                t = not_null(w_23);
                {
                  ATerm s_24 = NULL;
                  ATerm d_1 (ATerm t)
                  {
                    ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
                    a_24 = t;
                    b_23 :
                    if(match_cons(a_24, sym_VarDec_2))
                      {
                        b_24 = ATgetArgument(a_24, 0);
                        c_24 = ATgetArgument(a_24, 1);
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_24)), (ATerm) ATmakeAppl(sym_Nil_0));
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, d_1);
                  f_24 = t;
                  if(x_23 != NULL && x_23 != f_24)
                    _fail(f_24);
                  else
                    x_23 = f_24;
                  t = not_null(m_23);
                  {
                    ATerm e_1 (ATerm t)
                    {
                      ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
                      g_24 = t;
                      h_23 :
                      if(match_cons(g_24, sym_SDef_3))
                        {
                          h_24 = ATgetArgument(g_24, 0);
                          i_24 = ATgetArgument(g_24, 1);
                          j_24 = ATgetArgument(g_24, 2);
                          {
                            ATerm m_24 = NULL;
                            ATerm r_24 = NULL;
                            t = not_null(i_24);
                            {
                              ATerm f_1 (ATerm t)
                              {
                                ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
                                n_24 = t;
                                f_23 :
                                if(match_cons(n_24, sym_VarDec_2))
                                  {
                                    o_24 = ATgetArgument(n_24, 0);
                                    p_24 = ATgetArgument(n_24, 1);
                                    t = not_null(o_24);
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = map_1(t, f_1);
                              r_24 = t;
                              if(m_24 != NULL && m_24 != r_24)
                                _fail(r_24);
                              else
                                m_24 = r_24;
                            }
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_24), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = map_1(t, e_1);
                    s_24 = t;
                    if(y_23 != NULL && y_23 != s_24)
                      _fail(s_24);
                    else
                      y_23 = s_24;
                  }
                }
              }
            }
            t = b_11;
            {
              ATerm u_24 = NULL;
              t = not_null(y_23);
              t = choices_0(t);
              u_24 = t;
              if(t_24 != NULL && t_24 != u_24)
                _fail(u_24);
              else
                t_24 = u_24;
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_23), not_null(w_23), not_null(t_24));
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  f_25 :
  if(match_cons(i_25, sym_Cons_2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      g_25 :
      if(match_cons(k_25, sym_Nil_0))
        t = not_null(j_25);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm c_11 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = c_11;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  v_25 = t;
  p_25 :
  if(match_cons(v_25, sym_TCons_2))
    {
      w_25 = ATgetArgument(v_25, 0);
      b_26 = ATgetArgument(v_25, 1);
      q_25 :
      if(match_cons(w_25, sym_TCons_2))
        {
          x_25 = ATgetArgument(w_25, 0);
          y_25 = ATgetArgument(w_25, 1);
          r_25 :
          if(match_cons(y_25, sym_TCons_2))
            {
              z_25 = ATgetArgument(y_25, 0);
              a_26 = ATgetArgument(y_25, 1);
              s_25 :
              if(match_cons(a_26, sym_TNil_0))
                {
                  t_25 :
                  if(match_cons(b_26, sym_TCons_2))
                    {
                      c_26 = ATgetArgument(b_26, 0);
                      d_26 = ATgetArgument(b_26, 1);
                      u_25 :
                      if(match_cons(d_26, sym_TNil_0))
                        {
                          ATerm h_26 = NULL;
                          ATerm i_26 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_25), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = Definitions_0(t);
                          i_26 = t;
                          if(h_26 != NULL && h_26 != i_26)
                            _fail(i_26);
                          else
                            h_26 = i_26;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Expl_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  h_27 = t;
  f_27 :
  if(match_cons(h_27, sym_ExplodeCong_2))
    {
      i_27 = ATgetArgument(h_27, 0);
      g_27 = ATgetArgument(h_27, 1);
      {
        ATerm l_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
        ATerm t_27 = NULL;
        ATerm u_27 = NULL;
        t = new_0(t);
        t_27 = t;
        if(l_27 != NULL && l_27 != t_27)
          _fail(t_27);
        else
          l_27 = t_27;
        {
          ATerm v_27 = NULL;
          t = new_0(t);
          u_27 = t;
          if(q_27 != NULL && q_27 != u_27)
            _fail(u_27);
          else
            q_27 = u_27;
          {
            ATerm y_27 = NULL;
            t = new_0(t);
            v_27 = t;
            if(r_27 != NULL && r_27 != v_27)
              _fail(v_27);
            else
              r_27 = v_27;
            t = new_0(t);
            y_27 = t;
            if(s_27 != NULL && s_27 != y_27)
              _fail(y_27);
            else
              s_27 = y_27;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_27), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_27), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_27), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_27), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_27)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_27)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(i_27), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_27)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_27), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_27)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_27))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_27)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_27)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
      }
    }
  else
    {
      if(match_cons(h_27, sym_Build_1))
        {
          i_27 = ATgetArgument(h_27, 0);
          {
            ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
            ATerm e_28 = NULL;
            ATerm i_28 = NULL;
            t = new_0(t);
            e_28 = t;
            if(c_28 != NULL && c_28 != e_28)
              _fail(e_28);
            else
              c_28 = e_28;
            t = not_null(i_27);
            {
              ATerm g_1 (ATerm t)
              {
                ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
                f_28 = t;
                u_26 :
                if(match_cons(f_28, sym_Explode_2))
                  {
                    g_28 = ATgetArgument(f_28, 0);
                    h_28 = ATgetArgument(f_28, 1);
                    if(a_28 != NULL && a_28 != g_28)
                      _fail(g_28);
                    else
                      a_28 = g_28;
                    if(b_28 != NULL && b_28 != h_28)
                      _fail(h_28);
                    else
                      b_28 = h_28;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_28));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, g_1);
              i_28 = t;
              if(d_28 != NULL && d_28 != i_28)
                _fail(i_28);
              else
                d_28 = i_28;
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_28), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_28), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_28), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_28))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_28)))));
          }
        }
      else
        {
          if(match_cons(h_27, sym_Match_1))
            {
              i_27 = ATgetArgument(h_27, 0);
              {
                ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
                ATerm p_28 = NULL;
                ATerm q_28 = NULL;
                t = new_0(t);
                p_28 = t;
                if(m_28 != NULL && m_28 != p_28)
                  _fail(p_28);
                else
                  m_28 = p_28;
                {
                  ATerm u_28 = NULL;
                  t = new_0(t);
                  q_28 = t;
                  if(n_28 != NULL && n_28 != q_28)
                    _fail(q_28);
                  else
                    n_28 = q_28;
                  t = not_null(i_27);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
                      r_28 = t;
                      z_26 :
                      if(match_cons(r_28, sym_Explode_2))
                        {
                          s_28 = ATgetArgument(r_28, 0);
                          t_28 = ATgetArgument(r_28, 1);
                          if(k_28 != NULL && k_28 != s_28)
                            _fail(s_28);
                          else
                            k_28 = s_28;
                          if(l_28 != NULL && l_28 != t_28)
                            _fail(t_28);
                          else
                            l_28 = t_28;
                          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_28));
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    u_28 = t;
                    if(o_28 != NULL && o_28 != u_28)
                      _fail(u_28);
                    else
                      o_28 = u_28;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_28), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_28)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_28), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_28))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_28)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_28)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
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
  ATerm v_29 = NULL,w_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym_Match_1))
    {
      w_29 = ATgetArgument(v_29, 0);
      {
        ATerm d_11 = t;
        if(PushChoice()==0)
          {
            ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
            ATerm b_30 = NULL;
            ATerm e_30 = NULL;
            t = new_0(t);
            b_30 = t;
            if(z_29 != NULL && z_29 != b_30)
              _fail(b_30);
            else
              z_29 = b_30;
            t = not_null(w_29);
            {
              ATerm i_1 (ATerm t)
              {
                ATerm c_30 = NULL,d_30 = NULL;
                c_30 = t;
                p_29 :
                if(match_cons(c_30, sym_RootApp_1))
                  {
                    d_30 = ATgetArgument(c_30, 0);
                    if(y_29 != NULL && y_29 != d_30)
                      _fail(d_30);
                    else
                      y_29 = d_30;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_29));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, i_1);
              e_30 = t;
              if(a_30 != NULL && a_30 != e_30)
                _fail(e_30);
              else
                a_30 = e_30;
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_29), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_29))), not_null(y_29))));
            PopChoice();
          }
        else
          {
            t = d_11;
            {
              ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
              ATerm m_30 = NULL;
              t = not_null(w_29);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
                  j_30 = t;
                  s_29 :
                  if(match_cons(j_30, sym_App_2))
                    {
                      k_30 = ATgetArgument(j_30, 0);
                      l_30 = ATgetArgument(j_30, 1);
                      if(g_30 != NULL && g_30 != k_30)
                        _fail(k_30);
                      else
                        g_30 = k_30;
                      if(h_30 != NULL && h_30 != l_30)
                        _fail(l_30);
                      else
                        h_30 = l_30;
                      t = (ATerm) ATmakeAppl(sym_Wld_0);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, j_1);
                m_30 = t;
                if(i_30 != NULL && i_30 != m_30)
                  _fail(m_30);
                else
                  i_30 = m_30;
              }
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_30)), (ATerm) ATmakeAppl(sym_BA_2, not_null(g_30), not_null(h_30)));
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
  ATerm d_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  d_31 = t;
  b_31 :
  if(match_cons(d_31, sym_Match_1))
    {
      f_31 = ATgetArgument(d_31, 0);
      c_31 :
      if(match_cons(f_31, sym_RootApp_1))
        {
          g_31 = ATgetArgument(f_31, 0);
          t = not_null(g_31);
        }
      else
        {
          if(match_cons(f_31, sym_App_2))
            {
              g_31 = ATgetArgument(f_31, 0);
              h_31 = ATgetArgument(f_31, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(g_31), not_null(h_31));
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
  ATerm h_32 = NULL,j_32 = NULL;
  h_32 = t;
  g_32 :
  if(match_cons(h_32, sym_Match_1))
    {
      j_32 = ATgetArgument(h_32, 0);
      {
        ATerm l_32 = NULL,m_32 = NULL;
        ATerm q_32 = NULL;
        t = not_null(j_32);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
            n_32 = t;
            d_32 :
            if(match_cons(n_32, sym_RootApp_1))
              {
                o_32 = ATgetArgument(n_32, 0);
                e_32 :
                if(match_cons(o_32, sym_Match_1))
                  {
                    p_32 = ATgetArgument(o_32, 0);
                    if(l_32 != NULL && l_32 != p_32)
                      _fail(p_32);
                    else
                      l_32 = p_32;
                    t = not_null(l_32);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, k_1);
          q_32 = t;
          if(m_32 != NULL && m_32 != q_32)
            _fail(q_32);
          else
            m_32 = q_32;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym_Build_1))
    {
      u_33 = ATgetArgument(t_33, 0);
      {
        ATerm e_11 = t;
        if(PushChoice()==0)
          {
            ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
            ATerm z_33 = NULL;
            ATerm c_34 = NULL;
            t = new_0(t);
            z_33 = t;
            if(x_33 != NULL && x_33 != z_33)
              _fail(z_33);
            else
              x_33 = z_33;
            t = not_null(u_33);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm a_34 = NULL,b_34 = NULL;
                a_34 = t;
                m_33 :
                if(match_cons(a_34, sym_RootApp_1))
                  {
                    b_34 = ATgetArgument(a_34, 0);
                    if(w_33 != NULL && w_33 != b_34)
                      _fail(b_34);
                    else
                      w_33 = b_34;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_33));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, l_1);
              c_34 = t;
              if(y_33 != NULL && y_33 != c_34)
                _fail(c_34);
              else
                y_33 = c_34;
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_33))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_33))));
            PopChoice();
          }
        else
          {
            t = e_11;
            {
              ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
              ATerm i_34 = NULL;
              ATerm m_34 = NULL;
              t = new_0(t);
              i_34 = t;
              if(g_34 != NULL && g_34 != i_34)
                _fail(i_34);
              else
                g_34 = i_34;
              t = not_null(u_33);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
                  j_34 = t;
                  q_33 :
                  if(match_cons(j_34, sym_App_2))
                    {
                      k_34 = ATgetArgument(j_34, 0);
                      l_34 = ATgetArgument(j_34, 1);
                      if(e_34 != NULL && e_34 != k_34)
                        _fail(k_34);
                      else
                        e_34 = k_34;
                      if(f_34 != NULL && f_34 != l_34)
                        _fail(l_34);
                      else
                        f_34 = l_34;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_34));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, m_1);
                m_34 = t;
                if(h_34 != NULL && h_34 != m_34)
                  _fail(m_34);
                else
                  h_34 = m_34;
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_34), not_null(f_34), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_34)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_34))));
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
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL;
  z_34 = t;
  x_34 :
  if(match_cons(z_34, sym_Build_1))
    {
      a_35 = ATgetArgument(z_34, 0);
      y_34 :
      if(match_cons(a_35, sym_RootApp_1))
        {
          b_35 = ATgetArgument(a_35, 0);
          t = not_null(b_35);
        }
      else
        {
          if(match_cons(a_35, sym_App_2))
            {
              b_35 = ATgetArgument(a_35, 0);
              c_35 = ATgetArgument(a_35, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_35)), not_null(b_35));
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
  ATerm t_35 = NULL,u_35 = NULL;
  t_35 = t;
  s_35 :
  if(match_cons(t_35, sym_Build_1))
    {
      u_35 = ATgetArgument(t_35, 0);
      {
        ATerm i_11 = t;
        if(PushChoice()==0)
          {
            ATerm w_35 = NULL,x_35 = NULL;
            ATerm b_36 = NULL;
            t = not_null(u_35);
            {
              ATerm n_1 (ATerm t)
              {
                ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
                y_35 = t;
                l_35 :
                if(match_cons(y_35, sym_RootApp_1))
                  {
                    z_35 = ATgetArgument(y_35, 0);
                    m_35 :
                    if(match_cons(z_35, sym_Build_1))
                      {
                        a_36 = ATgetArgument(z_35, 0);
                        if(w_35 != NULL && w_35 != a_36)
                          _fail(a_36);
                        else
                          w_35 = a_36;
                        t = not_null(w_35);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, n_1);
              b_36 = t;
              if(x_35 != NULL && x_35 != b_36)
                _fail(b_36);
              else
                x_35 = b_36;
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(x_35));
            PopChoice();
          }
        else
          {
            t = i_11;
            {
              ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
              ATerm u_36 = NULL;
              t = not_null(u_35);
              {
                ATerm o_1 (ATerm t)
                {
                  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
                  l_36 = t;
                  p_35 :
                  if(match_cons(l_36, sym_App_2))
                    {
                      m_36 = ATgetArgument(l_36, 0);
                      o_36 = ATgetArgument(l_36, 1);
                      q_35 :
                      if(match_cons(m_36, sym_Build_1))
                        {
                          n_36 = ATgetArgument(m_36, 0);
                          if(j_36 != NULL && j_36 != n_36)
                            _fail(n_36);
                          else
                            j_36 = n_36;
                          if(i_36 != NULL && i_36 != o_36)
                            _fail(o_36);
                          else
                            i_36 = o_36;
                          t = not_null(j_36);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, o_1);
                u_36 = t;
                if(k_36 != NULL && k_36 != u_36)
                  _fail(u_36);
                else
                  k_36 = u_36;
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(k_36));
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
  ATerm v_37 = NULL,e_38 = NULL,f_38 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  x_40 = t;
  r_37 :
  if(match_cons(x_40, sym_InfixApp_3))
    {
      y_40 = ATgetArgument(x_40, 0);
      e_38 = ATgetArgument(x_40, 1);
      v_37 = ATgetArgument(x_40, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_38), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_40), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_37), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
    }
  else
    {
      if(match_cons(x_40, sym_BAM_3))
        {
          y_40 = ATgetArgument(x_40, 0);
          e_38 = ATgetArgument(x_40, 1);
          v_37 = ATgetArgument(x_40, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_38)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_40), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_37)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(x_40, sym_AM_2))
            {
              y_40 = ATgetArgument(x_40, 0);
              e_38 = ATgetArgument(x_40, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_40), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_38)));
            }
          else
            {
              if(match_cons(x_40, sym_MA_2))
                {
                  y_40 = ATgetArgument(x_40, 0);
                  e_38 = ATgetArgument(x_40, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_40)), not_null(e_38));
                }
              else
                {
                  if(match_cons(x_40, sym_BA_2))
                    {
                      y_40 = ATgetArgument(x_40, 0);
                      e_38 = ATgetArgument(x_40, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_38)), not_null(y_40));
                    }
                  else
                    {
                      if(match_cons(x_40, sym_Lets_2))
                        {
                          y_40 = ATgetArgument(x_40, 0);
                          e_38 = ATgetArgument(x_40, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(y_40), not_null(e_38));
                        }
                      else
                        {
                          if(match_cons(x_40, sym_LChoices_1))
                            {
                              y_40 = ATgetArgument(x_40, 0);
                              s_37 :
                              if(match_cons(y_40, sym_Cons_2))
                                {
                                  f_38 = ATgetArgument(y_40, 0);
                                  w_40 = ATgetArgument(y_40, 1);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_38), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(w_40)));
                                }
                              else
                                {
                                  if(match_cons(y_40, sym_Nil_0))
                                    t = (ATerm) ATmakeAppl(sym_Fail_0);
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(x_40, sym_Choices_1))
                                {
                                  y_40 = ATgetArgument(x_40, 0);
                                  t_37 :
                                  if(match_cons(y_40, sym_Cons_2))
                                    {
                                      f_38 = ATgetArgument(y_40, 0);
                                      w_40 = ATgetArgument(y_40, 1);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_38), (ATerm) ATmakeAppl(sym_Choices_1, not_null(w_40)));
                                    }
                                  else
                                    {
                                      if(match_cons(y_40, sym_Nil_0))
                                        t = (ATerm) ATmakeAppl(sym_Fail_0);
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(x_40, sym_Seqs_1))
                                    {
                                      y_40 = ATgetArgument(x_40, 0);
                                      u_37 :
                                      if(match_cons(y_40, sym_Cons_2))
                                        {
                                          f_38 = ATgetArgument(y_40, 0);
                                          w_40 = ATgetArgument(y_40, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_38), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_40)));
                                        }
                                      else
                                        {
                                          if(match_cons(y_40, sym_Nil_0))
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
  ATerm j_45 = NULL;
  j_45 = t;
  i_45 :
  if(!(match_cons(j_45, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm j_11 = t;
  if(PushChoice()==0)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm k_11 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = k_11;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, p_1);
      PopChoice();
      _fail(t);
    }
  else
    t = j_11;
  return(t);
}
ATerm App_2 (ATerm t, ATerm d_50 (ATerm), ATerm e_50 (ATerm))
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  n_45 :
  if(match_cons(o_45, sym_App_2))
    {
      p_45 = ATgetArgument(o_45, 0);
      q_45 = ATgetArgument(o_45, 1);
      {
        ATerm t_45 = NULL;
        t = not_null(p_45);
        {
          ATerm v_45 = NULL;
          t = d_50(t);
          t_45 = t;
          t = not_null(q_45);
          t = e_50(t);
          v_45 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_45), not_null(v_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm a_50 (ATerm), ATerm b_50 (ATerm), ATerm c_50 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_Con_3))
    {
      g_46 = ATgetArgument(f_46, 0);
      h_46 = ATgetArgument(f_46, 1);
      i_46 = ATgetArgument(f_46, 2);
      {
        ATerm m_46 = NULL;
        t = not_null(g_46);
        {
          ATerm o_46 = NULL;
          t = a_50(t);
          m_46 = t;
          t = not_null(h_46);
          {
            ATerm q_46 = NULL;
            t = b_50(t);
            o_46 = t;
            t = not_null(i_46);
            t = c_50(t);
            q_46 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(m_46), not_null(o_46), not_null(q_46));
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
  ATerm l_11 = t;
  if(PushChoice()==0)
    {
      ATerm q_1 (ATerm t)
      {
        ATerm m_11 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = m_11;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, q_1);
      PopChoice();
      _fail(t);
    }
  else
    t = l_11;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  a_47 = t;
  y_46 :
  if(match_cons(a_47, sym_SRule_1))
    {
      b_47 = ATgetArgument(a_47, 0);
      z_46 :
      if(match_cons(b_47, sym_StratRule_3))
        {
          c_47 = ATgetArgument(b_47, 0);
          d_47 = ATgetArgument(b_47, 1);
          e_47 = ATgetArgument(b_47, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(e_47)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_47), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(b_47, sym_Rule_3))
            {
              c_47 = ATgetArgument(b_47, 0);
              d_47 = ATgetArgument(b_47, 1);
              e_47 = ATgetArgument(b_47, 2);
              t = not_null(c_47);
              t = pureterm_0(t);
              t = not_null(d_47);
              t = buildterm_0(t);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_47)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(e_47)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_47)), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm h_53 (ATerm), ATerm i_53 (ATerm))
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
  r_47 = t;
  q_47 :
  if(match_cons(r_47, sym_Scope_2))
    {
      s_47 = ATgetArgument(r_47, 0);
      t_47 = ATgetArgument(r_47, 1);
      {
        ATerm w_47 = NULL;
        t = not_null(s_47);
        {
          ATerm y_47 = NULL;
          t = h_53(t);
          w_47 = t;
          t = not_null(t_47);
          t = i_53(t);
          y_47 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_47), not_null(y_47));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm d_48 (ATerm t)
  {
    ATerm n_11 = t;
    if(PushChoice()==0)
      {
        t = g_72(t);
        PopChoice();
      }
    else
      {
        t = n_11;
        t = _one(t, d_48);
      }
    return(t);
  }
  t = d_48(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm s_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  s_48 = t;
  q_48 :
  if(match_cons(s_48, sym_SRule_1))
    {
      v_48 = ATgetArgument(s_48, 0);
      r_48 :
      if(match_cons(v_48, sym_Rule_3))
        {
          w_48 = ATgetArgument(v_48, 0);
          x_48 = ATgetArgument(v_48, 1);
          y_48 = ATgetArgument(v_48, 2);
          {
            ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
            ATerm k_49 = NULL;
            ATerm q_49 = NULL;
            t = new_0(t);
            k_49 = t;
            if(h_49 != NULL && h_49 != k_49)
              _fail(k_49);
            else
              h_49 = k_49;
            t = not_null(w_48);
            {
              ATerm y_49 = NULL;
              ATerm r_1 (ATerm t)
              {
                ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
                l_49 = t;
                h_48 :
                if(match_cons(l_49, sym_Con_3))
                  {
                    m_49 = ATgetArgument(l_49, 0);
                    o_49 = ATgetArgument(l_49, 1);
                    p_49 = ATgetArgument(l_49, 2);
                    i_48 :
                    if(match_cons(m_49, sym_Var_1))
                      {
                        n_49 = ATgetArgument(m_49, 0);
                        if(g_49 != NULL && g_49 != n_49)
                          _fail(n_49);
                        else
                          g_49 = n_49;
                        if(e_49 != NULL && e_49 != o_49)
                          _fail(o_49);
                        else
                          e_49 = o_49;
                        if(c_49 != NULL && c_49 != p_49)
                          _fail(p_49);
                        else
                          c_49 = p_49;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_49));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, r_1);
              q_49 = t;
              if(i_49 != NULL && i_49 != q_49)
                _fail(q_49);
              else
                i_49 = q_49;
              t = not_null(x_48);
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
                  r_49 = t;
                  l_48 :
                  if(match_cons(r_49, sym_Con_3))
                    {
                      s_49 = ATgetArgument(r_49, 0);
                      u_49 = ATgetArgument(r_49, 1);
                      v_49 = ATgetArgument(r_49, 2);
                      m_48 :
                      if(match_cons(s_49, sym_Var_1))
                        {
                          t_49 = ATgetArgument(s_49, 0);
                          n_48 :
                          if(match_cons(v_49, sym_Call_2))
                            {
                              w_49 = ATgetArgument(v_49, 0);
                              x_49 = ATgetArgument(v_49, 1);
                              o_48 :
                              if(match_cons(x_49, sym_Nil_0))
                                {
                                  if(g_49 != NULL && g_49 != t_49)
                                    _fail(t_49);
                                  else
                                    g_49 = t_49;
                                  if(f_49 != NULL && f_49 != u_49)
                                    _fail(u_49);
                                  else
                                    f_49 = u_49;
                                  if(d_49 != NULL && d_49 != w_49)
                                    _fail(w_49);
                                  else
                                    d_49 = w_49;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_49));
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
                t = oncetd_1(t, s_1);
                y_49 = t;
                if(j_49 != NULL && j_49 != y_49)
                  _fail(y_49);
                else
                  j_49 = y_49;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_49), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_49), not_null(j_49), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_48), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(d_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_49), not_null(f_49), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_49)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_49)))))));
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
  ATerm t_1 (ATerm t)
  {
    ATerm o_11 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = o_11;
        {
          ATerm p_11 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = p_11;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, t_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm q_70 (ATerm))
{
  ATerm l_50 (ATerm t)
  {
    t = q_70(t);
    t = _all(t, l_50);
    return(t);
  }
  t = l_50(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm q_11 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = q_11;
            {
              ATerm r_11 = t;
              if(PushChoice()==0)
                {
                  ATerm s_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = s_11;
                      {
                        ATerm t_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = t_11;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = r_11;
                  {
                    ATerm u_11 = t;
                    if(PushChoice()==0)
                      {
                        ATerm v_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Mapp0_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = v_11;
                            {
                              ATerm w_11 = t;
                              if(PushChoice()==0)
                                {
                                  t = Mapp1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = w_11;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        PopChoice();
                      }
                    else
                      {
                        t = u_11;
                        t = Expl_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, v_1);
    }
    return(t);
  }
  t = topdown_1(t, u_1);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  o_50 = t;
  n_50 :
  if(match_cons(o_50, sym_TCons_2))
    {
      p_50 = ATgetArgument(o_50, 0);
      q_50 = ATgetArgument(o_50, 1);
      t = not_null(q_50);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym_TCons_2))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      t = not_null(x_50);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm a_69 (ATerm))
{
  ATerm p_51 (ATerm t)
  {
    ATerm b_12 = t;
    if(PushChoice()==0)
      {
        ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
        ATerm w_1 (ATerm t)
        {
          t = map_1(t, Thd_0);
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          t = map_1(t, Ttl_0);
          return(t);
        }
        t = split_2(t, w_1, x_1);
        {
          ATerm y_1 (ATerm t)
          {
            t = TCons_2(t, p_51, TNil_0);
            return(t);
          }
          t = TCons_2(t, a_69, y_1);
          g_51 = t;
          d_51 :
          if(match_cons(g_51, sym_TCons_2))
            {
              h_51 = ATgetArgument(g_51, 0);
              i_51 = ATgetArgument(g_51, 1);
              e_51 :
              if(match_cons(i_51, sym_TCons_2))
                {
                  j_51 = ATgetArgument(i_51, 0);
                  k_51 = ATgetArgument(i_51, 1);
                  f_51 :
                  if(match_cons(k_51, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_51), not_null(j_51));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
        PopChoice();
      }
    else
      {
        t = b_12;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = p_51(t);
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm v_51 = NULL;
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  v_51 = t;
  {
    ATerm a_52 = NULL;
    ATerm b_52 = NULL;
    t = new_0(t);
    a_52 = t;
    if(x_51 != NULL && x_51 != a_52)
      _fail(a_52);
    else
      x_51 = a_52;
    {
      ATerm c_52 = NULL;
      t = new_0(t);
      b_52 = t;
      if(y_51 != NULL && y_51 != b_52)
        _fail(b_52);
      else
        y_51 = b_52;
      t = new_0(t);
      c_52 = t;
      if(z_51 != NULL && z_51 != c_52)
        _fail(c_52);
      else
        z_51 = c_52;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_51)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_51)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_51), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_51))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_51), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_51)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_51)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
  u_52 = t;
  r_52 :
  if(match_cons(u_52, sym_TCons_2))
    {
      v_52 = ATgetArgument(u_52, 0);
      w_52 = ATgetArgument(u_52, 1);
      s_52 :
      if(match_cons(w_52, sym_TCons_2))
        {
          x_52 = ATgetArgument(w_52, 0);
          y_52 = ATgetArgument(w_52, 1);
          t_52 :
          if(match_cons(y_52, sym_TNil_0))
            {
              ATerm c_12 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(v_52), not_null(x_52));
                  PopChoice();
                }
              else
                {
                  t = c_12;
                  t = SSL_subtr(not_null(v_52), not_null(x_52));
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
ATerm gt_0 (ATerm t)
{
  ATerm g_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,o_53 = NULL;
  g_53 = t;
  d_53 :
  if(match_cons(g_53, sym_TCons_2))
    {
      j_53 = ATgetArgument(g_53, 0);
      k_53 = ATgetArgument(g_53, 1);
      e_53 :
      if(match_cons(k_53, sym_TCons_2))
        {
          l_53 = ATgetArgument(k_53, 0);
          o_53 = ATgetArgument(k_53, 1);
          f_53 :
          if(match_cons(o_53, sym_TNil_0))
            {
              ATerm e_12;
              e_12 = t;
              {
                ATerm f_12 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(j_53), not_null(l_53));
                    PopChoice();
                  }
                else
                  {
                    t = f_12;
                    t = SSL_gtr(not_null(j_53), not_null(l_53));
                  }
              }
              t = e_12;
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
ATerm geq_0 (ATerm t)
{
  ATerm y_53 = NULL;
  ATerm g_12 = t;
  if(PushChoice()==0)
    {
      ATerm z_53 = NULL,b_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
      z_53 = t;
      v_53 :
      if(match_cons(z_53, sym_TCons_2))
        {
          b_54 = ATgetArgument(z_53, 0);
          d_54 = ATgetArgument(z_53, 1);
          w_53 :
          if(match_cons(d_54, sym_TCons_2))
            {
              e_54 = ATgetArgument(d_54, 0);
              f_54 = ATgetArgument(d_54, 1);
              x_53 :
              if(match_cons(f_54, sym_TNil_0))
                {
                  if(y_53 != NULL && y_53 != b_54)
                    _fail(b_54);
                  else
                    y_53 = b_54;
                  if(y_53 != NULL && y_53 != e_54)
                    _fail(e_54);
                  else
                    y_53 = e_54;
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
      t = g_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
    e_55 = t;
    l_54 :
    if(match_cons(e_55, sym_TCons_2))
      {
        f_55 = ATgetArgument(e_55, 0);
        g_55 = ATgetArgument(e_55, 1);
        m_54 :
        if(match_cons(g_55, sym_TCons_2))
          {
            h_55 = ATgetArgument(g_55, 0);
            i_55 = ATgetArgument(g_55, 1);
            n_54 :
            if(match_cons(i_55, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm a_2 (ATerm t)
  {
    ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
    l_55 = t;
    s_54 :
    if(match_cons(l_55, sym_TCons_2))
      {
        m_55 = ATgetArgument(l_55, 0);
        n_55 = ATgetArgument(l_55, 1);
        t_54 :
        if(match_int(m_55, 0))
          {
            u_54 :
            if(match_cons(n_55, sym_TCons_2))
              {
                o_55 = ATgetArgument(n_55, 0);
                p_55 = ATgetArgument(n_55, 1);
                v_54 :
                if(match_cons(p_55, sym_TCons_2))
                  {
                    q_55 = ATgetArgument(p_55, 0);
                    r_55 = ATgetArgument(p_55, 1);
                    w_54 :
                    if(match_cons(r_55, sym_TNil_0))
                      t = not_null(q_55);
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
  ATerm b_2 (ATerm t)
  {
    ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,g_56 = NULL;
    u_55 = t;
    a_55 :
    if(match_cons(u_55, sym_TCons_2))
      {
        v_55 = ATgetArgument(u_55, 0);
        w_55 = ATgetArgument(u_55, 1);
        b_55 :
        if(match_cons(w_55, sym_TCons_2))
          {
            x_55 = ATgetArgument(w_55, 0);
            y_55 = ATgetArgument(w_55, 1);
            c_55 :
            if(match_cons(y_55, sym_TCons_2))
              {
                z_55 = ATgetArgument(y_55, 0);
                g_56 = ATgetArgument(y_55, 1);
                d_55 :
                if(match_cons(g_56, sym_TNil_0))
                  {
                    ATerm k_56 = NULL,m_56 = NULL;
                    ATerm h_12;
                    h_12 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = h_12;
                    {
                      ATerm o_12;
                      o_12 = t;
                      {
                        ATerm l_56 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = subt_0(t);
                        l_56 = t;
                        if(k_56 != NULL && k_56 != l_56)
                          _fail(l_56);
                        else
                          k_56 = l_56;
                      }
                      t = o_12;
                      {
                        ATerm n_56 = NULL;
                        t = not_null(x_55);
                        t = j_60(t);
                        n_56 = t;
                        if(m_56 != NULL && m_56 != n_56)
                          _fail(n_56);
                        else
                          m_56 = n_56;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_56), not_null(z_55)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, z_1, a_2, b_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  c_57 = t;
  x_56 :
  if(match_cons(c_57, sym_TCons_2))
    {
      d_57 = ATgetArgument(c_57, 0);
      g_57 = ATgetArgument(c_57, 1);
      y_56 :
      if(match_cons(g_57, sym_TCons_2))
        {
          h_57 = ATgetArgument(g_57, 0);
          i_57 = ATgetArgument(g_57, 1);
          a_57 :
          if(match_cons(i_57, sym_TNil_0))
            {
              ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
              ATerm r_57 = NULL;
              ATerm s_57 = NULL;
              t = new_0(t);
              r_57 = t;
              if(o_57 != NULL && o_57 != r_57)
                _fail(r_57);
              else
                o_57 = r_57;
              {
                ATerm t_57 = NULL;
                t = new_0(t);
                s_57 = t;
                if(p_57 != NULL && p_57 != s_57)
                  _fail(s_57);
                else
                  p_57 = s_57;
                t = new_0(t);
                t_57 = t;
                if(q_57 != NULL && q_57 != t_57)
                  _fail(t_57);
                else
                  q_57 = t_57;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_57)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_57)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_57)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_57)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_57)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_57), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_57)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
  f_58 = t;
  b_58 :
  if(match_cons(f_58, sym_TCons_2))
    {
      g_58 = ATgetArgument(f_58, 0);
      h_58 = ATgetArgument(f_58, 1);
      c_58 :
      if(match_cons(h_58, sym_TCons_2))
        {
          i_58 = ATgetArgument(h_58, 0);
          j_58 = ATgetArgument(h_58, 1);
          d_58 :
          if(match_cons(i_58, sym_Nil_0))
            {
              e_58 :
              if(match_cons(j_58, sym_TNil_0))
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
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm z_67 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, z_67);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
  n_58 = t;
  m_58 :
  if(match_cons(n_58, sym_Cons_2))
    {
      o_58 = ATgetArgument(n_58, 0);
      p_58 = ATgetArgument(n_58, 1);
      t = not_null(p_58);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  u_58 :
  if(match_cons(w_58, sym_Cons_2))
    {
      x_58 = ATgetArgument(w_58, 0);
      y_58 = ATgetArgument(w_58, 1);
      v_58 :
      if(match_cons(y_58, sym_Nil_0))
        t = not_null(x_58);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm p_12 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = p_12;
      t = Tl_0(t);
      t = last_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm x_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL;
  ATerm b_64 (ATerm t)
  {
    ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,n_62 = NULL;
    ATerm q_12;
    q_12 = t;
    {
      ATerm u_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
      ATerm v_61 = NULL;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = add_0(t);
      v_61 = t;
      if(u_61 != NULL && u_61 != v_61)
        _fail(v_61);
      else
        u_61 = v_61;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      w_61 = t;
      q_59 :
      if(match_cons(w_61, sym_Cons_2))
        {
          x_61 = ATgetArgument(w_61, 0);
          y_61 = ATgetArgument(w_61, 1);
          {
            ATerm z_61 = NULL;
            if(m_61 != NULL && m_61 != x_61)
              _fail(x_61);
            else
              m_61 = x_61;
            if(n_61 != NULL && n_61 != y_61)
              _fail(y_61);
            else
              n_61 = y_61;
            t = not_null(n_61);
            {
              ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
              t = last_0(t);
              z_61 = t;
              if(l_61 != NULL && l_61 != z_61)
                _fail(z_61);
              else
                l_61 = z_61;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_61), not_null(n_61)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_61), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              a_62 = t;
              j_59 :
              if(match_cons(a_62, sym_TCons_2))
                {
                  b_62 = ATgetArgument(a_62, 0);
                  c_62 = ATgetArgument(a_62, 1);
                  k_59 :
                  if(match_cons(c_62, sym_TCons_2))
                    {
                      d_62 = ATgetArgument(c_62, 0);
                      e_62 = ATgetArgument(c_62, 1);
                      l_59 :
                      if(match_cons(e_62, sym_TCons_2))
                        {
                          f_62 = ATgetArgument(e_62, 0);
                          g_62 = ATgetArgument(e_62, 1);
                          m_59 :
                          if(match_cons(g_62, sym_TCons_2))
                            {
                              h_62 = ATgetArgument(g_62, 0);
                              i_62 = ATgetArgument(g_62, 1);
                              n_59 :
                              if(match_cons(i_62, sym_TCons_2))
                                {
                                  j_62 = ATgetArgument(i_62, 0);
                                  k_62 = ATgetArgument(i_62, 1);
                                  o_59 :
                                  if(match_cons(k_62, sym_TCons_2))
                                    {
                                      l_62 = ATgetArgument(k_62, 0);
                                      m_62 = ATgetArgument(k_62, 1);
                                      p_59 :
                                      if(match_cons(m_62, sym_TNil_0))
                                        {
                                          if(o_61 != NULL && o_61 != b_62)
                                            _fail(b_62);
                                          else
                                            o_61 = b_62;
                                          if(p_61 != NULL && p_61 != d_62)
                                            _fail(d_62);
                                          else
                                            p_61 = d_62;
                                          if(q_61 != NULL && q_61 != f_62)
                                            _fail(f_62);
                                          else
                                            q_61 = f_62;
                                          if(r_61 != NULL && r_61 != h_62)
                                            _fail(h_62);
                                          else
                                            r_61 = h_62;
                                          if(s_61 != NULL && s_61 != j_62)
                                            _fail(j_62);
                                          else
                                            s_61 = j_62;
                                          if(t_61 != NULL && t_61 != l_62)
                                            _fail(l_62);
                                          else
                                            t_61 = l_62;
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
          }
        }
      else
        _fail(t);
    }
    t = q_12;
    {
      ATerm o_62 = NULL;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_61), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_61), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_61), (ATerm) ATmakeAppl(sym_Nil_0))));
      t = concat_0(t);
      o_62 = t;
      if(n_62 != NULL && n_62 != o_62)
        _fail(o_62);
      else
        n_62 = o_62;
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_61), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(p_61), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_61), not_null(n_62)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_61), not_null(r_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_61)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_61), not_null(t_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_61)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_61))))));
    }
    return(t);
  }
  ATerm c_64 (ATerm t)
  {
    ATerm q_62 = NULL;
    ATerm v_62 = NULL;
    t = new_0(t);
    v_62 = t;
    if(q_62 != NULL && q_62 != v_62)
      _fail(v_62);
    else
      q_62 = v_62;
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_61), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_62), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_61), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_61), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
    return(t);
  }
  ATerm d_64 (ATerm t)
  {
    ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,z_63 = NULL;
    ATerm r_12;
    r_12 = t;
    {
      ATerm f_63 = NULL;
      ATerm g_63 = NULL,h_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
      t = new_0(t);
      f_63 = t;
      if(y_62 != NULL && y_62 != f_63)
        _fail(f_63);
      else
        y_62 = f_63;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_62)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, MkDistApplication_0);
      t = tuple_unzip_1(t, _id);
      g_63 = t;
      a_60 :
      if(match_cons(g_63, sym_TCons_2))
        {
          h_63 = ATgetArgument(g_63, 0);
          o_63 = ATgetArgument(g_63, 1);
          b_60 :
          if(match_cons(o_63, sym_TCons_2))
            {
              p_63 = ATgetArgument(o_63, 0);
              q_63 = ATgetArgument(o_63, 1);
              c_60 :
              if(match_cons(q_63, sym_TCons_2))
                {
                  r_63 = ATgetArgument(q_63, 0);
                  s_63 = ATgetArgument(q_63, 1);
                  d_60 :
                  if(match_cons(s_63, sym_TCons_2))
                    {
                      t_63 = ATgetArgument(s_63, 0);
                      u_63 = ATgetArgument(s_63, 1);
                      e_60 :
                      if(match_cons(u_63, sym_TCons_2))
                        {
                          v_63 = ATgetArgument(u_63, 0);
                          w_63 = ATgetArgument(u_63, 1);
                          f_60 :
                          if(match_cons(w_63, sym_TCons_2))
                            {
                              x_63 = ATgetArgument(w_63, 0);
                              y_63 = ATgetArgument(w_63, 1);
                              g_60 :
                              if(match_cons(y_63, sym_TNil_0))
                                {
                                  if(z_62 != NULL && z_62 != h_63)
                                    _fail(h_63);
                                  else
                                    z_62 = h_63;
                                  if(a_63 != NULL && a_63 != p_63)
                                    _fail(p_63);
                                  else
                                    a_63 = p_63;
                                  if(b_63 != NULL && b_63 != r_63)
                                    _fail(r_63);
                                  else
                                    b_63 = r_63;
                                  if(c_63 != NULL && c_63 != t_63)
                                    _fail(t_63);
                                  else
                                    c_63 = t_63;
                                  if(d_63 != NULL && d_63 != v_63)
                                    _fail(v_63);
                                  else
                                    d_63 = v_63;
                                  if(e_63 != NULL && e_63 != x_63)
                                    _fail(x_63);
                                  else
                                    e_63 = x_63;
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
    t = r_12;
    {
      ATerm a_64 = NULL;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_63), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = conc_0(t);
      a_64 = t;
      if(z_63 != NULL && z_63 != a_64)
        _fail(a_64);
      else
        z_63 = a_64;
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_61), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(a_63), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_62), not_null(z_63)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_61), not_null(c_63)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(a_61), not_null(e_63)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(z_62))))));
    }
    return(t);
  }
  x_60 = t;
  k_60 :
  if(match_cons(x_60, sym_TCons_2))
    {
      a_61 = ATgetArgument(x_60, 0);
      b_61 = ATgetArgument(x_60, 1);
      l_60 :
      if(match_cons(b_61, sym_TCons_2))
        {
          c_61 = ATgetArgument(b_61, 0);
          g_61 = ATgetArgument(b_61, 1);
          m_60 :
          if(match_string(c_61, "T"))
            {
              n_60 :
              if(match_cons(g_61, sym_TCons_2))
                {
                  h_61 = ATgetArgument(g_61, 0);
                  i_61 = ATgetArgument(g_61, 1);
                  o_60 :
                  if(match_cons(i_61, sym_TNil_0))
                    {
                      p_60 :
                      if(match_int(h_61, 0))
                        {
                          ATerm s_12 = t;
                          if(PushChoice()==0)
                            {
                              t = b_64(t);
                              PopChoice();
                            }
                          else
                            {
                              t = s_12;
                              t = c_64(t);
                            }
                        }
                      else
                        t = b_64(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_string(c_61, "D"))
                {
                  q_60 :
                  if(match_cons(g_61, sym_TCons_2))
                    {
                      h_61 = ATgetArgument(g_61, 0);
                      i_61 = ATgetArgument(g_61, 1);
                      r_60 :
                      if(match_cons(i_61, sym_TNil_0))
                        t = d_64(t);
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
    }
  else
    _fail(t);
  return(t);
}
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
  w_64 = t;
  p_64 :
  if(match_cons(w_64, sym_TCons_2))
    {
      x_64 = ATgetArgument(w_64, 0);
      e_65 = ATgetArgument(w_64, 1);
      q_64 :
      if(match_cons(x_64, sym_TCons_2))
        {
          y_64 = ATgetArgument(x_64, 0);
          b_65 = ATgetArgument(x_64, 1);
          r_64 :
          if(match_cons(y_64, sym_Mod_2))
            {
              z_64 = ATgetArgument(y_64, 0);
              a_65 = ATgetArgument(y_64, 1);
              s_64 :
              if(match_cons(b_65, sym_TCons_2))
                {
                  c_65 = ATgetArgument(b_65, 0);
                  d_65 = ATgetArgument(b_65, 1);
                  t_64 :
                  if(match_cons(d_65, sym_TNil_0))
                    {
                      u_64 :
                      if(match_cons(e_65, sym_TCons_2))
                        {
                          f_65 = ATgetArgument(e_65, 0);
                          g_65 = ATgetArgument(e_65, 1);
                          v_64 :
                          if(match_cons(g_65, sym_TNil_0))
                            {
                              ATerm q_65 = NULL;
                              ATerm r_65 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_65), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              r_65 = t;
                              if(q_65 != NULL && q_65 != r_65)
                                _fail(r_65);
                              else
                                q_65 = r_65;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_65), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm get_definition_0 (ATerm t)
{
  ATerm t_12 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = t_12;
      t = OverloadedDef_0(t);
      {
        ATerm c_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, joindefs_0, c_2);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
  c_66 = t;
  v_65 :
  if(match_cons(c_66, sym_TCons_2))
    {
      d_66 = ATgetArgument(c_66, 0);
      g_66 = ATgetArgument(c_66, 1);
      w_65 :
      if(match_cons(d_66, sym_Cons_2))
        {
          e_66 = ATgetArgument(d_66, 0);
          f_66 = ATgetArgument(d_66, 1);
          x_65 :
          if(match_cons(g_66, sym_TCons_2))
            {
              h_66 = ATgetArgument(g_66, 0);
              i_66 = ATgetArgument(g_66, 1);
              y_65 :
              if(match_cons(i_66, sym_TCons_2))
                {
                  j_66 = ATgetArgument(i_66, 0);
                  k_66 = ATgetArgument(i_66, 1);
                  z_65 :
                  if(match_cons(k_66, sym_TCons_2))
                    {
                      l_66 = ATgetArgument(k_66, 0);
                      m_66 = ATgetArgument(k_66, 1);
                      a_66 :
                      if(match_cons(m_66, sym_TCons_2))
                        {
                          n_66 = ATgetArgument(m_66, 0);
                          o_66 = ATgetArgument(m_66, 1);
                          b_66 :
                          if(match_cons(o_66, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_66), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_66), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_66), not_null(n_66)), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
ATerm conc_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
  a_67 = t;
  x_66 :
  if(match_cons(a_67, sym_TCons_2))
    {
      b_67 = ATgetArgument(a_67, 0);
      c_67 = ATgetArgument(a_67, 1);
      y_66 :
      if(match_cons(c_67, sym_TCons_2))
        {
          d_67 = ATgetArgument(c_67, 0);
          e_67 = ATgetArgument(c_67, 1);
          z_66 :
          if(match_cons(e_67, sym_TNil_0))
            {
              t = not_null(b_67);
              {
                ATerm d_2 (ATerm t)
                {
                  t = not_null(d_67);
                  return(t);
                }
                t = at_end_1(t, d_2);
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
ATerm UfShift_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,x_67 = NULL,y_67 = NULL,a_68 = NULL,b_68 = NULL;
  o_67 = t;
  j_67 :
  if(match_cons(o_67, sym_TCons_2))
    {
      p_67 = ATgetArgument(o_67, 0);
      q_67 = ATgetArgument(o_67, 1);
      l_67 :
      if(match_cons(q_67, sym_TCons_2))
        {
          x_67 = ATgetArgument(q_67, 0);
          b_68 = ATgetArgument(q_67, 1);
          m_67 :
          if(match_cons(x_67, sym_Cons_2))
            {
              y_67 = ATgetArgument(x_67, 0);
              a_68 = ATgetArgument(x_67, 1);
              n_67 :
              if(match_cons(b_68, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_67), not_null(p_67)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_68), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL;
  k_68 = t;
  h_68 :
  if(match_cons(k_68, sym_TCons_2))
    {
      l_68 = ATgetArgument(k_68, 0);
      m_68 = ATgetArgument(k_68, 1);
      i_68 :
      if(match_cons(m_68, sym_TCons_2))
        {
          n_68 = ATgetArgument(m_68, 0);
          o_68 = ATgetArgument(m_68, 1);
          j_68 :
          if(match_cons(o_68, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_68), not_null(n_68));
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
  ATerm y_68 = NULL,z_68 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
  y_68 = t;
  t_68 :
  if(match_cons(y_68, sym_TCons_2))
    {
      z_68 = ATgetArgument(y_68, 0);
      e_69 = ATgetArgument(y_68, 1);
      u_68 :
      if(match_cons(z_68, sym_Cons_2))
        {
          c_69 = ATgetArgument(z_68, 0);
          d_69 = ATgetArgument(z_68, 1);
          v_68 :
          if(match_cons(e_69, sym_TCons_2))
            {
              f_69 = ATgetArgument(e_69, 0);
              i_69 = ATgetArgument(e_69, 1);
              w_68 :
              if(match_cons(f_69, sym_Cons_2))
                {
                  g_69 = ATgetArgument(f_69, 0);
                  h_69 = ATgetArgument(f_69, 1);
                  x_68 :
                  if(match_cons(i_69, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_69), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_69), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
  w_69 = t;
  r_69 :
  if(match_cons(w_69, sym_TCons_2))
    {
      x_69 = ATgetArgument(w_69, 0);
      y_69 = ATgetArgument(w_69, 1);
      s_69 :
      if(match_cons(x_69, sym_Nil_0))
        {
          t_69 :
          if(match_cons(y_69, sym_TCons_2))
            {
              z_69 = ATgetArgument(y_69, 0);
              a_70 = ATgetArgument(y_69, 1);
              u_69 :
              if(match_cons(z_69, sym_Nil_0))
                {
                  v_69 :
                  if(match_cons(a_70, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm u_67 (ATerm))
{
  ATerm d_70 (ATerm t)
  {
    ATerm u_12 = t;
    if(PushChoice()==0)
      {
        t = r_67(t);
        PopChoice();
      }
    else
      {
        t = u_12;
        t = s_67(t);
        {
          ATerm g_2 (ATerm t)
          {
            t = TCons_2(t, d_70, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_67, g_2);
          t = t_67(t);
        }
      }
    return(t);
  }
  t = d_70(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_67 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_67);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL;
  w_70 = t;
  s_70 :
  if(match_cons(w_70, sym_Cons_2))
    {
      x_70 = ATgetArgument(w_70, 0);
      c_71 = ATgetArgument(w_70, 1);
      t_70 :
      if(match_cons(x_70, sym_TCons_2))
        {
          y_70 = ATgetArgument(x_70, 0);
          z_70 = ATgetArgument(x_70, 1);
          u_70 :
          if(match_cons(z_70, sym_TCons_2))
            {
              a_71 = ATgetArgument(z_70, 0);
              b_71 = ATgetArgument(z_70, 1);
              v_70 :
              if(match_cons(b_71, sym_TNil_0))
                {
                  ATerm g_71 = NULL,h_71 = NULL,p_71 = NULL,x_71 = NULL;
                  ATerm x_12;
                  x_12 = t;
                  {
                    ATerm i_71 = NULL;
                    ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
                    t = not_null(a_71);
                    i_71 = t;
                    t = SSL_explode_term(not_null(i_71));
                    k_71 = t;
                    h_70 :
                    if(match_cons(k_71, sym_TCons_2))
                      {
                        l_71 = ATgetArgument(k_71, 0);
                        m_71 = ATgetArgument(k_71, 1);
                        i_70 :
                        if(match_cons(m_71, sym_TCons_2))
                          {
                            n_71 = ATgetArgument(m_71, 0);
                            o_71 = ATgetArgument(m_71, 1);
                            j_70 :
                            if(match_cons(o_71, sym_TNil_0))
                              {
                                if(g_71 != NULL && g_71 != l_71)
                                  _fail(l_71);
                                else
                                  g_71 = l_71;
                                if(h_71 != NULL && h_71 != n_71)
                                  _fail(n_71);
                                else
                                  h_71 = n_71;
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
                  t = x_12;
                  {
                    ATerm y_12;
                    y_12 = t;
                    {
                      ATerm q_71 = NULL;
                      ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL;
                      t = not_null(y_70);
                      q_71 = t;
                      t = SSL_explode_term(not_null(q_71));
                      s_71 = t;
                      m_70 :
                      if(match_cons(s_71, sym_TCons_2))
                        {
                          t_71 = ATgetArgument(s_71, 0);
                          u_71 = ATgetArgument(s_71, 1);
                          n_70 :
                          if(match_cons(u_71, sym_TCons_2))
                            {
                              v_71 = ATgetArgument(u_71, 0);
                              w_71 = ATgetArgument(u_71, 1);
                              o_70 :
                              if(match_cons(w_71, sym_TNil_0))
                                {
                                  if(g_71 != NULL && g_71 != t_71)
                                    _fail(t_71);
                                  else
                                    g_71 = t_71;
                                  if(p_71 != NULL && p_71 != v_71)
                                    _fail(v_71);
                                  else
                                    p_71 = v_71;
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
                    t = y_12;
                    {
                      ATerm y_71 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      y_71 = t;
                      if(x_71 != NULL && x_71 != y_71)
                        _fail(y_71);
                      else
                        x_71 = y_71;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_71), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  m_72 = t;
  i_72 :
  if(match_cons(m_72, sym_Cons_2))
    {
      n_72 = ATgetArgument(m_72, 0);
      s_72 = ATgetArgument(m_72, 1);
      j_72 :
      if(match_cons(n_72, sym_TCons_2))
        {
          o_72 = ATgetArgument(n_72, 0);
          p_72 = ATgetArgument(n_72, 1);
          k_72 :
          if(match_cons(p_72, sym_TCons_2))
            {
              q_72 = ATgetArgument(p_72, 0);
              r_72 = ATgetArgument(p_72, 1);
              l_72 :
              if(match_cons(r_72, sym_TNil_0))
                {
                  ATerm w_72 = NULL;
                  if(o_72 != NULL && o_72 != q_72)
                    _fail(q_72);
                  else
                    o_72 = q_72;
                  if(w_72 != NULL && w_72 != s_72)
                    _fail(s_72);
                  else
                    w_72 = s_72;
                  t = not_null(w_72);
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
ATerm diff_0 (ATerm t)
{
  ATerm z_12 = t;
  if(PushChoice()==0)
    {
      ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
      d_73 = t;
      z_72 :
      if(match_cons(d_73, sym_TCons_2))
        {
          e_73 = ATgetArgument(d_73, 0);
          f_73 = ATgetArgument(d_73, 1);
          a_73 :
          if(match_cons(f_73, sym_TCons_2))
            {
              g_73 = ATgetArgument(f_73, 0);
              h_73 = ATgetArgument(f_73, 1);
              b_73 :
              if(match_cons(h_73, sym_TNil_0))
                {
                  t = not_null(e_73);
                  {
                    ATerm n_73 (ATerm t)
                    {
                      ATerm b_13 = t;
                      if(PushChoice()==0)
                        {
                          t = Nil_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = b_13;
                          {
                            ATerm e_13 = t;
                            if(PushChoice()==0)
                              {
                                ATerm p_2 (ATerm t)
                                {
                                  t = not_null(g_73);
                                  return(t);
                                }
                                t = HdMember_1(t, p_2);
                                t = n_73(t);
                                PopChoice();
                              }
                            else
                              {
                                t = e_13;
                                t = Cons_2(t, _id, n_73);
                              }
                          }
                        }
                      return(t);
                    }
                    t = n_73(t);
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
      t = z_12;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm k_73 = NULL;
          k_73 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_73), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          ATerm e_3 (ATerm t)
          {
            t = TCons_2(t, Nil_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, e_3);
          return(t);
        }
        ATerm s_2 (ATerm t)
        {
          ATerm f_13 = t;
          if(PushChoice()==0)
            {
              ATerm f_3 (ATerm t)
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm g_13 = t;
                  if(PushChoice()==0)
                    {
                      t = UfIdem_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = g_13;
                      t = UfDecompose_0(t);
                    }
                  return(t);
                }
                t = TCons_2(t, g_3, TNil_0);
                return(t);
              }
              t = TCons_2(t, _id, f_3);
              PopChoice();
            }
          else
            {
              t = f_13;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, q_2, r_2, s_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm g_54 (ATerm), ATerm h_54 (ATerm), ATerm i_54 (ATerm))
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
  l_74 = t;
  e_74 :
  if(match_cons(l_74, sym_TCons_2))
    {
      m_74 = ATgetArgument(l_74, 0);
      p_74 = ATgetArgument(l_74, 1);
      f_74 :
      if(match_cons(m_74, sym_Cons_2))
        {
          n_74 = ATgetArgument(m_74, 0);
          o_74 = ATgetArgument(m_74, 1);
          g_74 :
          if(match_cons(p_74, sym_TCons_2))
            {
              q_74 = ATgetArgument(p_74, 0);
              u_74 = ATgetArgument(p_74, 1);
              h_74 :
              if(match_cons(u_74, sym_TCons_2))
                {
                  v_74 = ATgetArgument(u_74, 0);
                  w_74 = ATgetArgument(u_74, 1);
                  i_74 :
                  if(match_cons(w_74, sym_TCons_2))
                    {
                      x_74 = ATgetArgument(w_74, 0);
                      y_74 = ATgetArgument(w_74, 1);
                      j_74 :
                      if(match_cons(y_74, sym_TCons_2))
                        {
                          z_74 = ATgetArgument(y_74, 0);
                          a_75 = ATgetArgument(y_74, 1);
                          k_74 :
                          if(match_cons(a_75, sym_TNil_0))
                            {
                              ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,u_75 = NULL,w_75 = NULL,a_76 = NULL;
                              ATerm i_13;
                              i_13 = t;
                              {
                                ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,r_75 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = g_54(t);
                                l_75 = t;
                                t_73 :
                                if(match_cons(l_75, sym_TCons_2))
                                  {
                                    m_75 = ATgetArgument(l_75, 0);
                                    n_75 = ATgetArgument(l_75, 1);
                                    z_73 :
                                    if(match_cons(n_75, sym_TCons_2))
                                      {
                                        o_75 = ATgetArgument(n_75, 0);
                                        r_75 = ATgetArgument(n_75, 1);
                                        a_74 :
                                        if(match_cons(r_75, sym_TNil_0))
                                          {
                                            ATerm s_75 = NULL;
                                            if(i_75 != NULL && i_75 != m_75)
                                              _fail(m_75);
                                            else
                                              i_75 = m_75;
                                            if(h_75 != NULL && h_75 != o_75)
                                              _fail(o_75);
                                            else
                                              h_75 = o_75;
                                            t = not_null(i_75);
                                            {
                                              ATerm t_75 = NULL;
                                              t = h_54(t);
                                              s_75 = t;
                                              if(j_75 != NULL && j_75 != s_75)
                                                _fail(s_75);
                                              else
                                                j_75 = s_75;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = diff_0(t);
                                              t_75 = t;
                                              if(k_75 != NULL && k_75 != t_75)
                                                _fail(t_75);
                                              else
                                                k_75 = t_75;
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
                              t = i_13;
                              {
                                ATerm j_13;
                                j_13 = t;
                                {
                                  ATerm v_75 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = conc_0(t);
                                  v_75 = t;
                                  if(u_75 != NULL && u_75 != v_75)
                                    _fail(v_75);
                                  else
                                    u_75 = v_75;
                                }
                                t = j_13;
                                {
                                  ATerm k_13;
                                  k_13 = t;
                                  {
                                    ATerm z_75 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    t = conc_0(t);
                                    z_75 = t;
                                    if(w_75 != NULL && w_75 != z_75)
                                      _fail(z_75);
                                    else
                                      w_75 = z_75;
                                  }
                                  t = k_13;
                                  {
                                    ATerm b_76 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_74), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = i_54(t);
                                    b_76 = t;
                                    if(a_76 != NULL && a_76 != b_76)
                                      _fail(b_76);
                                    else
                                      a_76 = b_76;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_74), (ATerm) ATmakeAppl(sym_TNil_0))))));
                                  }
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
  return(t);
}
ATerm GnExit_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
  t_76 = t;
  m_76 :
  if(match_cons(t_76, sym_TCons_2))
    {
      u_76 = ATgetArgument(t_76, 0);
      v_76 = ATgetArgument(t_76, 1);
      n_76 :
      if(match_cons(u_76, sym_Nil_0))
        {
          o_76 :
          if(match_cons(v_76, sym_TCons_2))
            {
              w_76 = ATgetArgument(v_76, 0);
              x_76 = ATgetArgument(v_76, 1);
              p_76 :
              if(match_cons(x_76, sym_TCons_2))
                {
                  y_76 = ATgetArgument(x_76, 0);
                  a_77 = ATgetArgument(x_76, 1);
                  q_76 :
                  if(match_cons(a_77, sym_TCons_2))
                    {
                      b_77 = ATgetArgument(a_77, 0);
                      c_77 = ATgetArgument(a_77, 1);
                      r_76 :
                      if(match_cons(c_77, sym_TCons_2))
                        {
                          d_77 = ATgetArgument(c_77, 0);
                          e_77 = ATgetArgument(c_77, 1);
                          s_76 :
                          if(match_cons(e_77, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_77), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
  q_77 = t;
  l_77 :
  if(match_cons(q_77, sym_TCons_2))
    {
      r_77 = ATgetArgument(q_77, 0);
      s_77 = ATgetArgument(q_77, 1);
      n_77 :
      if(match_cons(s_77, sym_TCons_2))
        {
          t_77 = ATgetArgument(s_77, 0);
          u_77 = ATgetArgument(s_77, 1);
          o_77 :
          if(match_cons(u_77, sym_TCons_2))
            {
              v_77 = ATgetArgument(u_77, 0);
              w_77 = ATgetArgument(u_77, 1);
              p_77 :
              if(match_cons(w_77, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
ATerm while_not_2 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm))
{
  ATerm b_78 (ATerm t)
  {
    ATerm n_13 = t;
    if(PushChoice()==0)
      {
        t = i_63(t);
        PopChoice();
      }
    else
      {
        t = n_13;
        t = j_63(t);
        t = b_78(t);
      }
    return(t);
  }
  t = b_78(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm n_63 (ATerm))
{
  t = l_63(t);
  t = while_not_2(t, m_63, n_63);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, p_54, q_54, r_54);
        PopChoice();
      }
    else
      {
        t = o_13;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, h_3);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm v_3 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, v_3);
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL;
    h_78 = t;
    d_78 :
    if(match_cons(h_78, sym_TCons_2))
      {
        i_78 = ATgetArgument(h_78, 0);
        j_78 = ATgetArgument(h_78, 1);
        e_78 :
        if(match_cons(j_78, sym_TCons_2))
          {
            k_78 = ATgetArgument(j_78, 0);
            l_78 = ATgetArgument(j_78, 1);
            f_78 :
            if(match_cons(l_78, sym_TCons_2))
              {
                m_78 = ATgetArgument(l_78, 0);
                n_78 = ATgetArgument(l_78, 1);
                g_78 :
                if(match_cons(n_78, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_78), not_null(m_78));
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
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, i_3, u_3);
  {
    ATerm p_13 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = p_13;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm a_54 (ATerm))
{
  ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL;
  y_78 = t;
  v_78 :
  if(match_cons(y_78, sym_TCons_2))
    {
      z_78 = ATgetArgument(y_78, 0);
      a_79 = ATgetArgument(y_78, 1);
      w_78 :
      if(match_cons(a_79, sym_TCons_2))
        {
          b_79 = ATgetArgument(a_79, 0);
          c_79 = ATgetArgument(a_79, 1);
          x_78 :
          if(match_cons(c_79, sym_TNil_0))
            {
              ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
              ATerm z_13;
              z_13 = t;
              {
                ATerm i_79 = NULL;
                ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
                t = a_54(t);
                i_79 = t;
                if(f_79 != NULL && f_79 != i_79)
                  _fail(i_79);
                else
                  f_79 = i_79;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_79), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm b_14 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_79), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = b_14;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  j_79 = t;
                  u_78 :
                  if(match_cons(j_79, sym_Cons_2))
                    {
                      k_79 = ATgetArgument(j_79, 0);
                      l_79 = ATgetArgument(j_79, 1);
                      if(g_79 != NULL && g_79 != k_79)
                        _fail(k_79);
                      else
                        g_79 = k_79;
                      if(h_79 != NULL && h_79 != l_79)
                        _fail(l_79);
                      else
                        h_79 = l_79;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_79), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_78), not_null(g_79)), not_null(h_79)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = z_13;
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
ATerm Arities_0 (ATerm t)
{
  ATerm t_79 = NULL;
  ATerm v_79 = NULL;
  t_79 = t;
  {
    ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(t_79));
    {
      ATerm w_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, w_3);
      w_79 = t;
      r_79 :
      if(match_cons(w_79, sym_Defined_2))
        {
          x_79 = ATgetArgument(w_79, 0);
          y_79 = ATgetArgument(w_79, 1);
          s_79 :
          if(match_string(x_79, "c_0"))
            {
              if(v_79 != NULL && v_79 != y_79)
                _fail(y_79);
              else
                v_79 = y_79;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
    t = not_null(v_79);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL;
  d_80 = t;
  c_80 :
  if(match_cons(d_80, sym_Cons_2))
    {
      e_80 = ATgetArgument(d_80, 0);
      f_80 = ATgetArgument(d_80, 1);
      t = not_null(e_80);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL;
  n_80 = t;
  k_80 :
  if(match_cons(n_80, sym_TCons_2))
    {
      o_80 = ATgetArgument(n_80, 0);
      p_80 = ATgetArgument(n_80, 1);
      l_80 :
      if(match_cons(p_80, sym_TCons_2))
        {
          q_80 = ATgetArgument(p_80, 0);
          r_80 = ATgetArgument(p_80, 1);
          m_80 :
          if(match_cons(r_80, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_80), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_get_0(t);
              t = Hd_0(t);
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
ATerm rewrite_1 (ATerm t, ATerm c_54 (ATerm))
{
  ATerm y_80 = NULL;
  ATerm a_81 = NULL;
  y_80 = t;
  {
    ATerm b_81 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = c_54(t);
    b_81 = t;
    if(a_81 != NULL && a_81 != b_81)
      _fail(b_81);
    else
      a_81 = b_81;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_81), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_80), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_lookup_0(t);
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL;
  l_81 = t;
  i_81 :
  if(match_cons(l_81, sym_TCons_2))
    {
      m_81 = ATgetArgument(l_81, 0);
      n_81 = ATgetArgument(l_81, 1);
      j_81 :
      if(match_cons(n_81, sym_TCons_2))
        {
          o_81 = ATgetArgument(n_81, 0);
          p_81 = ATgetArgument(n_81, 1);
          k_81 :
          if(match_cons(p_81, sym_TNil_0))
            {
              ATerm s_81 = NULL,t_81 = NULL;
              ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(o_81), not_null(m_81));
              {
                ATerm x_3 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, x_3);
                u_81 = t;
                g_81 :
                if(match_cons(u_81, sym_Defined_3))
                  {
                    v_81 = ATgetArgument(u_81, 0);
                    w_81 = ATgetArgument(u_81, 1);
                    x_81 = ATgetArgument(u_81, 2);
                    h_81 :
                    if(match_string(v_81, "b_0"))
                      {
                        if(s_81 != NULL && s_81 != w_81)
                          _fail(w_81);
                        else
                          s_81 = w_81;
                        if(t_81 != NULL && t_81 != x_81)
                          _fail(x_81);
                        else
                          t_81 = x_81;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_81), not_null(t_81));
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
ATerm sort_defs_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL;
    g_82 = t;
    f_82 :
    if(match_cons(g_82, sym_SDef_3))
      {
        h_82 = ATgetArgument(g_82, 0);
        i_82 = ATgetArgument(g_82, 1);
        j_82 = ATgetArgument(g_82, 2);
        {
          ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL;
          ATerm c_14;
          c_14 = t;
          {
            ATerm r_82 = NULL;
            t = not_null(i_82);
            {
              ATerm s_82 = NULL;
              t = length_0(t);
              r_82 = t;
              if(p_82 != NULL && p_82 != r_82)
                _fail(r_82);
              else
                p_82 = r_82;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_82), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm t_82 = NULL,v_82 = NULL;
                ATerm o_14 = t;
                if(PushChoice()==0)
                  {
                    t = Definitions_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = o_14;
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                  }
                s_82 = t;
                if(o_82 != NULL && o_82 != s_82)
                  _fail(s_82);
                else
                  o_82 = s_82;
                {
                  ATerm u_82 = NULL;
                  t = not_null(h_82);
                  {
                    ATerm p_14 = t;
                    if(PushChoice()==0)
                      {
                        t = Arities_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = p_14;
                        t = (ATerm) ATmakeAppl(sym_Nil_0);
                      }
                    u_82 = t;
                    if(t_82 != NULL && t_82 != u_82)
                      _fail(u_82);
                    else
                      t_82 = u_82;
                  }
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_82), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = union_0(t);
                  v_82 = t;
                  if(q_82 != NULL && q_82 != v_82)
                    _fail(v_82);
                  else
                    q_82 = v_82;
                  {
                    ATerm q_14;
                    q_14 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(p_82), not_null(h_82)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(g_82), not_null(o_82)), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm i_4 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
                        return(t);
                      }
                      t = assert_1(t, i_4);
                    }
                    t = q_14;
                    {
                      ATerm r_14;
                      r_14 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_82)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(q_82)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      {
                        ATerm j_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
                          return(t);
                        }
                        t = assert_1(t, j_4);
                      }
                      t = r_14;
                    }
                  }
                }
              }
            }
          }
          t = c_14;
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, y_3);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL;
  f_83 = t;
  c_83 :
  if(match_cons(f_83, sym_TCons_2))
    {
      g_83 = ATgetArgument(f_83, 0);
      h_83 = ATgetArgument(f_83, 1);
      d_83 :
      if(match_cons(h_83, sym_TCons_2))
        {
          i_83 = ATgetArgument(h_83, 0);
          j_83 = ATgetArgument(h_83, 1);
          e_83 :
          if(match_cons(j_83, sym_TNil_0))
            {
              ATerm s_14 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(g_83), not_null(i_83));
                  PopChoice();
                }
              else
                {
                  t = s_14;
                  t = SSL_addr(not_null(g_83), not_null(i_83));
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
  ATerm k_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, k_4, add_0, n_4);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm s_60 (ATerm))
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL;
  q_83 = t;
  p_83 :
  if(match_cons(q_83, sym_Cons_2))
    {
      r_83 = ATgetArgument(q_83, 0);
      s_83 = ATgetArgument(q_83, 1);
      t = s_60(t);
      {
        ATerm o_4 (ATerm t)
        {
          ATerm v_83 = NULL;
          v_83 = t;
          if(r_83 != NULL && r_83 != v_83)
            _fail(v_83);
          else
            r_83 = v_83;
          return(t);
        }
        t = fetch_1(t, o_4);
      }
      t = not_null(s_83);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
  c_84 = t;
  z_83 :
  if(match_cons(c_84, sym_TCons_2))
    {
      d_84 = ATgetArgument(c_84, 0);
      e_84 = ATgetArgument(c_84, 1);
      a_84 :
      if(match_cons(e_84, sym_TCons_2))
        {
          f_84 = ATgetArgument(e_84, 0);
          g_84 = ATgetArgument(e_84, 1);
          b_84 :
          if(match_cons(g_84, sym_TNil_0))
            {
              t = not_null(d_84);
              {
                ATerm k_84 (ATerm t)
                {
                  ATerm t_14 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(f_84);
                      PopChoice();
                    }
                  else
                    {
                      t = t_14;
                      {
                        ATerm u_14 = t;
                        if(PushChoice()==0)
                          {
                            ATerm p_4 (ATerm t)
                            {
                              t = not_null(f_84);
                              return(t);
                            }
                            t = HdMember_1(t, p_4);
                            t = k_84(t);
                            PopChoice();
                          }
                        else
                          {
                            t = u_14;
                            t = Cons_2(t, _id, k_84);
                          }
                      }
                    }
                  return(t);
                }
                t = k_84(t);
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
ATerm foldr_3 (ATerm t, ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm v_59 (ATerm))
{
  ATerm v_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = t_59(t);
      PopChoice();
    }
  else
    {
      t = v_14;
      {
        ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL;
        q_84 = t;
        p_84 :
        if(match_cons(q_84, sym_Cons_2))
          {
            r_84 = ATgetArgument(q_84, 0);
            s_84 = ATgetArgument(q_84, 1);
            {
              ATerm w_84 = NULL,y_84 = NULL;
              ATerm w_14;
              w_14 = t;
              {
                ATerm x_84 = NULL;
                t = not_null(r_84);
                t = v_59(t);
                x_84 = t;
                if(w_84 != NULL && w_84 != x_84)
                  _fail(x_84);
                else
                  w_84 = x_84;
              }
              t = w_14;
              {
                ATerm z_84 = NULL;
                t = not_null(s_84);
                t = foldr_3(t, t_59, u_59, v_59);
                z_84 = t;
                if(y_84 != NULL && y_84 != z_84)
                  _fail(z_84);
                else
                  y_84 = z_84;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_84), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_84), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = u_59(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm definition_names_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL;
    h_85 = t;
    g_85 :
    if(match_cons(h_85, sym_SDef_3))
      {
        i_85 = ATgetArgument(h_85, 0);
        j_85 = ATgetArgument(h_85, 1);
        k_85 = ATgetArgument(h_85, 2);
        {
          ATerm n_85 = NULL;
          ATerm o_85 = NULL;
          t = not_null(j_85);
          t = length_0(t);
          o_85 = t;
          if(n_85 != NULL && n_85 != o_85)
            _fail(o_85);
          else
            n_85 = o_85;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(i_85), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_85), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, q_4, union_0, u_4);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm t_85 = NULL,v_85 = NULL;
  ATerm x_14;
  x_14 = t;
  {
    ATerm u_85 = NULL;
    t = definition_names_0(t);
    u_85 = t;
    if(t_85 != NULL && t_85 != u_85)
      _fail(u_85);
    else
      t_85 = u_85;
  }
  t = x_14;
  {
    ATerm w_85 = NULL;
    t = sort_defs_0(t);
    w_85 = t;
    if(v_85 != NULL && v_85 != w_85)
      _fail(w_85);
    else
      v_85 = w_85;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_85), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_85), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm l_51 (ATerm))
{
  ATerm c_86 = NULL,d_86 = NULL;
  c_86 = t;
  b_86 :
  if(match_cons(c_86, sym_Strategies_1))
    {
      d_86 = ATgetArgument(c_86, 0);
      {
        ATerm f_86 = NULL;
        t = not_null(d_86);
        t = l_51(t);
        f_86 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_86));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_53 (ATerm), ATerm r_53 (ATerm))
{
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
  n_86 = t;
  m_86 :
  if(match_cons(n_86, sym_Cons_2))
    {
      o_86 = ATgetArgument(n_86, 0);
      p_86 = ATgetArgument(n_86, 1);
      {
        ATerm s_86 = NULL;
        t = not_null(o_86);
        {
          ATerm u_86 = NULL;
          t = q_53(t);
          s_86 = t;
          t = not_null(p_86);
          t = r_53(t);
          u_86 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_86), not_null(u_86));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm n_51 (ATerm))
{
  ATerm g_87 = NULL,h_87 = NULL;
  g_87 = t;
  f_87 :
  if(match_cons(g_87, sym_Specification_1))
    {
      h_87 = ATgetArgument(g_87, 0);
      {
        ATerm j_87 = NULL;
        t = not_null(h_87);
        t = n_51(t);
        j_87 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(j_87));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm o_87 = NULL;
  o_87 = t;
  n_87 :
  if(!(match_cons(o_87, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm m_53 (ATerm), ATerm n_53 (ATerm))
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL;
  t_87 = t;
  s_87 :
  if(match_cons(t_87, sym_TCons_2))
    {
      u_87 = ATgetArgument(t_87, 0);
      v_87 = ATgetArgument(t_87, 1);
      {
        ATerm y_87 = NULL;
        t = not_null(u_87);
        {
          ATerm b_88 = NULL;
          t = m_53(t);
          y_87 = t;
          t = not_null(v_87);
          t = n_53(t);
          b_88 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_87), not_null(b_88));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_88 = NULL;
  ATerm y_14;
  y_14 = t;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm j_88 = NULL,k_88 = NULL;
      j_88 = t;
      h_88 :
      if(match_cons(j_88, sym_Program_1))
        {
          k_88 = ATgetArgument(j_88, 0);
          if(i_88 != NULL && i_88 != k_88)
            _fail(k_88);
          else
            i_88 = k_88;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, g_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_88), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = y_14;
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
  ATerm r_88 = NULL,s_88 = NULL;
  ATerm n_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm z_14 = t;
      if(PushChoice()==0)
        {
          ATerm u_5 (ATerm t)
          {
            ATerm t_88 = NULL;
            t_88 = t;
            m_88 :
            if(!(match_cons(t_88, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_5);
          PopChoice();
          _fail(t);
        }
      else
        t = z_14;
      return(t);
    }
    ATerm t_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, s_5, t_5);
    {
      ATerm v_5 (ATerm t)
      {
        ATerm x_5 (ATerm t)
        {
          ATerm u_88 = NULL,v_88 = NULL;
          u_88 = t;
          o_88 :
          if(match_cons(u_88, sym_Runtime_1))
            {
              v_88 = ATgetArgument(u_88, 0);
              if(s_88 != NULL && s_88 != v_88)
                _fail(v_88);
              else
                s_88 = v_88;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, x_5);
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, v_5, w_5);
      {
        ATerm y_5 (ATerm t)
        {
          ATerm e_6 (ATerm t)
          {
            ATerm w_88 = NULL,x_88 = NULL;
            w_88 = t;
            q_88 :
            if(match_cons(w_88, sym_Program_1))
              {
                x_88 = ATgetArgument(w_88, 0);
                if(r_88 != NULL && r_88 != x_88)
                  _fail(x_88);
                else
                  r_88 = x_88;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_6);
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, y_5, d_6);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_88), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_88), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, n_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL;
  e_89 = t;
  b_89 :
  if(match_cons(e_89, sym_TCons_2))
    {
      f_89 = ATgetArgument(e_89, 0);
      g_89 = ATgetArgument(e_89, 1);
      c_89 :
      if(match_cons(g_89, sym_TCons_2))
        {
          h_89 = ATgetArgument(g_89, 0);
          i_89 = ATgetArgument(g_89, 1);
          d_89 :
          if(match_cons(i_89, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(f_89), not_null(h_89));
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
  ATerm q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL;
  q_89 = t;
  n_89 :
  if(match_cons(q_89, sym_TCons_2))
    {
      r_89 = ATgetArgument(q_89, 0);
      s_89 = ATgetArgument(q_89, 1);
      o_89 :
      if(match_cons(s_89, sym_TCons_2))
        {
          t_89 = ATgetArgument(s_89, 0);
          u_89 = ATgetArgument(s_89, 1);
          p_89 :
          if(match_cons(u_89, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(r_89), not_null(t_89));
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
  ATerm c_90 = NULL;
  ATerm a_15;
  a_15 = t;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm b_15 = t;
      if(PushChoice()==0)
        {
          ATerm j_6 (ATerm t)
          {
            ATerm d_90 = NULL,e_90 = NULL;
            d_90 = t;
            z_89 :
            if(match_cons(d_90, sym_Output_1))
              {
                e_90 = ATgetArgument(d_90, 0);
                if(c_90 != NULL && c_90 != e_90)
                  _fail(e_90);
                else
                  c_90 = e_90;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_6);
          PopChoice();
        }
      else
        {
          t = b_15;
          {
            ATerm f_90 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            f_90 = t;
            if(c_90 != NULL && c_90 != f_90)
              _fail(f_90);
            else
              c_90 = f_90;
          }
        }
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_6, i_6);
  }
  t = a_15;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm l_6 (ATerm t)
      {
        ATerm m_6 (ATerm t)
        {
          t = not_null(c_90);
          return(t);
        }
        t = split_2(t, m_6, _id);
        return(t);
      }
      t = TCons_2(t, l_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, k_6);
    {
      ATerm f_15 = t;
      if(PushChoice()==0)
        {
          ATerm n_6 (ATerm t)
          {
            ATerm p_6 (ATerm t)
            {
              ATerm g_90 = NULL;
              g_90 = t;
              b_90 :
              if(!(match_cons(g_90, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, p_6);
            return(t);
          }
          ATerm o_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, n_6, o_6);
          PopChoice();
        }
      else
        {
          t = f_15;
          {
            ATerm v_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, v_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm o_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL;
  ATerm g_15;
  g_15 = t;
  t = dtime_0(t);
  t = g_15;
  t = v_57(t);
  {
    ATerm h_15;
    h_15 = t;
    {
      ATerm p_90 = NULL;
      t = dtime_0(t);
      p_90 = t;
      if(o_90 != NULL && o_90 != p_90)
        _fail(p_90);
      else
        o_90 = p_90;
    }
    t = h_15;
    q_90 = t;
    l_90 :
    if(match_cons(q_90, sym_TCons_2))
      {
        r_90 = ATgetArgument(q_90, 0);
        s_90 = ATgetArgument(q_90, 1);
        m_90 :
        if(match_cons(s_90, sym_TCons_2))
          {
            t_90 = ATgetArgument(s_90, 0);
            u_90 = ATgetArgument(s_90, 1);
            n_90 :
            if(match_cons(u_90, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(o_90)), not_null(r_90)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_90), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_91 = NULL;
  a_91 = t;
  t = SSL_ReadFromFile(not_null(a_91));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm g_91 = NULL;
  ATerm i_91 = NULL,k_91 = NULL;
  g_91 = t;
  {
    ATerm k_15;
    k_15 = t;
    {
      ATerm j_91 = NULL;
      t = not_null(g_91);
      t = j_69(t);
      j_91 = t;
      if(i_91 != NULL && i_91 != j_91)
        _fail(j_91);
      else
        i_91 = j_91;
    }
    t = k_15;
    {
      ATerm l_91 = NULL;
      t = not_null(g_91);
      t = k_69(t);
      l_91 = t;
      if(k_91 != NULL && k_91 != l_91)
        _fail(l_91);
      else
        k_91 = l_91;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_91), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_91 = NULL;
  ATerm l_15;
  l_15 = t;
  {
    ATerm m_15 = t;
    if(PushChoice()==0)
      {
        ATerm w_6 (ATerm t)
        {
          ATerm t_91 = NULL,u_91 = NULL;
          t_91 = t;
          q_91 :
          if(match_cons(t_91, sym_Input_1))
            {
              u_91 = ATgetArgument(t_91, 0);
              if(s_91 != NULL && s_91 != u_91)
                _fail(u_91);
              else
                s_91 = u_91;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, w_6);
        PopChoice();
      }
    else
      {
        t = m_15;
        {
          ATerm v_91 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          v_91 = t;
          if(s_91 != NULL && s_91 != v_91)
            _fail(v_91);
          else
            s_91 = v_91;
        }
      }
  }
  t = l_15;
  {
    ATerm x_6 (ATerm t)
    {
      t = not_null(s_91);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_91 = NULL;
  z_91 = t;
  y_91 :
  if(!(match_cons(z_91, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm z_6 (ATerm t)
  {
    ATerm n_15 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = n_15;
        {
          ATerm o_15 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = o_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_6);
  t = u_57(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_92 = NULL;
  b_92 = t;
  t = SSL_table_create(not_null(b_92));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_92 = NULL;
  f_92 = t;
  {
    ATerm p_15;
    p_15 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_92), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = p_15;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL;
  n_92 = t;
  l_92 :
  if(match_string(n_92, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(n_92, sym_Cons_2))
        {
          o_92 = ATgetArgument(n_92, 0);
          p_92 = ATgetArgument(n_92, 1);
          m_92 :
          if(match_cons(p_92, sym_Cons_2))
            {
              q_92 = ATgetArgument(p_92, 0);
              r_92 = ATgetArgument(p_92, 1);
              {
                ATerm v_92 = NULL;
                ATerm q_15;
                q_15 = t;
                t = not_null(o_92);
                t = g_0(t);
                t = q_15;
                {
                  ATerm w_92 = NULL;
                  t = not_null(q_92);
                  t = h_0(t);
                  w_92 = t;
                  if(v_92 != NULL && v_92 != w_92)
                    _fail(w_92);
                  else
                    v_92 = w_92;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_92), not_null(r_92));
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
  ATerm r_15 = t;
  if(PushChoice()==0)
    {
      ATerm b_7 (ATerm t)
      {
        ATerm l_93 = NULL;
        l_93 = t;
        a_93 :
        if(!(match_string(l_93, "-S")))
          {
            if(!(match_string(l_93, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, b_7, d_7, e_7);
      PopChoice();
    }
  else
    {
      t = r_15;
      {
        ATerm u_15 = t;
        if(PushChoice()==0)
          {
            ATerm f_7 (ATerm t)
            {
              ATerm m_93 = NULL;
              m_93 = t;
              b_93 :
              if(!(match_string(m_93, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm g_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm h_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, f_7, g_7, h_7);
            PopChoice();
          }
        else
          {
            t = u_15;
            {
              ATerm v_15 = t;
              if(PushChoice()==0)
                {
                  ATerm i_7 (ATerm t)
                  {
                    ATerm n_93 = NULL;
                    n_93 = t;
                    c_93 :
                    if(!(match_string(n_93, "-v")))
                      {
                        if(!(match_string(n_93, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm j_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm k_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, i_7, j_7, k_7);
                  PopChoice();
                }
              else
                {
                  t = v_15;
                  {
                    ATerm w_15 = t;
                    if(PushChoice()==0)
                      {
                        ATerm p_7 (ATerm t)
                        {
                          ATerm o_93 = NULL;
                          o_93 = t;
                          d_93 :
                          if(!(match_string(o_93, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm q_7 (ATerm t)
                        {
                          ATerm p_93 = NULL;
                          ATerm q_93 = NULL;
                          q_93 = t;
                          if(p_93 != NULL && p_93 != q_93)
                            _fail(q_93);
                          else
                            p_93 = q_93;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(p_93));
                          return(t);
                        }
                        ATerm s_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, p_7, q_7, s_7);
                        PopChoice();
                      }
                    else
                      {
                        t = w_15;
                        {
                          ATerm x_15 = t;
                          if(PushChoice()==0)
                            {
                              ATerm u_7 (ATerm t)
                              {
                                ATerm r_93 = NULL;
                                r_93 = t;
                                f_93 :
                                if(!(match_string(r_93, "-i")))
                                  {
                                    if(!(match_string(r_93, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm v_7 (ATerm t)
                              {
                                ATerm s_93 = NULL;
                                ATerm t_93 = NULL;
                                t_93 = t;
                                if(s_93 != NULL && s_93 != t_93)
                                  _fail(t_93);
                                else
                                  s_93 = t_93;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_93));
                                return(t);
                              }
                              ATerm w_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, u_7, v_7, w_7);
                              PopChoice();
                            }
                          else
                            {
                              t = x_15;
                              {
                                ATerm y_15 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm x_7 (ATerm t)
                                    {
                                      ATerm u_93 = NULL;
                                      u_93 = t;
                                      h_93 :
                                      if(!(match_string(u_93, "-o")))
                                        {
                                          if(!(match_string(u_93, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm y_7 (ATerm t)
                                    {
                                      ATerm v_93 = NULL;
                                      ATerm w_93 = NULL;
                                      w_93 = t;
                                      if(v_93 != NULL && v_93 != w_93)
                                        _fail(w_93);
                                      else
                                        v_93 = w_93;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_93));
                                      return(t);
                                    }
                                    ATerm d_8 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, x_7, y_7, d_8);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = y_15;
                                    {
                                      ATerm d_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm e_8 (ATerm t)
                                          {
                                            ATerm x_93 = NULL;
                                            x_93 = t;
                                            j_93 :
                                            if(!(match_string(x_93, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm f_8 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm g_8 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, e_8, f_8, g_8);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_16;
                                          {
                                            ATerm h_8 (ATerm t)
                                            {
                                              ATerm y_93 = NULL;
                                              y_93 = t;
                                              k_93 :
                                              if(!(match_string(y_93, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm o_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm p_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, h_8, o_8, p_8);
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
  ATerm d_94 = NULL;
  d_94 = t;
  t = SSL_table_destroy(not_null(d_94));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_94 = NULL;
  h_94 = t;
  t = SSL_exit(not_null(h_94));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_94 = NULL;
  m_94 = t;
  t = SSL_implode_string(not_null(m_94));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_76 (ATerm))
{
  ATerm p_94 (ATerm t)
  {
    ATerm e_16 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, p_94);
        PopChoice();
      }
    else
      {
        t = e_16;
        t = Nil_0(t);
        t = d_76(t);
      }
    return(t);
  }
  t = p_94(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_16 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = f_16;
      {
        ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
        s_94 = t;
        r_94 :
        if(match_cons(s_94, sym_Cons_2))
          {
            t_94 = ATgetArgument(s_94, 0);
            u_94 = ATgetArgument(s_94, 1);
            t = not_null(t_94);
            {
              ATerm q_8 (ATerm t)
              {
                t = not_null(u_94);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, q_8);
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
  ATerm a_95 = NULL;
  a_95 = t;
  t = SSL_explode_string(not_null(a_95));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_56 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm d_95 (ATerm t)
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
        t = Cons_2(t, p_75, d_95);
      }
    return(t);
  }
  t = d_95(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL;
  j_95 = t;
  f_95 :
  if(match_cons(j_95, sym_TCons_2))
    {
      k_95 = ATgetArgument(j_95, 0);
      l_95 = ATgetArgument(j_95, 1);
      g_95 :
      if(match_cons(k_95, sym_Nil_0))
        {
          h_95 :
          if(match_cons(l_95, sym_TCons_2))
            {
              m_95 = ATgetArgument(l_95, 0);
              n_95 = ATgetArgument(l_95, 1);
              i_95 :
              if(match_cons(n_95, sym_TNil_0))
                t = not_null(m_95);
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
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL;
  v_95 = t;
  r_95 :
  if(match_cons(v_95, sym_TCons_2))
    {
      w_95 = ATgetArgument(v_95, 0);
      z_95 = ATgetArgument(v_95, 1);
      s_95 :
      if(match_cons(w_95, sym_Cons_2))
        {
          x_95 = ATgetArgument(w_95, 0);
          y_95 = ATgetArgument(w_95, 1);
          t_95 :
          if(match_cons(z_95, sym_TCons_2))
            {
              a_96 = ATgetArgument(z_95, 0);
              b_96 = ATgetArgument(z_95, 1);
              u_95 :
              if(match_cons(b_96, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_95), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_95), not_null(a_96)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm r_62 (ATerm), ATerm s_62 (ATerm))
{
  ATerm g_96 (ATerm t)
  {
    ATerm h_16 = t;
    if(PushChoice()==0)
      {
        t = r_62(t);
        t = g_96(t);
        PopChoice();
      }
    else
      {
        t = h_16;
        t = s_62(t);
      }
    return(t);
  }
  t = g_96(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_62 (ATerm))
{
  t = repeat_2(t, u_62, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm i_96 = NULL;
  i_96 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_96), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_56 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_48 (ATerm))
{
  ATerm o_96 = NULL,p_96 = NULL;
  o_96 = t;
  n_96 :
  if(match_cons(o_96, sym_Program_1))
    {
      p_96 = ATgetArgument(o_96, 0);
      {
        ATerm r_96 = NULL;
        t = not_null(p_96);
        t = t_48(t);
        r_96 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_96));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm z_96 = NULL;
  ATerm u_8 (ATerm t)
  {
    ATerm v_8 (ATerm t)
    {
      ATerm a_97 = NULL;
      a_97 = t;
      if(z_96 != NULL && z_96 != a_97)
        _fail(a_97);
      else
        z_96 = a_97;
      return(t);
    }
    t = Program_1(t, v_8);
    return(t);
  }
  t = option_defined_1(t, u_8);
  {
    ATerm w_8 (ATerm t)
    {
      ATerm b_97 = NULL;
      ATerm c_97 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm x_8 (ATerm t)
        {
          t = not_null(z_96);
          return(t);
        }
        t = short_description_1(t, x_8);
        t = concat_strings_0(t);
        c_97 = t;
        if(b_97 != NULL && b_97 != c_97)
          _fail(c_97);
        else
          b_97 = c_97;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_97), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, w_8);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm y_8 (ATerm t)
      {
        ATerm d_97 = NULL;
        d_97 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_97), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, y_8);
      {
        ATerm e_9 (ATerm t)
        {
          ATerm f_97 = NULL;
          ATerm g_97 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm f_9 (ATerm t)
            {
              t = not_null(z_96);
              return(t);
            }
            t = long_description_1(t, f_9);
            t = concat_strings_0(t);
            g_97 = t;
            if(f_97 != NULL && f_97 != g_97)
              _fail(g_97);
            else
              f_97 = g_97;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_97), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, e_9);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL;
  p_97 = t;
  m_97 :
  if(match_cons(p_97, sym_TCons_2))
    {
      q_97 = ATgetArgument(p_97, 0);
      r_97 = ATgetArgument(p_97, 1);
      n_97 :
      if(match_cons(r_97, sym_TCons_2))
        {
          s_97 = ATgetArgument(r_97, 0);
          t_97 = ATgetArgument(r_97, 1);
          o_97 :
          if(match_cons(t_97, sym_TNil_0))
            {
              ATerm i_16;
              i_16 = t;
              t = SSL_printnl(not_null(q_97), not_null(s_97));
              t = i_16;
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
ATerm Undefined_1 (ATerm t, ATerm u_48 (ATerm))
{
  ATerm a_98 = NULL,b_98 = NULL;
  a_98 = t;
  z_97 :
  if(match_cons(a_98, sym_Undefined_1))
    {
      b_98 = ATgetArgument(a_98, 0);
      {
        ATerm d_98 = NULL;
        t = not_null(b_98);
        t = u_48(t);
        d_98 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_98));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm h_98 (ATerm t)
  {
    ATerm j_16 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, x_75, _id);
        PopChoice();
      }
    else
      {
        t = j_16;
        t = Cons_2(t, _id, h_98);
      }
    return(t);
  }
  t = h_98(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_56 (ATerm))
{
  t = fetch_1(t, z_56);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_98 = NULL;
  j_98 = t;
  i_98 :
  if(!(match_cons(j_98, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_70 (ATerm))
{
  ATerm n_16 = t;
  if(PushChoice()==0)
    {
      t = b_70(t);
      PopChoice();
    }
  else
    t = n_16;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL;
  o_98 = t;
  l_98 :
  if(match_cons(o_98, sym_TCons_2))
    {
      p_98 = ATgetArgument(o_98, 0);
      q_98 = ATgetArgument(o_98, 1);
      m_98 :
      if(match_cons(q_98, sym_TCons_2))
        {
          r_98 = ATgetArgument(q_98, 0);
          s_98 = ATgetArgument(q_98, 1);
          n_98 :
          if(match_cons(s_98, sym_TNil_0))
            t = SSL_table_get(not_null(p_98), not_null(r_98));
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
  ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL;
  c_99 = t;
  y_98 :
  if(match_cons(c_99, sym_TCons_2))
    {
      d_99 = ATgetArgument(c_99, 0);
      e_99 = ATgetArgument(c_99, 1);
      z_98 :
      if(match_cons(e_99, sym_TCons_2))
        {
          f_99 = ATgetArgument(e_99, 0);
          g_99 = ATgetArgument(e_99, 1);
          a_99 :
          if(match_cons(g_99, sym_TCons_2))
            {
              h_99 = ATgetArgument(g_99, 0);
              i_99 = ATgetArgument(g_99, 1);
              b_99 :
              if(match_cons(i_99, sym_TNil_0))
                {
                  ATerm o_16;
                  o_16 = t;
                  {
                    ATerm m_99 = NULL;
                    ATerm n_99 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_99), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_99), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm p_16 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = p_16;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      n_99 = t;
                      if(m_99 != NULL && m_99 != n_99)
                        _fail(n_99);
                      else
                        m_99 = n_99;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_99), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_99), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_99), not_null(m_99)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = o_16;
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
ATerm register_usage_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm r_99 = NULL;
  ATerm s_99 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = f_56(t);
  s_99 = t;
  if(r_99 != NULL && r_99 != s_99)
    _fail(s_99);
  else
    r_99 = s_99;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_99), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL;
  y_99 = t;
  x_99 :
  if(match_string(y_99, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(y_99, sym_Cons_2))
        {
          z_99 = ATgetArgument(y_99, 0);
          a_100 = ATgetArgument(y_99, 1);
          {
            ATerm d_100 = NULL;
            ATerm q_16;
            q_16 = t;
            t = not_null(z_99);
            t = d_0(t);
            t = q_16;
            {
              ATerm e_100 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              e_100 = t;
              if(d_100 != NULL && d_100 != e_100)
                _fail(e_100);
              else
                d_100 = e_100;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_100), not_null(a_100));
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
  ATerm k_9 (ATerm t)
  {
    ATerm j_100 = NULL;
    j_100 = t;
    i_100 :
    if(!(match_string(j_100, "--help")))
      {
        if(!(match_string(j_100, "-h")))
          {
            if(!(match_string(j_100, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm l_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm m_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, k_9, l_9, m_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL;
  m_100 = t;
  l_100 :
  if(match_cons(m_100, sym_Cons_2))
    {
      n_100 = ATgetArgument(m_100, 0);
      o_100 = ATgetArgument(m_100, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_100)), not_null(o_100));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_56 (ATerm))
{
  ATerm r_16;
  r_16 = t;
  {
    ATerm n_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = d_56(t);
      return(t);
    }
    t = try_1(t, n_9);
  }
  t = r_16;
  {
    ATerm o_9 (ATerm t)
    {
      ATerm t_100 = NULL;
      t_100 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_100));
      return(t);
    }
    ATerm p_9 (ATerm t)
    {
      ATerm t_16 = t;
      if(PushChoice()==0)
        {
          ATerm u_16 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = u_16;
              t = d_56(t);
              t = Cons_2(t, _id, p_9);
            }
          PopChoice();
        }
      else
        {
          t = t_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_9, p_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  ATerm x_16;
  x_16 = t;
  {
    ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL;
    f_101 = t;
    y_100 :
    if(match_cons(f_101, sym_TCons_2))
      {
        g_101 = ATgetArgument(f_101, 0);
        h_101 = ATgetArgument(f_101, 1);
        z_100 :
        if(match_cons(h_101, sym_TCons_2))
          {
            i_101 = ATgetArgument(h_101, 0);
            j_101 = ATgetArgument(h_101, 1);
            a_101 :
            if(match_cons(j_101, sym_TCons_2))
              {
                k_101 = ATgetArgument(j_101, 0);
                l_101 = ATgetArgument(j_101, 1);
                b_101 :
                if(match_cons(l_101, sym_TNil_0))
                  {
                    if(c_101 != NULL && c_101 != g_101)
                      _fail(g_101);
                    else
                      c_101 = g_101;
                    if(d_101 != NULL && d_101 != i_101)
                      _fail(i_101);
                    else
                      d_101 = i_101;
                    if(e_101 != NULL && e_101 != k_101)
                      _fail(k_101);
                    else
                      e_101 = k_101;
                    t = SSL_table_put(not_null(c_101), not_null(d_101), not_null(e_101));
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
  t = x_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_56 (ATerm))
{
  ATerm o_101 = NULL;
  ATerm y_16;
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = y_16;
  {
    ATerm q_9 (ATerm t)
    {
      ATerm z_16 = t;
      if(PushChoice()==0)
        {
          t = c_56(t);
          PopChoice();
        }
      else
        {
          t = z_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_9);
    {
      ATerm r_9 (ATerm t)
      {
        ATerm a_17 = t;
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
            t = a_17;
            {
              ATerm s_9 (ATerm t)
              {
                ATerm t_9 (ATerm t)
                {
                  ATerm p_101 = NULL;
                  p_101 = t;
                  if(o_101 != NULL && o_101 != p_101)
                    _fail(p_101);
                  else
                    o_101 = p_101;
                  return(t);
                }
                t = Undefined_1(t, t_9);
                return(t);
              }
              t = option_defined_1(t, s_9);
              {
                ATerm d_17;
                d_17 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_101), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = d_17;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_9);
      {
        ATerm e_17;
        e_17 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = e_17;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_57 (ATerm), ATerm k_57 (ATerm), ATerm l_57 (ATerm))
{
  ATerm u_9 (ATerm t)
  {
    ATerm h_17 = t;
    if(PushChoice()==0)
      {
        t = k_57(t);
        PopChoice();
      }
    else
      {
        t = h_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_9);
  t = store_options_0(t);
  {
    ATerm i_17 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, l_57);
        PopChoice();
      }
    else
      {
        t = i_17;
        {
          ATerm j_17 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, j_57);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = j_17;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_57 (ATerm), ATerm f_57 (ATerm))
{
  t = iowrap_3(t, e_57, f_57, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_57 (ATerm))
{
  ATerm v_9 (ATerm t)
  {
    ATerm w_9 (ATerm t)
    {
      t = TCons_2(t, b_57, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, w_9);
    return(t);
  }
  t = iowrap_2(t, v_9, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm x_9 (ATerm t)
  {
    ATerm z_9 (ATerm t)
    {
      ATerm a_10 (ATerm t)
      {
        ATerm b_10 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, b_10, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, a_10);
      return(t);
    }
    t = Specification_1(t, z_9);
    return(t);
  }
  t = iowrap_1(t, x_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
