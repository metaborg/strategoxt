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
ATerm Rec_2 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm SDef_3 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm Let_2 (ATerm, ATerm v_53 (ATerm), ATerm w_53 (ATerm));
ATerm sboundin_3 (ATerm, ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm diff_1 (ATerm, ATerm a_68 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_64 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_66 (ATerm), ATerm o_66 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm));
ATerm alltd_1 (ATerm, ATerm l_76 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm substitute_1 (ATerm, ATerm p_77 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm a_54 (ATerm), ATerm b_54 (ATerm));
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
ATerm App_2 (ATerm, ATerm t_51 (ATerm), ATerm u_51 (ATerm));
ATerm Con_3 (ATerm, ATerm q_51 (ATerm), ATerm r_51 (ATerm), ATerm s_51 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm));
ATerm oncetd_1 (ATerm, ATerm x_75 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_74 (ATerm));
ATerm desugar_0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm d_71 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm f_67 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm c_70 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm));
ATerm zip_1 (ATerm, ATerm z_69 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm c_56 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_62 (ATerm), ATerm f_62 (ATerm));
ATerm for_3 (ATerm, ATerm h_62 (ATerm), ATerm i_62 (ATerm), ATerm j_62 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm l_56 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm u_55 (ATerm));
ATerm HdMember_1 (ATerm, ATerm u_67 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm w_55 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm b_53 (ATerm));
ATerm Cons_2 (ATerm, ATerm g_55 (ATerm), ATerm h_55 (ATerm));
ATerm Specification_1 (ATerm, ATerm d_53 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm c_55 (ATerm), ATerm d_55 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_59 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_72 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_57 (ATerm));
ATerm map_1 (ATerm, ATerm m_71 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm n_61 (ATerm), ATerm o_61 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_61 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_57 (ATerm));
ATerm Program_1 (ATerm, ATerm j_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_58 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_73 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_57 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_57 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_57 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm f_59 (ATerm));
ATerm iowrap_2 (ATerm, ATerm y_58 (ATerm), ATerm z_58 (ATerm));
ATerm iowrap_1 (ATerm, ATerm v_58 (ATerm));
ATerm extract_0 (ATerm);
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
                      ATerm o_10 = t;
                      if(PushChoice()==0)
                        {
                          t = MissingDefMod_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = o_10;
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
  ATerm p_10;
  p_10 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = p_10;
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
  ATerm r_10;
  r_10 = t;
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
  t = r_10;
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
                  ATerm s_10 = t;
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
                                ATerm t_10 = t;
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
                                  t = t_10;
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
                      t = s_10;
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
ATerm Rec_2 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm))
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
          t = t_53(t);
          f_6 = t;
          t = not_null(c_6);
          t = u_53(t);
          h_6 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(f_6), not_null(h_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm))
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
          t = x_53(t);
          y_6 = t;
          t = not_null(t_6);
          {
            ATerm c_7 = NULL;
            t = y_53(t);
            a_7 = t;
            t = not_null(u_6);
            t = z_53(t);
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
ATerm Let_2 (ATerm t, ATerm v_53 (ATerm), ATerm w_53 (ATerm))
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
          t = v_53(t);
          r_7 = t;
          t = not_null(o_7);
          t = w_53(t);
          t_7 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_7), not_null(t_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  ATerm u_10 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, i_78, i_78);
      PopChoice();
    }
  else
    {
      t = u_10;
      {
        ATerm d_11 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, k_78, k_78, i_78);
            PopChoice();
          }
        else
          {
            t = d_11;
            t = Rec_2(t, k_78, i_78);
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
ATerm crush_3 (ATerm t, ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  ATerm v_9 = NULL;
  ATerm x_9 = NULL;
  v_9 = t;
  {
    ATerm y_9 = NULL;
    ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
    t = not_null(v_9);
    y_9 = t;
    t = SSL_explode_term(not_null(y_9));
    a_10 = t;
    s_9 :
    if(match_cons(a_10, sym_TCons_2))
      {
        b_10 = ATgetArgument(a_10, 0);
        c_10 = ATgetArgument(a_10, 1);
        t_9 :
        if(match_cons(c_10, sym_TCons_2))
          {
            d_10 = ATgetArgument(c_10, 0);
            e_10 = ATgetArgument(c_10, 1);
            u_9 :
            if(match_cons(e_10, sym_TNil_0))
              {
                if(x_9 != NULL && x_9 != d_10)
                  _fail(d_10);
                else
                  x_9 = d_10;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(x_9);
    t = foldr_3(t, f_68, g_68, h_68);
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym_Cons_2))
    {
      m_10 = ATgetArgument(l_10, 0);
      n_10 = ATgetArgument(l_10, 1);
      t = w_67(t);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm q_10 = NULL;
          q_10 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_10), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_10), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = v_67(t);
          return(t);
        }
        t = fetch_1(t, m_0);
      }
      t = not_null(n_10);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  y_10 = t;
  v_10 :
  if(match_cons(y_10, sym_TCons_2))
    {
      z_10 = ATgetArgument(y_10, 0);
      a_11 = ATgetArgument(y_10, 1);
      w_10 :
      if(match_cons(a_11, sym_TCons_2))
        {
          b_11 = ATgetArgument(a_11, 0);
          c_11 = ATgetArgument(a_11, 1);
          x_10 :
          if(match_cons(c_11, sym_TNil_0))
            {
              t = not_null(z_10);
              {
                ATerm g_11 (ATerm t)
                {
                  ATerm e_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = e_11;
                      {
                        ATerm f_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm n_0 (ATerm t)
                            {
                              t = not_null(b_11);
                              return(t);
                            }
                            t = HdMember_p__2(t, a_68, n_0);
                            t = g_11(t);
                            PopChoice();
                          }
                        else
                          {
                            t = f_11;
                            t = Cons_2(t, _id, g_11);
                          }
                      }
                    }
                  return(t);
                }
                t = g_11(t);
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
ATerm free_vars2_4 (ATerm t, ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_64 (ATerm))
{
  ATerm k_11 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      ATerm h_11 = t;
      if(PushChoice()==0)
        {
          t = f_64(t);
          PopChoice();
        }
      else
        {
          t = h_11;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      ATerm l_11 = t;
      if(PushChoice()==0)
        {
          ATerm i_11 = NULL;
          ATerm m_11;
          m_11 = t;
          {
            ATerm j_11 = NULL;
            t = g_64(t);
            j_11 = t;
            if(i_11 != NULL && i_11 != j_11)
              _fail(j_11);
            else
              i_11 = j_11;
          }
          t = m_11;
          {
            ATerm q_0 (ATerm t)
            {
              ATerm s_0 (ATerm t)
              {
                t = not_null(i_11);
                return(t);
              }
              t = split_2(t, k_11, s_0);
              t = diff_1(t, i_64);
              return(t);
            }
            ATerm r_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = h_64(t, q_0, k_11, r_0);
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
          t = l_11;
          {
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Nil_0);
              return(t);
            }
            t = crush_3(t, u_0, union_0, k_11);
          }
        }
      return(t);
    }
    t = split_2(t, o_0, p_0);
    t = union_0(t);
    return(t);
  }
  t = k_11(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm x_11 = NULL,y_11 = NULL,h_12 = NULL,i_12 = NULL;
    x_11 = t;
    o_11 :
    if(match_cons(x_11, sym_Call_2))
      {
        y_11 = ATgetArgument(x_11, 0);
        i_12 = ATgetArgument(x_11, 1);
        p_11 :
        if(match_cons(y_11, sym_SVar_1))
          {
            h_12 = ATgetArgument(y_11, 0);
            {
              ATerm b_15 = NULL;
              ATerm c_15 = NULL;
              t = not_null(i_12);
              t = length_0(t);
              c_15 = t;
              if(b_15 != NULL && b_15 != c_15)
                _fail(c_15);
              else
                b_15 = c_15;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(h_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_15), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0));
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
    ATerm n_11 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = n_11;
        {
          ATerm q_11 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = q_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
    d_15 = t;
    r_11 :
    if(match_cons(d_15, sym_TCons_2))
      {
        e_15 = ATgetArgument(d_15, 0);
        j_15 = ATgetArgument(d_15, 1);
        s_11 :
        if(match_cons(e_15, sym_TCons_2))
          {
            f_15 = ATgetArgument(e_15, 0);
            g_15 = ATgetArgument(e_15, 1);
            t_11 :
            if(match_cons(g_15, sym_TCons_2))
              {
                h_15 = ATgetArgument(g_15, 0);
                i_15 = ATgetArgument(g_15, 1);
                u_11 :
                if(match_cons(i_15, sym_TNil_0))
                  {
                    v_11 :
                    if(match_cons(j_15, sym_TCons_2))
                      {
                        k_15 = ATgetArgument(j_15, 0);
                        l_15 = ATgetArgument(j_15, 1);
                        w_11 :
                        if(match_cons(l_15, sym_TNil_0))
                          {
                            if(f_15 != NULL && f_15 != k_15)
                              _fail(k_15);
                            else
                              f_15 = k_15;
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
  ATerm y_15 = NULL,z_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  y_15 = t;
  r_15 :
  if(match_cons(y_15, sym_TCons_2))
    {
      z_15 = ATgetArgument(y_15, 0);
      b_16 = ATgetArgument(y_15, 1);
      x_15 :
      if(match_cons(b_16, sym_TCons_2))
        {
          c_16 = ATgetArgument(b_16, 0);
          d_16 = ATgetArgument(b_16, 1);
          t = not_null(c_16);
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
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym_TCons_2))
    {
      o_16 = ATgetArgument(n_16, 0);
      p_16 = ATgetArgument(n_16, 1);
      t = not_null(o_16);
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_66 (ATerm), ATerm o_66 (ATerm))
{
  ATerm z_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = n_66(t);
      PopChoice();
    }
  else
    {
      t = z_11;
      {
        ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
        a_18 = t;
        z_17 :
        if(match_cons(a_18, sym_Cons_2))
          {
            b_18 = ATgetArgument(a_18, 0);
            c_18 = ATgetArgument(a_18, 1);
            {
              ATerm f_18 = NULL;
              ATerm g_18 = NULL;
              t = not_null(c_18);
              t = foldr_2(t, n_66, o_66);
              g_18 = t;
              if(f_18 != NULL && f_18 != g_18)
                _fail(g_18);
              else
                f_18 = g_18;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_18), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = o_66(t);
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
    ATerm l_18 = NULL,n_18 = NULL;
    ATerm a_12;
    a_12 = t;
    {
      ATerm m_18 = NULL;
      t = Fst_0(t);
      m_18 = t;
      if(l_18 != NULL && l_18 != m_18)
        _fail(m_18);
      else
        l_18 = m_18;
    }
    t = a_12;
    {
      ATerm o_18 = NULL;
      t = Snd_0(t);
      o_18 = t;
      if(n_18 != NULL && n_18 != o_18)
        _fail(o_18);
      else
        n_18 = o_18;
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_18), not_null(n_18));
    }
    return(t);
  }
  t = foldr_2(t, y_0, z_0);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  c_19 = t;
  s_18 :
  if(match_cons(c_19, sym_Call_2))
    {
      d_19 = ATgetArgument(c_19, 0);
      f_19 = ATgetArgument(c_19, 1);
      a_19 :
      if(match_cons(d_19, sym_SVar_1))
        {
          e_19 = ATgetArgument(d_19, 0);
          b_19 :
          if(match_cons(f_19, sym_Nil_0))
            t = not_null(e_19);
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
  ATerm q_19 = NULL,r_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  q_19 = t;
  m_19 :
  if(match_cons(q_19, sym_TCons_2))
    {
      r_19 = ATgetArgument(q_19, 0);
      u_19 = ATgetArgument(q_19, 1);
      n_19 :
      if(match_cons(u_19, sym_TCons_2))
        {
          v_19 = ATgetArgument(u_19, 0);
          y_19 = ATgetArgument(u_19, 1);
          o_19 :
          if(match_cons(v_19, sym_Cons_2))
            {
              w_19 = ATgetArgument(v_19, 0);
              x_19 = ATgetArgument(v_19, 1);
              p_19 :
              if(match_cons(y_19, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  l_20 = t;
  d_20 :
  if(match_cons(l_20, sym_TCons_2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      f_20 :
      if(match_cons(n_20, sym_TCons_2))
        {
          o_20 = ATgetArgument(n_20, 0);
          v_20 = ATgetArgument(n_20, 1);
          g_20 :
          if(match_cons(o_20, sym_Cons_2))
            {
              p_20 = ATgetArgument(o_20, 0);
              u_20 = ATgetArgument(o_20, 1);
              h_20 :
              if(match_cons(p_20, sym_TCons_2))
                {
                  q_20 = ATgetArgument(p_20, 0);
                  r_20 = ATgetArgument(p_20, 1);
                  i_20 :
                  if(match_cons(r_20, sym_TCons_2))
                    {
                      s_20 = ATgetArgument(r_20, 0);
                      t_20 = ATgetArgument(r_20, 1);
                      j_20 :
                      if(match_cons(t_20, sym_TNil_0))
                        {
                          k_20 :
                          if(match_cons(v_20, sym_TNil_0))
                            {
                              ATerm g_21 = NULL;
                              if(m_20 != NULL && m_20 != q_20)
                                _fail(q_20);
                              else
                                m_20 = q_20;
                              if(g_21 != NULL && g_21 != s_20)
                                _fail(s_20);
                              else
                                g_21 = s_20;
                              t = not_null(g_21);
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
  ATerm b_12 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = b_12;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm))
{
  ATerm x_21 = NULL;
  ATerm z_21 = NULL,a_22 = NULL;
  x_21 = t;
  {
    ATerm b_22 = NULL;
    t = not_null(x_21);
    {
      ATerm c_22 = NULL;
      t = l_77(t);
      b_22 = t;
      if(z_21 != NULL && z_21 != b_22)
        _fail(b_22);
      else
        z_21 = b_22;
      t = m_77(t);
      c_22 = t;
      if(a_22 != NULL && a_22 != c_22)
        _fail(c_22);
      else
        a_22 = c_22;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_22), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm g_22 (ATerm t)
  {
    ATerm c_12 = t;
    if(PushChoice()==0)
      {
        t = l_76(t);
        PopChoice();
      }
    else
      {
        t = c_12;
        t = _all(t, g_22);
      }
    return(t);
  }
  t = g_22(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  q_22 = t;
  k_22 :
  if(match_cons(q_22, sym_TCons_2))
    {
      r_22 = ATgetArgument(q_22, 0);
      x_22 = ATgetArgument(q_22, 1);
      l_22 :
      if(match_cons(x_22, sym_TCons_2))
        {
          y_22 = ATgetArgument(x_22, 0);
          z_22 = ATgetArgument(x_22, 1);
          o_22 :
          if(match_cons(z_22, sym_TNil_0))
            {
              ATerm d_23 = NULL;
              if(d_23 != NULL && d_23 != y_22)
                _fail(y_22);
              else
                d_23 = y_22;
            }
          else
            {
              if(match_cons(z_22, sym_TCons_2))
                {
                  a_23 = ATgetArgument(z_22, 0);
                  b_23 = ATgetArgument(z_22, 1);
                  p_22 :
                  if(match_cons(b_23, sym_TNil_0))
                    {
                      ATerm l_23 = NULL;
                      ATerm m_23 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      m_23 = t;
                      if(l_23 != NULL && l_23 != m_23)
                        _fail(m_23);
                      else
                        l_23 = m_23;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_23), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  t = subs_args_0(t);
  w_23 = t;
  t_23 :
  if(match_cons(w_23, sym_TCons_2))
    {
      x_23 = ATgetArgument(w_23, 0);
      y_23 = ATgetArgument(w_23, 1);
      u_23 :
      if(match_cons(y_23, sym_TCons_2))
        {
          z_23 = ATgetArgument(y_23, 0);
          a_24 = ATgetArgument(y_23, 1);
          v_23 :
          if(match_cons(a_24, sym_TNil_0))
            {
              t = not_null(z_23);
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = not_null(x_23);
                    return(t);
                  }
                  t = SubsVar_2(t, n_77, b_1);
                  t = o_77(t);
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
ATerm substitute_1 (ATerm t, ATerm p_77 (ATerm))
{
  t = substitute_2(t, p_77, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm a_54 (ATerm), ATerm b_54 (ATerm))
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  h_24 :
  if(match_cons(k_24, sym_VarDec_2))
    {
      l_24 = ATgetArgument(k_24, 0);
      m_24 = ATgetArgument(k_24, 1);
      {
        ATerm q_24 = NULL;
        t = not_null(l_24);
        {
          ATerm s_24 = NULL;
          t = a_54(t);
          q_24 = t;
          t = not_null(m_24);
          t = b_54(t);
          s_24 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_24), not_null(s_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  m_28 = t;
  k_28 :
  if(match_cons(m_28, sym_Cons_2))
    {
      n_28 = ATgetArgument(m_28, 0);
      r_28 = ATgetArgument(m_28, 1);
      l_28 :
      if(match_cons(n_28, sym_SDef_3))
        {
          o_28 = ATgetArgument(n_28, 0);
          p_28 = ATgetArgument(n_28, 1);
          q_28 = ATgetArgument(n_28, 2);
          {
            ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,v_29 = NULL;
            ATerm d_12;
            d_12 = t;
            {
              ATerm z_28 = NULL;
              t = not_null(p_28);
              {
                ATerm h_29 = NULL;
                ATerm c_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, c_1);
                z_28 = t;
                if(w_28 != NULL && w_28 != z_28)
                  _fail(z_28);
                else
                  w_28 = z_28;
                t = not_null(w_28);
                {
                  ATerm u_29 = NULL;
                  ATerm d_1 (ATerm t)
                  {
                    ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
                    a_29 = t;
                    a_25 :
                    if(match_cons(a_29, sym_VarDec_2))
                      {
                        b_29 = ATgetArgument(a_29, 0);
                        c_29 = ATgetArgument(a_29, 1);
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_29)), (ATerm) ATmakeAppl(sym_Nil_0));
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = map_1(t, d_1);
                  h_29 = t;
                  if(x_28 != NULL && x_28 != h_29)
                    _fail(h_29);
                  else
                    x_28 = h_29;
                  t = not_null(m_28);
                  {
                    ATerm e_1 (ATerm t)
                    {
                      ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
                      i_29 = t;
                      h_28 :
                      if(match_cons(i_29, sym_SDef_3))
                        {
                          j_29 = ATgetArgument(i_29, 0);
                          k_29 = ATgetArgument(i_29, 1);
                          l_29 = ATgetArgument(i_29, 2);
                          {
                            ATerm o_29 = NULL;
                            ATerm t_29 = NULL;
                            t = not_null(k_29);
                            {
                              ATerm f_1 (ATerm t)
                              {
                                ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
                                p_29 = t;
                                f_28 :
                                if(match_cons(p_29, sym_VarDec_2))
                                  {
                                    q_29 = ATgetArgument(p_29, 0);
                                    r_29 = ATgetArgument(p_29, 1);
                                    t = not_null(q_29);
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = map_1(t, f_1);
                              t_29 = t;
                              if(o_29 != NULL && o_29 != t_29)
                                _fail(t_29);
                              else
                                o_29 = t_29;
                            }
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_29), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = ssubs_0(t);
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = map_1(t, e_1);
                    u_29 = t;
                    if(y_28 != NULL && y_28 != u_29)
                      _fail(u_29);
                    else
                      y_28 = u_29;
                  }
                }
              }
            }
            t = d_12;
            {
              ATerm w_29 = NULL;
              t = not_null(y_28);
              t = choices_0(t);
              w_29 = t;
              if(v_29 != NULL && v_29 != w_29)
                _fail(w_29);
              else
                v_29 = w_29;
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_28), not_null(w_28), not_null(v_29));
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
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  h_30 :
  if(match_cons(j_30, sym_Cons_2))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      i_30 :
      if(match_cons(l_30, sym_Nil_0))
        t = not_null(k_30);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm e_12 = t;
  if(PushChoice()==0)
    {
      t = JoinDefs1_0(t);
      PopChoice();
    }
  else
    {
      t = e_12;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  w_30 = t;
  q_30 :
  if(match_cons(w_30, sym_TCons_2))
    {
      x_30 = ATgetArgument(w_30, 0);
      c_31 = ATgetArgument(w_30, 1);
      r_30 :
      if(match_cons(x_30, sym_TCons_2))
        {
          y_30 = ATgetArgument(x_30, 0);
          z_30 = ATgetArgument(x_30, 1);
          s_30 :
          if(match_cons(z_30, sym_TCons_2))
            {
              a_31 = ATgetArgument(z_30, 0);
              b_31 = ATgetArgument(z_30, 1);
              t_30 :
              if(match_cons(b_31, sym_TNil_0))
                {
                  u_30 :
                  if(match_cons(c_31, sym_TCons_2))
                    {
                      d_31 = ATgetArgument(c_31, 0);
                      e_31 = ATgetArgument(c_31, 1);
                      v_30 :
                      if(match_cons(e_31, sym_TNil_0))
                        {
                          ATerm i_31 = NULL;
                          ATerm j_31 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_31), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = Definitions_0(t);
                          j_31 = t;
                          if(i_31 != NULL && i_31 != j_31)
                            _fail(j_31);
                          else
                            i_31 = j_31;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_31), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  e_32 = t;
  c_32 :
  if(match_cons(e_32, sym_ExplodeCong_2))
    {
      f_32 = ATgetArgument(e_32, 0);
      d_32 = ATgetArgument(e_32, 1);
      {
        ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
        ATerm m_32 = NULL;
        ATerm n_32 = NULL;
        t = new_0(t);
        m_32 = t;
        if(i_32 != NULL && i_32 != m_32)
          _fail(m_32);
        else
          i_32 = m_32;
        {
          ATerm o_32 = NULL;
          t = new_0(t);
          n_32 = t;
          if(j_32 != NULL && j_32 != n_32)
            _fail(n_32);
          else
            j_32 = n_32;
          {
            ATerm p_32 = NULL;
            t = new_0(t);
            o_32 = t;
            if(k_32 != NULL && k_32 != o_32)
              _fail(o_32);
            else
              k_32 = o_32;
            t = new_0(t);
            p_32 = t;
            if(l_32 != NULL && l_32 != p_32)
              _fail(p_32);
            else
              l_32 = p_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_32), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_32)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(f_32), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_32))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_32), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_32))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_32)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_32)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
      }
    }
  else
    {
      if(match_cons(e_32, sym_Build_1))
        {
          f_32 = ATgetArgument(e_32, 0);
          {
            ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
            ATerm v_32 = NULL;
            ATerm a_33 = NULL;
            t = new_0(t);
            v_32 = t;
            if(t_32 != NULL && t_32 != v_32)
              _fail(v_32);
            else
              t_32 = v_32;
            t = not_null(f_32);
            {
              ATerm g_1 (ATerm t)
              {
                ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
                x_32 = t;
                v_31 :
                if(match_cons(x_32, sym_Explode_2))
                  {
                    y_32 = ATgetArgument(x_32, 0);
                    z_32 = ATgetArgument(x_32, 1);
                    if(r_32 != NULL && r_32 != y_32)
                      _fail(y_32);
                    else
                      r_32 = y_32;
                    if(s_32 != NULL && s_32 != z_32)
                      _fail(z_32);
                    else
                      s_32 = z_32;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_32));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, g_1);
              a_33 = t;
              if(u_32 != NULL && u_32 != a_33)
                _fail(a_33);
              else
                u_32 = a_33;
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_32), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_32), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_32), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_32))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_32)))));
          }
        }
      else
        {
          if(match_cons(e_32, sym_Match_1))
            {
              f_32 = ATgetArgument(e_32, 0);
              {
                ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
                ATerm h_33 = NULL;
                ATerm i_33 = NULL;
                t = new_0(t);
                h_33 = t;
                if(e_33 != NULL && e_33 != h_33)
                  _fail(h_33);
                else
                  e_33 = h_33;
                {
                  ATerm m_33 = NULL;
                  t = new_0(t);
                  i_33 = t;
                  if(f_33 != NULL && f_33 != i_33)
                    _fail(i_33);
                  else
                    f_33 = i_33;
                  t = not_null(f_32);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
                      j_33 = t;
                      a_32 :
                      if(match_cons(j_33, sym_Explode_2))
                        {
                          k_33 = ATgetArgument(j_33, 0);
                          l_33 = ATgetArgument(j_33, 1);
                          if(c_33 != NULL && c_33 != k_33)
                            _fail(k_33);
                          else
                            c_33 = k_33;
                          if(d_33 != NULL && d_33 != l_33)
                            _fail(l_33);
                          else
                            d_33 = l_33;
                          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_33));
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    m_33 = t;
                    if(g_33 != NULL && g_33 != m_33)
                      _fail(m_33);
                    else
                      g_33 = m_33;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_33)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_33))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_33)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_33)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
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
  ATerm l_34 = NULL,m_34 = NULL;
  l_34 = t;
  k_34 :
  if(match_cons(l_34, sym_Match_1))
    {
      m_34 = ATgetArgument(l_34, 0);
      {
        ATerm f_12 = t;
        if(PushChoice()==0)
          {
            ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
            ATerm r_34 = NULL;
            ATerm u_34 = NULL;
            t = new_0(t);
            r_34 = t;
            if(p_34 != NULL && p_34 != r_34)
              _fail(r_34);
            else
              p_34 = r_34;
            t = not_null(m_34);
            {
              ATerm i_1 (ATerm t)
              {
                ATerm s_34 = NULL,t_34 = NULL;
                s_34 = t;
                f_34 :
                if(match_cons(s_34, sym_RootApp_1))
                  {
                    t_34 = ATgetArgument(s_34, 0);
                    if(o_34 != NULL && o_34 != t_34)
                      _fail(t_34);
                    else
                      o_34 = t_34;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_34));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, i_1);
              u_34 = t;
              if(q_34 != NULL && q_34 != u_34)
                _fail(u_34);
              else
                q_34 = u_34;
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_34))), not_null(o_34))));
            PopChoice();
          }
        else
          {
            t = f_12;
            {
              ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
              ATerm g_35 = NULL;
              t = not_null(m_34);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm z_34 = NULL,a_35 = NULL,f_35 = NULL;
                  z_34 = t;
                  i_34 :
                  if(match_cons(z_34, sym_App_2))
                    {
                      a_35 = ATgetArgument(z_34, 0);
                      f_35 = ATgetArgument(z_34, 1);
                      if(w_34 != NULL && w_34 != a_35)
                        _fail(a_35);
                      else
                        w_34 = a_35;
                      if(x_34 != NULL && x_34 != f_35)
                        _fail(f_35);
                      else
                        x_34 = f_35;
                      t = (ATerm) ATmakeAppl(sym_Wld_0);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, j_1);
                g_35 = t;
                if(y_34 != NULL && y_34 != g_35)
                  _fail(g_35);
                else
                  y_34 = g_35;
              }
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_34)), (ATerm) ATmakeAppl(sym_BA_2, not_null(w_34), not_null(x_34)));
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
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  d_36 = t;
  x_35 :
  if(match_cons(d_36, sym_Match_1))
    {
      e_36 = ATgetArgument(d_36, 0);
      c_36 :
      if(match_cons(e_36, sym_RootApp_1))
        {
          f_36 = ATgetArgument(e_36, 0);
          t = not_null(f_36);
        }
      else
        {
          if(match_cons(e_36, sym_App_2))
            {
              f_36 = ATgetArgument(e_36, 0);
              g_36 = ATgetArgument(e_36, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(f_36), not_null(g_36));
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
  ATerm e_37 = NULL,f_37 = NULL;
  e_37 = t;
  d_37 :
  if(match_cons(e_37, sym_Match_1))
    {
      f_37 = ATgetArgument(e_37, 0);
      {
        ATerm h_37 = NULL,i_37 = NULL;
        ATerm q_37 = NULL;
        t = not_null(f_37);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm j_37 = NULL,k_37 = NULL,p_37 = NULL;
            j_37 = t;
            z_36 :
            if(match_cons(j_37, sym_RootApp_1))
              {
                k_37 = ATgetArgument(j_37, 0);
                a_37 :
                if(match_cons(k_37, sym_Match_1))
                  {
                    p_37 = ATgetArgument(k_37, 0);
                    if(h_37 != NULL && h_37 != p_37)
                      _fail(p_37);
                    else
                      h_37 = p_37;
                    t = not_null(h_37);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, k_1);
          q_37 = t;
          if(i_37 != NULL && i_37 != q_37)
            _fail(q_37);
          else
            i_37 = q_37;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(i_37));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym_Build_1))
    {
      i_38 = ATgetArgument(h_38, 0);
      {
        ATerm g_12 = t;
        if(PushChoice()==0)
          {
            ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
            ATerm n_38 = NULL;
            ATerm q_38 = NULL;
            t = new_0(t);
            n_38 = t;
            if(l_38 != NULL && l_38 != n_38)
              _fail(n_38);
            else
              l_38 = n_38;
            t = not_null(i_38);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm o_38 = NULL,p_38 = NULL;
                o_38 = t;
                a_38 :
                if(match_cons(o_38, sym_RootApp_1))
                  {
                    p_38 = ATgetArgument(o_38, 0);
                    if(k_38 != NULL && k_38 != p_38)
                      _fail(p_38);
                    else
                      k_38 = p_38;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_38));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, l_1);
              q_38 = t;
              if(m_38 != NULL && m_38 != q_38)
                _fail(q_38);
              else
                m_38 = q_38;
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_38), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_38), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_38))));
            PopChoice();
          }
        else
          {
            t = g_12;
            {
              ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
              ATerm w_38 = NULL;
              ATerm a_39 = NULL;
              t = new_0(t);
              w_38 = t;
              if(u_38 != NULL && u_38 != w_38)
                _fail(w_38);
              else
                u_38 = w_38;
              t = not_null(i_38);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
                  x_38 = t;
                  e_38 :
                  if(match_cons(x_38, sym_App_2))
                    {
                      y_38 = ATgetArgument(x_38, 0);
                      z_38 = ATgetArgument(x_38, 1);
                      if(s_38 != NULL && s_38 != y_38)
                        _fail(y_38);
                      else
                        s_38 = y_38;
                      if(t_38 != NULL && t_38 != z_38)
                        _fail(z_38);
                      else
                        t_38 = z_38;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_38));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, m_1);
                a_39 = t;
                if(v_38 != NULL && v_38 != a_39)
                  _fail(a_39);
                else
                  v_38 = a_39;
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_38), not_null(t_38), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_38)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_38))));
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
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  p_39 = t;
  n_39 :
  if(match_cons(p_39, sym_Build_1))
    {
      q_39 = ATgetArgument(p_39, 0);
      o_39 :
      if(match_cons(q_39, sym_RootApp_1))
        {
          r_39 = ATgetArgument(q_39, 0);
          t = not_null(r_39);
        }
      else
        {
          if(match_cons(q_39, sym_App_2))
            {
              r_39 = ATgetArgument(q_39, 0);
              s_39 = ATgetArgument(q_39, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_39)), not_null(r_39));
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
  ATerm j_40 = NULL,k_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym_Build_1))
    {
      k_40 = ATgetArgument(j_40, 0);
      {
        ATerm j_12 = t;
        if(PushChoice()==0)
          {
            ATerm m_40 = NULL,n_40 = NULL;
            ATerm w_40 = NULL;
            t = not_null(k_40);
            {
              ATerm n_1 (ATerm t)
              {
                ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
                t_40 = t;
                b_40 :
                if(match_cons(t_40, sym_RootApp_1))
                  {
                    u_40 = ATgetArgument(t_40, 0);
                    c_40 :
                    if(match_cons(u_40, sym_Build_1))
                      {
                        v_40 = ATgetArgument(u_40, 0);
                        if(m_40 != NULL && m_40 != v_40)
                          _fail(v_40);
                        else
                          m_40 = v_40;
                        t = not_null(m_40);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, n_1);
              w_40 = t;
              if(n_40 != NULL && n_40 != w_40)
                _fail(w_40);
              else
                n_40 = w_40;
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_40));
            PopChoice();
          }
        else
          {
            t = j_12;
            {
              ATerm y_40 = NULL,z_40 = NULL,f_41 = NULL;
              ATerm o_41 = NULL;
              t = not_null(k_40);
              {
                ATerm o_1 (ATerm t)
                {
                  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
                  g_41 = t;
                  f_40 :
                  if(match_cons(g_41, sym_App_2))
                    {
                      h_41 = ATgetArgument(g_41, 0);
                      j_41 = ATgetArgument(g_41, 1);
                      g_40 :
                      if(match_cons(h_41, sym_Build_1))
                        {
                          i_41 = ATgetArgument(h_41, 0);
                          if(z_40 != NULL && z_40 != i_41)
                            _fail(i_41);
                          else
                            z_40 = i_41;
                          if(y_40 != NULL && y_40 != j_41)
                            _fail(j_41);
                          else
                            y_40 = j_41;
                          t = not_null(z_40);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, o_1);
                o_41 = t;
                if(f_41 != NULL && f_41 != o_41)
                  _fail(o_41);
                else
                  f_41 = o_41;
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(f_41));
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
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,k_43 = NULL,l_43 = NULL;
  k_43 = t;
  r_42 :
  if(match_cons(k_43, sym_InfixApp_3))
    {
      l_43 = ATgetArgument(k_43, 0);
      g_43 = ATgetArgument(k_43, 1);
      f_43 = ATgetArgument(k_43, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_43), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_43), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_43), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
    }
  else
    {
      if(match_cons(k_43, sym_BAM_3))
        {
          l_43 = ATgetArgument(k_43, 0);
          g_43 = ATgetArgument(k_43, 1);
          f_43 = ATgetArgument(k_43, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_43)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_43), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_43)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(k_43, sym_AM_2))
            {
              l_43 = ATgetArgument(k_43, 0);
              g_43 = ATgetArgument(k_43, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_43), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_43)));
            }
          else
            {
              if(match_cons(k_43, sym_MA_2))
                {
                  l_43 = ATgetArgument(k_43, 0);
                  g_43 = ATgetArgument(k_43, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_43)), not_null(g_43));
                }
              else
                {
                  if(match_cons(k_43, sym_BA_2))
                    {
                      l_43 = ATgetArgument(k_43, 0);
                      g_43 = ATgetArgument(k_43, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_43)), not_null(l_43));
                    }
                  else
                    {
                      if(match_cons(k_43, sym_Lets_2))
                        {
                          l_43 = ATgetArgument(k_43, 0);
                          g_43 = ATgetArgument(k_43, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_43), not_null(g_43));
                        }
                      else
                        {
                          if(match_cons(k_43, sym_LChoices_1))
                            {
                              l_43 = ATgetArgument(k_43, 0);
                              s_42 :
                              if(match_cons(l_43, sym_Cons_2))
                                {
                                  h_43 = ATgetArgument(l_43, 0);
                                  i_43 = ATgetArgument(l_43, 1);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_43), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(i_43)));
                                }
                              else
                                {
                                  if(match_cons(l_43, sym_Nil_0))
                                    t = (ATerm) ATmakeAppl(sym_Fail_0);
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(k_43, sym_Choices_1))
                                {
                                  l_43 = ATgetArgument(k_43, 0);
                                  t_42 :
                                  if(match_cons(l_43, sym_Cons_2))
                                    {
                                      h_43 = ATgetArgument(l_43, 0);
                                      i_43 = ATgetArgument(l_43, 1);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_43), (ATerm) ATmakeAppl(sym_Choices_1, not_null(i_43)));
                                    }
                                  else
                                    {
                                      if(match_cons(l_43, sym_Nil_0))
                                        t = (ATerm) ATmakeAppl(sym_Fail_0);
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(k_43, sym_Seqs_1))
                                    {
                                      l_43 = ATgetArgument(k_43, 0);
                                      e_43 :
                                      if(match_cons(l_43, sym_Cons_2))
                                        {
                                          h_43 = ATgetArgument(l_43, 0);
                                          i_43 = ATgetArgument(l_43, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_43), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_43)));
                                        }
                                      else
                                        {
                                          if(match_cons(l_43, sym_Nil_0))
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
  ATerm h_45 = NULL;
  h_45 = t;
  g_45 :
  if(!(match_cons(h_45, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm k_12 = t;
  if(PushChoice()==0)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm l_12 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = l_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, p_1);
      PopChoice();
      _fail(t);
    }
  else
    t = k_12;
  return(t);
}
ATerm App_2 (ATerm t, ATerm t_51 (ATerm), ATerm u_51 (ATerm))
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
  m_45 = t;
  l_45 :
  if(match_cons(m_45, sym_App_2))
    {
      n_45 = ATgetArgument(m_45, 0);
      o_45 = ATgetArgument(m_45, 1);
      {
        ATerm r_45 = NULL;
        t = not_null(n_45);
        {
          ATerm t_45 = NULL;
          t = t_51(t);
          r_45 = t;
          t = not_null(o_45);
          t = u_51(t);
          t_45 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(r_45), not_null(t_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm q_51 (ATerm), ATerm r_51 (ATerm), ATerm s_51 (ATerm))
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
  d_46 = t;
  c_46 :
  if(match_cons(d_46, sym_Con_3))
    {
      e_46 = ATgetArgument(d_46, 0);
      f_46 = ATgetArgument(d_46, 1);
      g_46 = ATgetArgument(d_46, 2);
      {
        ATerm k_46 = NULL;
        t = not_null(e_46);
        {
          ATerm m_46 = NULL;
          t = q_51(t);
          k_46 = t;
          t = not_null(f_46);
          {
            ATerm o_46 = NULL;
            t = r_51(t);
            m_46 = t;
            t = not_null(g_46);
            t = s_51(t);
            o_46 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(k_46), not_null(m_46), not_null(o_46));
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
  ATerm m_12 = t;
  if(PushChoice()==0)
    {
      ATerm q_1 (ATerm t)
      {
        ATerm n_12 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = n_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, q_1);
      PopChoice();
      _fail(t);
    }
  else
    t = m_12;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  y_46 = t;
  w_46 :
  if(match_cons(y_46, sym_SRule_1))
    {
      z_46 = ATgetArgument(y_46, 0);
      x_46 :
      if(match_cons(z_46, sym_StratRule_3))
        {
          a_47 = ATgetArgument(z_46, 0);
          b_47 = ATgetArgument(z_46, 1);
          c_47 = ATgetArgument(z_46, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(c_47)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_47), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(z_46, sym_Rule_3))
            {
              a_47 = ATgetArgument(z_46, 0);
              b_47 = ATgetArgument(z_46, 1);
              c_47 = ATgetArgument(z_46, 2);
              t = not_null(a_47);
              t = pureterm_0(t);
              t = not_null(b_47);
              t = buildterm_0(t);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_47)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(c_47)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_47)), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm))
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym_Scope_2))
    {
      q_47 = ATgetArgument(p_47, 0);
      r_47 = ATgetArgument(p_47, 1);
      {
        ATerm u_47 = NULL;
        t = not_null(q_47);
        {
          ATerm w_47 = NULL;
          t = x_54(t);
          u_47 = t;
          t = not_null(r_47);
          t = y_54(t);
          w_47 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_47), not_null(w_47));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm b_48 (ATerm t)
  {
    ATerm o_12 = t;
    if(PushChoice()==0)
      {
        t = x_75(t);
        PopChoice();
      }
    else
      {
        t = o_12;
        t = _one(t, b_48);
      }
    return(t);
  }
  t = b_48(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  q_48 = t;
  o_48 :
  if(match_cons(q_48, sym_SRule_1))
    {
      r_48 = ATgetArgument(q_48, 0);
      p_48 :
      if(match_cons(r_48, sym_Rule_3))
        {
          s_48 = ATgetArgument(r_48, 0);
          t_48 = ATgetArgument(r_48, 1);
          u_48 = ATgetArgument(r_48, 2);
          {
            ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
            ATerm g_49 = NULL;
            ATerm m_49 = NULL;
            t = new_0(t);
            g_49 = t;
            if(d_49 != NULL && d_49 != g_49)
              _fail(g_49);
            else
              d_49 = g_49;
            t = not_null(s_48);
            {
              ATerm u_49 = NULL;
              ATerm r_1 (ATerm t)
              {
                ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
                h_49 = t;
                f_48 :
                if(match_cons(h_49, sym_Con_3))
                  {
                    i_49 = ATgetArgument(h_49, 0);
                    k_49 = ATgetArgument(h_49, 1);
                    l_49 = ATgetArgument(h_49, 2);
                    g_48 :
                    if(match_cons(i_49, sym_Var_1))
                      {
                        j_49 = ATgetArgument(i_49, 0);
                        if(c_49 != NULL && c_49 != j_49)
                          _fail(j_49);
                        else
                          c_49 = j_49;
                        if(a_49 != NULL && a_49 != k_49)
                          _fail(k_49);
                        else
                          a_49 = k_49;
                        if(y_48 != NULL && y_48 != l_49)
                          _fail(l_49);
                        else
                          y_48 = l_49;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_49));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, r_1);
              m_49 = t;
              if(e_49 != NULL && e_49 != m_49)
                _fail(m_49);
              else
                e_49 = m_49;
              t = not_null(t_48);
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
                  n_49 = t;
                  j_48 :
                  if(match_cons(n_49, sym_Con_3))
                    {
                      o_49 = ATgetArgument(n_49, 0);
                      q_49 = ATgetArgument(n_49, 1);
                      r_49 = ATgetArgument(n_49, 2);
                      k_48 :
                      if(match_cons(o_49, sym_Var_1))
                        {
                          p_49 = ATgetArgument(o_49, 0);
                          l_48 :
                          if(match_cons(r_49, sym_Call_2))
                            {
                              s_49 = ATgetArgument(r_49, 0);
                              t_49 = ATgetArgument(r_49, 1);
                              m_48 :
                              if(match_cons(t_49, sym_Nil_0))
                                {
                                  if(c_49 != NULL && c_49 != p_49)
                                    _fail(p_49);
                                  else
                                    c_49 = p_49;
                                  if(b_49 != NULL && b_49 != q_49)
                                    _fail(q_49);
                                  else
                                    b_49 = q_49;
                                  if(z_48 != NULL && z_48 != s_49)
                                    _fail(s_49);
                                  else
                                    z_48 = s_49;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_49));
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
                u_49 = t;
                if(f_49 != NULL && f_49 != u_49)
                  _fail(u_49);
                else
                  f_49 = u_49;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_49), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_49), not_null(f_49), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_48), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(z_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_49), not_null(b_49), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_49)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_49)))))));
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
    ATerm p_12 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = p_12;
        {
          ATerm q_12 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = q_12;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, t_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm c_50 (ATerm t)
  {
    t = h_74(t);
    t = _all(t, c_50);
    return(t);
  }
  t = c_50(t);
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
        ATerm r_12 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = r_12;
            {
              ATerm s_12 = t;
              if(PushChoice()==0)
                {
                  ATerm t_12 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = t_12;
                      {
                        ATerm u_12 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = u_12;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = s_12;
                  {
                    ATerm v_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm w_12 = t;
                        if(PushChoice()==0)
                          {
                            t = Mapp0_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = w_12;
                            {
                              ATerm x_12 = t;
                              if(PushChoice()==0)
                                {
                                  t = Mapp1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = x_12;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        PopChoice();
                      }
                    else
                      {
                        t = v_12;
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
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  f_50 = t;
  e_50 :
  if(match_cons(f_50, sym_TCons_2))
    {
      g_50 = ATgetArgument(f_50, 0);
      h_50 = ATgetArgument(f_50, 1);
      t = not_null(h_50);
    }
  else
    _fail(t);
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  o_50 :
  if(match_cons(p_50, sym_TCons_2))
    {
      q_50 = ATgetArgument(p_50, 0);
      r_50 = ATgetArgument(p_50, 1);
      t = not_null(q_50);
    }
  else
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm d_71 (ATerm))
{
  ATerm g_51 (ATerm t)
  {
    ATerm y_12 = t;
    if(PushChoice()==0)
      {
        ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
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
            t = TCons_2(t, g_51, TNil_0);
            return(t);
          }
          t = TCons_2(t, d_71, y_1);
          z_50 = t;
          w_50 :
          if(match_cons(z_50, sym_TCons_2))
            {
              a_51 = ATgetArgument(z_50, 0);
              b_51 = ATgetArgument(z_50, 1);
              x_50 :
              if(match_cons(b_51, sym_TCons_2))
                {
                  c_51 = ATgetArgument(b_51, 0);
                  d_51 = ATgetArgument(b_51, 1);
                  y_50 :
                  if(match_cons(d_51, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_51), not_null(c_51));
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
        t = y_12;
        t = map_1(t, TNil_0);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
      }
    return(t);
  }
  t = g_51(t);
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm m_51 = NULL;
  ATerm o_51 = NULL,p_51 = NULL,v_51 = NULL;
  m_51 = t;
  {
    ATerm w_51 = NULL;
    ATerm x_51 = NULL;
    t = new_0(t);
    w_51 = t;
    if(o_51 != NULL && o_51 != w_51)
      _fail(w_51);
    else
      o_51 = w_51;
    {
      ATerm y_51 = NULL;
      t = new_0(t);
      x_51 = t;
      if(p_51 != NULL && p_51 != x_51)
        _fail(x_51);
      else
        p_51 = x_51;
      t = new_0(t);
      y_51 = t;
      if(v_51 != NULL && v_51 != y_51)
        _fail(y_51);
      else
        v_51 = y_51;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_51)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_51)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_51), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_51))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_51), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_51)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_51), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_51)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
  h_52 = t;
  e_52 :
  if(match_cons(h_52, sym_TCons_2))
    {
      i_52 = ATgetArgument(h_52, 0);
      j_52 = ATgetArgument(h_52, 1);
      f_52 :
      if(match_cons(j_52, sym_TCons_2))
        {
          k_52 = ATgetArgument(j_52, 0);
          l_52 = ATgetArgument(j_52, 1);
          g_52 :
          if(match_cons(l_52, sym_TNil_0))
            {
              ATerm z_12 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(i_52), not_null(k_52));
                  PopChoice();
                }
              else
                {
                  t = z_12;
                  t = SSL_subtr(not_null(i_52), not_null(k_52));
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
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
  t_52 = t;
  q_52 :
  if(match_cons(t_52, sym_TCons_2))
    {
      u_52 = ATgetArgument(t_52, 0);
      v_52 = ATgetArgument(t_52, 1);
      r_52 :
      if(match_cons(v_52, sym_TCons_2))
        {
          w_52 = ATgetArgument(v_52, 0);
          x_52 = ATgetArgument(v_52, 1);
          s_52 :
          if(match_cons(x_52, sym_TNil_0))
            {
              ATerm a_13;
              a_13 = t;
              {
                ATerm b_13 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(u_52), not_null(w_52));
                    PopChoice();
                  }
                else
                  {
                    t = b_13;
                    t = SSL_gtr(not_null(u_52), not_null(w_52));
                  }
              }
              t = a_13;
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
  ATerm h_53 = NULL;
  ATerm c_13 = t;
  if(PushChoice()==0)
    {
      ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
      i_53 = t;
      e_53 :
      if(match_cons(i_53, sym_TCons_2))
        {
          j_53 = ATgetArgument(i_53, 0);
          k_53 = ATgetArgument(i_53, 1);
          f_53 :
          if(match_cons(k_53, sym_TCons_2))
            {
              l_53 = ATgetArgument(k_53, 0);
              m_53 = ATgetArgument(k_53, 1);
              g_53 :
              if(match_cons(m_53, sym_TNil_0))
                {
                  if(h_53 != NULL && h_53 != j_53)
                    _fail(j_53);
                  else
                    h_53 = j_53;
                  if(h_53 != NULL && h_53 != l_53)
                    _fail(l_53);
                  else
                    h_53 = l_53;
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
      t = c_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
    o_54 = t;
    p_53 :
    if(match_cons(o_54, sym_TCons_2))
      {
        p_54 = ATgetArgument(o_54, 0);
        q_54 = ATgetArgument(o_54, 1);
        q_53 :
        if(match_cons(q_54, sym_TCons_2))
          {
            r_54 = ATgetArgument(q_54, 0);
            s_54 = ATgetArgument(q_54, 1);
            r_53 :
            if(match_cons(s_54, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_54), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
    ATerm v_54 = NULL,w_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,e_55 = NULL,f_55 = NULL;
    v_54 = t;
    c_54 :
    if(match_cons(v_54, sym_TCons_2))
      {
        w_54 = ATgetArgument(v_54, 0);
        z_54 = ATgetArgument(v_54, 1);
        d_54 :
        if(match_int(w_54, 0))
          {
            e_54 :
            if(match_cons(z_54, sym_TCons_2))
              {
                a_55 = ATgetArgument(z_54, 0);
                b_55 = ATgetArgument(z_54, 1);
                f_54 :
                if(match_cons(b_55, sym_TCons_2))
                  {
                    e_55 = ATgetArgument(b_55, 0);
                    f_55 = ATgetArgument(b_55, 1);
                    g_54 :
                    if(match_cons(f_55, sym_TNil_0))
                      t = not_null(e_55);
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
    ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
    k_55 = t;
    k_54 :
    if(match_cons(k_55, sym_TCons_2))
      {
        l_55 = ATgetArgument(k_55, 0);
        m_55 = ATgetArgument(k_55, 1);
        l_54 :
        if(match_cons(m_55, sym_TCons_2))
          {
            o_55 = ATgetArgument(m_55, 0);
            p_55 = ATgetArgument(m_55, 1);
            m_54 :
            if(match_cons(p_55, sym_TCons_2))
              {
                q_55 = ATgetArgument(p_55, 0);
                r_55 = ATgetArgument(p_55, 1);
                n_54 :
                if(match_cons(r_55, sym_TNil_0))
                  {
                    ATerm x_55 = NULL,z_55 = NULL;
                    ATerm d_13;
                    d_13 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = d_13;
                    {
                      ATerm e_13;
                      e_13 = t;
                      {
                        ATerm y_55 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = subt_0(t);
                        y_55 = t;
                        if(x_55 != NULL && x_55 != y_55)
                          _fail(y_55);
                        else
                          x_55 = y_55;
                      }
                      t = e_13;
                      {
                        ATerm d_56 = NULL;
                        t = not_null(o_55);
                        t = f_67(t);
                        d_56 = t;
                        if(z_55 != NULL && z_55 != d_56)
                          _fail(d_56);
                        else
                          z_55 = d_56;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_55), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_55), not_null(q_55)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  t_56 = t;
  q_56 :
  if(match_cons(t_56, sym_TCons_2))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      r_56 :
      if(match_cons(v_56, sym_TCons_2))
        {
          w_56 = ATgetArgument(v_56, 0);
          x_56 = ATgetArgument(v_56, 1);
          s_56 :
          if(match_cons(x_56, sym_TNil_0))
            {
              ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
              ATerm d_57 = NULL;
              ATerm e_57 = NULL;
              t = new_0(t);
              d_57 = t;
              if(a_57 != NULL && a_57 != d_57)
                _fail(d_57);
              else
                a_57 = d_57;
              {
                ATerm f_57 = NULL;
                t = new_0(t);
                e_57 = t;
                if(b_57 != NULL && b_57 != e_57)
                  _fail(e_57);
                else
                  b_57 = e_57;
                t = new_0(t);
                f_57 = t;
                if(c_57 != NULL && c_57 != f_57)
                  _fail(f_57);
                else
                  c_57 = f_57;
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_57)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_57)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_56)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_57)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_56)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(a_57), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_57), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_57)), (ATerm) ATmakeAppl(sym_TNil_0)))))));
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
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  p_57 = t;
  l_57 :
  if(match_cons(p_57, sym_TCons_2))
    {
      q_57 = ATgetArgument(p_57, 0);
      r_57 = ATgetArgument(p_57, 1);
      m_57 :
      if(match_cons(r_57, sym_TCons_2))
        {
          s_57 = ATgetArgument(r_57, 0);
          t_57 = ATgetArgument(r_57, 1);
          n_57 :
          if(match_cons(s_57, sym_Nil_0))
            {
              o_57 :
              if(match_cons(t_57, sym_TNil_0))
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
ATerm zipr_1 (ATerm t, ATerm c_70 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, c_70);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
  d_58 = t;
  c_58 :
  if(match_cons(d_58, sym_Cons_2))
    {
      e_58 = ATgetArgument(d_58, 0);
      f_58 = ATgetArgument(d_58, 1);
      t = not_null(f_58);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
  m_58 = t;
  k_58 :
  if(match_cons(m_58, sym_Cons_2))
    {
      n_58 = ATgetArgument(m_58, 0);
      o_58 = ATgetArgument(m_58, 1);
      l_58 :
      if(match_cons(o_58, sym_Nil_0))
        t = not_null(n_58);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm f_13 = t;
  if(PushChoice()==0)
    {
      t = Last_0(t);
      PopChoice();
    }
  else
    {
      t = f_13;
      t = Tl_0(t);
      t = last_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL;
  ATerm j_63 (ATerm t)
  {
    ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,z_61 = NULL;
    ATerm g_13;
    g_13 = t;
    {
      ATerm c_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
      ATerm d_61 = NULL;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = add_0(t);
      d_61 = t;
      if(c_61 != NULL && c_61 != d_61)
        _fail(d_61);
      else
        c_61 = d_61;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, new_0);
      e_61 = t;
      n_59 :
      if(match_cons(e_61, sym_Cons_2))
        {
          f_61 = ATgetArgument(e_61, 0);
          g_61 = ATgetArgument(e_61, 1);
          {
            ATerm h_61 = NULL;
            if(u_60 != NULL && u_60 != f_61)
              _fail(f_61);
            else
              u_60 = f_61;
            if(v_60 != NULL && v_60 != g_61)
              _fail(g_61);
            else
              v_60 = g_61;
            t = not_null(v_60);
            {
              ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
              t = last_0(t);
              h_61 = t;
              if(t_60 != NULL && t_60 != h_61)
                _fail(h_61);
              else
                t_60 = h_61;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_60), not_null(v_60)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_60), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = zipr_1(t, MkThreadApplication_0);
              t = tuple_unzip_1(t, _id);
              i_61 = t;
              g_59 :
              if(match_cons(i_61, sym_TCons_2))
                {
                  j_61 = ATgetArgument(i_61, 0);
                  k_61 = ATgetArgument(i_61, 1);
                  h_59 :
                  if(match_cons(k_61, sym_TCons_2))
                    {
                      l_61 = ATgetArgument(k_61, 0);
                      m_61 = ATgetArgument(k_61, 1);
                      i_59 :
                      if(match_cons(m_61, sym_TCons_2))
                        {
                          r_61 = ATgetArgument(m_61, 0);
                          s_61 = ATgetArgument(m_61, 1);
                          j_59 :
                          if(match_cons(s_61, sym_TCons_2))
                            {
                              t_61 = ATgetArgument(s_61, 0);
                              u_61 = ATgetArgument(s_61, 1);
                              k_59 :
                              if(match_cons(u_61, sym_TCons_2))
                                {
                                  v_61 = ATgetArgument(u_61, 0);
                                  w_61 = ATgetArgument(u_61, 1);
                                  l_59 :
                                  if(match_cons(w_61, sym_TCons_2))
                                    {
                                      x_61 = ATgetArgument(w_61, 0);
                                      y_61 = ATgetArgument(w_61, 1);
                                      m_59 :
                                      if(match_cons(y_61, sym_TNil_0))
                                        {
                                          if(w_60 != NULL && w_60 != j_61)
                                            _fail(j_61);
                                          else
                                            w_60 = j_61;
                                          if(x_60 != NULL && x_60 != l_61)
                                            _fail(l_61);
                                          else
                                            x_60 = l_61;
                                          if(y_60 != NULL && y_60 != r_61)
                                            _fail(r_61);
                                          else
                                            y_60 = r_61;
                                          if(z_60 != NULL && z_60 != t_61)
                                            _fail(t_61);
                                          else
                                            z_60 = t_61;
                                          if(a_61 != NULL && a_61 != v_61)
                                            _fail(v_61);
                                          else
                                            a_61 = v_61;
                                          if(b_61 != NULL && b_61 != x_61)
                                            _fail(x_61);
                                          else
                                            b_61 = x_61;
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
    t = g_13;
    {
      ATerm a_62 = NULL;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_60), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_60), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_61), (ATerm) ATmakeAppl(sym_Nil_0))));
      t = concat_0(t);
      a_62 = t;
      if(z_61 != NULL && z_61 != a_62)
        _fail(a_62);
      else
        z_61 = a_62;
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), not_null(x_60), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_60), not_null(z_61)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_60), not_null(z_60)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_60), not_null(b_61)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_60)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_60))))));
    }
    return(t);
  }
  ATerm k_63 (ATerm t)
  {
    ATerm c_62 = NULL;
    ATerm d_62 = NULL;
    t = new_0(t);
    d_62 = t;
    if(c_62 != NULL && c_62 != d_62)
      _fail(d_62);
    else
      c_62 = d_62;
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_60), (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue))), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_62), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_60), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Id_0)))));
    return(t);
  }
  ATerm l_63 (ATerm t)
  {
    ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,h_63 = NULL;
    ATerm h_13;
    h_13 = t;
    {
      ATerm t_62 = NULL;
      ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
      t = new_0(t);
      t_62 = t;
      if(m_62 != NULL && m_62 != t_62)
        _fail(t_62);
      else
        m_62 = t_62;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_62)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = copy_1(t, MkDistApplication_0);
      t = tuple_unzip_1(t, _id);
      u_62 = t;
      u_59 :
      if(match_cons(u_62, sym_TCons_2))
        {
          v_62 = ATgetArgument(u_62, 0);
          w_62 = ATgetArgument(u_62, 1);
          v_59 :
          if(match_cons(w_62, sym_TCons_2))
            {
              x_62 = ATgetArgument(w_62, 0);
              y_62 = ATgetArgument(w_62, 1);
              w_59 :
              if(match_cons(y_62, sym_TCons_2))
                {
                  z_62 = ATgetArgument(y_62, 0);
                  a_63 = ATgetArgument(y_62, 1);
                  x_59 :
                  if(match_cons(a_63, sym_TCons_2))
                    {
                      b_63 = ATgetArgument(a_63, 0);
                      c_63 = ATgetArgument(a_63, 1);
                      y_59 :
                      if(match_cons(c_63, sym_TCons_2))
                        {
                          d_63 = ATgetArgument(c_63, 0);
                          e_63 = ATgetArgument(c_63, 1);
                          z_59 :
                          if(match_cons(e_63, sym_TCons_2))
                            {
                              f_63 = ATgetArgument(e_63, 0);
                              g_63 = ATgetArgument(e_63, 1);
                              a_60 :
                              if(match_cons(g_63, sym_TNil_0))
                                {
                                  if(n_62 != NULL && n_62 != v_62)
                                    _fail(v_62);
                                  else
                                    n_62 = v_62;
                                  if(o_62 != NULL && o_62 != x_62)
                                    _fail(x_62);
                                  else
                                    o_62 = x_62;
                                  if(p_62 != NULL && p_62 != z_62)
                                    _fail(z_62);
                                  else
                                    p_62 = z_62;
                                  if(q_62 != NULL && q_62 != b_63)
                                    _fail(b_63);
                                  else
                                    q_62 = b_63;
                                  if(r_62 != NULL && r_62 != d_63)
                                    _fail(d_63);
                                  else
                                    r_62 = d_63;
                                  if(s_62 != NULL && s_62 != f_63)
                                    _fail(f_63);
                                  else
                                    s_62 = f_63;
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
    t = h_13;
    {
      ATerm i_63 = NULL;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_62), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = conc_0(t);
      i_63 = t;
      if(h_63 != NULL && h_63 != i_63)
        _fail(i_63);
      else
        h_63 = i_63;
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_60), (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue))), not_null(o_62), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_62), not_null(h_63)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_60), not_null(q_62)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_62)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(l_60), not_null(s_62)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_62))))));
    }
    return(t);
  }
  k_60 = t;
  c_60 :
  if(match_cons(k_60, sym_TCons_2))
    {
      l_60 = ATgetArgument(k_60, 0);
      m_60 = ATgetArgument(k_60, 1);
      d_60 :
      if(match_cons(m_60, sym_TCons_2))
        {
          n_60 = ATgetArgument(m_60, 0);
          o_60 = ATgetArgument(m_60, 1);
          e_60 :
          if(match_string(n_60, "T"))
            {
              f_60 :
              if(match_cons(o_60, sym_TCons_2))
                {
                  p_60 = ATgetArgument(o_60, 0);
                  q_60 = ATgetArgument(o_60, 1);
                  g_60 :
                  if(match_cons(q_60, sym_TNil_0))
                    {
                      h_60 :
                      if(match_int(p_60, 0))
                        {
                          ATerm i_13 = t;
                          if(PushChoice()==0)
                            {
                              t = j_63(t);
                              PopChoice();
                            }
                          else
                            {
                              t = i_13;
                              t = k_63(t);
                            }
                        }
                      else
                        t = j_63(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_string(n_60, "D"))
                {
                  i_60 :
                  if(match_cons(o_60, sym_TCons_2))
                    {
                      p_60 = ATgetArgument(o_60, 0);
                      q_60 = ATgetArgument(o_60, 1);
                      j_60 :
                      if(match_cons(q_60, sym_TNil_0))
                        t = l_63(t);
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
  ATerm e_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
  e_64 = t;
  x_63 :
  if(match_cons(e_64, sym_TCons_2))
    {
      k_64 = ATgetArgument(e_64, 0);
      r_64 = ATgetArgument(e_64, 1);
      y_63 :
      if(match_cons(k_64, sym_TCons_2))
        {
          l_64 = ATgetArgument(k_64, 0);
          o_64 = ATgetArgument(k_64, 1);
          z_63 :
          if(match_cons(l_64, sym_Mod_2))
            {
              m_64 = ATgetArgument(l_64, 0);
              n_64 = ATgetArgument(l_64, 1);
              a_64 :
              if(match_cons(o_64, sym_TCons_2))
                {
                  p_64 = ATgetArgument(o_64, 0);
                  q_64 = ATgetArgument(o_64, 1);
                  b_64 :
                  if(match_cons(q_64, sym_TNil_0))
                    {
                      c_64 :
                      if(match_cons(r_64, sym_TCons_2))
                        {
                          s_64 = ATgetArgument(r_64, 0);
                          t_64 = ATgetArgument(r_64, 1);
                          d_64 :
                          if(match_cons(t_64, sym_TNil_0))
                            {
                              ATerm y_64 = NULL;
                              ATerm z_64 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_64), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = DefineCongruence_0(t);
                              t = desugar_0(t);
                              z_64 = t;
                              if(y_64 != NULL && y_64 != z_64)
                                _fail(z_64);
                              else
                                y_64 = z_64;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_64), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm j_13 = t;
  if(PushChoice()==0)
    {
      t = CongruenceDef_0(t);
      PopChoice();
    }
  else
    {
      t = j_13;
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
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  k_65 = t;
  d_65 :
  if(match_cons(k_65, sym_TCons_2))
    {
      l_65 = ATgetArgument(k_65, 0);
      o_65 = ATgetArgument(k_65, 1);
      e_65 :
      if(match_cons(l_65, sym_Cons_2))
        {
          m_65 = ATgetArgument(l_65, 0);
          n_65 = ATgetArgument(l_65, 1);
          f_65 :
          if(match_cons(o_65, sym_TCons_2))
            {
              p_65 = ATgetArgument(o_65, 0);
              q_65 = ATgetArgument(o_65, 1);
              g_65 :
              if(match_cons(q_65, sym_TCons_2))
                {
                  r_65 = ATgetArgument(q_65, 0);
                  s_65 = ATgetArgument(q_65, 1);
                  h_65 :
                  if(match_cons(s_65, sym_TCons_2))
                    {
                      t_65 = ATgetArgument(s_65, 0);
                      u_65 = ATgetArgument(s_65, 1);
                      i_65 :
                      if(match_cons(u_65, sym_TCons_2))
                        {
                          v_65 = ATgetArgument(u_65, 0);
                          w_65 = ATgetArgument(u_65, 1);
                          j_65 :
                          if(match_cons(w_65, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_65), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_65), not_null(v_65)), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL;
  i_66 = t;
  f_66 :
  if(match_cons(i_66, sym_TCons_2))
    {
      j_66 = ATgetArgument(i_66, 0);
      k_66 = ATgetArgument(i_66, 1);
      g_66 :
      if(match_cons(k_66, sym_TCons_2))
        {
          l_66 = ATgetArgument(k_66, 0);
          m_66 = ATgetArgument(k_66, 1);
          h_66 :
          if(match_cons(m_66, sym_TNil_0))
            {
              t = not_null(j_66);
              {
                ATerm d_2 (ATerm t)
                {
                  t = not_null(l_66);
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
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL;
  a_67 = t;
  w_66 :
  if(match_cons(a_67, sym_TCons_2))
    {
      b_67 = ATgetArgument(a_67, 0);
      c_67 = ATgetArgument(a_67, 1);
      x_66 :
      if(match_cons(c_67, sym_TCons_2))
        {
          d_67 = ATgetArgument(c_67, 0);
          i_67 = ATgetArgument(c_67, 1);
          y_66 :
          if(match_cons(d_67, sym_Cons_2))
            {
              g_67 = ATgetArgument(d_67, 0);
              h_67 = ATgetArgument(d_67, 1);
              z_66 :
              if(match_cons(i_67, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_67), not_null(b_67)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_67), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_67 = NULL,t_67 = NULL,z_67 = NULL,c_68 = NULL,d_68 = NULL;
  s_67 = t;
  o_67 :
  if(match_cons(s_67, sym_TCons_2))
    {
      t_67 = ATgetArgument(s_67, 0);
      z_67 = ATgetArgument(s_67, 1);
      q_67 :
      if(match_cons(z_67, sym_TCons_2))
        {
          c_68 = ATgetArgument(z_67, 0);
          d_68 = ATgetArgument(z_67, 1);
          r_67 :
          if(match_cons(d_68, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_67), not_null(c_68));
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
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
  q_68 = t;
  l_68 :
  if(match_cons(q_68, sym_TCons_2))
    {
      r_68 = ATgetArgument(q_68, 0);
      u_68 = ATgetArgument(q_68, 1);
      m_68 :
      if(match_cons(r_68, sym_Cons_2))
        {
          s_68 = ATgetArgument(r_68, 0);
          t_68 = ATgetArgument(r_68, 1);
          n_68 :
          if(match_cons(u_68, sym_TCons_2))
            {
              v_68 = ATgetArgument(u_68, 0);
              y_68 = ATgetArgument(u_68, 1);
              o_68 :
              if(match_cons(v_68, sym_Cons_2))
                {
                  w_68 = ATgetArgument(v_68, 0);
                  x_68 = ATgetArgument(v_68, 1);
                  p_68 :
                  if(match_cons(y_68, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_68), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  k_69 = t;
  f_69 :
  if(match_cons(k_69, sym_TCons_2))
    {
      l_69 = ATgetArgument(k_69, 0);
      m_69 = ATgetArgument(k_69, 1);
      g_69 :
      if(match_cons(l_69, sym_Nil_0))
        {
          h_69 :
          if(match_cons(m_69, sym_TCons_2))
            {
              n_69 = ATgetArgument(m_69, 0);
              o_69 = ATgetArgument(m_69, 1);
              i_69 :
              if(match_cons(n_69, sym_Nil_0))
                {
                  j_69 :
                  if(match_cons(o_69, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm))
{
  ATerm q_69 (ATerm t)
  {
    ATerm k_13 = t;
    if(PushChoice()==0)
      {
        t = u_69(t);
        PopChoice();
      }
    else
      {
        t = k_13;
        t = v_69(t);
        {
          ATerm g_2 (ATerm t)
          {
            t = TCons_2(t, q_69, TNil_0);
            return(t);
          }
          t = TCons_2(t, x_69, g_2);
          t = w_69(t);
        }
      }
    return(t);
  }
  t = q_69(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_69 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_69);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
  o_70 = t;
  k_70 :
  if(match_cons(o_70, sym_Cons_2))
    {
      p_70 = ATgetArgument(o_70, 0);
      u_70 = ATgetArgument(o_70, 1);
      l_70 :
      if(match_cons(p_70, sym_TCons_2))
        {
          q_70 = ATgetArgument(p_70, 0);
          r_70 = ATgetArgument(p_70, 1);
          m_70 :
          if(match_cons(r_70, sym_TCons_2))
            {
              s_70 = ATgetArgument(r_70, 0);
              t_70 = ATgetArgument(r_70, 1);
              n_70 :
              if(match_cons(t_70, sym_TNil_0))
                {
                  ATerm y_70 = NULL,z_70 = NULL,j_71 = NULL,t_71 = NULL;
                  ATerm l_13;
                  l_13 = t;
                  {
                    ATerm a_71 = NULL;
                    ATerm c_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL;
                    t = not_null(s_70);
                    a_71 = t;
                    t = SSL_explode_term(not_null(a_71));
                    c_71 = t;
                    a_70 :
                    if(match_cons(c_71, sym_TCons_2))
                      {
                        f_71 = ATgetArgument(c_71, 0);
                        g_71 = ATgetArgument(c_71, 1);
                        b_70 :
                        if(match_cons(g_71, sym_TCons_2))
                          {
                            h_71 = ATgetArgument(g_71, 0);
                            i_71 = ATgetArgument(g_71, 1);
                            d_70 :
                            if(match_cons(i_71, sym_TNil_0))
                              {
                                if(y_70 != NULL && y_70 != f_71)
                                  _fail(f_71);
                                else
                                  y_70 = f_71;
                                if(z_70 != NULL && z_70 != h_71)
                                  _fail(h_71);
                                else
                                  z_70 = h_71;
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
                  t = l_13;
                  {
                    ATerm m_13;
                    m_13 = t;
                    {
                      ATerm k_71 = NULL;
                      ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
                      t = not_null(q_70);
                      k_71 = t;
                      t = SSL_explode_term(not_null(k_71));
                      o_71 = t;
                      g_70 :
                      if(match_cons(o_71, sym_TCons_2))
                        {
                          p_71 = ATgetArgument(o_71, 0);
                          q_71 = ATgetArgument(o_71, 1);
                          h_70 :
                          if(match_cons(q_71, sym_TCons_2))
                            {
                              r_71 = ATgetArgument(q_71, 0);
                              s_71 = ATgetArgument(q_71, 1);
                              i_70 :
                              if(match_cons(s_71, sym_TNil_0))
                                {
                                  if(y_70 != NULL && y_70 != p_71)
                                    _fail(p_71);
                                  else
                                    y_70 = p_71;
                                  if(j_71 != NULL && j_71 != r_71)
                                    _fail(r_71);
                                  else
                                    j_71 = r_71;
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
                    t = m_13;
                    {
                      ATerm w_71 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      w_71 = t;
                      if(t_71 != NULL && t_71 != w_71)
                        _fail(w_71);
                      else
                        t_71 = w_71;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_70), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
  k_72 = t;
  g_72 :
  if(match_cons(k_72, sym_Cons_2))
    {
      l_72 = ATgetArgument(k_72, 0);
      q_72 = ATgetArgument(k_72, 1);
      h_72 :
      if(match_cons(l_72, sym_TCons_2))
        {
          m_72 = ATgetArgument(l_72, 0);
          n_72 = ATgetArgument(l_72, 1);
          i_72 :
          if(match_cons(n_72, sym_TCons_2))
            {
              o_72 = ATgetArgument(n_72, 0);
              p_72 = ATgetArgument(n_72, 1);
              j_72 :
              if(match_cons(p_72, sym_TNil_0))
                {
                  ATerm s_72 = NULL;
                  if(m_72 != NULL && m_72 != o_72)
                    _fail(o_72);
                  else
                    m_72 = o_72;
                  if(s_72 != NULL && s_72 != q_72)
                    _fail(q_72);
                  else
                    s_72 = q_72;
                  t = not_null(s_72);
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
  ATerm n_13 = t;
  if(PushChoice()==0)
    {
      ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL;
      c_73 = t;
      v_72 :
      if(match_cons(c_73, sym_TCons_2))
        {
          d_73 = ATgetArgument(c_73, 0);
          e_73 = ATgetArgument(c_73, 1);
          x_72 :
          if(match_cons(e_73, sym_TCons_2))
            {
              f_73 = ATgetArgument(e_73, 0);
              g_73 = ATgetArgument(e_73, 1);
              y_72 :
              if(match_cons(g_73, sym_TNil_0))
                {
                  t = not_null(d_73);
                  {
                    ATerm m_73 (ATerm t)
                    {
                      ATerm o_13 = t;
                      if(PushChoice()==0)
                        {
                          t = Nil_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = o_13;
                          {
                            ATerm p_13 = t;
                            if(PushChoice()==0)
                              {
                                ATerm p_2 (ATerm t)
                                {
                                  t = not_null(f_73);
                                  return(t);
                                }
                                t = HdMember_1(t, p_2);
                                t = m_73(t);
                                PopChoice();
                              }
                            else
                              {
                                t = p_13;
                                t = Cons_2(t, _id, m_73);
                              }
                          }
                        }
                      return(t);
                    }
                    t = m_73(t);
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
      t = n_13;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm j_73 = NULL;
          j_73 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_73), (ATerm) ATmakeAppl(sym_TNil_0)));
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
          ATerm q_13 = t;
          if(PushChoice()==0)
            {
              ATerm f_3 (ATerm t)
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm r_13 = t;
                  if(PushChoice()==0)
                    {
                      t = UfIdem_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = r_13;
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
              t = q_13;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, q_2, r_2, s_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm c_56 (ATerm))
{
  ATerm g_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  g_74 = t;
  z_73 :
  if(match_cons(g_74, sym_TCons_2))
    {
      j_74 = ATgetArgument(g_74, 0);
      m_74 = ATgetArgument(g_74, 1);
      a_74 :
      if(match_cons(j_74, sym_Cons_2))
        {
          k_74 = ATgetArgument(j_74, 0);
          l_74 = ATgetArgument(j_74, 1);
          b_74 :
          if(match_cons(m_74, sym_TCons_2))
            {
              n_74 = ATgetArgument(m_74, 0);
              o_74 = ATgetArgument(m_74, 1);
              c_74 :
              if(match_cons(o_74, sym_TCons_2))
                {
                  p_74 = ATgetArgument(o_74, 0);
                  q_74 = ATgetArgument(o_74, 1);
                  d_74 :
                  if(match_cons(q_74, sym_TCons_2))
                    {
                      r_74 = ATgetArgument(q_74, 0);
                      s_74 = ATgetArgument(q_74, 1);
                      e_74 :
                      if(match_cons(s_74, sym_TCons_2))
                        {
                          t_74 = ATgetArgument(s_74, 0);
                          u_74 = ATgetArgument(s_74, 1);
                          f_74 :
                          if(match_cons(u_74, sym_TNil_0))
                            {
                              ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,m_75 = NULL,o_75 = NULL,q_75 = NULL;
                              ATerm s_13;
                              s_13 = t;
                              {
                                ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = a_56(t);
                                f_75 = t;
                                t_73 :
                                if(match_cons(f_75, sym_TCons_2))
                                  {
                                    g_75 = ATgetArgument(f_75, 0);
                                    h_75 = ATgetArgument(f_75, 1);
                                    u_73 :
                                    if(match_cons(h_75, sym_TCons_2))
                                      {
                                        i_75 = ATgetArgument(h_75, 0);
                                        j_75 = ATgetArgument(h_75, 1);
                                        v_73 :
                                        if(match_cons(j_75, sym_TNil_0))
                                          {
                                            ATerm k_75 = NULL;
                                            if(c_75 != NULL && c_75 != g_75)
                                              _fail(g_75);
                                            else
                                              c_75 = g_75;
                                            if(b_75 != NULL && b_75 != i_75)
                                              _fail(i_75);
                                            else
                                              b_75 = i_75;
                                            t = not_null(c_75);
                                            {
                                              ATerm l_75 = NULL;
                                              t = b_56(t);
                                              k_75 = t;
                                              if(d_75 != NULL && d_75 != k_75)
                                                _fail(k_75);
                                              else
                                                d_75 = k_75;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = diff_0(t);
                                              l_75 = t;
                                              if(e_75 != NULL && e_75 != l_75)
                                                _fail(l_75);
                                              else
                                                e_75 = l_75;
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
                              t = s_13;
                              {
                                ATerm t_13;
                                t_13 = t;
                                {
                                  ATerm n_75 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = conc_0(t);
                                  n_75 = t;
                                  if(m_75 != NULL && m_75 != n_75)
                                    _fail(n_75);
                                  else
                                    m_75 = n_75;
                                }
                                t = t_13;
                                {
                                  ATerm u_13;
                                  u_13 = t;
                                  {
                                    ATerm p_75 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    t = conc_0(t);
                                    p_75 = t;
                                    if(o_75 != NULL && o_75 != p_75)
                                      _fail(p_75);
                                    else
                                      o_75 = p_75;
                                  }
                                  t = u_13;
                                  {
                                    ATerm r_75 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_74), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = c_56(t);
                                    r_75 = t;
                                    if(q_75 != NULL && q_75 != r_75)
                                      _fail(r_75);
                                    else
                                      q_75 = r_75;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_74), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm j_76 = NULL,k_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  j_76 = t;
  c_76 :
  if(match_cons(j_76, sym_TCons_2))
    {
      k_76 = ATgetArgument(j_76, 0);
      n_76 = ATgetArgument(j_76, 1);
      d_76 :
      if(match_cons(k_76, sym_Nil_0))
        {
          e_76 :
          if(match_cons(n_76, sym_TCons_2))
            {
              o_76 = ATgetArgument(n_76, 0);
              p_76 = ATgetArgument(n_76, 1);
              f_76 :
              if(match_cons(p_76, sym_TCons_2))
                {
                  q_76 = ATgetArgument(p_76, 0);
                  r_76 = ATgetArgument(p_76, 1);
                  g_76 :
                  if(match_cons(r_76, sym_TCons_2))
                    {
                      s_76 = ATgetArgument(r_76, 0);
                      t_76 = ATgetArgument(r_76, 1);
                      h_76 :
                      if(match_cons(t_76, sym_TCons_2))
                        {
                          u_76 = ATgetArgument(t_76, 0);
                          v_76 = ATgetArgument(t_76, 1);
                          i_76 :
                          if(match_cons(v_76, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_76), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,q_77 = NULL,r_77 = NULL;
  g_77 = t;
  c_77 :
  if(match_cons(g_77, sym_TCons_2))
    {
      h_77 = ATgetArgument(g_77, 0);
      i_77 = ATgetArgument(g_77, 1);
      d_77 :
      if(match_cons(i_77, sym_TCons_2))
        {
          j_77 = ATgetArgument(i_77, 0);
          k_77 = ATgetArgument(i_77, 1);
          e_77 :
          if(match_cons(k_77, sym_TCons_2))
            {
              q_77 = ATgetArgument(k_77, 0);
              r_77 = ATgetArgument(k_77, 1);
              f_77 :
              if(match_cons(r_77, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
ATerm while_not_2 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm w_77 (ATerm t)
  {
    ATerm v_13 = t;
    if(PushChoice()==0)
      {
        t = e_62(t);
        PopChoice();
      }
    else
      {
        t = v_13;
        t = f_62(t);
        t = w_77(t);
      }
    return(t);
  }
  t = w_77(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_62 (ATerm), ATerm i_62 (ATerm), ATerm j_62 (ATerm))
{
  t = h_62(t);
  t = while_not_2(t, i_62, j_62);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm l_56 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm w_13 = t;
    if(PushChoice()==0)
      {
        t = GnNextChangeGraph_3(t, j_56, k_56, l_56);
        PopChoice();
      }
    else
      {
        t = w_13;
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
    ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,l_78 = NULL;
    c_78 = t;
    y_77 :
    if(match_cons(c_78, sym_TCons_2))
      {
        d_78 = ATgetArgument(c_78, 0);
        e_78 = ATgetArgument(c_78, 1);
        z_77 :
        if(match_cons(e_78, sym_TCons_2))
          {
            f_78 = ATgetArgument(e_78, 0);
            g_78 = ATgetArgument(e_78, 1);
            a_78 :
            if(match_cons(g_78, sym_TCons_2))
              {
                h_78 = ATgetArgument(g_78, 0);
                l_78 = ATgetArgument(g_78, 1);
                b_78 :
                if(match_cons(l_78, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_78), not_null(h_78));
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
    ATerm x_13 = t;
    if(PushChoice()==0)
      {
        t = NoMissingDefs_0(t);
        PopChoice();
      }
    else
      {
        t = x_13;
        t = MissingDefs_0(t);
        t = (ATerm) ATmakeInt(1);
        t = exit_0(t);
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL;
  w_78 = t;
  t_78 :
  if(match_cons(w_78, sym_TCons_2))
    {
      x_78 = ATgetArgument(w_78, 0);
      y_78 = ATgetArgument(w_78, 1);
      u_78 :
      if(match_cons(y_78, sym_TCons_2))
        {
          z_78 = ATgetArgument(y_78, 0);
          a_79 = ATgetArgument(y_78, 1);
          v_78 :
          if(match_cons(a_79, sym_TNil_0))
            {
              ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
              ATerm y_13;
              y_13 = t;
              {
                ATerm g_79 = NULL;
                ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL;
                t = u_55(t);
                g_79 = t;
                if(d_79 != NULL && d_79 != g_79)
                  _fail(g_79);
                else
                  d_79 = g_79;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_78), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_78), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm z_13 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_79), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = z_13;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  h_79 = t;
                  s_78 :
                  if(match_cons(h_79, sym_Cons_2))
                    {
                      i_79 = ATgetArgument(h_79, 0);
                      j_79 = ATgetArgument(h_79, 1);
                      if(e_79 != NULL && e_79 != i_79)
                        _fail(i_79);
                      else
                        e_79 = i_79;
                      if(f_79 != NULL && f_79 != j_79)
                        _fail(j_79);
                      else
                        f_79 = j_79;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_79), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_78), not_null(e_79)), not_null(f_79)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = y_13;
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
ATerm HdMember_1 (ATerm t, ATerm u_67 (ATerm))
{
  ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
  q_79 = t;
  p_79 :
  if(match_cons(q_79, sym_Cons_2))
    {
      r_79 = ATgetArgument(q_79, 0);
      s_79 = ATgetArgument(q_79, 1);
      t = u_67(t);
      {
        ATerm w_3 (ATerm t)
        {
          ATerm v_79 = NULL;
          v_79 = t;
          if(r_79 != NULL && r_79 != v_79)
            _fail(v_79);
          else
            r_79 = v_79;
          return(t);
        }
        t = fetch_1(t, w_3);
      }
      t = not_null(s_79);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  c_80 = t;
  z_79 :
  if(match_cons(c_80, sym_TCons_2))
    {
      d_80 = ATgetArgument(c_80, 0);
      e_80 = ATgetArgument(c_80, 1);
      a_80 :
      if(match_cons(e_80, sym_TCons_2))
        {
          f_80 = ATgetArgument(e_80, 0);
          g_80 = ATgetArgument(e_80, 1);
          b_80 :
          if(match_cons(g_80, sym_TNil_0))
            {
              t = not_null(d_80);
              {
                ATerm k_80 (ATerm t)
                {
                  ATerm a_14 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(f_80);
                      PopChoice();
                    }
                  else
                    {
                      t = a_14;
                      {
                        ATerm b_14 = t;
                        if(PushChoice()==0)
                          {
                            ATerm x_3 (ATerm t)
                            {
                              t = not_null(f_80);
                              return(t);
                            }
                            t = HdMember_1(t, x_3);
                            t = k_80(t);
                            PopChoice();
                          }
                        else
                          {
                            t = b_14;
                            t = Cons_2(t, _id, k_80);
                          }
                      }
                    }
                  return(t);
                }
                t = k_80(t);
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
ATerm Arities_0 (ATerm t)
{
  ATerm p_80 = NULL;
  ATerm r_80 = NULL;
  p_80 = t;
  {
    ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_80));
    {
      ATerm y_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, y_3);
      s_80 = t;
      n_80 :
      if(match_cons(s_80, sym_Defined_2))
        {
          t_80 = ATgetArgument(s_80, 0);
          u_80 = ATgetArgument(s_80, 1);
          o_80 :
          if(match_string(t_80, "c_0"))
            {
              if(r_80 != NULL && r_80 != u_80)
                _fail(u_80);
              else
                r_80 = u_80;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
    t = not_null(r_80);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
  z_80 = t;
  y_80 :
  if(match_cons(z_80, sym_Cons_2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      t = not_null(a_81);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL;
  j_81 = t;
  g_81 :
  if(match_cons(j_81, sym_TCons_2))
    {
      k_81 = ATgetArgument(j_81, 0);
      l_81 = ATgetArgument(j_81, 1);
      h_81 :
      if(match_cons(l_81, sym_TCons_2))
        {
          m_81 = ATgetArgument(l_81, 0);
          n_81 = ATgetArgument(l_81, 1);
          i_81 :
          if(match_cons(n_81, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_81), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_81), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm w_55 (ATerm))
{
  ATerm t_81 = NULL;
  ATerm v_81 = NULL;
  t_81 = t;
  {
    ATerm w_81 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = w_55(t);
    w_81 = t;
    if(v_81 != NULL && v_81 != w_81)
      _fail(w_81);
    else
      v_81 = w_81;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_81), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_81), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_lookup_0(t);
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL;
  g_82 = t;
  d_82 :
  if(match_cons(g_82, sym_TCons_2))
    {
      h_82 = ATgetArgument(g_82, 0);
      i_82 = ATgetArgument(g_82, 1);
      e_82 :
      if(match_cons(i_82, sym_TCons_2))
        {
          j_82 = ATgetArgument(i_82, 0);
          k_82 = ATgetArgument(i_82, 1);
          f_82 :
          if(match_cons(k_82, sym_TNil_0))
            {
              ATerm n_82 = NULL,o_82 = NULL;
              ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(j_82), not_null(h_82));
              {
                ATerm i_4 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, i_4);
                p_82 = t;
                b_82 :
                if(match_cons(p_82, sym_Defined_3))
                  {
                    q_82 = ATgetArgument(p_82, 0);
                    r_82 = ATgetArgument(p_82, 1);
                    s_82 = ATgetArgument(p_82, 2);
                    c_82 :
                    if(match_string(q_82, "b_0"))
                      {
                        if(n_82 != NULL && n_82 != r_82)
                          _fail(r_82);
                        else
                          n_82 = r_82;
                        if(o_82 != NULL && o_82 != s_82)
                          _fail(s_82);
                        else
                          o_82 = s_82;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_82), not_null(o_82));
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
ATerm add_0 (ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL;
  z_82 = t;
  w_82 :
  if(match_cons(z_82, sym_TCons_2))
    {
      a_83 = ATgetArgument(z_82, 0);
      b_83 = ATgetArgument(z_82, 1);
      x_82 :
      if(match_cons(b_83, sym_TCons_2))
        {
          c_83 = ATgetArgument(b_83, 0);
          d_83 = ATgetArgument(b_83, 1);
          y_82 :
          if(match_cons(d_83, sym_TNil_0))
            {
              ATerm c_14 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(a_83), not_null(c_83));
                  PopChoice();
                }
              else
                {
                  t = c_14;
                  t = SSL_addr(not_null(a_83), not_null(c_83));
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
ATerm foldr_3 (ATerm t, ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm))
{
  ATerm d_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = p_66(t);
      PopChoice();
    }
  else
    {
      t = d_14;
      {
        ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
        l_83 = t;
        k_83 :
        if(match_cons(l_83, sym_Cons_2))
          {
            m_83 = ATgetArgument(l_83, 0);
            n_83 = ATgetArgument(l_83, 1);
            {
              ATerm q_83 = NULL,s_83 = NULL;
              ATerm e_14;
              e_14 = t;
              {
                ATerm r_83 = NULL;
                t = not_null(m_83);
                t = r_66(t);
                r_83 = t;
                if(q_83 != NULL && q_83 != r_83)
                  _fail(r_83);
                else
                  q_83 = r_83;
              }
              t = e_14;
              {
                ATerm t_83 = NULL;
                t = not_null(n_83);
                t = foldr_3(t, p_66, q_66, r_66);
                t_83 = t;
                if(s_83 != NULL && s_83 != t_83)
                  _fail(t_83);
                else
                  s_83 = t_83;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_83), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = q_66(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, j_4, add_0, k_4);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
    d_84 = t;
    c_84 :
    if(match_cons(d_84, sym_SDef_3))
      {
        e_84 = ATgetArgument(d_84, 0);
        f_84 = ATgetArgument(d_84, 1);
        g_84 = ATgetArgument(d_84, 2);
        {
          ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
          ATerm f_14;
          f_14 = t;
          {
            ATerm o_84 = NULL;
            t = not_null(f_84);
            {
              ATerm p_84 = NULL;
              t = length_0(t);
              o_84 = t;
              if(m_84 != NULL && m_84 != o_84)
                _fail(o_84);
              else
                m_84 = o_84;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_84), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_84), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm q_84 = NULL,s_84 = NULL;
                ATerm g_14 = t;
                if(PushChoice()==0)
                  {
                    t = Definitions_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = g_14;
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                  }
                p_84 = t;
                if(l_84 != NULL && l_84 != p_84)
                  _fail(p_84);
                else
                  l_84 = p_84;
                {
                  ATerm r_84 = NULL;
                  t = not_null(e_84);
                  {
                    ATerm h_14 = t;
                    if(PushChoice()==0)
                      {
                        t = Arities_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = h_14;
                        t = (ATerm) ATmakeAppl(sym_Nil_0);
                      }
                    r_84 = t;
                    if(q_84 != NULL && q_84 != r_84)
                      _fail(r_84);
                    else
                      q_84 = r_84;
                  }
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_84), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_84), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = union_0(t);
                  s_84 = t;
                  if(n_84 != NULL && n_84 != s_84)
                    _fail(s_84);
                  else
                    n_84 = s_84;
                  {
                    ATerm i_14;
                    i_14 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(m_84), not_null(e_84)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(d_84), not_null(l_84)), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm o_4 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
                        return(t);
                      }
                      t = assert_1(t, o_4);
                    }
                    t = i_14;
                    {
                      ATerm j_14;
                      j_14 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(e_84)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(n_84)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      {
                        ATerm p_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
                          return(t);
                        }
                        t = assert_1(t, p_4);
                      }
                      t = j_14;
                    }
                  }
                }
              }
            }
          }
          t = f_14;
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, n_4);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm z_84 = NULL;
  ATerm a_85 = NULL;
  t = sort_defs_0(t);
  a_85 = t;
  if(z_84 != NULL && z_84 != a_85)
    _fail(a_85);
  else
    z_84 = a_85;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_84), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = extract_needed_defs_0(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm f_85 = NULL,g_85 = NULL;
  f_85 = t;
  e_85 :
  if(match_cons(f_85, sym_Strategies_1))
    {
      g_85 = ATgetArgument(f_85, 0);
      {
        ATerm i_85 = NULL;
        t = not_null(g_85);
        t = b_53(t);
        i_85 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(i_85));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_55 (ATerm), ATerm h_55 (ATerm))
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL;
  q_85 = t;
  p_85 :
  if(match_cons(q_85, sym_Cons_2))
    {
      r_85 = ATgetArgument(q_85, 0);
      s_85 = ATgetArgument(q_85, 1);
      {
        ATerm v_85 = NULL;
        t = not_null(r_85);
        {
          ATerm x_85 = NULL;
          t = g_55(t);
          v_85 = t;
          t = not_null(s_85);
          t = h_55(t);
          x_85 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_85), not_null(x_85));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm d_53 (ATerm))
{
  ATerm f_86 = NULL,g_86 = NULL;
  f_86 = t;
  e_86 :
  if(match_cons(f_86, sym_Specification_1))
    {
      g_86 = ATgetArgument(f_86, 0);
      {
        ATerm i_86 = NULL;
        t = not_null(g_86);
        t = d_53(t);
        i_86 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(i_86));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm n_86 = NULL;
  n_86 = t;
  m_86 :
  if(!(match_cons(n_86, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm c_55 (ATerm), ATerm d_55 (ATerm))
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
  s_86 = t;
  r_86 :
  if(match_cons(s_86, sym_TCons_2))
    {
      t_86 = ATgetArgument(s_86, 0);
      u_86 = ATgetArgument(s_86, 1);
      {
        ATerm x_86 = NULL;
        t = not_null(t_86);
        {
          ATerm z_86 = NULL;
          t = c_55(t);
          x_86 = t;
          t = not_null(u_86);
          t = d_55(t);
          z_86 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_86), not_null(z_86));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm g_87 = NULL;
  ATerm k_14;
  k_14 = t;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm h_87 = NULL,i_87 = NULL;
      h_87 = t;
      f_87 :
      if(match_cons(h_87, sym_Program_1))
        {
          i_87 = ATgetArgument(h_87, 0);
          if(g_87 != NULL && g_87 != i_87)
            _fail(i_87);
          else
            g_87 = i_87;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, q_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_87), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = k_14;
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
  ATerm p_87 = NULL,q_87 = NULL;
  ATerm u_4 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      ATerm l_14 = t;
      if(PushChoice()==0)
        {
          ATerm s_5 (ATerm t)
          {
            ATerm r_87 = NULL;
            r_87 = t;
            k_87 :
            if(!(match_cons(r_87, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, s_5);
          PopChoice();
          _fail(t);
        }
      else
        t = l_14;
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_5, n_5);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm v_5 (ATerm t)
        {
          ATerm s_87 = NULL,t_87 = NULL;
          s_87 = t;
          m_87 :
          if(match_cons(s_87, sym_Runtime_1))
            {
              t_87 = ATgetArgument(s_87, 0);
              if(q_87 != NULL && q_87 != t_87)
                _fail(t_87);
              else
                q_87 = t_87;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, v_5);
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, t_5, u_5);
      {
        ATerm w_5 (ATerm t)
        {
          ATerm y_5 (ATerm t)
          {
            ATerm u_87 = NULL,v_87 = NULL;
            u_87 = t;
            o_87 :
            if(match_cons(u_87, sym_Program_1))
              {
                v_87 = ATgetArgument(u_87, 0);
                if(p_87 != NULL && p_87 != v_87)
                  _fail(v_87);
                else
                  p_87 = v_87;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, y_5);
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, w_5, x_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_87), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_87), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, u_4);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  c_88 = t;
  z_87 :
  if(match_cons(c_88, sym_TCons_2))
    {
      d_88 = ATgetArgument(c_88, 0);
      e_88 = ATgetArgument(c_88, 1);
      a_88 :
      if(match_cons(e_88, sym_TCons_2))
        {
          f_88 = ATgetArgument(e_88, 0);
          g_88 = ATgetArgument(e_88, 1);
          b_88 :
          if(match_cons(g_88, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(d_88), not_null(f_88));
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
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL;
  o_88 = t;
  l_88 :
  if(match_cons(o_88, sym_TCons_2))
    {
      p_88 = ATgetArgument(o_88, 0);
      q_88 = ATgetArgument(o_88, 1);
      m_88 :
      if(match_cons(q_88, sym_TCons_2))
        {
          r_88 = ATgetArgument(q_88, 0);
          s_88 = ATgetArgument(q_88, 1);
          n_88 :
          if(match_cons(s_88, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(p_88), not_null(r_88));
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
  ATerm a_89 = NULL;
  ATerm m_14;
  m_14 = t;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm n_14 = t;
      if(PushChoice()==0)
        {
          ATerm g_6 (ATerm t)
          {
            ATerm b_89 = NULL,c_89 = NULL;
            b_89 = t;
            x_88 :
            if(match_cons(b_89, sym_Output_1))
              {
                c_89 = ATgetArgument(b_89, 0);
                if(a_89 != NULL && a_89 != c_89)
                  _fail(c_89);
                else
                  a_89 = c_89;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_6);
          PopChoice();
        }
      else
        {
          t = n_14;
          {
            ATerm d_89 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            d_89 = t;
            if(a_89 != NULL && a_89 != d_89)
              _fail(d_89);
            else
              a_89 = d_89;
          }
        }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, d_6, e_6);
  }
  t = m_14;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm j_6 (ATerm t)
      {
        ATerm k_6 (ATerm t)
        {
          t = not_null(a_89);
          return(t);
        }
        t = split_2(t, k_6, _id);
        return(t);
      }
      t = TCons_2(t, j_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, i_6);
    {
      ATerm o_14 = t;
      if(PushChoice()==0)
        {
          ATerm l_6 (ATerm t)
          {
            ATerm n_6 (ATerm t)
            {
              ATerm e_89 = NULL;
              e_89 = t;
              z_88 :
              if(!(match_cons(e_89, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, n_6);
            return(t);
          }
          ATerm m_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, l_6, m_6);
          PopChoice();
        }
      else
        {
          t = o_14;
          {
            ATerm o_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, o_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm m_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL;
  ATerm p_14;
  p_14 = t;
  t = dtime_0(t);
  t = p_14;
  t = p_59(t);
  {
    ATerm q_14;
    q_14 = t;
    {
      ATerm n_89 = NULL;
      t = dtime_0(t);
      n_89 = t;
      if(m_89 != NULL && m_89 != n_89)
        _fail(n_89);
      else
        m_89 = n_89;
    }
    t = q_14;
    o_89 = t;
    j_89 :
    if(match_cons(o_89, sym_TCons_2))
      {
        p_89 = ATgetArgument(o_89, 0);
        q_89 = ATgetArgument(o_89, 1);
        k_89 :
        if(match_cons(q_89, sym_TCons_2))
          {
            r_89 = ATgetArgument(q_89, 0);
            s_89 = ATgetArgument(q_89, 1);
            l_89 :
            if(match_cons(s_89, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(m_89)), not_null(p_89)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_89), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm y_89 = NULL;
  y_89 = t;
  t = SSL_ReadFromFile(not_null(y_89));
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm))
{
  ATerm e_90 = NULL;
  ATerm g_90 = NULL,i_90 = NULL;
  e_90 = t;
  {
    ATerm r_14;
    r_14 = t;
    {
      ATerm h_90 = NULL;
      t = not_null(e_90);
      t = a_73(t);
      h_90 = t;
      if(g_90 != NULL && g_90 != h_90)
        _fail(h_90);
      else
        g_90 = h_90;
    }
    t = r_14;
    {
      ATerm j_90 = NULL;
      t = not_null(e_90);
      t = b_73(t);
      j_90 = t;
      if(i_90 != NULL && i_90 != j_90)
        _fail(j_90);
      else
        i_90 = j_90;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_90), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_90 = NULL;
  ATerm s_14;
  s_14 = t;
  {
    ATerm t_14 = t;
    if(PushChoice()==0)
      {
        ATerm p_6 (ATerm t)
        {
          ATerm r_90 = NULL,s_90 = NULL;
          r_90 = t;
          o_90 :
          if(match_cons(r_90, sym_Input_1))
            {
              s_90 = ATgetArgument(r_90, 0);
              if(q_90 != NULL && q_90 != s_90)
                _fail(s_90);
              else
                q_90 = s_90;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, p_6);
        PopChoice();
      }
    else
      {
        t = t_14;
        {
          ATerm t_90 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          t_90 = t;
          if(q_90 != NULL && q_90 != t_90)
            _fail(t_90);
          else
            q_90 = t_90;
        }
      }
  }
  t = s_14;
  {
    ATerm v_6 (ATerm t)
    {
      t = not_null(q_90);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_90 = NULL;
  x_90 = t;
  w_90 :
  if(!(match_cons(x_90, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    ATerm u_14 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = u_14;
        {
          ATerm v_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = v_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_6);
  t = o_59(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_90 = NULL;
  z_90 = t;
  t = SSL_table_create(not_null(z_90));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_91 = NULL;
  d_91 = t;
  {
    ATerm w_14;
    w_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_91), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = w_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL;
  l_91 = t;
  j_91 :
  if(match_string(l_91, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(l_91, sym_Cons_2))
        {
          m_91 = ATgetArgument(l_91, 0);
          n_91 = ATgetArgument(l_91, 1);
          k_91 :
          if(match_cons(n_91, sym_Cons_2))
            {
              o_91 = ATgetArgument(n_91, 0);
              p_91 = ATgetArgument(n_91, 1);
              {
                ATerm t_91 = NULL;
                ATerm x_14;
                x_14 = t;
                t = not_null(m_91);
                t = g_0(t);
                t = x_14;
                {
                  ATerm u_91 = NULL;
                  t = not_null(o_91);
                  t = h_0(t);
                  u_91 = t;
                  if(t_91 != NULL && t_91 != u_91)
                    _fail(u_91);
                  else
                    t_91 = u_91;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_91), not_null(p_91));
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
  ATerm y_14 = t;
  if(PushChoice()==0)
    {
      ATerm x_6 (ATerm t)
      {
        ATerm j_92 = NULL;
        j_92 = t;
        y_91 :
        if(!(match_string(j_92, "-S")))
          {
            if(!(match_string(j_92, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, x_6, z_6, b_7);
      PopChoice();
    }
  else
    {
      t = y_14;
      {
        ATerm z_14 = t;
        if(PushChoice()==0)
          {
            ATerm d_7 (ATerm t)
            {
              ATerm k_92 = NULL;
              k_92 = t;
              z_91 :
              if(!(match_string(k_92, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm e_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm f_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, d_7, e_7, f_7);
            PopChoice();
          }
        else
          {
            t = z_14;
            {
              ATerm a_15 = t;
              if(PushChoice()==0)
                {
                  ATerm g_7 (ATerm t)
                  {
                    ATerm l_92 = NULL;
                    l_92 = t;
                    a_92 :
                    if(!(match_string(l_92, "-v")))
                      {
                        if(!(match_string(l_92, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm h_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm i_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, g_7, h_7, i_7);
                  PopChoice();
                }
              else
                {
                  t = a_15;
                  {
                    ATerm m_15 = t;
                    if(PushChoice()==0)
                      {
                        ATerm j_7 (ATerm t)
                        {
                          ATerm m_92 = NULL;
                          m_92 = t;
                          b_92 :
                          if(!(match_string(m_92, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm k_7 (ATerm t)
                        {
                          ATerm n_92 = NULL;
                          ATerm o_92 = NULL;
                          o_92 = t;
                          if(n_92 != NULL && n_92 != o_92)
                            _fail(o_92);
                          else
                            n_92 = o_92;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(n_92));
                          return(t);
                        }
                        ATerm p_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, j_7, k_7, p_7);
                        PopChoice();
                      }
                    else
                      {
                        t = m_15;
                        {
                          ATerm n_15 = t;
                          if(PushChoice()==0)
                            {
                              ATerm q_7 (ATerm t)
                              {
                                ATerm p_92 = NULL;
                                p_92 = t;
                                d_92 :
                                if(!(match_string(p_92, "-i")))
                                  {
                                    if(!(match_string(p_92, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm s_7 (ATerm t)
                              {
                                ATerm q_92 = NULL;
                                ATerm r_92 = NULL;
                                r_92 = t;
                                if(q_92 != NULL && q_92 != r_92)
                                  _fail(r_92);
                                else
                                  q_92 = r_92;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_92));
                                return(t);
                              }
                              ATerm u_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, q_7, s_7, u_7);
                              PopChoice();
                            }
                          else
                            {
                              t = n_15;
                              {
                                ATerm o_15 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm v_7 (ATerm t)
                                    {
                                      ATerm s_92 = NULL;
                                      s_92 = t;
                                      f_92 :
                                      if(!(match_string(s_92, "-o")))
                                        {
                                          if(!(match_string(s_92, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm w_7 (ATerm t)
                                    {
                                      ATerm t_92 = NULL;
                                      ATerm u_92 = NULL;
                                      u_92 = t;
                                      if(t_92 != NULL && t_92 != u_92)
                                        _fail(u_92);
                                      else
                                        t_92 = u_92;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_92));
                                      return(t);
                                    }
                                    ATerm x_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, v_7, w_7, x_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_15;
                                    {
                                      ATerm p_15 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm y_7 (ATerm t)
                                          {
                                            ATerm v_92 = NULL;
                                            v_92 = t;
                                            h_92 :
                                            if(!(match_string(v_92, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm d_8 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm e_8 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, y_7, d_8, e_8);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = p_15;
                                          {
                                            ATerm f_8 (ATerm t)
                                            {
                                              ATerm w_92 = NULL;
                                              w_92 = t;
                                              i_92 :
                                              if(!(match_string(w_92, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm g_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm h_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, f_8, g_8, h_8);
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
  ATerm b_93 = NULL;
  b_93 = t;
  t = SSL_table_destroy(not_null(b_93));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_93 = NULL;
  f_93 = t;
  t = SSL_exit(not_null(f_93));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm j_93 = NULL;
  j_93 = t;
  t = SSL_implode_string(not_null(j_93));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm m_93 (ATerm t)
  {
    ATerm q_15 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, m_93);
        PopChoice();
      }
    else
      {
        t = q_15;
        t = Nil_0(t);
        t = a_72(t);
      }
    return(t);
  }
  t = m_93(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_15 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = s_15;
      {
        ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL;
        p_93 = t;
        o_93 :
        if(match_cons(p_93, sym_Cons_2))
          {
            q_93 = ATgetArgument(p_93, 0);
            r_93 = ATgetArgument(p_93, 1);
            t = not_null(q_93);
            {
              ATerm o_8 (ATerm t)
              {
                t = not_null(r_93);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, o_8);
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
  ATerm x_93 = NULL;
  x_93 = t;
  t = SSL_explode_string(not_null(x_93));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm a_94 (ATerm t)
  {
    ATerm t_15 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = t_15;
        t = Cons_2(t, m_71, a_94);
      }
    return(t);
  }
  t = a_94(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL;
  g_94 = t;
  c_94 :
  if(match_cons(g_94, sym_TCons_2))
    {
      h_94 = ATgetArgument(g_94, 0);
      i_94 = ATgetArgument(g_94, 1);
      d_94 :
      if(match_cons(h_94, sym_Nil_0))
        {
          e_94 :
          if(match_cons(i_94, sym_TCons_2))
            {
              j_94 = ATgetArgument(i_94, 0);
              k_94 = ATgetArgument(i_94, 1);
              f_94 :
              if(match_cons(k_94, sym_TNil_0))
                t = not_null(j_94);
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
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL;
  s_94 = t;
  o_94 :
  if(match_cons(s_94, sym_TCons_2))
    {
      t_94 = ATgetArgument(s_94, 0);
      w_94 = ATgetArgument(s_94, 1);
      p_94 :
      if(match_cons(t_94, sym_Cons_2))
        {
          u_94 = ATgetArgument(t_94, 0);
          v_94 = ATgetArgument(t_94, 1);
          q_94 :
          if(match_cons(w_94, sym_TCons_2))
            {
              x_94 = ATgetArgument(w_94, 0);
              y_94 = ATgetArgument(w_94, 1);
              r_94 :
              if(match_cons(y_94, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_94), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_94), not_null(x_94)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm n_61 (ATerm), ATerm o_61 (ATerm))
{
  ATerm d_95 (ATerm t)
  {
    ATerm u_15 = t;
    if(PushChoice()==0)
      {
        t = n_61(t);
        t = d_95(t);
        PopChoice();
      }
    else
      {
        t = u_15;
        t = o_61(t);
      }
    return(t);
  }
  t = d_95(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_61 (ATerm))
{
  t = repeat_2(t, q_61, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm f_95 = NULL;
  f_95 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_95), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_50 (ATerm))
{
  ATerm l_95 = NULL,m_95 = NULL;
  l_95 = t;
  k_95 :
  if(match_cons(l_95, sym_Program_1))
    {
      m_95 = ATgetArgument(l_95, 0);
      {
        ATerm o_95 = NULL;
        t = not_null(m_95);
        t = j_50(t);
        o_95 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_95));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm w_95 = NULL;
  ATerm p_8 (ATerm t)
  {
    ATerm q_8 (ATerm t)
    {
      ATerm x_95 = NULL;
      x_95 = t;
      if(w_95 != NULL && w_95 != x_95)
        _fail(x_95);
      else
        w_95 = x_95;
      return(t);
    }
    t = Program_1(t, q_8);
    return(t);
  }
  t = option_defined_1(t, p_8);
  {
    ATerm u_8 (ATerm t)
    {
      ATerm y_95 = NULL;
      ATerm z_95 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm v_8 (ATerm t)
        {
          t = not_null(w_95);
          return(t);
        }
        t = short_description_1(t, v_8);
        t = concat_strings_0(t);
        z_95 = t;
        if(y_95 != NULL && y_95 != z_95)
          _fail(z_95);
        else
          y_95 = z_95;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_95), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, u_8);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm w_8 (ATerm t)
      {
        ATerm a_96 = NULL;
        a_96 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_96), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, w_8);
      {
        ATerm x_8 (ATerm t)
        {
          ATerm c_96 = NULL;
          ATerm d_96 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm y_8 (ATerm t)
            {
              t = not_null(w_95);
              return(t);
            }
            t = long_description_1(t, y_8);
            t = concat_strings_0(t);
            d_96 = t;
            if(c_96 != NULL && c_96 != d_96)
              _fail(d_96);
            else
              c_96 = d_96;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_96), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, x_8);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  m_96 = t;
  j_96 :
  if(match_cons(m_96, sym_TCons_2))
    {
      n_96 = ATgetArgument(m_96, 0);
      o_96 = ATgetArgument(m_96, 1);
      k_96 :
      if(match_cons(o_96, sym_TCons_2))
        {
          p_96 = ATgetArgument(o_96, 0);
          q_96 = ATgetArgument(o_96, 1);
          l_96 :
          if(match_cons(q_96, sym_TNil_0))
            {
              ATerm v_15;
              v_15 = t;
              t = SSL_printnl(not_null(n_96), not_null(p_96));
              t = v_15;
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
ATerm Undefined_1 (ATerm t, ATerm k_50 (ATerm))
{
  ATerm x_96 = NULL,y_96 = NULL;
  x_96 = t;
  w_96 :
  if(match_cons(x_96, sym_Undefined_1))
    {
      y_96 = ATgetArgument(x_96, 0);
      {
        ATerm a_97 = NULL;
        t = not_null(y_96);
        t = k_50(t);
        a_97 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_97));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm e_97 (ATerm t)
  {
    ATerm w_15 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, u_71, _id);
        PopChoice();
      }
    else
      {
        t = w_15;
        t = Cons_2(t, _id, e_97);
      }
    return(t);
  }
  t = e_97(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_58 (ATerm))
{
  t = fetch_1(t, t_58);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_97 = NULL;
  g_97 = t;
  f_97 :
  if(!(match_cons(g_97, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_73 (ATerm))
{
  ATerm a_16 = t;
  if(PushChoice()==0)
    {
      t = s_73(t);
      PopChoice();
    }
  else
    t = a_16;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL;
  l_97 = t;
  i_97 :
  if(match_cons(l_97, sym_TCons_2))
    {
      m_97 = ATgetArgument(l_97, 0);
      n_97 = ATgetArgument(l_97, 1);
      j_97 :
      if(match_cons(n_97, sym_TCons_2))
        {
          o_97 = ATgetArgument(n_97, 0);
          p_97 = ATgetArgument(n_97, 1);
          k_97 :
          if(match_cons(p_97, sym_TNil_0))
            t = SSL_table_get(not_null(m_97), not_null(o_97));
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
  ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL;
  z_97 = t;
  v_97 :
  if(match_cons(z_97, sym_TCons_2))
    {
      a_98 = ATgetArgument(z_97, 0);
      b_98 = ATgetArgument(z_97, 1);
      w_97 :
      if(match_cons(b_98, sym_TCons_2))
        {
          c_98 = ATgetArgument(b_98, 0);
          d_98 = ATgetArgument(b_98, 1);
          x_97 :
          if(match_cons(d_98, sym_TCons_2))
            {
              e_98 = ATgetArgument(d_98, 0);
              f_98 = ATgetArgument(d_98, 1);
              y_97 :
              if(match_cons(f_98, sym_TNil_0))
                {
                  ATerm e_16;
                  e_16 = t;
                  {
                    ATerm j_98 = NULL;
                    ATerm k_98 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_98), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_98), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm f_16 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = f_16;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      k_98 = t;
                      if(j_98 != NULL && j_98 != k_98)
                        _fail(k_98);
                      else
                        j_98 = k_98;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_98), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_98), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_98), not_null(j_98)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = e_16;
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
ATerm register_usage_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm p_98 = NULL;
  ATerm q_98 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = z_57(t);
  q_98 = t;
  if(p_98 != NULL && p_98 != q_98)
    _fail(q_98);
  else
    p_98 = q_98;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_98), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL;
  w_98 = t;
  v_98 :
  if(match_string(w_98, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(w_98, sym_Cons_2))
        {
          x_98 = ATgetArgument(w_98, 0);
          y_98 = ATgetArgument(w_98, 1);
          {
            ATerm b_99 = NULL;
            ATerm g_16;
            g_16 = t;
            t = not_null(x_98);
            t = d_0(t);
            t = g_16;
            {
              ATerm c_99 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              c_99 = t;
              if(b_99 != NULL && b_99 != c_99)
                _fail(c_99);
              else
                b_99 = c_99;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_99), not_null(y_98));
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
  ATerm e_9 (ATerm t)
  {
    ATerm h_99 = NULL;
    h_99 = t;
    g_99 :
    if(!(match_string(h_99, "--help")))
      {
        if(!(match_string(h_99, "-h")))
          {
            if(!(match_string(h_99, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm f_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, e_9, f_9, k_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_99 = NULL,l_99 = NULL,m_99 = NULL;
  k_99 = t;
  j_99 :
  if(match_cons(k_99, sym_Cons_2))
    {
      l_99 = ATgetArgument(k_99, 0);
      m_99 = ATgetArgument(k_99, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_99)), not_null(m_99));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm h_16;
  h_16 = t;
  {
    ATerm l_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = x_57(t);
      return(t);
    }
    t = try_1(t, l_9);
  }
  t = h_16;
  {
    ATerm m_9 (ATerm t)
    {
      ATerm s_99 = NULL;
      s_99 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_99));
      return(t);
    }
    ATerm n_9 (ATerm t)
    {
      ATerm i_16 = t;
      if(PushChoice()==0)
        {
          ATerm j_16 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = j_16;
              t = x_57(t);
              t = Cons_2(t, _id, n_9);
            }
          PopChoice();
        }
      else
        {
          t = i_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_9, n_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
  ATerm k_16;
  k_16 = t;
  {
    ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL,i_100 = NULL,j_100 = NULL,k_100 = NULL;
    e_100 = t;
    x_99 :
    if(match_cons(e_100, sym_TCons_2))
      {
        f_100 = ATgetArgument(e_100, 0);
        g_100 = ATgetArgument(e_100, 1);
        y_99 :
        if(match_cons(g_100, sym_TCons_2))
          {
            h_100 = ATgetArgument(g_100, 0);
            i_100 = ATgetArgument(g_100, 1);
            z_99 :
            if(match_cons(i_100, sym_TCons_2))
              {
                j_100 = ATgetArgument(i_100, 0);
                k_100 = ATgetArgument(i_100, 1);
                a_100 :
                if(match_cons(k_100, sym_TNil_0))
                  {
                    if(b_100 != NULL && b_100 != f_100)
                      _fail(f_100);
                    else
                      b_100 = f_100;
                    if(c_100 != NULL && c_100 != h_100)
                      _fail(h_100);
                    else
                      c_100 = h_100;
                    if(d_100 != NULL && d_100 != j_100)
                      _fail(j_100);
                    else
                      d_100 = j_100;
                    t = SSL_table_put(not_null(b_100), not_null(c_100), not_null(d_100));
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
  t = k_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm o_100 = NULL;
  ATerm l_16;
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = l_16;
  {
    ATerm o_9 (ATerm t)
    {
      ATerm q_16 = t;
      if(PushChoice()==0)
        {
          t = w_57(t);
          PopChoice();
        }
      else
        {
          t = q_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_9);
    {
      ATerm p_9 (ATerm t)
      {
        ATerm r_16 = t;
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
            t = r_16;
            {
              ATerm q_9 (ATerm t)
              {
                ATerm r_9 (ATerm t)
                {
                  ATerm p_100 = NULL;
                  p_100 = t;
                  if(o_100 != NULL && o_100 != p_100)
                    _fail(p_100);
                  else
                    o_100 = p_100;
                  return(t);
                }
                t = Undefined_1(t, r_9);
                return(t);
              }
              t = option_defined_1(t, q_9);
              {
                ATerm s_16;
                s_16 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_100), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = s_16;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_9);
      {
        ATerm t_16;
        t_16 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = t_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm f_59 (ATerm))
{
  ATerm w_9 (ATerm t)
  {
    ATerm u_16 = t;
    if(PushChoice()==0)
      {
        t = e_59(t);
        PopChoice();
      }
    else
      {
        t = u_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, w_9);
  t = store_options_0(t);
  {
    ATerm v_16 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, f_59);
        PopChoice();
      }
    else
      {
        t = v_16;
        {
          ATerm w_16 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, d_59);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = w_16;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm y_58 (ATerm), ATerm z_58 (ATerm))
{
  t = iowrap_3(t, y_58, z_58, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm v_58 (ATerm))
{
  ATerm z_9 (ATerm t)
  {
    ATerm f_10 (ATerm t)
    {
      t = TCons_2(t, v_58, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, f_10);
    return(t);
  }
  t = iowrap_2(t, z_9, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm g_10 (ATerm t)
  {
    ATerm h_10 (ATerm t)
    {
      ATerm i_10 (ATerm t)
      {
        ATerm j_10 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, j_10, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, i_10);
      return(t);
    }
    t = Specification_1(t, h_10);
    return(t);
  }
  t = iowrap_1(t, g_10);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
