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
Symbol sym_Dir_1;
Symbol sym_ExecDir_1;
Symbol sym_InclDir_1;
Symbol sym_CInclDir_1;
Symbol sym_CLibDir_1;
Symbol sym_Input_1;
Symbol sym_Main_1;
Symbol sym_AST_0;
Symbol sym_Ignore_0;
Symbol sym_CC_0;
Symbol sym_NORM_0;
Symbol sym_FUSION_0;
Symbol sym_FRONTEND_0;
Symbol sym_CSYNTAX_0;
Symbol sym_TraceAll_0;
Symbol sym_Trace_1;
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
  sym_Dir_1 = ATmakeSymbol("Dir", 1, ATfalse);
  ATprotectSymbol(sym_Dir_1);
  sym_ExecDir_1 = ATmakeSymbol("ExecDir", 1, ATfalse);
  ATprotectSymbol(sym_ExecDir_1);
  sym_InclDir_1 = ATmakeSymbol("InclDir", 1, ATfalse);
  ATprotectSymbol(sym_InclDir_1);
  sym_CInclDir_1 = ATmakeSymbol("CInclDir", 1, ATfalse);
  ATprotectSymbol(sym_CInclDir_1);
  sym_CLibDir_1 = ATmakeSymbol("CLibDir", 1, ATfalse);
  ATprotectSymbol(sym_CLibDir_1);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Main_1 = ATmakeSymbol("Main", 1, ATfalse);
  ATprotectSymbol(sym_Main_1);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
  sym_Ignore_0 = ATmakeSymbol("Ignore", 0, ATfalse);
  ATprotectSymbol(sym_Ignore_0);
  sym_CC_0 = ATmakeSymbol("CC", 0, ATfalse);
  ATprotectSymbol(sym_CC_0);
  sym_NORM_0 = ATmakeSymbol("NORM", 0, ATfalse);
  ATprotectSymbol(sym_NORM_0);
  sym_FUSION_0 = ATmakeSymbol("FUSION", 0, ATfalse);
  ATprotectSymbol(sym_FUSION_0);
  sym_FRONTEND_0 = ATmakeSymbol("FRONTEND", 0, ATfalse);
  ATprotectSymbol(sym_FRONTEND_0);
  sym_CSYNTAX_0 = ATmakeSymbol("CSYNTAX", 0, ATfalse);
  ATprotectSymbol(sym_CSYNTAX_0);
  sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
  ATprotectSymbol(sym_TraceAll_0);
  sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
  ATprotectSymbol(sym_Trace_1);
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
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm n_56 (ATerm));
ATerm rzip_1 (ATerm, ATerm z_56 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_48 (ATerm));
ATerm try_1 (ATerm, ATerm u_64 (ATerm));
ATerm eq_0 (ATerm);
ATerm SplitNext_0 (ATerm);
ATerm SplitExit_0 (ATerm);
ATerm SplitInit_0 (ATerm);
ATerm split_at_space_0 (ATerm);
ATerm CLibDir_1 (ATerm, ATerm j_43 (ATerm));
ATerm Dir_1 (ATerm, ATerm f_43 (ATerm));
ATerm cc2_0 (ATerm);
ATerm gcc_0 (ATerm);
ATerm CInclDir_1 (ATerm, ATerm i_43 (ATerm));
ATerm cc1_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm pp_c_1 (ATerm, ATerm d_66 (ATerm));
ATerm debug_1 (ATerm, ATerm o_49 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_traced_funs_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_44 (ATerm));
ATerm TraceAllFuns_0 (ATerm);
ATerm s2c_1 (ATerm, ATerm v_65 (ATerm));
ATerm stratego_cf_1 (ATerm, ATerm g_66 (ATerm));
ATerm canonicalize_1 (ATerm, ATerm u_65 (ATerm));
ATerm optimize2_1 (ATerm, ATerm t_65 (ATerm));
ATerm compile_match_1 (ATerm, ATerm s_65 (ATerm));
ATerm fusion_1 (ATerm, ATerm y_65 (ATerm));
ATerm FUSION_0 (ATerm);
ATerm optimize1_1 (ATerm, ATerm r_65 (ATerm));
ATerm inline_1 (ATerm, ATerm q_65 (ATerm));
ATerm rename_defs_1 (ATerm, ATerm p_65 (ATerm));
ATerm stratego_nf_1 (ATerm, ATerm f_66 (ATerm));
ATerm extract_1 (ATerm, ATerm n_65 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm extract_all_1 (ATerm, ATerm o_65 (ATerm));
ATerm FRONTEND_0 (ATerm);
ATerm output_frontend_1 (ATerm, ATerm j_65 (ATerm));
ATerm pipe_2 (ATerm, ATerm s_46 (ATerm), ATerm t_46 (ATerm));
ATerm frontend_1 (ATerm, ATerm m_65 (ATerm));
ATerm list_1 (ATerm, ATerm e_58 (ATerm));
ATerm core_0 (ATerm);
ATerm transform_file_2 (ATerm, ATerm a_47 (ATerm), ATerm b_47 (ATerm));
ATerm AddMain_1 (ATerm, ATerm k_65 (ATerm));
ATerm Main_1 (ATerm, ATerm l_43 (ATerm));
ATerm add_main_0 (ATerm);
ATerm AST_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm c_47 (ATerm));
ATerm copy_file_3 (ATerm, ATerm d_47 (ATerm), ATerm e_47 (ATerm), ATerm f_47 (ATerm));
ATerm conc_0 (ATerm);
ATerm pref_1 (ATerm, ATerm l_65 (ATerm));
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm pipe_3 (ATerm, ATerm u_46 (ATerm), ATerm v_46 (ATerm), ATerm w_46 (ATerm));
ATerm Output_1 (ATerm, ATerm b_43 (ATerm));
ATerm ExecDir_1 (ATerm, ATerm g_43 (ATerm));
ATerm InclDir_1 (ATerm, ATerm h_43 (ATerm));
ATerm parse_0 (ATerm);
ATerm Verbose_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm DeclVersion_1 (ATerm, ATerm d_43 (ATerm));
ATerm sc_version_0 (ATerm);
ATerm sc_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_49 (ATerm));
ATerm Input_1 (ATerm, ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_43 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm d_48 (ATerm), ATerm e_48 (ATerm));
ATerm Option_2 (ATerm, ATerm s_47 (ATerm), ATerm t_47 (ATerm));
ATerm basename_1 (ATerm, ATerm s_50 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_47 (ATerm));
ATerm map_1 (ATerm, ATerm c_58 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm x_63 (ATerm), ATerm y_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm a_64 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_47 (ATerm));
ATerm Program_1 (ATerm, ATerm y_42 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_42 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_47 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_47 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_47 (ATerm));
ATerm skip1_1 (ATerm, ATerm g_52 (ATerm));
ATerm filter_option_args_1 (ATerm, ATerm i_52 (ATerm));
ATerm at_tail_1 (ATerm, ATerm o_58 (ATerm));
ATerm skip2_1 (ATerm, ATerm h_52 (ATerm));
ATerm Cons_2 (ATerm, ATerm r_43 (ATerm), ATerm s_43 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm filter_gen_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm, ATerm (ATerm)));
ATerm filter_options_1 (ATerm, ATerm j_52 (ATerm));
ATerm process_sc_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm s_1 = NULL;
  s_1 = t;
  t = SSL_exit(not_null(s_1));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL;
  z_1 = t;
  w_1 :
  if(match_cons(z_1, sym_TCons_2))
    {
      a_2 = ATgetArgument(z_1, 0);
      b_2 = ATgetArgument(z_1, 1);
      x_1 :
      if(match_cons(b_2, sym_TCons_2))
        {
          c_2 = ATgetArgument(b_2, 0);
          d_2 = ATgetArgument(b_2, 1);
          y_1 :
          if(match_cons(d_2, sym_TNil_0))
            {
              ATerm t_17;
              t_17 = t;
              t = SSL_printnl(not_null(a_2), not_null(c_2));
              t = t_17;
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
ATerm TNil_0 (ATerm t)
{
  ATerm i_2 = NULL;
  i_2 = t;
  h_2 :
  if(!(match_cons(i_2, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm k_2 = NULL;
  k_2 = t;
  {
    ATerm u_17;
    u_17 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue)), not_null(k_2)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = call_0(t);
    t = u_17;
  }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  r_2 = t;
  o_2 :
  if(match_cons(r_2, sym_TCons_2))
    {
      s_2 = ATgetArgument(r_2, 0);
      t_2 = ATgetArgument(r_2, 1);
      p_2 :
      if(match_cons(t_2, sym_TCons_2))
        {
          u_2 = ATgetArgument(t_2, 0);
          v_2 = ATgetArgument(t_2, 1);
          q_2 :
          if(match_cons(v_2, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_2), not_null(u_2));
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
ATerm RZip2_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  e_3 = t;
  a_3 :
  if(match_cons(e_3, sym_TCons_2))
    {
      f_3 = ATgetArgument(e_3, 0);
      g_3 = ATgetArgument(e_3, 1);
      b_3 :
      if(match_cons(g_3, sym_TCons_2))
        {
          h_3 = ATgetArgument(g_3, 0);
          k_3 = ATgetArgument(g_3, 1);
          c_3 :
          if(match_cons(h_3, sym_Cons_2))
            {
              i_3 = ATgetArgument(h_3, 0);
              j_3 = ATgetArgument(h_3, 1);
              d_3 :
              if(match_cons(k_3, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(f_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_3), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(f_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_3), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  u_3 = t;
  q_3 :
  if(match_cons(u_3, sym_TCons_2))
    {
      v_3 = ATgetArgument(u_3, 0);
      w_3 = ATgetArgument(u_3, 1);
      r_3 :
      if(match_cons(w_3, sym_TCons_2))
        {
          x_3 = ATgetArgument(w_3, 0);
          y_3 = ATgetArgument(w_3, 1);
          s_3 :
          if(match_cons(x_3, sym_Nil_0))
            {
              t_3 :
              if(match_cons(y_3, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm n_56 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm d_18 = t;
    if(PushChoice()==0)
      {
        t = k_56(t);
        PopChoice();
      }
    else
      {
        t = d_18;
        t = l_56(t);
        {
          ATerm a_0 (ATerm t)
          {
            t = TCons_2(t, a_4, TNil_0);
            return(t);
          }
          t = TCons_2(t, n_56, a_0);
          t = m_56(t);
        }
      }
    return(t);
  }
  t = a_4(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm z_56 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, z_56);
  return(t);
}
ATerm remove_intermediates_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  f_4 = t;
  c_4 :
  if(match_cons(f_4, sym_TCons_2))
    {
      g_4 = ATgetArgument(f_4, 0);
      h_4 = ATgetArgument(f_4, 1);
      d_4 :
      if(match_cons(h_4, sym_TCons_2))
        {
          i_4 = ATgetArgument(h_4, 0);
          j_4 = ATgetArgument(h_4, 1);
          e_4 :
          if(match_cons(j_4, sym_TNil_0))
            {
              ATerm e_18;
              e_18 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".ac.abox", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))))))))))), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = rzip_1(t, conc_strings_0);
              t = rm_files_0(t);
              t = e_18;
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
ATerm TCons_2 (ATerm t, ATerm n_43 (ATerm), ATerm o_43 (ATerm))
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym_TCons_2))
    {
      r_4 = ATgetArgument(q_4, 0);
      s_4 = ATgetArgument(q_4, 1);
      {
        ATerm v_4 = NULL;
        t = not_null(r_4);
        {
          ATerm x_4 = NULL;
          t = n_43(t);
          v_4 = t;
          t = not_null(s_4);
          t = o_43(t);
          x_4 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_4), not_null(x_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm f_18 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, k_58, _id);
        PopChoice();
      }
    else
      {
        t = f_18;
        t = Cons_2(t, _id, c_5);
      }
    return(t);
  }
  t = c_5(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_48 (ATerm))
{
  t = fetch_1(t, i_48);
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm g_18 = t;
  if(PushChoice()==0)
    {
      t = u_64(t);
      PopChoice();
    }
  else
    t = g_18;
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
  h_5 = t;
  e_5 :
  if(match_cons(h_5, sym_TCons_2))
    {
      i_5 = ATgetArgument(h_5, 0);
      j_5 = ATgetArgument(h_5, 1);
      f_5 :
      if(match_cons(j_5, sym_TCons_2))
        {
          k_5 = ATgetArgument(j_5, 0);
          l_5 = ATgetArgument(j_5, 1);
          g_5 :
          if(match_cons(l_5, sym_TNil_0))
            {
              if(i_5 != NULL && i_5 != k_5)
                _fail(k_5);
              else
                i_5 = k_5;
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
ATerm SplitNext_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
  ATerm p_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_6), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm i_18 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = i_18;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_6), not_null(a_6)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_6), (ATerm) ATmakeAppl(sym_TNil_0))));
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    ATerm n_6 = NULL;
    ATerm o_6 = NULL;
    t = not_null(a_6);
    t = reverse_0(t);
    t = implode_string_0(t);
    o_6 = t;
    if(n_6 != NULL && n_6 != o_6)
      _fail(o_6);
    else
      n_6 = o_6;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_6), not_null(y_5)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_6), (ATerm) ATmakeAppl(sym_TNil_0))));
    return(t);
  }
  x_5 = t;
  r_5 :
  if(match_cons(x_5, sym_TCons_2))
    {
      y_5 = ATgetArgument(x_5, 0);
      z_5 = ATgetArgument(x_5, 1);
      s_5 :
      if(match_cons(z_5, sym_TCons_2))
        {
          a_6 = ATgetArgument(z_5, 0);
          b_6 = ATgetArgument(z_5, 1);
          t_5 :
          if(match_cons(b_6, sym_TCons_2))
            {
              c_6 = ATgetArgument(b_6, 0);
              f_6 = ATgetArgument(b_6, 1);
              u_5 :
              if(match_cons(c_6, sym_Cons_2))
                {
                  d_6 = ATgetArgument(c_6, 0);
                  e_6 = ATgetArgument(c_6, 1);
                  v_5 :
                  if(match_cons(f_6, sym_TNil_0))
                    {
                      w_5 :
                      if(match_int(d_6, 32))
                        {
                          ATerm j_18 = t;
                          if(PushChoice()==0)
                            {
                              t = p_6(t);
                              PopChoice();
                            }
                          else
                            {
                              t = j_18;
                              t = q_6(t);
                            }
                        }
                      else
                        t = p_6(t);
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
ATerm SplitExit_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  z_6 = t;
  u_6 :
  if(match_cons(z_6, sym_TCons_2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      v_6 :
      if(match_cons(b_7, sym_TCons_2))
        {
          c_7 = ATgetArgument(b_7, 0);
          d_7 = ATgetArgument(b_7, 1);
          w_6 :
          if(match_cons(d_7, sym_TCons_2))
            {
              e_7 = ATgetArgument(d_7, 0);
              f_7 = ATgetArgument(d_7, 1);
              x_6 :
              if(match_cons(e_7, sym_Nil_0))
                {
                  y_6 :
                  if(match_cons(f_7, sym_TNil_0))
                    {
                      ATerm i_7 = NULL;
                      ATerm j_7 = NULL;
                      t = not_null(c_7);
                      t = reverse_0(t);
                      t = implode_string_0(t);
                      j_7 = t;
                      if(i_7 != NULL && i_7 != j_7)
                        _fail(j_7);
                      else
                        i_7 = j_7;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_7), not_null(a_7));
                      t = reverse_0(t);
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
ATerm SplitInit_0 (ATerm t)
{
  ATerm n_7 = NULL;
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_7), (ATerm) ATmakeAppl(sym_TNil_0))));
  return(t);
}
ATerm split_at_space_0 (ATerm t)
{
  t = explode_string_0(t);
  t = SplitInit_0(t);
  {
    ATerm q_7 (ATerm t)
    {
      ATerm k_18 = t;
      if(PushChoice()==0)
        {
          t = SplitExit_0(t);
          PopChoice();
        }
      else
        {
          t = k_18;
          t = SplitNext_0(t);
          t = q_7(t);
        }
      return(t);
    }
    t = q_7(t);
  }
  return(t);
}
ATerm CLibDir_1 (ATerm t, ATerm j_43 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym_CLibDir_1))
    {
      v_7 = ATgetArgument(u_7, 0);
      {
        ATerm x_7 = NULL;
        t = not_null(v_7);
        t = j_43(t);
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym_CLibDir_1, not_null(x_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Dir_1 (ATerm t, ATerm f_43 (ATerm))
{
  ATerm e_8 = NULL,f_8 = NULL;
  e_8 = t;
  d_8 :
  if(match_cons(e_8, sym_Dir_1))
    {
      f_8 = ATgetArgument(e_8, 0);
      {
        ATerm h_8 = NULL;
        t = not_null(f_8);
        t = f_43(t);
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym_Dir_1, not_null(h_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm cc2_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,x_8 = NULL,y_8 = NULL;
  ATerm l_18;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("linking", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = l_18;
  {
    ATerm k_0 (ATerm t)
    {
      ATerm m_0 (ATerm t)
      {
        ATerm n_0 (ATerm t)
        {
          ATerm u_18 = t;
          if(PushChoice()==0)
            {
              ATerm o_0 (ATerm t)
              {
                ATerm u_8 = NULL;
                u_8 = t;
                if(r_8 != NULL && r_8 != u_8)
                  _fail(u_8);
                else
                  r_8 = u_8;
                return(t);
              }
              t = Dir_1(t, o_0);
              PopChoice();
            }
          else
            {
              t = u_18;
              {
                ATerm v_18 = t;
                if(PushChoice()==0)
                  {
                    ATerm p_0 (ATerm t)
                    {
                      ATerm v_8 = NULL;
                      v_8 = t;
                      if(s_8 != NULL && s_8 != v_8)
                        _fail(v_8);
                      else
                        s_8 = v_8;
                      return(t);
                    }
                    t = CLibDir_1(t, p_0);
                    PopChoice();
                  }
                else
                  {
                    t = v_18;
                    {
                      ATerm q_0 (ATerm t)
                      {
                        ATerm w_8 = NULL;
                        w_8 = t;
                        if(t_8 != NULL && t_8 != w_8)
                          _fail(w_8);
                        else
                          t_8 = w_8;
                        return(t);
                      }
                      t = Output_1(t, q_0);
                    }
                  }
              }
            }
          return(t);
        }
        t = try_1(t, n_0);
        return(t);
      }
      t = list_1(t, m_0);
      return(t);
    }
    ATerm l_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, k_0, l_0);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm s_0 (ATerm t)
        {
          ATerm y_18;
          y_18 = t;
          {
            ATerm z_8 = NULL;
            t = conc_strings_0(t);
            z_8 = t;
            if(x_8 != NULL && x_8 != z_8)
              _fail(z_8);
            else
              x_8 = z_8;
          }
          t = y_18;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(t_8);
                return(t);
              }
              t = try_1(t, v_0);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
                return(t);
              }
              t = TCons_2(t, w_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, t_0, u_0);
            {
              ATerm z_18;
              z_18 = t;
              {
                ATerm a_9 = NULL;
                t = conc_strings_0(t);
                a_9 = t;
                if(y_8 != NULL && y_8 != a_9)
                  _fail(a_9);
                else
                  y_8 = a_9;
              }
              t = z_18;
              {
                ATerm a_19;
                a_19 = t;
                {
                  ATerm b_9 = NULL;
                  ATerm c_9 = NULL;
                  t = not_null(s_8);
                  t = map_1(t, split_at_space_0);
                  t = concat_0(t);
                  c_9 = t;
                  if(b_9 != NULL && b_9 != c_9)
                    _fail(c_9);
                  else
                    b_9 = c_9;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_8), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_8), not_null(b_9))));
                  t = gcc_0(t);
                }
                t = a_19;
              }
            }
          }
          return(t);
        }
        t = TCons_2(t, s_0, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, r_0);
    }
  }
  return(t);
}
ATerm gcc_0 (ATerm t)
{
  ATerm k_9 = NULL;
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_9), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = call_0(t);
  return(t);
}
ATerm CInclDir_1 (ATerm t, ATerm i_43 (ATerm))
{
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_CInclDir_1))
    {
      r_9 = ATgetArgument(q_9, 0);
      {
        ATerm t_9 = NULL;
        t = not_null(r_9);
        t = i_43(t);
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym_CInclDir_1, not_null(t_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm cc1_0 (ATerm t)
{
  ATerm g_10 = NULL,i_10 = NULL,j_10 = NULL;
  ATerm b_19;
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compiling", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = b_19;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm z_0 (ATerm t)
      {
        ATerm a_1 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            ATerm h_10 = NULL;
            h_10 = t;
            if(g_10 != NULL && g_10 != h_10)
              _fail(h_10);
            else
              g_10 = h_10;
            return(t);
          }
          t = CInclDir_1(t, b_1);
          return(t);
        }
        t = try_1(t, a_1);
        return(t);
      }
      t = list_1(t, z_0);
      return(t);
    }
    ATerm y_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, x_0, y_0);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          ATerm c_19;
          c_19 = t;
          {
            ATerm k_10 = NULL;
            t = conc_strings_0(t);
            k_10 = t;
            if(i_10 != NULL && i_10 != k_10)
              _fail(k_10);
            else
              i_10 = k_10;
          }
          t = c_19;
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
                return(t);
              }
              t = TCons_2(t, f_1, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, e_1);
            {
              ATerm d_19;
              d_19 = t;
              {
                ATerm l_10 = NULL;
                t = conc_strings_0(t);
                l_10 = t;
                if(j_10 != NULL && j_10 != l_10)
                  _fail(l_10);
                else
                  j_10 = l_10;
              }
              t = d_19;
              {
                ATerm p_19;
                p_19 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_10), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_10), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = conc_0(t);
                t = gcc_0(t);
                t = p_19;
              }
            }
          }
          return(t);
        }
        t = TCons_2(t, d_1, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, c_1);
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm pp_c_1 (ATerm t, ATerm d_66 (ATerm))
{
  ATerm r_10 = NULL;
  ATerm q_19;
  q_19 = t;
  t = dtime_0(t);
  t = q_19;
  {
    ATerm g_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("/ac2c", 0, ATtrue));
      t = pref_1(t, d_66);
      return(t);
    }
    ATerm h_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
      return(t);
    }
    t = pipe_2(t, g_1, h_1);
    {
      ATerm u_19;
      u_19 = t;
      {
        ATerm s_10 = NULL;
        ATerm t_10 = NULL;
        t = dtime_0(t);
        s_10 = t;
        if(r_10 != NULL && r_10 != s_10)
          _fail(s_10);
        else
          r_10 = s_10;
        {
          ATerm u_10 = NULL;
          t = (ATerm) ATmakeAppl(ATmakeSymbol("/ac2c", 0, ATtrue));
          t = pref_1(t, d_66);
          u_10 = t;
          if(t_10 != NULL && t_10 != u_10)
            _fail(u_10);
          else
            t_10 = u_10;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(")", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      t = u_19;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_49 (ATerm))
{
  ATerm v_19;
  v_19 = t;
  {
    ATerm z_10 = NULL,b_11 = NULL;
    ATerm y_19;
    y_19 = t;
    {
      ATerm a_11 = NULL;
      t = o_49(t);
      a_11 = t;
      if(z_10 != NULL && z_10 != a_11)
        _fail(a_11);
      else
        z_10 = a_11;
    }
    t = y_19;
    {
      ATerm c_11 = NULL;
      c_11 = t;
      if(b_11 != NULL && b_11 != c_11)
        _fail(c_11);
      else
        b_11 = c_11;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_10), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_11), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
    }
  }
  t = v_19;
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm g_11 = NULL;
  g_11 = t;
  t = SSL_table_keys(not_null(g_11));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  t = table_keys_0(t);
  {
    ATerm i_1 (ATerm t)
    {
      ATerm o_11 = NULL;
      ATerm q_11 = NULL;
      o_11 = t;
      {
        ATerm r_11 = NULL;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_11), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_11), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = table_get_0(t);
        r_11 = t;
        if(q_11 != NULL && q_11 != r_11)
          _fail(r_11);
        else
          q_11 = r_11;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_11), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_11), (ATerm) ATmakeAppl(sym_TNil_0)));
      }
      return(t);
    }
    t = map_1(t, i_1);
  }
  return(t);
}
ATerm get_traced_funs_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  t = table_getlist_0(t);
  {
    ATerm j_1 (ATerm t)
    {
      ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
      z_11 = t;
      w_11 :
      if(match_cons(z_11, sym_TCons_2))
        {
          a_12 = ATgetArgument(z_11, 0);
          b_12 = ATgetArgument(z_11, 1);
          x_11 :
          if(match_cons(b_12, sym_TCons_2))
            {
              c_12 = ATgetArgument(b_12, 0);
              d_12 = ATgetArgument(b_12, 1);
              y_11 :
              if(match_cons(d_12, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_12), (ATerm) ATmakeAppl(sym_Nil_0)));
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
    t = map_1(t, j_1);
    t = concat_0(t);
    {
      ATerm z_19 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = z_19;
          {
            ATerm k_1 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("traced functions: ", 0, ATtrue));
              return(t);
            }
            t = debug_1(t, k_1);
          }
        }
    }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_Cons_2))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      t = not_null(j_12);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  s_12 = t;
  p_12 :
  if(match_cons(s_12, sym_TCons_2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      q_12 :
      if(match_cons(u_12, sym_TCons_2))
        {
          v_12 = ATgetArgument(u_12, 0);
          w_12 = ATgetArgument(u_12, 1);
          r_12 :
          if(match_cons(w_12, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_12), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm b_44 (ATerm))
{
  ATerm l_13 = NULL;
  ATerm q_13 = NULL;
  l_13 = t;
  {
    ATerm r_13 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = b_44(t);
    r_13 = t;
    if(q_13 != NULL && q_13 != r_13)
      _fail(r_13);
    else
      q_13 = r_13;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_13), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_lookup_0(t);
  }
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_TNil_0))
    {
      ATerm b_14 = NULL,c_14 = NULL;
      t = (ATerm) ATmakeAppl(sym_Keys_0);
      {
        ATerm l_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
          return(t);
        }
        t = rewrite_1(t, l_1);
        b_14 = t;
        v_13 :
        if(match_cons(b_14, sym_Defined_1))
          {
            c_14 = ATgetArgument(b_14, 0);
            y_13 :
            if(!(match_string(c_14, "b_0")))
              _fail(t);
          }
        else
          _fail(t);
      }
      t = (ATerm) ATmakeAppl(sym_TNil_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm s2c_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm m_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/s2c", 0, ATtrue));
    t = pref_1(t, v_65);
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    {
      ATerm e_20 = t;
      if(PushChoice()==0)
        {
          t = TraceAllFuns_0(t);
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
          PopChoice();
        }
      else
        {
          t = e_20;
          t = get_traced_funs_0(t);
        }
    }
    return(t);
  }
  t = pipe_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm stratego_cf_1 (ATerm t, ATerm g_66 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Canonical-Format", 0, ATtrue));
    t = pref_1(t, g_66);
    return(t);
  }
  t = pipe_2(t, p_1, _id);
  return(t);
}
ATerm canonicalize_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/canonicalize", 0, ATtrue));
    t = pref_1(t, u_65);
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, q_1, r_1);
  return(t);
}
ATerm optimize2_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize2", 0, ATtrue));
    t = pref_1(t, t_65);
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, t_1, u_1);
  return(t);
}
ATerm compile_match_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/compile-match", 0, ATtrue));
    t = pref_1(t, s_65);
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, v_1, e_2);
  return(t);
}
ATerm fusion_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/fusion", 0, ATtrue));
    t = pref_1(t, y_65);
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".so2", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, f_2, g_2);
  return(t);
}
ATerm FUSION_0 (ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  e_14 :
  if(!(match_cons(f_14, sym_FUSION_0)))
    _fail(t);
  return(t);
}
ATerm optimize1_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize1", 0, ATtrue));
    t = pref_1(t, r_65);
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, j_2, l_2);
  return(t);
}
ATerm inline_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/inline", 0, ATtrue));
    t = pref_1(t, q_65);
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, m_2, n_2);
  return(t);
}
ATerm rename_defs_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/rename-defs", 0, ATtrue));
    t = pref_1(t, p_65);
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, w_2, x_2);
  return(t);
}
ATerm stratego_nf_1 (ATerm t, ATerm f_66 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Normal-Format", 0, ATtrue));
    t = pref_1(t, f_66);
    return(t);
  }
  t = pipe_2(t, y_2, _id);
  return(t);
}
ATerm extract_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/extract", 0, ATtrue));
    t = pref_1(t, n_65);
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, z_2, l_3);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm f_20;
  f_20 = t;
  {
    ATerm h_14 = NULL;
    ATerm l_14 = NULL;
    l_14 = t;
    if(h_14 != NULL && h_14 != l_14)
      _fail(l_14);
    else
      h_14 = l_14;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_14), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
  }
  t = f_20;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm g_20;
  g_20 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = g_20;
  return(t);
}
ATerm extract_all_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/extract-all", 0, ATtrue));
    t = pref_1(t, o_65);
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, m_3, n_3);
  return(t);
}
ATerm FRONTEND_0 (ATerm t)
{
  ATerm a_15 = NULL;
  a_15 = t;
  z_14 :
  if(!(match_cons(a_15, sym_FRONTEND_0)))
    _fail(t);
  return(t);
}
ATerm output_frontend_1 (ATerm t, ATerm j_65 (ATerm))
{
  ATerm m_15 = NULL,n_15 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      t = option_defined_1(t, FRONTEND_0);
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, p_3, z_3);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm k_4 (ATerm t)
        {
          ATerm h_20 = t;
          if(PushChoice()==0)
            {
              t = extract_all_1(t, j_65);
              PopChoice();
            }
          else
            {
              t = h_20;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
              t = fatal_error_0(t);
            }
          return(t);
        }
        t = TCons_2(t, k_4, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, b_4);
      {
        ATerm l_4 (ATerm t)
        {
          ATerm m_4 (ATerm t)
          {
            ATerm n_4 (ATerm t)
            {
              ATerm q_15 = NULL;
              q_15 = t;
              if(m_15 != NULL && m_15 != q_15)
                _fail(q_15);
              else
                m_15 = q_15;
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              ATerm t_4 (ATerm t)
              {
                ATerm r_15 = NULL;
                r_15 = t;
                if(n_15 != NULL && n_15 != r_15)
                  _fail(r_15);
                else
                  n_15 = r_15;
                return(t);
              }
              t = TCons_2(t, t_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, n_4, o_4);
            return(t);
          }
          t = TCons_2(t, m_4, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, l_4);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_15), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_15), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        t = (ATerm) ATmakeInt(0);
        t = exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm pipe_2 (ATerm t, ATerm s_46 (ATerm), ATerm t_46 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = pipe_3(t, s_46, t_46, u_4);
  return(t);
}
ATerm frontend_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/frontend", 0, ATtrue));
    t = pref_1(t, m_65);
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, w_4, y_4);
  return(t);
}
ATerm list_1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm u_15 (ATerm t)
  {
    ATerm i_20 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = i_20;
        t = Cons_2(t, e_58, u_15);
      }
    return(t);
  }
  t = u_15(t);
  return(t);
}
ATerm core_0 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm z_4 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      ATerm d_5 (ATerm t)
      {
        ATerm m_5 (ATerm t)
        {
          ATerm x_15 = NULL;
          x_15 = t;
          if(w_15 != NULL && w_15 != x_15)
            _fail(x_15);
          else
            w_15 = x_15;
          return(t);
        }
        t = ExecDir_1(t, m_5);
        return(t);
      }
      t = try_1(t, d_5);
      return(t);
    }
    t = list_1(t, b_5);
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = TCons_2(t, _id, TNil_0);
    return(t);
  }
  t = TCons_2(t, z_4, a_5);
  {
    ATerm n_5 (ATerm t)
    {
      ATerm o_5 (ATerm t)
      {
        ATerm p_5 (ATerm t)
        {
          t = not_null(w_15);
          return(t);
        }
        t = frontend_1(t, p_5);
        return(t);
      }
      t = TCons_2(t, o_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, n_5);
    {
      ATerm q_5 (ATerm t)
      {
        t = not_null(w_15);
        return(t);
      }
      t = output_frontend_1(t, q_5);
      {
        ATerm g_6 (ATerm t)
        {
          ATerm h_6 (ATerm t)
          {
            ATerm i_6 (ATerm t)
            {
              t = not_null(w_15);
              return(t);
            }
            t = extract_1(t, i_6);
            {
              ATerm j_6 (ATerm t)
              {
                t = not_null(w_15);
                return(t);
              }
              t = stratego_nf_1(t, j_6);
              {
                ATerm k_6 (ATerm t)
                {
                  t = not_null(w_15);
                  return(t);
                }
                t = rename_defs_1(t, k_6);
                {
                  ATerm l_6 (ATerm t)
                  {
                    t = not_null(w_15);
                    return(t);
                  }
                  t = inline_1(t, l_6);
                  {
                    ATerm m_6 (ATerm t)
                    {
                      t = not_null(w_15);
                      return(t);
                    }
                    t = optimize1_1(t, m_6);
                  }
                }
              }
            }
            return(t);
          }
          t = TCons_2(t, h_6, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, g_6);
        {
          ATerm r_6 (ATerm t)
          {
            ATerm s_6 (ATerm t)
            {
              t = option_defined_1(t, FUSION_0);
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              ATerm g_7 (ATerm t)
              {
                ATerm h_7 (ATerm t)
                {
                  t = not_null(w_15);
                  return(t);
                }
                t = fusion_1(t, h_7);
                return(t);
              }
              t = TCons_2(t, g_7, TNil_0);
              return(t);
            }
            t = TCons_2(t, s_6, t_6);
            return(t);
          }
          t = try_1(t, r_6);
          {
            ATerm k_7 (ATerm t)
            {
              ATerm l_7 (ATerm t)
              {
                ATerm m_7 (ATerm t)
                {
                  t = not_null(w_15);
                  return(t);
                }
                t = compile_match_1(t, m_7);
                {
                  ATerm o_7 (ATerm t)
                  {
                    t = not_null(w_15);
                    return(t);
                  }
                  t = optimize2_1(t, o_7);
                }
                return(t);
              }
              t = TCons_2(t, l_7, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, k_7);
            {
              ATerm p_7 (ATerm t)
              {
                ATerm r_7 (ATerm t)
                {
                  ATerm s_7 (ATerm t)
                  {
                    t = not_null(w_15);
                    return(t);
                  }
                  t = canonicalize_1(t, s_7);
                  {
                    ATerm w_7 (ATerm t)
                    {
                      t = not_null(w_15);
                      return(t);
                    }
                    t = stratego_cf_1(t, w_7);
                    {
                      ATerm y_7 (ATerm t)
                      {
                        t = not_null(w_15);
                        return(t);
                      }
                      t = s2c_1(t, y_7);
                      {
                        ATerm z_7 (ATerm t)
                        {
                          t = not_null(w_15);
                          return(t);
                        }
                        t = pp_c_1(t, z_7);
                      }
                    }
                  }
                  return(t);
                }
                t = TCons_2(t, r_7, TNil_0);
                return(t);
              }
              t = TCons_2(t, _id, p_7);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm transform_file_2 (ATerm t, ATerm a_47 (ATerm), ATerm b_47 (ATerm))
{
  ATerm b_16 = NULL,d_16 = NULL;
  ATerm r_20;
  r_20 = t;
  {
    ATerm c_16 = NULL;
    t = conc_strings_0(t);
    c_16 = t;
    if(b_16 != NULL && b_16 != c_16)
      _fail(c_16);
    else
      b_16 = c_16;
  }
  t = r_20;
  {
    ATerm a_8 (ATerm t)
    {
      t = TCons_2(t, b_47, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, a_8);
    {
      ATerm s_20;
      s_20 = t;
      {
        ATerm e_16 = NULL;
        t = conc_strings_0(t);
        e_16 = t;
        if(d_16 != NULL && d_16 != e_16)
          _fail(e_16);
        else
          d_16 = e_16;
      }
      t = s_20;
      {
        ATerm t_20;
        t_20 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_16), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = apply_to_file_1(t, a_47);
        t = t_20;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Specification_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      {
        ATerm n_16 = NULL;
        ATerm o_16 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = k_65(t);
        o_16 = t;
        if(n_16 != NULL && n_16 != o_16)
          _fail(o_16);
        else
          n_16 = o_16;
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_16)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0))), not_null(l_16)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Main_1 (ATerm t, ATerm l_43 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL;
  z_16 = t;
  v_16 :
  if(match_cons(z_16, sym_Main_1))
    {
      a_17 = ATgetArgument(z_16, 0);
      {
        ATerm c_17 = NULL;
        t = not_null(a_17);
        t = l_43(t);
        c_17 = t;
        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(c_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm h_17 = NULL;
  ATerm u_20 = t;
  if(PushChoice()==0)
    {
      ATerm b_8 (ATerm t)
      {
        ATerm g_8 (ATerm t)
        {
          ATerm i_8 (ATerm t)
          {
            ATerm i_17 = NULL;
            i_17 = t;
            if(h_17 != NULL && h_17 != i_17)
              _fail(i_17);
            else
              h_17 = i_17;
            return(t);
          }
          t = Main_1(t, i_8);
          return(t);
        }
        t = option_defined_1(t, g_8);
        return(t);
      }
      ATerm c_8 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, b_8, c_8);
      {
        ATerm j_8 (ATerm t)
        {
          ATerm k_8 (ATerm t)
          {
            ATerm l_8 (ATerm t)
            {
              ATerm n_8 (ATerm t)
              {
                t = not_null(h_17);
                return(t);
              }
              t = AddMain_1(t, n_8);
              return(t);
            }
            ATerm m_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
              return(t);
            }
            t = transform_file_2(t, l_8, m_8);
            return(t);
          }
          t = TCons_2(t, k_8, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, j_8);
      }
      PopChoice();
    }
  else
    {
      t = u_20;
      {
        ATerm o_8 (ATerm t)
        {
          ATerm p_8 (ATerm t)
          {
            ATerm q_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
              return(t);
            }
            t = transform_file_2(t, _id, q_8);
            return(t);
          }
          t = TCons_2(t, p_8, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, o_8);
      }
    }
  return(t);
}
ATerm AST_0 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  k_17 :
  if(!(match_cons(l_17, sym_AST_0)))
    _fail(t);
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  ATerm d_9 (ATerm t)
  {
    ATerm e_9 (ATerm t)
    {
      t = option_defined_1(t, AST_0);
      return(t);
    }
    ATerm f_9 (ATerm t)
    {
      ATerm g_9 (ATerm t)
      {
        ATerm h_9 (ATerm t)
        {
          ATerm q_17 = NULL;
          q_17 = t;
          if(o_17 != NULL && o_17 != q_17)
            _fail(q_17);
          else
            o_17 = q_17;
          return(t);
        }
        ATerm i_9 (ATerm t)
        {
          ATerm j_9 (ATerm t)
          {
            ATerm r_17 = NULL;
            r_17 = t;
            if(p_17 != NULL && p_17 != r_17)
              _fail(r_17);
            else
              p_17 = r_17;
            return(t);
          }
          t = TCons_2(t, j_9, TNil_0);
          return(t);
        }
        t = TCons_2(t, h_9, i_9);
        return(t);
      }
      t = TCons_2(t, g_9, TNil_0);
      return(t);
    }
    t = TCons_2(t, e_9, f_9);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_17), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_17), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
    return(t);
  }
  t = try_1(t, d_9);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  v_17 :
  if(match_cons(y_17, sym_TCons_2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      w_17 :
      if(match_cons(a_18, sym_TCons_2))
        {
          b_18 = ATgetArgument(a_18, 0);
          c_18 = ATgetArgument(a_18, 1);
          x_17 :
          if(match_cons(c_18, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(z_17), not_null(b_18));
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  t = SSL_ReadFromFile(not_null(h_18));
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm c_47 (ATerm))
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  p_18 = t;
  m_18 :
  if(match_cons(p_18, sym_TCons_2))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      n_18 :
      if(match_cons(r_18, sym_TCons_2))
        {
          s_18 = ATgetArgument(r_18, 0);
          t_18 = ATgetArgument(r_18, 1);
          o_18 :
          if(match_cons(t_18, sym_TNil_0))
            {
              ATerm w_18 = NULL;
              ATerm v_20;
              v_20 = t;
              {
                ATerm x_18 = NULL;
                t = not_null(q_18);
                t = ReadFromFile_0(t);
                t = c_47(t);
                x_18 = t;
                if(w_18 != NULL && w_18 != x_18)
                  _fail(x_18);
                else
                  w_18 = x_18;
              }
              t = v_20;
              {
                ATerm w_20;
                w_20 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = WriteToBinaryFile_0(t);
                t = w_20;
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
ATerm copy_file_3 (ATerm t, ATerm d_47 (ATerm), ATerm e_47 (ATerm), ATerm f_47 (ATerm))
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  k_19 = t;
  h_19 :
  if(match_cons(k_19, sym_TCons_2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      i_19 :
      if(match_cons(m_19, sym_TCons_2))
        {
          n_19 = ATgetArgument(m_19, 0);
          o_19 = ATgetArgument(m_19, 1);
          j_19 :
          if(match_cons(o_19, sym_TNil_0))
            {
              ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,w_19 = NULL,x_19 = NULL;
              ATerm l_9 (ATerm t)
              {
                t = TCons_2(t, f_47, TNil_0);
                return(t);
              }
              t = TCons_2(t, e_47, l_9);
              r_19 = t;
              e_19 :
              if(match_cons(r_19, sym_TCons_2))
                {
                  s_19 = ATgetArgument(r_19, 0);
                  t_19 = ATgetArgument(r_19, 1);
                  f_19 :
                  if(match_cons(t_19, sym_TCons_2))
                    {
                      w_19 = ATgetArgument(t_19, 0);
                      x_19 = ATgetArgument(t_19, 1);
                      g_19 :
                      if(match_cons(x_19, sym_TNil_0))
                        {
                          ATerm x_20;
                          x_20 = t;
                          {
                            ATerm a_20 = NULL,c_20 = NULL;
                            ATerm y_20;
                            y_20 = t;
                            {
                              ATerm b_20 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_strings_0(t);
                              b_20 = t;
                              if(a_20 != NULL && a_20 != b_20)
                                _fail(b_20);
                              else
                                a_20 = b_20;
                            }
                            t = y_20;
                            {
                              ATerm d_20 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_strings_0(t);
                              d_20 = t;
                              if(c_20 != NULL && c_20 != d_20)
                                _fail(d_20);
                              else
                                c_20 = d_20;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = apply_to_file_1(t, d_47);
                            }
                          }
                          t = x_20;
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
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  m_20 = t;
  j_20 :
  if(match_cons(m_20, sym_TCons_2))
    {
      n_20 = ATgetArgument(m_20, 0);
      o_20 = ATgetArgument(m_20, 1);
      k_20 :
      if(match_cons(o_20, sym_TCons_2))
        {
          p_20 = ATgetArgument(o_20, 0);
          q_20 = ATgetArgument(o_20, 1);
          l_20 :
          if(match_cons(q_20, sym_TNil_0))
            {
              t = not_null(n_20);
              {
                ATerm m_9 (ATerm t)
                {
                  t = not_null(p_20);
                  return(t);
                }
                t = at_end_1(t, m_9);
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
ATerm pref_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm g_21 = NULL;
  ATerm i_21 = NULL;
  g_21 = t;
  {
    ATerm j_21 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = l_65(t);
    j_21 = t;
    if(i_21 != NULL && i_21 != j_21)
      _fail(j_21);
    else
      i_21 = j_21;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_21), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  q_21 = t;
  n_21 :
  if(match_cons(q_21, sym_TCons_2))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      o_21 :
      if(match_cons(s_21, sym_TCons_2))
        {
          t_21 = ATgetArgument(s_21, 0);
          u_21 = ATgetArgument(s_21, 1);
          p_21 :
          if(match_cons(u_21, sym_TNil_0))
            t = SSL_call(not_null(r_21), not_null(t_21));
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
ATerm conc_strings_0 (ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    t = TCons_2(t, explode_string_0, TNil_0);
    return(t);
  }
  t = TCons_2(t, explode_string_0, n_9);
  t = conc_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm pipe_3 (ATerm t, ATerm u_46 (ATerm), ATerm v_46 (ATerm), ATerm w_46 (ATerm))
{
  ATerm c_22 = NULL,e_22 = NULL;
  ATerm z_20;
  z_20 = t;
  {
    ATerm d_22 = NULL;
    t = conc_strings_0(t);
    d_22 = t;
    if(c_22 != NULL && c_22 != d_22)
      _fail(d_22);
    else
      c_22 = d_22;
  }
  t = z_20;
  {
    ATerm o_9 (ATerm t)
    {
      t = TCons_2(t, v_46, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, o_9);
    {
      ATerm a_21;
      a_21 = t;
      {
        ATerm f_22 = NULL;
        t = conc_strings_0(t);
        f_22 = t;
        if(e_22 != NULL && e_22 != f_22)
          _fail(f_22);
        else
          e_22 = f_22;
      }
      t = a_21;
      {
        ATerm b_21;
        b_21 = t;
        {
          ATerm g_22 = NULL,i_22 = NULL;
          ATerm c_21;
          c_21 = t;
          {
            ATerm h_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            t = u_46(t);
            h_22 = t;
            if(g_22 != NULL && g_22 != h_22)
              _fail(h_22);
            else
              g_22 = h_22;
          }
          t = c_21;
          {
            ATerm j_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            t = w_46(t);
            j_22 = t;
            if(i_22 != NULL && i_22 != j_22)
              _fail(j_22);
            else
              i_22 = j_22;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_22), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_22), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_22), not_null(i_22))))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = call_0(t);
          }
        }
        t = b_21;
      }
    }
  }
  return(t);
}
ATerm Output_1 (ATerm t, ATerm b_43 (ATerm))
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym_Output_1))
    {
      s_22 = ATgetArgument(r_22, 0);
      {
        ATerm u_22 = NULL;
        t = not_null(s_22);
        t = b_43(t);
        u_22 = t;
        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_22));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ExecDir_1 (ATerm t, ATerm g_43 (ATerm))
{
  ATerm b_23 = NULL,c_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym_ExecDir_1))
    {
      c_23 = ATgetArgument(b_23, 0);
      {
        ATerm e_23 = NULL;
        t = not_null(c_23);
        t = g_43(t);
        e_23 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(e_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InclDir_1 (ATerm t, ATerm h_43 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_InclDir_1))
    {
      m_23 = ATgetArgument(l_23, 0);
      {
        ATerm o_23 = NULL;
        t = not_null(m_23);
        t = h_43(t);
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym_InclDir_1, not_null(o_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  ATerm s_9 (ATerm t)
  {
    ATerm v_9 (ATerm t)
    {
      ATerm w_9 (ATerm t)
      {
        ATerm e_24 = NULL;
        e_24 = t;
        if(c_24 != NULL && c_24 != e_24)
          _fail(e_24);
        else
          c_24 = e_24;
        return(t);
      }
      t = InclDir_1(t, w_9);
      return(t);
    }
    t = option_defined_1(t, v_9);
    {
      ATerm x_9 (ATerm t)
      {
        ATerm y_9 (ATerm t)
        {
          ATerm f_24 = NULL;
          f_24 = t;
          if(a_24 != NULL && a_24 != f_24)
            _fail(f_24);
          else
            a_24 = f_24;
          return(t);
        }
        t = ExecDir_1(t, y_9);
        return(t);
      }
      t = option_defined_1(t, x_9);
      {
        ATerm z_9 (ATerm t)
        {
          ATerm a_10 (ATerm t)
          {
            ATerm b_10 (ATerm t)
            {
              ATerm g_24 = NULL;
              g_24 = t;
              if(d_24 != NULL && d_24 != g_24)
                _fail(g_24);
              else
                d_24 = g_24;
              return(t);
            }
            t = Output_1(t, b_10);
            return(t);
          }
          t = option_defined_1(t, a_10);
          return(t);
        }
        t = try_1(t, z_9);
      }
    }
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    ATerm c_10 (ATerm t)
    {
      ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
      h_24 = t;
      w_23 :
      if(match_cons(h_24, sym_TCons_2))
        {
          i_24 = ATgetArgument(h_24, 0);
          j_24 = ATgetArgument(h_24, 1);
          x_23 :
          if(match_cons(j_24, sym_TCons_2))
            {
              k_24 = ATgetArgument(j_24, 0);
              l_24 = ATgetArgument(j_24, 1);
              y_23 :
              if(match_cons(l_24, sym_TNil_0))
                {
                  if(b_24 != NULL && b_24 != i_24)
                    _fail(i_24);
                  else
                    b_24 = i_24;
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
    t = TCons_2(t, c_10, TNil_0);
    return(t);
  }
  t = TCons_2(t, s_9, u_9);
  {
    ATerm d_10 (ATerm t)
    {
      ATerm e_10 (ATerm t)
      {
        ATerm f_10 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego", 0, ATtrue));
          {
            ATerm o_10 (ATerm t)
            {
              t = not_null(a_24);
              return(t);
            }
            t = pref_1(t, o_10);
          }
          return(t);
        }
        ATerm m_10 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
          return(t);
        }
        ATerm n_10 (ATerm t)
        {
          ATerm m_24 = NULL;
          ATerm n_24 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm d_21 = t;
            if(PushChoice()==0)
              {
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_Nil_0)));
                PopChoice();
              }
            else
              {
                t = d_21;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_24), (ATerm) ATmakeAppl(sym_Nil_0)));
              }
            n_24 = t;
            if(m_24 != NULL && m_24 != n_24)
              _fail(n_24);
            else
              m_24 = n_24;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_24), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("--silent", 0, ATtrue)), not_null(c_24)), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = conc_0(t);
          return(t);
        }
        t = pipe_3(t, f_10, m_10, n_10);
        return(t);
      }
      t = TCons_2(t, e_10, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, d_10);
    {
      ATerm p_10 (ATerm t)
      {
        ATerm q_10 (ATerm t)
        {
          ATerm v_10 (ATerm t)
          {
            ATerm w_10 (ATerm t)
            {
              t = not_null(d_24);
              return(t);
            }
            ATerm x_10 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
              return(t);
            }
            t = copy_file_3(t, _id, w_10, x_10);
            return(t);
          }
          t = TCons_2(t, v_10, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, q_10);
        return(t);
      }
      t = try_1(t, p_10);
    }
  }
  return(t);
}
ATerm Verbose_0 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t_24 :
  if(!(match_cons(u_24, sym_Verbose_0)))
    _fail(t);
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  ATerm y_10 (ATerm t)
  {
    ATerm d_11 (ATerm t)
    {
      t = option_defined_1(t, Verbose_0);
      return(t);
    }
    ATerm e_11 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, d_11, e_11);
    {
      ATerm f_11 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, sc_version_0, f_11);
    }
    return(t);
  }
  t = try_1(t, y_10);
  return(t);
}
ATerm DeclVersion_1 (ATerm t, ATerm d_43 (ATerm))
{
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym_DeclVersion_1))
    {
      z_24 = ATgetArgument(y_24, 0);
      {
        ATerm b_25 = NULL;
        t = not_null(z_24);
        t = d_43(t);
        b_25 = t;
        t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(b_25));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm h_25 = NULL;
  ATerm e_21 = t;
  if(PushChoice()==0)
    {
      ATerm h_11 (ATerm t)
      {
        ATerm i_11 (ATerm t)
        {
          ATerm i_25 = NULL;
          i_25 = t;
          if(h_25 != NULL && h_25 != i_25)
            _fail(i_25);
          else
            h_25 = i_25;
          return(t);
        }
        t = DeclVersion_1(t, i_11);
        return(t);
      }
      t = option_defined_1(t, h_11);
      PopChoice();
    }
  else
    {
      t = e_21;
      {
        ATerm j_25 = NULL;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
        j_25 = t;
        if(h_25 != NULL && h_25 != j_25)
          _fail(j_25);
        else
          h_25 = j_25;
      }
    }
  {
    ATerm f_21;
    f_21 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(")", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = f_21;
  }
  return(t);
}
ATerm sc_usage_0 (ATerm t)
{
  t = sc_version_0(t);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Usage: sc [options] -i file\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Options:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -i spec       Compile specification spec\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -o target     Name executable target\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  --main s      Name main strategy [default: main]\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -I dir        Look in dir for imported Stratego modules\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -CI opt       Pass opt to gcc object compilation phase\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -CL opt       Pass opt to gcc linking phase\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  --trace-all   Trace all strategies in the specification\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -t f	      Trace strategy f\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  --ast         Output abstract syntax of specification\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  --norm        Do not remove intermediate files\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -F	      Produce all definitions pre-processed by frontend\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -v	      Show version\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("  -h|--help     Display this message", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))))))))))))), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  m_25 :
  if(!(match_cons(n_25, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_49 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    ATerm h_21 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = h_21;
        {
          ATerm k_21 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = k_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, j_11);
  t = d_49(t);
  return(t);
}
ATerm Input_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm t_25 = NULL,u_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym_Input_1))
    {
      u_25 = ATgetArgument(t_25, 0);
      {
        ATerm l_21 = t;
        if(PushChoice()==0)
          {
            ATerm w_25 = NULL;
            t = not_null(u_25);
            t = j_0(t);
            w_25 = t;
            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_25));
            PopChoice();
          }
        else
          {
            t = l_21;
            {
              ATerm z_25 = NULL;
              t = not_null(u_25);
              t = j_0(t);
              z_25 = t;
              t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_25));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_21 = t;
  if(PushChoice()==0)
    {
      ATerm k_11 (ATerm t)
      {
        ATerm q_26 = NULL;
        q_26 = t;
        f_26 :
        if(!(match_string(q_26, "-S")))
          {
            if(!(match_string(q_26, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm l_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm n_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, k_11, l_11, n_11);
      PopChoice();
    }
  else
    {
      t = m_21;
      {
        ATerm v_21 = t;
        if(PushChoice()==0)
          {
            ATerm p_11 (ATerm t)
            {
              ATerm r_26 = NULL;
              r_26 = t;
              g_26 :
              if(!(match_string(r_26, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm s_11 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm t_11 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, p_11, s_11, t_11);
            PopChoice();
          }
        else
          {
            t = v_21;
            {
              ATerm w_21 = t;
              if(PushChoice()==0)
                {
                  ATerm u_11 (ATerm t)
                  {
                    ATerm s_26 = NULL;
                    s_26 = t;
                    h_26 :
                    if(!(match_string(s_26, "-v")))
                      {
                        if(!(match_string(s_26, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm v_11 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm e_12 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, u_11, v_11, e_12);
                  PopChoice();
                }
              else
                {
                  t = w_21;
                  {
                    ATerm x_21 = t;
                    if(PushChoice()==0)
                      {
                        ATerm f_12 (ATerm t)
                        {
                          ATerm t_26 = NULL;
                          t_26 = t;
                          i_26 :
                          if(!(match_string(t_26, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm g_12 (ATerm t)
                        {
                          ATerm u_26 = NULL;
                          ATerm v_26 = NULL;
                          v_26 = t;
                          if(u_26 != NULL && u_26 != v_26)
                            _fail(v_26);
                          else
                            u_26 = v_26;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(u_26));
                          return(t);
                        }
                        ATerm l_12 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, f_12, g_12, l_12);
                        PopChoice();
                      }
                    else
                      {
                        t = x_21;
                        {
                          ATerm y_21 = t;
                          if(PushChoice()==0)
                            {
                              ATerm m_12 (ATerm t)
                              {
                                ATerm w_26 = NULL;
                                w_26 = t;
                                k_26 :
                                if(!(match_string(w_26, "-i")))
                                  {
                                    if(!(match_string(w_26, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm n_12 (ATerm t)
                              {
                                ATerm x_26 = NULL;
                                ATerm y_26 = NULL;
                                y_26 = t;
                                if(x_26 != NULL && x_26 != y_26)
                                  _fail(y_26);
                                else
                                  x_26 = y_26;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_26));
                                return(t);
                              }
                              ATerm o_12 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, m_12, n_12, o_12);
                              PopChoice();
                            }
                          else
                            {
                              t = y_21;
                              {
                                ATerm z_21 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm x_12 (ATerm t)
                                    {
                                      ATerm z_26 = NULL;
                                      z_26 = t;
                                      m_26 :
                                      if(!(match_string(z_26, "-o")))
                                        {
                                          if(!(match_string(z_26, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm y_12 (ATerm t)
                                    {
                                      ATerm a_27 = NULL;
                                      ATerm b_27 = NULL;
                                      b_27 = t;
                                      if(a_27 != NULL && a_27 != b_27)
                                        _fail(b_27);
                                      else
                                        a_27 = b_27;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_27));
                                      return(t);
                                    }
                                    ATerm z_12 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, x_12, y_12, z_12);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = z_21;
                                    {
                                      ATerm a_22 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm a_13 (ATerm t)
                                          {
                                            ATerm c_27 = NULL;
                                            c_27 = t;
                                            o_26 :
                                            if(!(match_string(c_27, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm b_13 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm c_13 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, a_13, b_13, c_13);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = a_22;
                                          {
                                            ATerm d_13 (ATerm t)
                                            {
                                              ATerm d_27 = NULL;
                                              d_27 = t;
                                              p_26 :
                                              if(!(match_string(d_27, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm e_13 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm f_13 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, d_13, e_13, f_13);
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
ATerm assert_1 (ATerm t, ATerm z_43 (ATerm))
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  o_27 = t;
  l_27 :
  if(match_cons(o_27, sym_TCons_2))
    {
      p_27 = ATgetArgument(o_27, 0);
      q_27 = ATgetArgument(o_27, 1);
      m_27 :
      if(match_cons(q_27, sym_TCons_2))
        {
          r_27 = ATgetArgument(q_27, 0);
          s_27 = ATgetArgument(q_27, 1);
          n_27 :
          if(match_cons(s_27, sym_TNil_0))
            {
              ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
              ATerm b_22;
              b_22 = t;
              {
                ATerm y_27 = NULL;
                ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                t = z_43(t);
                y_27 = t;
                if(v_27 != NULL && v_27 != y_27)
                  _fail(y_27);
                else
                  v_27 = y_27;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_27), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm k_22 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_27), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = k_22;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  z_27 = t;
                  k_27 :
                  if(match_cons(z_27, sym_Cons_2))
                    {
                      a_28 = ATgetArgument(z_27, 0);
                      b_28 = ATgetArgument(z_27, 1);
                      if(w_27 != NULL && w_27 != a_28)
                        _fail(a_28);
                      else
                        w_27 = a_28;
                      if(x_27 != NULL && x_27 != b_28)
                        _fail(b_28);
                      else
                        x_27 = b_28;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_27), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_27), not_null(w_27)), not_null(x_27)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = b_22;
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
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  p_28 = t;
  n_28 :
  if(match_string(p_28, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(p_28, sym_Cons_2))
        {
          q_28 = ATgetArgument(p_28, 0);
          r_28 = ATgetArgument(p_28, 1);
          o_28 :
          if(match_cons(r_28, sym_Cons_2))
            {
              s_28 = ATgetArgument(r_28, 0);
              t_28 = ATgetArgument(r_28, 1);
              {
                ATerm x_28 = NULL;
                ATerm l_22;
                l_22 = t;
                t = not_null(q_28);
                t = g_0(t);
                t = l_22;
                {
                  ATerm y_28 = NULL;
                  t = not_null(s_28);
                  t = h_0(t);
                  y_28 = t;
                  if(x_28 != NULL && x_28 != y_28)
                    _fail(y_28);
                  else
                    x_28 = y_28;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_28), not_null(t_28));
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
ATerm ArgOption_2 (ATerm t, ATerm d_48 (ATerm), ATerm e_48 (ATerm))
{
  ATerm g_13 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = ArgOption_3(t, d_48, e_48, g_13);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm s_47 (ATerm), ATerm t_47 (ATerm))
{
  ATerm h_13 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, s_47, t_47, h_13);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm s_50 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm i_13 (ATerm t)
    {
      ATerm m_22 = t;
      if(PushChoice()==0)
        {
          t = Cons_2(t, _id, i_13);
          PopChoice();
        }
      else
        {
          t = m_22;
          {
            ATerm n_22 = t;
            if(PushChoice()==0)
              {
                ATerm j_13 (ATerm t)
                {
                  ATerm e_29 = NULL;
                  e_29 = t;
                  c_29 :
                  if(!(match_int(e_29, 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, j_13, _id);
                PopChoice();
              }
            else
              {
                t = n_22;
                {
                  ATerm k_13 (ATerm t)
                  {
                    ATerm f_29 = NULL;
                    f_29 = t;
                    d_29 :
                    if(!(match_int(f_29, 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2(t, k_13, s_50);
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, i_13);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm sc_options_0 (ATerm t)
{
  ATerm o_22 = t;
  if(PushChoice()==0)
    {
      ATerm m_13 (ATerm t)
      {
        ATerm d_30 = NULL;
        d_30 = t;
        h_29 :
        if(!(match_string(d_30, "-e")))
          _fail(t);
        return(t);
      }
      ATerm n_13 (ATerm t)
      {
        ATerm e_30 = NULL;
        e_30 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(e_30));
        return(t);
      }
      t = ArgOption_2(t, m_13, n_13);
      PopChoice();
    }
  else
    {
      t = o_22;
      {
        ATerm p_22 = t;
        if(PushChoice()==0)
          {
            ATerm o_13 (ATerm t)
            {
              ATerm g_30 = NULL;
              g_30 = t;
              j_29 :
              if(!(match_string(g_30, "-I")))
                _fail(t);
              return(t);
            }
            ATerm p_13 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Ignore_0);
              return(t);
            }
            t = ArgOption_2(t, o_13, p_13);
            PopChoice();
          }
        else
          {
            t = p_22;
            {
              ATerm t_22 = t;
              if(PushChoice()==0)
                {
                  ATerm s_13 (ATerm t)
                  {
                    ATerm h_30 = NULL;
                    h_30 = t;
                    k_29 :
                    if(!(match_string(h_30, "--Include")))
                      _fail(t);
                    return(t);
                  }
                  ATerm t_13 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Ignore_0);
                    return(t);
                  }
                  t = ArgOption_2(t, s_13, t_13);
                  PopChoice();
                }
              else
                {
                  t = t_22;
                  {
                    ATerm v_22 = t;
                    if(PushChoice()==0)
                      {
                        ATerm u_13 (ATerm t)
                        {
                          ATerm i_30 = NULL;
                          i_30 = t;
                          l_29 :
                          if(!(match_string(i_30, "-CI")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_13 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Ignore_0);
                          return(t);
                        }
                        t = ArgOption_2(t, u_13, w_13);
                        PopChoice();
                      }
                    else
                      {
                        t = v_22;
                        {
                          ATerm w_22 = t;
                          if(PushChoice()==0)
                            {
                              ATerm x_13 (ATerm t)
                              {
                                ATerm j_30 = NULL;
                                j_30 = t;
                                m_29 :
                                if(!(match_string(j_30, "-CL")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm d_14 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Ignore_0);
                                return(t);
                              }
                              t = ArgOption_2(t, x_13, d_14);
                              PopChoice();
                            }
                          else
                            {
                              t = w_22;
                              {
                                ATerm x_22 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm g_14 (ATerm t)
                                    {
                                      ATerm k_30 = NULL;
                                      k_30 = t;
                                      n_29 :
                                      if(!(match_string(k_30, "-CC")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm i_14 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(sym_CC_0);
                                      return(t);
                                    }
                                    t = Option_2(t, g_14, i_14);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_22;
                                    {
                                      ATerm y_22 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm j_14 (ATerm t)
                                          {
                                            ATerm l_30 = NULL;
                                            l_30 = t;
                                            o_29 :
                                            if(!(match_string(l_30, "--norm")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_14 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_NORM_0);
                                            return(t);
                                          }
                                          t = Option_2(t, j_14, k_14);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = y_22;
                                          {
                                            ATerm z_22 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm m_14 (ATerm t)
                                                {
                                                  ATerm m_30 = NULL;
                                                  m_30 = t;
                                                  p_29 :
                                                  if(!(match_string(m_30, "-i")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm n_14 (ATerm t)
                                                {
                                                  ATerm n_30 = NULL;
                                                  ATerm p_30 = NULL;
                                                  n_30 = t;
                                                  {
                                                    ATerm q_30 = NULL;
                                                    t = not_null(n_30);
                                                    t = basename_0(t);
                                                    q_30 = t;
                                                    if(p_30 != NULL && p_30 != q_30)
                                                      _fail(q_30);
                                                    else
                                                      p_30 = q_30;
                                                    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_30));
                                                  }
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, m_14, n_14);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = z_22;
                                                {
                                                  ATerm d_23 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm o_14 (ATerm t)
                                                      {
                                                        ATerm r_30 = NULL;
                                                        r_30 = t;
                                                        s_29 :
                                                        if(!(match_string(r_30, "--main")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm p_14 (ATerm t)
                                                      {
                                                        ATerm s_30 = NULL;
                                                        s_30 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(s_30));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, o_14, p_14);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = d_23;
                                                      {
                                                        ATerm f_23 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm q_14 (ATerm t)
                                                            {
                                                              ATerm u_30 = NULL;
                                                              u_30 = t;
                                                              u_29 :
                                                              if(!(match_string(u_30, "-m")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm r_14 (ATerm t)
                                                            {
                                                              ATerm v_30 = NULL;
                                                              v_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Main_1, not_null(v_30));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, q_14, r_14);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = f_23;
                                                            {
                                                              ATerm g_23 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm s_14 (ATerm t)
                                                                  {
                                                                    ATerm x_30 = NULL;
                                                                    x_30 = t;
                                                                    w_29 :
                                                                    if(!(match_string(x_30, "--ast")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm t_14 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_AST_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, s_14, t_14);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = g_23;
                                                                  {
                                                                    ATerm h_23 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm u_14 (ATerm t)
                                                                        {
                                                                          ATerm y_30 = NULL;
                                                                          y_30 = t;
                                                                          x_29 :
                                                                          if(!(match_string(y_30, "-F")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm v_14 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_FRONTEND_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, u_14, v_14);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_23;
                                                                        {
                                                                          ATerm i_23 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm w_14 (ATerm t)
                                                                              {
                                                                                ATerm z_30 = NULL;
                                                                                z_30 = t;
                                                                                y_29 :
                                                                                if(!(match_string(z_30, "--fusion")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm x_14 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_FUSION_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, w_14, x_14);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_23;
                                                                              {
                                                                                ATerm j_23 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm y_14 (ATerm t)
                                                                                    {
                                                                                      ATerm a_31 = NULL;
                                                                                      a_31 = t;
                                                                                      z_29 :
                                                                                      if(!(match_string(a_31, "--csyntax")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm b_15 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_CSYNTAX_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, y_14, b_15);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_23;
                                                                                    {
                                                                                      ATerm n_23 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          ATerm c_15 (ATerm t)
                                                                                          {
                                                                                            ATerm b_31 = NULL;
                                                                                            b_31 = t;
                                                                                            a_30 :
                                                                                            if(!(match_string(b_31, "--trace-all")))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm d_15 (ATerm t)
                                                                                          {
                                                                                            t = (ATerm) ATmakeAppl(sym_TraceAll_0);
                                                                                            {
                                                                                              ATerm p_23;
                                                                                              p_23 = t;
                                                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue))), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                                              {
                                                                                                ATerm e_15 (ATerm t)
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
                                                                                                  return(t);
                                                                                                }
                                                                                                t = assert_1(t, e_15);
                                                                                              }
                                                                                              t = p_23;
                                                                                            }
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_2(t, c_15, d_15);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_23;
                                                                                          {
                                                                                            ATerm f_15 (ATerm t)
                                                                                            {
                                                                                              ATerm g_31 = NULL;
                                                                                              g_31 = t;
                                                                                              b_30 :
                                                                                              if(!(match_string(g_31, "-t")))
                                                                                                _fail(t);
                                                                                              return(t);
                                                                                            }
                                                                                            ATerm g_15 (ATerm t)
                                                                                            {
                                                                                              ATerm h_31 = NULL;
                                                                                              h_31 = t;
                                                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_31)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue))), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                                              {
                                                                                                ATerm h_15 (ATerm t)
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
                                                                                                  return(t);
                                                                                                }
                                                                                                t = assert_1(t, h_15);
                                                                                              }
                                                                                              t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(h_31));
                                                                                              return(t);
                                                                                            }
                                                                                            t = ArgOption_2(t, f_15, g_15);
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
  ATerm v_31 = NULL;
  v_31 = t;
  t = SSL_table_destroy(not_null(v_31));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  t = SSL_implode_string(not_null(d_32));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm g_32 (ATerm t)
  {
    ATerm q_23 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, g_32);
        PopChoice();
      }
    else
      {
        t = q_23;
        t = Nil_0(t);
        t = q_58(t);
      }
    return(t);
  }
  t = g_32(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_23 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = r_23;
      {
        ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
        j_32 = t;
        i_32 :
        if(match_cons(j_32, sym_Cons_2))
          {
            k_32 = ATgetArgument(j_32, 0);
            l_32 = ATgetArgument(j_32, 1);
            t = not_null(k_32);
            {
              ATerm i_15 (ATerm t)
              {
                t = not_null(l_32);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, i_15);
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
  ATerm r_32 = NULL;
  r_32 = t;
  t = SSL_explode_string(not_null(r_32));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm v_33 (ATerm t)
  {
    ATerm s_23 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = s_23;
        t = Cons_2(t, c_58, v_33);
      }
    return(t);
  }
  t = v_33(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  l_34 = t;
  h_34 :
  if(match_cons(l_34, sym_TCons_2))
    {
      m_34 = ATgetArgument(l_34, 0);
      n_34 = ATgetArgument(l_34, 1);
      i_34 :
      if(match_cons(m_34, sym_Nil_0))
        {
          j_34 :
          if(match_cons(n_34, sym_TCons_2))
            {
              o_34 = ATgetArgument(n_34, 0);
              p_34 = ATgetArgument(n_34, 1);
              k_34 :
              if(match_cons(p_34, sym_TNil_0))
                t = not_null(o_34);
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
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  x_34 = t;
  t_34 :
  if(match_cons(x_34, sym_TCons_2))
    {
      y_34 = ATgetArgument(x_34, 0);
      b_35 = ATgetArgument(x_34, 1);
      u_34 :
      if(match_cons(y_34, sym_Cons_2))
        {
          z_34 = ATgetArgument(y_34, 0);
          a_35 = ATgetArgument(y_34, 1);
          v_34 :
          if(match_cons(b_35, sym_TCons_2))
            {
              c_35 = ATgetArgument(b_35, 0);
              d_35 = ATgetArgument(b_35, 1);
              w_34 :
              if(match_cons(d_35, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), not_null(c_35)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm x_63 (ATerm), ATerm y_63 (ATerm))
{
  ATerm i_35 (ATerm t)
  {
    ATerm t_23 = t;
    if(PushChoice()==0)
      {
        t = x_63(t);
        t = i_35(t);
        PopChoice();
      }
    else
      {
        t = t_23;
        t = y_63(t);
      }
    return(t);
  }
  t = i_35(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm a_64 (ATerm))
{
  t = repeat_2(t, a_64, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_42 (ATerm))
{
  ATerm q_35 = NULL,r_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym_Program_1))
    {
      r_35 = ATgetArgument(q_35, 0);
      {
        ATerm t_35 = NULL;
        t = not_null(r_35);
        t = y_42(t);
        t_35 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm b_36 = NULL;
  ATerm j_15 (ATerm t)
  {
    ATerm k_15 (ATerm t)
    {
      ATerm c_36 = NULL;
      c_36 = t;
      if(b_36 != NULL && b_36 != c_36)
        _fail(c_36);
      else
        b_36 = c_36;
      return(t);
    }
    t = Program_1(t, k_15);
    return(t);
  }
  t = option_defined_1(t, j_15);
  {
    ATerm l_15 (ATerm t)
    {
      ATerm d_36 = NULL;
      ATerm e_36 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm o_15 (ATerm t)
        {
          t = not_null(b_36);
          return(t);
        }
        t = short_description_1(t, o_15);
        t = concat_strings_0(t);
        e_36 = t;
        if(d_36 != NULL && d_36 != e_36)
          _fail(e_36);
        else
          d_36 = e_36;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, l_15);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm p_15 (ATerm t)
      {
        ATerm f_36 = NULL;
        f_36 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_36), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, p_15);
      {
        ATerm s_15 (ATerm t)
        {
          ATerm h_36 = NULL;
          ATerm i_36 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm t_15 (ATerm t)
            {
              t = not_null(b_36);
              return(t);
            }
            t = long_description_1(t, t_15);
            t = concat_strings_0(t);
            i_36 = t;
            if(h_36 != NULL && h_36 != i_36)
              _fail(i_36);
            else
              h_36 = i_36;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_36), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, s_15);
      }
    }
  }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_42 (ATerm))
{
  ATerm q_36 = NULL,r_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym_Undefined_1))
    {
      r_36 = ATgetArgument(q_36, 0);
      {
        ATerm t_36 = NULL;
        t = not_null(r_36);
        t = z_42(t);
        t_36 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_36));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  x_36 :
  if(!(match_cons(y_36, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  d_37 = t;
  a_37 :
  if(match_cons(d_37, sym_TCons_2))
    {
      e_37 = ATgetArgument(d_37, 0);
      f_37 = ATgetArgument(d_37, 1);
      b_37 :
      if(match_cons(f_37, sym_TCons_2))
        {
          g_37 = ATgetArgument(f_37, 0);
          h_37 = ATgetArgument(f_37, 1);
          c_37 :
          if(match_cons(h_37, sym_TNil_0))
            t = SSL_table_get(not_null(e_37), not_null(g_37));
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
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  r_37 = t;
  n_37 :
  if(match_cons(r_37, sym_TCons_2))
    {
      s_37 = ATgetArgument(r_37, 0);
      t_37 = ATgetArgument(r_37, 1);
      o_37 :
      if(match_cons(t_37, sym_TCons_2))
        {
          u_37 = ATgetArgument(t_37, 0);
          v_37 = ATgetArgument(t_37, 1);
          p_37 :
          if(match_cons(v_37, sym_TCons_2))
            {
              w_37 = ATgetArgument(v_37, 0);
              x_37 = ATgetArgument(v_37, 1);
              q_37 :
              if(match_cons(x_37, sym_TNil_0))
                {
                  ATerm u_23;
                  u_23 = t;
                  {
                    ATerm b_38 = NULL;
                    ATerm c_38 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_37), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_37), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm v_23 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = v_23;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      c_38 = t;
                      if(b_38 != NULL && b_38 != c_38)
                        _fail(c_38);
                      else
                        b_38 = c_38;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_37), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_37), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_37), not_null(b_38)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = u_23;
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
ATerm register_usage_1 (ATerm t, ATerm o_47 (ATerm))
{
  ATerm g_38 = NULL;
  ATerm h_38 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = o_47(t);
  h_38 = t;
  if(g_38 != NULL && g_38 != h_38)
    _fail(h_38);
  else
    g_38 = h_38;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_38), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_string(n_38, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(n_38, sym_Cons_2))
        {
          o_38 = ATgetArgument(n_38, 0);
          p_38 = ATgetArgument(n_38, 1);
          {
            ATerm s_38 = NULL;
            ATerm z_23;
            z_23 = t;
            t = not_null(o_38);
            t = d_0(t);
            t = z_23;
            {
              ATerm t_38 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              t_38 = t;
              if(s_38 != NULL && s_38 != t_38)
                _fail(t_38);
              else
                s_38 = t_38;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_38), not_null(p_38));
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
  ATerm v_15 (ATerm t)
  {
    ATerm y_38 = NULL;
    y_38 = t;
    x_38 :
    if(!(match_string(y_38, "--help")))
      {
        if(!(match_string(y_38, "-h")))
          {
            if(!(match_string(y_38, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm y_15 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm z_15 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, v_15, y_15, z_15);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym_Cons_2))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_39)), not_null(d_39));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_47 (ATerm))
{
  ATerm o_24;
  o_24 = t;
  {
    ATerm a_16 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = m_47(t);
      return(t);
    }
    t = try_1(t, a_16);
  }
  t = o_24;
  {
    ATerm f_16 (ATerm t)
    {
      ATerm i_39 = NULL;
      i_39 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_39));
      return(t);
    }
    ATerm g_16 (ATerm t)
    {
      ATerm p_24 = t;
      if(PushChoice()==0)
        {
          ATerm q_24 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = q_24;
              t = m_47(t);
              t = Cons_2(t, _id, g_16);
            }
          PopChoice();
        }
      else
        {
          t = p_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_16, g_16);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  ATerm r_24;
  r_24 = t;
  {
    ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
    u_39 = t;
    n_39 :
    if(match_cons(u_39, sym_TCons_2))
      {
        v_39 = ATgetArgument(u_39, 0);
        w_39 = ATgetArgument(u_39, 1);
        o_39 :
        if(match_cons(w_39, sym_TCons_2))
          {
            x_39 = ATgetArgument(w_39, 0);
            y_39 = ATgetArgument(w_39, 1);
            p_39 :
            if(match_cons(y_39, sym_TCons_2))
              {
                z_39 = ATgetArgument(y_39, 0);
                a_40 = ATgetArgument(y_39, 1);
                q_39 :
                if(match_cons(a_40, sym_TNil_0))
                  {
                    if(r_39 != NULL && r_39 != v_39)
                      _fail(v_39);
                    else
                      r_39 = v_39;
                    if(s_39 != NULL && s_39 != x_39)
                      _fail(x_39);
                    else
                      s_39 = x_39;
                    if(t_39 != NULL && t_39 != z_39)
                      _fail(z_39);
                    else
                      t_39 = z_39;
                    t = SSL_table_put(not_null(r_39), not_null(s_39), not_null(t_39));
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
  t = r_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_47 (ATerm))
{
  ATerm d_40 = NULL;
  ATerm s_24;
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = s_24;
  {
    ATerm h_16 (ATerm t)
    {
      ATerm v_24 = t;
      if(PushChoice()==0)
        {
          t = l_47(t);
          PopChoice();
        }
      else
        {
          t = v_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_16);
    {
      ATerm i_16 (ATerm t)
      {
        ATerm w_24 = t;
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
            t = w_24;
            {
              ATerm m_16 (ATerm t)
              {
                ATerm p_16 (ATerm t)
                {
                  ATerm e_40 = NULL;
                  e_40 = t;
                  if(d_40 != NULL && d_40 != e_40)
                    _fail(e_40);
                  else
                    d_40 = e_40;
                  return(t);
                }
                t = Undefined_1(t, p_16);
                return(t);
              }
              t = option_defined_1(t, m_16);
              {
                ATerm a_25;
                a_25 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_40), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = a_25;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_16);
      {
        ATerm c_25;
        c_25 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = c_25;
      }
    }
  }
  return(t);
}
ATerm skip1_1 (ATerm t, ATerm g_52 (ATerm))
{
  t = at_tail_1(t, g_52);
  return(t);
}
ATerm filter_option_args_1 (ATerm t, ATerm i_52 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    t = Cons_2(t, i_52, _id);
    t = Tl_0(t);
    return(t);
  }
  ATerm g_40 (ATerm t, ATerm h_40 (ATerm))
  {
    t = at_tail_1(t, h_40);
    return(t);
  }
  t = filter_gen_2(t, q_16, g_40);
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm o_58 (ATerm))
{
  t = Cons_2(t, _id, o_58);
  return(t);
}
ATerm skip2_1 (ATerm t, ATerm h_52 (ATerm))
{
  ATerm r_16 (ATerm t)
  {
    t = at_tail_1(t, h_52);
    return(t);
  }
  t = at_tail_1(t, r_16);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_43 (ATerm), ATerm s_43 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym_Cons_2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      {
        ATerm r_40 = NULL;
        t = not_null(n_40);
        {
          ATerm t_40 = NULL;
          t = r_43(t);
          r_40 = t;
          t = not_null(o_40);
          t = s_43(t);
          t_40 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_40), not_null(t_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym_Cons_2))
    {
      b_41 = ATgetArgument(a_41, 0);
      c_41 = ATgetArgument(a_41, 1);
      t = not_null(c_41);
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  g_41 :
  if(!(match_cons(h_41, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm filter_gen_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm, ATerm (ATerm)))
{
  ATerm i_41 (ATerm t)
  {
    ATerm d_25 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = d_25;
        {
          ATerm e_25 = t;
          if(PushChoice()==0)
            {
              t = d_52(t);
              t = e_52(t, i_41);
              PopChoice();
            }
          else
            {
              t = e_25;
              t = Tl_0(t);
              t = i_41(t);
            }
        }
      }
    return(t);
  }
  t = i_41(t);
  return(t);
}
ATerm filter_options_1 (ATerm t, ATerm j_52 (ATerm))
{
  ATerm s_16 (ATerm t)
  {
    t = Cons_2(t, j_52, _id);
    return(t);
  }
  t = filter_gen_2(t, s_16, skip2_1);
  return(t);
}
ATerm process_sc_options_0 (ATerm t)
{
  ATerm s_41 = NULL,v_41 = NULL,y_41 = NULL,b_42 = NULL;
  ATerm f_25;
  f_25 = t;
  {
    ATerm u_41 = NULL;
    ATerm t_16 (ATerm t)
    {
      ATerm t_41 = NULL;
      t_41 = t;
      j_41 :
      if(!(match_string(t_41, "-I")))
        _fail(t);
      return(t);
    }
    t = filter_options_1(t, t_16);
    u_41 = t;
    if(s_41 != NULL && s_41 != u_41)
      _fail(u_41);
    else
      s_41 = u_41;
  }
  t = f_25;
  {
    ATerm g_25;
    g_25 = t;
    {
      ATerm x_41 = NULL;
      ATerm u_16 (ATerm t)
      {
        ATerm w_41 = NULL;
        w_41 = t;
        l_41 :
        if(!(match_string(w_41, "-CI")))
          _fail(t);
        return(t);
      }
      t = filter_option_args_1(t, u_16);
      x_41 = t;
      if(v_41 != NULL && v_41 != x_41)
        _fail(x_41);
      else
        v_41 = x_41;
    }
    t = g_25;
    {
      ATerm k_25;
      k_25 = t;
      {
        ATerm a_42 = NULL;
        ATerm w_16 (ATerm t)
        {
          ATerm z_41 = NULL;
          z_41 = t;
          n_41 :
          if(!(match_string(z_41, "-CL")))
            _fail(t);
          return(t);
        }
        t = filter_option_args_1(t, w_16);
        a_42 = t;
        if(y_41 != NULL && y_41 != a_42)
          _fail(a_42);
        else
          y_41 = a_42;
      }
      t = k_25;
      {
        ATerm x_16 (ATerm t)
        {
          ATerm l_25 = t;
          if(PushChoice()==0)
            {
              t = sc_options_0(t);
              PopChoice();
            }
          else
            {
              t = l_25;
              t = io_options_0(t);
            }
          return(t);
        }
        t = parse_options_1(t, x_16);
        {
          ATerm o_25 = t;
          if(PushChoice()==0)
            {
              ATerm d_42 = NULL;
              ATerm y_16 (ATerm t)
              {
                ATerm b_17 (ATerm t)
                {
                  ATerm c_42 = NULL;
                  c_42 = t;
                  if(b_42 != NULL && b_42 != c_42)
                    _fail(c_42);
                  else
                    b_42 = c_42;
                  return(t);
                }
                t = Input_1(t, b_17);
                return(t);
              }
              t = option_defined_1(t, y_16);
              d_42 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_InclDir_1, not_null(s_41)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CInclDir_1, not_null(v_41)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CLibDir_1, not_null(y_41)), not_null(d_42)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(b_42), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".r", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
              PopChoice();
            }
          else
            {
              t = o_25;
              {
                ATerm f_42 = NULL;
                f_42 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Help_0), not_null(f_42)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
              }
            }
        }
      }
    }
  }
  return(t);
}
ATerm sc_0 (ATerm t)
{
  ATerm p_25 = t;
  if(PushChoice()==0)
    {
      t = process_sc_options_0(t);
      PopChoice();
    }
  else
    {
      t = p_25;
      t = sc_usage_0(t);
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  {
    ATerm q_25 = t;
    if(PushChoice()==0)
      {
        ATerm d_17 (ATerm t)
        {
          ATerm f_17 (ATerm t)
          {
            t = sc_usage_0(t);
            t = (ATerm) ATmakeInt(1);
            t = exit_0(t);
            return(t);
          }
          t = need_help_1(t, f_17);
          return(t);
        }
        ATerm e_17 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, d_17, e_17);
        PopChoice();
      }
    else
      {
        t = q_25;
        {
          ATerm r_25 = t;
          if(PushChoice()==0)
            {
              t = sc_announce_0(t);
              t = parse_0(t);
              t = output_ast_0(t);
              t = add_main_0(t);
              t = core_0(t);
              t = cc1_0(t);
              t = cc2_0(t);
              {
                ATerm g_17 (ATerm t)
                {
                  ATerm v_25 = t;
                  if(PushChoice()==0)
                    {
                      ATerm j_17 (ATerm t)
                      {
                        ATerm n_17 (ATerm t)
                        {
                          ATerm o_42 = NULL;
                          o_42 = t;
                          n_42 :
                          if(!(match_cons(o_42, sym_NORM_0)))
                            _fail(t);
                          return(t);
                        }
                        t = option_defined_1(t, n_17);
                        return(t);
                      }
                      ATerm m_17 (ATerm t)
                      {
                        t = TCons_2(t, _id, TNil_0);
                        return(t);
                      }
                      t = TCons_2(t, j_17, m_17);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = v_25;
                  {
                    ATerm s_17 (ATerm t)
                    {
                      t = TCons_2(t, remove_intermediates_0, TNil_0);
                      return(t);
                    }
                    t = TCons_2(t, _id, s_17);
                  }
                  return(t);
                }
                t = try_1(t, g_17);
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compilation succeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
              PopChoice();
            }
          else
            {
              t = r_25;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compilation failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = printnl_0(t);
              t = (ATerm) ATmakeInt(1);
              t = exit_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sc_0(t);
  return(t);
}
