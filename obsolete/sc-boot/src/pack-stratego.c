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
ATerm basename_1 (ATerm, ATerm z_51 (ATerm));
ATerm basename_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm y_43 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm k_44 (ATerm), ATerm l_44 (ATerm));
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
ATerm guarantee_extension_1 (ATerm, ATerm b_52 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm y_44 (ATerm));
ATerm Prefix_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_pid_0 (ATerm);
ATerm parse_mod_0 (ATerm);
ATerm get_module_1 (ATerm, ATerm g_66 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm i_55 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm zip_1 (ATerm, ATerm t_57 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm d_45 (ATerm), ATerm e_45 (ATerm), ATerm f_45 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm for_3 (ATerm, ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm j_45 (ATerm), ATerm k_45 (ATerm), ATerm l_45 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm y_45 (ATerm), ATerm z_45 (ATerm), ATerm a_46 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm f_66 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm p_60 (ATerm));
ATerm separate_by_1 (ATerm, ATerm q_60 (ATerm));
ATerm split_2 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm));
ATerm debug_1 (ATerm, ATerm x_50 (ATerm));
ATerm obsolete_1 (ATerm, ATerm e_51 (ATerm));
ATerm open_file_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_59 (ATerm));
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm e_59 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm c_45 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_49 (ATerm));
ATerm try_1 (ATerm, ATerm u_65 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm filter_1 (ATerm, ATerm j_53 (ATerm));
ATerm list_1 (ATerm, ATerm g_59 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_44 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_50 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm m_49 (ATerm), ATerm n_49 (ATerm));
ATerm Option_2 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_49 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm a_45 (ATerm, ATerm (ATerm)), ATerm b_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm w_44 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_44 (ATerm), ATerm p_44 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm z_51 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm e_0 (ATerm t)
    {
      ATerm s_0 = t;
      if(PushChoice()==0)
        {
          t = Cons_2(t, _id, e_0);
          PopChoice();
        }
      else
        {
          t = s_0;
          {
            ATerm t_7 = t;
            if(PushChoice()==0)
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm q_0 = NULL;
                  q_0 = t;
                  c_0 :
                  if(!(match_int(q_0, 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, f_0, _id);
                PopChoice();
              }
            else
              {
                t = t_7;
                {
                  ATerm g_0 (ATerm t)
                  {
                    ATerm r_0 = NULL;
                    r_0 = t;
                    d_0 :
                    if(!(match_int(r_0, 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2(t, g_0, z_51);
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, e_0);
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
  ATerm u_0 = NULL;
  u_0 = t;
  t_0 :
  if(!(match_cons(u_0, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm y_43 (ATerm))
{
  ATerm y_0 = NULL,z_0 = NULL;
  y_0 = t;
  x_0 :
  if(match_cons(y_0, sym_Imports_1))
    {
      z_0 = ATgetArgument(y_0, 0);
      {
        ATerm b_1 = NULL;
        t = not_null(z_0);
        t = y_43(t);
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym_Imports_1, not_null(b_1));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm flatten_stratego_0 (ATerm t)
{
  ATerm l_1 = NULL;
  ATerm h_0 (ATerm t)
  {
    ATerm i_1 = NULL,j_1 = NULL;
    i_1 = t;
    g_1 :
    if(match_cons(i_1, sym_Specification_1))
      {
        j_1 = ATgetArgument(i_1, 0);
        t = not_null(j_1);
        {
          ATerm i_0 (ATerm t)
          {
            ATerm b_8 = t;
            if(PushChoice()==0)
              {
                t = Imports_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              t = b_8;
            return(t);
          }
          t = filter_1(t, i_0);
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, h_0);
  t = concat_0(t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_1));
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL;
  t_1 = t;
  s_1 :
  if(match_cons(t_1, sym_TCons_2))
    {
      u_1 = ATgetArgument(t_1, 0);
      v_1 = ATgetArgument(t_1, 1);
      {
        ATerm y_1 = NULL;
        t = not_null(u_1);
        {
          ATerm a_2 = NULL;
          t = k_44(t);
          y_1 = t;
          t = not_null(v_1);
          t = l_44(t);
          a_2 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_1), not_null(a_2));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  p_2 = t;
  g_2 :
  if(match_cons(p_2, sym_TCons_2))
    {
      q_2 = ATgetArgument(p_2, 0);
      v_2 = ATgetArgument(p_2, 1);
      h_2 :
      if(match_cons(q_2, sym_TCons_2))
        {
          r_2 = ATgetArgument(q_2, 0);
          s_2 = ATgetArgument(q_2, 1);
          i_2 :
          if(match_cons(s_2, sym_TCons_2))
            {
              t_2 = ATgetArgument(s_2, 0);
              u_2 = ATgetArgument(s_2, 1);
              j_2 :
              if(match_cons(u_2, sym_TNil_0))
                {
                  k_2 :
                  if(match_cons(v_2, sym_TCons_2))
                    {
                      w_2 = ATgetArgument(v_2, 0);
                      b_3 = ATgetArgument(v_2, 1);
                      l_2 :
                      if(match_cons(w_2, sym_TCons_2))
                        {
                          x_2 = ATgetArgument(w_2, 0);
                          y_2 = ATgetArgument(w_2, 1);
                          m_2 :
                          if(match_cons(y_2, sym_TCons_2))
                            {
                              z_2 = ATgetArgument(y_2, 0);
                              a_3 = ATgetArgument(y_2, 1);
                              n_2 :
                              if(match_cons(a_3, sym_TNil_0))
                                {
                                  o_2 :
                                  if(match_cons(b_3, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_2), not_null(x_2)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_2), not_null(z_2)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
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
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
  j_3 = t;
  i_3 :
  if(match_cons(j_3, sym_Cons_2))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_3), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym_Nil_0))
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
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
  a_4 = t;
  w_3 :
  if(match_cons(a_4, sym_TCons_2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      x_3 :
      if(match_cons(c_4, sym_TCons_2))
        {
          d_4 = ATgetArgument(c_4, 0);
          f_4 = ATgetArgument(c_4, 1);
          y_3 :
          if(match_cons(d_4, sym_Specification_1))
            {
              e_4 = ATgetArgument(d_4, 0);
              z_3 :
              if(match_cons(f_4, sym_TNil_0))
                {
                  t = not_null(e_4);
                  {
                    ATerm j_0 (ATerm t)
                    {
                      ATerm h_4 = NULL,i_4 = NULL;
                      h_4 = t;
                      v_3 :
                      if(match_cons(h_4, sym_Imports_1))
                        {
                          i_4 = ATgetArgument(h_4, 0);
                          t = not_null(i_4);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = filter_1(t, j_0);
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
  ATerm f_8;
  f_8 = t;
  {
    ATerm k_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, k_0, _id);
    t = printnl_0(t);
  }
  t = f_8;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm g_8;
  g_8 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = g_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  t = SSL_ReadFromFile(not_null(n_4));
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  s_4 = t;
  r_4 :
  if(match_cons(s_4, sym_Cons_2))
    {
      t_4 = ATgetArgument(s_4, 0);
      u_4 = ATgetArgument(s_4, 1);
      t = not_null(u_4);
    }
  else
    _fail(t);
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  t = SSL_open_file(not_null(z_4), (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue)));
  t = SSL_close_file(not_null(z_4));
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
  i_5 = t;
  f_5 :
  if(match_cons(i_5, sym_TCons_2))
    {
      j_5 = ATgetArgument(i_5, 0);
      k_5 = ATgetArgument(i_5, 1);
      g_5 :
      if(match_cons(k_5, sym_TCons_2))
        {
          l_5 = ATgetArgument(k_5, 0);
          m_5 = ATgetArgument(k_5, 1);
          h_5 :
          if(match_cons(m_5, sym_TNil_0))
            {
              t = not_null(l_5);
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm h_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
                      p_5 = t;
                      e_5 :
                      if(match_cons(p_5, sym_Cons_2))
                        {
                          q_5 = ATgetArgument(p_5, 0);
                          r_5 = ATgetArgument(p_5, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_5), (ATerm) ATmakeAppl(sym_Nil_0))));
                          t = concat_strings_0(t);
                          t = file_exists_0(t);
                        }
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = h_8;
                      t = Tl_0(t);
                      t = u_5(t);
                    }
                  return(t);
                }
                t = u_5(t);
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
ATerm guarantee_extension_1 (ATerm t, ATerm b_52 (ATerm))
{
  t = basename_0(t);
  {
    ATerm l_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = b_52(t);
      return(t);
    }
    t = split_2(t, _id, l_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  {
    ATerm i_8;
    i_8 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue)), not_null(x_5)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = call_0(t);
    t = i_8;
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
  e_6 = t;
  b_6 :
  if(match_cons(e_6, sym_TCons_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      c_6 :
      if(match_cons(g_6, sym_TCons_2))
        {
          h_6 = ATgetArgument(g_6, 0);
          i_6 = ATgetArgument(g_6, 1);
          d_6 :
          if(match_cons(i_6, sym_TNil_0))
            t = SSL_call(not_null(f_6), not_null(h_6));
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
  ATerm m_0 (ATerm t)
  {
    t = TCons_2(t, explode_string_0, TNil_0);
    return(t);
  }
  t = TCons_2(t, explode_string_0, m_0);
  t = conc_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym_Cons_2))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      t = not_null(p_6);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  y_6 = t;
  v_6 :
  if(match_cons(y_6, sym_TCons_2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      w_6 :
      if(match_cons(a_7, sym_TCons_2))
        {
          b_7 = ATgetArgument(a_7, 0);
          c_7 = ATgetArgument(a_7, 1);
          x_6 :
          if(match_cons(c_7, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_7), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm y_44 (ATerm))
{
  ATerm i_7 = NULL;
  ATerm k_7 = NULL;
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = y_44(t);
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_7), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm Prefix_0 (ATerm t)
{
  ATerm x_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym_TNil_0))
    {
      ATerm j_8 = t;
      if(PushChoice()==0)
        {
          ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_0);
          {
            ATerm n_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, n_0);
            y_7 = t;
            r_7 :
            if(match_cons(y_7, sym_Defined_2))
              {
                z_7 = ATgetArgument(y_7, 0);
                a_8 = ATgetArgument(y_7, 1);
                s_7 :
                if(match_string(z_7, "a_0"))
                  t = not_null(a_8);
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
          t = j_8;
          {
            ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_0);
            {
              ATerm o_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, o_0);
              c_8 = t;
              u_7 :
              if(match_cons(c_8, sym_Defined_2))
                {
                  d_8 = ATgetArgument(c_8, 0);
                  e_8 = ATgetArgument(c_8, 1);
                  v_7 :
                  if(match_string(d_8, "b_0"))
                    t = not_null(e_8);
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
  ATerm l_8 = NULL;
  l_8 = t;
  t = SSL_int_to_string(not_null(l_8));
  return(t);
}
ATerm get_pid_0 (ATerm t)
{
  t = SSL_get_pid();
  return(t);
}
ATerm parse_mod_0 (ATerm t)
{
  ATerm u_8 = NULL;
  ATerm w_8 = NULL;
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = get_pid_0(t);
  {
    ATerm y_8 = NULL;
    t = int_to_string_0(t);
    w_8 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_8), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm a_9 = NULL;
      t = conc_strings_0(t);
      y_8 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm c_9 = NULL;
        t = Prefix_0(t);
        a_9 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("parse-mod", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm e_9 = NULL;
          t = conc_strings_0(t);
          c_9 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_8), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_8), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = call_0(t);
          t = not_null(y_8);
          t = ReadFromFile_0(t);
          e_9 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_8), (ATerm) ATmakeAppl(sym_Nil_0));
          t = rm_files_0(t);
          t = not_null(e_9);
        }
      }
    }
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm g_66 (ATerm))
{
  ATerm k_8 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
        return(t);
      }
      t = guarantee_extension_1(t, p_0);
      t = split_2(t, _id, g_66);
      t = find_in_path_0(t);
      t = split_2(t, _id, parse_mod_0);
      PopChoice();
    }
  else
    {
      t = k_8;
      {
        ATerm m_8 = t;
        if(PushChoice()==0)
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("tree", 0, ATtrue));
              return(t);
            }
            t = guarantee_extension_1(t, v_0);
            t = split_2(t, _id, g_66);
            t = find_in_path_0(t);
            t = split_2(t, _id, ReadFromFile_0);
            PopChoice();
          }
        else
          {
            t = m_8;
            {
              ATerm n_9 = NULL;
              n_9 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_9), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = fatal_error_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,i_11 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_TCons_2))
    {
      v_10 = ATgetArgument(u_10, 0);
      i_11 = ATgetArgument(u_10, 1);
      t = not_null(v_10);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  g_12 = t;
  n_11 :
  if(match_cons(g_12, sym_TCons_2))
    {
      h_12 = ATgetArgument(g_12, 0);
      u_12 = ATgetArgument(g_12, 1);
      o_11 :
      if(match_cons(h_12, sym_Cons_2))
        {
          i_12 = ATgetArgument(h_12, 0);
          j_12 = ATgetArgument(h_12, 1);
          p_11 :
          if(match_cons(u_12, sym_TCons_2))
            {
              v_12 = ATgetArgument(u_12, 0);
              w_12 = ATgetArgument(u_12, 1);
              q_11 :
              if(match_cons(w_12, sym_TCons_2))
                {
                  x_12 = ATgetArgument(w_12, 0);
                  y_12 = ATgetArgument(w_12, 1);
                  r_11 :
                  if(match_cons(y_12, sym_TCons_2))
                    {
                      z_12 = ATgetArgument(y_12, 0);
                      a_13 = ATgetArgument(y_12, 1);
                      c_12 :
                      if(match_cons(a_13, sym_TCons_2))
                        {
                          b_13 = ATgetArgument(a_13, 0);
                          c_13 = ATgetArgument(a_13, 1);
                          d_12 :
                          if(match_cons(c_13, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_12), not_null(b_13)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
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
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  o_13 = t;
  l_13 :
  if(match_cons(o_13, sym_TCons_2))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      m_13 :
      if(match_cons(q_13, sym_TCons_2))
        {
          r_13 = ATgetArgument(q_13, 0);
          s_13 = ATgetArgument(q_13, 1);
          n_13 :
          if(match_cons(s_13, sym_TNil_0))
            {
              t = not_null(p_13);
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(r_13);
                  return(t);
                }
                t = at_end_1(t, w_0);
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
ATerm HdMember_1 (ATerm t, ATerm i_55 (ATerm))
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_Cons_2))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      t = i_55(t);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm e_14 = NULL;
          e_14 = t;
          if(a_14 != NULL && a_14 != e_14)
            _fail(e_14);
          else
            a_14 = e_14;
          return(t);
        }
        t = fetch_1(t, a_1);
        t = not_null(b_14);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  m_14 = t;
  i_14 :
  if(match_cons(m_14, sym_TCons_2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      j_14 :
      if(match_cons(o_14, sym_TCons_2))
        {
          p_14 = ATgetArgument(o_14, 0);
          s_14 = ATgetArgument(o_14, 1);
          k_14 :
          if(match_cons(p_14, sym_Cons_2))
            {
              q_14 = ATgetArgument(p_14, 0);
              r_14 = ATgetArgument(p_14, 1);
              l_14 :
              if(match_cons(s_14, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_14), not_null(n_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
  g_15 = t;
  y_14 :
  if(match_cons(g_15, sym_TCons_2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      z_14 :
      if(match_cons(i_15, sym_TCons_2))
        {
          j_15 = ATgetArgument(i_15, 0);
          k_15 = ATgetArgument(i_15, 1);
          a_15 :
          if(match_cons(k_15, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_15), not_null(j_15));
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
  ATerm x_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  x_15 = t;
  s_15 :
  if(match_cons(x_15, sym_TCons_2))
    {
      a_16 = ATgetArgument(x_15, 0);
      d_16 = ATgetArgument(x_15, 1);
      t_15 :
      if(match_cons(a_16, sym_Cons_2))
        {
          b_16 = ATgetArgument(a_16, 0);
          c_16 = ATgetArgument(a_16, 1);
          u_15 :
          if(match_cons(d_16, sym_TCons_2))
            {
              e_16 = ATgetArgument(d_16, 0);
              h_16 = ATgetArgument(d_16, 1);
              v_15 :
              if(match_cons(e_16, sym_Cons_2))
                {
                  f_16 = ATgetArgument(e_16, 0);
                  g_16 = ATgetArgument(e_16, 1);
                  w_15 :
                  if(match_cons(h_16, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(b_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_16), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_16), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
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
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  x_16 = t;
  s_16 :
  if(match_cons(x_16, sym_TCons_2))
    {
      y_16 = ATgetArgument(x_16, 0);
      z_16 = ATgetArgument(x_16, 1);
      t_16 :
      if(match_cons(y_16, sym_Nil_0))
        {
          u_16 :
          if(match_cons(z_16, sym_TCons_2))
            {
              a_17 = ATgetArgument(z_16, 0);
              b_17 = ATgetArgument(z_16, 1);
              v_16 :
              if(match_cons(a_17, sym_Nil_0))
                {
                  w_16 :
                  if(match_cons(b_17, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm j_17 (ATerm t)
  {
    ATerm n_8 = t;
    if(PushChoice()==0)
      {
        t = o_57(t);
        PopChoice();
      }
    else
      {
        t = n_8;
        t = p_57(t);
        {
          ATerm c_1 (ATerm t)
          {
            t = TCons_2(t, j_17, TNil_0);
            return(t);
          }
          t = TCons_2(t, r_57, c_1);
          t = q_57(t);
        }
      }
    return(t);
  }
  t = j_17(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm t_57 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, t_57);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm k_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
  k_18 = t;
  d_18 :
  if(match_cons(k_18, sym_Cons_2))
    {
      p_18 = ATgetArgument(k_18, 0);
      w_18 = ATgetArgument(k_18, 1);
      e_18 :
      if(match_cons(p_18, sym_TCons_2))
        {
          q_18 = ATgetArgument(p_18, 0);
          r_18 = ATgetArgument(p_18, 1);
          f_18 :
          if(match_cons(r_18, sym_TCons_2))
            {
              u_18 = ATgetArgument(r_18, 0);
              v_18 = ATgetArgument(r_18, 1);
              g_18 :
              if(match_cons(v_18, sym_TNil_0))
                {
                  ATerm g_19 = NULL,h_19 = NULL,p_19 = NULL,x_19 = NULL;
                  ATerm o_8;
                  o_8 = t;
                  {
                    ATerm i_19 = NULL;
                    ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
                    t = not_null(u_18);
                    i_19 = t;
                    t = SSL_explode_term(not_null(i_19));
                    k_19 = t;
                    p_17 :
                    if(match_cons(k_19, sym_TCons_2))
                      {
                        l_19 = ATgetArgument(k_19, 0);
                        m_19 = ATgetArgument(k_19, 1);
                        q_17 :
                        if(match_cons(m_19, sym_TCons_2))
                          {
                            n_19 = ATgetArgument(m_19, 0);
                            o_19 = ATgetArgument(m_19, 1);
                            r_17 :
                            if(match_cons(o_19, sym_TNil_0))
                              {
                                if(g_19 != NULL && g_19 != l_19)
                                  _fail(l_19);
                                else
                                  g_19 = l_19;
                                if(h_19 != NULL && h_19 != n_19)
                                  _fail(n_19);
                                else
                                  h_19 = n_19;
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
                  t = o_8;
                  {
                    ATerm q_19 = NULL;
                    ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
                    t = not_null(q_18);
                    q_19 = t;
                    t = SSL_explode_term(not_null(q_19));
                    s_19 = t;
                    z_17 :
                    if(match_cons(s_19, sym_TCons_2))
                      {
                        t_19 = ATgetArgument(s_19, 0);
                        u_19 = ATgetArgument(s_19, 1);
                        a_18 :
                        if(match_cons(u_19, sym_TCons_2))
                          {
                            v_19 = ATgetArgument(u_19, 0);
                            w_19 = ATgetArgument(u_19, 1);
                            b_18 :
                            if(match_cons(w_19, sym_TNil_0))
                              {
                                if(g_19 != NULL && g_19 != t_19)
                                  _fail(t_19);
                                else
                                  g_19 = t_19;
                                if(p_19 != NULL && p_19 != v_19)
                                  _fail(v_19);
                                else
                                  p_19 = v_19;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    x_19 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
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
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  k_20 = t;
  g_20 :
  if(match_cons(k_20, sym_Cons_2))
    {
      l_20 = ATgetArgument(k_20, 0);
      q_20 = ATgetArgument(k_20, 1);
      h_20 :
      if(match_cons(l_20, sym_TCons_2))
        {
          m_20 = ATgetArgument(l_20, 0);
          n_20 = ATgetArgument(l_20, 1);
          i_20 :
          if(match_cons(n_20, sym_TCons_2))
            {
              o_20 = ATgetArgument(n_20, 0);
              p_20 = ATgetArgument(n_20, 1);
              j_20 :
              if(match_cons(p_20, sym_TNil_0))
                {
                  ATerm s_20 = NULL;
                  if(m_20 != NULL && m_20 != o_20)
                    _fail(o_20);
                  else
                    m_20 = o_20;
                  if(s_20 != NULL && s_20 != q_20)
                    _fail(q_20);
                  else
                    s_20 = q_20;
                  t = not_null(s_20);
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
  ATerm p_8 = t;
  if(PushChoice()==0)
    {
      ATerm d_1 (ATerm t)
      {
        ATerm z_20 = NULL;
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_20), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, h_1);
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        ATerm q_8 = t;
        if(PushChoice()==0)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                ATerm r_8 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = r_8;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, m_1, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, k_1);
            PopChoice();
          }
        else
          {
            t = q_8;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, d_1, e_1, f_1);
      PopChoice();
    }
  else
    {
      t = p_8;
      {
        ATerm b_21 = NULL,c_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
        b_21 = t;
        w_20 :
        if(match_cons(b_21, sym_TCons_2))
          {
            c_21 = ATgetArgument(b_21, 0);
            e_21 = ATgetArgument(b_21, 1);
            x_20 :
            if(match_cons(e_21, sym_TCons_2))
              {
                f_21 = ATgetArgument(e_21, 0);
                g_21 = ATgetArgument(e_21, 1);
                y_20 :
                if(match_cons(g_21, sym_TNil_0))
                  {
                    t = not_null(c_21);
                    {
                      ATerm l_21 (ATerm t)
                      {
                        ATerm s_8 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = s_8;
                            {
                              ATerm t_8 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm n_1 (ATerm t)
                                  {
                                    t = not_null(f_21);
                                    return(t);
                                  }
                                  t = HdMember_1(t, n_1);
                                  t = l_21(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = t_8;
                                  t = Cons_2(t, _id, l_21);
                                }
                            }
                          }
                        return(t);
                      }
                      t = l_21(t);
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
ATerm GnNext_3 (ATerm t, ATerm d_45 (ATerm), ATerm e_45 (ATerm), ATerm f_45 (ATerm))
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
  a_22 = t;
  t_21 :
  if(match_cons(a_22, sym_TCons_2))
    {
      b_22 = ATgetArgument(a_22, 0);
      g_22 = ATgetArgument(a_22, 1);
      u_21 :
      if(match_cons(b_22, sym_Cons_2))
        {
          c_22 = ATgetArgument(b_22, 0);
          f_22 = ATgetArgument(b_22, 1);
          v_21 :
          if(match_cons(g_22, sym_TCons_2))
            {
              h_22 = ATgetArgument(g_22, 0);
              i_22 = ATgetArgument(g_22, 1);
              w_21 :
              if(match_cons(i_22, sym_TCons_2))
                {
                  j_22 = ATgetArgument(i_22, 0);
                  k_22 = ATgetArgument(i_22, 1);
                  x_21 :
                  if(match_cons(k_22, sym_TCons_2))
                    {
                      l_22 = ATgetArgument(k_22, 0);
                      m_22 = ATgetArgument(k_22, 1);
                      y_21 :
                      if(match_cons(m_22, sym_TCons_2))
                        {
                          n_22 = ATgetArgument(m_22, 0);
                          o_22 = ATgetArgument(m_22, 1);
                          z_21 :
                          if(match_cons(o_22, sym_TNil_0))
                            {
                              ATerm v_22 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm x_22 = NULL;
                                t = d_45(t);
                                v_22 = t;
                                {
                                  ATerm z_22 = NULL;
                                  t = e_45(t);
                                  x_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm b_23 = NULL;
                                    t = diff_0(t);
                                    z_22 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    {
                                      ATerm d_23 = NULL;
                                      t = conc_0(t);
                                      b_23 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      {
                                        ATerm f_23 = NULL;
                                        t = conc_0(t);
                                        d_23 = t;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_22), (ATerm) ATmakeAppl(sym_TNil_0))));
                                        t = f_45(t);
                                        f_23 = t;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_22), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
  y_23 = t;
  r_23 :
  if(match_cons(y_23, sym_TCons_2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      s_23 :
      if(match_cons(z_23, sym_Nil_0))
        {
          t_23 :
          if(match_cons(a_24, sym_TCons_2))
            {
              b_24 = ATgetArgument(a_24, 0);
              c_24 = ATgetArgument(a_24, 1);
              u_23 :
              if(match_cons(c_24, sym_TCons_2))
                {
                  d_24 = ATgetArgument(c_24, 0);
                  e_24 = ATgetArgument(c_24, 1);
                  v_23 :
                  if(match_cons(e_24, sym_TCons_2))
                    {
                      f_24 = ATgetArgument(e_24, 0);
                      g_24 = ATgetArgument(e_24, 1);
                      w_23 :
                      if(match_cons(g_24, sym_TCons_2))
                        {
                          h_24 = ATgetArgument(g_24, 0);
                          i_24 = ATgetArgument(g_24, 1);
                          x_23 :
                          if(match_cons(i_24, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
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
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  t_24 = t;
  p_24 :
  if(match_cons(t_24, sym_TCons_2))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      q_24 :
      if(match_cons(v_24, sym_TCons_2))
        {
          w_24 = ATgetArgument(v_24, 0);
          x_24 = ATgetArgument(v_24, 1);
          r_24 :
          if(match_cons(x_24, sym_TCons_2))
            {
              y_24 = ATgetArgument(x_24, 0);
              z_24 = ATgetArgument(x_24, 1);
              s_24 :
              if(match_cons(z_24, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_24), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
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
ATerm while_not_2 (ATerm t, ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm e_25 (ATerm t)
  {
    ATerm v_8 = t;
    if(PushChoice()==0)
      {
        t = o_65(t);
        PopChoice();
      }
    else
      {
        t = v_8;
        t = p_65(t);
        t = e_25(t);
      }
    return(t);
  }
  t = e_25(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  t = r_65(t);
  t = while_not_2(t, s_65, t_65);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm j_45 (ATerm), ATerm k_45 (ATerm), ATerm l_45 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm x_8 = t;
    if(PushChoice()==0)
      {
        t = GnNext_3(t, j_45, k_45, l_45);
        PopChoice();
      }
    else
      {
        t = x_8;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, o_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm y_45 (ATerm), ATerm z_45 (ATerm), ATerm a_46 (ATerm))
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  t = graph_nodes_undef_roots_3(t, y_45, z_45, a_46);
  j_25 = t;
  g_25 :
  if(match_cons(j_25, sym_TCons_2))
    {
      k_25 = ATgetArgument(j_25, 0);
      l_25 = ATgetArgument(j_25, 1);
      h_25 :
      if(match_cons(l_25, sym_TCons_2))
        {
          m_25 = ATgetArgument(l_25, 0);
          n_25 = ATgetArgument(l_25, 1);
          i_25 :
          if(match_cons(n_25, sym_TNil_0))
            t = not_null(k_25);
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
ATerm pack_stratego_1 (ATerm t, ATerm f_66 (ATerm))
{
  ATerm a_26 = NULL;
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_26), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  {
    ATerm p_1 (ATerm t)
    {
      t = Fst_0(t);
      {
        ATerm r_1 (ATerm t)
        {
          ATerm c_26 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = f_66(t);
          c_26 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), not_null(c_26));
          return(t);
        }
        t = get_module_1(t, r_1);
      }
      return(t);
    }
    ATerm q_1 (ATerm t)
    {
      ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
      e_26 = t;
      w_25 :
      if(match_cons(e_26, sym_TCons_2))
        {
          f_26 = ATgetArgument(e_26, 0);
          g_26 = ATgetArgument(e_26, 1);
          x_25 :
          if(match_cons(g_26, sym_TCons_2))
            {
              i_26 = ATgetArgument(g_26, 0);
              j_26 = ATgetArgument(g_26, 1);
              y_25 :
              if(match_cons(j_26, sym_TCons_2))
                {
                  k_26 = ATgetArgument(j_26, 0);
                  l_26 = ATgetArgument(j_26, 1);
                  z_25 :
                  if(match_cons(l_26, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_26), not_null(k_26));
                  else
                    _fail(t);
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
    t = graph_nodes_roots_3(t, p_1, get_stratego_imports_0, q_1);
    t = unzip_0(t);
    {
      ATerm w_1 (ATerm t)
      {
        t = TCons_2(t, flatten_stratego_0, TNil_0);
        return(t);
      }
      t = TCons_2(t, _id, w_1);
    }
  }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  t = SSL_exit(not_null(t_26));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
  b_27 = t;
  y_26 :
  if(match_cons(b_27, sym_TCons_2))
    {
      c_27 = ATgetArgument(b_27, 0);
      d_27 = ATgetArgument(b_27, 1);
      z_26 :
      if(match_cons(d_27, sym_TCons_2))
        {
          e_27 = ATgetArgument(d_27, 0);
          f_27 = ATgetArgument(d_27, 1);
          a_27 :
          if(match_cons(f_27, sym_TNil_0))
            {
              ATerm z_8;
              z_8 = t;
              t = SSL_printnl(not_null(c_27), not_null(e_27));
              t = z_8;
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
  ATerm k_27 = NULL;
  k_27 = t;
  t = SSL_close_file(not_null(k_27));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym_Cons_2))
    {
      r_27 = ATgetArgument(q_27, 0);
      s_27 = ATgetArgument(q_27, 1);
      {
        ATerm v_27 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = p_60(t);
        v_27 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_27), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_27), not_null(s_27)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm b_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = b_9;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm d_9 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = d_9;
              t = Cons_2(t, _id, x_1);
              t = Sep_1(t, q_60);
            }
          return(t);
        }
        t = Cons_2(t, _id, x_1);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm))
{
  ATerm d_28 = NULL;
  ATerm f_28 = NULL;
  d_28 = t;
  {
    ATerm h_28 = NULL;
    t = r_52(t);
    f_28 = t;
    t = not_null(d_28);
    t = s_52(t);
    h_28 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_28), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_50 (ATerm))
{
  ATerm f_9;
  f_9 = t;
  {
    ATerm z_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm b_2 (ATerm t)
    {
      ATerm o_28 = NULL;
      ATerm q_28 = NULL;
      o_28 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = x_50(t);
      q_28 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_28), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_28), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, z_1, b_2);
    t = printnl_0(t);
  }
  t = f_9;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm e_51 (ATerm))
{
  ATerm g_9;
  g_9 = t;
  t = e_51(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, c_2);
  }
  t = g_9;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL;
  ATerm h_9 = t;
  if(PushChoice()==0)
    {
      ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
      f_29 = t;
      x_28 :
      if(match_cons(f_29, sym_TCons_2))
        {
          g_29 = ATgetArgument(f_29, 0);
          h_29 = ATgetArgument(f_29, 1);
          y_28 :
          if(match_cons(h_29, sym_TCons_2))
            {
              i_29 = ATgetArgument(h_29, 0);
              j_29 = ATgetArgument(h_29, 1);
              z_28 :
              if(match_cons(j_29, sym_TNil_0))
                {
                  if(e_29 != NULL && e_29 != g_29)
                    _fail(g_29);
                  else
                    e_29 = g_29;
                  if(d_29 != NULL && d_29 != i_29)
                    _fail(i_29);
                  else
                    d_29 = i_29;
                  t = SSL_open_file(not_null(e_29), not_null(d_29));
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
      t = h_9;
      {
        ATerm k_29 = NULL;
        ATerm d_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, d_2);
        k_29 = t;
        if(e_29 != NULL && e_29 != k_29)
          _fail(k_29);
        else
          e_29 = k_29;
        t = SSL_open_file(not_null(e_29), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
      }
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm n_29 (ATerm t)
  {
    ATerm i_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, n_29);
        PopChoice();
      }
    else
      {
        t = i_9;
        t = Nil_0(t);
        t = s_59(t);
      }
    return(t);
  }
  t = n_29(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_9;
      {
        ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
        q_29 = t;
        p_29 :
        if(match_cons(q_29, sym_Cons_2))
          {
            r_29 = ATgetArgument(q_29, 0);
            s_29 = ATgetArgument(q_29, 1);
            t = not_null(r_29);
            {
              ATerm e_2 (ATerm t)
              {
                t = not_null(s_29);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, e_2);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm x_29 (ATerm t)
  {
    ATerm k_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = k_9;
        t = Cons_2(t, e_59, x_29);
      }
    return(t);
  }
  t = x_29(t);
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  c_30 = t;
  z_29 :
  if(match_cons(c_30, sym_TCons_2))
    {
      d_30 = ATgetArgument(c_30, 0);
      e_30 = ATgetArgument(c_30, 1);
      a_30 :
      if(match_cons(e_30, sym_TCons_2))
        {
          f_30 = ATgetArgument(e_30, 0);
          g_30 = ATgetArgument(e_30, 1);
          b_30 :
          if(match_cons(g_30, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_30), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm create_dep_file_1 (ATerm t, ATerm c_45 (ATerm))
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  e_31 = t;
  t_30 :
  if(match_cons(e_31, sym_TCons_2))
    {
      f_31 = ATgetArgument(e_31, 0);
      g_31 = ATgetArgument(e_31, 1);
      u_30 :
      if(match_cons(g_31, sym_TCons_2))
        {
          h_31 = ATgetArgument(g_31, 0);
          i_31 = ATgetArgument(g_31, 1);
          v_30 :
          if(match_cons(i_31, sym_TNil_0))
            {
              ATerm l_31 = NULL;
              t = not_null(f_31);
              {
                ATerm n_31 = NULL;
                t = c_45(t);
                l_31 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm p_31 = NULL;
                  t = add_extension_0(t);
                  n_31 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm r_31 = NULL;
                    t = open_file_0(t);
                    p_31 = t;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue)), not_null(h_31));
                    {
                      ATerm f_2 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
                        return(t);
                      }
                      t = separate_by_1(t, f_2);
                      r_31 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_31), not_null(r_31)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = printnl_0(t);
                      t = not_null(p_31);
                      t = close_file_0(t);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_31), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm fetch_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm y_31 (ATerm t)
  {
    ATerm l_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, m_59, _id);
        PopChoice();
      }
    else
      {
        t = l_9;
        t = Cons_2(t, _id, y_31);
      }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_49 (ATerm))
{
  t = fetch_1(t, r_49);
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      t = u_65(t);
      PopChoice();
    }
  else
    t = m_9;
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  d_32 = t;
  a_32 :
  if(match_cons(d_32, sym_TCons_2))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      b_32 :
      if(match_cons(f_32, sym_TCons_2))
        {
          g_32 = ATgetArgument(f_32, 0);
          h_32 = ATgetArgument(f_32, 1);
          c_32 :
          if(match_cons(h_32, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(e_32), not_null(g_32));
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
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  p_32 = t;
  m_32 :
  if(match_cons(p_32, sym_TCons_2))
    {
      q_32 = ATgetArgument(p_32, 0);
      r_32 = ATgetArgument(p_32, 1);
      n_32 :
      if(match_cons(r_32, sym_TCons_2))
        {
          s_32 = ATgetArgument(r_32, 0);
          t_32 = ATgetArgument(r_32, 1);
          o_32 :
          if(match_cons(t_32, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(q_32), not_null(s_32));
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
ATerm filter_1 (ATerm t, ATerm j_53 (ATerm))
{
  ATerm o_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = o_9;
      {
        ATerm p_9 = t;
        if(PushChoice()==0)
          {
            ATerm c_3 (ATerm t)
            {
              t = filter_1(t, j_53);
              return(t);
            }
            t = Cons_2(t, j_53, c_3);
            PopChoice();
          }
        else
          {
            t = p_9;
            {
              ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
              z_32 = t;
              y_32 :
              if(match_cons(z_32, sym_Cons_2))
                {
                  a_33 = ATgetArgument(z_32, 0);
                  b_33 = ATgetArgument(z_32, 1);
                  t = not_null(b_33);
                  t = filter_1(t, j_53);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm i_33 (ATerm t)
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
        t = Cons_2(t, g_59, i_33);
      }
    return(t);
  }
  t = i_33(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm l_33 = NULL;
  ATerm d_3 (ATerm t)
  {
    ATerm m_33 = NULL,n_33 = NULL;
    m_33 = t;
    k_33 :
    if(match_cons(m_33, sym_Program_1))
      {
        n_33 = ATgetArgument(m_33, 0);
        if(l_33 != NULL && l_33 != n_33)
          _fail(n_33);
        else
          l_33 = n_33;
      }
    else
      _fail(t);
    return(t);
  }
  t = option_defined_1(t, d_3);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  p_33 :
  if(!(match_cons(q_33, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_44 (ATerm))
{
  ATerm u_33 = NULL,v_33 = NULL;
  u_33 = t;
  t_33 :
  if(match_cons(u_33, sym_Undefined_1))
    {
      v_33 = ATgetArgument(u_33, 0);
      {
        ATerm x_33 = NULL;
        t = not_null(v_33);
        t = e_44(t);
        x_33 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_33));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  h_34 :
  if(!(match_cons(i_34, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_50 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm r_9 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = r_9;
        {
          ATerm s_9 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = s_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_3);
  t = m_50(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm m_49 (ATerm), ATerm n_49 (ATerm))
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  n_34 = t;
  l_34 :
  if(match_cons(n_34, sym_Cons_2))
    {
      o_34 = ATgetArgument(n_34, 0);
      p_34 = ATgetArgument(n_34, 1);
      m_34 :
      if(match_cons(p_34, sym_Cons_2))
        {
          q_34 = ATgetArgument(p_34, 0);
          r_34 = ATgetArgument(p_34, 1);
          {
            ATerm j_35 = NULL;
            t = not_null(o_34);
            t = m_49(t);
            t = not_null(q_34);
            t = n_49(t);
            j_35 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_35), not_null(r_34));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym_Cons_2))
    {
      r_35 = ATgetArgument(q_35, 0);
      s_35 = ATgetArgument(q_35, 1);
      {
        ATerm v_35 = NULL;
        t = not_null(r_35);
        t = k_49(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = l_49(t);
        v_35 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_35), not_null(s_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_9 = t;
  if(PushChoice()==0)
    {
      ATerm f_3 (ATerm t)
      {
        ATerm t_36 = NULL;
        t_36 = t;
        z_35 :
        if(!(match_string(t_36, "-S")))
          _fail(t);
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, f_3, g_3);
      PopChoice();
    }
  else
    {
      t = t_9;
      {
        ATerm u_9 = t;
        if(PushChoice()==0)
          {
            ATerm h_3 (ATerm t)
            {
              ATerm u_36 = NULL;
              u_36 = t;
              a_36 :
              if(!(match_string(u_36, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, h_3, m_3);
            PopChoice();
          }
        else
          {
            t = u_9;
            {
              ATerm v_9 = t;
              if(PushChoice()==0)
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm v_36 = NULL;
                    v_36 = t;
                    b_36 :
                    if(!(match_string(v_36, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm o_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, n_3, o_3);
                  PopChoice();
                }
              else
                {
                  t = v_9;
                  {
                    ATerm w_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm p_3 (ATerm t)
                        {
                          ATerm w_36 = NULL;
                          w_36 = t;
                          c_36 :
                          if(!(match_string(w_36, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm s_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, p_3, s_3);
                        PopChoice();
                      }
                    else
                      {
                        t = w_9;
                        {
                          ATerm x_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm t_3 (ATerm t)
                              {
                                ATerm x_36 = NULL;
                                x_36 = t;
                                d_36 :
                                if(!(match_string(x_36, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm u_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, t_3, u_3);
                              PopChoice();
                            }
                          else
                            {
                              t = x_9;
                              {
                                ATerm y_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm g_4 (ATerm t)
                                    {
                                      ATerm y_36 = NULL;
                                      y_36 = t;
                                      e_36 :
                                      if(!(match_string(y_36, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm j_4 (ATerm t)
                                    {
                                      ATerm z_36 = NULL;
                                      z_36 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(z_36));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, g_4, j_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = y_9;
                                    {
                                      ATerm z_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm k_4 (ATerm t)
                                          {
                                            ATerm b_37 = NULL;
                                            b_37 = t;
                                            g_36 :
                                            if(!(match_string(b_37, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm l_4 (ATerm t)
                                          {
                                            ATerm c_37 = NULL;
                                            c_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_37));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, k_4, l_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = z_9;
                                          {
                                            ATerm a_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm m_4 (ATerm t)
                                                {
                                                  ATerm e_37 = NULL;
                                                  e_37 = t;
                                                  i_36 :
                                                  if(!(match_string(e_37, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm o_4 (ATerm t)
                                                {
                                                  ATerm f_37 = NULL;
                                                  f_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_37));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, m_4, o_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = a_10;
                                                {
                                                  ATerm b_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm p_4 (ATerm t)
                                                      {
                                                        ATerm h_37 = NULL;
                                                        h_37 = t;
                                                        k_36 :
                                                        if(!(match_string(h_37, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm q_4 (ATerm t)
                                                      {
                                                        ATerm i_37 = NULL;
                                                        i_37 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_37));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, p_4, q_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = b_10;
                                                      {
                                                        ATerm c_10 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm v_4 (ATerm t)
                                                            {
                                                              ATerm k_37 = NULL;
                                                              k_37 = t;
                                                              m_36 :
                                                              if(!(match_string(k_37, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm w_4 (ATerm t)
                                                            {
                                                              ATerm l_37 = NULL;
                                                              l_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_37));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, v_4, w_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = c_10;
                                                            {
                                                              ATerm d_10 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm x_4 (ATerm t)
                                                                  {
                                                                    ATerm n_37 = NULL;
                                                                    n_37 = t;
                                                                    o_36 :
                                                                    if(!(match_string(n_37, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm y_4 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, x_4, y_4);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = d_10;
                                                                  {
                                                                    ATerm e_10 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm a_5 (ATerm t)
                                                                        {
                                                                          ATerm o_37 = NULL;
                                                                          o_37 = t;
                                                                          p_36 :
                                                                          if(!(match_string(o_37, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm b_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, a_5, b_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_10;
                                                                        {
                                                                          ATerm f_10 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm c_5 (ATerm t)
                                                                              {
                                                                                ATerm p_37 = NULL;
                                                                                p_37 = t;
                                                                                q_36 :
                                                                                if(!(match_string(p_37, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm d_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, c_5, d_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_10;
                                                                              {
                                                                                ATerm g_10 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm n_5 (ATerm t)
                                                                                    {
                                                                                      ATerm q_37 = NULL;
                                                                                      q_37 = t;
                                                                                      r_36 :
                                                                                      if(!(match_string(q_37, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm o_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, n_5, o_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_10;
                                                                                    {
                                                                                      ATerm s_5 (ATerm t)
                                                                                      {
                                                                                        ATerm r_37 = NULL;
                                                                                        r_37 = t;
                                                                                        s_36 :
                                                                                        if(!(match_string(r_37, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm t_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, s_5, t_5);
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
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym_Cons_2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_38)), not_null(b_38));
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  f_38 :
  if(!(match_cons(g_38, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_49 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm i_38 = NULL;
    i_38 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_38));
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        ATerm i_10 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = i_10;
            t = i_49(t);
            t = Cons_2(t, _id, w_5);
          }
        PopChoice();
      }
    else
      {
        t = h_10;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, v_5, w_5);
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm j_10 = t;
    if(PushChoice()==0)
      {
        t = io_options_0(t);
        PopChoice();
      }
    else
      {
        t = j_10;
        {
          ATerm k_10 = t;
          if(PushChoice()==0)
            {
              ATerm z_5 (ATerm t)
              {
                ATerm t_38 = NULL;
                t_38 = t;
                m_38 :
                if(!(match_string(t_38, "-I")))
                  _fail(t);
                return(t);
              }
              ATerm a_6 (ATerm t)
              {
                ATerm u_38 = NULL;
                u_38 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(u_38));
                return(t);
              }
              t = ArgOption_2(t, z_5, a_6);
              PopChoice();
            }
          else
            {
              t = k_10;
              {
                ATerm l_10 = t;
                if(PushChoice()==0)
                  {
                    ATerm j_6 (ATerm t)
                    {
                      ATerm w_38 = NULL;
                      w_38 = t;
                      o_38 :
                      if(!(match_string(w_38, "-nodep")))
                        _fail(t);
                      return(t);
                    }
                    ATerm k_6 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_NoDependency_0);
                      return(t);
                    }
                    t = Option_2(t, j_6, k_6);
                    PopChoice();
                  }
                else
                  {
                    t = l_10;
                    {
                      ATerm m_10 = t;
                      if(PushChoice()==0)
                        {
                          ATerm l_6 (ATerm t)
                          {
                            ATerm x_38 = NULL;
                            x_38 = t;
                            p_38 :
                            if(!(match_string(x_38, "-dep")))
                              _fail(t);
                            return(t);
                          }
                          ATerm m_6 (ATerm t)
                          {
                            ATerm y_38 = NULL;
                            y_38 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(y_38));
                            return(t);
                          }
                          t = ArgOption_2(t, l_6, m_6);
                          PopChoice();
                        }
                      else
                        {
                          t = m_10;
                          {
                            ATerm r_6 (ATerm t)
                            {
                              ATerm a_39 = NULL;
                              a_39 = t;
                              r_38 :
                              if(!(match_string(a_39, "--prefix")))
                                _fail(t);
                              return(t);
                            }
                            ATerm s_6 (ATerm t)
                            {
                              ATerm b_39 = NULL;
                              b_39 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(b_39)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm t_6 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, t_6);
                              }
                              t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(b_39));
                              return(t);
                            }
                            t = ArgOption_2(t, r_6, s_6);
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
  t = parse_options_1(t, y_5);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm a_45 (ATerm, ATerm (ATerm)), ATerm b_45 (ATerm))
{
  ATerm z_39 = NULL;
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,k_40 = NULL;
  t = pack_module_options_0(t);
  z_39 = t;
  {
    ATerm u_6 (ATerm t)
    {
      t = need_help_1(t, pack_modules_usage_0);
      return(t);
    }
    t = try_1(t, u_6);
    {
      ATerm d_7 (ATerm t)
      {
        ATerm e_7 (ATerm t)
        {
          ATerm f_40 = NULL,g_40 = NULL;
          f_40 = t;
          l_39 :
          if(match_cons(f_40, sym_Program_1))
            {
              g_40 = ATgetArgument(f_40, 0);
              if(b_40 != NULL && b_40 != g_40)
                _fail(g_40);
              else
                b_40 = g_40;
            }
          else
            {
              if(match_cons(f_40, sym_Input_1))
                {
                  g_40 = ATgetArgument(f_40, 0);
                  if(c_40 != NULL && c_40 != g_40)
                    _fail(g_40);
                  else
                    c_40 = g_40;
                }
              else
                {
                  if(match_cons(f_40, sym_Output_1))
                    {
                      g_40 = ATgetArgument(f_40, 0);
                      if(d_40 != NULL && d_40 != g_40)
                        _fail(g_40);
                      else
                        d_40 = g_40;
                    }
                  else
                    {
                      if(match_cons(f_40, sym_Dependency_1))
                        {
                          g_40 = ATgetArgument(f_40, 0);
                          if(e_40 != NULL && e_40 != g_40)
                            _fail(g_40);
                          else
                            e_40 = g_40;
                        }
                      else
                        _fail(t);
                    }
                }
            }
          return(t);
        }
        t = try_1(t, e_7);
        return(t);
      }
      t = list_1(t, d_7);
      {
        ATerm m_40 = NULL;
        ATerm f_7 (ATerm t)
        {
          ATerm h_40 = NULL,i_40 = NULL;
          h_40 = t;
          n_39 :
          if(match_cons(h_40, sym_Include_1))
            {
              i_40 = ATgetArgument(h_40, 0);
              t = not_null(i_40);
            }
          else
            _fail(t);
          return(t);
        }
        t = filter_1(t, f_7);
        k_40 = t;
        {
          ATerm o_40 = NULL;
          ATerm n_10 = t;
          if(PushChoice()==0)
            {
              t = not_null(c_40);
              PopChoice();
            }
          else
            {
              t = n_10;
              t = (ATerm) ATmakeAppl(sym_stdin_0);
            }
          m_40 = t;
          {
            ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
            ATerm o_10 = t;
            if(PushChoice()==0)
              {
                t = not_null(d_40);
                PopChoice();
              }
            else
              {
                t = o_10;
                t = (ATerm) ATmakeAppl(sym_stdout_0);
              }
            o_40 = t;
            t = not_null(m_40);
            {
              ATerm g_7 (ATerm t)
              {
                t = not_null(k_40);
                return(t);
              }
              t = a_45(t, g_7);
              q_40 = t;
              w_39 :
              if(match_cons(q_40, sym_TCons_2))
                {
                  r_40 = ATgetArgument(q_40, 0);
                  s_40 = ATgetArgument(q_40, 1);
                  x_39 :
                  if(match_cons(s_40, sym_TCons_2))
                    {
                      t_40 = ATgetArgument(s_40, 0);
                      u_40 = ATgetArgument(s_40, 1);
                      y_39 :
                      if(match_cons(u_40, sym_TNil_0))
                        {
                          ATerm y_40 = NULL,b_41 = NULL;
                          t = not_null(z_39);
                          {
                            ATerm p_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm h_7 (ATerm t)
                                {
                                  ATerm x_40 = NULL;
                                  x_40 = t;
                                  s_39 :
                                  if(!(match_cons(x_40, sym_Binary_0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = option_defined_1(t, h_7);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToBinaryFile_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = p_10;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToTextFile_0(t);
                              }
                            {
                              ATerm j_7 (ATerm t)
                              {
                                ATerm a_41 = NULL;
                                ATerm q_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = not_null(e_40);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = q_10;
                                    {
                                      ATerm r_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = not_null(z_39);
                                          {
                                            ATerm l_7 (ATerm t)
                                            {
                                              ATerm z_40 = NULL;
                                              z_40 = t;
                                              t_39 :
                                              if(!(match_cons(z_40, sym_NoDependency_0)))
                                                _fail(t);
                                              return(t);
                                            }
                                            t = option_defined_1(t, l_7);
                                          }
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        t = r_10;
                                      t = b_45(t);
                                    }
                                  }
                                a_41 = t;
                                if(y_40 != NULL && y_40 != a_41)
                                  _fail(a_41);
                                else
                                  y_40 = a_41;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm m_7 (ATerm t)
                                  {
                                    t = not_null(y_40);
                                    return(t);
                                  }
                                  t = create_dep_file_1(t, m_7);
                                }
                                return(t);
                              }
                              t = try_1(t, j_7);
                              t = dtime_0(t);
                              b_41 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_40), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_41), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
    x_41 = t;
    q_41 :
    if(match_cons(x_41, sym_TCons_2))
      {
        y_41 = ATgetArgument(x_41, 0);
        z_41 = ATgetArgument(x_41, 1);
        r_41 :
        if(match_cons(z_41, sym_TCons_2))
          {
            a_42 = ATgetArgument(z_41, 0);
            b_42 = ATgetArgument(z_41, 1);
            s_41 :
            if(match_cons(b_42, sym_TCons_2))
              {
                c_42 = ATgetArgument(b_42, 0);
                d_42 = ATgetArgument(b_42, 1);
                t_41 :
                if(match_cons(d_42, sym_TNil_0))
                  {
                    if(u_41 != NULL && u_41 != y_41)
                      _fail(y_41);
                    else
                      u_41 = y_41;
                    if(v_41 != NULL && v_41 != a_42)
                      _fail(a_42);
                    else
                      v_41 = a_42;
                    if(w_41 != NULL && w_41 != c_42)
                      _fail(c_42);
                    else
                      w_41 = c_42;
                    t = SSL_table_put(not_null(u_41), not_null(v_41), not_null(w_41));
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
  t = s_10;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  j_42 = t;
  g_42 :
  if(match_cons(j_42, sym_TCons_2))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      h_42 :
      if(match_cons(l_42, sym_TCons_2))
        {
          m_42 = ATgetArgument(l_42, 0);
          n_42 = ATgetArgument(l_42, 1);
          i_42 :
          if(match_cons(n_42, sym_TNil_0))
            t = SSL_table_get(not_null(k_42), not_null(m_42));
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
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
  x_42 = t;
  t_42 :
  if(match_cons(x_42, sym_TCons_2))
    {
      y_42 = ATgetArgument(x_42, 0);
      z_42 = ATgetArgument(x_42, 1);
      u_42 :
      if(match_cons(z_42, sym_TCons_2))
        {
          a_43 = ATgetArgument(z_42, 0);
          b_43 = ATgetArgument(z_42, 1);
          v_42 :
          if(match_cons(b_43, sym_TCons_2))
            {
              c_43 = ATgetArgument(b_43, 0);
              d_43 = ATgetArgument(b_43, 1);
              w_42 :
              if(match_cons(d_43, sym_TNil_0))
                {
                  ATerm w_10;
                  w_10 = t;
                  {
                    ATerm h_43 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_43), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm x_10 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = x_10;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      h_43 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_43), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_43), not_null(h_43)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = w_10;
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
ATerm assert_1 (ATerm t, ATerm w_44 (ATerm))
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  s_43 = t;
  p_43 :
  if(match_cons(s_43, sym_TCons_2))
    {
      t_43 = ATgetArgument(s_43, 0);
      u_43 = ATgetArgument(s_43, 1);
      q_43 :
      if(match_cons(u_43, sym_TCons_2))
        {
          v_43 = ATgetArgument(u_43, 0);
          w_43 = ATgetArgument(u_43, 1);
          r_43 :
          if(match_cons(w_43, sym_TNil_0))
            {
              ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
              ATerm y_10;
              y_10 = t;
              {
                ATerm d_44 = NULL;
                ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL;
                t = w_44(t);
                d_44 = t;
                if(a_44 != NULL && a_44 != d_44)
                  _fail(d_44);
                else
                  a_44 = d_44;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_44), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_43), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm z_10 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_44), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = z_10;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  f_44 = t;
                  o_43 :
                  if(match_cons(f_44, sym_Cons_2))
                    {
                      g_44 = ATgetArgument(f_44, 0);
                      h_44 = ATgetArgument(f_44, 1);
                      if(b_44 != NULL && b_44 != g_44)
                        _fail(g_44);
                      else
                        b_44 = g_44;
                      if(c_44 != NULL && c_44 != h_44)
                        _fail(h_44);
                      else
                        c_44 = h_44;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_44), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_43), not_null(b_44)), not_null(c_44)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = y_10;
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
  ATerm q_44 = NULL;
  q_44 = t;
  t = SSL_implode_string(not_null(q_44));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_44 = NULL;
  u_44 = t;
  t = SSL_explode_string(not_null(u_44));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm a_11 = t;
    if(PushChoice()==0)
      {
        ATerm h_45 (ATerm t)
        {
          ATerm b_11 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, h_45);
              PopChoice();
            }
          else
            {
              t = b_11;
              {
                ATerm n_7 (ATerm t)
                {
                  ATerm g_45 = NULL;
                  g_45 = t;
                  z_44 :
                  if(!(match_int(g_45, 47)))
                    _fail(t);
                  return(t);
                }
                ATerm o_7 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = Cons_2(t, n_7, o_7);
              }
            }
          return(t);
        }
        t = h_45(t);
        PopChoice();
      }
    else
      {
        t = a_11;
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_44 (ATerm), ATerm p_44 (ATerm))
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  p_45 = t;
  o_45 :
  if(match_cons(p_45, sym_Cons_2))
    {
      q_45 = ATgetArgument(p_45, 0);
      r_45 = ATgetArgument(p_45, 1);
      {
        ATerm u_45 = NULL;
        t = not_null(q_45);
        {
          ATerm w_45 = NULL;
          t = o_44(t);
          u_45 = t;
          t = not_null(r_45);
          t = p_44(t);
          w_45 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_45), not_null(w_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm f_46 = NULL;
  ATerm c_11;
  c_11 = t;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm g_46 = NULL;
      t = get_path_0(t);
      g_46 = t;
      if(f_46 != NULL && f_46 != g_46)
        _fail(g_46);
      else
        f_46 = g_46;
      return(t);
    }
    t = Cons_2(t, p_7, _id);
    {
      ATerm d_11;
      d_11 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(f_46)), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm q_7 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
          return(t);
        }
        t = assert_1(t, q_7);
      }
      t = d_11;
    }
  }
  t = c_11;
  t = pack_modules_2(t, pack_stratego_1, basename_0);
  return(t);
}
