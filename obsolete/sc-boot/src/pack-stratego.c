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
Symbol sym_Include_1;
Symbol sym_Prefix_1;
Symbol sym_NoDependency_0;
Symbol sym_Dependency_1;
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
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_Prefix_1 = ATmakeSymbol("Prefix", 1, ATfalse);
  ATprotectSymbol(sym_Prefix_1);
  sym_NoDependency_0 = ATmakeSymbol("NoDependency", 0, ATfalse);
  ATprotectSymbol(sym_NoDependency_0);
  sym_Dependency_1 = ATmakeSymbol("Dependency", 1, ATfalse);
  ATprotectSymbol(sym_Dependency_1);
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
ATerm basename_1 (ATerm, ATerm s_52 (ATerm));
ATerm basename_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm b_44 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_44 (ATerm), ATerm o_44 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm guarantee_extension_1 (ATerm, ATerm u_52 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_45 (ATerm));
ATerm Prefix_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_pid_0 (ATerm);
ATerm parse_mod_0 (ATerm);
ATerm get_module_1 (ATerm, ATerm z_66 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm b_56 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_58 (ATerm), ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm));
ATerm zip_1 (ATerm, ATerm m_58 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm g_45 (ATerm), ATerm h_45 (ATerm), ATerm i_45 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm h_66 (ATerm), ATerm i_66 (ATerm));
ATerm for_3 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm m_66 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm m_45 (ATerm), ATerm n_45 (ATerm), ATerm o_45 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm b_46 (ATerm), ATerm c_46 (ATerm), ATerm d_46 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm y_66 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm i_61 (ATerm));
ATerm separate_by_1 (ATerm, ATerm j_61 (ATerm));
ATerm split_2 (ATerm, ATerm k_53 (ATerm), ATerm l_53 (ATerm));
ATerm debug_1 (ATerm, ATerm q_51 (ATerm));
ATerm obsolete_1 (ATerm, ATerm x_51 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm f_45 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_50 (ATerm));
ATerm try_1 (ATerm, ATerm n_66 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm filter_1 (ATerm, ATerm c_54 (ATerm));
ATerm list_1 (ATerm, ATerm z_59 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_51 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm f_50 (ATerm), ATerm g_50 (ATerm));
ATerm Option_2 (ATerm, ATerm u_49 (ATerm), ATerm v_49 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_49 (ATerm));
ATerm map_1 (ATerm, ATerm x_59 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm q_65 (ATerm), ATerm r_65 (ATerm));
ATerm repeat_1 (ATerm, ATerm t_65 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_49 (ATerm));
ATerm Program_1 (ATerm, ATerm g_44 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_44 (ATerm));
ATerm Help_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_49 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_49 (ATerm));
ATerm parse_options_1 (ATerm, ATerm n_49 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm d_45 (ATerm, ATerm (ATerm)), ATerm e_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_44 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm s_52 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm i_0 (ATerm t)
    {
      ATerm a_1 = t;
      if(PushChoice()==0)
        {
          t = Cons_2(t, _id, i_0);
          PopChoice();
        }
      else
        {
          t = a_1;
          {
            ATerm w_8 = t;
            if(PushChoice()==0)
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm y_0 = NULL;
                  y_0 = t;
                  w_0 :
                  if(!(match_int(y_0, 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, j_0, _id);
                PopChoice();
              }
            else
              {
                t = w_8;
                {
                  ATerm k_0 (ATerm t)
                  {
                    ATerm z_0 = NULL;
                    z_0 = t;
                    x_0 :
                    if(!(match_int(z_0, 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2(t, k_0, s_52);
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, i_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm c_1 = NULL;
  c_1 = t;
  b_1 :
  if(!(match_cons(c_1, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm b_44 (ATerm))
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  f_1 :
  if(match_cons(g_1, sym_Imports_1))
    {
      h_1 = ATgetArgument(g_1, 0);
      {
        ATerm j_1 = NULL;
        t = not_null(h_1);
        t = b_44(t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym_Imports_1, not_null(j_1));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm flatten_stratego_0 (ATerm t)
{
  ATerm t_1 = NULL;
  ATerm l_0 (ATerm t)
  {
    ATerm q_1 = NULL,r_1 = NULL;
    q_1 = t;
    o_1 :
    if(match_cons(q_1, sym_Specification_1))
      {
        r_1 = ATgetArgument(q_1, 0);
        t = not_null(r_1);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm x_8 = t;
            if(PushChoice()==0)
              {
                t = Imports_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              t = x_8;
            return(t);
          }
          t = filter_1(t, m_0);
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, l_0);
  t = concat_0(t);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(t_1));
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_44 (ATerm), ATerm o_44 (ATerm))
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
  b_2 = t;
  a_2 :
  if(match_cons(b_2, sym_TCons_2))
    {
      c_2 = ATgetArgument(b_2, 0);
      d_2 = ATgetArgument(b_2, 1);
      {
        ATerm g_2 = NULL;
        t = not_null(c_2);
        {
          ATerm i_2 = NULL;
          t = n_44(t);
          g_2 = t;
          t = not_null(d_2);
          t = o_44(t);
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_2), not_null(i_2));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
  x_2 = t;
  o_2 :
  if(match_cons(x_2, sym_TCons_2))
    {
      y_2 = ATgetArgument(x_2, 0);
      d_3 = ATgetArgument(x_2, 1);
      p_2 :
      if(match_cons(y_2, sym_TCons_2))
        {
          z_2 = ATgetArgument(y_2, 0);
          a_3 = ATgetArgument(y_2, 1);
          q_2 :
          if(match_cons(a_3, sym_TCons_2))
            {
              b_3 = ATgetArgument(a_3, 0);
              c_3 = ATgetArgument(a_3, 1);
              r_2 :
              if(match_cons(c_3, sym_TNil_0))
                {
                  s_2 :
                  if(match_cons(d_3, sym_TCons_2))
                    {
                      e_3 = ATgetArgument(d_3, 0);
                      j_3 = ATgetArgument(d_3, 1);
                      t_2 :
                      if(match_cons(e_3, sym_TCons_2))
                        {
                          f_3 = ATgetArgument(e_3, 0);
                          g_3 = ATgetArgument(e_3, 1);
                          u_2 :
                          if(match_cons(g_3, sym_TCons_2))
                            {
                              h_3 = ATgetArgument(g_3, 0);
                              i_3 = ATgetArgument(g_3, 1);
                              v_2 :
                              if(match_cons(i_3, sym_TNil_0))
                                {
                                  w_2 :
                                  if(match_cons(j_3, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_2), not_null(f_3)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_3), not_null(h_3)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym_Cons_2))
    {
      s_3 = ATgetArgument(r_3, 0);
      t_3 = ATgetArgument(r_3, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_3), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm z_3 = NULL;
  z_3 = t;
  y_3 :
  if(match_cons(z_3, sym_Nil_0))
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
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
  i_4 = t;
  e_4 :
  if(match_cons(i_4, sym_TCons_2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      f_4 :
      if(match_cons(k_4, sym_TCons_2))
        {
          l_4 = ATgetArgument(k_4, 0);
          n_4 = ATgetArgument(k_4, 1);
          g_4 :
          if(match_cons(l_4, sym_Specification_1))
            {
              m_4 = ATgetArgument(l_4, 0);
              h_4 :
              if(match_cons(n_4, sym_TNil_0))
                {
                  t = not_null(m_4);
                  {
                    ATerm n_0 (ATerm t)
                    {
                      ATerm p_4 = NULL,q_4 = NULL;
                      p_4 = t;
                      d_4 :
                      if(match_cons(p_4, sym_Imports_1))
                        {
                          q_4 = ATgetArgument(p_4, 0);
                          t = not_null(q_4);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = filter_1(t, n_0);
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
ATerm error_0 (ATerm t)
{
  ATerm y_8;
  y_8 = t;
  {
    ATerm o_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, o_0, _id);
    t = printnl_0(t);
  }
  t = y_8;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm z_8;
  z_8 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = z_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  t = SSL_ReadFromFile(not_null(v_4));
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym_Cons_2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      t = not_null(c_5);
    }
  else
    _fail(t);
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm h_5 = NULL;
  h_5 = t;
  t = SSL_open_file(not_null(h_5), (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue)));
  t = SSL_close_file(not_null(h_5));
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  q_5 = t;
  n_5 :
  if(match_cons(q_5, sym_TCons_2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      o_5 :
      if(match_cons(s_5, sym_TCons_2))
        {
          t_5 = ATgetArgument(s_5, 0);
          u_5 = ATgetArgument(s_5, 1);
          p_5 :
          if(match_cons(u_5, sym_TNil_0))
            {
              t = not_null(t_5);
              {
                ATerm c_6 (ATerm t)
                {
                  ATerm a_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
                      x_5 = t;
                      m_5 :
                      if(match_cons(x_5, sym_Cons_2))
                        {
                          y_5 = ATgetArgument(x_5, 0);
                          z_5 = ATgetArgument(x_5, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_5), (ATerm) ATmakeAppl(sym_Nil_0))));
                          t = concat_strings_0(t);
                          t = file_exists_0(t);
                        }
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_9;
                      t = Tl_0(t);
                      t = c_6(t);
                    }
                  return(t);
                }
                t = c_6(t);
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
ATerm guarantee_extension_1 (ATerm t, ATerm u_52 (ATerm))
{
  t = basename_0(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = u_52(t);
      return(t);
    }
    t = split_2(t, _id, p_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm f_6 = NULL;
  f_6 = t;
  {
    ATerm b_9;
    b_9 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue)), not_null(f_6)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = call_0(t);
    t = b_9;
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
  m_6 = t;
  j_6 :
  if(match_cons(m_6, sym_TCons_2))
    {
      n_6 = ATgetArgument(m_6, 0);
      o_6 = ATgetArgument(m_6, 1);
      k_6 :
      if(match_cons(o_6, sym_TCons_2))
        {
          p_6 = ATgetArgument(o_6, 0);
          q_6 = ATgetArgument(o_6, 1);
          l_6 :
          if(match_cons(q_6, sym_TNil_0))
            t = SSL_call(not_null(n_6), not_null(p_6));
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
  ATerm q_0 (ATerm t)
  {
    t = TCons_2(t, explode_string_0, TNil_0);
    return(t);
  }
  t = TCons_2(t, explode_string_0, q_0);
  t = conc_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym_Cons_2))
    {
      x_6 = ATgetArgument(w_6, 0);
      y_6 = ATgetArgument(w_6, 1);
      t = not_null(x_6);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
  g_7 = t;
  d_7 :
  if(match_cons(g_7, sym_TCons_2))
    {
      h_7 = ATgetArgument(g_7, 0);
      i_7 = ATgetArgument(g_7, 1);
      e_7 :
      if(match_cons(i_7, sym_TCons_2))
        {
          j_7 = ATgetArgument(i_7, 0);
          k_7 = ATgetArgument(i_7, 1);
          f_7 :
          if(match_cons(k_7, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_7), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm b_45 (ATerm))
{
  ATerm q_7 = NULL;
  ATerm s_7 = NULL;
  q_7 = t;
  {
    ATerm t_7 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = b_45(t);
    t_7 = t;
    if(s_7 != NULL && s_7 != t_7)
      _fail(t_7);
    else
      s_7 = t_7;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_7), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_lookup_0(t);
  }
  return(t);
}
ATerm Prefix_0 (ATerm t)
{
  ATerm f_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_TNil_0))
    {
      ATerm d_9 = t;
      if(PushChoice()==0)
        {
          ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_0);
          {
            ATerm r_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, r_0);
            g_8 = t;
            z_7 :
            if(match_cons(g_8, sym_Defined_2))
              {
                h_8 = ATgetArgument(g_8, 0);
                i_8 = ATgetArgument(g_8, 1);
                a_8 :
                if(match_string(h_8, "a_0"))
                  t = not_null(i_8);
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
          t = d_9;
          {
            ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_0);
            {
              ATerm s_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, s_0);
              k_8 = t;
              c_8 :
              if(match_cons(k_8, sym_Defined_2))
                {
                  l_8 = ATgetArgument(k_8, 0);
                  m_8 = ATgetArgument(k_8, 1);
                  d_8 :
                  if(match_string(l_8, "b_0"))
                    t = not_null(m_8);
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  t = SSL_int_to_string(not_null(t_8));
  return(t);
}
ATerm get_pid_0 (ATerm t)
{
  t = SSL_get_pid();
  return(t);
}
ATerm parse_mod_0 (ATerm t)
{
  ATerm c_9 = NULL;
  ATerm e_9 = NULL,g_9 = NULL;
  c_9 = t;
  {
    ATerm f_9 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = get_pid_0(t);
    t = int_to_string_0(t);
    f_9 = t;
    if(e_9 != NULL && e_9 != f_9)
      _fail(f_9);
    else
      e_9 = f_9;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_9), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm i_9 = NULL,m_9 = NULL;
      t = conc_strings_0(t);
      g_9 = t;
      {
        ATerm j_9 = NULL,l_9 = NULL;
        ATerm k_9 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = Prefix_0(t);
        k_9 = t;
        if(j_9 != NULL && j_9 != k_9)
          _fail(k_9);
        else
          j_9 = k_9;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("parse-mod", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_strings_0(t);
        l_9 = t;
        if(i_9 != NULL && i_9 != l_9)
          _fail(l_9);
        else
          i_9 = l_9;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_9), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_9), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = call_0(t);
        t = not_null(g_9);
        t = ReadFromFile_0(t);
        m_9 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_9), (ATerm) ATmakeAppl(sym_Nil_0));
        t = rm_files_0(t);
        t = not_null(m_9);
      }
    }
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm h_9 = t;
  if(PushChoice()==0)
    {
      ATerm t_0 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
        return(t);
      }
      t = guarantee_extension_1(t, t_0);
      t = split_2(t, _id, z_66);
      t = find_in_path_0(t);
      t = split_2(t, _id, parse_mod_0);
      PopChoice();
    }
  else
    {
      t = h_9;
      {
        ATerm n_9 = t;
        if(PushChoice()==0)
          {
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("tree", 0, ATtrue));
              return(t);
            }
            t = guarantee_extension_1(t, u_0);
            t = split_2(t, _id, z_66);
            t = find_in_path_0(t);
            t = split_2(t, _id, ReadFromFile_0);
            PopChoice();
          }
        else
          {
            t = n_9;
            {
              ATerm j_11 = NULL;
              j_11 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = fatal_error_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_TCons_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      t = not_null(p_11);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  y_12 = t;
  h_12 :
  if(match_cons(y_12, sym_TCons_2))
    {
      z_12 = ATgetArgument(y_12, 0);
      c_13 = ATgetArgument(y_12, 1);
      i_12 :
      if(match_cons(z_12, sym_Cons_2))
        {
          a_13 = ATgetArgument(z_12, 0);
          b_13 = ATgetArgument(z_12, 1);
          j_12 :
          if(match_cons(c_13, sym_TCons_2))
            {
              d_13 = ATgetArgument(c_13, 0);
              e_13 = ATgetArgument(c_13, 1);
              k_12 :
              if(match_cons(e_13, sym_TCons_2))
                {
                  f_13 = ATgetArgument(e_13, 0);
                  g_13 = ATgetArgument(e_13, 1);
                  v_12 :
                  if(match_cons(g_13, sym_TCons_2))
                    {
                      h_13 = ATgetArgument(g_13, 0);
                      i_13 = ATgetArgument(g_13, 1);
                      w_12 :
                      if(match_cons(i_13, sym_TCons_2))
                        {
                          j_13 = ATgetArgument(i_13, 0);
                          k_13 = ATgetArgument(i_13, 1);
                          x_12 :
                          if(match_cons(k_13, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_13), not_null(j_13)), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  w_13 = t;
  t_13 :
  if(match_cons(w_13, sym_TCons_2))
    {
      x_13 = ATgetArgument(w_13, 0);
      y_13 = ATgetArgument(w_13, 1);
      u_13 :
      if(match_cons(y_13, sym_TCons_2))
        {
          z_13 = ATgetArgument(y_13, 0);
          a_14 = ATgetArgument(y_13, 1);
          v_13 :
          if(match_cons(a_14, sym_TNil_0))
            {
              t = not_null(x_13);
              {
                ATerm v_0 (ATerm t)
                {
                  t = not_null(z_13);
                  return(t);
                }
                t = at_end_1(t, v_0);
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
ATerm HdMember_1 (ATerm t, ATerm b_56 (ATerm))
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym_Cons_2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      t = b_56(t);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm m_14 = NULL;
          m_14 = t;
          if(i_14 != NULL && i_14 != m_14)
            _fail(m_14);
          else
            i_14 = m_14;
          return(t);
        }
        t = fetch_1(t, d_1);
        t = not_null(j_14);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  u_14 = t;
  q_14 :
  if(match_cons(u_14, sym_TCons_2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      r_14 :
      if(match_cons(w_14, sym_TCons_2))
        {
          x_14 = ATgetArgument(w_14, 0);
          a_15 = ATgetArgument(w_14, 1);
          s_14 :
          if(match_cons(x_14, sym_Cons_2))
            {
              y_14 = ATgetArgument(x_14, 0);
              z_14 = ATgetArgument(x_14, 1);
              t_14 :
              if(match_cons(a_15, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_14), not_null(v_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm p_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  p_15 = t;
  m_15 :
  if(match_cons(p_15, sym_TCons_2))
    {
      t_15 = ATgetArgument(p_15, 0);
      u_15 = ATgetArgument(p_15, 1);
      n_15 :
      if(match_cons(u_15, sym_TCons_2))
        {
          v_15 = ATgetArgument(u_15, 0);
          w_15 = ATgetArgument(u_15, 1);
          o_15 :
          if(match_cons(w_15, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_15), not_null(v_15));
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
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,o_16 = NULL,p_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  i_16 = t;
  d_16 :
  if(match_cons(i_16, sym_TCons_2))
    {
      j_16 = ATgetArgument(i_16, 0);
      p_16 = ATgetArgument(i_16, 1);
      e_16 :
      if(match_cons(j_16, sym_Cons_2))
        {
          k_16 = ATgetArgument(j_16, 0);
          o_16 = ATgetArgument(j_16, 1);
          f_16 :
          if(match_cons(p_16, sym_TCons_2))
            {
              r_16 = ATgetArgument(p_16, 0);
              u_16 = ATgetArgument(p_16, 1);
              g_16 :
              if(match_cons(r_16, sym_Cons_2))
                {
                  s_16 = ATgetArgument(r_16, 0);
                  t_16 = ATgetArgument(r_16, 1);
                  h_16 :
                  if(match_cons(u_16, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(k_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_16), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_16), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm p_17 = NULL,q_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  p_17 = t;
  b_17 :
  if(match_cons(p_17, sym_TCons_2))
    {
      q_17 = ATgetArgument(p_17, 0);
      t_17 = ATgetArgument(p_17, 1);
      c_17 :
      if(match_cons(q_17, sym_Nil_0))
        {
          d_17 :
          if(match_cons(t_17, sym_TCons_2))
            {
              u_17 = ATgetArgument(t_17, 0);
              v_17 = ATgetArgument(t_17, 1);
              n_17 :
              if(match_cons(u_17, sym_Nil_0))
                {
                  o_17 :
                  if(match_cons(v_17, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm h_58 (ATerm), ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm))
{
  ATerm a_18 (ATerm t)
  {
    ATerm o_9 = t;
    if(PushChoice()==0)
      {
        t = h_58(t);
        PopChoice();
      }
    else
      {
        t = o_9;
        t = i_58(t);
        {
          ATerm e_1 (ATerm t)
          {
            t = TCons_2(t, a_18, TNil_0);
            return(t);
          }
          t = TCons_2(t, k_58, e_1);
          t = j_58(t);
        }
      }
    return(t);
  }
  t = a_18(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_58 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_58);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm f_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  f_19 = t;
  w_18 :
  if(match_cons(f_19, sym_Cons_2))
    {
      h_19 = ATgetArgument(f_19, 0);
      m_19 = ATgetArgument(f_19, 1);
      x_18 :
      if(match_cons(h_19, sym_TCons_2))
        {
          i_19 = ATgetArgument(h_19, 0);
          j_19 = ATgetArgument(h_19, 1);
          y_18 :
          if(match_cons(j_19, sym_TCons_2))
            {
              k_19 = ATgetArgument(j_19, 0);
              l_19 = ATgetArgument(j_19, 1);
              z_18 :
              if(match_cons(l_19, sym_TNil_0))
                {
                  ATerm q_19 = NULL,r_19 = NULL,z_19 = NULL,h_20 = NULL;
                  ATerm p_9;
                  p_9 = t;
                  {
                    ATerm s_19 = NULL;
                    ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
                    t = not_null(k_19);
                    s_19 = t;
                    t = SSL_explode_term(not_null(s_19));
                    u_19 = t;
                    e_18 :
                    if(match_cons(u_19, sym_TCons_2))
                      {
                        v_19 = ATgetArgument(u_19, 0);
                        w_19 = ATgetArgument(u_19, 1);
                        f_18 :
                        if(match_cons(w_19, sym_TCons_2))
                          {
                            x_19 = ATgetArgument(w_19, 0);
                            y_19 = ATgetArgument(w_19, 1);
                            g_18 :
                            if(match_cons(y_19, sym_TNil_0))
                              {
                                if(q_19 != NULL && q_19 != v_19)
                                  _fail(v_19);
                                else
                                  q_19 = v_19;
                                if(r_19 != NULL && r_19 != x_19)
                                  _fail(x_19);
                                else
                                  r_19 = x_19;
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
                  t = p_9;
                  {
                    ATerm q_9;
                    q_9 = t;
                    {
                      ATerm a_20 = NULL;
                      ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
                      t = not_null(i_19);
                      a_20 = t;
                      t = SSL_explode_term(not_null(a_20));
                      c_20 = t;
                      m_18 :
                      if(match_cons(c_20, sym_TCons_2))
                        {
                          d_20 = ATgetArgument(c_20, 0);
                          e_20 = ATgetArgument(c_20, 1);
                          r_18 :
                          if(match_cons(e_20, sym_TCons_2))
                            {
                              f_20 = ATgetArgument(e_20, 0);
                              g_20 = ATgetArgument(e_20, 1);
                              s_18 :
                              if(match_cons(g_20, sym_TNil_0))
                                {
                                  if(q_19 != NULL && q_19 != d_20)
                                    _fail(d_20);
                                  else
                                    q_19 = d_20;
                                  if(z_19 != NULL && z_19 != f_20)
                                    _fail(f_20);
                                  else
                                    z_19 = f_20;
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
                    t = q_9;
                    {
                      ATerm i_20 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      i_20 = t;
                      if(h_20 != NULL && h_20 != i_20)
                        _fail(i_20);
                      else
                        h_20 = i_20;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_19), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  u_20 = t;
  q_20 :
  if(match_cons(u_20, sym_Cons_2))
    {
      v_20 = ATgetArgument(u_20, 0);
      a_21 = ATgetArgument(u_20, 1);
      r_20 :
      if(match_cons(v_20, sym_TCons_2))
        {
          w_20 = ATgetArgument(v_20, 0);
          x_20 = ATgetArgument(v_20, 1);
          s_20 :
          if(match_cons(x_20, sym_TCons_2))
            {
              y_20 = ATgetArgument(x_20, 0);
              z_20 = ATgetArgument(x_20, 1);
              t_20 :
              if(match_cons(z_20, sym_TNil_0))
                {
                  ATerm c_21 = NULL;
                  if(w_20 != NULL && w_20 != y_20)
                    _fail(y_20);
                  else
                    w_20 = y_20;
                  if(c_21 != NULL && c_21 != a_21)
                    _fail(a_21);
                  else
                    c_21 = a_21;
                  t = not_null(c_21);
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
  ATerm r_9 = t;
  if(PushChoice()==0)
    {
      ATerm i_1 (ATerm t)
      {
        ATerm k_21 = NULL;
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_21), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, m_1);
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm s_9 = t;
        if(PushChoice()==0)
          {
            ATerm n_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                ATerm t_9 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = t_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, p_1, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, n_1);
            PopChoice();
          }
        else
          {
            t = s_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, i_1, k_1, l_1);
      PopChoice();
    }
  else
    {
      t = r_9;
      {
        ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
        m_21 = t;
        h_21 :
        if(match_cons(m_21, sym_TCons_2))
          {
            n_21 = ATgetArgument(m_21, 0);
            o_21 = ATgetArgument(m_21, 1);
            i_21 :
            if(match_cons(o_21, sym_TCons_2))
              {
                p_21 = ATgetArgument(o_21, 0);
                q_21 = ATgetArgument(o_21, 1);
                j_21 :
                if(match_cons(q_21, sym_TNil_0))
                  {
                    t = not_null(n_21);
                    {
                      ATerm v_21 (ATerm t)
                      {
                        ATerm u_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = u_9;
                            {
                              ATerm v_9 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm s_1 (ATerm t)
                                  {
                                    t = not_null(p_21);
                                    return(t);
                                  }
                                  t = HdMember_1(t, s_1);
                                  t = v_21(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = v_9;
                                  t = Cons_2(t, _id, v_21);
                                }
                            }
                          }
                        return(t);
                      }
                      t = v_21(t);
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
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm g_45 (ATerm), ATerm h_45 (ATerm), ATerm i_45 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  m_22 = t;
  d_22 :
  if(match_cons(m_22, sym_TCons_2))
    {
      n_22 = ATgetArgument(m_22, 0);
      q_22 = ATgetArgument(m_22, 1);
      e_22 :
      if(match_cons(n_22, sym_Cons_2))
        {
          o_22 = ATgetArgument(n_22, 0);
          p_22 = ATgetArgument(n_22, 1);
          h_22 :
          if(match_cons(q_22, sym_TCons_2))
            {
              r_22 = ATgetArgument(q_22, 0);
              s_22 = ATgetArgument(q_22, 1);
              i_22 :
              if(match_cons(s_22, sym_TCons_2))
                {
                  t_22 = ATgetArgument(s_22, 0);
                  u_22 = ATgetArgument(s_22, 1);
                  j_22 :
                  if(match_cons(u_22, sym_TCons_2))
                    {
                      v_22 = ATgetArgument(u_22, 0);
                      w_22 = ATgetArgument(u_22, 1);
                      k_22 :
                      if(match_cons(w_22, sym_TCons_2))
                        {
                          x_22 = ATgetArgument(w_22, 0);
                          y_22 = ATgetArgument(w_22, 1);
                          l_22 :
                          if(match_cons(y_22, sym_TNil_0))
                            {
                              ATerm f_23 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm h_23 = NULL;
                                t = g_45(t);
                                f_23 = t;
                                {
                                  ATerm j_23 = NULL;
                                  t = h_45(t);
                                  h_23 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm l_23 = NULL,n_23 = NULL,r_23 = NULL;
                                    t = diff_0(t);
                                    j_23 = t;
                                    {
                                      ATerm w_9;
                                      w_9 = t;
                                      {
                                        ATerm m_23 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = conc_0(t);
                                        m_23 = t;
                                        if(l_23 != NULL && l_23 != m_23)
                                          _fail(m_23);
                                        else
                                          l_23 = m_23;
                                      }
                                      t = w_9;
                                      {
                                        ATerm x_9;
                                        x_9 = t;
                                        {
                                          ATerm q_23 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = conc_0(t);
                                          q_23 = t;
                                          if(n_23 != NULL && n_23 != q_23)
                                            _fail(q_23);
                                          else
                                            n_23 = q_23;
                                        }
                                        t = x_9;
                                        {
                                          ATerm s_23 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_22), (ATerm) ATmakeAppl(sym_TNil_0))));
                                          t = i_45(t);
                                          s_23 = t;
                                          if(r_23 != NULL && r_23 != s_23)
                                            _fail(s_23);
                                          else
                                            r_23 = s_23;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_22), (ATerm) ATmakeAppl(sym_TNil_0))))));
                                        }
                                      }
                                    }
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
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  i_24 = t;
  b_24 :
  if(match_cons(i_24, sym_TCons_2))
    {
      j_24 = ATgetArgument(i_24, 0);
      k_24 = ATgetArgument(i_24, 1);
      c_24 :
      if(match_cons(j_24, sym_Nil_0))
        {
          d_24 :
          if(match_cons(k_24, sym_TCons_2))
            {
              l_24 = ATgetArgument(k_24, 0);
              m_24 = ATgetArgument(k_24, 1);
              e_24 :
              if(match_cons(m_24, sym_TCons_2))
                {
                  n_24 = ATgetArgument(m_24, 0);
                  o_24 = ATgetArgument(m_24, 1);
                  f_24 :
                  if(match_cons(o_24, sym_TCons_2))
                    {
                      p_24 = ATgetArgument(o_24, 0);
                      q_24 = ATgetArgument(o_24, 1);
                      g_24 :
                      if(match_cons(q_24, sym_TCons_2))
                        {
                          r_24 = ATgetArgument(q_24, 0);
                          s_24 = ATgetArgument(q_24, 1);
                          h_24 :
                          if(match_cons(s_24, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  d_25 = t;
  z_24 :
  if(match_cons(d_25, sym_TCons_2))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      a_25 :
      if(match_cons(f_25, sym_TCons_2))
        {
          g_25 = ATgetArgument(f_25, 0);
          h_25 = ATgetArgument(f_25, 1);
          b_25 :
          if(match_cons(h_25, sym_TCons_2))
            {
              i_25 = ATgetArgument(h_25, 0);
              j_25 = ATgetArgument(h_25, 1);
              c_25 :
              if(match_cons(j_25, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
ATerm while_not_2 (ATerm t, ATerm h_66 (ATerm), ATerm i_66 (ATerm))
{
  ATerm o_25 (ATerm t)
  {
    ATerm y_9 = t;
    if(PushChoice()==0)
      {
        t = h_66(t);
        PopChoice();
      }
    else
      {
        t = y_9;
        t = i_66(t);
        t = o_25(t);
      }
    return(t);
  }
  t = o_25(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm m_66 (ATerm))
{
  t = k_66(t);
  t = while_not_2(t, l_66, m_66);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm m_45 (ATerm), ATerm n_45 (ATerm), ATerm o_45 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm z_9 = t;
    if(PushChoice()==0)
      {
        t = GnNext_3(t, m_45, n_45, o_45);
        PopChoice();
      }
    else
      {
        t = z_9;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, u_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm b_46 (ATerm), ATerm c_46 (ATerm), ATerm d_46 (ATerm))
{
  ATerm t_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  t = graph_nodes_undef_roots_3(t, b_46, c_46, d_46);
  t_25 = t;
  q_25 :
  if(match_cons(t_25, sym_TCons_2))
    {
      w_25 = ATgetArgument(t_25, 0);
      x_25 = ATgetArgument(t_25, 1);
      r_25 :
      if(match_cons(x_25, sym_TCons_2))
        {
          y_25 = ATgetArgument(x_25, 0);
          z_25 = ATgetArgument(x_25, 1);
          s_25 :
          if(match_cons(z_25, sym_TNil_0))
            t = not_null(w_25);
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
ATerm pack_stratego_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm l_26 = NULL;
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_26), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  {
    ATerm v_1 (ATerm t)
    {
      t = Fst_0(t);
      {
        ATerm x_1 (ATerm t)
        {
          ATerm n_26 = NULL;
          ATerm o_26 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = y_66(t);
          o_26 = t;
          if(n_26 != NULL && n_26 != o_26)
            _fail(o_26);
          else
            n_26 = o_26;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), not_null(n_26));
          return(t);
        }
        t = get_module_1(t, x_1);
      }
      return(t);
    }
    ATerm w_1 (ATerm t)
    {
      ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
      p_26 = t;
      g_26 :
      if(match_cons(p_26, sym_TCons_2))
        {
          q_26 = ATgetArgument(p_26, 0);
          r_26 = ATgetArgument(p_26, 1);
          h_26 :
          if(match_cons(r_26, sym_TCons_2))
            {
              s_26 = ATgetArgument(r_26, 0);
              t_26 = ATgetArgument(r_26, 1);
              i_26 :
              if(match_cons(t_26, sym_TCons_2))
                {
                  u_26 = ATgetArgument(t_26, 0);
                  v_26 = ATgetArgument(t_26, 1);
                  k_26 :
                  if(match_cons(v_26, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_26), not_null(u_26));
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
    t = graph_nodes_roots_3(t, v_1, get_stratego_imports_0, w_1);
    t = unzip_0(t);
    {
      ATerm y_1 (ATerm t)
      {
        t = TCons_2(t, flatten_stratego_0, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, y_1);
    }
  }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  t = SSL_exit(not_null(e_27));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  l_27 = t;
  i_27 :
  if(match_cons(l_27, sym_TCons_2))
    {
      m_27 = ATgetArgument(l_27, 0);
      n_27 = ATgetArgument(l_27, 1);
      j_27 :
      if(match_cons(n_27, sym_TCons_2))
        {
          o_27 = ATgetArgument(n_27, 0);
          p_27 = ATgetArgument(n_27, 1);
          k_27 :
          if(match_cons(p_27, sym_TNil_0))
            {
              ATerm a_10;
              a_10 = t;
              t = SSL_printnl(not_null(m_27), not_null(o_27));
              t = a_10;
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
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm u_27 = NULL;
  u_27 = t;
  t = SSL_close_file(not_null(u_27));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym_Cons_2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      {
        ATerm f_28 = NULL;
        ATerm g_28 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = i_61(t);
        g_28 = t;
        if(f_28 != NULL && f_28 != g_28)
          _fail(g_28);
        else
          f_28 = g_28;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_28), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_28), not_null(c_28)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm b_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = b_10;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm c_10 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = c_10;
              t = Cons_2(t, _id, z_1);
              t = Sep_1(t, j_61);
            }
          return(t);
        }
        t = Cons_2(t, _id, z_1);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_53 (ATerm), ATerm l_53 (ATerm))
{
  ATerm n_28 = NULL;
  ATerm p_28 = NULL,r_28 = NULL;
  n_28 = t;
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm q_28 = NULL;
      t = not_null(n_28);
      t = k_53(t);
      q_28 = t;
      if(p_28 != NULL && p_28 != q_28)
        _fail(q_28);
      else
        p_28 = q_28;
    }
    t = d_10;
    {
      ATerm s_28 = NULL;
      t = not_null(n_28);
      t = l_53(t);
      s_28 = t;
      if(r_28 != NULL && r_28 != s_28)
        _fail(s_28);
      else
        r_28 = s_28;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_28), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_51 (ATerm))
{
  ATerm e_10;
  e_10 = t;
  {
    ATerm e_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm f_2 (ATerm t)
    {
      ATerm a_29 = NULL;
      ATerm e_29 = NULL;
      a_29 = t;
      {
        ATerm f_29 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = q_51(t);
        f_29 = t;
        if(e_29 != NULL && e_29 != f_29)
          _fail(f_29);
        else
          e_29 = f_29;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_29), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_29), (ATerm) ATmakeAppl(sym_Nil_0)));
      }
      return(t);
    }
    t = split_2(t, e_2, f_2);
    t = printnl_0(t);
  }
  t = e_10;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_51 (ATerm))
{
  ATerm f_10;
  f_10 = t;
  t = x_51(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, h_2);
  }
  t = f_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  ATerm g_10 = t;
  if(PushChoice()==0)
    {
      ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
      p_29 = t;
      j_29 :
      if(match_cons(p_29, sym_TCons_2))
        {
          q_29 = ATgetArgument(p_29, 0);
          r_29 = ATgetArgument(p_29, 1);
          k_29 :
          if(match_cons(r_29, sym_TCons_2))
            {
              s_29 = ATgetArgument(r_29, 0);
              t_29 = ATgetArgument(r_29, 1);
              l_29 :
              if(match_cons(t_29, sym_TNil_0))
                {
                  if(o_29 != NULL && o_29 != q_29)
                    _fail(q_29);
                  else
                    o_29 = q_29;
                  if(n_29 != NULL && n_29 != s_29)
                    _fail(s_29);
                  else
                    n_29 = s_29;
                  t = SSL_open_file(not_null(o_29), not_null(n_29));
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
      t = g_10;
      {
        ATerm u_29 = NULL;
        ATerm j_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, j_2);
        u_29 = t;
        if(o_29 != NULL && o_29 != u_29)
          _fail(u_29);
        else
          o_29 = u_29;
        t = SSL_open_file(not_null(o_29), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
      }
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  b_30 = t;
  y_29 :
  if(match_cons(b_30, sym_TCons_2))
    {
      c_30 = ATgetArgument(b_30, 0);
      d_30 = ATgetArgument(b_30, 1);
      z_29 :
      if(match_cons(d_30, sym_TCons_2))
        {
          e_30 = ATgetArgument(d_30, 0);
          f_30 = ATgetArgument(d_30, 1);
          a_30 :
          if(match_cons(f_30, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_30), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = concat_strings_0(t);
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
ATerm create_dep_file_1 (ATerm t, ATerm f_45 (ATerm))
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,g_31 = NULL,h_31 = NULL;
  v_30 = t;
  s_30 :
  if(match_cons(v_30, sym_TCons_2))
    {
      w_30 = ATgetArgument(v_30, 0);
      x_30 = ATgetArgument(v_30, 1);
      t_30 :
      if(match_cons(x_30, sym_TCons_2))
        {
          g_31 = ATgetArgument(x_30, 0);
          h_31 = ATgetArgument(x_30, 1);
          u_30 :
          if(match_cons(h_31, sym_TNil_0))
            {
              ATerm k_31 = NULL;
              t = not_null(w_30);
              {
                ATerm m_31 = NULL,o_31 = NULL;
                t = f_45(t);
                k_31 = t;
                {
                  ATerm n_31 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_extension_0(t);
                  n_31 = t;
                  if(m_31 != NULL && m_31 != n_31)
                    _fail(n_31);
                  else
                    m_31 = n_31;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm q_31 = NULL;
                    t = open_file_0(t);
                    o_31 = t;
                    {
                      ATerm r_31 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue)), not_null(g_31));
                      {
                        ATerm k_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
                          return(t);
                        }
                        t = separate_by_1(t, k_2);
                        r_31 = t;
                        if(q_31 != NULL && q_31 != r_31)
                          _fail(r_31);
                        else
                          q_31 = r_31;
                      }
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_31), not_null(q_31)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = printnl_0(t);
                      t = not_null(o_31);
                      t = close_file_0(t);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_31), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
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
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm x_31 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, f_60, _id);
        PopChoice();
      }
    else
      {
        t = h_10;
        t = Cons_2(t, _id, x_31);
      }
    return(t);
  }
  t = x_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_50 (ATerm))
{
  t = fetch_1(t, k_50);
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm i_10 = t;
  if(PushChoice()==0)
    {
      t = n_66(t);
      PopChoice();
    }
  else
    t = i_10;
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  c_32 = t;
  z_31 :
  if(match_cons(c_32, sym_TCons_2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      a_32 :
      if(match_cons(e_32, sym_TCons_2))
        {
          f_32 = ATgetArgument(e_32, 0);
          g_32 = ATgetArgument(e_32, 1);
          b_32 :
          if(match_cons(g_32, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(d_32), not_null(f_32));
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
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  o_32 = t;
  l_32 :
  if(match_cons(o_32, sym_TCons_2))
    {
      p_32 = ATgetArgument(o_32, 0);
      q_32 = ATgetArgument(o_32, 1);
      m_32 :
      if(match_cons(q_32, sym_TCons_2))
        {
          r_32 = ATgetArgument(q_32, 0);
          s_32 = ATgetArgument(q_32, 1);
          n_32 :
          if(match_cons(s_32, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(p_32), not_null(r_32));
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
ATerm filter_1 (ATerm t, ATerm c_54 (ATerm))
{
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_10;
      {
        ATerm k_10 = t;
        if(PushChoice()==0)
          {
            ATerm l_2 (ATerm t)
            {
              t = filter_1(t, c_54);
              return(t);
            }
            t = Cons_2(t, c_54, l_2);
            PopChoice();
          }
        else
          {
            t = k_10;
            {
              ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
              y_32 = t;
              x_32 :
              if(match_cons(y_32, sym_Cons_2))
                {
                  z_32 = ATgetArgument(y_32, 0);
                  a_33 = ATgetArgument(y_32, 1);
                  t = not_null(a_33);
                  t = filter_1(t, c_54);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm d_33 (ATerm t)
  {
    ATerm l_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = l_10;
        t = Cons_2(t, z_59, d_33);
      }
    return(t);
  }
  t = d_33(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm k_33 = NULL;
  ATerm m_2 (ATerm t)
  {
    ATerm l_33 = NULL,m_33 = NULL;
    l_33 = t;
    f_33 :
    if(match_cons(l_33, sym_Program_1))
      {
        m_33 = ATgetArgument(l_33, 0);
        if(k_33 != NULL && k_33 != m_33)
          _fail(m_33);
        else
          k_33 = m_33;
      }
    else
      _fail(t);
    return(t);
  }
  t = option_defined_1(t, m_2);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  o_33 :
  if(!(match_cons(p_33, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_51 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm m_10 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = m_10;
        {
          ATerm n_10 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = n_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_2);
  t = f_51(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm f_50 (ATerm), ATerm g_50 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = ArgOption_3(t, f_50, g_50, k_3);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm u_49 (ATerm), ATerm v_49 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, u_49, v_49, l_3);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  k_34 = t;
  y_33 :
  if(match_cons(k_34, sym_Cons_2))
    {
      a_34 = ATgetArgument(k_34, 0);
      b_34 = ATgetArgument(k_34, 1);
      z_33 :
      if(match_cons(b_34, sym_Cons_2))
        {
          i_34 = ATgetArgument(b_34, 0);
          j_34 = ATgetArgument(b_34, 1);
          {
            ATerm o_34 = NULL;
            t = not_null(a_34);
            t = f_0(t);
            {
              ATerm p_34 = NULL;
              t = not_null(i_34);
              t = g_0(t);
              p_34 = t;
              if(o_34 != NULL && o_34 != p_34)
                _fail(p_34);
              else
                o_34 = p_34;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_34), not_null(j_34));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(k_34, "register-usage-info"))
        t = register_usage_1(t, h_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_10 = t;
  if(PushChoice()==0)
    {
      ATerm m_3 (ATerm t)
      {
        ATerm s_35 = NULL;
        s_35 = t;
        t_34 :
        if(!(match_string(s_35, "-S")))
          {
            if(!(match_string(s_35, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, m_3, n_3, o_3);
      PopChoice();
    }
  else
    {
      t = o_10;
      {
        ATerm p_10 = t;
        if(PushChoice()==0)
          {
            ATerm p_3 (ATerm t)
            {
              ATerm t_35 = NULL;
              t_35 = t;
              u_34 :
              if(!(match_string(t_35, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm u_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm v_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, p_3, u_3, v_3);
            PopChoice();
          }
        else
          {
            t = p_10;
            {
              ATerm q_10 = t;
              if(PushChoice()==0)
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm u_35 = NULL;
                    u_35 = t;
                    v_34 :
                    if(!(match_string(u_35, "-v")))
                      {
                        if(!(match_string(u_35, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm x_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm a_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, w_3, x_3, a_4);
                  PopChoice();
                }
              else
                {
                  t = q_10;
                  {
                    ATerm r_10 = t;
                    if(PushChoice()==0)
                      {
                        ATerm b_4 (ATerm t)
                        {
                          ATerm v_35 = NULL;
                          v_35 = t;
                          w_34 :
                          if(!(match_string(v_35, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm c_4 (ATerm t)
                        {
                          ATerm w_35 = NULL;
                          w_35 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_35));
                          return(t);
                        }
                        ATerm o_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, b_4, c_4, o_4);
                        PopChoice();
                      }
                    else
                      {
                        t = r_10;
                        {
                          ATerm s_10 = t;
                          if(PushChoice()==0)
                            {
                              ATerm r_4 (ATerm t)
                              {
                                ATerm y_35 = NULL;
                                y_35 = t;
                                m_35 :
                                if(!(match_string(y_35, "-i")))
                                  {
                                    if(!(match_string(y_35, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm s_4 (ATerm t)
                              {
                                ATerm z_35 = NULL;
                                z_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_35));
                                return(t);
                              }
                              ATerm t_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, r_4, s_4, t_4);
                              PopChoice();
                            }
                          else
                            {
                              t = s_10;
                              {
                                ATerm t_10 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm u_4 (ATerm t)
                                    {
                                      ATerm b_36 = NULL;
                                      b_36 = t;
                                      o_35 :
                                      if(!(match_string(b_36, "-o")))
                                        {
                                          if(!(match_string(b_36, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm w_4 (ATerm t)
                                    {
                                      ATerm c_36 = NULL;
                                      c_36 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_36));
                                      return(t);
                                    }
                                    ATerm x_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, u_4, w_4, x_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_10;
                                    {
                                      ATerm u_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm y_4 (ATerm t)
                                          {
                                            ATerm e_36 = NULL;
                                            e_36 = t;
                                            q_35 :
                                            if(!(match_string(e_36, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm d_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm e_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, y_4, d_5, e_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_10;
                                          {
                                            ATerm f_5 (ATerm t)
                                            {
                                              ATerm f_36 = NULL;
                                              f_36 = t;
                                              r_35 :
                                              if(!(match_string(f_36, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm g_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm i_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, f_5, g_5, i_5);
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
  ATerm k_36 = NULL;
  k_36 = t;
  t = SSL_table_destroy(not_null(k_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm n_36 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, n_36);
        PopChoice();
      }
    else
      {
        t = v_10;
        t = Nil_0(t);
        t = l_60(t);
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = w_10;
      {
        ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
        q_36 = t;
        p_36 :
        if(match_cons(q_36, sym_Cons_2))
          {
            r_36 = ATgetArgument(q_36, 0);
            s_36 = ATgetArgument(q_36, 1);
            t = not_null(r_36);
            {
              ATerm j_5 (ATerm t)
              {
                t = not_null(s_36);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, j_5);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm x_36 (ATerm t)
  {
    ATerm x_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = x_10;
        t = Cons_2(t, x_59, x_36);
      }
    return(t);
  }
  t = x_36(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  d_37 = t;
  z_36 :
  if(match_cons(d_37, sym_TCons_2))
    {
      e_37 = ATgetArgument(d_37, 0);
      f_37 = ATgetArgument(d_37, 1);
      a_37 :
      if(match_cons(e_37, sym_Nil_0))
        {
          b_37 :
          if(match_cons(f_37, sym_TCons_2))
            {
              g_37 = ATgetArgument(f_37, 0);
              h_37 = ATgetArgument(f_37, 1);
              c_37 :
              if(match_cons(h_37, sym_TNil_0))
                t = not_null(g_37);
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
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  p_37 = t;
  l_37 :
  if(match_cons(p_37, sym_TCons_2))
    {
      q_37 = ATgetArgument(p_37, 0);
      t_37 = ATgetArgument(p_37, 1);
      m_37 :
      if(match_cons(q_37, sym_Cons_2))
        {
          r_37 = ATgetArgument(q_37, 0);
          s_37 = ATgetArgument(q_37, 1);
          n_37 :
          if(match_cons(t_37, sym_TCons_2))
            {
              u_37 = ATgetArgument(t_37, 0);
              v_37 = ATgetArgument(t_37, 1);
              o_37 :
              if(match_cons(v_37, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_37), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_37), not_null(u_37)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm q_65 (ATerm), ATerm r_65 (ATerm))
{
  ATerm a_38 (ATerm t)
  {
    ATerm y_10 = t;
    if(PushChoice()==0)
      {
        t = q_65(t);
        t = a_38(t);
        PopChoice();
      }
    else
      {
        t = y_10;
        t = r_65(t);
      }
    return(t);
  }
  t = a_38(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm t_65 (ATerm))
{
  t = repeat_2(t, t_65, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm c_38 = NULL;
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_44 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Program_1))
    {
      j_38 = ATgetArgument(i_38, 0);
      {
        ATerm l_38 = NULL;
        t = not_null(j_38);
        t = g_44(t);
        l_38 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_38));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm t_38 = NULL;
  ATerm k_5 (ATerm t)
  {
    ATerm l_5 (ATerm t)
    {
      ATerm u_38 = NULL;
      u_38 = t;
      if(t_38 != NULL && t_38 != u_38)
        _fail(u_38);
      else
        t_38 = u_38;
      return(t);
    }
    t = Program_1(t, l_5);
    return(t);
  }
  t = option_defined_1(t, k_5);
  {
    ATerm v_5 (ATerm t)
    {
      ATerm v_38 = NULL;
      ATerm w_38 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm w_5 (ATerm t)
        {
          t = not_null(t_38);
          return(t);
        }
        t = short_description_1(t, w_5);
        t = concat_strings_0(t);
        w_38 = t;
        if(v_38 != NULL && v_38 != w_38)
          _fail(w_38);
        else
          v_38 = w_38;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_38), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, v_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm a_6 (ATerm t)
      {
        ATerm x_38 = NULL;
        x_38 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_38), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, a_6);
      {
        ATerm b_6 (ATerm t)
        {
          ATerm z_38 = NULL;
          ATerm a_39 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm d_6 (ATerm t)
            {
              t = not_null(t_38);
              return(t);
            }
            t = long_description_1(t, d_6);
            t = concat_strings_0(t);
            a_39 = t;
            if(z_38 != NULL && z_38 != a_39)
              _fail(a_39);
            else
              z_38 = a_39;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_38), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, b_6);
      }
    }
  }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_44 (ATerm))
{
  ATerm i_39 = NULL,j_39 = NULL;
  i_39 = t;
  h_39 :
  if(match_cons(i_39, sym_Undefined_1))
    {
      j_39 = ATgetArgument(i_39, 0);
      {
        ATerm l_39 = NULL;
        t = not_null(j_39);
        t = h_44(t);
        l_39 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_39));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_39 = NULL;
  q_39 = t;
  p_39 :
  if(!(match_cons(q_39, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_49 (ATerm))
{
  ATerm s_39 = NULL;
  ATerm t_39 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = q_49(t);
  t_39 = t;
  if(s_39 != NULL && s_39 != t_39)
    _fail(t_39);
  else
    s_39 = t_39;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_39), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  b_40 = t;
  y_39 :
  if(match_cons(b_40, sym_Cons_2))
    {
      z_39 = ATgetArgument(b_40, 0);
      a_40 = ATgetArgument(b_40, 1);
      {
        ATerm e_40 = NULL;
        t = not_null(z_39);
        t = c_0(t);
        {
          ATerm f_40 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = d_0(t);
          f_40 = t;
          if(e_40 != NULL && e_40 != f_40)
            _fail(f_40);
          else
            e_40 = f_40;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_40), not_null(a_40));
        }
      }
    }
  else
    {
      if(match_string(b_40, "register-usage-info"))
        t = register_usage_1(t, e_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm k_40 = NULL;
    k_40 = t;
    j_40 :
    if(!(match_string(k_40, "--help")))
      {
        if(!(match_string(k_40, "-h")))
          {
            if(!(match_string(k_40, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, e_6, g_6, h_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
  n_40 = t;
  m_40 :
  if(match_cons(n_40, sym_Cons_2))
    {
      o_40 = ATgetArgument(n_40, 0);
      p_40 = ATgetArgument(n_40, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_40)), not_null(p_40));
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm u_40 = NULL;
  u_40 = t;
  t_40 :
  if(!(match_cons(u_40, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_49 (ATerm))
{
  ATerm z_10;
  z_10 = t;
  {
    ATerm i_6 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = o_49(t);
      return(t);
    }
    t = try_1(t, i_6);
  }
  t = z_10;
  {
    ATerm r_6 (ATerm t)
    {
      ATerm w_40 = NULL;
      w_40 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_40));
      return(t);
    }
    ATerm s_6 (ATerm t)
    {
      ATerm a_11 = t;
      if(PushChoice()==0)
        {
          ATerm b_11 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = b_11;
              t = o_49(t);
              t = Cons_2(t, _id, s_6);
            }
          PopChoice();
        }
      else
        {
          t = a_11;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_6, s_6);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_49 (ATerm))
{
  ATerm b_41 = NULL;
  ATerm c_11;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = c_11;
  {
    ATerm t_6 (ATerm t)
    {
      ATerm d_11 = t;
      if(PushChoice()==0)
        {
          t = n_49(t);
          PopChoice();
        }
      else
        {
          t = d_11;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_6);
    {
      ATerm u_6 (ATerm t)
      {
        ATerm e_11 = t;
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
            t = e_11;
            {
              ATerm z_6 (ATerm t)
              {
                ATerm a_7 (ATerm t)
                {
                  ATerm c_41 = NULL;
                  c_41 = t;
                  if(b_41 != NULL && b_41 != c_41)
                    _fail(c_41);
                  else
                    b_41 = c_41;
                  return(t);
                }
                t = Undefined_1(t, a_7);
                return(t);
              }
              t = option_defined_1(t, z_6);
              {
                ATerm f_11;
                f_11 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_41), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = f_11;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, u_6);
      {
        ATerm g_11;
        g_11 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = g_11;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm h_11 = t;
    if(PushChoice()==0)
      {
        t = io_options_0(t);
        PopChoice();
      }
    else
      {
        t = h_11;
        {
          ATerm i_11 = t;
          if(PushChoice()==0)
            {
              ATerm c_7 (ATerm t)
              {
                ATerm l_41 = NULL;
                l_41 = t;
                e_41 :
                if(!(match_string(l_41, "-I")))
                  _fail(t);
                return(t);
              }
              ATerm l_7 (ATerm t)
              {
                ATerm m_41 = NULL;
                m_41 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(m_41));
                return(t);
              }
              t = ArgOption_2(t, c_7, l_7);
              PopChoice();
            }
          else
            {
              t = i_11;
              {
                ATerm k_11 = t;
                if(PushChoice()==0)
                  {
                    ATerm m_7 (ATerm t)
                    {
                      ATerm o_41 = NULL;
                      o_41 = t;
                      g_41 :
                      if(!(match_string(o_41, "-nodep")))
                        _fail(t);
                      return(t);
                    }
                    ATerm n_7 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_NoDependency_0);
                      return(t);
                    }
                    t = Option_2(t, m_7, n_7);
                    PopChoice();
                  }
                else
                  {
                    t = k_11;
                    {
                      ATerm l_11 = t;
                      if(PushChoice()==0)
                        {
                          ATerm o_7 (ATerm t)
                          {
                            ATerm p_41 = NULL;
                            p_41 = t;
                            h_41 :
                            if(!(match_string(p_41, "-dep")))
                              _fail(t);
                            return(t);
                          }
                          ATerm p_7 (ATerm t)
                          {
                            ATerm q_41 = NULL;
                            q_41 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(q_41));
                            return(t);
                          }
                          t = ArgOption_2(t, o_7, p_7);
                          PopChoice();
                        }
                      else
                        {
                          t = l_11;
                          {
                            ATerm r_7 (ATerm t)
                            {
                              ATerm s_41 = NULL;
                              s_41 = t;
                              j_41 :
                              if(!(match_string(s_41, "--prefix")))
                                _fail(t);
                              return(t);
                            }
                            ATerm u_7 (ATerm t)
                            {
                              ATerm t_41 = NULL;
                              t_41 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(t_41)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm v_7 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, v_7);
                              }
                              t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(t_41));
                              return(t);
                            }
                            t = ArgOption_2(t, r_7, u_7);
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
  t = parse_options_1(t, b_7);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm d_45 (ATerm, ATerm (ATerm)), ATerm e_45 (ATerm))
{
  ATerm r_42 = NULL;
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,c_43 = NULL;
  t = pack_module_options_0(t);
  r_42 = t;
  {
    ATerm w_7 (ATerm t)
    {
      t = need_help_1(t, pack_modules_usage_0);
      return(t);
    }
    t = try_1(t, w_7);
    {
      ATerm x_7 (ATerm t)
      {
        ATerm y_7 (ATerm t)
        {
          ATerm x_42 = NULL,y_42 = NULL;
          x_42 = t;
          d_42 :
          if(match_cons(x_42, sym_Program_1))
            {
              y_42 = ATgetArgument(x_42, 0);
              if(t_42 != NULL && t_42 != y_42)
                _fail(y_42);
              else
                t_42 = y_42;
            }
          else
            {
              if(match_cons(x_42, sym_Input_1))
                {
                  y_42 = ATgetArgument(x_42, 0);
                  if(u_42 != NULL && u_42 != y_42)
                    _fail(y_42);
                  else
                    u_42 = y_42;
                }
              else
                {
                  if(match_cons(x_42, sym_Output_1))
                    {
                      y_42 = ATgetArgument(x_42, 0);
                      if(v_42 != NULL && v_42 != y_42)
                        _fail(y_42);
                      else
                        v_42 = y_42;
                    }
                  else
                    {
                      if(match_cons(x_42, sym_Dependency_1))
                        {
                          y_42 = ATgetArgument(x_42, 0);
                          if(w_42 != NULL && w_42 != y_42)
                            _fail(y_42);
                          else
                            w_42 = y_42;
                        }
                      else
                        _fail(t);
                    }
                }
            }
          return(t);
        }
        t = try_1(t, y_7);
        return(t);
      }
      t = list_1(t, x_7);
      {
        ATerm e_43 = NULL;
        ATerm b_8 (ATerm t)
        {
          ATerm z_42 = NULL,a_43 = NULL;
          z_42 = t;
          f_42 :
          if(match_cons(z_42, sym_Include_1))
            {
              a_43 = ATgetArgument(z_42, 0);
              t = not_null(a_43);
            }
          else
            _fail(t);
          return(t);
        }
        t = filter_1(t, b_8);
        c_43 = t;
        {
          ATerm g_43 = NULL;
          ATerm m_11 = t;
          if(PushChoice()==0)
            {
              t = not_null(u_42);
              PopChoice();
            }
          else
            {
              t = m_11;
              t = (ATerm) ATmakeAppl(sym_stdin_0);
            }
          e_43 = t;
          {
            ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL;
            ATerm r_11 = t;
            if(PushChoice()==0)
              {
                t = not_null(v_42);
                PopChoice();
              }
            else
              {
                t = r_11;
                t = (ATerm) ATmakeAppl(sym_stdout_0);
              }
            g_43 = t;
            t = not_null(e_43);
            {
              ATerm j_8 (ATerm t)
              {
                t = not_null(c_43);
                return(t);
              }
              t = d_45(t, j_8);
              i_43 = t;
              o_42 :
              if(match_cons(i_43, sym_TCons_2))
                {
                  j_43 = ATgetArgument(i_43, 0);
                  k_43 = ATgetArgument(i_43, 1);
                  p_42 :
                  if(match_cons(k_43, sym_TCons_2))
                    {
                      l_43 = ATgetArgument(k_43, 0);
                      m_43 = ATgetArgument(k_43, 1);
                      q_42 :
                      if(match_cons(m_43, sym_TNil_0))
                        {
                          ATerm q_43 = NULL,t_43 = NULL;
                          t = not_null(r_42);
                          {
                            ATerm s_11 = t;
                            if(PushChoice()==0)
                              {
                                ATerm n_8 (ATerm t)
                                {
                                  ATerm p_43 = NULL;
                                  p_43 = t;
                                  k_42 :
                                  if(!(match_cons(p_43, sym_Binary_0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = option_defined_1(t, n_8);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_43), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToBinaryFile_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = s_11;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_43), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToTextFile_0(t);
                              }
                            {
                              ATerm o_8 (ATerm t)
                              {
                                ATerm s_43 = NULL;
                                ATerm t_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = not_null(w_42);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_11;
                                    {
                                      ATerm u_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = not_null(r_42);
                                          {
                                            ATerm p_8 (ATerm t)
                                            {
                                              ATerm r_43 = NULL;
                                              r_43 = t;
                                              l_42 :
                                              if(!(match_cons(r_43, sym_NoDependency_0)))
                                                _fail(t);
                                              return(t);
                                            }
                                            t = option_defined_1(t, p_8);
                                          }
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        t = u_11;
                                      t = e_45(t);
                                    }
                                  }
                                s_43 = t;
                                if(q_43 != NULL && q_43 != s_43)
                                  _fail(s_43);
                                else
                                  q_43 = s_43;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_43), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm q_8 (ATerm t)
                                  {
                                    t = not_null(q_43);
                                    return(t);
                                  }
                                  t = create_dep_file_1(t, q_8);
                                }
                                return(t);
                              }
                              t = try_1(t, o_8);
                              t = dtime_0(t);
                              t_43 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_42), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_43), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = printnl_0(t);
                              t = (ATerm) ATmakeInt(0);
                              t = exit_0(t);
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
          }
        }
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  ATerm v_11;
  v_11 = t;
  {
    ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,a_45 = NULL,c_45 = NULL,j_45 = NULL,k_45 = NULL;
    w_44 = t;
    l_44 :
    if(match_cons(w_44, sym_TCons_2))
      {
        x_44 = ATgetArgument(w_44, 0);
        y_44 = ATgetArgument(w_44, 1);
        m_44 :
        if(match_cons(y_44, sym_TCons_2))
          {
            a_45 = ATgetArgument(y_44, 0);
            c_45 = ATgetArgument(y_44, 1);
            p_44 :
            if(match_cons(c_45, sym_TCons_2))
              {
                j_45 = ATgetArgument(c_45, 0);
                k_45 = ATgetArgument(c_45, 1);
                q_44 :
                if(match_cons(k_45, sym_TNil_0))
                  {
                    if(t_44 != NULL && t_44 != x_44)
                      _fail(x_44);
                    else
                      t_44 = x_44;
                    if(u_44 != NULL && u_44 != a_45)
                      _fail(a_45);
                    else
                      u_44 = a_45;
                    if(v_44 != NULL && v_44 != j_45)
                      _fail(j_45);
                    else
                      v_44 = j_45;
                    t = SSL_table_put(not_null(t_44), not_null(u_44), not_null(v_44));
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
  t = v_11;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  t_45 = t;
  q_45 :
  if(match_cons(t_45, sym_TCons_2))
    {
      u_45 = ATgetArgument(t_45, 0);
      v_45 = ATgetArgument(t_45, 1);
      r_45 :
      if(match_cons(v_45, sym_TCons_2))
        {
          w_45 = ATgetArgument(v_45, 0);
          x_45 = ATgetArgument(v_45, 1);
          s_45 :
          if(match_cons(x_45, sym_TNil_0))
            t = SSL_table_get(not_null(u_45), not_null(w_45));
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
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
  k_46 = t;
  g_46 :
  if(match_cons(k_46, sym_TCons_2))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      h_46 :
      if(match_cons(m_46, sym_TCons_2))
        {
          n_46 = ATgetArgument(m_46, 0);
          o_46 = ATgetArgument(m_46, 1);
          i_46 :
          if(match_cons(o_46, sym_TCons_2))
            {
              p_46 = ATgetArgument(o_46, 0);
              q_46 = ATgetArgument(o_46, 1);
              j_46 :
              if(match_cons(q_46, sym_TNil_0))
                {
                  ATerm w_11;
                  w_11 = t;
                  {
                    ATerm u_46 = NULL;
                    ATerm v_46 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_46), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_46), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm x_11 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = x_11;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      v_46 = t;
                      if(u_46 != NULL && u_46 != v_46)
                        _fail(v_46);
                      else
                        u_46 = v_46;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_46), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_46), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_46), not_null(u_46)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = w_11;
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
ATerm assert_1 (ATerm t, ATerm z_44 (ATerm))
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  f_47 = t;
  c_47 :
  if(match_cons(f_47, sym_TCons_2))
    {
      g_47 = ATgetArgument(f_47, 0);
      h_47 = ATgetArgument(f_47, 1);
      d_47 :
      if(match_cons(h_47, sym_TCons_2))
        {
          i_47 = ATgetArgument(h_47, 0);
          j_47 = ATgetArgument(h_47, 1);
          e_47 :
          if(match_cons(j_47, sym_TNil_0))
            {
              ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
              ATerm y_11;
              y_11 = t;
              {
                ATerm p_47 = NULL;
                ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
                t = z_44(t);
                p_47 = t;
                if(m_47 != NULL && m_47 != p_47)
                  _fail(p_47);
                else
                  m_47 = p_47;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_47), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_47), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_47), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm z_11 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_47), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = z_11;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  q_47 = t;
                  b_47 :
                  if(match_cons(q_47, sym_Cons_2))
                    {
                      r_47 = ATgetArgument(q_47, 0);
                      s_47 = ATgetArgument(q_47, 1);
                      if(n_47 != NULL && n_47 != r_47)
                        _fail(r_47);
                      else
                        n_47 = r_47;
                      if(o_47 != NULL && o_47 != s_47)
                        _fail(s_47);
                      else
                        o_47 = s_47;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_47), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_47), not_null(n_47)), not_null(o_47)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = y_11;
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
ATerm implode_string_0 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  t = SSL_implode_string(not_null(x_47));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_48 = NULL;
  b_48 = t;
  t = SSL_explode_string(not_null(b_48));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm a_12 = t;
    if(PushChoice()==0)
      {
        ATerm g_48 (ATerm t)
        {
          ATerm b_12 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, g_48);
              PopChoice();
            }
          else
            {
              t = b_12;
              {
                ATerm r_8 (ATerm t)
                {
                  ATerm f_48 = NULL;
                  f_48 = t;
                  e_48 :
                  if(!(match_int(f_48, 47)))
                    _fail(t);
                  return(t);
                }
                ATerm s_8 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = Cons_2(t, r_8, s_8);
              }
            }
          return(t);
        }
        t = g_48(t);
        PopChoice();
      }
    else
      {
        t = a_12;
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym_Cons_2))
    {
      m_48 = ATgetArgument(l_48, 0);
      n_48 = ATgetArgument(l_48, 1);
      {
        ATerm q_48 = NULL;
        t = not_null(m_48);
        {
          ATerm s_48 = NULL;
          t = r_44(t);
          q_48 = t;
          t = not_null(n_48);
          t = s_44(t);
          s_48 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_48), not_null(s_48));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm y_48 = NULL;
  ATerm c_12;
  c_12 = t;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm z_48 = NULL;
      t = get_path_0(t);
      z_48 = t;
      if(y_48 != NULL && y_48 != z_48)
        _fail(z_48);
      else
        y_48 = z_48;
      return(t);
    }
    t = Cons_2(t, u_8, _id);
    {
      ATerm d_12;
      d_12 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(y_48)), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm v_8 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
          return(t);
        }
        t = assert_1(t, v_8);
      }
      t = d_12;
    }
  }
  t = c_12;
  t = pack_modules_2(t, pack_stratego_1, basename_0);
  return(t);
}
