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
ATerm basename_1 (ATerm, ATerm w_51 (ATerm));
ATerm basename_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm w_43 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm guarantee_extension_1 (ATerm, ATerm y_51 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm w_44 (ATerm));
ATerm Prefix_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_pid_0 (ATerm);
ATerm parse_mod_0 (ATerm);
ATerm get_module_1 (ATerm, ATerm a_66 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm j_55 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm n_57 (ATerm));
ATerm zip_1 (ATerm, ATerm p_57 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm), ATerm d_45 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm i_65 (ATerm), ATerm j_65 (ATerm));
ATerm for_3 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm h_45 (ATerm), ATerm i_45 (ATerm), ATerm j_45 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm w_45 (ATerm), ATerm x_45 (ATerm), ATerm y_45 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm z_65 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm m_60 (ATerm));
ATerm separate_by_1 (ATerm, ATerm n_60 (ATerm));
ATerm split_2 (ATerm, ATerm o_52 (ATerm), ATerm p_52 (ATerm));
ATerm debug_1 (ATerm, ATerm v_50 (ATerm));
ATerm obsolete_1 (ATerm, ATerm c_51 (ATerm));
ATerm open_file_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_59 (ATerm));
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm a_59 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm a_45 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_49 (ATerm));
ATerm try_1 (ATerm, ATerm o_65 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm filter_1 (ATerm, ATerm g_53 (ATerm));
ATerm list_1 (ATerm, ATerm c_59 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_44 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_50 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm Option_2 (ATerm, ATerm i_49 (ATerm), ATerm j_49 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_49 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm y_44 (ATerm, ATerm (ATerm)), ATerm z_44 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm u_44 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_44 (ATerm), ATerm n_44 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm w_51 (ATerm))
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
            ATerm y_7 = t;
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
                t = y_7;
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
                  t = Cons_2(t, g_0, w_51);
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
ATerm Imports_1 (ATerm t, ATerm w_43 (ATerm))
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
        t = w_43(t);
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
            ATerm z_7 = t;
            if(PushChoice()==0)
              {
                t = Imports_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              t = z_7;
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
ATerm TCons_2 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm))
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
          t = i_44(t);
          y_1 = t;
          t = not_null(v_1);
          t = j_44(t);
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
  ATerm a_8;
  a_8 = t;
  {
    ATerm k_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, k_0, _id);
    t = printnl_0(t);
  }
  t = a_8;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm b_8;
  b_8 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = b_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  t = SSL_ReadFromFile(not_null(n_4));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  t = SSL_open_file(not_null(r_4), (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue)));
  t = SSL_close_file(not_null(r_4));
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  a_5 = t;
  x_4 :
  if(match_cons(a_5, sym_TCons_2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      y_4 :
      if(match_cons(c_5, sym_TCons_2))
        {
          d_5 = ATgetArgument(c_5, 0);
          e_5 = ATgetArgument(c_5, 1);
          z_4 :
          if(match_cons(e_5, sym_TNil_0))
            {
              t = not_null(d_5);
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm c_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
                      h_5 = t;
                      w_4 :
                      if(match_cons(h_5, sym_Cons_2))
                        {
                          i_5 = ATgetArgument(h_5, 0);
                          j_5 = ATgetArgument(h_5, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_5), (ATerm) ATmakeAppl(sym_Nil_0))));
                          t = concat_strings_0(t);
                          t = file_exists_0(t);
                        }
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = c_8;
                      t = Tl_0(t);
                      t = m_5(t);
                    }
                  return(t);
                }
                t = m_5(t);
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
ATerm guarantee_extension_1 (ATerm t, ATerm y_51 (ATerm))
{
  t = basename_0(t);
  {
    ATerm l_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = y_51(t);
      return(t);
    }
    t = split_2(t, _id, l_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm p_5 = NULL;
  p_5 = t;
  {
    ATerm e_8;
    e_8 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue)), not_null(p_5)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = call_0(t);
    t = e_8;
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  w_5 = t;
  t_5 :
  if(match_cons(w_5, sym_TCons_2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      u_5 :
      if(match_cons(y_5, sym_TCons_2))
        {
          z_5 = ATgetArgument(y_5, 0);
          a_6 = ATgetArgument(y_5, 1);
          v_5 :
          if(match_cons(a_6, sym_TNil_0))
            t = SSL_call(not_null(x_5), not_null(z_5));
          else
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
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_Cons_2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      t = not_null(h_6);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  q_6 = t;
  n_6 :
  if(match_cons(q_6, sym_TCons_2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      o_6 :
      if(match_cons(s_6, sym_TCons_2))
        {
          t_6 = ATgetArgument(s_6, 0);
          u_6 = ATgetArgument(s_6, 1);
          p_6 :
          if(match_cons(u_6, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_6), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm w_44 (ATerm))
{
  ATerm a_7 = NULL;
  ATerm c_7 = NULL;
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = w_44(t);
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_7), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm Prefix_0 (ATerm t)
{
  ATerm p_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_TNil_0))
    {
      ATerm f_8 = t;
      if(PushChoice()==0)
        {
          ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_0);
          {
            ATerm n_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, n_0);
            q_7 = t;
            j_7 :
            if(match_cons(q_7, sym_Defined_2))
              {
                r_7 = ATgetArgument(q_7, 0);
                s_7 = ATgetArgument(q_7, 1);
                k_7 :
                if(match_string(r_7, "a_0"))
                  t = not_null(s_7);
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
          t = f_8;
          {
            ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_0);
            {
              ATerm o_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, o_0);
              u_7 = t;
              m_7 :
              if(match_cons(u_7, sym_Defined_2))
                {
                  v_7 = ATgetArgument(u_7, 0);
                  w_7 = ATgetArgument(u_7, 1);
                  n_7 :
                  if(match_string(v_7, "b_0"))
                    t = not_null(w_7);
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
  ATerm d_8 = NULL;
  d_8 = t;
  t = SSL_int_to_string(not_null(d_8));
  return(t);
}
ATerm get_pid_0 (ATerm t)
{
  t = SSL_get_pid();
  return(t);
}
ATerm parse_mod_0 (ATerm t)
{
  ATerm m_8 = NULL;
  ATerm o_8 = NULL,p_8 = NULL;
  m_8 = t;
  {
    ATerm q_8 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = get_pid_0(t);
    {
      ATerm s_8 = NULL;
      t = int_to_string_0(t);
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_8), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm t_8 = NULL;
        t = conc_strings_0(t);
        s_8 = t;
        if(p_8 != NULL && p_8 != s_8)
          _fail(s_8);
        else
          p_8 = s_8;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        {
          ATerm v_8 = NULL;
          t = Prefix_0(t);
          t_8 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_8), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("parse-mod", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm x_8 = NULL;
            t = conc_strings_0(t);
            v_8 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_8), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_8), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_8), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = call_0(t);
            t = not_null(p_8);
            t = ReadFromFile_0(t);
            x_8 = t;
            if(o_8 != NULL && o_8 != x_8)
              _fail(x_8);
            else
              o_8 = x_8;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_8), (ATerm) ATmakeAppl(sym_Nil_0));
            t = rm_files_0(t);
          }
        }
      }
    }
    t = not_null(o_8);
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm a_66 (ATerm))
{
  ATerm g_8 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
        return(t);
      }
      t = guarantee_extension_1(t, p_0);
      t = split_2(t, _id, a_66);
      t = find_in_path_0(t);
      t = split_2(t, _id, parse_mod_0);
      PopChoice();
    }
  else
    {
      t = g_8;
      {
        ATerm h_8 = t;
        if(PushChoice()==0)
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("tree", 0, ATtrue));
              return(t);
            }
            t = guarantee_extension_1(t, v_0);
            t = split_2(t, _id, a_66);
            t = find_in_path_0(t);
            t = split_2(t, _id, ReadFromFile_0);
            PopChoice();
          }
        else
          {
            t = h_8;
            {
              ATerm f_9 = NULL;
              f_9 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_9), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = fatal_error_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_TCons_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      t = not_null(l_9);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,c_12 = NULL,d_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,u_12 = NULL;
  m_11 = t;
  t_10 :
  if(match_cons(m_11, sym_TCons_2))
    {
      n_11 = ATgetArgument(m_11, 0);
      q_11 = ATgetArgument(m_11, 1);
      u_10 :
      if(match_cons(n_11, sym_Cons_2))
        {
          o_11 = ATgetArgument(n_11, 0);
          p_11 = ATgetArgument(n_11, 1);
          v_10 :
          if(match_cons(q_11, sym_TCons_2))
            {
              r_11 = ATgetArgument(q_11, 0);
              c_12 = ATgetArgument(q_11, 1);
              i_11 :
              if(match_cons(c_12, sym_TCons_2))
                {
                  d_12 = ATgetArgument(c_12, 0);
                  g_12 = ATgetArgument(c_12, 1);
                  j_11 :
                  if(match_cons(g_12, sym_TCons_2))
                    {
                      h_12 = ATgetArgument(g_12, 0);
                      i_12 = ATgetArgument(g_12, 1);
                      k_11 :
                      if(match_cons(i_12, sym_TCons_2))
                        {
                          j_12 = ATgetArgument(i_12, 0);
                          u_12 = ATgetArgument(i_12, 1);
                          l_11 :
                          if(match_cons(u_12, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_11), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_11), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_11), not_null(j_12)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  g_13 = t;
  d_13 :
  if(match_cons(g_13, sym_TCons_2))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      e_13 :
      if(match_cons(i_13, sym_TCons_2))
        {
          j_13 = ATgetArgument(i_13, 0);
          k_13 = ATgetArgument(i_13, 1);
          f_13 :
          if(match_cons(k_13, sym_TNil_0))
            {
              t = not_null(h_13);
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(j_13);
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
ATerm HdMember_1 (ATerm t, ATerm j_55 (ATerm))
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  q_13 :
  if(match_cons(r_13, sym_Cons_2))
    {
      s_13 = ATgetArgument(r_13, 0);
      t_13 = ATgetArgument(r_13, 1);
      t = j_55(t);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm w_13 = NULL;
          w_13 = t;
          if(s_13 != NULL && s_13 != w_13)
            _fail(w_13);
          else
            s_13 = w_13;
          return(t);
        }
        t = fetch_1(t, a_1);
      }
      t = not_null(t_13);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  e_14 = t;
  a_14 :
  if(match_cons(e_14, sym_TCons_2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      b_14 :
      if(match_cons(g_14, sym_TCons_2))
        {
          h_14 = ATgetArgument(g_14, 0);
          k_14 = ATgetArgument(g_14, 1);
          c_14 :
          if(match_cons(h_14, sym_Cons_2))
            {
              i_14 = ATgetArgument(h_14, 0);
              j_14 = ATgetArgument(h_14, 1);
              d_14 :
              if(match_cons(k_14, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_14), not_null(f_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_14), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  t_14 = t;
  q_14 :
  if(match_cons(t_14, sym_TCons_2))
    {
      u_14 = ATgetArgument(t_14, 0);
      v_14 = ATgetArgument(t_14, 1);
      r_14 :
      if(match_cons(v_14, sym_TCons_2))
        {
          w_14 = ATgetArgument(v_14, 0);
          x_14 = ATgetArgument(v_14, 1);
          s_14 :
          if(match_cons(x_14, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_14), not_null(w_14));
          else
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
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  m_15 = t;
  h_15 :
  if(match_cons(m_15, sym_TCons_2))
    {
      n_15 = ATgetArgument(m_15, 0);
      t_15 = ATgetArgument(m_15, 1);
      i_15 :
      if(match_cons(n_15, sym_Cons_2))
        {
          o_15 = ATgetArgument(n_15, 0);
          s_15 = ATgetArgument(n_15, 1);
          j_15 :
          if(match_cons(t_15, sym_TCons_2))
            {
              u_15 = ATgetArgument(t_15, 0);
              x_15 = ATgetArgument(t_15, 1);
              k_15 :
              if(match_cons(u_15, sym_Cons_2))
                {
                  v_15 = ATgetArgument(u_15, 0);
                  w_15 = ATgetArgument(u_15, 1);
                  l_15 :
                  if(match_cons(x_15, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_15), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_15), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm o_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  o_16 = t;
  g_16 :
  if(match_cons(o_16, sym_TCons_2))
    {
      q_16 = ATgetArgument(o_16, 0);
      r_16 = ATgetArgument(o_16, 1);
      h_16 :
      if(match_cons(q_16, sym_Nil_0))
        {
          i_16 :
          if(match_cons(r_16, sym_TCons_2))
            {
              s_16 = ATgetArgument(r_16, 0);
              t_16 = ATgetArgument(r_16, 1);
              j_16 :
              if(match_cons(s_16, sym_Nil_0))
                {
                  n_16 :
                  if(match_cons(t_16, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm n_57 (ATerm))
{
  ATerm v_16 (ATerm t)
  {
    ATerm i_8 = t;
    if(PushChoice()==0)
      {
        t = k_57(t);
        PopChoice();
      }
    else
      {
        t = i_8;
        t = l_57(t);
        {
          ATerm c_1 (ATerm t)
          {
            t = TCons_2(t, v_16, TNil_0);
            return(t);
          }
          t = TCons_2(t, n_57, c_1);
          t = m_57(t);
        }
      }
    return(t);
  }
  t = v_16(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm p_57 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, p_57);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  z_17 = t;
  q_17 :
  if(match_cons(z_17, sym_Cons_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      f_18 = ATgetArgument(z_17, 1);
      r_17 :
      if(match_cons(a_18, sym_TCons_2))
        {
          b_18 = ATgetArgument(a_18, 0);
          c_18 = ATgetArgument(a_18, 1);
          x_17 :
          if(match_cons(c_18, sym_TCons_2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              y_17 :
              if(match_cons(e_18, sym_TNil_0))
                {
                  ATerm q_18 = NULL,r_18 = NULL,h_19 = NULL,p_19 = NULL;
                  ATerm j_8;
                  j_8 = t;
                  {
                    ATerm u_18 = NULL;
                    ATerm w_18 = NULL,x_18 = NULL,d_19 = NULL,f_19 = NULL,g_19 = NULL;
                    t = not_null(d_18);
                    u_18 = t;
                    t = SSL_explode_term(not_null(u_18));
                    w_18 = t;
                    z_16 :
                    if(match_cons(w_18, sym_TCons_2))
                      {
                        x_18 = ATgetArgument(w_18, 0);
                        d_19 = ATgetArgument(w_18, 1);
                        a_17 :
                        if(match_cons(d_19, sym_TCons_2))
                          {
                            f_19 = ATgetArgument(d_19, 0);
                            g_19 = ATgetArgument(d_19, 1);
                            b_17 :
                            if(match_cons(g_19, sym_TNil_0))
                              {
                                if(q_18 != NULL && q_18 != x_18)
                                  _fail(x_18);
                                else
                                  q_18 = x_18;
                                if(r_18 != NULL && r_18 != f_19)
                                  _fail(f_19);
                                else
                                  r_18 = f_19;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = j_8;
                  {
                    ATerm i_19 = NULL;
                    ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
                    t = not_null(b_18);
                    i_19 = t;
                    t = SSL_explode_term(not_null(i_19));
                    k_19 = t;
                    k_17 :
                    if(match_cons(k_19, sym_TCons_2))
                      {
                        l_19 = ATgetArgument(k_19, 0);
                        m_19 = ATgetArgument(k_19, 1);
                        l_17 :
                        if(match_cons(m_19, sym_TCons_2))
                          {
                            n_19 = ATgetArgument(m_19, 0);
                            o_19 = ATgetArgument(m_19, 1);
                            m_17 :
                            if(match_cons(o_19, sym_TNil_0))
                              {
                                if(q_18 != NULL && q_18 != l_19)
                                  _fail(l_19);
                                else
                                  q_18 = l_19;
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
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    p_19 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  c_20 = t;
  y_19 :
  if(match_cons(c_20, sym_Cons_2))
    {
      d_20 = ATgetArgument(c_20, 0);
      i_20 = ATgetArgument(c_20, 1);
      z_19 :
      if(match_cons(d_20, sym_TCons_2))
        {
          e_20 = ATgetArgument(d_20, 0);
          f_20 = ATgetArgument(d_20, 1);
          a_20 :
          if(match_cons(f_20, sym_TCons_2))
            {
              g_20 = ATgetArgument(f_20, 0);
              h_20 = ATgetArgument(f_20, 1);
              b_20 :
              if(match_cons(h_20, sym_TNil_0))
                {
                  ATerm k_20 = NULL;
                  if(e_20 != NULL && e_20 != g_20)
                    _fail(g_20);
                  else
                    e_20 = g_20;
                  if(k_20 != NULL && k_20 != i_20)
                    _fail(i_20);
                  else
                    k_20 = i_20;
                  t = not_null(k_20);
                }
              else
                _fail(t);
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
  ATerm k_8 = t;
  if(PushChoice()==0)
    {
      ATerm d_1 (ATerm t)
      {
        ATerm r_20 = NULL;
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_20), (ATerm) ATmakeAppl(sym_TNil_0)));
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
        ATerm l_8 = t;
        if(PushChoice()==0)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                ATerm n_8 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = n_8;
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
            t = l_8;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, d_1, e_1, f_1);
      PopChoice();
    }
  else
    {
      t = k_8;
      {
        ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
        t_20 = t;
        o_20 :
        if(match_cons(t_20, sym_TCons_2))
          {
            u_20 = ATgetArgument(t_20, 0);
            v_20 = ATgetArgument(t_20, 1);
            p_20 :
            if(match_cons(v_20, sym_TCons_2))
              {
                w_20 = ATgetArgument(v_20, 0);
                x_20 = ATgetArgument(v_20, 1);
                q_20 :
                if(match_cons(x_20, sym_TNil_0))
                  {
                    t = not_null(u_20);
                    {
                      ATerm c_21 (ATerm t)
                      {
                        ATerm r_8 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = r_8;
                            {
                              ATerm u_8 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm n_1 (ATerm t)
                                  {
                                    t = not_null(w_20);
                                    return(t);
                                  }
                                  t = HdMember_1(t, n_1);
                                  t = c_21(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = u_8;
                                  t = Cons_2(t, _id, c_21);
                                }
                            }
                          }
                        return(t);
                      }
                      t = c_21(t);
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
ATerm GnNext_3 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm), ATerm d_45 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,f_22 = NULL,g_22 = NULL;
  s_21 = t;
  l_21 :
  if(match_cons(s_21, sym_TCons_2))
    {
      t_21 = ATgetArgument(s_21, 0);
      w_21 = ATgetArgument(s_21, 1);
      m_21 :
      if(match_cons(t_21, sym_Cons_2))
        {
          u_21 = ATgetArgument(t_21, 0);
          v_21 = ATgetArgument(t_21, 1);
          n_21 :
          if(match_cons(w_21, sym_TCons_2))
            {
              x_21 = ATgetArgument(w_21, 0);
              y_21 = ATgetArgument(w_21, 1);
              o_21 :
              if(match_cons(y_21, sym_TCons_2))
                {
                  z_21 = ATgetArgument(y_21, 0);
                  a_22 = ATgetArgument(y_21, 1);
                  p_21 :
                  if(match_cons(a_22, sym_TCons_2))
                    {
                      b_22 = ATgetArgument(a_22, 0);
                      c_22 = ATgetArgument(a_22, 1);
                      q_21 :
                      if(match_cons(c_22, sym_TCons_2))
                        {
                          f_22 = ATgetArgument(c_22, 0);
                          g_22 = ATgetArgument(c_22, 1);
                          r_21 :
                          if(match_cons(g_22, sym_TNil_0))
                            {
                              ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,t_22 = NULL;
                              ATerm q_22 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm r_22 = NULL;
                                t = b_45(t);
                                q_22 = t;
                                if(n_22 != NULL && n_22 != q_22)
                                  _fail(q_22);
                                else
                                  n_22 = q_22;
                                t = not_null(n_22);
                                {
                                  ATerm s_22 = NULL;
                                  t = c_45(t);
                                  r_22 = t;
                                  if(o_22 != NULL && o_22 != r_22)
                                    _fail(r_22);
                                  else
                                    o_22 = r_22;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = diff_0(t);
                                  s_22 = t;
                                  if(p_22 != NULL && p_22 != s_22)
                                    _fail(s_22);
                                  else
                                    p_22 = s_22;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm v_22 = NULL;
                                t = conc_0(t);
                                t_22 = t;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm x_22 = NULL;
                                  t = conc_0(t);
                                  v_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_22), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = d_45(t);
                                  x_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_22), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  q_23 = t;
  h_23 :
  if(match_cons(q_23, sym_TCons_2))
    {
      r_23 = ATgetArgument(q_23, 0);
      s_23 = ATgetArgument(q_23, 1);
      i_23 :
      if(match_cons(r_23, sym_Nil_0))
        {
          j_23 :
          if(match_cons(s_23, sym_TCons_2))
            {
              t_23 = ATgetArgument(s_23, 0);
              u_23 = ATgetArgument(s_23, 1);
              m_23 :
              if(match_cons(u_23, sym_TCons_2))
                {
                  v_23 = ATgetArgument(u_23, 0);
                  w_23 = ATgetArgument(u_23, 1);
                  n_23 :
                  if(match_cons(w_23, sym_TCons_2))
                    {
                      x_23 = ATgetArgument(w_23, 0);
                      y_23 = ATgetArgument(w_23, 1);
                      o_23 :
                      if(match_cons(y_23, sym_TCons_2))
                        {
                          z_23 = ATgetArgument(y_23, 0);
                          a_24 = ATgetArgument(y_23, 1);
                          p_23 :
                          if(match_cons(a_24, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  l_24 = t;
  h_24 :
  if(match_cons(l_24, sym_TCons_2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      i_24 :
      if(match_cons(n_24, sym_TCons_2))
        {
          o_24 = ATgetArgument(n_24, 0);
          p_24 = ATgetArgument(n_24, 1);
          j_24 :
          if(match_cons(p_24, sym_TCons_2))
            {
              q_24 = ATgetArgument(p_24, 0);
              r_24 = ATgetArgument(p_24, 1);
              k_24 :
              if(match_cons(r_24, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_24), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
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
ATerm while_not_2 (ATerm t, ATerm i_65 (ATerm), ATerm j_65 (ATerm))
{
  ATerm w_24 (ATerm t)
  {
    ATerm w_8 = t;
    if(PushChoice()==0)
      {
        t = i_65(t);
        PopChoice();
      }
    else
      {
        t = w_8;
        t = j_65(t);
        t = w_24(t);
      }
    return(t);
  }
  t = w_24(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  t = l_65(t);
  t = while_not_2(t, m_65, n_65);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm h_45 (ATerm), ATerm i_45 (ATerm), ATerm j_45 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm y_8 = t;
    if(PushChoice()==0)
      {
        t = GnNext_3(t, h_45, i_45, j_45);
        PopChoice();
      }
    else
      {
        t = y_8;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, o_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm w_45 (ATerm), ATerm x_45 (ATerm), ATerm y_45 (ATerm))
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  t = graph_nodes_undef_roots_3(t, w_45, x_45, y_45);
  b_25 = t;
  y_24 :
  if(match_cons(b_25, sym_TCons_2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      z_24 :
      if(match_cons(d_25, sym_TCons_2))
        {
          e_25 = ATgetArgument(d_25, 0);
          f_25 = ATgetArgument(d_25, 1);
          a_25 :
          if(match_cons(f_25, sym_TNil_0))
            t = not_null(c_25);
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm s_25 = NULL;
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_25), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  {
    ATerm p_1 (ATerm t)
    {
      t = Fst_0(t);
      {
        ATerm r_1 (ATerm t)
        {
          ATerm u_25 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = z_65(t);
          u_25 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), not_null(u_25));
          return(t);
        }
        t = get_module_1(t, r_1);
      }
      return(t);
    }
    ATerm q_1 (ATerm t)
    {
      ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
      w_25 = t;
      m_25 :
      if(match_cons(w_25, sym_TCons_2))
        {
          x_25 = ATgetArgument(w_25, 0);
          y_25 = ATgetArgument(w_25, 1);
          n_25 :
          if(match_cons(y_25, sym_TCons_2))
            {
              z_25 = ATgetArgument(y_25, 0);
              a_26 = ATgetArgument(y_25, 1);
              o_25 :
              if(match_cons(a_26, sym_TCons_2))
                {
                  b_26 = ATgetArgument(a_26, 0);
                  c_26 = ATgetArgument(a_26, 1);
                  p_25 :
                  if(match_cons(c_26, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_25), not_null(b_26));
                  else
                    _fail(t);
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
  ATerm l_26 = NULL;
  l_26 = t;
  t = SSL_exit(not_null(l_26));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  s_26 = t;
  p_26 :
  if(match_cons(s_26, sym_TCons_2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      q_26 :
      if(match_cons(u_26, sym_TCons_2))
        {
          v_26 = ATgetArgument(u_26, 0);
          w_26 = ATgetArgument(u_26, 1);
          r_26 :
          if(match_cons(w_26, sym_TNil_0))
            {
              ATerm z_8;
              z_8 = t;
              t = SSL_printnl(not_null(t_26), not_null(v_26));
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
  ATerm b_27 = NULL;
  b_27 = t;
  t = SSL_close_file(not_null(b_27));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm m_60 (ATerm))
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_Cons_2))
    {
      i_27 = ATgetArgument(h_27, 0);
      j_27 = ATgetArgument(h_27, 1);
      {
        ATerm m_27 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = m_60(t);
        m_27 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_27), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_27), not_null(j_27)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm a_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_9;
      {
        ATerm x_1 (ATerm t)
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
              t = Cons_2(t, _id, x_1);
              t = Sep_1(t, n_60);
            }
          return(t);
        }
        t = Cons_2(t, _id, x_1);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_52 (ATerm), ATerm p_52 (ATerm))
{
  ATerm u_27 = NULL;
  ATerm w_27 = NULL;
  u_27 = t;
  {
    ATerm y_27 = NULL;
    t = o_52(t);
    w_27 = t;
    t = not_null(u_27);
    t = p_52(t);
    y_27 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_27), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_50 (ATerm))
{
  ATerm c_9;
  c_9 = t;
  {
    ATerm z_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm b_2 (ATerm t)
    {
      ATerm f_28 = NULL;
      ATerm h_28 = NULL;
      f_28 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = v_50(t);
      h_28 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_28), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_28), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, z_1, b_2);
    t = printnl_0(t);
  }
  t = c_9;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm c_51 (ATerm))
{
  ATerm d_9;
  d_9 = t;
  t = c_51(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, c_2);
  }
  t = d_9;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  ATerm e_9 = t;
  if(PushChoice()==0)
    {
      ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,z_28 = NULL,a_29 = NULL;
      u_28 = t;
      m_28 :
      if(match_cons(u_28, sym_TCons_2))
        {
          v_28 = ATgetArgument(u_28, 0);
          w_28 = ATgetArgument(u_28, 1);
          n_28 :
          if(match_cons(w_28, sym_TCons_2))
            {
              z_28 = ATgetArgument(w_28, 0);
              a_29 = ATgetArgument(w_28, 1);
              o_28 :
              if(match_cons(a_29, sym_TNil_0))
                {
                  if(t_28 != NULL && t_28 != v_28)
                    _fail(v_28);
                  else
                    t_28 = v_28;
                  if(s_28 != NULL && s_28 != z_28)
                    _fail(z_28);
                  else
                    s_28 = z_28;
                  t = SSL_open_file(not_null(t_28), not_null(s_28));
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
      t = e_9;
      {
        ATerm b_29 = NULL;
        ATerm d_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, d_2);
        b_29 = t;
        if(t_28 != NULL && t_28 != b_29)
          _fail(b_29);
        else
          t_28 = b_29;
        t = SSL_open_file(not_null(t_28), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
      }
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm e_29 (ATerm t)
  {
    ATerm g_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, e_29);
        PopChoice();
      }
    else
      {
        t = g_9;
        t = Nil_0(t);
        t = p_59(t);
      }
    return(t);
  }
  t = e_29(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = h_9;
      {
        ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
        h_29 = t;
        g_29 :
        if(match_cons(h_29, sym_Cons_2))
          {
            i_29 = ATgetArgument(h_29, 0);
            j_29 = ATgetArgument(h_29, 1);
            t = not_null(i_29);
            {
              ATerm e_2 (ATerm t)
              {
                t = not_null(j_29);
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
ATerm map_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm o_29 (ATerm t)
  {
    ATerm i_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = i_9;
        t = Cons_2(t, a_59, o_29);
      }
    return(t);
  }
  t = o_29(t);
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
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  t_29 = t;
  q_29 :
  if(match_cons(t_29, sym_TCons_2))
    {
      u_29 = ATgetArgument(t_29, 0);
      v_29 = ATgetArgument(t_29, 1);
      r_29 :
      if(match_cons(v_29, sym_TCons_2))
        {
          w_29 = ATgetArgument(v_29, 0);
          x_29 = ATgetArgument(v_29, 1);
          s_29 :
          if(match_cons(x_29, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_29), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm create_dep_file_1 (ATerm t, ATerm a_45 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  n_30 = t;
  g_30 :
  if(match_cons(n_30, sym_TCons_2))
    {
      o_30 = ATgetArgument(n_30, 0);
      p_30 = ATgetArgument(n_30, 1);
      h_30 :
      if(match_cons(p_30, sym_TCons_2))
        {
          q_30 = ATgetArgument(p_30, 0);
          r_30 = ATgetArgument(p_30, 1);
          i_30 :
          if(match_cons(r_30, sym_TNil_0))
            {
              ATerm c_31 = NULL,d_31 = NULL;
              ATerm e_31 = NULL;
              t = not_null(o_30);
              {
                ATerm f_31 = NULL;
                t = a_45(t);
                e_31 = t;
                if(c_31 != NULL && c_31 != e_31)
                  _fail(e_31);
                else
                  c_31 = e_31;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm h_31 = NULL;
                  t = add_extension_0(t);
                  f_31 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm i_31 = NULL;
                    t = open_file_0(t);
                    h_31 = t;
                    if(d_31 != NULL && d_31 != h_31)
                      _fail(h_31);
                    else
                      d_31 = h_31;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue)), not_null(q_30));
                    {
                      ATerm f_2 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
                        return(t);
                      }
                      t = separate_by_1(t, f_2);
                      i_31 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_31), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_31), not_null(i_31)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = printnl_0(t);
                      t = not_null(d_31);
                      t = close_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_30), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm fetch_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm p_31 (ATerm t)
  {
    ATerm n_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, j_59, _id);
        PopChoice();
      }
    else
      {
        t = n_9;
        t = Cons_2(t, _id, p_31);
      }
    return(t);
  }
  t = p_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_49 (ATerm))
{
  t = fetch_1(t, p_49);
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm o_9 = t;
  if(PushChoice()==0)
    {
      t = o_65(t);
      PopChoice();
    }
  else
    t = o_9;
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL;
  u_31 = t;
  r_31 :
  if(match_cons(u_31, sym_TCons_2))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      s_31 :
      if(match_cons(w_31, sym_TCons_2))
        {
          x_31 = ATgetArgument(w_31, 0);
          y_31 = ATgetArgument(w_31, 1);
          t_31 :
          if(match_cons(y_31, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(v_31), not_null(x_31));
          else
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
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
  g_32 = t;
  d_32 :
  if(match_cons(g_32, sym_TCons_2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      e_32 :
      if(match_cons(i_32, sym_TCons_2))
        {
          j_32 = ATgetArgument(i_32, 0);
          k_32 = ATgetArgument(i_32, 1);
          f_32 :
          if(match_cons(k_32, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(h_32), not_null(j_32));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym_Cons_2))
    {
      r_32 = ATgetArgument(q_32, 0);
      s_32 = ATgetArgument(q_32, 1);
      t = not_null(s_32);
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm g_53 (ATerm))
{
  ATerm w_32 (ATerm t)
  {
    ATerm p_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = p_9;
        {
          ATerm q_9 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, g_53, w_32);
              PopChoice();
            }
          else
            {
              t = q_9;
              t = Tl_0(t);
              t = w_32(t);
            }
        }
      }
    return(t);
  }
  t = w_32(t);
  return(t);
}
ATerm list_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm x_32 (ATerm t)
  {
    ATerm r_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = r_9;
        t = Cons_2(t, c_59, x_32);
      }
    return(t);
  }
  t = x_32(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm a_33 = NULL;
  ATerm c_3 (ATerm t)
  {
    ATerm f_33 = NULL,g_33 = NULL;
    f_33 = t;
    z_32 :
    if(match_cons(f_33, sym_Program_1))
      {
        g_33 = ATgetArgument(f_33, 0);
        if(a_33 != NULL && a_33 != g_33)
          _fail(g_33);
        else
          a_33 = g_33;
      }
    else
      _fail(t);
    return(t);
  }
  t = option_defined_1(t, c_3);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_33 = NULL;
  j_33 = t;
  i_33 :
  if(!(match_cons(j_33, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_44 (ATerm))
{
  ATerm n_33 = NULL,o_33 = NULL;
  n_33 = t;
  m_33 :
  if(match_cons(n_33, sym_Undefined_1))
    {
      o_33 = ATgetArgument(n_33, 0);
      {
        ATerm q_33 = NULL;
        t = not_null(o_33);
        t = c_44(t);
        q_33 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_33));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  u_33 :
  if(!(match_cons(v_33, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_50 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    ATerm s_9 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = s_9;
        {
          ATerm t_9 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = t_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_3);
  t = k_50(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  g_34 = t;
  e_34 :
  if(match_cons(g_34, sym_Cons_2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      f_34 :
      if(match_cons(i_34, sym_Cons_2))
        {
          j_34 = ATgetArgument(i_34, 0);
          k_34 = ATgetArgument(i_34, 1);
          {
            ATerm o_34 = NULL;
            t = not_null(h_34);
            t = k_49(t);
            t = not_null(j_34);
            t = l_49(t);
            o_34 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_34), not_null(k_34));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm i_49 (ATerm), ATerm j_49 (ATerm))
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  i_35 :
  if(match_cons(j_35, sym_Cons_2))
    {
      k_35 = ATgetArgument(j_35, 0);
      l_35 = ATgetArgument(j_35, 1);
      {
        ATerm o_35 = NULL;
        t = not_null(k_35);
        t = i_49(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = j_49(t);
        o_35 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_35), not_null(l_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_9 = t;
  if(PushChoice()==0)
    {
      ATerm e_3 (ATerm t)
      {
        ATerm m_36 = NULL;
        m_36 = t;
        s_35 :
        if(!(match_string(m_36, "-S")))
          _fail(t);
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, e_3, f_3);
      PopChoice();
    }
  else
    {
      t = u_9;
      {
        ATerm v_9 = t;
        if(PushChoice()==0)
          {
            ATerm g_3 (ATerm t)
            {
              ATerm n_36 = NULL;
              n_36 = t;
              t_35 :
              if(!(match_string(n_36, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, g_3, h_3);
            PopChoice();
          }
        else
          {
            t = v_9;
            {
              ATerm w_9 = t;
              if(PushChoice()==0)
                {
                  ATerm m_3 (ATerm t)
                  {
                    ATerm o_36 = NULL;
                    o_36 = t;
                    u_35 :
                    if(!(match_string(o_36, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm n_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, m_3, n_3);
                  PopChoice();
                }
              else
                {
                  t = w_9;
                  {
                    ATerm x_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm o_3 (ATerm t)
                        {
                          ATerm p_36 = NULL;
                          p_36 = t;
                          v_35 :
                          if(!(match_string(p_36, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm p_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, o_3, p_3);
                        PopChoice();
                      }
                    else
                      {
                        t = x_9;
                        {
                          ATerm y_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm s_3 (ATerm t)
                              {
                                ATerm q_36 = NULL;
                                q_36 = t;
                                w_35 :
                                if(!(match_string(q_36, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm t_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, s_3, t_3);
                              PopChoice();
                            }
                          else
                            {
                              t = y_9;
                              {
                                ATerm z_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm u_3 (ATerm t)
                                    {
                                      ATerm r_36 = NULL;
                                      r_36 = t;
                                      x_35 :
                                      if(!(match_string(r_36, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm g_4 (ATerm t)
                                    {
                                      ATerm s_36 = NULL;
                                      s_36 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(s_36));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, u_3, g_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = z_9;
                                    {
                                      ATerm a_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm j_4 (ATerm t)
                                          {
                                            ATerm u_36 = NULL;
                                            u_36 = t;
                                            z_35 :
                                            if(!(match_string(u_36, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_4 (ATerm t)
                                          {
                                            ATerm v_36 = NULL;
                                            v_36 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_36));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, j_4, k_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = a_10;
                                          {
                                            ATerm b_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm l_4 (ATerm t)
                                                {
                                                  ATerm x_36 = NULL;
                                                  x_36 = t;
                                                  b_36 :
                                                  if(!(match_string(x_36, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm m_4 (ATerm t)
                                                {
                                                  ATerm y_36 = NULL;
                                                  y_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_36));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, l_4, m_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = b_10;
                                                {
                                                  ATerm c_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm o_4 (ATerm t)
                                                      {
                                                        ATerm a_37 = NULL;
                                                        a_37 = t;
                                                        d_36 :
                                                        if(!(match_string(a_37, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm p_4 (ATerm t)
                                                      {
                                                        ATerm b_37 = NULL;
                                                        b_37 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_37));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, o_4, p_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = c_10;
                                                      {
                                                        ATerm d_10 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm q_4 (ATerm t)
                                                            {
                                                              ATerm d_37 = NULL;
                                                              d_37 = t;
                                                              f_36 :
                                                              if(!(match_string(d_37, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm s_4 (ATerm t)
                                                            {
                                                              ATerm e_37 = NULL;
                                                              e_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_37));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, q_4, s_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = d_10;
                                                            {
                                                              ATerm e_10 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm t_4 (ATerm t)
                                                                  {
                                                                    ATerm g_37 = NULL;
                                                                    g_37 = t;
                                                                    h_36 :
                                                                    if(!(match_string(g_37, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm u_4 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, t_4, u_4);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = e_10;
                                                                  {
                                                                    ATerm f_10 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm v_4 (ATerm t)
                                                                        {
                                                                          ATerm h_37 = NULL;
                                                                          h_37 = t;
                                                                          i_36 :
                                                                          if(!(match_string(h_37, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm f_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, v_4, f_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_10;
                                                                        {
                                                                          ATerm g_10 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm g_5 (ATerm t)
                                                                              {
                                                                                ATerm i_37 = NULL;
                                                                                i_37 = t;
                                                                                j_36 :
                                                                                if(!(match_string(i_37, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm k_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, g_5, k_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_10;
                                                                              {
                                                                                ATerm h_10 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm l_5 (ATerm t)
                                                                                    {
                                                                                      ATerm j_37 = NULL;
                                                                                      j_37 = t;
                                                                                      k_36 :
                                                                                      if(!(match_string(j_37, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm n_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, l_5, n_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_10;
                                                                                    {
                                                                                      ATerm o_5 (ATerm t)
                                                                                      {
                                                                                        ATerm k_37 = NULL;
                                                                                        k_37 = t;
                                                                                        l_36 :
                                                                                        if(!(match_string(k_37, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm q_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, o_5, q_5);
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
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
  s_37 = t;
  r_37 :
  if(match_cons(s_37, sym_Cons_2))
    {
      t_37 = ATgetArgument(s_37, 0);
      u_37 = ATgetArgument(s_37, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_37)), not_null(u_37));
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  y_37 :
  if(!(match_cons(z_37, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_49 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm b_38 = NULL;
    b_38 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_38));
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm i_10 = t;
    if(PushChoice()==0)
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
            t = g_49(t);
            t = Cons_2(t, _id, s_5);
          }
        PopChoice();
      }
    else
      {
        t = i_10;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, r_5, s_5);
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm k_10 = t;
    if(PushChoice()==0)
      {
        t = io_options_0(t);
        PopChoice();
      }
    else
      {
        t = k_10;
        {
          ATerm l_10 = t;
          if(PushChoice()==0)
            {
              ATerm c_6 (ATerm t)
              {
                ATerm m_38 = NULL;
                m_38 = t;
                f_38 :
                if(!(match_string(m_38, "-I")))
                  _fail(t);
                return(t);
              }
              ATerm d_6 (ATerm t)
              {
                ATerm n_38 = NULL;
                n_38 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(n_38));
                return(t);
              }
              t = ArgOption_2(t, c_6, d_6);
              PopChoice();
            }
          else
            {
              t = l_10;
              {
                ATerm m_10 = t;
                if(PushChoice()==0)
                  {
                    ATerm e_6 (ATerm t)
                    {
                      ATerm p_38 = NULL;
                      p_38 = t;
                      h_38 :
                      if(!(match_string(p_38, "-nodep")))
                        _fail(t);
                      return(t);
                    }
                    ATerm j_6 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_NoDependency_0);
                      return(t);
                    }
                    t = Option_2(t, e_6, j_6);
                    PopChoice();
                  }
                else
                  {
                    t = m_10;
                    {
                      ATerm n_10 = t;
                      if(PushChoice()==0)
                        {
                          ATerm k_6 (ATerm t)
                          {
                            ATerm q_38 = NULL;
                            q_38 = t;
                            i_38 :
                            if(!(match_string(q_38, "-dep")))
                              _fail(t);
                            return(t);
                          }
                          ATerm l_6 (ATerm t)
                          {
                            ATerm r_38 = NULL;
                            r_38 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(r_38));
                            return(t);
                          }
                          t = ArgOption_2(t, k_6, l_6);
                          PopChoice();
                        }
                      else
                        {
                          t = n_10;
                          {
                            ATerm m_6 (ATerm t)
                            {
                              ATerm t_38 = NULL;
                              t_38 = t;
                              k_38 :
                              if(!(match_string(t_38, "--prefix")))
                                _fail(t);
                              return(t);
                            }
                            ATerm v_6 (ATerm t)
                            {
                              ATerm u_38 = NULL;
                              u_38 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(u_38)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm w_6 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, w_6);
                              }
                              t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(u_38));
                              return(t);
                            }
                            t = ArgOption_2(t, m_6, v_6);
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
  t = parse_options_1(t, b_6);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm y_44 (ATerm, ATerm (ATerm)), ATerm z_44 (ATerm))
{
  ATerm s_39 = NULL;
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,d_40 = NULL;
  t = pack_module_options_0(t);
  s_39 = t;
  {
    ATerm x_6 (ATerm t)
    {
      t = need_help_1(t, pack_modules_usage_0);
      return(t);
    }
    t = try_1(t, x_6);
    {
      ATerm y_6 (ATerm t)
      {
        ATerm z_6 (ATerm t)
        {
          ATerm y_39 = NULL,z_39 = NULL;
          y_39 = t;
          e_39 :
          if(match_cons(y_39, sym_Program_1))
            {
              z_39 = ATgetArgument(y_39, 0);
              if(u_39 != NULL && u_39 != z_39)
                _fail(z_39);
              else
                u_39 = z_39;
            }
          else
            {
              if(match_cons(y_39, sym_Input_1))
                {
                  z_39 = ATgetArgument(y_39, 0);
                  if(v_39 != NULL && v_39 != z_39)
                    _fail(z_39);
                  else
                    v_39 = z_39;
                }
              else
                {
                  if(match_cons(y_39, sym_Output_1))
                    {
                      z_39 = ATgetArgument(y_39, 0);
                      if(w_39 != NULL && w_39 != z_39)
                        _fail(z_39);
                      else
                        w_39 = z_39;
                    }
                  else
                    {
                      if(match_cons(y_39, sym_Dependency_1))
                        {
                          z_39 = ATgetArgument(y_39, 0);
                          if(x_39 != NULL && x_39 != z_39)
                            _fail(z_39);
                          else
                            x_39 = z_39;
                        }
                      else
                        _fail(t);
                    }
                }
            }
          return(t);
        }
        t = try_1(t, z_6);
        return(t);
      }
      t = list_1(t, y_6);
      {
        ATerm f_40 = NULL;
        ATerm b_7 (ATerm t)
        {
          ATerm a_40 = NULL,b_40 = NULL;
          a_40 = t;
          g_39 :
          if(match_cons(a_40, sym_Include_1))
            {
              b_40 = ATgetArgument(a_40, 0);
              t = not_null(b_40);
            }
          else
            _fail(t);
          return(t);
        }
        t = filter_1(t, b_7);
        d_40 = t;
        {
          ATerm h_40 = NULL;
          ATerm o_10 = t;
          if(PushChoice()==0)
            {
              t = not_null(v_39);
              PopChoice();
            }
          else
            {
              t = o_10;
              t = (ATerm) ATmakeAppl(sym_stdin_0);
            }
          f_40 = t;
          {
            ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
            ATerm p_10 = t;
            if(PushChoice()==0)
              {
                t = not_null(w_39);
                PopChoice();
              }
            else
              {
                t = p_10;
                t = (ATerm) ATmakeAppl(sym_stdout_0);
              }
            h_40 = t;
            t = not_null(f_40);
            {
              ATerm d_7 (ATerm t)
              {
                t = not_null(d_40);
                return(t);
              }
              t = y_44(t, d_7);
              j_40 = t;
              p_39 :
              if(match_cons(j_40, sym_TCons_2))
                {
                  k_40 = ATgetArgument(j_40, 0);
                  l_40 = ATgetArgument(j_40, 1);
                  q_39 :
                  if(match_cons(l_40, sym_TCons_2))
                    {
                      m_40 = ATgetArgument(l_40, 0);
                      n_40 = ATgetArgument(l_40, 1);
                      r_39 :
                      if(match_cons(n_40, sym_TNil_0))
                        {
                          ATerm r_40 = NULL,u_40 = NULL;
                          t = not_null(s_39);
                          {
                            ATerm q_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm e_7 (ATerm t)
                                {
                                  ATerm q_40 = NULL;
                                  q_40 = t;
                                  l_39 :
                                  if(!(match_cons(q_40, sym_Binary_0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = option_defined_1(t, e_7);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToBinaryFile_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = q_10;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToTextFile_0(t);
                              }
                            {
                              ATerm f_7 (ATerm t)
                              {
                                ATerm t_40 = NULL;
                                ATerm r_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = not_null(x_39);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = r_10;
                                    {
                                      ATerm s_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = not_null(s_39);
                                          {
                                            ATerm g_7 (ATerm t)
                                            {
                                              ATerm s_40 = NULL;
                                              s_40 = t;
                                              m_39 :
                                              if(!(match_cons(s_40, sym_NoDependency_0)))
                                                _fail(t);
                                              return(t);
                                            }
                                            t = option_defined_1(t, g_7);
                                          }
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        t = s_10;
                                      t = z_44(t);
                                    }
                                  }
                                t_40 = t;
                                if(r_40 != NULL && r_40 != t_40)
                                  _fail(t_40);
                                else
                                  r_40 = t_40;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm h_7 (ATerm t)
                                  {
                                    t = not_null(r_40);
                                    return(t);
                                  }
                                  t = create_dep_file_1(t, h_7);
                                }
                                return(t);
                              }
                              t = try_1(t, f_7);
                              t = dtime_0(t);
                              u_40 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_39), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_40), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  ATerm w_10;
  w_10 = t;
  {
    ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
    q_41 = t;
    j_41 :
    if(match_cons(q_41, sym_TCons_2))
      {
        r_41 = ATgetArgument(q_41, 0);
        s_41 = ATgetArgument(q_41, 1);
        k_41 :
        if(match_cons(s_41, sym_TCons_2))
          {
            t_41 = ATgetArgument(s_41, 0);
            u_41 = ATgetArgument(s_41, 1);
            l_41 :
            if(match_cons(u_41, sym_TCons_2))
              {
                v_41 = ATgetArgument(u_41, 0);
                w_41 = ATgetArgument(u_41, 1);
                m_41 :
                if(match_cons(w_41, sym_TNil_0))
                  {
                    if(n_41 != NULL && n_41 != r_41)
                      _fail(r_41);
                    else
                      n_41 = r_41;
                    if(o_41 != NULL && o_41 != t_41)
                      _fail(t_41);
                    else
                      o_41 = t_41;
                    if(p_41 != NULL && p_41 != v_41)
                      _fail(v_41);
                    else
                      p_41 = v_41;
                    t = SSL_table_put(not_null(n_41), not_null(o_41), not_null(p_41));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = w_10;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  c_42 = t;
  z_41 :
  if(match_cons(c_42, sym_TCons_2))
    {
      d_42 = ATgetArgument(c_42, 0);
      e_42 = ATgetArgument(c_42, 1);
      a_42 :
      if(match_cons(e_42, sym_TCons_2))
        {
          f_42 = ATgetArgument(e_42, 0);
          g_42 = ATgetArgument(e_42, 1);
          b_42 :
          if(match_cons(g_42, sym_TNil_0))
            t = SSL_table_get(not_null(d_42), not_null(f_42));
          else
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
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  q_42 = t;
  m_42 :
  if(match_cons(q_42, sym_TCons_2))
    {
      r_42 = ATgetArgument(q_42, 0);
      s_42 = ATgetArgument(q_42, 1);
      n_42 :
      if(match_cons(s_42, sym_TCons_2))
        {
          t_42 = ATgetArgument(s_42, 0);
          u_42 = ATgetArgument(s_42, 1);
          o_42 :
          if(match_cons(u_42, sym_TCons_2))
            {
              v_42 = ATgetArgument(u_42, 0);
              w_42 = ATgetArgument(u_42, 1);
              p_42 :
              if(match_cons(w_42, sym_TNil_0))
                {
                  ATerm x_10;
                  x_10 = t;
                  {
                    ATerm a_43 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm y_10 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = y_10;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      a_43 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_42), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_42), not_null(a_43)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = x_10;
                }
              else
                _fail(t);
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
ATerm assert_1 (ATerm t, ATerm u_44 (ATerm))
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
  l_43 = t;
  i_43 :
  if(match_cons(l_43, sym_TCons_2))
    {
      m_43 = ATgetArgument(l_43, 0);
      n_43 = ATgetArgument(l_43, 1);
      j_43 :
      if(match_cons(n_43, sym_TCons_2))
        {
          o_43 = ATgetArgument(n_43, 0);
          p_43 = ATgetArgument(n_43, 1);
          k_43 :
          if(match_cons(p_43, sym_TNil_0))
            {
              ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
              ATerm z_10;
              z_10 = t;
              {
                ATerm v_43 = NULL;
                ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
                t = u_44(t);
                v_43 = t;
                if(s_43 != NULL && s_43 != v_43)
                  _fail(v_43);
                else
                  s_43 = v_43;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_43), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm a_11 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_43), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_11;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  x_43 = t;
                  h_43 :
                  if(match_cons(x_43, sym_Cons_2))
                    {
                      y_43 = ATgetArgument(x_43, 0);
                      z_43 = ATgetArgument(x_43, 1);
                      if(t_43 != NULL && t_43 != y_43)
                        _fail(y_43);
                      else
                        t_43 = y_43;
                      if(u_43 != NULL && u_43 != z_43)
                        _fail(z_43);
                      else
                        u_43 = z_43;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_43), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_43), not_null(t_43)), not_null(u_43)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = z_10;
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
  ATerm f_44 = NULL;
  f_44 = t;
  t = SSL_implode_string(not_null(f_44));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_44 = NULL;
  l_44 = t;
  t = SSL_explode_string(not_null(l_44));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm b_11 = t;
    if(PushChoice()==0)
      {
        ATerm s_44 (ATerm t)
        {
          ATerm c_11 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, s_44);
              PopChoice();
            }
          else
            {
              t = c_11;
              {
                ATerm i_7 (ATerm t)
                {
                  ATerm r_44 = NULL;
                  r_44 = t;
                  q_44 :
                  if(!(match_int(r_44, 47)))
                    _fail(t);
                  return(t);
                }
                ATerm l_7 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = Cons_2(t, i_7, l_7);
              }
            }
          return(t);
        }
        t = s_44(t);
        PopChoice();
      }
    else
      {
        t = b_11;
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_44 (ATerm), ATerm n_44 (ATerm))
{
  ATerm f_45 = NULL,g_45 = NULL,k_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym_Cons_2))
    {
      g_45 = ATgetArgument(f_45, 0);
      k_45 = ATgetArgument(f_45, 1);
      {
        ATerm n_45 = NULL;
        t = not_null(g_45);
        {
          ATerm p_45 = NULL;
          t = m_44(t);
          n_45 = t;
          t = not_null(k_45);
          t = n_44(t);
          p_45 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_45), not_null(p_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm v_45 = NULL;
  ATerm d_11;
  d_11 = t;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm z_45 = NULL;
      t = get_path_0(t);
      z_45 = t;
      if(v_45 != NULL && v_45 != z_45)
        _fail(z_45);
      else
        v_45 = z_45;
      return(t);
    }
    t = Cons_2(t, t_7, _id);
    {
      ATerm e_11;
      e_11 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(v_45)), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm x_7 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
          return(t);
        }
        t = assert_1(t, x_7);
      }
      t = e_11;
    }
  }
  t = d_11;
  t = pack_modules_2(t, pack_stratego_1, basename_0);
  return(t);
}
