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
ATerm basename_1 (ATerm, ATerm t_52 (ATerm));
ATerm basename_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm a_44 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm m_44 (ATerm), ATerm n_44 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_53 (ATerm), ATerm m_53 (ATerm));
ATerm Tl_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm guarantee_extension_1 (ATerm, ATerm v_52 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm a_45 (ATerm));
ATerm Prefix_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_pid_0 (ATerm);
ATerm parse_mod_0 (ATerm);
ATerm get_module_1 (ATerm, ATerm l_67 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm l_58 (ATerm), ATerm m_58 (ATerm), ATerm n_58 (ATerm), ATerm o_58 (ATerm));
ATerm zip_1 (ATerm, ATerm q_58 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm c_56 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm f_45 (ATerm), ATerm g_45 (ATerm), ATerm h_45 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_66 (ATerm), ATerm q_66 (ATerm));
ATerm for_3 (ATerm, ATerm s_66 (ATerm), ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm l_45 (ATerm), ATerm m_45 (ATerm), ATerm n_45 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm a_46 (ATerm), ATerm b_46 (ATerm), ATerm c_46 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm k_67 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm o_61 (ATerm));
ATerm separate_by_1 (ATerm, ATerm p_61 (ATerm));
ATerm debug_1 (ATerm, ATerm p_51 (ATerm));
ATerm obsolete_1 (ATerm, ATerm w_51 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm e_45 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_50 (ATerm));
ATerm try_1 (ATerm, ATerm v_66 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm filter_1 (ATerm, ATerm d_54 (ATerm));
ATerm list_1 (ATerm, ATerm f_60 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_51 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm e_50 (ATerm), ATerm f_50 (ATerm));
ATerm Option_2 (ATerm, ATerm t_49 (ATerm), ATerm u_49 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_49 (ATerm));
ATerm map_1 (ATerm, ATerm d_60 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm y_65 (ATerm), ATerm z_65 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_66 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_49 (ATerm));
ATerm Program_1 (ATerm, ATerm f_44 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_44 (ATerm));
ATerm Help_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_49 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_49 (ATerm));
ATerm parse_options_1 (ATerm, ATerm m_49 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm c_45 (ATerm, ATerm (ATerm)), ATerm d_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm y_44 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_44 (ATerm), ATerm r_44 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm t_52 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      ATerm a_1 = t;
      if(PushChoice()==0)
        {
          t = Cons_2(t, _id, b_0);
          PopChoice();
        }
      else
        {
          t = a_1;
          {
            ATerm n_8 = t;
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
                t = n_8;
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
                  t = Cons_2(t, k_0, t_52);
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, b_0);
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
ATerm Imports_1 (ATerm t, ATerm a_44 (ATerm))
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
        t = a_44(t);
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
            ATerm o_8 = t;
            if(PushChoice()==0)
              {
                t = Imports_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              t = o_8;
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
ATerm TCons_2 (ATerm t, ATerm m_44 (ATerm), ATerm n_44 (ATerm))
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
          t = m_44(t);
          g_2 = t;
          t = not_null(d_2);
          t = n_44(t);
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
  ATerm r_8;
  r_8 = t;
  {
    ATerm v_4 = NULL;
    ATerm w_4 = NULL;
    w_4 = t;
    if(v_4 != NULL && v_4 != w_4)
      _fail(w_4);
    else
      v_4 = w_4;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_4), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
  }
  t = r_8;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm e_9;
  e_9 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = e_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  t = SSL_ReadFromFile(not_null(z_4));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_53 (ATerm), ATerm m_53 (ATerm))
{
  ATerm f_5 = NULL;
  ATerm h_5 = NULL,j_5 = NULL;
  f_5 = t;
  {
    ATerm f_9;
    f_9 = t;
    {
      ATerm i_5 = NULL;
      t = not_null(f_5);
      t = l_53(t);
      i_5 = t;
      if(h_5 != NULL && h_5 != i_5)
        _fail(i_5);
      else
        h_5 = i_5;
    }
    t = f_9;
    {
      ATerm k_5 = NULL;
      t = not_null(f_5);
      t = m_53(t);
      k_5 = t;
      if(j_5 != NULL && j_5 != k_5)
        _fail(k_5);
      else
        j_5 = k_5;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_5), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym_Cons_2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      t = not_null(s_5);
    }
  else
    _fail(t);
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  t = SSL_open_file(not_null(x_5), (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue)));
  t = SSL_close_file(not_null(x_5));
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  g_6 = t;
  d_6 :
  if(match_cons(g_6, sym_TCons_2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      e_6 :
      if(match_cons(i_6, sym_TCons_2))
        {
          j_6 = ATgetArgument(i_6, 0);
          k_6 = ATgetArgument(i_6, 1);
          f_6 :
          if(match_cons(k_6, sym_TNil_0))
            {
              t = not_null(j_6);
              {
                ATerm s_6 (ATerm t)
                {
                  ATerm g_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
                      n_6 = t;
                      c_6 :
                      if(match_cons(n_6, sym_Cons_2))
                        {
                          o_6 = ATgetArgument(n_6, 0);
                          p_6 = ATgetArgument(n_6, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_6), (ATerm) ATmakeAppl(sym_Nil_0))));
                          t = concat_strings_0(t);
                          t = file_exists_0(t);
                        }
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = g_9;
                      t = Tl_0(t);
                      t = s_6(t);
                    }
                  return(t);
                }
                t = s_6(t);
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
ATerm guarantee_extension_1 (ATerm t, ATerm v_52 (ATerm))
{
  t = basename_0(t);
  {
    ATerm o_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = v_52(t);
      return(t);
    }
    t = split_2(t, _id, o_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm v_6 = NULL;
  v_6 = t;
  {
    ATerm h_9;
    h_9 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue)), not_null(v_6)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = call_0(t);
    t = h_9;
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  c_7 = t;
  z_6 :
  if(match_cons(c_7, sym_TCons_2))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      a_7 :
      if(match_cons(e_7, sym_TCons_2))
        {
          f_7 = ATgetArgument(e_7, 0);
          g_7 = ATgetArgument(e_7, 1);
          b_7 :
          if(match_cons(g_7, sym_TNil_0))
            t = SSL_call(not_null(d_7), not_null(f_7));
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
  ATerm p_0 (ATerm t)
  {
    t = TCons_2(t, explode_string_0, TNil_0);
    return(t);
  }
  t = TCons_2(t, explode_string_0, p_0);
  t = conc_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym_Cons_2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      t = not_null(n_7);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  w_7 = t;
  t_7 :
  if(match_cons(w_7, sym_TCons_2))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      u_7 :
      if(match_cons(y_7, sym_TCons_2))
        {
          z_7 = ATgetArgument(y_7, 0);
          a_8 = ATgetArgument(y_7, 1);
          v_7 :
          if(match_cons(a_8, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_7), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm a_45 (ATerm))
{
  ATerm g_8 = NULL;
  ATerm i_8 = NULL;
  g_8 = t;
  {
    ATerm j_8 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = a_45(t);
    j_8 = t;
    if(i_8 != NULL && i_8 != j_8)
      _fail(j_8);
    else
      i_8 = j_8;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_8), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_lookup_0(t);
  }
  return(t);
}
ATerm Prefix_0 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym_TNil_0))
    {
      ATerm i_9 = t;
      if(PushChoice()==0)
        {
          ATerm w_8 = NULL;
          ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_0);
          {
            ATerm q_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, q_0);
            x_8 = t;
            p_8 :
            if(match_cons(x_8, sym_Defined_2))
              {
                y_8 = ATgetArgument(x_8, 0);
                z_8 = ATgetArgument(x_8, 1);
                q_8 :
                if(match_string(y_8, "c_0"))
                  {
                    if(w_8 != NULL && w_8 != z_8)
                      _fail(z_8);
                    else
                      w_8 = z_8;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
          t = not_null(w_8);
          PopChoice();
        }
      else
        {
          t = i_9;
          {
            ATerm a_9 = NULL;
            ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_0);
            {
              ATerm r_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, r_0);
              b_9 = t;
              s_8 :
              if(match_cons(b_9, sym_Defined_2))
                {
                  c_9 = ATgetArgument(b_9, 0);
                  d_9 = ATgetArgument(b_9, 1);
                  t_8 :
                  if(match_string(c_9, "a_0"))
                    {
                      if(a_9 != NULL && a_9 != d_9)
                        _fail(d_9);
                      else
                        a_9 = d_9;
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
            t = not_null(a_9);
          }
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm j_9 = NULL;
  j_9 = t;
  t = SSL_int_to_string(not_null(j_9));
  return(t);
}
ATerm get_pid_0 (ATerm t)
{
  t = SSL_get_pid();
  return(t);
}
ATerm parse_mod_0 (ATerm t)
{
  ATerm x_9 = NULL;
  ATerm w_10 = NULL,x_10 = NULL;
  x_9 = t;
  {
    ATerm k_11 = NULL,m_11 = NULL;
    ATerm l_11 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = get_pid_0(t);
    t = int_to_string_0(t);
    l_11 = t;
    if(k_11 != NULL && k_11 != l_11)
      _fail(l_11);
    else
      k_11 = l_11;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_11), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm n_11 = NULL,r_11 = NULL;
      t = conc_strings_0(t);
      m_11 = t;
      if(x_10 != NULL && x_10 != m_11)
        _fail(m_11);
      else
        x_10 = m_11;
      {
        ATerm o_11 = NULL,q_11 = NULL;
        ATerm p_11 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = Prefix_0(t);
        p_11 = t;
        if(o_11 != NULL && o_11 != p_11)
          _fail(p_11);
        else
          o_11 = p_11;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_11), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("parse-mod", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_strings_0(t);
        q_11 = t;
        if(n_11 != NULL && n_11 != q_11)
          _fail(q_11);
        else
          n_11 = q_11;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_11), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_9), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_10), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = call_0(t);
        t = not_null(x_10);
        t = ReadFromFile_0(t);
        r_11 = t;
        if(w_10 != NULL && w_10 != r_11)
          _fail(r_11);
        else
          w_10 = r_11;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_10), (ATerm) ATmakeAppl(sym_Nil_0));
        t = rm_files_0(t);
      }
    }
    t = not_null(w_10);
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm l_67 (ATerm))
{
  ATerm k_9 = t;
  if(PushChoice()==0)
    {
      ATerm s_0 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
        return(t);
      }
      t = guarantee_extension_1(t, s_0);
      t = split_2(t, _id, l_67);
      t = find_in_path_0(t);
      t = split_2(t, _id, parse_mod_0);
      PopChoice();
    }
  else
    {
      t = k_9;
      {
        ATerm l_9 = t;
        if(PushChoice()==0)
          {
            ATerm t_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("tree", 0, ATtrue));
              return(t);
            }
            t = guarantee_extension_1(t, t_0);
            t = split_2(t, _id, l_67);
            t = find_in_path_0(t);
            t = split_2(t, _id, ReadFromFile_0);
            PopChoice();
          }
        else
          {
            t = l_9;
            {
              ATerm l_12 = NULL;
              ATerm w_12 = NULL;
              w_12 = t;
              if(l_12 != NULL && l_12 != w_12)
                _fail(w_12);
              else
                l_12 = w_12;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_12), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = fatal_error_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym_TCons_2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      t = not_null(b_13);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  o_13 = t;
  h_13 :
  if(match_cons(o_13, sym_TCons_2))
    {
      p_13 = ATgetArgument(o_13, 0);
      s_13 = ATgetArgument(o_13, 1);
      i_13 :
      if(match_cons(p_13, sym_Cons_2))
        {
          q_13 = ATgetArgument(p_13, 0);
          r_13 = ATgetArgument(p_13, 1);
          j_13 :
          if(match_cons(s_13, sym_TCons_2))
            {
              t_13 = ATgetArgument(s_13, 0);
              u_13 = ATgetArgument(s_13, 1);
              k_13 :
              if(match_cons(u_13, sym_TCons_2))
                {
                  v_13 = ATgetArgument(u_13, 0);
                  w_13 = ATgetArgument(u_13, 1);
                  l_13 :
                  if(match_cons(w_13, sym_TCons_2))
                    {
                      x_13 = ATgetArgument(w_13, 0);
                      y_13 = ATgetArgument(w_13, 1);
                      m_13 :
                      if(match_cons(y_13, sym_TCons_2))
                        {
                          z_13 = ATgetArgument(y_13, 0);
                          a_14 = ATgetArgument(y_13, 1);
                          n_13 :
                          if(match_cons(a_14, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_13), not_null(z_13)), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  m_14 = t;
  j_14 :
  if(match_cons(m_14, sym_TCons_2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      k_14 :
      if(match_cons(o_14, sym_TCons_2))
        {
          p_14 = ATgetArgument(o_14, 0);
          q_14 = ATgetArgument(o_14, 1);
          l_14 :
          if(match_cons(q_14, sym_TNil_0))
            {
              t = not_null(n_14);
              {
                ATerm u_0 (ATerm t)
                {
                  t = not_null(p_14);
                  return(t);
                }
                t = at_end_1(t, u_0);
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
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  z_14 = t;
  v_14 :
  if(match_cons(z_14, sym_TCons_2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      w_14 :
      if(match_cons(b_15, sym_TCons_2))
        {
          i_15 = ATgetArgument(b_15, 0);
          l_15 = ATgetArgument(b_15, 1);
          x_14 :
          if(match_cons(i_15, sym_Cons_2))
            {
              j_15 = ATgetArgument(i_15, 0);
              k_15 = ATgetArgument(i_15, 1);
              y_14 :
              if(match_cons(l_15, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_15), not_null(a_15)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_15), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,c_16 = NULL,d_16 = NULL;
  x_15 = t;
  u_15 :
  if(match_cons(x_15, sym_TCons_2))
    {
      y_15 = ATgetArgument(x_15, 0);
      z_15 = ATgetArgument(x_15, 1);
      v_15 :
      if(match_cons(z_15, sym_TCons_2))
        {
          c_16 = ATgetArgument(z_15, 0);
          d_16 = ATgetArgument(z_15, 1);
          w_15 :
          if(match_cons(d_16, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_15), not_null(c_16));
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
  ATerm q_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  q_16 = t;
  i_16 :
  if(match_cons(q_16, sym_TCons_2))
    {
      s_16 = ATgetArgument(q_16, 0);
      v_16 = ATgetArgument(q_16, 1);
      j_16 :
      if(match_cons(s_16, sym_Cons_2))
        {
          t_16 = ATgetArgument(s_16, 0);
          u_16 = ATgetArgument(s_16, 1);
          k_16 :
          if(match_cons(v_16, sym_TCons_2))
            {
              w_16 = ATgetArgument(v_16, 0);
              z_16 = ATgetArgument(v_16, 1);
              l_16 :
              if(match_cons(w_16, sym_Cons_2))
                {
                  x_16 = ATgetArgument(w_16, 0);
                  y_16 = ATgetArgument(w_16, 1);
                  p_16 :
                  if(match_cons(z_16, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_16), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_16), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  w_17 = t;
  p_17 :
  if(match_cons(w_17, sym_TCons_2))
    {
      x_17 = ATgetArgument(w_17, 0);
      y_17 = ATgetArgument(w_17, 1);
      q_17 :
      if(match_cons(x_17, sym_Nil_0))
        {
          r_17 :
          if(match_cons(y_17, sym_TCons_2))
            {
              z_17 = ATgetArgument(y_17, 0);
              a_18 = ATgetArgument(y_17, 1);
              u_17 :
              if(match_cons(z_17, sym_Nil_0))
                {
                  v_17 :
                  if(match_cons(a_18, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm l_58 (ATerm), ATerm m_58 (ATerm), ATerm n_58 (ATerm), ATerm o_58 (ATerm))
{
  ATerm c_18 (ATerm t)
  {
    ATerm m_9 = t;
    if(PushChoice()==0)
      {
        t = l_58(t);
        PopChoice();
      }
    else
      {
        t = m_9;
        t = m_58(t);
        {
          ATerm v_0 (ATerm t)
          {
            t = TCons_2(t, c_18, TNil_0);
            return(t);
          }
          t = TCons_2(t, o_58, v_0);
          t = n_58(t);
        }
      }
    return(t);
  }
  t = c_18(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm q_58 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, q_58);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  h_19 = t;
  y_18 :
  if(match_cons(h_19, sym_Cons_2))
    {
      i_19 = ATgetArgument(h_19, 0);
      n_19 = ATgetArgument(h_19, 1);
      z_18 :
      if(match_cons(i_19, sym_TCons_2))
        {
          j_19 = ATgetArgument(i_19, 0);
          k_19 = ATgetArgument(i_19, 1);
          f_19 :
          if(match_cons(k_19, sym_TCons_2))
            {
              l_19 = ATgetArgument(k_19, 0);
              m_19 = ATgetArgument(k_19, 1);
              g_19 :
              if(match_cons(m_19, sym_TNil_0))
                {
                  ATerm r_19 = NULL,s_19 = NULL,a_20 = NULL,i_20 = NULL;
                  ATerm n_9;
                  n_9 = t;
                  {
                    ATerm t_19 = NULL;
                    ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
                    t = not_null(l_19);
                    t_19 = t;
                    t = SSL_explode_term(not_null(t_19));
                    v_19 = t;
                    g_18 :
                    if(match_cons(v_19, sym_TCons_2))
                      {
                        w_19 = ATgetArgument(v_19, 0);
                        x_19 = ATgetArgument(v_19, 1);
                        h_18 :
                        if(match_cons(x_19, sym_TCons_2))
                          {
                            y_19 = ATgetArgument(x_19, 0);
                            z_19 = ATgetArgument(x_19, 1);
                            i_18 :
                            if(match_cons(z_19, sym_TNil_0))
                              {
                                if(r_19 != NULL && r_19 != w_19)
                                  _fail(w_19);
                                else
                                  r_19 = w_19;
                                if(s_19 != NULL && s_19 != y_19)
                                  _fail(y_19);
                                else
                                  s_19 = y_19;
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
                  t = n_9;
                  {
                    ATerm o_9;
                    o_9 = t;
                    {
                      ATerm b_20 = NULL;
                      ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
                      t = not_null(j_19);
                      b_20 = t;
                      t = SSL_explode_term(not_null(b_20));
                      d_20 = t;
                      s_18 :
                      if(match_cons(d_20, sym_TCons_2))
                        {
                          e_20 = ATgetArgument(d_20, 0);
                          f_20 = ATgetArgument(d_20, 1);
                          t_18 :
                          if(match_cons(f_20, sym_TCons_2))
                            {
                              g_20 = ATgetArgument(f_20, 0);
                              h_20 = ATgetArgument(f_20, 1);
                              w_18 :
                              if(match_cons(h_20, sym_TNil_0))
                                {
                                  if(r_19 != NULL && r_19 != e_20)
                                    _fail(e_20);
                                  else
                                    r_19 = e_20;
                                  if(a_20 != NULL && a_20 != g_20)
                                    _fail(g_20);
                                  else
                                    a_20 = g_20;
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
                    t = o_9;
                    {
                      ATerm j_20 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      j_20 = t;
                      if(i_20 != NULL && i_20 != j_20)
                        _fail(j_20);
                      else
                        i_20 = j_20;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_19), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  v_20 = t;
  r_20 :
  if(match_cons(v_20, sym_Cons_2))
    {
      w_20 = ATgetArgument(v_20, 0);
      c_21 = ATgetArgument(v_20, 1);
      s_20 :
      if(match_cons(w_20, sym_TCons_2))
        {
          x_20 = ATgetArgument(w_20, 0);
          z_20 = ATgetArgument(w_20, 1);
          t_20 :
          if(match_cons(z_20, sym_TCons_2))
            {
              a_21 = ATgetArgument(z_20, 0);
              b_21 = ATgetArgument(z_20, 1);
              u_20 :
              if(match_cons(b_21, sym_TNil_0))
                {
                  ATerm e_21 = NULL;
                  if(x_20 != NULL && x_20 != a_21)
                    _fail(a_21);
                  else
                    x_20 = a_21;
                  if(e_21 != NULL && e_21 != c_21)
                    _fail(c_21);
                  else
                    e_21 = c_21;
                  t = not_null(e_21);
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
ATerm HdMember_1 (ATerm t, ATerm c_56 (ATerm))
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_Cons_2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      t = c_56(t);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm o_21 = NULL;
          o_21 = t;
          if(k_21 != NULL && k_21 != o_21)
            _fail(o_21);
          else
            k_21 = o_21;
          return(t);
        }
        t = fetch_1(t, d_1);
      }
      t = not_null(l_21);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm p_9 = t;
  if(PushChoice()==0)
    {
      ATerm w_21 = NULL,x_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
      w_21 = t;
      s_21 :
      if(match_cons(w_21, sym_TCons_2))
        {
          x_21 = ATgetArgument(w_21, 0);
          a_22 = ATgetArgument(w_21, 1);
          t_21 :
          if(match_cons(a_22, sym_TCons_2))
            {
              b_22 = ATgetArgument(a_22, 0);
              c_22 = ATgetArgument(a_22, 1);
              u_21 :
              if(match_cons(c_22, sym_TNil_0))
                {
                  t = not_null(x_21);
                  {
                    ATerm i_22 (ATerm t)
                    {
                      ATerm q_9 = t;
                      if(PushChoice()==0)
                        {
                          t = Nil_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = q_9;
                          {
                            ATerm r_9 = t;
                            if(PushChoice()==0)
                              {
                                ATerm e_1 (ATerm t)
                                {
                                  t = not_null(b_22);
                                  return(t);
                                }
                                t = HdMember_1(t, e_1);
                                t = i_22(t);
                                PopChoice();
                              }
                            else
                              {
                                t = r_9;
                                t = Cons_2(t, _id, i_22);
                              }
                          }
                        }
                      return(t);
                    }
                    t = i_22(t);
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
      t = p_9;
      {
        ATerm i_1 (ATerm t)
        {
          ATerm f_22 = NULL;
          f_22 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_22), (ATerm) ATmakeAppl(sym_TNil_0)));
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
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm f_45 (ATerm), ATerm g_45 (ATerm), ATerm h_45 (ATerm))
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  y_22 = t;
  r_22 :
  if(match_cons(y_22, sym_TCons_2))
    {
      z_22 = ATgetArgument(y_22, 0);
      c_23 = ATgetArgument(y_22, 1);
      s_22 :
      if(match_cons(z_22, sym_Cons_2))
        {
          a_23 = ATgetArgument(z_22, 0);
          b_23 = ATgetArgument(z_22, 1);
          t_22 :
          if(match_cons(c_23, sym_TCons_2))
            {
              d_23 = ATgetArgument(c_23, 0);
              e_23 = ATgetArgument(c_23, 1);
              u_22 :
              if(match_cons(e_23, sym_TCons_2))
                {
                  f_23 = ATgetArgument(e_23, 0);
                  g_23 = ATgetArgument(e_23, 1);
                  v_22 :
                  if(match_cons(g_23, sym_TCons_2))
                    {
                      j_23 = ATgetArgument(g_23, 0);
                      k_23 = ATgetArgument(g_23, 1);
                      w_22 :
                      if(match_cons(k_23, sym_TCons_2))
                        {
                          l_23 = ATgetArgument(k_23, 0);
                          m_23 = ATgetArgument(k_23, 1);
                          x_22 :
                          if(match_cons(m_23, sym_TNil_0))
                            {
                              ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,z_23 = NULL,b_24 = NULL,d_24 = NULL;
                              ATerm u_9;
                              u_9 = t;
                              {
                                ATerm w_23 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm x_23 = NULL;
                                  t = f_45(t);
                                  w_23 = t;
                                  if(t_23 != NULL && t_23 != w_23)
                                    _fail(w_23);
                                  else
                                    t_23 = w_23;
                                  t = not_null(t_23);
                                  {
                                    ATerm y_23 = NULL;
                                    t = g_45(t);
                                    x_23 = t;
                                    if(u_23 != NULL && u_23 != x_23)
                                      _fail(x_23);
                                    else
                                      u_23 = x_23;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    t = diff_0(t);
                                    y_23 = t;
                                    if(v_23 != NULL && v_23 != y_23)
                                      _fail(y_23);
                                    else
                                      v_23 = y_23;
                                  }
                                }
                              }
                              t = u_9;
                              {
                                ATerm v_9;
                                v_9 = t;
                                {
                                  ATerm a_24 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = conc_0(t);
                                  a_24 = t;
                                  if(z_23 != NULL && z_23 != a_24)
                                    _fail(a_24);
                                  else
                                    z_23 = a_24;
                                }
                                t = v_9;
                                {
                                  ATerm w_9;
                                  w_9 = t;
                                  {
                                    ATerm c_24 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    t = conc_0(t);
                                    c_24 = t;
                                    if(b_24 != NULL && b_24 != c_24)
                                      _fail(c_24);
                                    else
                                      b_24 = c_24;
                                  }
                                  t = w_9;
                                  {
                                    ATerm e_24 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_23), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = h_45(t);
                                    e_24 = t;
                                    if(d_24 != NULL && d_24 != e_24)
                                      _fail(e_24);
                                    else
                                      d_24 = e_24;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  u_24 = t;
  n_24 :
  if(match_cons(u_24, sym_TCons_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      o_24 :
      if(match_cons(v_24, sym_Nil_0))
        {
          p_24 :
          if(match_cons(w_24, sym_TCons_2))
            {
              x_24 = ATgetArgument(w_24, 0);
              y_24 = ATgetArgument(w_24, 1);
              q_24 :
              if(match_cons(y_24, sym_TCons_2))
                {
                  z_24 = ATgetArgument(y_24, 0);
                  a_25 = ATgetArgument(y_24, 1);
                  r_24 :
                  if(match_cons(a_25, sym_TCons_2))
                    {
                      b_25 = ATgetArgument(a_25, 0);
                      c_25 = ATgetArgument(a_25, 1);
                      s_24 :
                      if(match_cons(c_25, sym_TCons_2))
                        {
                          d_25 = ATgetArgument(c_25, 0);
                          e_25 = ATgetArgument(c_25, 1);
                          t_24 :
                          if(match_cons(e_25, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_25), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  r_25 = t;
  l_25 :
  if(match_cons(r_25, sym_TCons_2))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      m_25 :
      if(match_cons(t_25, sym_TCons_2))
        {
          u_25 = ATgetArgument(t_25, 0);
          v_25 = ATgetArgument(t_25, 1);
          p_25 :
          if(match_cons(v_25, sym_TCons_2))
            {
              w_25 = ATgetArgument(v_25, 0);
              x_25 = ATgetArgument(v_25, 1);
              q_25 :
              if(match_cons(x_25, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
ATerm while_not_2 (ATerm t, ATerm p_66 (ATerm), ATerm q_66 (ATerm))
{
  ATerm d_26 (ATerm t)
  {
    ATerm y_9 = t;
    if(PushChoice()==0)
      {
        t = p_66(t);
        PopChoice();
      }
    else
      {
        t = y_9;
        t = q_66(t);
        t = d_26(t);
      }
    return(t);
  }
  t = d_26(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_66 (ATerm), ATerm t_66 (ATerm), ATerm u_66 (ATerm))
{
  t = s_66(t);
  t = while_not_2(t, t_66, u_66);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm l_45 (ATerm), ATerm m_45 (ATerm), ATerm n_45 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    ATerm z_9 = t;
    if(PushChoice()==0)
      {
        t = GnNext_3(t, l_45, m_45, n_45);
        PopChoice();
      }
    else
      {
        t = z_9;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, s_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm a_46 (ATerm), ATerm b_46 (ATerm), ATerm c_46 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  t = graph_nodes_undef_roots_3(t, a_46, b_46, c_46);
  i_26 = t;
  f_26 :
  if(match_cons(i_26, sym_TCons_2))
    {
      j_26 = ATgetArgument(i_26, 0);
      k_26 = ATgetArgument(i_26, 1);
      g_26 :
      if(match_cons(k_26, sym_TCons_2))
        {
          l_26 = ATgetArgument(k_26, 0);
          m_26 = ATgetArgument(k_26, 1);
          h_26 :
          if(match_cons(m_26, sym_TNil_0))
            t = not_null(j_26);
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
ATerm pack_stratego_1 (ATerm t, ATerm k_67 (ATerm))
{
  ATerm y_26 = NULL;
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_26), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  {
    ATerm u_1 (ATerm t)
    {
      t = Fst_0(t);
      {
        ATerm w_1 (ATerm t)
        {
          ATerm a_27 = NULL;
          ATerm b_27 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = k_67(t);
          b_27 = t;
          if(a_27 != NULL && a_27 != b_27)
            _fail(b_27);
          else
            a_27 = b_27;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), not_null(a_27));
          return(t);
        }
        t = get_module_1(t, w_1);
      }
      return(t);
    }
    ATerm v_1 (ATerm t)
    {
      ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
      c_27 = t;
      u_26 :
      if(match_cons(c_27, sym_TCons_2))
        {
          d_27 = ATgetArgument(c_27, 0);
          e_27 = ATgetArgument(c_27, 1);
          v_26 :
          if(match_cons(e_27, sym_TCons_2))
            {
              f_27 = ATgetArgument(e_27, 0);
              g_27 = ATgetArgument(e_27, 1);
              w_26 :
              if(match_cons(g_27, sym_TCons_2))
                {
                  h_27 = ATgetArgument(g_27, 0);
                  i_27 = ATgetArgument(g_27, 1);
                  x_26 :
                  if(match_cons(i_27, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_27), not_null(h_27));
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
    t = graph_nodes_roots_3(t, u_1, get_stratego_imports_0, v_1);
    t = unzip_0(t);
    {
      ATerm x_1 (ATerm t)
      {
        t = TCons_2(t, flatten_stratego_0, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, x_1);
    }
  }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = SSL_exit(not_null(q_27));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  x_27 = t;
  u_27 :
  if(match_cons(x_27, sym_TCons_2))
    {
      y_27 = ATgetArgument(x_27, 0);
      z_27 = ATgetArgument(x_27, 1);
      v_27 :
      if(match_cons(z_27, sym_TCons_2))
        {
          a_28 = ATgetArgument(z_27, 0);
          b_28 = ATgetArgument(z_27, 1);
          w_27 :
          if(match_cons(b_28, sym_TNil_0))
            {
              ATerm a_10;
              a_10 = t;
              t = SSL_printnl(not_null(y_27), not_null(a_28));
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
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_close_file(not_null(g_28));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm m_28 = NULL,n_28 = NULL,q_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_Cons_2))
    {
      n_28 = ATgetArgument(m_28, 0);
      q_28 = ATgetArgument(m_28, 1);
      {
        ATerm t_28 = NULL;
        ATerm u_28 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = o_61(t);
        u_28 = t;
        if(t_28 != NULL && t_28 != u_28)
          _fail(u_28);
        else
          t_28 = u_28;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_28), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_28), not_null(q_28)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm p_61 (ATerm))
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
        ATerm y_1 (ATerm t)
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
              t = Cons_2(t, _id, y_1);
              t = Sep_1(t, p_61);
            }
          return(t);
        }
        t = Cons_2(t, _id, y_1);
      }
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_51 (ATerm))
{
  ATerm d_10;
  d_10 = t;
  {
    ATerm c_29 = NULL,e_29 = NULL;
    ATerm e_10;
    e_10 = t;
    {
      ATerm d_29 = NULL;
      t = p_51(t);
      d_29 = t;
      if(c_29 != NULL && c_29 != d_29)
        _fail(d_29);
      else
        c_29 = d_29;
    }
    t = e_10;
    {
      ATerm f_29 = NULL;
      f_29 = t;
      if(e_29 != NULL && e_29 != f_29)
        _fail(f_29);
      else
        e_29 = f_29;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_29), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_29), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
    }
  }
  t = d_10;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm w_51 (ATerm))
{
  ATerm f_10;
  f_10 = t;
  t = w_51(t);
  {
    ATerm z_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, z_1);
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
        ATerm e_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, e_2);
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
  ATerm b_30 = NULL,c_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  b_30 = t;
  y_29 :
  if(match_cons(b_30, sym_TCons_2))
    {
      c_30 = ATgetArgument(b_30, 0);
      h_30 = ATgetArgument(b_30, 1);
      z_29 :
      if(match_cons(h_30, sym_TCons_2))
        {
          i_30 = ATgetArgument(h_30, 0);
          j_30 = ATgetArgument(h_30, 1);
          a_30 :
          if(match_cons(j_30, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_30), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm create_dep_file_1 (ATerm t, ATerm e_45 (ATerm))
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  d_31 = t;
  a_31 :
  if(match_cons(d_31, sym_TCons_2))
    {
      e_31 = ATgetArgument(d_31, 0);
      f_31 = ATgetArgument(d_31, 1);
      b_31 :
      if(match_cons(f_31, sym_TCons_2))
        {
          g_31 = ATgetArgument(f_31, 0);
          h_31 = ATgetArgument(f_31, 1);
          c_31 :
          if(match_cons(h_31, sym_TNil_0))
            {
              ATerm k_31 = NULL,l_31 = NULL;
              ATerm m_31 = NULL;
              t = not_null(e_31);
              {
                ATerm n_31 = NULL,p_31 = NULL;
                t = e_45(t);
                m_31 = t;
                if(k_31 != NULL && k_31 != m_31)
                  _fail(m_31);
                else
                  k_31 = m_31;
                {
                  ATerm o_31 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_extension_0(t);
                  o_31 = t;
                  if(n_31 != NULL && n_31 != o_31)
                    _fail(o_31);
                  else
                    n_31 = o_31;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm q_31 = NULL;
                    t = open_file_0(t);
                    p_31 = t;
                    if(l_31 != NULL && l_31 != p_31)
                      _fail(p_31);
                    else
                      l_31 = p_31;
                    {
                      ATerm r_31 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue)), not_null(g_31));
                      {
                        ATerm f_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
                          return(t);
                        }
                        t = separate_by_1(t, f_2);
                        r_31 = t;
                        if(q_31 != NULL && q_31 != r_31)
                          _fail(r_31);
                        else
                          q_31 = r_31;
                      }
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_31), not_null(q_31)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = printnl_0(t);
                      t = not_null(l_31);
                      t = close_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_31), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm fetch_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm x_31 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, l_60, _id);
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
ATerm option_defined_1 (ATerm t, ATerm j_50 (ATerm))
{
  t = fetch_1(t, j_50);
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_66 (ATerm))
{
  ATerm i_10 = t;
  if(PushChoice()==0)
    {
      t = v_66(t);
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
ATerm filter_1 (ATerm t, ATerm d_54 (ATerm))
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
            ATerm h_2 (ATerm t)
            {
              t = filter_1(t, d_54);
              return(t);
            }
            t = Cons_2(t, d_54, h_2);
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
                  t = filter_1(t, d_54);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm f_60 (ATerm))
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
        t = Cons_2(t, f_60, d_33);
      }
    return(t);
  }
  t = d_33(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm k_33 = NULL;
  ATerm j_2 (ATerm t)
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
  t = option_defined_1(t, j_2);
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
ATerm need_help_1 (ATerm t, ATerm e_51 (ATerm))
{
  ATerm k_2 (ATerm t)
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
  t = option_defined_1(t, k_2);
  t = e_51(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm e_50 (ATerm), ATerm f_50 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = ArgOption_3(t, e_50, f_50, l_2);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm t_49 (ATerm), ATerm u_49 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, t_49, u_49, m_2);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  a_34 = t;
  y_33 :
  if(match_string(a_34, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(a_34, sym_Cons_2))
        {
          b_34 = ATgetArgument(a_34, 0);
          i_34 = ATgetArgument(a_34, 1);
          z_33 :
          if(match_cons(i_34, sym_Cons_2))
            {
              j_34 = ATgetArgument(i_34, 0);
              k_34 = ATgetArgument(i_34, 1);
              {
                ATerm o_34 = NULL;
                ATerm o_10;
                o_10 = t;
                t = not_null(b_34);
                t = g_0(t);
                t = o_10;
                {
                  ATerm p_34 = NULL;
                  t = not_null(j_34);
                  t = h_0(t);
                  p_34 = t;
                  if(o_34 != NULL && o_34 != p_34)
                    _fail(p_34);
                  else
                    o_34 = p_34;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_34), not_null(k_34));
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
  ATerm p_10 = t;
  if(PushChoice()==0)
    {
      ATerm n_2 (ATerm t)
      {
        ATerm r_35 = NULL;
        r_35 = t;
        t_34 :
        if(!(match_string(r_35, "-S")))
          {
            if(!(match_string(r_35, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, n_2, k_3, l_3);
      PopChoice();
    }
  else
    {
      t = p_10;
      {
        ATerm q_10 = t;
        if(PushChoice()==0)
          {
            ATerm m_3 (ATerm t)
            {
              ATerm s_35 = NULL;
              s_35 = t;
              u_34 :
              if(!(match_string(s_35, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, m_3, n_3, o_3);
            PopChoice();
          }
        else
          {
            t = q_10;
            {
              ATerm r_10 = t;
              if(PushChoice()==0)
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm t_35 = NULL;
                    t_35 = t;
                    v_34 :
                    if(!(match_string(t_35, "-v")))
                      {
                        if(!(match_string(t_35, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm u_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm v_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, p_3, u_3, v_3);
                  PopChoice();
                }
              else
                {
                  t = r_10;
                  {
                    ATerm s_10 = t;
                    if(PushChoice()==0)
                      {
                        ATerm w_3 (ATerm t)
                        {
                          ATerm u_35 = NULL;
                          u_35 = t;
                          w_34 :
                          if(!(match_string(u_35, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm x_3 (ATerm t)
                        {
                          ATerm v_35 = NULL;
                          ATerm w_35 = NULL;
                          w_35 = t;
                          if(v_35 != NULL && v_35 != w_35)
                            _fail(w_35);
                          else
                            v_35 = w_35;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(v_35));
                          return(t);
                        }
                        ATerm a_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, w_3, x_3, a_4);
                        PopChoice();
                      }
                    else
                      {
                        t = s_10;
                        {
                          ATerm t_10 = t;
                          if(PushChoice()==0)
                            {
                              ATerm b_4 (ATerm t)
                              {
                                ATerm x_35 = NULL;
                                x_35 = t;
                                l_35 :
                                if(!(match_string(x_35, "-i")))
                                  {
                                    if(!(match_string(x_35, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm c_4 (ATerm t)
                              {
                                ATerm y_35 = NULL;
                                ATerm z_35 = NULL;
                                z_35 = t;
                                if(y_35 != NULL && y_35 != z_35)
                                  _fail(z_35);
                                else
                                  y_35 = z_35;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_35));
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, b_4, c_4, o_4);
                              PopChoice();
                            }
                          else
                            {
                              t = t_10;
                              {
                                ATerm u_10 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm r_4 (ATerm t)
                                    {
                                      ATerm a_36 = NULL;
                                      a_36 = t;
                                      n_35 :
                                      if(!(match_string(a_36, "-o")))
                                        {
                                          if(!(match_string(a_36, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm s_4 (ATerm t)
                                    {
                                      ATerm b_36 = NULL;
                                      ATerm c_36 = NULL;
                                      c_36 = t;
                                      if(b_36 != NULL && b_36 != c_36)
                                        _fail(c_36);
                                      else
                                        b_36 = c_36;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_36));
                                      return(t);
                                    }
                                    ATerm t_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, r_4, s_4, t_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_10;
                                    {
                                      ATerm v_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm u_4 (ATerm t)
                                          {
                                            ATerm d_36 = NULL;
                                            d_36 = t;
                                            p_35 :
                                            if(!(match_string(d_36, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm x_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm y_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, u_4, x_4, y_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = v_10;
                                          {
                                            ATerm a_5 (ATerm t)
                                            {
                                              ATerm e_36 = NULL;
                                              e_36 = t;
                                              q_35 :
                                              if(!(match_string(e_36, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm b_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm c_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, a_5, b_5, c_5);
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
  ATerm j_36 = NULL;
  j_36 = t;
  t = SSL_table_destroy(not_null(j_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_60 (ATerm))
{
  ATerm m_36 (ATerm t)
  {
    ATerm y_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, m_36);
        PopChoice();
      }
    else
      {
        t = y_10;
        t = Nil_0(t);
        t = r_60(t);
      }
    return(t);
  }
  t = m_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = z_10;
      {
        ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
        p_36 = t;
        o_36 :
        if(match_cons(p_36, sym_Cons_2))
          {
            q_36 = ATgetArgument(p_36, 0);
            r_36 = ATgetArgument(p_36, 1);
            t = not_null(q_36);
            {
              ATerm d_5 (ATerm t)
              {
                t = not_null(r_36);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, d_5);
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
ATerm long_description_1 (ATerm t, ATerm l_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_60 (ATerm))
{
  ATerm w_36 (ATerm t)
  {
    ATerm a_11 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = a_11;
        t = Cons_2(t, d_60, w_36);
      }
    return(t);
  }
  t = w_36(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
  c_37 = t;
  y_36 :
  if(match_cons(c_37, sym_TCons_2))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      z_36 :
      if(match_cons(d_37, sym_Nil_0))
        {
          a_37 :
          if(match_cons(e_37, sym_TCons_2))
            {
              f_37 = ATgetArgument(e_37, 0);
              g_37 = ATgetArgument(e_37, 1);
              b_37 :
              if(match_cons(g_37, sym_TNil_0))
                t = not_null(f_37);
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
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  o_37 = t;
  k_37 :
  if(match_cons(o_37, sym_TCons_2))
    {
      p_37 = ATgetArgument(o_37, 0);
      s_37 = ATgetArgument(o_37, 1);
      l_37 :
      if(match_cons(p_37, sym_Cons_2))
        {
          q_37 = ATgetArgument(p_37, 0);
          r_37 = ATgetArgument(p_37, 1);
          m_37 :
          if(match_cons(s_37, sym_TCons_2))
            {
              t_37 = ATgetArgument(s_37, 0);
              u_37 = ATgetArgument(s_37, 1);
              n_37 :
              if(match_cons(u_37, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_37), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_37), not_null(t_37)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm y_65 (ATerm), ATerm z_65 (ATerm))
{
  ATerm z_37 (ATerm t)
  {
    ATerm b_11 = t;
    if(PushChoice()==0)
      {
        t = y_65(t);
        t = z_37(t);
        PopChoice();
      }
    else
      {
        t = b_11;
        t = z_65(t);
      }
    return(t);
  }
  t = z_37(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_66 (ATerm))
{
  t = repeat_2(t, b_66, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm b_38 = NULL;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_44 (ATerm))
{
  ATerm h_38 = NULL,i_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym_Program_1))
    {
      i_38 = ATgetArgument(h_38, 0);
      {
        ATerm k_38 = NULL;
        t = not_null(i_38);
        t = f_44(t);
        k_38 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_38));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm s_38 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      ATerm t_38 = NULL;
      t_38 = t;
      if(s_38 != NULL && s_38 != t_38)
        _fail(t_38);
      else
        s_38 = t_38;
      return(t);
    }
    t = Program_1(t, g_5);
    return(t);
  }
  t = option_defined_1(t, e_5);
  {
    ATerm l_5 (ATerm t)
    {
      ATerm u_38 = NULL;
      ATerm v_38 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm m_5 (ATerm t)
        {
          t = not_null(s_38);
          return(t);
        }
        t = short_description_1(t, m_5);
        t = concat_strings_0(t);
        v_38 = t;
        if(u_38 != NULL && u_38 != v_38)
          _fail(v_38);
        else
          u_38 = v_38;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, l_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm w_38 = NULL;
        w_38 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_38), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, n_5);
      {
        ATerm o_5 (ATerm t)
        {
          ATerm y_38 = NULL;
          ATerm z_38 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm t_5 (ATerm t)
            {
              t = not_null(s_38);
              return(t);
            }
            t = long_description_1(t, t_5);
            t = concat_strings_0(t);
            z_38 = t;
            if(y_38 != NULL && y_38 != z_38)
              _fail(z_38);
            else
              y_38 = z_38;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_38), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, o_5);
      }
    }
  }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_44 (ATerm))
{
  ATerm h_39 = NULL,i_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_cons(h_39, sym_Undefined_1))
    {
      i_39 = ATgetArgument(h_39, 0);
      {
        ATerm k_39 = NULL;
        t = not_null(i_39);
        t = g_44(t);
        k_39 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_39));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  o_39 :
  if(!(match_cons(p_39, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_49 (ATerm))
{
  ATerm r_39 = NULL;
  ATerm s_39 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = p_49(t);
  s_39 = t;
  if(r_39 != NULL && r_39 != s_39)
    _fail(s_39);
  else
    r_39 = s_39;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_39), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
  y_39 = t;
  x_39 :
  if(match_string(y_39, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(y_39, sym_Cons_2))
        {
          z_39 = ATgetArgument(y_39, 0);
          a_40 = ATgetArgument(y_39, 1);
          {
            ATerm d_40 = NULL;
            ATerm c_11;
            c_11 = t;
            t = not_null(z_39);
            t = d_0(t);
            t = c_11;
            {
              ATerm e_40 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              e_40 = t;
              if(d_40 != NULL && d_40 != e_40)
                _fail(e_40);
              else
                d_40 = e_40;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_40), not_null(a_40));
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
  ATerm u_5 (ATerm t)
  {
    ATerm j_40 = NULL;
    j_40 = t;
    i_40 :
    if(!(match_string(j_40, "--help")))
      {
        if(!(match_string(j_40, "-h")))
          {
            if(!(match_string(j_40, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, u_5, v_5, w_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym_Cons_2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_40)), not_null(o_40));
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm t_40 = NULL;
  t_40 = t;
  s_40 :
  if(!(match_cons(t_40, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_49 (ATerm))
{
  ATerm d_11;
  d_11 = t;
  {
    ATerm y_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = n_49(t);
      return(t);
    }
    t = try_1(t, y_5);
  }
  t = d_11;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm v_40 = NULL;
      v_40 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_40));
      return(t);
    }
    ATerm a_6 (ATerm t)
    {
      ATerm e_11 = t;
      if(PushChoice()==0)
        {
          ATerm f_11 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = f_11;
              t = n_49(t);
              t = Cons_2(t, _id, a_6);
            }
          PopChoice();
        }
      else
        {
          t = e_11;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_5, a_6);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_49 (ATerm))
{
  ATerm a_41 = NULL;
  ATerm g_11;
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = g_11;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm h_11 = t;
      if(PushChoice()==0)
        {
          t = m_49(t);
          PopChoice();
        }
      else
        {
          t = h_11;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_6);
    {
      ATerm l_6 (ATerm t)
      {
        ATerm i_11 = t;
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
            t = i_11;
            {
              ATerm m_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm b_41 = NULL;
                  b_41 = t;
                  if(a_41 != NULL && a_41 != b_41)
                    _fail(b_41);
                  else
                    a_41 = b_41;
                  return(t);
                }
                t = Undefined_1(t, q_6);
                return(t);
              }
              t = option_defined_1(t, m_6);
              {
                ATerm j_11;
                j_11 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_41), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = j_11;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, l_6);
      {
        ATerm s_11;
        s_11 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = s_11;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm t_11 = t;
    if(PushChoice()==0)
      {
        t = io_options_0(t);
        PopChoice();
      }
    else
      {
        t = t_11;
        {
          ATerm u_11 = t;
          if(PushChoice()==0)
            {
              ATerm t_6 (ATerm t)
              {
                ATerm k_41 = NULL;
                k_41 = t;
                d_41 :
                if(!(match_string(k_41, "-I")))
                  _fail(t);
                return(t);
              }
              ATerm u_6 (ATerm t)
              {
                ATerm l_41 = NULL;
                l_41 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(l_41));
                return(t);
              }
              t = ArgOption_2(t, t_6, u_6);
              PopChoice();
            }
          else
            {
              t = u_11;
              {
                ATerm v_11 = t;
                if(PushChoice()==0)
                  {
                    ATerm w_6 (ATerm t)
                    {
                      ATerm n_41 = NULL;
                      n_41 = t;
                      f_41 :
                      if(!(match_string(n_41, "-nodep")))
                        _fail(t);
                      return(t);
                    }
                    ATerm x_6 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_NoDependency_0);
                      return(t);
                    }
                    t = Option_2(t, w_6, x_6);
                    PopChoice();
                  }
                else
                  {
                    t = v_11;
                    {
                      ATerm w_11 = t;
                      if(PushChoice()==0)
                        {
                          ATerm y_6 (ATerm t)
                          {
                            ATerm o_41 = NULL;
                            o_41 = t;
                            g_41 :
                            if(!(match_string(o_41, "-dep")))
                              _fail(t);
                            return(t);
                          }
                          ATerm h_7 (ATerm t)
                          {
                            ATerm p_41 = NULL;
                            p_41 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(p_41));
                            return(t);
                          }
                          t = ArgOption_2(t, y_6, h_7);
                          PopChoice();
                        }
                      else
                        {
                          t = w_11;
                          {
                            ATerm i_7 (ATerm t)
                            {
                              ATerm r_41 = NULL;
                              r_41 = t;
                              i_41 :
                              if(!(match_string(r_41, "--prefix")))
                                _fail(t);
                              return(t);
                            }
                            ATerm j_7 (ATerm t)
                            {
                              ATerm s_41 = NULL;
                              s_41 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(s_41)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm k_7 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, k_7);
                              }
                              t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(s_41));
                              return(t);
                            }
                            t = ArgOption_2(t, i_7, j_7);
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
  t = parse_options_1(t, r_6);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm c_45 (ATerm, ATerm (ATerm)), ATerm d_45 (ATerm))
{
  ATerm q_42 = NULL;
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,b_43 = NULL;
  t = pack_module_options_0(t);
  q_42 = t;
  {
    ATerm p_7 (ATerm t)
    {
      t = need_help_1(t, pack_modules_usage_0);
      return(t);
    }
    t = try_1(t, p_7);
    {
      ATerm q_7 (ATerm t)
      {
        ATerm r_7 (ATerm t)
        {
          ATerm w_42 = NULL,x_42 = NULL;
          w_42 = t;
          c_42 :
          if(match_cons(w_42, sym_Program_1))
            {
              x_42 = ATgetArgument(w_42, 0);
              if(s_42 != NULL && s_42 != x_42)
                _fail(x_42);
              else
                s_42 = x_42;
            }
          else
            {
              if(match_cons(w_42, sym_Input_1))
                {
                  x_42 = ATgetArgument(w_42, 0);
                  if(t_42 != NULL && t_42 != x_42)
                    _fail(x_42);
                  else
                    t_42 = x_42;
                }
              else
                {
                  if(match_cons(w_42, sym_Output_1))
                    {
                      x_42 = ATgetArgument(w_42, 0);
                      if(u_42 != NULL && u_42 != x_42)
                        _fail(x_42);
                      else
                        u_42 = x_42;
                    }
                  else
                    {
                      if(match_cons(w_42, sym_Dependency_1))
                        {
                          x_42 = ATgetArgument(w_42, 0);
                          if(v_42 != NULL && v_42 != x_42)
                            _fail(x_42);
                          else
                            v_42 = x_42;
                        }
                      else
                        _fail(t);
                    }
                }
            }
          return(t);
        }
        t = try_1(t, r_7);
        return(t);
      }
      t = list_1(t, q_7);
      {
        ATerm d_43 = NULL;
        ATerm s_7 (ATerm t)
        {
          ATerm y_42 = NULL,z_42 = NULL;
          y_42 = t;
          e_42 :
          if(match_cons(y_42, sym_Include_1))
            {
              z_42 = ATgetArgument(y_42, 0);
              t = not_null(z_42);
            }
          else
            _fail(t);
          return(t);
        }
        t = filter_1(t, s_7);
        b_43 = t;
        {
          ATerm f_43 = NULL;
          ATerm x_11 = t;
          if(PushChoice()==0)
            {
              t = not_null(t_42);
              PopChoice();
            }
          else
            {
              t = x_11;
              t = (ATerm) ATmakeAppl(sym_stdin_0);
            }
          d_43 = t;
          {
            ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
            ATerm y_11 = t;
            if(PushChoice()==0)
              {
                t = not_null(u_42);
                PopChoice();
              }
            else
              {
                t = y_11;
                t = (ATerm) ATmakeAppl(sym_stdout_0);
              }
            f_43 = t;
            t = not_null(d_43);
            {
              ATerm b_8 (ATerm t)
              {
                t = not_null(b_43);
                return(t);
              }
              t = c_45(t, b_8);
              h_43 = t;
              n_42 :
              if(match_cons(h_43, sym_TCons_2))
                {
                  i_43 = ATgetArgument(h_43, 0);
                  j_43 = ATgetArgument(h_43, 1);
                  o_42 :
                  if(match_cons(j_43, sym_TCons_2))
                    {
                      k_43 = ATgetArgument(j_43, 0);
                      l_43 = ATgetArgument(j_43, 1);
                      p_42 :
                      if(match_cons(l_43, sym_TNil_0))
                        {
                          ATerm p_43 = NULL,s_43 = NULL;
                          t = not_null(q_42);
                          {
                            ATerm z_11 = t;
                            if(PushChoice()==0)
                              {
                                ATerm c_8 (ATerm t)
                                {
                                  ATerm o_43 = NULL;
                                  o_43 = t;
                                  j_42 :
                                  if(!(match_cons(o_43, sym_Binary_0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = option_defined_1(t, c_8);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_43), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToBinaryFile_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = z_11;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_43), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToTextFile_0(t);
                              }
                            {
                              ATerm d_8 (ATerm t)
                              {
                                ATerm r_43 = NULL;
                                ATerm a_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = not_null(v_42);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_12;
                                    {
                                      ATerm b_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = not_null(q_42);
                                          {
                                            ATerm e_8 (ATerm t)
                                            {
                                              ATerm q_43 = NULL;
                                              q_43 = t;
                                              k_42 :
                                              if(!(match_cons(q_43, sym_NoDependency_0)))
                                                _fail(t);
                                              return(t);
                                            }
                                            t = option_defined_1(t, e_8);
                                          }
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        t = b_12;
                                      t = d_45(t);
                                    }
                                  }
                                r_43 = t;
                                if(p_43 != NULL && p_43 != r_43)
                                  _fail(r_43);
                                else
                                  p_43 = r_43;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_43), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm f_8 (ATerm t)
                                  {
                                    t = not_null(p_43);
                                    return(t);
                                  }
                                  t = create_dep_file_1(t, f_8);
                                }
                                return(t);
                              }
                              t = try_1(t, d_8);
                              t = dtime_0(t);
                              s_43 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_42), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_43), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  ATerm c_12;
  c_12 = t;
  {
    ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,z_44 = NULL,b_45 = NULL,i_45 = NULL,j_45 = NULL;
    v_44 = t;
    k_44 :
    if(match_cons(v_44, sym_TCons_2))
      {
        w_44 = ATgetArgument(v_44, 0);
        x_44 = ATgetArgument(v_44, 1);
        l_44 :
        if(match_cons(x_44, sym_TCons_2))
          {
            z_44 = ATgetArgument(x_44, 0);
            b_45 = ATgetArgument(x_44, 1);
            o_44 :
            if(match_cons(b_45, sym_TCons_2))
              {
                i_45 = ATgetArgument(b_45, 0);
                j_45 = ATgetArgument(b_45, 1);
                p_44 :
                if(match_cons(j_45, sym_TNil_0))
                  {
                    if(s_44 != NULL && s_44 != w_44)
                      _fail(w_44);
                    else
                      s_44 = w_44;
                    if(t_44 != NULL && t_44 != z_44)
                      _fail(z_44);
                    else
                      t_44 = z_44;
                    if(u_44 != NULL && u_44 != i_45)
                      _fail(i_45);
                    else
                      u_44 = i_45;
                    t = SSL_table_put(not_null(s_44), not_null(t_44), not_null(u_44));
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
  t = c_12;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  s_45 = t;
  p_45 :
  if(match_cons(s_45, sym_TCons_2))
    {
      t_45 = ATgetArgument(s_45, 0);
      u_45 = ATgetArgument(s_45, 1);
      q_45 :
      if(match_cons(u_45, sym_TCons_2))
        {
          v_45 = ATgetArgument(u_45, 0);
          w_45 = ATgetArgument(u_45, 1);
          r_45 :
          if(match_cons(w_45, sym_TNil_0))
            t = SSL_table_get(not_null(t_45), not_null(v_45));
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
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  j_46 = t;
  f_46 :
  if(match_cons(j_46, sym_TCons_2))
    {
      k_46 = ATgetArgument(j_46, 0);
      l_46 = ATgetArgument(j_46, 1);
      g_46 :
      if(match_cons(l_46, sym_TCons_2))
        {
          m_46 = ATgetArgument(l_46, 0);
          n_46 = ATgetArgument(l_46, 1);
          h_46 :
          if(match_cons(n_46, sym_TCons_2))
            {
              o_46 = ATgetArgument(n_46, 0);
              p_46 = ATgetArgument(n_46, 1);
              i_46 :
              if(match_cons(p_46, sym_TNil_0))
                {
                  ATerm d_12;
                  d_12 = t;
                  {
                    ATerm t_46 = NULL;
                    ATerm u_46 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_46), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_46), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm e_12 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = e_12;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      u_46 = t;
                      if(t_46 != NULL && t_46 != u_46)
                        _fail(u_46);
                      else
                        t_46 = u_46;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_46), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_46), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_46), not_null(t_46)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = d_12;
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
ATerm assert_1 (ATerm t, ATerm y_44 (ATerm))
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  e_47 = t;
  b_47 :
  if(match_cons(e_47, sym_TCons_2))
    {
      f_47 = ATgetArgument(e_47, 0);
      g_47 = ATgetArgument(e_47, 1);
      c_47 :
      if(match_cons(g_47, sym_TCons_2))
        {
          h_47 = ATgetArgument(g_47, 0);
          i_47 = ATgetArgument(g_47, 1);
          d_47 :
          if(match_cons(i_47, sym_TNil_0))
            {
              ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
              ATerm f_12;
              f_12 = t;
              {
                ATerm o_47 = NULL;
                ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
                t = y_44(t);
                o_47 = t;
                if(l_47 != NULL && l_47 != o_47)
                  _fail(o_47);
                else
                  l_47 = o_47;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_47), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_47), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_47), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm g_12 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_47), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = g_12;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  p_47 = t;
                  a_47 :
                  if(match_cons(p_47, sym_Cons_2))
                    {
                      q_47 = ATgetArgument(p_47, 0);
                      r_47 = ATgetArgument(p_47, 1);
                      if(m_47 != NULL && m_47 != q_47)
                        _fail(q_47);
                      else
                        m_47 = q_47;
                      if(n_47 != NULL && n_47 != r_47)
                        _fail(r_47);
                      else
                        n_47 = r_47;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_47), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_47), not_null(m_47)), not_null(n_47)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = f_12;
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
  ATerm w_47 = NULL;
  w_47 = t;
  t = SSL_implode_string(not_null(w_47));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  t = SSL_explode_string(not_null(a_48));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm h_12 = t;
    if(PushChoice()==0)
      {
        ATerm f_48 (ATerm t)
        {
          ATerm i_12 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, f_48);
              PopChoice();
            }
          else
            {
              t = i_12;
              {
                ATerm h_8 (ATerm t)
                {
                  ATerm e_48 = NULL;
                  e_48 = t;
                  d_48 :
                  if(!(match_int(e_48, 47)))
                    _fail(t);
                  return(t);
                }
                ATerm k_8 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = Cons_2(t, h_8, k_8);
              }
            }
          return(t);
        }
        t = f_48(t);
        PopChoice();
      }
    else
      {
        t = h_12;
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_44 (ATerm), ATerm r_44 (ATerm))
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  j_48 :
  if(match_cons(k_48, sym_Cons_2))
    {
      l_48 = ATgetArgument(k_48, 0);
      m_48 = ATgetArgument(k_48, 1);
      {
        ATerm p_48 = NULL;
        t = not_null(l_48);
        {
          ATerm r_48 = NULL;
          t = q_44(t);
          p_48 = t;
          t = not_null(m_48);
          t = r_44(t);
          r_48 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_48), not_null(r_48));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm x_48 = NULL;
  ATerm j_12;
  j_12 = t;
  {
    ATerm l_8 (ATerm t)
    {
      ATerm y_48 = NULL;
      t = get_path_0(t);
      y_48 = t;
      if(x_48 != NULL && x_48 != y_48)
        _fail(y_48);
      else
        x_48 = y_48;
      return(t);
    }
    t = Cons_2(t, l_8, _id);
    {
      ATerm k_12;
      k_12 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(x_48)), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm m_8 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
          return(t);
        }
        t = assert_1(t, m_8);
      }
      t = k_12;
    }
  }
  t = j_12;
  t = pack_modules_2(t, pack_stratego_1, basename_0);
  return(t);
}
