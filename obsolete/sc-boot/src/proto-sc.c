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
ATerm genzip_4 (ATerm, ATerm f_56 (ATerm), ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm rzip_1 (ATerm, ATerm u_56 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_48 (ATerm));
ATerm try_1 (ATerm, ATerm l_64 (ATerm));
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
ATerm pp_c_1 (ATerm, ATerm q_65 (ATerm));
ATerm debug_1 (ATerm, ATerm o_49 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_traced_funs_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_44 (ATerm));
ATerm TraceAllFuns_0 (ATerm);
ATerm s2c_1 (ATerm, ATerm i_65 (ATerm));
ATerm stratego_cf_1 (ATerm, ATerm t_65 (ATerm));
ATerm canonicalize_1 (ATerm, ATerm h_65 (ATerm));
ATerm optimize2_1 (ATerm, ATerm g_65 (ATerm));
ATerm compile_match_1 (ATerm, ATerm f_65 (ATerm));
ATerm fusion_1 (ATerm, ATerm l_65 (ATerm));
ATerm FUSION_0 (ATerm);
ATerm optimize1_1 (ATerm, ATerm e_65 (ATerm));
ATerm inline_1 (ATerm, ATerm d_65 (ATerm));
ATerm rename_defs_1 (ATerm, ATerm c_65 (ATerm));
ATerm stratego_nf_1 (ATerm, ATerm s_65 (ATerm));
ATerm extract_1 (ATerm, ATerm a_65 (ATerm));
ATerm split_2 (ATerm, ATerm i_51 (ATerm), ATerm j_51 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm extract_all_1 (ATerm, ATerm b_65 (ATerm));
ATerm FRONTEND_0 (ATerm);
ATerm output_frontend_1 (ATerm, ATerm w_64 (ATerm));
ATerm pipe_2 (ATerm, ATerm s_46 (ATerm), ATerm t_46 (ATerm));
ATerm frontend_1 (ATerm, ATerm z_64 (ATerm));
ATerm list_1 (ATerm, ATerm x_57 (ATerm));
ATerm core_0 (ATerm);
ATerm transform_file_2 (ATerm, ATerm a_47 (ATerm), ATerm b_47 (ATerm));
ATerm AddMain_1 (ATerm, ATerm x_64 (ATerm));
ATerm Main_1 (ATerm, ATerm l_43 (ATerm));
ATerm add_main_0 (ATerm);
ATerm AST_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm c_47 (ATerm));
ATerm copy_file_3 (ATerm, ATerm d_47 (ATerm), ATerm e_47 (ATerm), ATerm f_47 (ATerm));
ATerm conc_0 (ATerm);
ATerm pref_1 (ATerm, ATerm y_64 (ATerm));
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
ATerm Input_1 (ATerm, ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_43 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm d_48 (ATerm), ATerm e_48 (ATerm));
ATerm Option_2 (ATerm, ATerm s_47 (ATerm), ATerm t_47 (ATerm));
ATerm basename_1 (ATerm, ATerm q_50 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_47 (ATerm));
ATerm map_1 (ATerm, ATerm v_57 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm o_63 (ATerm), ATerm p_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm r_63 (ATerm));
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
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_47 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_47 (ATerm));
ATerm skip1_1 (ATerm, ATerm e_52 (ATerm));
ATerm filter_option_args_1 (ATerm, ATerm g_52 (ATerm));
ATerm at_tail_1 (ATerm, ATerm h_58 (ATerm));
ATerm skip2_1 (ATerm, ATerm f_52 (ATerm));
ATerm Cons_2 (ATerm, ATerm r_43 (ATerm), ATerm s_43 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm filter_gen_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm, ATerm (ATerm)));
ATerm filter_options_1 (ATerm, ATerm h_52 (ATerm));
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
              ATerm l_17;
              l_17 = t;
              t = SSL_printnl(not_null(a_2), not_null(c_2));
              t = l_17;
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
    ATerm p_17;
    p_17 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue)), not_null(k_2)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = call_0(t);
    t = p_17;
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
ATerm genzip_4 (ATerm t, ATerm f_56 (ATerm), ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm r_17 = t;
    if(PushChoice()==0)
      {
        t = f_56(t);
        PopChoice();
      }
    else
      {
        t = r_17;
        t = g_56(t);
        {
          ATerm j_0 (ATerm t)
          {
            t = TCons_2(t, a_4, TNil_0);
            return(t);
          }
          t = TCons_2(t, i_56, j_0);
          t = h_56(t);
        }
      }
    return(t);
  }
  t = a_4(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm u_56 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, u_56);
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
              ATerm s_17;
              s_17 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".ac.abox", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))))))))))), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = rzip_1(t, conc_strings_0);
              t = rm_files_0(t);
              t = s_17;
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
ATerm fetch_1 (ATerm t, ATerm d_58 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm t_17 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, d_58, _id);
        PopChoice();
      }
    else
      {
        t = t_17;
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
ATerm try_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm u_17 = t;
  if(PushChoice()==0)
    {
      t = l_64(t);
      PopChoice();
    }
  else
    t = u_17;
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
  ATerm q_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_6), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm x_17 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = x_17;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_6), not_null(a_6)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_6), (ATerm) ATmakeAppl(sym_TNil_0))));
    }
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
                          ATerm a_18 = t;
                          if(PushChoice()==0)
                            {
                              ATerm j_6 = NULL;
                              ATerm k_6 = NULL;
                              t = not_null(a_6);
                              t = reverse_0(t);
                              t = implode_string_0(t);
                              k_6 = t;
                              if(j_6 != NULL && j_6 != k_6)
                                _fail(k_6);
                              else
                                j_6 = k_6;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_6), not_null(y_5)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_6), (ATerm) ATmakeAppl(sym_TNil_0))));
                              PopChoice();
                            }
                          else
                            {
                              t = a_18;
                              t = q_6(t);
                            }
                        }
                      else
                        t = q_6(t);
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
      ATerm b_18 = t;
      if(PushChoice()==0)
        {
          t = SplitExit_0(t);
          PopChoice();
        }
      else
        {
          t = b_18;
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
  ATerm g_18;
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("linking", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = g_18;
  {
    ATerm k_0 (ATerm t)
    {
      ATerm m_0 (ATerm t)
      {
        ATerm n_0 (ATerm t)
        {
          ATerm h_18 = t;
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
              t = h_18;
              {
                ATerm i_18 = t;
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
                    t = i_18;
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
          ATerm r_18;
          r_18 = t;
          {
            ATerm z_8 = NULL;
            t = conc_strings_0(t);
            z_8 = t;
            if(x_8 != NULL && x_8 != z_8)
              _fail(z_8);
            else
              x_8 = z_8;
          }
          t = r_18;
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
              ATerm s_18;
              s_18 = t;
              {
                ATerm a_9 = NULL;
                t = conc_strings_0(t);
                a_9 = t;
                if(y_8 != NULL && y_8 != a_9)
                  _fail(a_9);
                else
                  y_8 = a_9;
              }
              t = s_18;
              {
                ATerm t_18;
                t_18 = t;
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
                t = t_18;
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
  ATerm u_18;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compiling", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = u_18;
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
          ATerm w_18;
          w_18 = t;
          {
            ATerm k_10 = NULL;
            t = conc_strings_0(t);
            k_10 = t;
            if(i_10 != NULL && i_10 != k_10)
              _fail(k_10);
            else
              i_10 = k_10;
          }
          t = w_18;
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
              ATerm x_18;
              x_18 = t;
              {
                ATerm l_10 = NULL;
                t = conc_strings_0(t);
                l_10 = t;
                if(j_10 != NULL && j_10 != l_10)
                  _fail(l_10);
                else
                  j_10 = l_10;
              }
              t = x_18;
              {
                ATerm y_18;
                y_18 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_10), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_10), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = conc_0(t);
                t = gcc_0(t);
                t = y_18;
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
ATerm pp_c_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm r_10 = NULL;
  ATerm z_18;
  z_18 = t;
  t = dtime_0(t);
  t = z_18;
  {
    ATerm g_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("/ac2c", 0, ATtrue));
      t = pref_1(t, q_65);
      return(t);
    }
    ATerm h_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
      return(t);
    }
    t = pipe_2(t, g_1, h_1);
    {
      ATerm i_19;
      i_19 = t;
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
          t = pref_1(t, q_65);
          u_10 = t;
          if(t_10 != NULL && t_10 != u_10)
            _fail(u_10);
          else
            t_10 = u_10;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(")", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      t = i_19;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_49 (ATerm))
{
  ATerm j_19;
  j_19 = t;
  {
    ATerm i_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm j_1 (ATerm t)
    {
      ATerm z_10 = NULL;
      ATerm b_11 = NULL;
      z_10 = t;
      {
        ATerm c_11 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = o_49(t);
        c_11 = t;
        if(b_11 != NULL && b_11 != c_11)
          _fail(c_11);
        else
          b_11 = c_11;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_11), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_10), (ATerm) ATmakeAppl(sym_Nil_0)));
      }
      return(t);
    }
    t = split_2(t, i_1, j_1);
    t = printnl_0(t);
  }
  t = j_19;
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
    ATerm k_1 (ATerm t)
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
    t = map_1(t, k_1);
  }
  return(t);
}
ATerm get_traced_funs_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  t = table_getlist_0(t);
  {
    ATerm l_1 (ATerm t)
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
    t = map_1(t, l_1);
    t = concat_0(t);
    {
      ATerm m_19 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = m_19;
          {
            ATerm m_1 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("traced functions: ", 0, ATtrue));
              return(t);
            }
            t = debug_1(t, m_1);
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
  ATerm b_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym_TNil_0))
    {
      ATerm c_14 = NULL,d_14 = NULL;
      t = (ATerm) ATmakeAppl(sym_Keys_0);
      {
        ATerm n_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
          return(t);
        }
        t = rewrite_1(t, n_1);
        c_14 = t;
        y_13 :
        if(match_cons(c_14, sym_Defined_1))
          {
            d_14 = ATgetArgument(c_14, 0);
            z_13 :
            if(match_string(d_14, "a_0"))
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
ATerm s2c_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/s2c", 0, ATtrue));
    t = pref_1(t, i_65);
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    {
      ATerm n_19 = t;
      if(PushChoice()==0)
        {
          t = TraceAllFuns_0(t);
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
          PopChoice();
        }
      else
        {
          t = n_19;
          t = get_traced_funs_0(t);
        }
    }
    return(t);
  }
  t = pipe_3(t, o_1, p_1, q_1);
  return(t);
}
ATerm stratego_cf_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Canonical-Format", 0, ATtrue));
    t = pref_1(t, t_65);
    return(t);
  }
  t = pipe_2(t, r_1, _id);
  return(t);
}
ATerm canonicalize_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/canonicalize", 0, ATtrue));
    t = pref_1(t, h_65);
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, t_1, u_1);
  return(t);
}
ATerm optimize2_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize2", 0, ATtrue));
    t = pref_1(t, g_65);
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, v_1, e_2);
  return(t);
}
ATerm compile_match_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/compile-match", 0, ATtrue));
    t = pref_1(t, f_65);
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, f_2, g_2);
  return(t);
}
ATerm fusion_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/fusion", 0, ATtrue));
    t = pref_1(t, l_65);
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".so2", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, j_2, l_2);
  return(t);
}
ATerm FUSION_0 (ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  g_14 :
  if(!(match_cons(k_14, sym_FUSION_0)))
    _fail(t);
  return(t);
}
ATerm optimize1_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize1", 0, ATtrue));
    t = pref_1(t, e_65);
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, m_2, n_2);
  return(t);
}
ATerm inline_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/inline", 0, ATtrue));
    t = pref_1(t, d_65);
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, w_2, x_2);
  return(t);
}
ATerm rename_defs_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/rename-defs", 0, ATtrue));
    t = pref_1(t, c_65);
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, y_2, z_2);
  return(t);
}
ATerm stratego_nf_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Normal-Format", 0, ATtrue));
    t = pref_1(t, s_65);
    return(t);
  }
  t = pipe_2(t, l_3, _id);
  return(t);
}
ATerm extract_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/extract", 0, ATtrue));
    t = pref_1(t, a_65);
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, m_3, n_3);
  return(t);
}
ATerm split_2 (ATerm t, ATerm i_51 (ATerm), ATerm j_51 (ATerm))
{
  ATerm j_15 = NULL;
  ATerm l_15 = NULL,p_15 = NULL;
  j_15 = t;
  {
    ATerm o_19;
    o_19 = t;
    {
      ATerm m_15 = NULL;
      t = not_null(j_15);
      t = i_51(t);
      m_15 = t;
      if(l_15 != NULL && l_15 != m_15)
        _fail(m_15);
      else
        l_15 = m_15;
    }
    t = o_19;
    {
      ATerm q_15 = NULL;
      t = not_null(j_15);
      t = j_51(t);
      q_15 = t;
      if(p_15 != NULL && p_15 != q_15)
        _fail(q_15);
      else
        p_15 = q_15;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_15), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm p_19;
  p_19 = t;
  {
    ATerm o_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, o_3, _id);
    t = printnl_0(t);
  }
  t = p_19;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm q_19;
  q_19 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = q_19;
  return(t);
}
ATerm extract_all_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/extract-all", 0, ATtrue));
    t = pref_1(t, b_65);
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, p_3, z_3);
  return(t);
}
ATerm FRONTEND_0 (ATerm t)
{
  ATerm y_15 = NULL;
  y_15 = t;
  x_15 :
  if(!(match_cons(y_15, sym_FRONTEND_0)))
    _fail(t);
  return(t);
}
ATerm output_frontend_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm b_16 = NULL,c_16 = NULL;
  ATerm b_4 (ATerm t)
  {
    ATerm k_4 (ATerm t)
    {
      t = option_defined_1(t, FRONTEND_0);
      return(t);
    }
    ATerm l_4 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, k_4, l_4);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm n_4 (ATerm t)
        {
          ATerm r_19 = t;
          if(PushChoice()==0)
            {
              t = extract_all_1(t, w_64);
              PopChoice();
            }
          else
            {
              t = r_19;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
              t = fatal_error_0(t);
            }
          return(t);
        }
        t = TCons_2(t, n_4, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, m_4);
      {
        ATerm o_4 (ATerm t)
        {
          ATerm t_4 (ATerm t)
          {
            ATerm u_4 (ATerm t)
            {
              ATerm d_16 = NULL;
              d_16 = t;
              if(b_16 != NULL && b_16 != d_16)
                _fail(d_16);
              else
                b_16 = d_16;
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              ATerm y_4 (ATerm t)
              {
                ATerm e_16 = NULL;
                e_16 = t;
                if(c_16 != NULL && c_16 != e_16)
                  _fail(e_16);
                else
                  c_16 = e_16;
                return(t);
              }
              t = TCons_2(t, y_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, u_4, w_4);
            return(t);
          }
          t = TCons_2(t, t_4, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, o_4);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_16), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_16), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        t = (ATerm) ATmakeInt(0);
        t = exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, b_4);
  return(t);
}
ATerm pipe_2 (ATerm t, ATerm s_46 (ATerm), ATerm t_46 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = pipe_3(t, s_46, t_46, z_4);
  return(t);
}
ATerm frontend_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("/frontend", 0, ATtrue));
    t = pref_1(t, z_64);
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
    return(t);
  }
  t = pipe_2(t, a_5, b_5);
  return(t);
}
ATerm list_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm h_16 (ATerm t)
  {
    ATerm b_20 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = b_20;
        t = Cons_2(t, x_57, h_16);
      }
    return(t);
  }
  t = h_16(t);
  return(t);
}
ATerm core_0 (ATerm t)
{
  ATerm j_16 = NULL;
  ATerm d_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
    {
      ATerm o_5 (ATerm t)
      {
        ATerm p_5 (ATerm t)
        {
          ATerm k_16 = NULL;
          k_16 = t;
          if(j_16 != NULL && j_16 != k_16)
            _fail(k_16);
          else
            j_16 = k_16;
          return(t);
        }
        t = ExecDir_1(t, p_5);
        return(t);
      }
      t = try_1(t, o_5);
      return(t);
    }
    t = list_1(t, n_5);
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = TCons_2(t, _id, TNil_0);
    return(t);
  }
  t = TCons_2(t, d_5, m_5);
  {
    ATerm q_5 (ATerm t)
    {
      ATerm g_6 (ATerm t)
      {
        ATerm h_6 (ATerm t)
        {
          t = not_null(j_16);
          return(t);
        }
        t = frontend_1(t, h_6);
        return(t);
      }
      t = TCons_2(t, g_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, q_5);
    {
      ATerm i_6 (ATerm t)
      {
        t = not_null(j_16);
        return(t);
      }
      t = output_frontend_1(t, i_6);
      {
        ATerm l_6 (ATerm t)
        {
          ATerm m_6 (ATerm t)
          {
            ATerm n_6 (ATerm t)
            {
              t = not_null(j_16);
              return(t);
            }
            t = extract_1(t, n_6);
            {
              ATerm o_6 (ATerm t)
              {
                t = not_null(j_16);
                return(t);
              }
              t = stratego_nf_1(t, o_6);
              {
                ATerm p_6 (ATerm t)
                {
                  t = not_null(j_16);
                  return(t);
                }
                t = rename_defs_1(t, p_6);
                {
                  ATerm r_6 (ATerm t)
                  {
                    t = not_null(j_16);
                    return(t);
                  }
                  t = inline_1(t, r_6);
                  {
                    ATerm s_6 (ATerm t)
                    {
                      t = not_null(j_16);
                      return(t);
                    }
                    t = optimize1_1(t, s_6);
                  }
                }
              }
            }
            return(t);
          }
          t = TCons_2(t, m_6, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, l_6);
        {
          ATerm t_6 (ATerm t)
          {
            ATerm g_7 (ATerm t)
            {
              t = option_defined_1(t, FUSION_0);
              return(t);
            }
            ATerm h_7 (ATerm t)
            {
              ATerm k_7 (ATerm t)
              {
                ATerm l_7 (ATerm t)
                {
                  t = not_null(j_16);
                  return(t);
                }
                t = fusion_1(t, l_7);
                return(t);
              }
              t = TCons_2(t, k_7, TNil_0);
              return(t);
            }
            t = TCons_2(t, g_7, h_7);
            return(t);
          }
          t = try_1(t, t_6);
          {
            ATerm m_7 (ATerm t)
            {
              ATerm o_7 (ATerm t)
              {
                ATerm p_7 (ATerm t)
                {
                  t = not_null(j_16);
                  return(t);
                }
                t = compile_match_1(t, p_7);
                {
                  ATerm r_7 (ATerm t)
                  {
                    t = not_null(j_16);
                    return(t);
                  }
                  t = optimize2_1(t, r_7);
                }
                return(t);
              }
              t = TCons_2(t, o_7, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, m_7);
            {
              ATerm s_7 (ATerm t)
              {
                ATerm w_7 (ATerm t)
                {
                  ATerm y_7 (ATerm t)
                  {
                    t = not_null(j_16);
                    return(t);
                  }
                  t = canonicalize_1(t, y_7);
                  {
                    ATerm z_7 (ATerm t)
                    {
                      t = not_null(j_16);
                      return(t);
                    }
                    t = stratego_cf_1(t, z_7);
                    {
                      ATerm a_8 (ATerm t)
                      {
                        t = not_null(j_16);
                        return(t);
                      }
                      t = s2c_1(t, a_8);
                      {
                        ATerm b_8 (ATerm t)
                        {
                          t = not_null(j_16);
                          return(t);
                        }
                        t = pp_c_1(t, b_8);
                      }
                    }
                  }
                  return(t);
                }
                t = TCons_2(t, w_7, TNil_0);
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
ATerm transform_file_2 (ATerm t, ATerm a_47 (ATerm), ATerm b_47 (ATerm))
{
  ATerm o_16 = NULL,s_16 = NULL;
  ATerm c_20;
  c_20 = t;
  {
    ATerm p_16 = NULL;
    t = conc_strings_0(t);
    p_16 = t;
    if(o_16 != NULL && o_16 != p_16)
      _fail(p_16);
    else
      o_16 = p_16;
  }
  t = c_20;
  {
    ATerm c_8 (ATerm t)
    {
      t = TCons_2(t, b_47, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, c_8);
    {
      ATerm f_20;
      f_20 = t;
      {
        ATerm t_16 = NULL;
        t = conc_strings_0(t);
        t_16 = t;
        if(s_16 != NULL && s_16 != t_16)
          _fail(t_16);
        else
          s_16 = t_16;
      }
      t = f_20;
      {
        ATerm g_20;
        g_20 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_16), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = apply_to_file_1(t, a_47);
        t = g_20;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm d_17 = NULL,e_17 = NULL;
  d_17 = t;
  b_17 :
  if(match_cons(d_17, sym_Specification_1))
    {
      e_17 = ATgetArgument(d_17, 0);
      {
        ATerm g_17 = NULL;
        ATerm h_17 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = x_64(t);
        h_17 = t;
        if(g_17 != NULL && g_17 != h_17)
          _fail(h_17);
        else
          g_17 = h_17;
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(ATmakeSymbol("main", 0, ATtrue)), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_17)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0))), not_null(e_17)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Main_1 (ATerm t, ATerm l_43 (ATerm))
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym_Main_1))
    {
      o_17 = ATgetArgument(n_17, 0);
      {
        ATerm q_17 = NULL;
        t = not_null(o_17);
        t = l_43(t);
        q_17 = t;
        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(q_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm v_17 = NULL;
  ATerm m_20 = t;
  if(PushChoice()==0)
    {
      ATerm g_8 (ATerm t)
      {
        ATerm j_8 (ATerm t)
        {
          ATerm k_8 (ATerm t)
          {
            ATerm w_17 = NULL;
            w_17 = t;
            if(v_17 != NULL && v_17 != w_17)
              _fail(w_17);
            else
              v_17 = w_17;
            return(t);
          }
          t = Main_1(t, k_8);
          return(t);
        }
        t = option_defined_1(t, j_8);
        return(t);
      }
      ATerm i_8 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, g_8, i_8);
      {
        ATerm l_8 (ATerm t)
        {
          ATerm m_8 (ATerm t)
          {
            ATerm n_8 (ATerm t)
            {
              ATerm p_8 (ATerm t)
              {
                t = not_null(v_17);
                return(t);
              }
              t = AddMain_1(t, p_8);
              return(t);
            }
            ATerm o_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
              return(t);
            }
            t = transform_file_2(t, n_8, o_8);
            return(t);
          }
          t = TCons_2(t, m_8, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, l_8);
      }
      PopChoice();
    }
  else
    {
      t = m_20;
      {
        ATerm q_8 (ATerm t)
        {
          ATerm d_9 (ATerm t)
          {
            ATerm e_9 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
              return(t);
            }
            t = transform_file_2(t, _id, e_9);
            return(t);
          }
          t = TCons_2(t, d_9, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, q_8);
      }
    }
  return(t);
}
ATerm AST_0 (ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  y_17 :
  if(!(match_cons(z_17, sym_AST_0)))
    _fail(t);
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  ATerm f_9 (ATerm t)
  {
    ATerm g_9 (ATerm t)
    {
      t = option_defined_1(t, AST_0);
      return(t);
    }
    ATerm h_9 (ATerm t)
    {
      ATerm i_9 (ATerm t)
      {
        ATerm j_9 (ATerm t)
        {
          ATerm e_18 = NULL;
          e_18 = t;
          if(c_18 != NULL && c_18 != e_18)
            _fail(e_18);
          else
            c_18 = e_18;
          return(t);
        }
        ATerm l_9 (ATerm t)
        {
          ATerm m_9 (ATerm t)
          {
            ATerm f_18 = NULL;
            f_18 = t;
            if(d_18 != NULL && d_18 != f_18)
              _fail(f_18);
            else
              d_18 = f_18;
            return(t);
          }
          t = TCons_2(t, m_9, TNil_0);
          return(t);
        }
        t = TCons_2(t, j_9, l_9);
        return(t);
      }
      t = TCons_2(t, i_9, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_9, h_9);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_18), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_18), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
    return(t);
  }
  t = try_1(t, f_9);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  m_18 = t;
  j_18 :
  if(match_cons(m_18, sym_TCons_2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      k_18 :
      if(match_cons(o_18, sym_TCons_2))
        {
          p_18 = ATgetArgument(o_18, 0);
          q_18 = ATgetArgument(o_18, 1);
          l_18 :
          if(match_cons(q_18, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(n_18), not_null(p_18));
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
  ATerm v_18 = NULL;
  v_18 = t;
  t = SSL_ReadFromFile(not_null(v_18));
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm c_47 (ATerm))
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  d_19 = t;
  a_19 :
  if(match_cons(d_19, sym_TCons_2))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      b_19 :
      if(match_cons(f_19, sym_TCons_2))
        {
          g_19 = ATgetArgument(f_19, 0);
          h_19 = ATgetArgument(f_19, 1);
          c_19 :
          if(match_cons(h_19, sym_TNil_0))
            {
              ATerm k_19 = NULL;
              ATerm n_20;
              n_20 = t;
              {
                ATerm l_19 = NULL;
                t = not_null(e_19);
                t = ReadFromFile_0(t);
                t = c_47(t);
                l_19 = t;
                if(k_19 != NULL && k_19 != l_19)
                  _fail(l_19);
                else
                  k_19 = l_19;
              }
              t = n_20;
              {
                ATerm s_20;
                s_20 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = WriteToBinaryFile_0(t);
                t = s_20;
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
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,d_20 = NULL,e_20 = NULL;
  y_19 = t;
  v_19 :
  if(match_cons(y_19, sym_TCons_2))
    {
      z_19 = ATgetArgument(y_19, 0);
      a_20 = ATgetArgument(y_19, 1);
      w_19 :
      if(match_cons(a_20, sym_TCons_2))
        {
          d_20 = ATgetArgument(a_20, 0);
          e_20 = ATgetArgument(a_20, 1);
          x_19 :
          if(match_cons(e_20, sym_TNil_0))
            {
              ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
              ATerm n_9 (ATerm t)
              {
                t = TCons_2(t, f_47, TNil_0);
                return(t);
              }
              t = TCons_2(t, e_47, n_9);
              h_20 = t;
              s_19 :
              if(match_cons(h_20, sym_TCons_2))
                {
                  i_20 = ATgetArgument(h_20, 0);
                  j_20 = ATgetArgument(h_20, 1);
                  t_19 :
                  if(match_cons(j_20, sym_TCons_2))
                    {
                      k_20 = ATgetArgument(j_20, 0);
                      l_20 = ATgetArgument(j_20, 1);
                      u_19 :
                      if(match_cons(l_20, sym_TNil_0))
                        {
                          ATerm t_20;
                          t_20 = t;
                          {
                            ATerm o_20 = NULL,q_20 = NULL;
                            ATerm u_20;
                            u_20 = t;
                            {
                              ATerm p_20 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_strings_0(t);
                              p_20 = t;
                              if(o_20 != NULL && o_20 != p_20)
                                _fail(p_20);
                              else
                                o_20 = p_20;
                            }
                            t = u_20;
                            {
                              ATerm r_20 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_strings_0(t);
                              r_20 = t;
                              if(q_20 != NULL && q_20 != r_20)
                                _fail(r_20);
                              else
                                q_20 = r_20;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = apply_to_file_1(t, d_47);
                            }
                          }
                          t = t_20;
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
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
  k_21 = t;
  x_20 :
  if(match_cons(k_21, sym_TCons_2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      y_20 :
      if(match_cons(m_21, sym_TCons_2))
        {
          n_21 = ATgetArgument(m_21, 0);
          o_21 = ATgetArgument(m_21, 1);
          z_20 :
          if(match_cons(o_21, sym_TNil_0))
            {
              t = not_null(l_21);
              {
                ATerm o_9 (ATerm t)
                {
                  t = not_null(n_21);
                  return(t);
                }
                t = at_end_1(t, o_9);
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
ATerm pref_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm u_21 = NULL;
  ATerm w_21 = NULL;
  u_21 = t;
  {
    ATerm x_21 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = y_64(t);
    x_21 = t;
    if(w_21 != NULL && w_21 != x_21)
      _fail(x_21);
    else
      w_21 = x_21;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_21), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
  e_22 = t;
  b_22 :
  if(match_cons(e_22, sym_TCons_2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      c_22 :
      if(match_cons(g_22, sym_TCons_2))
        {
          h_22 = ATgetArgument(g_22, 0);
          i_22 = ATgetArgument(g_22, 1);
          d_22 :
          if(match_cons(i_22, sym_TNil_0))
            t = SSL_call(not_null(f_22), not_null(h_22));
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
  ATerm s_9 (ATerm t)
  {
    t = TCons_2(t, explode_string_0, TNil_0);
    return(t);
  }
  t = TCons_2(t, explode_string_0, s_9);
  t = conc_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm pipe_3 (ATerm t, ATerm u_46 (ATerm), ATerm v_46 (ATerm), ATerm w_46 (ATerm))
{
  ATerm q_22 = NULL,s_22 = NULL;
  ATerm v_20;
  v_20 = t;
  {
    ATerm r_22 = NULL;
    t = conc_strings_0(t);
    r_22 = t;
    if(q_22 != NULL && q_22 != r_22)
      _fail(r_22);
    else
      q_22 = r_22;
  }
  t = v_20;
  {
    ATerm u_9 (ATerm t)
    {
      t = TCons_2(t, v_46, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, u_9);
    {
      ATerm w_20;
      w_20 = t;
      {
        ATerm t_22 = NULL;
        t = conc_strings_0(t);
        t_22 = t;
        if(s_22 != NULL && s_22 != t_22)
          _fail(t_22);
        else
          s_22 = t_22;
      }
      t = w_20;
      {
        ATerm a_21;
        a_21 = t;
        {
          ATerm u_22 = NULL,w_22 = NULL;
          ATerm b_21;
          b_21 = t;
          {
            ATerm v_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            t = u_46(t);
            v_22 = t;
            if(u_22 != NULL && u_22 != v_22)
              _fail(v_22);
            else
              u_22 = v_22;
          }
          t = b_21;
          {
            ATerm x_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            t = w_46(t);
            x_22 = t;
            if(w_22 != NULL && w_22 != x_22)
              _fail(x_22);
            else
              w_22 = x_22;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_22), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_22), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_22), not_null(w_22))))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = call_0(t);
          }
        }
        t = a_21;
      }
    }
  }
  return(t);
}
ATerm Output_1 (ATerm t, ATerm b_43 (ATerm))
{
  ATerm f_23 = NULL,g_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym_Output_1))
    {
      g_23 = ATgetArgument(f_23, 0);
      {
        ATerm i_23 = NULL;
        t = not_null(g_23);
        t = b_43(t);
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ExecDir_1 (ATerm t, ATerm g_43 (ATerm))
{
  ATerm p_23 = NULL,q_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_ExecDir_1))
    {
      q_23 = ATgetArgument(p_23, 0);
      {
        ATerm s_23 = NULL;
        t = not_null(q_23);
        t = g_43(t);
        s_23 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(s_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InclDir_1 (ATerm t, ATerm h_43 (ATerm))
{
  ATerm z_23 = NULL,a_24 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym_InclDir_1))
    {
      a_24 = ATgetArgument(z_23, 0);
      {
        ATerm c_24 = NULL;
        t = not_null(a_24);
        t = h_43(t);
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym_InclDir_1, not_null(c_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  ATerm v_9 (ATerm t)
  {
    ATerm x_9 (ATerm t)
    {
      ATerm y_9 (ATerm t)
      {
        ATerm t_24 = NULL;
        t_24 = t;
        if(r_24 != NULL && r_24 != t_24)
          _fail(t_24);
        else
          r_24 = t_24;
        return(t);
      }
      t = InclDir_1(t, y_9);
      return(t);
    }
    t = option_defined_1(t, x_9);
    {
      ATerm z_9 (ATerm t)
      {
        ATerm a_10 (ATerm t)
        {
          ATerm u_24 = NULL;
          u_24 = t;
          if(p_24 != NULL && p_24 != u_24)
            _fail(u_24);
          else
            p_24 = u_24;
          return(t);
        }
        t = ExecDir_1(t, a_10);
        return(t);
      }
      t = option_defined_1(t, z_9);
      {
        ATerm b_10 (ATerm t)
        {
          ATerm c_10 (ATerm t)
          {
            ATerm d_10 (ATerm t)
            {
              ATerm v_24 = NULL;
              v_24 = t;
              if(s_24 != NULL && s_24 != v_24)
                _fail(v_24);
              else
                s_24 = v_24;
              return(t);
            }
            t = Output_1(t, d_10);
            return(t);
          }
          t = option_defined_1(t, c_10);
          return(t);
        }
        t = try_1(t, b_10);
      }
    }
    return(t);
  }
  ATerm w_9 (ATerm t)
  {
    ATerm e_10 (ATerm t)
    {
      ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
      w_24 = t;
      l_24 :
      if(match_cons(w_24, sym_TCons_2))
        {
          x_24 = ATgetArgument(w_24, 0);
          y_24 = ATgetArgument(w_24, 1);
          m_24 :
          if(match_cons(y_24, sym_TCons_2))
            {
              z_24 = ATgetArgument(y_24, 0);
              a_25 = ATgetArgument(y_24, 1);
              n_24 :
              if(match_cons(a_25, sym_TNil_0))
                {
                  if(q_24 != NULL && q_24 != x_24)
                    _fail(x_24);
                  else
                    q_24 = x_24;
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
    t = TCons_2(t, e_10, TNil_0);
    return(t);
  }
  t = TCons_2(t, v_9, w_9);
  {
    ATerm f_10 (ATerm t)
    {
      ATerm m_10 (ATerm t)
      {
        ATerm n_10 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego", 0, ATtrue));
          {
            ATerm q_10 (ATerm t)
            {
              t = not_null(p_24);
              return(t);
            }
            t = pref_1(t, q_10);
          }
          return(t);
        }
        ATerm o_10 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
          return(t);
        }
        ATerm p_10 (ATerm t)
        {
          ATerm b_25 = NULL;
          ATerm c_25 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm c_21 = t;
            if(PushChoice()==0)
              {
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_24), (ATerm) ATmakeAppl(sym_Nil_0)));
                PopChoice();
              }
            else
              {
                t = c_21;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_24), (ATerm) ATmakeAppl(sym_Nil_0)));
              }
            c_25 = t;
            if(b_25 != NULL && b_25 != c_25)
              _fail(c_25);
            else
              b_25 = c_25;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("--silent", 0, ATtrue)), not_null(r_24)), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = conc_0(t);
          return(t);
        }
        t = pipe_3(t, n_10, o_10, p_10);
        return(t);
      }
      t = TCons_2(t, m_10, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, f_10);
    {
      ATerm v_10 (ATerm t)
      {
        ATerm w_10 (ATerm t)
        {
          ATerm x_10 (ATerm t)
          {
            ATerm y_10 (ATerm t)
            {
              t = not_null(s_24);
              return(t);
            }
            ATerm a_11 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
              return(t);
            }
            t = copy_file_3(t, _id, y_10, a_11);
            return(t);
          }
          t = TCons_2(t, x_10, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, w_10);
        return(t);
      }
      t = try_1(t, v_10);
    }
  }
  return(t);
}
ATerm Verbose_0 (ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  i_25 :
  if(!(match_cons(j_25, sym_Verbose_0)))
    _fail(t);
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  ATerm d_11 (ATerm t)
  {
    ATerm e_11 (ATerm t)
    {
      t = option_defined_1(t, Verbose_0);
      return(t);
    }
    ATerm f_11 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, e_11, f_11);
    {
      ATerm h_11 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, sc_version_0, h_11);
    }
    return(t);
  }
  t = try_1(t, d_11);
  return(t);
}
ATerm DeclVersion_1 (ATerm t, ATerm d_43 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_DeclVersion_1))
    {
      o_25 = ATgetArgument(n_25, 0);
      {
        ATerm q_25 = NULL;
        t = not_null(o_25);
        t = d_43(t);
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_25));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm w_25 = NULL;
  ATerm d_21 = t;
  if(PushChoice()==0)
    {
      ATerm i_11 (ATerm t)
      {
        ATerm j_11 (ATerm t)
        {
          ATerm x_25 = NULL;
          x_25 = t;
          if(w_25 != NULL && w_25 != x_25)
            _fail(x_25);
          else
            w_25 = x_25;
          return(t);
        }
        t = DeclVersion_1(t, j_11);
        return(t);
      }
      t = option_defined_1(t, i_11);
      PopChoice();
    }
  else
    {
      t = d_21;
      {
        ATerm y_25 = NULL;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
        y_25 = t;
        if(w_25 != NULL && w_25 != y_25)
          _fail(y_25);
        else
          w_25 = y_25;
      }
    }
  {
    ATerm e_21;
    e_21 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(")", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = e_21;
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
  ATerm c_26 = NULL;
  c_26 = t;
  b_26 :
  if(!(match_cons(c_26, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_49 (ATerm))
{
  ATerm k_11 (ATerm t)
  {
    ATerm f_21 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = f_21;
        {
          ATerm g_21 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = g_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_11);
  t = d_49(t);
  return(t);
}
ATerm Input_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym_Input_1))
    {
      j_26 = ATgetArgument(i_26, 0);
      {
        ATerm h_21 = t;
        if(PushChoice()==0)
          {
            ATerm l_26 = NULL;
            t = not_null(j_26);
            t = i_0(t);
            l_26 = t;
            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_26));
            PopChoice();
          }
        else
          {
            t = h_21;
            {
              ATerm o_26 = NULL;
              t = not_null(j_26);
              t = i_0(t);
              o_26 = t;
              t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_26));
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
  ATerm i_21 = t;
  if(PushChoice()==0)
    {
      ATerm l_11 (ATerm t)
      {
        ATerm f_27 = NULL;
        f_27 = t;
        u_26 :
        if(!(match_string(f_27, "-S")))
          {
            if(!(match_string(f_27, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm n_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm p_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, l_11, n_11, p_11);
      PopChoice();
    }
  else
    {
      t = i_21;
      {
        ATerm j_21 = t;
        if(PushChoice()==0)
          {
            ATerm s_11 (ATerm t)
            {
              ATerm g_27 = NULL;
              g_27 = t;
              v_26 :
              if(!(match_string(g_27, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm t_11 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm u_11 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, s_11, t_11, u_11);
            PopChoice();
          }
        else
          {
            t = j_21;
            {
              ATerm p_21 = t;
              if(PushChoice()==0)
                {
                  ATerm v_11 (ATerm t)
                  {
                    ATerm h_27 = NULL;
                    h_27 = t;
                    w_26 :
                    if(!(match_string(h_27, "-v")))
                      {
                        if(!(match_string(h_27, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm e_12 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm f_12 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, v_11, e_12, f_12);
                  PopChoice();
                }
              else
                {
                  t = p_21;
                  {
                    ATerm q_21 = t;
                    if(PushChoice()==0)
                      {
                        ATerm g_12 (ATerm t)
                        {
                          ATerm i_27 = NULL;
                          i_27 = t;
                          x_26 :
                          if(!(match_string(i_27, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm l_12 (ATerm t)
                        {
                          ATerm j_27 = NULL;
                          j_27 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(j_27));
                          return(t);
                        }
                        ATerm m_12 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, g_12, l_12, m_12);
                        PopChoice();
                      }
                    else
                      {
                        t = q_21;
                        {
                          ATerm r_21 = t;
                          if(PushChoice()==0)
                            {
                              ATerm n_12 (ATerm t)
                              {
                                ATerm l_27 = NULL;
                                l_27 = t;
                                z_26 :
                                if(!(match_string(l_27, "-i")))
                                  {
                                    if(!(match_string(l_27, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm o_12 (ATerm t)
                              {
                                ATerm m_27 = NULL;
                                m_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_27));
                                return(t);
                              }
                              ATerm x_12 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, n_12, o_12, x_12);
                              PopChoice();
                            }
                          else
                            {
                              t = r_21;
                              {
                                ATerm s_21 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm y_12 (ATerm t)
                                    {
                                      ATerm o_27 = NULL;
                                      o_27 = t;
                                      b_27 :
                                      if(!(match_string(o_27, "-o")))
                                        {
                                          if(!(match_string(o_27, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm z_12 (ATerm t)
                                    {
                                      ATerm p_27 = NULL;
                                      p_27 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_27));
                                      return(t);
                                    }
                                    ATerm a_13 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, y_12, z_12, a_13);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_21;
                                    {
                                      ATerm t_21 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm b_13 (ATerm t)
                                          {
                                            ATerm r_27 = NULL;
                                            r_27 = t;
                                            d_27 :
                                            if(!(match_string(r_27, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm c_13 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm d_13 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, b_13, c_13, d_13);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_21;
                                          {
                                            ATerm e_13 (ATerm t)
                                            {
                                              ATerm s_27 = NULL;
                                              s_27 = t;
                                              e_27 :
                                              if(!(match_string(s_27, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm f_13 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm g_13 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, e_13, f_13, g_13);
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
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  d_28 = t;
  a_28 :
  if(match_cons(d_28, sym_TCons_2))
    {
      e_28 = ATgetArgument(d_28, 0);
      f_28 = ATgetArgument(d_28, 1);
      b_28 :
      if(match_cons(f_28, sym_TCons_2))
        {
          g_28 = ATgetArgument(f_28, 0);
          h_28 = ATgetArgument(f_28, 1);
          c_28 :
          if(match_cons(h_28, sym_TNil_0))
            {
              ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
              ATerm v_21;
              v_21 = t;
              {
                ATerm n_28 = NULL;
                ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
                t = z_43(t);
                n_28 = t;
                if(k_28 != NULL && k_28 != n_28)
                  _fail(n_28);
                else
                  k_28 = n_28;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_28), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm y_21 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_28), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = y_21;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  o_28 = t;
                  z_27 :
                  if(match_cons(o_28, sym_Cons_2))
                    {
                      p_28 = ATgetArgument(o_28, 0);
                      q_28 = ATgetArgument(o_28, 1);
                      if(l_28 != NULL && l_28 != p_28)
                        _fail(p_28);
                      else
                        l_28 = p_28;
                      if(m_28 != NULL && m_28 != q_28)
                        _fail(q_28);
                      else
                        m_28 = q_28;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_28), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_28), not_null(l_28)), not_null(m_28)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = v_21;
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
ATerm ArgOption_3 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  i_29 = t;
  c_29 :
  if(match_cons(i_29, sym_Cons_2))
    {
      e_29 = ATgetArgument(i_29, 0);
      f_29 = ATgetArgument(i_29, 1);
      d_29 :
      if(match_cons(f_29, sym_Cons_2))
        {
          g_29 = ATgetArgument(f_29, 0);
          h_29 = ATgetArgument(f_29, 1);
          {
            ATerm m_29 = NULL;
            t = not_null(e_29);
            t = f_0(t);
            {
              ATerm n_29 = NULL;
              t = not_null(g_29);
              t = g_0(t);
              n_29 = t;
              if(m_29 != NULL && m_29 != n_29)
                _fail(n_29);
              else
                m_29 = n_29;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_29), not_null(h_29));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(i_29, "register-usage-info"))
        t = register_usage_1(t, h_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm d_48 (ATerm), ATerm e_48 (ATerm))
{
  ATerm h_13 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = ArgOption_3(t, d_48, e_48, h_13);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm s_47 (ATerm), ATerm t_47 (ATerm))
{
  ATerm i_13 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, s_47, t_47, i_13);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm q_50 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm j_13 (ATerm t)
    {
      ATerm z_21 = t;
      if(PushChoice()==0)
        {
          t = Cons_2(t, _id, j_13);
          PopChoice();
        }
      else
        {
          t = z_21;
          {
            ATerm a_22 = t;
            if(PushChoice()==0)
              {
                ATerm k_13 (ATerm t)
                {
                  ATerm t_29 = NULL;
                  t_29 = t;
                  r_29 :
                  if(!(match_int(t_29, 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, k_13, _id);
                PopChoice();
              }
            else
              {
                t = a_22;
                {
                  ATerm m_13 (ATerm t)
                  {
                    ATerm u_29 = NULL;
                    u_29 = t;
                    s_29 :
                    if(!(match_int(u_29, 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2(t, m_13, q_50);
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, j_13);
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
  ATerm j_22 = t;
  if(PushChoice()==0)
    {
      ATerm n_13 (ATerm t)
      {
        ATerm s_30 = NULL;
        s_30 = t;
        w_29 :
        if(!(match_string(s_30, "-e")))
          _fail(t);
        return(t);
      }
      ATerm o_13 (ATerm t)
      {
        ATerm t_30 = NULL;
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(t_30));
        return(t);
      }
      t = ArgOption_2(t, n_13, o_13);
      PopChoice();
    }
  else
    {
      t = j_22;
      {
        ATerm k_22 = t;
        if(PushChoice()==0)
          {
            ATerm p_13 (ATerm t)
            {
              ATerm v_30 = NULL;
              v_30 = t;
              y_29 :
              if(!(match_string(v_30, "-I")))
                _fail(t);
              return(t);
            }
            ATerm s_13 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Ignore_0);
              return(t);
            }
            t = ArgOption_2(t, p_13, s_13);
            PopChoice();
          }
        else
          {
            t = k_22;
            {
              ATerm l_22 = t;
              if(PushChoice()==0)
                {
                  ATerm t_13 (ATerm t)
                  {
                    ATerm w_30 = NULL;
                    w_30 = t;
                    z_29 :
                    if(!(match_string(w_30, "--Include")))
                      _fail(t);
                    return(t);
                  }
                  ATerm u_13 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Ignore_0);
                    return(t);
                  }
                  t = ArgOption_2(t, t_13, u_13);
                  PopChoice();
                }
              else
                {
                  t = l_22;
                  {
                    ATerm m_22 = t;
                    if(PushChoice()==0)
                      {
                        ATerm v_13 (ATerm t)
                        {
                          ATerm x_30 = NULL;
                          x_30 = t;
                          a_30 :
                          if(!(match_string(x_30, "-CI")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_13 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Ignore_0);
                          return(t);
                        }
                        t = ArgOption_2(t, v_13, w_13);
                        PopChoice();
                      }
                    else
                      {
                        t = m_22;
                        {
                          ATerm n_22 = t;
                          if(PushChoice()==0)
                            {
                              ATerm x_13 (ATerm t)
                              {
                                ATerm y_30 = NULL;
                                y_30 = t;
                                b_30 :
                                if(!(match_string(y_30, "-CL")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm e_14 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Ignore_0);
                                return(t);
                              }
                              t = ArgOption_2(t, x_13, e_14);
                              PopChoice();
                            }
                          else
                            {
                              t = n_22;
                              {
                                ATerm o_22 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm f_14 (ATerm t)
                                    {
                                      ATerm z_30 = NULL;
                                      z_30 = t;
                                      c_30 :
                                      if(!(match_string(z_30, "-CC")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm h_14 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(sym_CC_0);
                                      return(t);
                                    }
                                    t = Option_2(t, f_14, h_14);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_22;
                                    {
                                      ATerm p_22 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm i_14 (ATerm t)
                                          {
                                            ATerm a_31 = NULL;
                                            a_31 = t;
                                            d_30 :
                                            if(!(match_string(a_31, "--norm")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm j_14 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_NORM_0);
                                            return(t);
                                          }
                                          t = Option_2(t, i_14, j_14);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = p_22;
                                          {
                                            ATerm y_22 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm l_14 (ATerm t)
                                                {
                                                  ATerm b_31 = NULL;
                                                  b_31 = t;
                                                  e_30 :
                                                  if(!(match_string(b_31, "-i")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm m_14 (ATerm t)
                                                {
                                                  ATerm g_31 = NULL;
                                                  ATerm i_31 = NULL;
                                                  g_31 = t;
                                                  {
                                                    ATerm j_31 = NULL;
                                                    t = not_null(g_31);
                                                    t = basename_0(t);
                                                    j_31 = t;
                                                    if(i_31 != NULL && i_31 != j_31)
                                                      _fail(j_31);
                                                    else
                                                      i_31 = j_31;
                                                    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_31));
                                                  }
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, l_14, m_14);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = y_22;
                                                {
                                                  ATerm z_22 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm n_14 (ATerm t)
                                                      {
                                                        ATerm k_31 = NULL;
                                                        k_31 = t;
                                                        h_30 :
                                                        if(!(match_string(k_31, "--main")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm o_14 (ATerm t)
                                                      {
                                                        ATerm l_31 = NULL;
                                                        l_31 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(l_31));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, n_14, o_14);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = z_22;
                                                      {
                                                        ATerm a_23 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm p_14 (ATerm t)
                                                            {
                                                              ATerm n_31 = NULL;
                                                              n_31 = t;
                                                              j_30 :
                                                              if(!(match_string(n_31, "-m")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm q_14 (ATerm t)
                                                            {
                                                              ATerm t_31 = NULL;
                                                              t_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Main_1, not_null(t_31));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, p_14, q_14);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = a_23;
                                                            {
                                                              ATerm b_23 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm r_14 (ATerm t)
                                                                  {
                                                                    ATerm v_31 = NULL;
                                                                    v_31 = t;
                                                                    l_30 :
                                                                    if(!(match_string(v_31, "--ast")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm s_14 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_AST_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, r_14, s_14);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = b_23;
                                                                  {
                                                                    ATerm c_23 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm t_14 (ATerm t)
                                                                        {
                                                                          ATerm w_31 = NULL;
                                                                          w_31 = t;
                                                                          m_30 :
                                                                          if(!(match_string(w_31, "-F")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm u_14 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_FRONTEND_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, t_14, u_14);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_23;
                                                                        {
                                                                          ATerm d_23 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm v_14 (ATerm t)
                                                                              {
                                                                                ATerm x_31 = NULL;
                                                                                x_31 = t;
                                                                                n_30 :
                                                                                if(!(match_string(x_31, "--fusion")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm w_14 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_FUSION_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, v_14, w_14);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_23;
                                                                              {
                                                                                ATerm h_23 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm x_14 (ATerm t)
                                                                                    {
                                                                                      ATerm c_32 = NULL;
                                                                                      c_32 = t;
                                                                                      o_30 :
                                                                                      if(!(match_string(c_32, "--csyntax")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm y_14 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_CSYNTAX_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, x_14, y_14);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_23;
                                                                                    {
                                                                                      ATerm j_23 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          ATerm z_14 (ATerm t)
                                                                                          {
                                                                                            ATerm d_32 = NULL;
                                                                                            d_32 = t;
                                                                                            p_30 :
                                                                                            if(!(match_string(d_32, "--trace-all")))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm a_15 (ATerm t)
                                                                                          {
                                                                                            t = (ATerm) ATmakeAppl(sym_TraceAll_0);
                                                                                            {
                                                                                              ATerm k_23;
                                                                                              k_23 = t;
                                                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue))), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                                              {
                                                                                                ATerm b_15 (ATerm t)
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
                                                                                                  return(t);
                                                                                                }
                                                                                                t = assert_1(t, b_15);
                                                                                              }
                                                                                              t = k_23;
                                                                                            }
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_2(t, z_14, a_15);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_23;
                                                                                          {
                                                                                            ATerm c_15 (ATerm t)
                                                                                            {
                                                                                              ATerm e_32 = NULL;
                                                                                              e_32 = t;
                                                                                              q_30 :
                                                                                              if(!(match_string(e_32, "-t")))
                                                                                                _fail(t);
                                                                                              return(t);
                                                                                            }
                                                                                            ATerm d_15 (ATerm t)
                                                                                            {
                                                                                              ATerm f_32 = NULL;
                                                                                              f_32 = t;
                                                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(f_32)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue))), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                                              {
                                                                                                ATerm e_15 (ATerm t)
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
                                                                                                  return(t);
                                                                                                }
                                                                                                t = assert_1(t, e_15);
                                                                                              }
                                                                                              t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(f_32));
                                                                                              return(t);
                                                                                            }
                                                                                            t = ArgOption_2(t, c_15, d_15);
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
  ATerm o_32 = NULL;
  o_32 = t;
  t = SSL_table_destroy(not_null(o_32));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  t = SSL_implode_string(not_null(e_33));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_58 (ATerm))
{
  ATerm g_34 (ATerm t)
  {
    ATerm l_23 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, g_34);
        PopChoice();
      }
    else
      {
        t = l_23;
        t = Nil_0(t);
        t = j_58(t);
      }
    return(t);
  }
  t = g_34(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_23 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = m_23;
      {
        ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
        j_34 = t;
        i_34 :
        if(match_cons(j_34, sym_Cons_2))
          {
            k_34 = ATgetArgument(j_34, 0);
            l_34 = ATgetArgument(j_34, 1);
            t = not_null(k_34);
            {
              ATerm f_15 (ATerm t)
              {
                t = not_null(l_34);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, f_15);
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
  ATerm r_34 = NULL;
  r_34 = t;
  t = SSL_explode_string(not_null(r_34));
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
ATerm map_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm u_34 (ATerm t)
  {
    ATerm n_23 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = n_23;
        t = Cons_2(t, v_57, u_34);
      }
    return(t);
  }
  t = u_34(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
  a_35 = t;
  w_34 :
  if(match_cons(a_35, sym_TCons_2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      x_34 :
      if(match_cons(b_35, sym_Nil_0))
        {
          y_34 :
          if(match_cons(c_35, sym_TCons_2))
            {
              d_35 = ATgetArgument(c_35, 0);
              e_35 = ATgetArgument(c_35, 1);
              z_34 :
              if(match_cons(e_35, sym_TNil_0))
                t = not_null(d_35);
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
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  m_35 = t;
  i_35 :
  if(match_cons(m_35, sym_TCons_2))
    {
      n_35 = ATgetArgument(m_35, 0);
      q_35 = ATgetArgument(m_35, 1);
      j_35 :
      if(match_cons(n_35, sym_Cons_2))
        {
          o_35 = ATgetArgument(n_35, 0);
          p_35 = ATgetArgument(n_35, 1);
          k_35 :
          if(match_cons(q_35, sym_TCons_2))
            {
              r_35 = ATgetArgument(q_35, 0);
              s_35 = ATgetArgument(q_35, 1);
              l_35 :
              if(match_cons(s_35, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_35), not_null(r_35)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm o_63 (ATerm), ATerm p_63 (ATerm))
{
  ATerm x_35 (ATerm t)
  {
    ATerm r_23 = t;
    if(PushChoice()==0)
      {
        t = o_63(t);
        t = x_35(t);
        PopChoice();
      }
    else
      {
        t = r_23;
        t = p_63(t);
      }
    return(t);
  }
  t = x_35(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm r_63 (ATerm))
{
  t = repeat_2(t, r_63, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm f_36 = NULL,g_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym_Program_1))
    {
      g_36 = ATgetArgument(f_36, 0);
      {
        ATerm i_36 = NULL;
        t = not_null(g_36);
        t = y_42(t);
        i_36 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_36));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm q_36 = NULL;
  ATerm g_15 (ATerm t)
  {
    ATerm h_15 (ATerm t)
    {
      ATerm r_36 = NULL;
      r_36 = t;
      if(q_36 != NULL && q_36 != r_36)
        _fail(r_36);
      else
        q_36 = r_36;
      return(t);
    }
    t = Program_1(t, h_15);
    return(t);
  }
  t = option_defined_1(t, g_15);
  {
    ATerm i_15 (ATerm t)
    {
      ATerm s_36 = NULL;
      ATerm t_36 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm k_15 (ATerm t)
        {
          t = not_null(q_36);
          return(t);
        }
        t = short_description_1(t, k_15);
        t = concat_strings_0(t);
        t_36 = t;
        if(s_36 != NULL && s_36 != t_36)
          _fail(t_36);
        else
          s_36 = t_36;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, i_15);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm n_15 (ATerm t)
      {
        ATerm u_36 = NULL;
        u_36 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_36), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, n_15);
      {
        ATerm o_15 (ATerm t)
        {
          ATerm w_36 = NULL;
          ATerm x_36 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm r_15 (ATerm t)
            {
              t = not_null(q_36);
              return(t);
            }
            t = long_description_1(t, r_15);
            t = concat_strings_0(t);
            x_36 = t;
            if(w_36 != NULL && w_36 != x_36)
              _fail(x_36);
            else
              w_36 = x_36;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_36), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, o_15);
      }
    }
  }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_42 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym_Undefined_1))
    {
      g_37 = ATgetArgument(f_37, 0);
      {
        ATerm i_37 = NULL;
        t = not_null(g_37);
        t = z_42(t);
        i_37 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_37));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_37 = NULL;
  n_37 = t;
  m_37 :
  if(!(match_cons(n_37, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  s_37 = t;
  p_37 :
  if(match_cons(s_37, sym_TCons_2))
    {
      t_37 = ATgetArgument(s_37, 0);
      u_37 = ATgetArgument(s_37, 1);
      q_37 :
      if(match_cons(u_37, sym_TCons_2))
        {
          v_37 = ATgetArgument(u_37, 0);
          w_37 = ATgetArgument(u_37, 1);
          r_37 :
          if(match_cons(w_37, sym_TNil_0))
            t = SSL_table_get(not_null(t_37), not_null(v_37));
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
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  g_38 = t;
  c_38 :
  if(match_cons(g_38, sym_TCons_2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      d_38 :
      if(match_cons(i_38, sym_TCons_2))
        {
          j_38 = ATgetArgument(i_38, 0);
          k_38 = ATgetArgument(i_38, 1);
          e_38 :
          if(match_cons(k_38, sym_TCons_2))
            {
              l_38 = ATgetArgument(k_38, 0);
              m_38 = ATgetArgument(k_38, 1);
              f_38 :
              if(match_cons(m_38, sym_TNil_0))
                {
                  ATerm t_23;
                  t_23 = t;
                  {
                    ATerm q_38 = NULL;
                    ATerm r_38 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_38), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm u_23 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = u_23;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      r_38 = t;
                      if(q_38 != NULL && q_38 != r_38)
                        _fail(r_38);
                      else
                        q_38 = r_38;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_38), not_null(q_38)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = t_23;
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
  ATerm v_38 = NULL;
  ATerm w_38 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = o_47(t);
  w_38 = t;
  if(v_38 != NULL && v_38 != w_38)
    _fail(w_38);
  else
    v_38 = w_38;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_38), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  e_39 = t;
  b_39 :
  if(match_cons(e_39, sym_Cons_2))
    {
      c_39 = ATgetArgument(e_39, 0);
      d_39 = ATgetArgument(e_39, 1);
      {
        ATerm h_39 = NULL;
        t = not_null(c_39);
        t = c_0(t);
        {
          ATerm i_39 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = d_0(t);
          i_39 = t;
          if(h_39 != NULL && h_39 != i_39)
            _fail(i_39);
          else
            h_39 = i_39;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_39), not_null(d_39));
        }
      }
    }
  else
    {
      if(match_string(e_39, "register-usage-info"))
        t = register_usage_1(t, e_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm s_15 (ATerm t)
  {
    ATerm n_39 = NULL;
    n_39 = t;
    m_39 :
    if(!(match_string(n_39, "--help")))
      {
        if(!(match_string(n_39, "-h")))
          {
            if(!(match_string(n_39, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm t_15 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm u_15 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, s_15, t_15, u_15);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym_Cons_2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_39)), not_null(s_39));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_47 (ATerm))
{
  ATerm v_23;
  v_23 = t;
  {
    ATerm v_15 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = m_47(t);
      return(t);
    }
    t = try_1(t, v_15);
  }
  t = v_23;
  {
    ATerm w_15 (ATerm t)
    {
      ATerm x_39 = NULL;
      x_39 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_39));
      return(t);
    }
    ATerm z_15 (ATerm t)
    {
      ATerm w_23 = t;
      if(PushChoice()==0)
        {
          ATerm x_23 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = x_23;
              t = m_47(t);
              t = Cons_2(t, _id, z_15);
            }
          PopChoice();
        }
      else
        {
          t = w_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_15, z_15);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  ATerm b_24;
  b_24 = t;
  {
    ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
    j_40 = t;
    c_40 :
    if(match_cons(j_40, sym_TCons_2))
      {
        k_40 = ATgetArgument(j_40, 0);
        l_40 = ATgetArgument(j_40, 1);
        d_40 :
        if(match_cons(l_40, sym_TCons_2))
          {
            m_40 = ATgetArgument(l_40, 0);
            n_40 = ATgetArgument(l_40, 1);
            e_40 :
            if(match_cons(n_40, sym_TCons_2))
              {
                o_40 = ATgetArgument(n_40, 0);
                p_40 = ATgetArgument(n_40, 1);
                f_40 :
                if(match_cons(p_40, sym_TNil_0))
                  {
                    if(g_40 != NULL && g_40 != k_40)
                      _fail(k_40);
                    else
                      g_40 = k_40;
                    if(h_40 != NULL && h_40 != m_40)
                      _fail(m_40);
                    else
                      h_40 = m_40;
                    if(i_40 != NULL && i_40 != o_40)
                      _fail(o_40);
                    else
                      i_40 = o_40;
                    t = SSL_table_put(not_null(g_40), not_null(h_40), not_null(i_40));
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
  t = b_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_47 (ATerm))
{
  ATerm s_40 = NULL;
  ATerm d_24;
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = d_24;
  {
    ATerm a_16 (ATerm t)
    {
      ATerm e_24 = t;
      if(PushChoice()==0)
        {
          t = l_47(t);
          PopChoice();
        }
      else
        {
          t = e_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_16);
    {
      ATerm f_16 (ATerm t)
      {
        ATerm f_24 = t;
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
            t = f_24;
            {
              ATerm g_16 (ATerm t)
              {
                ATerm i_16 (ATerm t)
                {
                  ATerm t_40 = NULL;
                  t_40 = t;
                  if(s_40 != NULL && s_40 != t_40)
                    _fail(t_40);
                  else
                    s_40 = t_40;
                  return(t);
                }
                t = Undefined_1(t, i_16);
                return(t);
              }
              t = option_defined_1(t, g_16);
              {
                ATerm g_24;
                g_24 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_40), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = g_24;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_16);
      {
        ATerm h_24;
        h_24 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = h_24;
      }
    }
  }
  return(t);
}
ATerm skip1_1 (ATerm t, ATerm e_52 (ATerm))
{
  t = at_tail_1(t, e_52);
  return(t);
}
ATerm filter_option_args_1 (ATerm t, ATerm g_52 (ATerm))
{
  ATerm l_16 (ATerm t)
  {
    t = Cons_2(t, g_52, _id);
    t = Tl_0(t);
    return(t);
  }
  ATerm v_40 (ATerm t, ATerm w_40 (ATerm))
  {
    t = at_tail_1(t, w_40);
    return(t);
  }
  t = filter_gen_2(t, l_16, v_40);
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm h_58 (ATerm))
{
  t = Cons_2(t, _id, h_58);
  return(t);
}
ATerm skip2_1 (ATerm t, ATerm f_52 (ATerm))
{
  ATerm m_16 (ATerm t)
  {
    t = at_tail_1(t, f_52);
    return(t);
  }
  t = at_tail_1(t, m_16);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_43 (ATerm), ATerm s_43 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_cons(b_41, sym_Cons_2))
    {
      c_41 = ATgetArgument(b_41, 0);
      d_41 = ATgetArgument(b_41, 1);
      {
        ATerm g_41 = NULL;
        t = not_null(c_41);
        {
          ATerm i_41 = NULL;
          t = r_43(t);
          g_41 = t;
          t = not_null(d_41);
          t = s_43(t);
          i_41 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_41), not_null(i_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym_Cons_2))
    {
      q_41 = ATgetArgument(p_41, 0);
      r_41 = ATgetArgument(p_41, 1);
      t = not_null(r_41);
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm w_41 = NULL;
  w_41 = t;
  v_41 :
  if(!(match_cons(w_41, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm filter_gen_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm, ATerm (ATerm)))
{
  ATerm x_41 (ATerm t)
  {
    ATerm i_24 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = i_24;
        {
          ATerm j_24 = t;
          if(PushChoice()==0)
            {
              t = b_52(t);
              t = c_52(t, x_41);
              PopChoice();
            }
          else
            {
              t = j_24;
              t = Tl_0(t);
              t = x_41(t);
            }
        }
      }
    return(t);
  }
  t = x_41(t);
  return(t);
}
ATerm filter_options_1 (ATerm t, ATerm h_52 (ATerm))
{
  ATerm n_16 (ATerm t)
  {
    t = Cons_2(t, h_52, _id);
    return(t);
  }
  t = filter_gen_2(t, n_16, skip2_1);
  return(t);
}
ATerm process_sc_options_0 (ATerm t)
{
  ATerm h_42 = NULL,k_42 = NULL,n_42 = NULL,q_42 = NULL;
  ATerm k_24;
  k_24 = t;
  {
    ATerm j_42 = NULL;
    ATerm q_16 (ATerm t)
    {
      ATerm i_42 = NULL;
      i_42 = t;
      y_41 :
      if(!(match_string(i_42, "-I")))
        _fail(t);
      return(t);
    }
    t = filter_options_1(t, q_16);
    j_42 = t;
    if(h_42 != NULL && h_42 != j_42)
      _fail(j_42);
    else
      h_42 = j_42;
  }
  t = k_24;
  {
    ATerm o_24;
    o_24 = t;
    {
      ATerm m_42 = NULL;
      ATerm r_16 (ATerm t)
      {
        ATerm l_42 = NULL;
        l_42 = t;
        a_42 :
        if(!(match_string(l_42, "-CI")))
          _fail(t);
        return(t);
      }
      t = filter_option_args_1(t, r_16);
      m_42 = t;
      if(k_42 != NULL && k_42 != m_42)
        _fail(m_42);
      else
        k_42 = m_42;
    }
    t = o_24;
    {
      ATerm d_25;
      d_25 = t;
      {
        ATerm p_42 = NULL;
        ATerm u_16 (ATerm t)
        {
          ATerm o_42 = NULL;
          o_42 = t;
          c_42 :
          if(!(match_string(o_42, "-CL")))
            _fail(t);
          return(t);
        }
        t = filter_option_args_1(t, u_16);
        p_42 = t;
        if(n_42 != NULL && n_42 != p_42)
          _fail(p_42);
        else
          n_42 = p_42;
      }
      t = d_25;
      {
        ATerm v_16 (ATerm t)
        {
          ATerm e_25 = t;
          if(PushChoice()==0)
            {
              t = sc_options_0(t);
              PopChoice();
            }
          else
            {
              t = e_25;
              t = io_options_0(t);
            }
          return(t);
        }
        t = parse_options_1(t, v_16);
        {
          ATerm f_25 = t;
          if(PushChoice()==0)
            {
              ATerm s_42 = NULL;
              ATerm w_16 (ATerm t)
              {
                ATerm x_16 (ATerm t)
                {
                  ATerm r_42 = NULL;
                  r_42 = t;
                  if(q_42 != NULL && q_42 != r_42)
                    _fail(r_42);
                  else
                    q_42 = r_42;
                  return(t);
                }
                t = Input_1(t, x_16);
                return(t);
              }
              t = option_defined_1(t, w_16);
              s_42 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_InclDir_1, not_null(h_42)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CInclDir_1, not_null(k_42)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CLibDir_1, not_null(n_42)), not_null(s_42)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_42), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".r", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
              PopChoice();
            }
          else
            {
              t = f_25;
              {
                ATerm u_42 = NULL;
                u_42 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Help_0), not_null(u_42)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_25 = t;
  if(PushChoice()==0)
    {
      t = process_sc_options_0(t);
      PopChoice();
    }
  else
    {
      t = g_25;
      t = sc_usage_0(t);
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  {
    ATerm h_25 = t;
    if(PushChoice()==0)
      {
        ATerm y_16 (ATerm t)
        {
          ATerm a_17 (ATerm t)
          {
            t = sc_usage_0(t);
            t = (ATerm) ATmakeInt(1);
            t = exit_0(t);
            return(t);
          }
          t = need_help_1(t, a_17);
          return(t);
        }
        ATerm z_16 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, y_16, z_16);
        PopChoice();
      }
    else
      {
        t = h_25;
        {
          ATerm k_25 = t;
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
                ATerm c_17 (ATerm t)
                {
                  ATerm l_25 = t;
                  if(PushChoice()==0)
                    {
                      ATerm f_17 (ATerm t)
                      {
                        ATerm j_17 (ATerm t)
                        {
                          ATerm p_43 = NULL;
                          p_43 = t;
                          m_43 :
                          if(!(match_cons(p_43, sym_NORM_0)))
                            _fail(t);
                          return(t);
                        }
                        t = option_defined_1(t, j_17);
                        return(t);
                      }
                      ATerm i_17 (ATerm t)
                      {
                        t = TCons_2(t, _id, TNil_0);
                        return(t);
                      }
                      t = TCons_2(t, f_17, i_17);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = l_25;
                  {
                    ATerm k_17 (ATerm t)
                    {
                      t = TCons_2(t, remove_intermediates_0, TNil_0);
                      return(t);
                    }
                    t = TCons_2(t, _id, k_17);
                  }
                  return(t);
                }
                t = try_1(t, c_17);
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("compilation succeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
              PopChoice();
            }
          else
            {
              t = k_25;
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
