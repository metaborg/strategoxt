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
Symbol sym_Operations_1;
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
  sym_Operations_1 = ATmakeSymbol("Operations", 1, ATfalse);
  ATprotectSymbol(sym_Operations_1);
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
ATerm genzip_4 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm), ATerm k_55 (ATerm), ATerm l_55 (ATerm));
ATerm rzip_1 (ATerm, ATerm x_55 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_57 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_47 (ATerm));
ATerm try_1 (ATerm, ATerm m_63 (ATerm));
ATerm eq_0 (ATerm);
ATerm SplitNext_0 (ATerm);
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm p_62 (ATerm), ATerm q_62 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_62 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm SplitExit_0 (ATerm);
ATerm SplitInit_0 (ATerm);
ATerm split_at_space_0 (ATerm);
ATerm CLibDir_1 (ATerm, ATerm e_43 (ATerm));
ATerm Dir_1 (ATerm, ATerm a_43 (ATerm));
ATerm cc2_0 (ATerm);
ATerm gcc_0 (ATerm);
ATerm CInclDir_1 (ATerm, ATerm d_43 (ATerm));
ATerm cc1_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm pp_c_1 (ATerm, ATerm r_64 (ATerm));
ATerm debug_1 (ATerm, ATerm t_48 (ATerm));
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm y_56 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_traced_funs_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm w_43 (ATerm));
ATerm TraceAllFuns_0 (ATerm);
ATerm s2c_1 (ATerm, ATerm j_64 (ATerm));
ATerm stratego_cf_1 (ATerm, ATerm u_64 (ATerm));
ATerm canonicalize_1 (ATerm, ATerm i_64 (ATerm));
ATerm optimize2_1 (ATerm, ATerm h_64 (ATerm));
ATerm compile_match_1 (ATerm, ATerm g_64 (ATerm));
ATerm fusion_1 (ATerm, ATerm m_64 (ATerm));
ATerm FUSION_0 (ATerm);
ATerm optimize1_1 (ATerm, ATerm f_64 (ATerm));
ATerm inline_1 (ATerm, ATerm e_64 (ATerm));
ATerm rename_defs_1 (ATerm, ATerm d_64 (ATerm));
ATerm stratego_nf_1 (ATerm, ATerm t_64 (ATerm));
ATerm extract_1 (ATerm, ATerm b_64 (ATerm));
ATerm split_2 (ATerm, ATerm m_50 (ATerm), ATerm n_50 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm extract_all_1 (ATerm, ATerm c_64 (ATerm));
ATerm FRONTEND_0 (ATerm);
ATerm output_frontend_1 (ATerm, ATerm x_63 (ATerm));
ATerm pipe_2 (ATerm, ATerm n_46 (ATerm), ATerm o_46 (ATerm));
ATerm frontend_1 (ATerm, ATerm a_64 (ATerm));
ATerm list_1 (ATerm, ATerm a_57 (ATerm));
ATerm core_0 (ATerm);
ATerm transform_file_2 (ATerm, ATerm v_46 (ATerm), ATerm w_46 (ATerm));
ATerm AddMain_1 (ATerm, ATerm y_63 (ATerm));
ATerm Main_1 (ATerm, ATerm g_43 (ATerm));
ATerm add_main_0 (ATerm);
ATerm AST_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm x_46 (ATerm));
ATerm copy_file_3 (ATerm, ATerm y_46 (ATerm), ATerm z_46 (ATerm), ATerm a_47 (ATerm));
ATerm at_end_1 (ATerm, ATerm n_57 (ATerm));
ATerm conc_0 (ATerm);
ATerm pref_1 (ATerm, ATerm z_63 (ATerm));
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm pipe_3 (ATerm, ATerm p_46 (ATerm), ATerm q_46 (ATerm), ATerm r_46 (ATerm));
ATerm Output_1 (ATerm, ATerm w_42 (ATerm));
ATerm ExecDir_1 (ATerm, ATerm b_43 (ATerm));
ATerm InclDir_1 (ATerm, ATerm c_43 (ATerm));
ATerm parse_0 (ATerm);
ATerm Verbose_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm DeclVersion_1 (ATerm, ATerm y_42 (ATerm));
ATerm sc_version_0 (ATerm);
ATerm sc_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_42 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_48 (ATerm));
ATerm Input_1 (ATerm, ATerm c_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm u_43 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm i_47 (ATerm), ATerm j_47 (ATerm));
ATerm Option_2 (ATerm, ATerm g_47 (ATerm), ATerm h_47 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm basename_1 (ATerm, ATerm u_49 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_47 (ATerm));
ATerm skip1_1 (ATerm, ATerm j_51 (ATerm));
ATerm filter_option_args_1 (ATerm, ATerm l_51 (ATerm));
ATerm at_tail_1 (ATerm, ATerm l_57 (ATerm));
ATerm skip2_1 (ATerm, ATerm k_51 (ATerm));
ATerm Cons_2 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm filter_gen_2 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm, ATerm (ATerm)));
ATerm filter_options_1 (ATerm, ATerm m_51 (ATerm));
ATerm process_sc_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm k_1 = NULL;
  k_1 = t;
  t = SSL_exit(not_null(k_1));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL;
  r_1 = t;
  o_1 :
  if(match_cons(r_1, sym_TCons_2))
    {
      s_1 = ATgetArgument(r_1, 0);
      t_1 = ATgetArgument(r_1, 1);
      p_1 :
      if(match_cons(t_1, sym_TCons_2))
        {
          u_1 = ATgetArgument(t_1, 0);
          v_1 = ATgetArgument(t_1, 1);
          q_1 :
          if(match_cons(v_1, sym_TNil_0))
            {
              ATerm l_12;
              l_12 = t;
              t = SSL_printnl(not_null(s_1), not_null(u_1));
              t = l_12;
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
  ATerm a_2 = NULL;
  a_2 = t;
  z_1 :
  if(!(match_cons(a_2, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm c_2 = NULL;
  c_2 = t;
  {
    ATerm q_16;
    q_16 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue)), not_null(c_2)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = call_0(t);
    t = q_16;
  }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
  j_2 = t;
  g_2 :
  if(match_cons(j_2, sym_TCons_2))
    {
      k_2 = ATgetArgument(j_2, 0);
      l_2 = ATgetArgument(j_2, 1);
      h_2 :
      if(match_cons(l_2, sym_TCons_2))
        {
          m_2 = ATgetArgument(l_2, 0);
          n_2 = ATgetArgument(l_2, 1);
          i_2 :
          if(match_cons(n_2, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_2), not_null(m_2));
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
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
  w_2 = t;
  s_2 :
  if(match_cons(w_2, sym_TCons_2))
    {
      x_2 = ATgetArgument(w_2, 0);
      y_2 = ATgetArgument(w_2, 1);
      t_2 :
      if(match_cons(y_2, sym_TCons_2))
        {
          z_2 = ATgetArgument(y_2, 0);
          c_3 = ATgetArgument(y_2, 1);
          u_2 :
          if(match_cons(z_2, sym_Cons_2))
            {
              a_3 = ATgetArgument(z_2, 0);
              b_3 = ATgetArgument(z_2, 1);
              v_2 :
              if(match_cons(c_3, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_3), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_3), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  m_3 = t;
  i_3 :
  if(match_cons(m_3, sym_TCons_2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      j_3 :
      if(match_cons(o_3, sym_TCons_2))
        {
          p_3 = ATgetArgument(o_3, 0);
          q_3 = ATgetArgument(o_3, 1);
          k_3 :
          if(match_cons(p_3, sym_Nil_0))
            {
              l_3 :
              if(match_cons(q_3, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm), ATerm k_55 (ATerm), ATerm l_55 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm r_16 = t;
    if(PushChoice()==0)
      {
        t = i_55(t);
        PopChoice();
      }
    else
      {
        t = r_16;
        t = j_55(t);
        {
          ATerm d_0 (ATerm t)
          {
            t = TCons_2(t, s_3, TNil_0);
            return(t);
          }
          t = TCons_2(t, l_55, d_0);
          t = k_55(t);
        }
      }
    return(t);
  }
  t = s_3(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm x_55 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, x_55);
  return(t);
}
ATerm remove_intermediates_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  x_3 = t;
  u_3 :
  if(match_cons(x_3, sym_TCons_2))
    {
      y_3 = ATgetArgument(x_3, 0);
      z_3 = ATgetArgument(x_3, 1);
      v_3 :
      if(match_cons(z_3, sym_TCons_2))
        {
          a_4 = ATgetArgument(z_3, 0);
          b_4 = ATgetArgument(z_3, 1);
          w_3 :
          if(match_cons(b_4, sym_TNil_0))
            {
              ATerm u_16;
              u_16 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".ac.abox", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))))))))))), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = rzip_1(t, conc_strings_0);
              t = rm_files_0(t);
              t = u_16;
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
ATerm TCons_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  h_4 :
  if(match_cons(i_4, sym_TCons_2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      {
        ATerm n_4 = NULL;
        t = not_null(j_4);
        {
          ATerm p_4 = NULL;
          t = i_43(t);
          n_4 = t;
          t = not_null(k_4);
          t = j_43(t);
          p_4 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_4), not_null(p_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_57 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm v_16 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, h_57, _id);
        PopChoice();
      }
    else
      {
        t = v_16;
        t = Cons_2(t, _id, u_4);
      }
    return(t);
  }
  t = u_4(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_47 (ATerm))
{
  t = fetch_1(t, n_47);
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm w_16 = t;
  if(PushChoice()==0)
    {
      t = m_63(t);
      PopChoice();
    }
  else
    t = w_16;
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
  z_4 = t;
  w_4 :
  if(match_cons(z_4, sym_TCons_2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      x_4 :
      if(match_cons(b_5, sym_TCons_2))
        {
          c_5 = ATgetArgument(b_5, 0);
          d_5 = ATgetArgument(b_5, 1);
          y_4 :
          if(match_cons(d_5, sym_TNil_0))
            {
              if(a_5 != NULL && a_5 != c_5)
                _fail(c_5);
              else
                a_5 = c_5;
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
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  ATerm i_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm x_16 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = x_16;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_5), not_null(s_5)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_TNil_0))));
    return(t);
  }
  p_5 = t;
  j_5 :
  if(match_cons(p_5, sym_TCons_2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      k_5 :
      if(match_cons(r_5, sym_TCons_2))
        {
          s_5 = ATgetArgument(r_5, 0);
          t_5 = ATgetArgument(r_5, 1);
          l_5 :
          if(match_cons(t_5, sym_TCons_2))
            {
              u_5 = ATgetArgument(t_5, 0);
              x_5 = ATgetArgument(t_5, 1);
              m_5 :
              if(match_cons(u_5, sym_Cons_2))
                {
                  v_5 = ATgetArgument(u_5, 0);
                  w_5 = ATgetArgument(u_5, 1);
                  n_5 :
                  if(match_cons(x_5, sym_TNil_0))
                    {
                      o_5 :
                      if(match_int(v_5, 32))
                        {
                          ATerm y_16 = t;
                          if(PushChoice()==0)
                            {
                              ATerm b_6 = NULL;
                              t = not_null(s_5);
                              t = reverse_0(t);
                              t = implode_string_0(t);
                              b_6 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_6), not_null(q_5)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_TNil_0))));
                              PopChoice();
                            }
                          else
                            {
                              t = y_16;
                              t = i_6(t);
                            }
                        }
                      else
                        t = i_6(t);
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
ATerm RevExit_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL;
  p_6 = t;
  l_6 :
  if(match_cons(p_6, sym_TCons_2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      m_6 :
      if(match_cons(q_6, sym_Nil_0))
        {
          n_6 :
          if(match_cons(r_6, sym_TCons_2))
            {
              s_6 = ATgetArgument(r_6, 0);
              t_6 = ATgetArgument(r_6, 1);
              o_6 :
              if(match_cons(t_6, sym_TNil_0))
                t = not_null(s_6);
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
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
  b_7 = t;
  x_6 :
  if(match_cons(b_7, sym_TCons_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      f_7 = ATgetArgument(b_7, 1);
      y_6 :
      if(match_cons(c_7, sym_Cons_2))
        {
          d_7 = ATgetArgument(c_7, 0);
          e_7 = ATgetArgument(c_7, 1);
          z_6 :
          if(match_cons(f_7, sym_TCons_2))
            {
              g_7 = ATgetArgument(f_7, 0);
              h_7 = ATgetArgument(f_7, 1);
              a_7 :
              if(match_cons(h_7, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_7), not_null(g_7)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm p_62 (ATerm), ATerm q_62 (ATerm))
{
  ATerm m_7 (ATerm t)
  {
    ATerm z_16 = t;
    if(PushChoice()==0)
      {
        t = p_62(t);
        t = m_7(t);
        PopChoice();
      }
    else
      {
        t = z_16;
        t = q_62(t);
      }
    return(t);
  }
  t = m_7(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm s_62 (ATerm))
{
  t = repeat_2(t, s_62, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm SplitExit_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  y_7 = t;
  t_7 :
  if(match_cons(y_7, sym_TCons_2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      u_7 :
      if(match_cons(a_8, sym_TCons_2))
        {
          b_8 = ATgetArgument(a_8, 0);
          c_8 = ATgetArgument(a_8, 1);
          v_7 :
          if(match_cons(c_8, sym_TCons_2))
            {
              d_8 = ATgetArgument(c_8, 0);
              e_8 = ATgetArgument(c_8, 1);
              w_7 :
              if(match_cons(d_8, sym_Nil_0))
                {
                  x_7 :
                  if(match_cons(e_8, sym_TNil_0))
                    {
                      ATerm h_8 = NULL;
                      t = not_null(b_8);
                      t = reverse_0(t);
                      t = implode_string_0(t);
                      h_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_8), not_null(z_7));
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
  ATerm m_8 = NULL;
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_8), (ATerm) ATmakeAppl(sym_TNil_0))));
  return(t);
}
ATerm split_at_space_0 (ATerm t)
{
  t = explode_string_0(t);
  t = SplitInit_0(t);
  {
    ATerm p_8 (ATerm t)
    {
      ATerm a_17 = t;
      if(PushChoice()==0)
        {
          t = SplitExit_0(t);
          PopChoice();
        }
      else
        {
          t = a_17;
          t = SplitNext_0(t);
          t = p_8(t);
        }
      return(t);
    }
    t = p_8(t);
  }
  return(t);
}
ATerm CLibDir_1 (ATerm t, ATerm e_43 (ATerm))
{
  ATerm t_8 = NULL,u_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym_CLibDir_1))
    {
      u_8 = ATgetArgument(t_8, 0);
      {
        ATerm w_8 = NULL;
        t = not_null(u_8);
        t = e_43(t);
        w_8 = t;
        t = (ATerm) ATmakeAppl(sym_CLibDir_1, not_null(w_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Dir_1 (ATerm t, ATerm a_43 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Dir_1))
    {
      e_9 = ATgetArgument(d_9, 0);
      {
        ATerm g_9 = NULL;
        t = not_null(e_9);
        t = a_43(t);
        g_9 = t;
        t = (ATerm) ATmakeAppl(sym_Dir_1, not_null(g_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm cc2_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,c_10 = NULL,d_10 = NULL;
  ATerm c_17;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("linking", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = c_17;
  {
    ATerm e_0 (ATerm t)
    {
      ATerm g_0 (ATerm t)
      {
        ATerm h_0 (ATerm t)
        {
          ATerm e_17 = t;
          if(PushChoice()==0)
            {
              ATerm i_0 (ATerm t)
              {
                ATerm y_9 = NULL;
                y_9 = t;
                if(q_9 != NULL && q_9 != y_9)
                  _fail(y_9);
                else
                  q_9 = y_9;
                return(t);
              }
              t = Dir_1(t, i_0);
              PopChoice();
            }
          else
            {
              t = e_17;
              {
                ATerm g_17 = t;
                if(PushChoice()==0)
                  {
                    ATerm j_0 (ATerm t)
                    {
                      ATerm z_9 = NULL;
                      z_9 = t;
                      if(r_9 != NULL && r_9 != z_9)
                        _fail(z_9);
                      else
                        r_9 = z_9;
                      return(t);
                    }
                    t = CLibDir_1(t, j_0);
                    PopChoice();
                  }
                else
                  {
                    t = g_17;
                    {
                      ATerm k_0 (ATerm t)
                      {
                        ATerm a_10 = NULL;
                        a_10 = t;
                        if(s_9 != NULL && s_9 != a_10)
                          _fail(a_10);
                        else
                          s_9 = a_10;
                        return(t);
                      }
                      t = Output_1(t, k_0);
                    }
                  }
              }
            }
          return(t);
        }
        t = try_1(t, h_0);
        return(t);
      }
      t = list_1(t, g_0);
      return(t);
    }
    ATerm f_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, e_0, f_0);
    {
      ATerm l_0 (ATerm t)
      {
        ATerm m_0 (ATerm t)
        {
          ATerm h_17;
          h_17 = t;
          {
            ATerm e_10 = NULL;
            t = conc_strings_0(t);
            e_10 = t;
            if(c_10 != NULL && c_10 != e_10)
              _fail(e_10);
            else
              c_10 = e_10;
          }
          t = h_17;
          {
            ATerm n_0 (ATerm t)
            {
              ATerm p_0 (ATerm t)
              {
                t = not_null(s_9);
                return(t);
              }
              t = try_1(t, p_0);
              return(t);
            }
            ATerm o_0 (ATerm t)
            {
              ATerm q_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
                return(t);
              }
              t = TCons_2(t, q_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, n_0, o_0);
            {
              ATerm i_17;
              i_17 = t;
              {
                ATerm f_10 = NULL;
                t = conc_strings_0(t);
                f_10 = t;
                if(d_10 != NULL && d_10 != f_10)
                  _fail(f_10);
                else
                  d_10 = f_10;
              }
              t = i_17;
              {
                ATerm j_17;
                j_17 = t;
                {
                  ATerm g_10 = NULL;
                  t = not_null(r_9);
                  t = map_1(t, split_at_space_0);
                  t = concat_0(t);
                  g_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_10), not_null(g_10))));
                  t = gcc_0(t);
                }
                t = j_17;
              }
            }
          }
          return(t);
        }
        t = TCons_2(t, m_0, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, l_0);
    }
  }
  return(t);
}
ATerm gcc_0 (ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_10), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = call_0(t);
  return(t);
}
ATerm CInclDir_1 (ATerm t, ATerm d_43 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_CInclDir_1))
    {
      w_10 = ATgetArgument(v_10, 0);
      {
        ATerm y_10 = NULL;
        t = not_null(w_10);
        t = d_43(t);
        y_10 = t;
        t = (ATerm) ATmakeAppl(sym_CInclDir_1, not_null(y_10));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm cc1_0 (ATerm t)
{
  ATerm f_11 = NULL,h_11 = NULL,i_11 = NULL;
  ATerm m_17;
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compiling", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = m_17;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            ATerm g_11 = NULL;
            g_11 = t;
            if(f_11 != NULL && f_11 != g_11)
              _fail(g_11);
            else
              f_11 = g_11;
            return(t);
          }
          t = CInclDir_1(t, v_0);
          return(t);
        }
        t = try_1(t, u_0);
        return(t);
      }
      t = list_1(t, t_0);
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, r_0, s_0);
    {
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          ATerm n_17;
          n_17 = t;
          {
            ATerm j_11 = NULL;
            t = conc_strings_0(t);
            j_11 = t;
            if(h_11 != NULL && h_11 != j_11)
              _fail(j_11);
            else
              h_11 = j_11;
          }
          t = n_17;
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
                return(t);
              }
              t = TCons_2(t, z_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, y_0);
            {
              ATerm s_17;
              s_17 = t;
              {
                ATerm k_11 = NULL;
                t = conc_strings_0(t);
                k_11 = t;
                if(i_11 != NULL && i_11 != k_11)
                  _fail(k_11);
                else
                  i_11 = k_11;
              }
              t = s_17;
              {
                ATerm t_17;
                t_17 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_11), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_11), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = conc_0(t);
                t = gcc_0(t);
                t = t_17;
              }
            }
          }
          return(t);
        }
        t = TCons_2(t, x_0, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, w_0);
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm pp_c_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm q_11 = NULL;
  ATerm v_17;
  v_17 = t;
  t = dtime_0(t);
  t = v_17;
  {
    ATerm a_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("/ac2c", 0, ATtrue));
      t = pref_1(t, r_64);
      return(t);
    }
    ATerm b_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
      return(t);
    }
    t = pipe_2(t, a_1, b_1);
    {
      ATerm y_17;
      y_17 = t;
      {
        ATerm r_11 = NULL;
        ATerm s_11 = NULL;
        t = dtime_0(t);
        r_11 = t;
        if(q_11 != NULL && q_11 != r_11)
          _fail(r_11);
        else
          q_11 = r_11;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("/ac2c", 0, ATtrue));
        t = pref_1(t, r_64);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(")", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      t = y_17;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_48 (ATerm))
{
  ATerm z_17;
  z_17 = t;
  {
    ATerm c_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm d_1 (ATerm t)
    {
      ATerm y_11 = NULL;
      ATerm a_12 = NULL;
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = t_48(t);
      a_12 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_12), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_11), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, c_1, d_1);
    t = printnl_0(t);
  }
  t = z_17;
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_18 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_18;
      {
        ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
        g_12 = t;
        f_12 :
        if(match_cons(g_12, sym_Cons_2))
          {
            h_12 = ATgetArgument(g_12, 0);
            i_12 = ATgetArgument(g_12, 1);
            t = not_null(h_12);
            {
              ATerm e_1 (ATerm t)
              {
                t = not_null(i_12);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, e_1);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_56 (ATerm))
{
  ATerm n_12 (ATerm t)
  {
    ATerm f_18 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = f_18;
        t = Cons_2(t, y_56, n_12);
      }
    return(t);
  }
  t = n_12(t);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm p_12 = NULL;
  p_12 = t;
  t = SSL_table_keys(not_null(p_12));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm v_12 = NULL;
  v_12 = t;
  t = table_keys_0(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm c_13 = NULL;
      ATerm h_13 = NULL;
      c_13 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_13), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = table_get_0(t);
      h_13 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_13), (ATerm) ATmakeAppl(sym_TNil_0)));
      return(t);
    }
    t = map_1(t, f_1);
  }
  return(t);
}
ATerm get_traced_funs_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  t = table_getlist_0(t);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm t_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
      t_13 = t;
      q_13 :
      if(match_cons(t_13, sym_TCons_2))
        {
          w_13 = ATgetArgument(t_13, 0);
          x_13 = ATgetArgument(t_13, 1);
          r_13 :
          if(match_cons(x_13, sym_TCons_2))
            {
              y_13 = ATgetArgument(x_13, 0);
              z_13 = ATgetArgument(x_13, 1);
              s_13 :
              if(match_cons(z_13, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_13), (ATerm) ATmakeAppl(sym_Nil_0)));
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
    t = map_1(t, g_1);
    t = concat_0(t);
    {
      ATerm g_18 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = g_18;
          {
            ATerm h_1 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("traced functions: ", 0, ATtrue));
              return(t);
            }
            t = debug_1(t, h_1);
          }
        }
    }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,j_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym_Cons_2))
    {
      f_14 = ATgetArgument(e_14, 0);
      j_14 = ATgetArgument(e_14, 1);
      t = not_null(f_14);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,t_15 = NULL,u_15 = NULL;
  l_15 = t;
  g_15 :
  if(match_cons(l_15, sym_TCons_2))
    {
      m_15 = ATgetArgument(l_15, 0);
      n_15 = ATgetArgument(l_15, 1);
      h_15 :
      if(match_cons(n_15, sym_TCons_2))
        {
          t_15 = ATgetArgument(n_15, 0);
          u_15 = ATgetArgument(n_15, 1);
          i_15 :
          if(match_cons(u_15, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_15), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm w_43 (ATerm))
{
  ATerm a_16 = NULL;
  ATerm c_16 = NULL;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = w_43(t);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_16), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm l_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym_TNil_0))
    {
      ATerm m_16 = NULL,n_16 = NULL;
      t = (ATerm) ATmakeAppl(sym_Keys_0);
      {
        ATerm i_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
          return(t);
        }
        t = rewrite_1(t, i_1);
        m_16 = t;
        i_16 :
        if(match_cons(m_16, sym_Defined_1))
          {
            n_16 = ATgetArgument(m_16, 0);
            j_16 :
            if(match_string(n_16, "a_0"))
              t = (ATerm) ATmakeAppl(sym_TNil_0);
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
ATerm s2c_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/s2c", 0, ATtrue));
    t = pref_1(t, j_64);
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    {
      ATerm h_18 = t;
      if(PushChoice()==0)
        {
          t = TraceAllFuns_0(t);
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
          PopChoice();
        }
      else
        {
          t = h_18;
          t = get_traced_funs_0(t);
        }
    }
    return(t);
  }
  t = pipe_3(t, j_1, l_1, m_1);
  return(t);
}
ATerm stratego_cf_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Canonical-Format", 0, ATtrue));
    t = pref_1(t, u_64);
    return(t);
  }
  t = pipe_2(t, n_1, _id);
  return(t);
}
ATerm canonicalize_1 (ATerm t, ATerm i_64 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/canonicalize", 0, ATtrue));
    t = pref_1(t, i_64);
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, w_1, x_1);
  return(t);
}
ATerm optimize2_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize2", 0, ATtrue));
    t = pref_1(t, h_64);
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, y_1, b_2);
  return(t);
}
ATerm compile_match_1 (ATerm t, ATerm g_64 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/compile-match", 0, ATtrue));
    t = pref_1(t, g_64);
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, d_2, e_2);
  return(t);
}
ATerm fusion_1 (ATerm t, ATerm m_64 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/fusion", 0, ATtrue));
    t = pref_1(t, m_64);
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".so2", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, f_2, o_2);
  return(t);
}
ATerm FUSION_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t_16 = t;
  s_16 :
  if(!(match_cons(t_16, sym_FUSION_0)))
    _fail(t);
  return(t);
}
ATerm optimize1_1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize1", 0, ATtrue));
    t = pref_1(t, f_64);
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, p_2, q_2);
  return(t);
}
ATerm inline_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/inline", 0, ATtrue));
    t = pref_1(t, e_64);
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, r_2, d_3);
  return(t);
}
ATerm rename_defs_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/rename-defs", 0, ATtrue));
    t = pref_1(t, d_64);
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, e_3, f_3);
  return(t);
}
ATerm stratego_nf_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Normal-Format", 0, ATtrue));
    t = pref_1(t, t_64);
    return(t);
  }
  t = pipe_2(t, g_3, _id);
  return(t);
}
ATerm extract_1 (ATerm t, ATerm b_64 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/extract", 0, ATtrue));
    t = pref_1(t, b_64);
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, h_3, r_3);
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_50 (ATerm), ATerm n_50 (ATerm))
{
  ATerm b_17 = NULL;
  ATerm d_17 = NULL;
  b_17 = t;
  {
    ATerm f_17 = NULL;
    t = m_50(t);
    d_17 = t;
    t = not_null(b_17);
    t = n_50(t);
    f_17 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_17), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm i_18;
  i_18 = t;
  {
    ATerm t_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, t_3, _id);
    t = printnl_0(t);
  }
  t = i_18;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm m_18;
  m_18 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = m_18;
  return(t);
}
ATerm extract_all_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/extract-all", 0, ATtrue));
    t = pref_1(t, c_64);
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, c_4, d_4);
  return(t);
}
ATerm FRONTEND_0 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  k_17 :
  if(!(match_cons(l_17, sym_FRONTEND_0)))
    _fail(t);
  return(t);
}
ATerm output_frontend_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm o_17 = NULL,p_17 = NULL;
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      t = option_defined_1(t, FRONTEND_0);
      return(t);
    }
    ATerm g_4 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, f_4, g_4);
    {
      ATerm l_4 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          ATerm o_18 = t;
          if(PushChoice()==0)
            {
              t = extract_all_1(t, x_63);
              PopChoice();
            }
          else
            {
              t = o_18;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
              t = fatal_error_0(t);
            }
          return(t);
        }
        t = TCons_2(t, m_4, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, l_4);
      {
        ATerm o_4 (ATerm t)
        {
          ATerm q_4 (ATerm t)
          {
            ATerm r_4 (ATerm t)
            {
              ATerm q_17 = NULL;
              q_17 = t;
              if(o_17 != NULL && o_17 != q_17)
                _fail(q_17);
              else
                o_17 = q_17;
              return(t);
            }
            ATerm s_4 (ATerm t)
            {
              ATerm t_4 (ATerm t)
              {
                ATerm r_17 = NULL;
                r_17 = t;
                if(p_17 != NULL && p_17 != r_17)
                  _fail(r_17);
                else
                  p_17 = r_17;
                return(t);
              }
              t = TCons_2(t, t_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, r_4, s_4);
            return(t);
          }
          t = TCons_2(t, q_4, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, o_4);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_17), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_17), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        t = (ATerm) ATmakeInt(0);
        t = exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, e_4);
  return(t);
}
ATerm pipe_2 (ATerm t, ATerm n_46 (ATerm), ATerm o_46 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = pipe_3(t, n_46, o_46, v_4);
  return(t);
}
ATerm frontend_1 (ATerm t, ATerm a_64 (ATerm))
{
  ATerm e_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/frontend", 0, ATtrue));
    t = pref_1(t, a_64);
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, e_5, f_5);
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm u_17 (ATerm t)
  {
    ATerm p_18 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = p_18;
        t = Cons_2(t, a_57, u_17);
      }
    return(t);
  }
  t = u_17(t);
  return(t);
}
ATerm core_0 (ATerm t)
{
  ATerm w_17 = NULL;
  ATerm g_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm y_5 (ATerm t)
      {
        ATerm z_5 (ATerm t)
        {
          ATerm x_17 = NULL;
          x_17 = t;
          if(w_17 != NULL && w_17 != x_17)
            _fail(x_17);
          else
            w_17 = x_17;
          return(t);
        }
        t = ExecDir_1(t, z_5);
        return(t);
      }
      t = try_1(t, y_5);
      return(t);
    }
    t = list_1(t, i_5);
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = TCons_2(t, _id, TNil_0);
    return(t);
  }
  t = TCons_2(t, g_5, h_5);
  {
    ATerm a_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        ATerm d_6 (ATerm t)
        {
          t = not_null(w_17);
          return(t);
        }
        t = frontend_1(t, d_6);
        return(t);
      }
      t = TCons_2(t, c_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, a_6);
    {
      ATerm e_6 (ATerm t)
      {
        t = not_null(w_17);
        return(t);
      }
      t = output_frontend_1(t, e_6);
      {
        ATerm f_6 (ATerm t)
        {
          ATerm g_6 (ATerm t)
          {
            ATerm h_6 (ATerm t)
            {
              t = not_null(w_17);
              return(t);
            }
            t = extract_1(t, h_6);
            {
              ATerm j_6 (ATerm t)
              {
                t = not_null(w_17);
                return(t);
              }
              t = stratego_nf_1(t, j_6);
              {
                ATerm k_6 (ATerm t)
                {
                  t = not_null(w_17);
                  return(t);
                }
                t = rename_defs_1(t, k_6);
                {
                  ATerm u_6 (ATerm t)
                  {
                    t = not_null(w_17);
                    return(t);
                  }
                  t = inline_1(t, u_6);
                  {
                    ATerm v_6 (ATerm t)
                    {
                      t = not_null(w_17);
                      return(t);
                    }
                    t = optimize1_1(t, v_6);
                  }
                }
              }
            }
            return(t);
          }
          t = TCons_2(t, g_6, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, f_6);
        {
          ATerm w_6 (ATerm t)
          {
            ATerm i_7 (ATerm t)
            {
              t = option_defined_1(t, FUSION_0);
              return(t);
            }
            ATerm j_7 (ATerm t)
            {
              ATerm k_7 (ATerm t)
              {
                ATerm l_7 (ATerm t)
                {
                  t = not_null(w_17);
                  return(t);
                }
                t = fusion_1(t, l_7);
                return(t);
              }
              t = TCons_2(t, k_7, TNil_0);
              return(t);
            }
            t = TCons_2(t, i_7, j_7);
            return(t);
          }
          t = try_1(t, w_6);
          {
            ATerm n_7 (ATerm t)
            {
              ATerm p_7 (ATerm t)
              {
                ATerm q_7 (ATerm t)
                {
                  t = not_null(w_17);
                  return(t);
                }
                t = compile_match_1(t, q_7);
                {
                  ATerm r_7 (ATerm t)
                  {
                    t = not_null(w_17);
                    return(t);
                  }
                  t = optimize2_1(t, r_7);
                }
                return(t);
              }
              t = TCons_2(t, p_7, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, n_7);
            {
              ATerm s_7 (ATerm t)
              {
                ATerm f_8 (ATerm t)
                {
                  ATerm g_8 (ATerm t)
                  {
                    t = not_null(w_17);
                    return(t);
                  }
                  t = canonicalize_1(t, g_8);
                  {
                    ATerm i_8 (ATerm t)
                    {
                      t = not_null(w_17);
                      return(t);
                    }
                    t = stratego_cf_1(t, i_8);
                    {
                      ATerm j_8 (ATerm t)
                      {
                        t = not_null(w_17);
                        return(t);
                      }
                      t = s2c_1(t, j_8);
                      {
                        ATerm k_8 (ATerm t)
                        {
                          t = not_null(w_17);
                          return(t);
                        }
                        t = pp_c_1(t, k_8);
                      }
                    }
                  }
                  return(t);
                }
                t = TCons_2(t, f_8, TNil_0);
                return(t);
              }
              t = TCons_2(t, _id, s_7);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm transform_file_2 (ATerm t, ATerm v_46 (ATerm), ATerm w_46 (ATerm))
{
  ATerm b_18 = NULL,d_18 = NULL;
  ATerm q_18;
  q_18 = t;
  {
    ATerm c_18 = NULL;
    t = conc_strings_0(t);
    c_18 = t;
    if(b_18 != NULL && b_18 != c_18)
      _fail(c_18);
    else
      b_18 = c_18;
  }
  t = q_18;
  {
    ATerm l_8 (ATerm t)
    {
      t = TCons_2(t, w_46, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, l_8);
    {
      ATerm r_18;
      r_18 = t;
      {
        ATerm e_18 = NULL;
        t = conc_strings_0(t);
        e_18 = t;
        if(d_18 != NULL && d_18 != e_18)
          _fail(e_18);
        else
          d_18 = e_18;
      }
      t = r_18;
      {
        ATerm s_18;
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_18), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = apply_to_file_1(t, v_46);
        t = s_18;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm k_18 = NULL,l_18 = NULL;
  k_18 = t;
  j_18 :
  if(match_cons(k_18, sym_Specification_1))
    {
      l_18 = ATgetArgument(k_18, 0);
      {
        ATerm n_18 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = y_63(t);
        n_18 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_18)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0))), not_null(l_18)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Main_1 (ATerm t, ATerm g_43 (ATerm))
{
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_Main_1))
    {
      v_18 = ATgetArgument(u_18, 0);
      {
        ATerm x_18 = NULL;
        t = not_null(v_18);
        t = g_43(t);
        x_18 = t;
        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(x_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm c_19 = NULL;
  ATerm w_18 = t;
  if(PushChoice()==0)
    {
      ATerm n_8 (ATerm t)
      {
        ATerm q_8 (ATerm t)
        {
          ATerm r_8 (ATerm t)
          {
            ATerm d_19 = NULL;
            d_19 = t;
            if(c_19 != NULL && c_19 != d_19)
              _fail(d_19);
            else
              c_19 = d_19;
            return(t);
          }
          t = Main_1(t, r_8);
          return(t);
        }
        t = option_defined_1(t, q_8);
        return(t);
      }
      ATerm o_8 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, n_8, o_8);
      {
        ATerm v_8 (ATerm t)
        {
          ATerm x_8 (ATerm t)
          {
            ATerm y_8 (ATerm t)
            {
              ATerm a_9 (ATerm t)
              {
                t = not_null(c_19);
                return(t);
              }
              t = AddMain_1(t, a_9);
              return(t);
            }
            ATerm z_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
              return(t);
            }
            t = transform_file_2(t, y_8, z_8);
            return(t);
          }
          t = TCons_2(t, x_8, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, v_8);
      }
      PopChoice();
    }
  else
    {
      t = w_18;
      {
        ATerm b_9 (ATerm t)
        {
          ATerm f_9 (ATerm t)
          {
            ATerm h_9 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
              return(t);
            }
            t = transform_file_2(t, _id, h_9);
            return(t);
          }
          t = TCons_2(t, f_9, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, b_9);
      }
    }
  return(t);
}
ATerm AST_0 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  f_19 :
  if(!(match_cons(g_19, sym_AST_0)))
    _fail(t);
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL;
  ATerm i_9 (ATerm t)
  {
    ATerm j_9 (ATerm t)
    {
      t = option_defined_1(t, AST_0);
      return(t);
    }
    ATerm k_9 (ATerm t)
    {
      ATerm l_9 (ATerm t)
      {
        ATerm m_9 (ATerm t)
        {
          ATerm l_19 = NULL;
          l_19 = t;
          if(j_19 != NULL && j_19 != l_19)
            _fail(l_19);
          else
            j_19 = l_19;
          return(t);
        }
        ATerm n_9 (ATerm t)
        {
          ATerm o_9 (ATerm t)
          {
            ATerm m_19 = NULL;
            m_19 = t;
            if(k_19 != NULL && k_19 != m_19)
              _fail(m_19);
            else
              k_19 = m_19;
            return(t);
          }
          t = TCons_2(t, o_9, TNil_0);
          return(t);
        }
        t = TCons_2(t, m_9, n_9);
        return(t);
      }
      t = TCons_2(t, l_9, TNil_0);
      return(t);
    }
    t = TCons_2(t, j_9, k_9);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_19), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_19), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
    return(t);
  }
  t = try_1(t, i_9);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  t_19 = t;
  q_19 :
  if(match_cons(t_19, sym_TCons_2))
    {
      u_19 = ATgetArgument(t_19, 0);
      v_19 = ATgetArgument(t_19, 1);
      r_19 :
      if(match_cons(v_19, sym_TCons_2))
        {
          w_19 = ATgetArgument(v_19, 0);
          x_19 = ATgetArgument(v_19, 1);
          s_19 :
          if(match_cons(x_19, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(u_19), not_null(w_19));
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
  ATerm e_20 = NULL;
  e_20 = t;
  t = SSL_ReadFromFile(not_null(e_20));
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm x_46 (ATerm))
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
              ATerm t_20 = NULL;
              ATerm y_18;
              y_18 = t;
              {
                ATerm u_20 = NULL;
                t = not_null(n_20);
                t = ReadFromFile_0(t);
                t = x_46(t);
                u_20 = t;
                if(t_20 != NULL && t_20 != u_20)
                  _fail(u_20);
                else
                  t_20 = u_20;
              }
              t = y_18;
              {
                ATerm z_18;
                z_18 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = WriteToBinaryFile_0(t);
                t = z_18;
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
ATerm copy_file_3 (ATerm t, ATerm y_46 (ATerm), ATerm z_46 (ATerm), ATerm a_47 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
  r_21 = t;
  o_21 :
  if(match_cons(r_21, sym_TCons_2))
    {
      s_21 = ATgetArgument(r_21, 0);
      t_21 = ATgetArgument(r_21, 1);
      p_21 :
      if(match_cons(t_21, sym_TCons_2))
        {
          u_21 = ATgetArgument(t_21, 0);
          v_21 = ATgetArgument(t_21, 1);
          q_21 :
          if(match_cons(v_21, sym_TNil_0))
            {
              ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
              ATerm p_9 (ATerm t)
              {
                t = TCons_2(t, a_47, TNil_0);
                return(t);
              }
              t = TCons_2(t, z_46, p_9);
              y_21 = t;
              l_21 :
              if(match_cons(y_21, sym_TCons_2))
                {
                  z_21 = ATgetArgument(y_21, 0);
                  a_22 = ATgetArgument(y_21, 1);
                  m_21 :
                  if(match_cons(a_22, sym_TCons_2))
                    {
                      b_22 = ATgetArgument(a_22, 0);
                      c_22 = ATgetArgument(a_22, 1);
                      n_21 :
                      if(match_cons(c_22, sym_TNil_0))
                        {
                          ATerm a_19;
                          a_19 = t;
                          {
                            ATerm f_22 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm h_22 = NULL;
                              t = conc_strings_0(t);
                              f_22 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_strings_0(t);
                              h_22 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = apply_to_file_1(t, y_46);
                            }
                          }
                          t = a_19;
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
ATerm at_end_1 (ATerm t, ATerm n_57 (ATerm))
{
  ATerm n_22 (ATerm t)
  {
    ATerm b_19 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, n_22);
        PopChoice();
      }
    else
      {
        t = b_19;
        t = Nil_0(t);
        t = n_57(t);
      }
    return(t);
  }
  t = n_22(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  s_22 = t;
  p_22 :
  if(match_cons(s_22, sym_TCons_2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      q_22 :
      if(match_cons(u_22, sym_TCons_2))
        {
          v_22 = ATgetArgument(u_22, 0);
          w_22 = ATgetArgument(u_22, 1);
          r_22 :
          if(match_cons(w_22, sym_TNil_0))
            {
              t = not_null(t_22);
              {
                ATerm t_9 (ATerm t)
                {
                  t = not_null(v_22);
                  return(t);
                }
                t = at_end_1(t, t_9);
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
ATerm pref_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm c_23 = NULL;
  ATerm e_23 = NULL;
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = z_63(t);
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_23), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = conc_strings_0(t);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  j_23 :
  if(match_cons(m_23, sym_TCons_2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      k_23 :
      if(match_cons(o_23, sym_TCons_2))
        {
          p_23 = ATgetArgument(o_23, 0);
          q_23 = ATgetArgument(o_23, 1);
          l_23 :
          if(match_cons(q_23, sym_TNil_0))
            t = SSL_call(not_null(n_23), not_null(p_23));
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
  ATerm u_9 (ATerm t)
  {
    t = TCons_2(t, explode_string_0, TNil_0);
    return(t);
  }
  t = TCons_2(t, explode_string_0, u_9);
  t = conc_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm pipe_3 (ATerm t, ATerm p_46 (ATerm), ATerm q_46 (ATerm), ATerm r_46 (ATerm))
{
  ATerm y_23 = NULL,a_24 = NULL;
  ATerm e_19;
  e_19 = t;
  {
    ATerm z_23 = NULL;
    t = conc_strings_0(t);
    z_23 = t;
    if(y_23 != NULL && y_23 != z_23)
      _fail(z_23);
    else
      y_23 = z_23;
  }
  t = e_19;
  {
    ATerm v_9 (ATerm t)
    {
      t = TCons_2(t, q_46, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, v_9);
    {
      ATerm h_19;
      h_19 = t;
      {
        ATerm c_24 = NULL;
        t = conc_strings_0(t);
        c_24 = t;
        if(a_24 != NULL && a_24 != c_24)
          _fail(c_24);
        else
          a_24 = c_24;
      }
      t = h_19;
      {
        ATerm i_19;
        i_19 = t;
        {
          ATerm d_24 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm f_24 = NULL;
            t = p_46(t);
            d_24 = t;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            t = r_46(t);
            f_24 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_23), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_24), not_null(f_24))))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = call_0(t);
          }
        }
        t = i_19;
      }
    }
  }
  return(t);
}
ATerm Output_1 (ATerm t, ATerm w_42 (ATerm))
{
  ATerm o_24 = NULL,p_24 = NULL;
  o_24 = t;
  n_24 :
  if(match_cons(o_24, sym_Output_1))
    {
      p_24 = ATgetArgument(o_24, 0);
      {
        ATerm r_24 = NULL;
        t = not_null(p_24);
        t = w_42(t);
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ExecDir_1 (ATerm t, ATerm b_43 (ATerm))
{
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym_ExecDir_1))
    {
      z_24 = ATgetArgument(y_24, 0);
      {
        ATerm b_25 = NULL;
        t = not_null(z_24);
        t = b_43(t);
        b_25 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(b_25));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InclDir_1 (ATerm t, ATerm c_43 (ATerm))
{
  ATerm i_25 = NULL,j_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_InclDir_1))
    {
      j_25 = ATgetArgument(i_25, 0);
      {
        ATerm l_25 = NULL;
        t = not_null(j_25);
        t = c_43(t);
        l_25 = t;
        t = (ATerm) ATmakeAppl(sym_InclDir_1, not_null(l_25));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  ATerm w_9 (ATerm t)
  {
    ATerm b_10 (ATerm t)
    {
      ATerm h_10 (ATerm t)
      {
        ATerm b_26 = NULL;
        b_26 = t;
        if(z_25 != NULL && z_25 != b_26)
          _fail(b_26);
        else
          z_25 = b_26;
        return(t);
      }
      t = InclDir_1(t, h_10);
      return(t);
    }
    t = option_defined_1(t, b_10);
    {
      ATerm i_10 (ATerm t)
      {
        ATerm j_10 (ATerm t)
        {
          ATerm c_26 = NULL;
          c_26 = t;
          if(x_25 != NULL && x_25 != c_26)
            _fail(c_26);
          else
            x_25 = c_26;
          return(t);
        }
        t = ExecDir_1(t, j_10);
        return(t);
      }
      t = option_defined_1(t, i_10);
      {
        ATerm k_10 (ATerm t)
        {
          ATerm l_10 (ATerm t)
          {
            ATerm m_10 (ATerm t)
            {
              ATerm d_26 = NULL;
              d_26 = t;
              if(a_26 != NULL && a_26 != d_26)
                _fail(d_26);
              else
                a_26 = d_26;
              return(t);
            }
            t = Output_1(t, m_10);
            return(t);
          }
          t = option_defined_1(t, l_10);
          return(t);
        }
        t = try_1(t, k_10);
      }
    }
    return(t);
  }
  ATerm x_9 (ATerm t)
  {
    ATerm n_10 (ATerm t)
    {
      ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
      e_26 = t;
      t_25 :
      if(match_cons(e_26, sym_TCons_2))
        {
          f_26 = ATgetArgument(e_26, 0);
          g_26 = ATgetArgument(e_26, 1);
          u_25 :
          if(match_cons(g_26, sym_TCons_2))
            {
              h_26 = ATgetArgument(g_26, 0);
              i_26 = ATgetArgument(g_26, 1);
              v_25 :
              if(match_cons(i_26, sym_TNil_0))
                {
                  if(y_25 != NULL && y_25 != f_26)
                    _fail(f_26);
                  else
                    y_25 = f_26;
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
    t = TCons_2(t, n_10, TNil_0);
    return(t);
  }
  t = TCons_2(t, w_9, x_9);
  {
    ATerm o_10 (ATerm t)
    {
      ATerm q_10 (ATerm t)
      {
        ATerm r_10 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego", 0, ATtrue));
          {
            ATerm x_10 (ATerm t)
            {
              t = not_null(x_25);
              return(t);
            }
            t = pref_1(t, x_10);
          }
          return(t);
        }
        ATerm s_10 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
          return(t);
        }
        ATerm t_10 (ATerm t)
        {
          ATerm j_26 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm n_19 = t;
            if(PushChoice()==0)
              {
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_26), (ATerm) ATmakeAppl(sym_Nil_0)));
                PopChoice();
              }
            else
              {
                t = n_19;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_25), (ATerm) ATmakeAppl(sym_Nil_0)));
              }
            j_26 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_26), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("--silent", 0, ATtrue)), not_null(z_25)), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
          }
          return(t);
        }
        t = pipe_3(t, r_10, s_10, t_10);
        return(t);
      }
      t = TCons_2(t, q_10, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, o_10);
    {
      ATerm z_10 (ATerm t)
      {
        ATerm a_11 (ATerm t)
        {
          ATerm b_11 (ATerm t)
          {
            ATerm c_11 (ATerm t)
            {
              t = not_null(a_26);
              return(t);
            }
            ATerm d_11 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
              return(t);
            }
            t = copy_file_3(t, _id, c_11, d_11);
            return(t);
          }
          t = TCons_2(t, b_11, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, a_11);
        return(t);
      }
      t = try_1(t, z_10);
    }
  }
  return(t);
}
ATerm Verbose_0 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  q_26 :
  if(!(match_cons(r_26, sym_Verbose_0)))
    _fail(t);
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  ATerm e_11 (ATerm t)
  {
    ATerm l_11 (ATerm t)
    {
      t = option_defined_1(t, Verbose_0);
      return(t);
    }
    ATerm m_11 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, l_11, m_11);
    {
      ATerm n_11 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, sc_version_0, n_11);
    }
    return(t);
  }
  t = try_1(t, e_11);
  return(t);
}
ATerm DeclVersion_1 (ATerm t, ATerm y_42 (ATerm))
{
  ATerm v_26 = NULL,w_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_DeclVersion_1))
    {
      w_26 = ATgetArgument(v_26, 0);
      {
        ATerm y_26 = NULL;
        t = not_null(w_26);
        t = y_42(t);
        y_26 = t;
        t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(y_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm e_27 = NULL;
  ATerm o_19 = t;
  if(PushChoice()==0)
    {
      ATerm o_11 (ATerm t)
      {
        ATerm p_11 (ATerm t)
        {
          ATerm f_27 = NULL;
          f_27 = t;
          if(e_27 != NULL && e_27 != f_27)
            _fail(f_27);
          else
            e_27 = f_27;
          return(t);
        }
        t = DeclVersion_1(t, p_11);
        return(t);
      }
      t = option_defined_1(t, o_11);
      PopChoice();
    }
  else
    {
      t = o_19;
      {
        ATerm g_27 = NULL;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
        g_27 = t;
        if(e_27 != NULL && e_27 != g_27)
          _fail(g_27);
        else
          e_27 = g_27;
      }
    }
  {
    ATerm p_19;
    p_19 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_27), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(")", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = p_19;
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
  ATerm k_27 = NULL;
  k_27 = t;
  j_27 :
  if(!(match_cons(k_27, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_42 (ATerm))
{
  ATerm o_27 = NULL,p_27 = NULL;
  o_27 = t;
  n_27 :
  if(match_cons(o_27, sym_Undefined_1))
    {
      p_27 = ATgetArgument(o_27, 0);
      {
        ATerm r_27 = NULL;
        t = not_null(p_27);
        t = u_42(t);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_27));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  v_27 :
  if(!(match_cons(w_27, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_48 (ATerm))
{
  ATerm t_11 (ATerm t)
  {
    ATerm y_19 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = y_19;
        {
          ATerm z_19 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = z_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_11);
  t = i_48(t);
  return(t);
}
ATerm Input_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm c_28 = NULL,d_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym_Input_1))
    {
      d_28 = ATgetArgument(c_28, 0);
      {
        ATerm a_20 = t;
        if(PushChoice()==0)
          {
            ATerm f_28 = NULL;
            t = not_null(d_28);
            t = c_0(t);
            f_28 = t;
            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_28));
            PopChoice();
          }
        else
          {
            t = a_20;
            {
              ATerm i_28 = NULL;
              t = not_null(d_28);
              t = c_0(t);
              i_28 = t;
              t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_28));
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
  ATerm b_20 = t;
  if(PushChoice()==0)
    {
      ATerm u_11 (ATerm t)
      {
        ATerm n_29 = NULL;
        n_29 = t;
        t_28 :
        if(!(match_string(n_29, "-S")))
          _fail(t);
        return(t);
      }
      ATerm v_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, u_11, v_11);
      PopChoice();
    }
  else
    {
      t = b_20;
      {
        ATerm c_20 = t;
        if(PushChoice()==0)
          {
            ATerm w_11 (ATerm t)
            {
              ATerm o_29 = NULL;
              o_29 = t;
              u_28 :
              if(!(match_string(o_29, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm x_11 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, w_11, x_11);
            PopChoice();
          }
        else
          {
            t = c_20;
            {
              ATerm d_20 = t;
              if(PushChoice()==0)
                {
                  ATerm z_11 (ATerm t)
                  {
                    ATerm p_29 = NULL;
                    p_29 = t;
                    v_28 :
                    if(!(match_string(p_29, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm b_12 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, z_11, b_12);
                  PopChoice();
                }
              else
                {
                  t = d_20;
                  {
                    ATerm f_20 = t;
                    if(PushChoice()==0)
                      {
                        ATerm c_12 (ATerm t)
                        {
                          ATerm q_29 = NULL;
                          q_29 = t;
                          w_28 :
                          if(!(match_string(q_29, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm d_12 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, c_12, d_12);
                        PopChoice();
                      }
                    else
                      {
                        t = f_20;
                        {
                          ATerm g_20 = t;
                          if(PushChoice()==0)
                            {
                              ATerm e_12 (ATerm t)
                              {
                                ATerm r_29 = NULL;
                                r_29 = t;
                                x_28 :
                                if(!(match_string(r_29, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm j_12 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, e_12, j_12);
                              PopChoice();
                            }
                          else
                            {
                              t = g_20;
                              {
                                ATerm h_20 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm k_12 (ATerm t)
                                    {
                                      ATerm s_29 = NULL;
                                      s_29 = t;
                                      y_28 :
                                      if(!(match_string(s_29, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm m_12 (ATerm t)
                                    {
                                      ATerm t_29 = NULL;
                                      t_29 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(t_29));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, k_12, m_12);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = h_20;
                                    {
                                      ATerm i_20 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm o_12 (ATerm t)
                                          {
                                            ATerm v_29 = NULL;
                                            v_29 = t;
                                            a_29 :
                                            if(!(match_string(v_29, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm q_12 (ATerm t)
                                          {
                                            ATerm w_29 = NULL;
                                            w_29 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_29));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, o_12, q_12);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = i_20;
                                          {
                                            ATerm r_20 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm r_12 (ATerm t)
                                                {
                                                  ATerm y_29 = NULL;
                                                  y_29 = t;
                                                  c_29 :
                                                  if(!(match_string(y_29, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm s_12 (ATerm t)
                                                {
                                                  ATerm z_29 = NULL;
                                                  z_29 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_29));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, r_12, s_12);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = r_20;
                                                {
                                                  ATerm s_20 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm t_12 (ATerm t)
                                                      {
                                                        ATerm b_30 = NULL;
                                                        b_30 = t;
                                                        e_29 :
                                                        if(!(match_string(b_30, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm u_12 (ATerm t)
                                                      {
                                                        ATerm c_30 = NULL;
                                                        c_30 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_30));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, t_12, u_12);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = s_20;
                                                      {
                                                        ATerm v_20 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm w_12 (ATerm t)
                                                            {
                                                              ATerm e_30 = NULL;
                                                              e_30 = t;
                                                              g_29 :
                                                              if(!(match_string(e_30, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm x_12 (ATerm t)
                                                            {
                                                              ATerm f_30 = NULL;
                                                              f_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_30));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, w_12, x_12);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = v_20;
                                                            {
                                                              ATerm w_20 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm y_12 (ATerm t)
                                                                  {
                                                                    ATerm h_30 = NULL;
                                                                    h_30 = t;
                                                                    i_29 :
                                                                    if(!(match_string(h_30, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm z_12 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, y_12, z_12);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = w_20;
                                                                  {
                                                                    ATerm x_20 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm a_13 (ATerm t)
                                                                        {
                                                                          ATerm i_30 = NULL;
                                                                          i_30 = t;
                                                                          j_29 :
                                                                          if(!(match_string(i_30, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm b_13 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, a_13, b_13);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_20;
                                                                        {
                                                                          ATerm y_20 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm d_13 (ATerm t)
                                                                              {
                                                                                ATerm j_30 = NULL;
                                                                                j_30 = t;
                                                                                k_29 :
                                                                                if(!(match_string(j_30, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm e_13 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, d_13, e_13);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_20;
                                                                              {
                                                                                ATerm z_20 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm f_13 (ATerm t)
                                                                                    {
                                                                                      ATerm k_30 = NULL;
                                                                                      k_30 = t;
                                                                                      l_29 :
                                                                                      if(!(match_string(k_30, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm g_13 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, f_13, g_13);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_20;
                                                                                    {
                                                                                      ATerm i_13 (ATerm t)
                                                                                      {
                                                                                        ATerm l_30 = NULL;
                                                                                        l_30 = t;
                                                                                        m_29 :
                                                                                        if(!(match_string(l_30, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm j_13 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, i_13, j_13);
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
ATerm table_put_0 (ATerm t)
{
  ATerm w_30 = NULL,b_31 = NULL,c_31 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
    d_31 = t;
    s_30 :
    if(match_cons(d_31, sym_TCons_2))
      {
        e_31 = ATgetArgument(d_31, 0);
        f_31 = ATgetArgument(d_31, 1);
        t_30 :
        if(match_cons(f_31, sym_TCons_2))
          {
            g_31 = ATgetArgument(f_31, 0);
            h_31 = ATgetArgument(f_31, 1);
            u_30 :
            if(match_cons(h_31, sym_TCons_2))
              {
                i_31 = ATgetArgument(h_31, 0);
                j_31 = ATgetArgument(h_31, 1);
                v_30 :
                if(match_cons(j_31, sym_TNil_0))
                  {
                    if(w_30 != NULL && w_30 != e_31)
                      _fail(e_31);
                    else
                      w_30 = e_31;
                    if(b_31 != NULL && b_31 != g_31)
                      _fail(g_31);
                    else
                      b_31 = g_31;
                    if(c_31 != NULL && c_31 != i_31)
                      _fail(i_31);
                    else
                      c_31 = i_31;
                    t = SSL_table_put(not_null(w_30), not_null(b_31), not_null(c_31));
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
  t = a_21;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  y_31 = t;
  r_31 :
  if(match_cons(y_31, sym_TCons_2))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      s_31 :
      if(match_cons(a_32, sym_TCons_2))
        {
          b_32 = ATgetArgument(a_32, 0);
          c_32 = ATgetArgument(a_32, 1);
          t_31 :
          if(match_cons(c_32, sym_TNil_0))
            t = SSL_table_get(not_null(z_31), not_null(b_32));
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
  ATerm m_32 = NULL,n_32 = NULL,a_33 = NULL,q_33 = NULL,r_33 = NULL,c_34 = NULL,d_34 = NULL;
  m_32 = t;
  i_32 :
  if(match_cons(m_32, sym_TCons_2))
    {
      n_32 = ATgetArgument(m_32, 0);
      a_33 = ATgetArgument(m_32, 1);
      j_32 :
      if(match_cons(a_33, sym_TCons_2))
        {
          q_33 = ATgetArgument(a_33, 0);
          r_33 = ATgetArgument(a_33, 1);
          k_32 :
          if(match_cons(r_33, sym_TCons_2))
            {
              c_34 = ATgetArgument(r_33, 0);
              d_34 = ATgetArgument(r_33, 1);
              l_32 :
              if(match_cons(d_34, sym_TNil_0))
                {
                  ATerm b_21;
                  b_21 = t;
                  {
                    ATerm h_34 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm c_21 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = c_21;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      h_34 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_34), not_null(h_34)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = b_21;
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
ATerm assert_1 (ATerm t, ATerm u_43 (ATerm))
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  s_34 = t;
  p_34 :
  if(match_cons(s_34, sym_TCons_2))
    {
      t_34 = ATgetArgument(s_34, 0);
      u_34 = ATgetArgument(s_34, 1);
      q_34 :
      if(match_cons(u_34, sym_TCons_2))
        {
          v_34 = ATgetArgument(u_34, 0);
          w_34 = ATgetArgument(u_34, 1);
          r_34 :
          if(match_cons(w_34, sym_TNil_0))
            {
              ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
              ATerm d_21;
              d_21 = t;
              {
                ATerm c_35 = NULL;
                ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
                t = u_43(t);
                c_35 = t;
                if(z_34 != NULL && z_34 != c_35)
                  _fail(c_35);
                else
                  z_34 = c_35;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm e_21 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = e_21;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  d_35 = t;
                  o_34 :
                  if(match_cons(d_35, sym_Cons_2))
                    {
                      e_35 = ATgetArgument(d_35, 0);
                      f_35 = ATgetArgument(d_35, 1);
                      if(a_35 != NULL && a_35 != e_35)
                        _fail(e_35);
                      else
                        a_35 = e_35;
                      if(b_35 != NULL && b_35 != f_35)
                        _fail(f_35);
                      else
                        b_35 = f_35;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), not_null(a_35)), not_null(b_35)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = d_21;
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
ATerm ArgOption_2 (ATerm t, ATerm i_47 (ATerm), ATerm j_47 (ATerm))
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  n_35 = t;
  l_35 :
  if(match_cons(n_35, sym_Cons_2))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      m_35 :
      if(match_cons(p_35, sym_Cons_2))
        {
          q_35 = ATgetArgument(p_35, 0);
          r_35 = ATgetArgument(p_35, 1);
          {
            ATerm v_35 = NULL;
            t = not_null(o_35);
            t = i_47(t);
            t = not_null(q_35);
            t = j_47(t);
            v_35 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_35), not_null(r_35));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm g_47 (ATerm), ATerm h_47 (ATerm))
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym_Cons_2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        ATerm h_36 = NULL;
        t = not_null(d_36);
        t = g_47(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = h_47(t);
        h_36 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_36), not_null(e_36));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  t = SSL_implode_string(not_null(m_36));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  t = SSL_explode_string(not_null(q_36));
  return(t);
}
ATerm basename_1 (ATerm t, ATerm u_49 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm k_13 (ATerm t)
    {
      ATerm f_21 = t;
      if(PushChoice()==0)
        {
          t = Cons_2(t, _id, k_13);
          PopChoice();
        }
      else
        {
          t = f_21;
          {
            ATerm g_21 = t;
            if(PushChoice()==0)
              {
                ATerm l_13 (ATerm t)
                {
                  ATerm v_36 = NULL;
                  v_36 = t;
                  t_36 :
                  if(!(match_int(v_36, 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, l_13, _id);
                PopChoice();
              }
            else
              {
                t = g_21;
                {
                  ATerm m_13 (ATerm t)
                  {
                    ATerm w_36 = NULL;
                    w_36 = t;
                    u_36 :
                    if(!(match_int(w_36, 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2(t, m_13, u_49);
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, k_13);
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
  ATerm h_21 = t;
  if(PushChoice()==0)
    {
      ATerm n_13 (ATerm t)
      {
        ATerm u_37 = NULL;
        u_37 = t;
        y_36 :
        if(!(match_string(u_37, "-e")))
          _fail(t);
        return(t);
      }
      ATerm o_13 (ATerm t)
      {
        ATerm v_37 = NULL;
        v_37 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(v_37));
        return(t);
      }
      t = ArgOption_2(t, n_13, o_13);
      PopChoice();
    }
  else
    {
      t = h_21;
      {
        ATerm i_21 = t;
        if(PushChoice()==0)
          {
            ATerm p_13 (ATerm t)
            {
              ATerm x_37 = NULL;
              x_37 = t;
              a_37 :
              if(!(match_string(x_37, "-I")))
                _fail(t);
              return(t);
            }
            ATerm u_13 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Ignore_0);
              return(t);
            }
            t = ArgOption_2(t, p_13, u_13);
            PopChoice();
          }
        else
          {
            t = i_21;
            {
              ATerm j_21 = t;
              if(PushChoice()==0)
                {
                  ATerm v_13 (ATerm t)
                  {
                    ATerm y_37 = NULL;
                    y_37 = t;
                    b_37 :
                    if(!(match_string(y_37, "--Include")))
                      _fail(t);
                    return(t);
                  }
                  ATerm a_14 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Ignore_0);
                    return(t);
                  }
                  t = ArgOption_2(t, v_13, a_14);
                  PopChoice();
                }
              else
                {
                  t = j_21;
                  {
                    ATerm k_21 = t;
                    if(PushChoice()==0)
                      {
                        ATerm b_14 (ATerm t)
                        {
                          ATerm z_37 = NULL;
                          z_37 = t;
                          c_37 :
                          if(!(match_string(z_37, "-CI")))
                            _fail(t);
                          return(t);
                        }
                        ATerm c_14 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Ignore_0);
                          return(t);
                        }
                        t = ArgOption_2(t, b_14, c_14);
                        PopChoice();
                      }
                    else
                      {
                        t = k_21;
                        {
                          ATerm w_21 = t;
                          if(PushChoice()==0)
                            {
                              ATerm g_14 (ATerm t)
                              {
                                ATerm a_38 = NULL;
                                a_38 = t;
                                d_37 :
                                if(!(match_string(a_38, "-CL")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm h_14 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Ignore_0);
                                return(t);
                              }
                              t = ArgOption_2(t, g_14, h_14);
                              PopChoice();
                            }
                          else
                            {
                              t = w_21;
                              {
                                ATerm x_21 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_14 (ATerm t)
                                    {
                                      ATerm b_38 = NULL;
                                      b_38 = t;
                                      e_37 :
                                      if(!(match_string(b_38, "-CC")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm k_14 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(sym_CC_0);
                                      return(t);
                                    }
                                    t = Option_2(t, i_14, k_14);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_21;
                                    {
                                      ATerm d_22 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm l_14 (ATerm t)
                                          {
                                            ATerm c_38 = NULL;
                                            c_38 = t;
                                            f_37 :
                                            if(!(match_string(c_38, "--norm")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm m_14 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_NORM_0);
                                            return(t);
                                          }
                                          t = Option_2(t, l_14, m_14);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_22;
                                          {
                                            ATerm e_22 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm n_14 (ATerm t)
                                                {
                                                  ATerm d_38 = NULL;
                                                  d_38 = t;
                                                  g_37 :
                                                  if(!(match_string(d_38, "-i")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm o_14 (ATerm t)
                                                {
                                                  ATerm e_38 = NULL;
                                                  ATerm g_38 = NULL;
                                                  e_38 = t;
                                                  t = basename_0(t);
                                                  g_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_38));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, n_14, o_14);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = e_22;
                                                {
                                                  ATerm g_22 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm p_14 (ATerm t)
                                                      {
                                                        ATerm i_38 = NULL;
                                                        i_38 = t;
                                                        j_37 :
                                                        if(!(match_string(i_38, "--main")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm q_14 (ATerm t)
                                                      {
                                                        ATerm j_38 = NULL;
                                                        j_38 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(j_38));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, p_14, q_14);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = g_22;
                                                      {
                                                        ATerm i_22 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm r_14 (ATerm t)
                                                            {
                                                              ATerm l_38 = NULL;
                                                              l_38 = t;
                                                              l_37 :
                                                              if(!(match_string(l_38, "-m")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm s_14 (ATerm t)
                                                            {
                                                              ATerm m_38 = NULL;
                                                              m_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Main_1, not_null(m_38));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, r_14, s_14);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = i_22;
                                                            {
                                                              ATerm j_22 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm t_14 (ATerm t)
                                                                  {
                                                                    ATerm o_38 = NULL;
                                                                    o_38 = t;
                                                                    n_37 :
                                                                    if(!(match_string(o_38, "--ast")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm u_14 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_AST_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, t_14, u_14);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = j_22;
                                                                  {
                                                                    ATerm k_22 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm v_14 (ATerm t)
                                                                        {
                                                                          ATerm p_38 = NULL;
                                                                          p_38 = t;
                                                                          o_37 :
                                                                          if(!(match_string(p_38, "-F")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm w_14 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_FRONTEND_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, v_14, w_14);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_22;
                                                                        {
                                                                          ATerm l_22 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm x_14 (ATerm t)
                                                                              {
                                                                                ATerm q_38 = NULL;
                                                                                q_38 = t;
                                                                                p_37 :
                                                                                if(!(match_string(q_38, "--fusion")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm y_14 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_FUSION_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, x_14, y_14);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_22;
                                                                              {
                                                                                ATerm m_22 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm z_14 (ATerm t)
                                                                                    {
                                                                                      ATerm r_38 = NULL;
                                                                                      r_38 = t;
                                                                                      q_37 :
                                                                                      if(!(match_string(r_38, "--csyntax")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm a_15 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_CSYNTAX_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, z_14, a_15);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_22;
                                                                                    {
                                                                                      ATerm o_22 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          ATerm b_15 (ATerm t)
                                                                                          {
                                                                                            ATerm s_38 = NULL;
                                                                                            s_38 = t;
                                                                                            r_37 :
                                                                                            if(!(match_string(s_38, "--trace-all")))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm c_15 (ATerm t)
                                                                                          {
                                                                                            t = (ATerm) ATmakeAppl(sym_TraceAll_0);
                                                                                            {
                                                                                              ATerm x_22;
                                                                                              x_22 = t;
                                                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue))), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                                              {
                                                                                                ATerm d_15 (ATerm t)
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
                                                                                                  return(t);
                                                                                                }
                                                                                                t = assert_1(t, d_15);
                                                                                              }
                                                                                              t = x_22;
                                                                                            }
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_2(t, b_15, c_15);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_22;
                                                                                          {
                                                                                            ATerm e_15 (ATerm t)
                                                                                            {
                                                                                              ATerm t_38 = NULL;
                                                                                              t_38 = t;
                                                                                              s_37 :
                                                                                              if(!(match_string(t_38, "-t")))
                                                                                                _fail(t);
                                                                                              return(t);
                                                                                            }
                                                                                            ATerm f_15 (ATerm t)
                                                                                            {
                                                                                              ATerm u_38 = NULL;
                                                                                              u_38 = t;
                                                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(u_38)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue))), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                                              {
                                                                                                ATerm j_15 (ATerm t)
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
                                                                                                  return(t);
                                                                                                }
                                                                                                t = assert_1(t, j_15);
                                                                                              }
                                                                                              t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(u_38));
                                                                                              return(t);
                                                                                            }
                                                                                            t = ArgOption_2(t, e_15, f_15);
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
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym_Cons_2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_39)), not_null(g_39));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_47 (ATerm))
{
  ATerm k_15 (ATerm t)
  {
    ATerm l_39 = NULL;
    l_39 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_39));
    return(t);
  }
  ATerm o_15 (ATerm t)
  {
    ATerm y_22 = t;
    if(PushChoice()==0)
      {
        ATerm z_22 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = z_22;
            t = e_47(t);
            t = Cons_2(t, _id, o_15);
          }
        PopChoice();
      }
    else
      {
        t = y_22;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, k_15, o_15);
  return(t);
}
ATerm skip1_1 (ATerm t, ATerm j_51 (ATerm))
{
  t = at_tail_1(t, j_51);
  return(t);
}
ATerm filter_option_args_1 (ATerm t, ATerm l_51 (ATerm))
{
  ATerm p_15 (ATerm t)
  {
    t = Cons_2(t, l_51, _id);
    t = Tl_0(t);
    return(t);
  }
  ATerm p_39 (ATerm t, ATerm q_39 (ATerm))
  {
    t = at_tail_1(t, q_39);
    return(t);
  }
  t = filter_gen_2(t, p_15, p_39);
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm l_57 (ATerm))
{
  t = Cons_2(t, _id, l_57);
  return(t);
}
ATerm skip2_1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm q_15 (ATerm t)
  {
    t = at_tail_1(t, k_51);
    return(t);
  }
  t = at_tail_1(t, q_15);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm))
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym_Cons_2))
    {
      w_39 = ATgetArgument(v_39, 0);
      x_39 = ATgetArgument(v_39, 1);
      {
        ATerm a_40 = NULL;
        t = not_null(w_39);
        {
          ATerm c_40 = NULL;
          t = m_43(t);
          a_40 = t;
          t = not_null(x_39);
          t = n_43(t);
          c_40 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_40), not_null(c_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym_Cons_2))
    {
      k_40 = ATgetArgument(j_40, 0);
      l_40 = ATgetArgument(j_40, 1);
      t = not_null(l_40);
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  p_40 :
  if(!(match_cons(q_40, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm filter_gen_2 (ATerm t, ATerm g_51 (ATerm), ATerm h_51 (ATerm, ATerm (ATerm)))
{
  ATerm r_40 (ATerm t)
  {
    ATerm a_23 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = a_23;
        {
          ATerm b_23 = t;
          if(PushChoice()==0)
            {
              t = g_51(t);
              t = h_51(t, r_40);
              PopChoice();
            }
          else
            {
              t = b_23;
              t = Tl_0(t);
              t = r_40(t);
            }
        }
      }
    return(t);
  }
  t = r_40(t);
  return(t);
}
ATerm filter_options_1 (ATerm t, ATerm m_51 (ATerm))
{
  ATerm r_15 (ATerm t)
  {
    t = Cons_2(t, m_51, _id);
    return(t);
  }
  t = filter_gen_2(t, r_15, skip2_1);
  return(t);
}
ATerm process_sc_options_0 (ATerm t)
{
  ATerm b_41 = NULL,e_41 = NULL,h_41 = NULL,k_41 = NULL;
  ATerm d_23;
  d_23 = t;
  {
    ATerm d_41 = NULL;
    ATerm s_15 (ATerm t)
    {
      ATerm c_41 = NULL;
      c_41 = t;
      s_40 :
      if(!(match_string(c_41, "-I")))
        _fail(t);
      return(t);
    }
    t = filter_options_1(t, s_15);
    d_41 = t;
    if(b_41 != NULL && b_41 != d_41)
      _fail(d_41);
    else
      b_41 = d_41;
  }
  t = d_23;
  {
    ATerm f_23;
    f_23 = t;
    {
      ATerm g_41 = NULL;
      ATerm v_15 (ATerm t)
      {
        ATerm f_41 = NULL;
        f_41 = t;
        u_40 :
        if(!(match_string(f_41, "-CI")))
          _fail(t);
        return(t);
      }
      t = filter_option_args_1(t, v_15);
      g_41 = t;
      if(e_41 != NULL && e_41 != g_41)
        _fail(g_41);
      else
        e_41 = g_41;
    }
    t = f_23;
    {
      ATerm g_23;
      g_23 = t;
      {
        ATerm j_41 = NULL;
        ATerm w_15 (ATerm t)
        {
          ATerm i_41 = NULL;
          i_41 = t;
          w_40 :
          if(!(match_string(i_41, "-CL")))
            _fail(t);
          return(t);
        }
        t = filter_option_args_1(t, w_15);
        j_41 = t;
        if(h_41 != NULL && h_41 != j_41)
          _fail(j_41);
        else
          h_41 = j_41;
      }
      t = g_23;
      {
        ATerm x_15 (ATerm t)
        {
          ATerm h_23 = t;
          if(PushChoice()==0)
            {
              t = sc_options_0(t);
              PopChoice();
            }
          else
            {
              t = h_23;
              t = io_options_0(t);
            }
          return(t);
        }
        t = parse_options_1(t, x_15);
        {
          ATerm i_23 = t;
          if(PushChoice()==0)
            {
              ATerm m_41 = NULL;
              ATerm y_15 (ATerm t)
              {
                ATerm z_15 (ATerm t)
                {
                  ATerm l_41 = NULL;
                  l_41 = t;
                  if(k_41 != NULL && k_41 != l_41)
                    _fail(l_41);
                  else
                    k_41 = l_41;
                  return(t);
                }
                t = Input_1(t, z_15);
                return(t);
              }
              t = option_defined_1(t, y_15);
              m_41 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_InclDir_1, not_null(b_41)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CInclDir_1, not_null(e_41)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CLibDir_1, not_null(h_41)), not_null(m_41)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(k_41), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".r", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
              PopChoice();
            }
          else
            {
              t = i_23;
              {
                ATerm o_41 = NULL;
                o_41 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Help_0), not_null(o_41)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_23 = t;
  if(PushChoice()==0)
    {
      t = process_sc_options_0(t);
      PopChoice();
    }
  else
    {
      t = r_23;
      t = sc_usage_0(t);
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  {
    ATerm s_23 = t;
    if(PushChoice()==0)
      {
        ATerm b_16 (ATerm t)
        {
          ATerm e_16 (ATerm t)
          {
            t = sc_usage_0(t);
            t = (ATerm) ATmakeInt(1);
            t = exit_0(t);
            return(t);
          }
          t = need_help_1(t, e_16);
          return(t);
        }
        ATerm d_16 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, b_16, d_16);
        PopChoice();
      }
    else
      {
        t = s_23;
        {
          ATerm t_23 = t;
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
                ATerm f_16 (ATerm t)
                {
                  ATerm u_23 = t;
                  if(PushChoice()==0)
                    {
                      ATerm g_16 (ATerm t)
                      {
                        ATerm o_16 (ATerm t)
                        {
                          ATerm x_41 = NULL;
                          x_41 = t;
                          w_41 :
                          if(!(match_cons(x_41, sym_NORM_0)))
                            _fail(t);
                          return(t);
                        }
                        t = option_defined_1(t, o_16);
                        return(t);
                      }
                      ATerm h_16 (ATerm t)
                      {
                        t = TCons_2(t, _id, TNil_0);
                        return(t);
                      }
                      t = TCons_2(t, g_16, h_16);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = u_23;
                  {
                    ATerm p_16 (ATerm t)
                    {
                      t = TCons_2(t, remove_intermediates_0, TNil_0);
                      return(t);
                    }
                    t = TCons_2(t, _id, p_16);
                  }
                  return(t);
                }
                t = try_1(t, f_16);
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compilation succeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
              PopChoice();
            }
          else
            {
              t = t_23;
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
