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
ATerm basename_1 (ATerm, ATerm v_50 (ATerm));
ATerm basename_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm e_43 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm q_43 (ATerm), ATerm r_43 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_51 (ATerm), ATerm o_51 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm guarantee_extension_1 (ATerm, ATerm x_50 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm e_44 (ATerm));
ATerm Prefix_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_pid_0 (ATerm);
ATerm parse_mod_0 (ATerm);
ATerm get_module_1 (ATerm, ATerm x_64 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm i_54 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm));
ATerm zip_1 (ATerm, ATerm o_56 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm j_44 (ATerm), ATerm k_44 (ATerm), ATerm l_44 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm f_64 (ATerm), ATerm g_64 (ATerm));
ATerm for_3 (ATerm, ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm k_64 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm p_44 (ATerm), ATerm q_44 (ATerm), ATerm r_44 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm), ATerm d_45 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm w_64 (ATerm));
ATerm printnl_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm j_59 (ATerm));
ATerm separate_by_1 (ATerm, ATerm k_59 (ATerm));
ATerm open_file_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm map_1 (ATerm, ATerm x_57 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm i_44 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_48 (ATerm));
ATerm try_1 (ATerm, ATerm l_64 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm filter_1 (ATerm, ATerm f_52 (ATerm));
ATerm list_1 (ATerm, ATerm z_57 (ATerm));
ATerm exit_0 (ATerm);
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_43 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_49 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm m_48 (ATerm), ATerm n_48 (ATerm));
ATerm Option_2 (ATerm, ATerm k_48 (ATerm), ATerm l_48 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_48 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm g_44 (ATerm, ATerm (ATerm)), ATerm h_44 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm c_44 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_43 (ATerm), ATerm v_43 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm v_50 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm m_7 = t;
    if(PushChoice()==0)
      {
        ATerm r_0 (ATerm t)
        {
          ATerm o_7 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, r_0);
              PopChoice();
            }
          else
            {
              t = o_7;
              {
                ATerm q_7 = t;
                if(PushChoice()==0)
                  {
                    ATerm a_0 (ATerm t)
                    {
                      ATerm p_0 = NULL;
                      p_0 = t;
                      m_0 :
                      if(!(match_int(p_0, 47)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2(t, a_0, _id);
                    PopChoice();
                  }
                else
                  {
                    t = q_7;
                    {
                      ATerm b_0 (ATerm t)
                      {
                        ATerm q_0 = NULL;
                        q_0 = t;
                        o_0 :
                        if(!(match_int(q_0, 46)))
                          _fail(t);
                        return(t);
                      }
                      t = Cons_2(t, b_0, v_50);
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  }
              }
            }
          return(t);
        }
        t = r_0(t);
        PopChoice();
      }
    else
      t = m_7;
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
  ATerm t_0 = NULL;
  t_0 = t;
  s_0 :
  if(!(match_cons(t_0, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm e_43 (ATerm))
{
  ATerm x_0 = NULL,y_0 = NULL;
  x_0 = t;
  w_0 :
  if(match_cons(x_0, sym_Imports_1))
    {
      y_0 = ATgetArgument(x_0, 0);
      {
        ATerm a_1 = NULL;
        t = not_null(y_0);
        t = e_43(t);
        a_1 = t;
        t = (ATerm) ATmakeAppl(sym_Imports_1, not_null(a_1));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm flatten_stratego_0 (ATerm t)
{
  ATerm k_1 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm h_1 = NULL,i_1 = NULL;
    h_1 = t;
    f_1 :
    if(match_cons(h_1, sym_Specification_1))
      {
        i_1 = ATgetArgument(h_1, 0);
        t = not_null(i_1);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm r_7 = t;
            if(PushChoice()==0)
              {
                t = Imports_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              t = r_7;
            return(t);
          }
          t = filter_1(t, d_0);
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, c_0);
  t = concat_0(t);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(k_1));
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm q_43 (ATerm), ATerm r_43 (ATerm))
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
  s_1 = t;
  r_1 :
  if(match_cons(s_1, sym_TCons_2))
    {
      t_1 = ATgetArgument(s_1, 0);
      u_1 = ATgetArgument(s_1, 1);
      {
        ATerm x_1 = NULL;
        t = not_null(t_1);
        {
          ATerm z_1 = NULL;
          t = q_43(t);
          x_1 = t;
          t = not_null(u_1);
          t = r_43(t);
          z_1 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_1), not_null(z_1));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
  o_2 = t;
  f_2 :
  if(match_cons(o_2, sym_TCons_2))
    {
      p_2 = ATgetArgument(o_2, 0);
      u_2 = ATgetArgument(o_2, 1);
      g_2 :
      if(match_cons(p_2, sym_TCons_2))
        {
          q_2 = ATgetArgument(p_2, 0);
          r_2 = ATgetArgument(p_2, 1);
          h_2 :
          if(match_cons(r_2, sym_TCons_2))
            {
              s_2 = ATgetArgument(r_2, 0);
              t_2 = ATgetArgument(r_2, 1);
              i_2 :
              if(match_cons(t_2, sym_TNil_0))
                {
                  j_2 :
                  if(match_cons(u_2, sym_TCons_2))
                    {
                      v_2 = ATgetArgument(u_2, 0);
                      a_3 = ATgetArgument(u_2, 1);
                      k_2 :
                      if(match_cons(v_2, sym_TCons_2))
                        {
                          w_2 = ATgetArgument(v_2, 0);
                          x_2 = ATgetArgument(v_2, 1);
                          l_2 :
                          if(match_cons(x_2, sym_TCons_2))
                            {
                              y_2 = ATgetArgument(x_2, 0);
                              z_2 = ATgetArgument(x_2, 1);
                              m_2 :
                              if(match_cons(z_2, sym_TNil_0))
                                {
                                  n_2 :
                                  if(match_cons(a_3, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_2), not_null(w_2)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_2), not_null(y_2)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
  i_3 = t;
  h_3 :
  if(match_cons(i_3, sym_Cons_2))
    {
      j_3 = ATgetArgument(i_3, 0);
      k_3 = ATgetArgument(i_3, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_3), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  p_3 :
  if(match_cons(q_3, sym_Nil_0))
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
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  z_3 = t;
  v_3 :
  if(match_cons(z_3, sym_TCons_2))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      w_3 :
      if(match_cons(b_4, sym_TCons_2))
        {
          c_4 = ATgetArgument(b_4, 0);
          e_4 = ATgetArgument(b_4, 1);
          x_3 :
          if(match_cons(c_4, sym_Specification_1))
            {
              d_4 = ATgetArgument(c_4, 0);
              y_3 :
              if(match_cons(e_4, sym_TNil_0))
                {
                  t = not_null(d_4);
                  {
                    ATerm e_0 (ATerm t)
                    {
                      ATerm g_4 = NULL,h_4 = NULL;
                      g_4 = t;
                      u_3 :
                      if(match_cons(g_4, sym_Imports_1))
                        {
                          h_4 = ATgetArgument(g_4, 0);
                          t = not_null(h_4);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = filter_1(t, e_0);
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
  ATerm s_7;
  s_7 = t;
  {
    ATerm f_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, f_0, _id);
    t = printnl_0(t);
  }
  t = s_7;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm t_7;
  t_7 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = t_7;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm m_4 = NULL;
  m_4 = t;
  t = SSL_ReadFromFile(not_null(m_4));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_51 (ATerm), ATerm o_51 (ATerm))
{
  ATerm s_4 = NULL;
  ATerm u_4 = NULL;
  s_4 = t;
  {
    ATerm w_4 = NULL;
    t = n_51(t);
    u_4 = t;
    t = not_null(s_4);
    t = o_51(t);
    w_4 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_4), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  t = SSL_file_exists(not_null(c_5));
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
  l_5 = t;
  i_5 :
  if(match_cons(l_5, sym_TCons_2))
    {
      m_5 = ATgetArgument(l_5, 0);
      n_5 = ATgetArgument(l_5, 1);
      j_5 :
      if(match_cons(n_5, sym_TCons_2))
        {
          o_5 = ATgetArgument(n_5, 0);
          p_5 = ATgetArgument(n_5, 1);
          k_5 :
          if(match_cons(p_5, sym_TNil_0))
            {
              t = not_null(o_5);
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm u_7 = t;
                  if(PushChoice()==0)
                    {
                      ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
                      s_5 = t;
                      h_5 :
                      if(match_cons(s_5, sym_Cons_2))
                        {
                          t_5 = ATgetArgument(s_5, 0);
                          u_5 = ATgetArgument(s_5, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_5), (ATerm) ATmakeAppl(sym_Nil_0))));
                          t = concat_strings_0(t);
                          t = file_exists_0(t);
                        }
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = u_7;
                      t = Tl_0(t);
                      t = x_5(t);
                    }
                  return(t);
                }
                t = x_5(t);
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
ATerm guarantee_extension_1 (ATerm t, ATerm x_50 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm g_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = x_50(t);
      return(t);
    }
    t = split_2(t, _id, g_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  {
    ATerm v_7;
    v_7 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue)), not_null(a_6)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = call_0(t);
    t = v_7;
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  h_6 = t;
  e_6 :
  if(match_cons(h_6, sym_TCons_2))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      f_6 :
      if(match_cons(j_6, sym_TCons_2))
        {
          k_6 = ATgetArgument(j_6, 0);
          l_6 = ATgetArgument(j_6, 1);
          g_6 :
          if(match_cons(l_6, sym_TNil_0))
            t = SSL_call(not_null(i_6), not_null(k_6));
          else
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
  ATerm h_0 (ATerm t)
  {
    ATerm i_0 (ATerm t)
    {
      ATerm q_6 = NULL;
      q_6 = t;
      p_6 :
      if(!(match_cons(q_6, sym_TNil_0)))
        _fail(t);
      return(t);
    }
    t = TCons_2(t, explode_string_0, i_0);
    return(t);
  }
  t = TCons_2(t, explode_string_0, h_0);
  t = conc_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_Cons_2))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      t = not_null(u_6);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
  d_7 = t;
  a_7 :
  if(match_cons(d_7, sym_TCons_2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      b_7 :
      if(match_cons(f_7, sym_TCons_2))
        {
          g_7 = ATgetArgument(f_7, 0);
          h_7 = ATgetArgument(f_7, 1);
          c_7 :
          if(match_cons(h_7, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_7), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm e_44 (ATerm))
{
  ATerm n_7 = NULL;
  ATerm p_7 = NULL;
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = e_44(t);
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_7), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm Prefix_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym_TNil_0))
    {
      ATerm x_7 = t;
      if(PushChoice()==0)
        {
          ATerm b_8 = NULL,c_8 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_0);
          {
            ATerm j_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, j_0);
            b_8 = t;
            w_7 :
            if(match_cons(b_8, sym_Defined_1))
              {
                c_8 = ATgetArgument(b_8, 0);
                t = not_null(c_8);
              }
            else
              _fail(t);
          }
          PopChoice();
        }
      else
        {
          t = x_7;
          {
            ATerm e_8 = NULL,f_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_0);
            {
              ATerm k_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, k_0);
              e_8 = t;
              y_7 :
              if(match_cons(e_8, sym_Defined_1))
                {
                  f_8 = ATgetArgument(e_8, 0);
                  t = not_null(f_8);
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
  ATerm m_8 = NULL;
  m_8 = t;
  t = SSL_int_to_string(not_null(m_8));
  return(t);
}
ATerm get_pid_0 (ATerm t)
{
  t = SSL_get_pid();
  return(t);
}
ATerm parse_mod_0 (ATerm t)
{
  ATerm v_8 = NULL;
  ATerm x_8 = NULL,y_8 = NULL;
  v_8 = t;
  {
    ATerm z_8 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = get_pid_0(t);
    {
      ATerm b_9 = NULL;
      t = int_to_string_0(t);
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_8), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm c_9 = NULL;
        t = conc_strings_0(t);
        b_9 = t;
        if(y_8 != NULL && y_8 != b_9)
          _fail(b_9);
        else
          y_8 = b_9;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        {
          ATerm e_9 = NULL;
          t = Prefix_0(t);
          c_9 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("parse-mod", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm g_9 = NULL;
            t = conc_strings_0(t);
            e_9 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_8), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_8), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = call_0(t);
            t = not_null(y_8);
            t = ReadFromFile_0(t);
            g_9 = t;
            if(x_8 != NULL && x_8 != g_9)
              _fail(g_9);
            else
              x_8 = g_9;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_8), (ATerm) ATmakeAppl(sym_Nil_0));
            t = rm_files_0(t);
          }
        }
      }
    }
    t = not_null(x_8);
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm d_8 = t;
  if(PushChoice()==0)
    {
      ATerm l_0 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
        return(t);
      }
      t = guarantee_extension_1(t, l_0);
      t = split_2(t, _id, x_64);
      t = find_in_path_0(t);
      t = split_2(t, _id, parse_mod_0);
      PopChoice();
    }
  else
    {
      t = d_8;
      {
        ATerm g_8 = t;
        if(PushChoice()==0)
          {
            ATerm n_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("tree", 0, ATtrue));
              return(t);
            }
            t = guarantee_extension_1(t, n_0);
            t = split_2(t, _id, x_64);
            t = find_in_path_0(t);
            t = split_2(t, _id, ReadFromFile_0);
            PopChoice();
          }
        else
          {
            t = g_8;
            {
              ATerm t_9 = NULL;
              t_9 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_9), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = fatal_error_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym_TCons_2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      t = not_null(i_11);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm h_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  h_12 = t;
  o_11 :
  if(match_cons(h_12, sym_TCons_2))
    {
      s_12 = ATgetArgument(h_12, 0);
      v_12 = ATgetArgument(h_12, 1);
      p_11 :
      if(match_cons(s_12, sym_Cons_2))
        {
          t_12 = ATgetArgument(s_12, 0);
          u_12 = ATgetArgument(s_12, 1);
          a_12 :
          if(match_cons(v_12, sym_TCons_2))
            {
              w_12 = ATgetArgument(v_12, 0);
              x_12 = ATgetArgument(v_12, 1);
              b_12 :
              if(match_cons(x_12, sym_TCons_2))
                {
                  y_12 = ATgetArgument(x_12, 0);
                  z_12 = ATgetArgument(x_12, 1);
                  e_12 :
                  if(match_cons(z_12, sym_TCons_2))
                    {
                      a_13 = ATgetArgument(z_12, 0);
                      b_13 = ATgetArgument(z_12, 1);
                      f_12 :
                      if(match_cons(b_13, sym_TCons_2))
                        {
                          c_13 = ATgetArgument(b_13, 0);
                          d_13 = ATgetArgument(b_13, 1);
                          g_12 :
                          if(match_cons(d_13, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_12), not_null(c_13)), (ATerm) ATmakeAppl(sym_TNil_0))))));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  p_13 = t;
  m_13 :
  if(match_cons(p_13, sym_TCons_2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      n_13 :
      if(match_cons(r_13, sym_TCons_2))
        {
          s_13 = ATgetArgument(r_13, 0);
          t_13 = ATgetArgument(r_13, 1);
          o_13 :
          if(match_cons(t_13, sym_TNil_0))
            {
              t = not_null(q_13);
              {
                ATerm u_0 (ATerm t)
                {
                  t = not_null(s_13);
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
ATerm HdMember_1 (ATerm t, ATerm i_54 (ATerm))
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_Cons_2))
    {
      b_14 = ATgetArgument(a_14, 0);
      c_14 = ATgetArgument(a_14, 1);
      t = i_54(t);
      {
        ATerm v_0 (ATerm t)
        {
          ATerm f_14 = NULL;
          f_14 = t;
          if(b_14 != NULL && b_14 != f_14)
            _fail(f_14);
          else
            b_14 = f_14;
          return(t);
        }
        t = fetch_1(t, v_0);
      }
      t = not_null(c_14);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  n_14 = t;
  j_14 :
  if(match_cons(n_14, sym_TCons_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      k_14 :
      if(match_cons(p_14, sym_TCons_2))
        {
          q_14 = ATgetArgument(p_14, 0);
          t_14 = ATgetArgument(p_14, 1);
          l_14 :
          if(match_cons(q_14, sym_Cons_2))
            {
              r_14 = ATgetArgument(q_14, 0);
              s_14 = ATgetArgument(q_14, 1);
              m_14 :
              if(match_cons(t_14, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_14), not_null(o_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_14), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  h_15 = t;
  e_15 :
  if(match_cons(h_15, sym_TCons_2))
    {
      i_15 = ATgetArgument(h_15, 0);
      j_15 = ATgetArgument(h_15, 1);
      f_15 :
      if(match_cons(j_15, sym_TCons_2))
        {
          k_15 = ATgetArgument(j_15, 0);
          l_15 = ATgetArgument(j_15, 1);
          g_15 :
          if(match_cons(l_15, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_15), not_null(k_15));
          else
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
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,l_16 = NULL;
  a_16 = t;
  t_15 :
  if(match_cons(a_16, sym_TCons_2))
    {
      b_16 = ATgetArgument(a_16, 0);
      e_16 = ATgetArgument(a_16, 1);
      u_15 :
      if(match_cons(b_16, sym_Cons_2))
        {
          c_16 = ATgetArgument(b_16, 0);
          d_16 = ATgetArgument(b_16, 1);
          v_15 :
          if(match_cons(e_16, sym_TCons_2))
            {
              f_16 = ATgetArgument(e_16, 0);
              l_16 = ATgetArgument(e_16, 1);
              y_15 :
              if(match_cons(f_16, sym_Cons_2))
                {
                  g_16 = ATgetArgument(f_16, 0);
                  h_16 = ATgetArgument(f_16, 1);
                  z_15 :
                  if(match_cons(l_16, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_16), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,h_17 = NULL,i_17 = NULL;
  y_16 = t;
  t_16 :
  if(match_cons(y_16, sym_TCons_2))
    {
      z_16 = ATgetArgument(y_16, 0);
      a_17 = ATgetArgument(y_16, 1);
      u_16 :
      if(match_cons(z_16, sym_Nil_0))
        {
          v_16 :
          if(match_cons(a_17, sym_TCons_2))
            {
              h_17 = ATgetArgument(a_17, 0);
              i_17 = ATgetArgument(a_17, 1);
              w_16 :
              if(match_cons(h_17, sym_Nil_0))
                {
                  x_16 :
                  if(match_cons(i_17, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm))
{
  ATerm o_17 (ATerm t)
  {
    ATerm h_8 = t;
    if(PushChoice()==0)
      {
        t = j_56(t);
        PopChoice();
      }
    else
      {
        t = h_8;
        t = k_56(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm n_17 = NULL;
              n_17 = t;
              k_17 :
              if(!(match_cons(n_17, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, o_17, b_1);
            return(t);
          }
          t = TCons_2(t, m_56, z_0);
          t = l_56(t);
        }
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm o_56 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, o_56);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  r_18 = t;
  j_18 :
  if(match_cons(r_18, sym_Cons_2))
    {
      s_18 = ATgetArgument(r_18, 0);
      c_19 = ATgetArgument(r_18, 1);
      k_18 :
      if(match_cons(s_18, sym_TCons_2))
        {
          y_18 = ATgetArgument(s_18, 0);
          z_18 = ATgetArgument(s_18, 1);
          n_18 :
          if(match_cons(z_18, sym_TCons_2))
            {
              a_19 = ATgetArgument(z_18, 0);
              b_19 = ATgetArgument(z_18, 1);
              o_18 :
              if(match_cons(b_19, sym_TNil_0))
                {
                  ATerm g_19 = NULL,h_19 = NULL,p_19 = NULL,x_19 = NULL;
                  ATerm i_8;
                  i_8 = t;
                  {
                    ATerm i_19 = NULL;
                    ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
                    t = not_null(a_19);
                    i_19 = t;
                    t = SSL_explode_term(not_null(i_19));
                    k_19 = t;
                    x_17 :
                    if(match_cons(k_19, sym_TCons_2))
                      {
                        l_19 = ATgetArgument(k_19, 0);
                        m_19 = ATgetArgument(k_19, 1);
                        y_17 :
                        if(match_cons(m_19, sym_TCons_2))
                          {
                            n_19 = ATgetArgument(m_19, 0);
                            o_19 = ATgetArgument(m_19, 1);
                            z_17 :
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
                  t = i_8;
                  {
                    ATerm q_19 = NULL;
                    ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
                    t = not_null(y_18);
                    q_19 = t;
                    t = SSL_explode_term(not_null(q_19));
                    s_19 = t;
                    c_18 :
                    if(match_cons(s_19, sym_TCons_2))
                      {
                        t_19 = ATgetArgument(s_19, 0);
                        u_19 = ATgetArgument(s_19, 1);
                        d_18 :
                        if(match_cons(u_19, sym_TCons_2))
                          {
                            v_19 = ATgetArgument(u_19, 0);
                            w_19 = ATgetArgument(u_19, 1);
                            e_18 :
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
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_19), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm j_8 = t;
  if(PushChoice()==0)
    {
      ATerm c_1 (ATerm t)
      {
        ATerm e_21 = NULL;
        e_21 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_21), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm d_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          ATerm j_1 (ATerm t)
          {
            ATerm g_21 = NULL;
            g_21 = t;
            v_20 :
            if(!(match_cons(g_21, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm l_1 (ATerm t)
          {
            ATerm h_21 = NULL;
            h_21 = t;
            w_20 :
            if(!(match_cons(h_21, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, j_1, l_1);
          return(t);
        }
        t = TCons_2(t, _id, g_1);
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        ATerm k_8 = t;
        if(PushChoice()==0)
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                ATerm l_8 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = l_8;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              ATerm o_1 (ATerm t)
              {
                ATerm i_21 = NULL;
                i_21 = t;
                y_20 :
                if(!(match_cons(i_21, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, n_1, o_1);
              return(t);
            }
            t = TCons_2(t, _id, m_1);
            PopChoice();
          }
        else
          {
            t = k_8;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, c_1, d_1, e_1);
      PopChoice();
    }
  else
    {
      t = j_8;
      {
        ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
        j_21 = t;
        b_21 :
        if(match_cons(j_21, sym_TCons_2))
          {
            k_21 = ATgetArgument(j_21, 0);
            l_21 = ATgetArgument(j_21, 1);
            c_21 :
            if(match_cons(l_21, sym_TCons_2))
              {
                m_21 = ATgetArgument(l_21, 0);
                n_21 = ATgetArgument(l_21, 1);
                d_21 :
                if(match_cons(n_21, sym_TNil_0))
                  {
                    t = not_null(k_21);
                    {
                      ATerm t_21 (ATerm t)
                      {
                        ATerm n_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm q_21 = NULL;
                            q_21 = t;
                            a_21 :
                            if(!(match_cons(q_21, sym_Nil_0)))
                              _fail(t);
                            PopChoice();
                          }
                        else
                          {
                            t = n_8;
                            {
                              ATerm o_8 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm p_1 (ATerm t)
                                  {
                                    t = not_null(m_21);
                                    return(t);
                                  }
                                  t = HdMember_1(t, p_1);
                                  t = t_21(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = o_8;
                                  t = Cons_2(t, _id, t_21);
                                }
                            }
                          }
                        return(t);
                      }
                      t = t_21(t);
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
ATerm GnNext_3 (ATerm t, ATerm j_44 (ATerm), ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  k_22 = t;
  d_22 :
  if(match_cons(k_22, sym_TCons_2))
    {
      l_22 = ATgetArgument(k_22, 0);
      o_22 = ATgetArgument(k_22, 1);
      e_22 :
      if(match_cons(l_22, sym_Cons_2))
        {
          m_22 = ATgetArgument(l_22, 0);
          n_22 = ATgetArgument(l_22, 1);
          f_22 :
          if(match_cons(o_22, sym_TCons_2))
            {
              p_22 = ATgetArgument(o_22, 0);
              q_22 = ATgetArgument(o_22, 1);
              g_22 :
              if(match_cons(q_22, sym_TCons_2))
                {
                  r_22 = ATgetArgument(q_22, 0);
                  s_22 = ATgetArgument(q_22, 1);
                  h_22 :
                  if(match_cons(s_22, sym_TCons_2))
                    {
                      t_22 = ATgetArgument(s_22, 0);
                      u_22 = ATgetArgument(s_22, 1);
                      i_22 :
                      if(match_cons(u_22, sym_TCons_2))
                        {
                          v_22 = ATgetArgument(u_22, 0);
                          w_22 = ATgetArgument(u_22, 1);
                          j_22 :
                          if(match_cons(w_22, sym_TNil_0))
                            {
                              ATerm d_23 = NULL,g_23 = NULL,h_23 = NULL,l_23 = NULL;
                              ATerm i_23 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm j_23 = NULL;
                                t = j_44(t);
                                i_23 = t;
                                if(d_23 != NULL && d_23 != i_23)
                                  _fail(i_23);
                                else
                                  d_23 = i_23;
                                t = not_null(d_23);
                                {
                                  ATerm k_23 = NULL;
                                  t = k_44(t);
                                  j_23 = t;
                                  if(g_23 != NULL && g_23 != j_23)
                                    _fail(j_23);
                                  else
                                    g_23 = j_23;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = diff_0(t);
                                  k_23 = t;
                                  if(h_23 != NULL && h_23 != k_23)
                                    _fail(k_23);
                                  else
                                    h_23 = k_23;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm n_23 = NULL;
                                t = conc_0(t);
                                l_23 = t;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm p_23 = NULL;
                                  t = conc_0(t);
                                  n_23 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_22), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = l_44(t);
                                  p_23 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_22), (ATerm) ATmakeAppl(sym_TNil_0))))));
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
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  g_24 = t;
  z_23 :
  if(match_cons(g_24, sym_TCons_2))
    {
      h_24 = ATgetArgument(g_24, 0);
      i_24 = ATgetArgument(g_24, 1);
      a_24 :
      if(match_cons(h_24, sym_Nil_0))
        {
          b_24 :
          if(match_cons(i_24, sym_TCons_2))
            {
              j_24 = ATgetArgument(i_24, 0);
              k_24 = ATgetArgument(i_24, 1);
              c_24 :
              if(match_cons(k_24, sym_TCons_2))
                {
                  l_24 = ATgetArgument(k_24, 0);
                  m_24 = ATgetArgument(k_24, 1);
                  d_24 :
                  if(match_cons(m_24, sym_TCons_2))
                    {
                      n_24 = ATgetArgument(m_24, 0);
                      o_24 = ATgetArgument(m_24, 1);
                      e_24 :
                      if(match_cons(o_24, sym_TCons_2))
                        {
                          p_24 = ATgetArgument(o_24, 0);
                          q_24 = ATgetArgument(o_24, 1);
                          f_24 :
                          if(match_cons(q_24, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  b_25 = t;
  x_24 :
  if(match_cons(b_25, sym_TCons_2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      y_24 :
      if(match_cons(d_25, sym_TCons_2))
        {
          e_25 = ATgetArgument(d_25, 0);
          f_25 = ATgetArgument(d_25, 1);
          z_24 :
          if(match_cons(f_25, sym_TCons_2))
            {
              g_25 = ATgetArgument(f_25, 0);
              h_25 = ATgetArgument(f_25, 1);
              a_25 :
              if(match_cons(h_25, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))))));
              else
                _fail(t);
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
ATerm while_not_2 (ATerm t, ATerm f_64 (ATerm), ATerm g_64 (ATerm))
{
  ATerm o_25 (ATerm t)
  {
    ATerm p_8 = t;
    if(PushChoice()==0)
      {
        t = f_64(t);
        PopChoice();
      }
    else
      {
        t = p_8;
        t = g_64(t);
        t = o_25(t);
      }
    return(t);
  }
  t = o_25(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm k_64 (ATerm))
{
  t = i_64(t);
  t = while_not_2(t, j_64, k_64);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm p_44 (ATerm), ATerm q_44 (ATerm), ATerm r_44 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm q_8 = t;
    if(PushChoice()==0)
      {
        t = GnNext_3(t, p_44, q_44, r_44);
        PopChoice();
      }
    else
      {
        t = q_8;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, q_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm), ATerm d_45 (ATerm))
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  t = graph_nodes_undef_roots_3(t, b_45, c_45, d_45);
  t_25 = t;
  q_25 :
  if(match_cons(t_25, sym_TCons_2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      r_25 :
      if(match_cons(v_25, sym_TCons_2))
        {
          w_25 = ATgetArgument(v_25, 0);
          x_25 = ATgetArgument(v_25, 1);
          s_25 :
          if(match_cons(x_25, sym_TNil_0))
            t = not_null(u_25);
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm k_26 = NULL;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_26), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TNil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  {
    ATerm v_1 (ATerm t)
    {
      t = Fst_0(t);
      {
        ATerm y_1 (ATerm t)
        {
          ATerm m_26 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = w_64(t);
          m_26 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), not_null(m_26));
          return(t);
        }
        t = get_module_1(t, y_1);
      }
      return(t);
    }
    ATerm w_1 (ATerm t)
    {
      ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
      o_26 = t;
      f_26 :
      if(match_cons(o_26, sym_TCons_2))
        {
          p_26 = ATgetArgument(o_26, 0);
          q_26 = ATgetArgument(o_26, 1);
          g_26 :
          if(match_cons(q_26, sym_TCons_2))
            {
              r_26 = ATgetArgument(q_26, 0);
              s_26 = ATgetArgument(q_26, 1);
              h_26 :
              if(match_cons(s_26, sym_TCons_2))
                {
                  t_26 = ATgetArgument(s_26, 0);
                  u_26 = ATgetArgument(s_26, 1);
                  i_26 :
                  if(match_cons(u_26, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_26), not_null(t_26));
                  else
                    _fail(t);
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
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          ATerm y_26 = NULL;
          y_26 = t;
          j_26 :
          if(!(match_cons(y_26, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, flatten_stratego_0, b_2);
        return(t);
      }
      t = TCons_2(t, _id, a_2);
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  g_27 = t;
  d_27 :
  if(match_cons(g_27, sym_TCons_2))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      e_27 :
      if(match_cons(i_27, sym_TCons_2))
        {
          j_27 = ATgetArgument(i_27, 0);
          k_27 = ATgetArgument(i_27, 1);
          f_27 :
          if(match_cons(k_27, sym_TNil_0))
            {
              ATerm r_8;
              r_8 = t;
              t = SSL_printnl(not_null(h_27), not_null(j_27));
              t = r_8;
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
ATerm Sep_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_Cons_2))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      {
        ATerm w_27 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = j_59(t);
        w_27 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_27), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_27), not_null(t_27)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm s_8 = t;
  if(PushChoice()==0)
    {
      ATerm c_28 = NULL;
      c_28 = t;
      a_28 :
      if(!(match_cons(c_28, sym_Nil_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = s_8;
      {
        ATerm c_2 (ATerm t)
        {
          ATerm t_8 = t;
          if(PushChoice()==0)
            {
              ATerm d_28 = NULL;
              d_28 = t;
              b_28 :
              if(!(match_cons(d_28, sym_Nil_0)))
                _fail(t);
              PopChoice();
            }
          else
            {
              t = t_8;
              t = Cons_2(t, _id, c_2);
              t = Sep_1(t, k_59);
            }
          return(t);
        }
        t = Cons_2(t, _id, c_2);
      }
    }
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_open_file(not_null(g_28));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm o_28 (ATerm t)
  {
    ATerm u_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, o_28);
        PopChoice();
      }
    else
      {
        t = u_8;
        {
          ATerm n_28 = NULL;
          n_28 = t;
          m_28 :
          if(match_cons(n_28, sym_Nil_0))
            t = m_58(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = o_28(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(!(match_cons(u_28, sym_Nil_0)))
    {
      if(match_cons(u_28, sym_Cons_2))
        {
          v_28 = ATgetArgument(u_28, 0);
          w_28 = ATgetArgument(u_28, 1);
          t = not_null(v_28);
          {
            ATerm d_2 (ATerm t)
            {
              t = not_null(w_28);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, d_2);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm d_29 (ATerm t)
  {
    ATerm w_8 = t;
    if(PushChoice()==0)
      {
        ATerm c_29 = NULL;
        c_29 = t;
        b_29 :
        if(!(match_cons(c_29, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = w_8;
        t = Cons_2(t, x_57, d_29);
      }
    return(t);
  }
  t = d_29(t);
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
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  i_29 = t;
  f_29 :
  if(match_cons(i_29, sym_TCons_2))
    {
      j_29 = ATgetArgument(i_29, 0);
      k_29 = ATgetArgument(i_29, 1);
      g_29 :
      if(match_cons(k_29, sym_TCons_2))
        {
          l_29 = ATgetArgument(k_29, 0);
          m_29 = ATgetArgument(k_29, 1);
          h_29 :
          if(match_cons(m_29, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_29), (ATerm) ATmakeAppl(sym_Nil_0))));
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
ATerm create_dep_file_1 (ATerm t, ATerm i_44 (ATerm))
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  x_29 = t;
  u_29 :
  if(match_cons(x_29, sym_TCons_2))
    {
      y_29 = ATgetArgument(x_29, 0);
      z_29 = ATgetArgument(x_29, 1);
      v_29 :
      if(match_cons(z_29, sym_TCons_2))
        {
          a_30 = ATgetArgument(z_29, 0);
          b_30 = ATgetArgument(z_29, 1);
          w_29 :
          if(match_cons(b_30, sym_TNil_0))
            {
              ATerm i_30 = NULL,j_30 = NULL;
              ATerm k_30 = NULL;
              t = not_null(y_29);
              {
                ATerm l_30 = NULL;
                t = i_44(t);
                k_30 = t;
                if(j_30 != NULL && j_30 != k_30)
                  _fail(k_30);
                else
                  j_30 = k_30;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_30), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = add_extension_0(t);
                {
                  ATerm m_30 = NULL;
                  t = open_file_0(t);
                  l_30 = t;
                  if(i_30 != NULL && i_30 != l_30)
                    _fail(l_30);
                  else
                    i_30 = l_30;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(":", 0, ATtrue)), not_null(a_30)));
                  {
                    ATerm e_2 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
                      return(t);
                    }
                    t = separate_by_1(t, e_2);
                    m_30 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_30), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = printnl_0(t);
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_30), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm fetch_1 (ATerm t, ATerm g_58 (ATerm))
{
  ATerm a_31 (ATerm t)
  {
    ATerm a_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, g_58, _id);
        PopChoice();
      }
    else
      {
        t = a_9;
        t = Cons_2(t, _id, a_31);
      }
    return(t);
  }
  t = a_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_48 (ATerm))
{
  t = fetch_1(t, r_48);
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm d_9 = t;
  if(PushChoice()==0)
    {
      t = l_64(t);
      PopChoice();
    }
  else
    t = d_9;
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  f_31 = t;
  c_31 :
  if(match_cons(f_31, sym_TCons_2))
    {
      g_31 = ATgetArgument(f_31, 0);
      h_31 = ATgetArgument(f_31, 1);
      d_31 :
      if(match_cons(h_31, sym_TCons_2))
        {
          i_31 = ATgetArgument(h_31, 0);
          j_31 = ATgetArgument(h_31, 1);
          e_31 :
          if(match_cons(j_31, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(g_31), not_null(i_31));
          else
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
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  r_31 = t;
  o_31 :
  if(match_cons(r_31, sym_TCons_2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      p_31 :
      if(match_cons(t_31, sym_TCons_2))
        {
          u_31 = ATgetArgument(t_31, 0);
          v_31 = ATgetArgument(t_31, 1);
          q_31 :
          if(match_cons(v_31, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(s_31), not_null(u_31));
          else
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
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  a_32 :
  if(match_cons(b_32, sym_Cons_2))
    {
      c_32 = ATgetArgument(b_32, 0);
      d_32 = ATgetArgument(b_32, 1);
      t = not_null(d_32);
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm f_52 (ATerm))
{
  ATerm n_32 (ATerm t)
  {
    ATerm f_9 = t;
    if(PushChoice()==0)
      {
        ATerm i_32 = NULL;
        i_32 = t;
        h_32 :
        if(!(match_cons(i_32, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = f_9;
        {
          ATerm h_9 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, f_52, n_32);
              PopChoice();
            }
          else
            {
              t = h_9;
              t = Tl_0(t);
              t = n_32(t);
            }
        }
      }
    return(t);
  }
  t = n_32(t);
  return(t);
}
ATerm list_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm q_32 (ATerm t)
  {
    ATerm i_9 = t;
    if(PushChoice()==0)
      {
        ATerm p_32 = NULL;
        p_32 = t;
        o_32 :
        if(!(match_cons(p_32, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = i_9;
        t = Cons_2(t, z_57, q_32);
      }
    return(t);
  }
  t = q_32(t);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  t = SSL_exit(not_null(s_32));
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm x_32 = NULL;
  ATerm b_3 (ATerm t)
  {
    ATerm y_32 = NULL,z_32 = NULL;
    y_32 = t;
    w_32 :
    if(match_cons(y_32, sym_Program_1))
      {
        z_32 = ATgetArgument(y_32, 0);
        if(x_32 != NULL && x_32 != z_32)
          _fail(z_32);
        else
          x_32 = z_32;
      }
    else
      _fail(t);
    return(t);
  }
  t = fetch_1(t, b_3);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_32), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  b_33 :
  if(!(match_cons(c_33, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_43 (ATerm))
{
  ATerm m_33 = NULL,n_33 = NULL;
  m_33 = t;
  f_33 :
  if(match_cons(m_33, sym_Undefined_1))
    {
      n_33 = ATgetArgument(m_33, 0);
      {
        ATerm p_33 = NULL;
        t = not_null(n_33);
        t = k_43(t);
        p_33 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_33));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  t_33 :
  if(!(match_cons(u_33, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_49 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm j_9 = t;
    if(PushChoice()==0)
      {
        ATerm x_33 = NULL;
        x_33 = t;
        v_33 :
        if(!(match_cons(x_33, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = j_9;
        {
          ATerm k_9 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = k_9;
              {
                ATerm y_33 = NULL;
                y_33 = t;
                w_33 :
                if(!(match_cons(y_33, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, c_3);
  t = m_49(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm m_48 (ATerm), ATerm n_48 (ATerm))
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  r_34 = t;
  p_34 :
  if(match_cons(r_34, sym_Cons_2))
    {
      s_34 = ATgetArgument(r_34, 0);
      t_34 = ATgetArgument(r_34, 1);
      q_34 :
      if(match_cons(t_34, sym_Cons_2))
        {
          u_34 = ATgetArgument(t_34, 0);
          v_34 = ATgetArgument(t_34, 1);
          {
            ATerm z_34 = NULL;
            t = not_null(s_34);
            t = m_48(t);
            t = not_null(u_34);
            t = n_48(t);
            z_34 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_34), not_null(v_34));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm k_48 (ATerm), ATerm l_48 (ATerm))
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym_Cons_2))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      {
        ATerm l_35 = NULL;
        t = not_null(h_35);
        t = k_48(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = l_48(t);
        l_35 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_35), not_null(i_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_9 = t;
  if(PushChoice()==0)
    {
      ATerm d_3 (ATerm t)
      {
        ATerm j_36 = NULL;
        j_36 = t;
        p_35 :
        if(!(match_string(j_36, "-S")))
          _fail(t);
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, d_3, e_3);
      PopChoice();
    }
  else
    {
      t = l_9;
      {
        ATerm m_9 = t;
        if(PushChoice()==0)
          {
            ATerm f_3 (ATerm t)
            {
              ATerm k_36 = NULL;
              k_36 = t;
              q_35 :
              if(!(match_string(k_36, "--silent")))
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
            t = m_9;
            {
              ATerm n_9 = t;
              if(PushChoice()==0)
                {
                  ATerm l_3 (ATerm t)
                  {
                    ATerm l_36 = NULL;
                    l_36 = t;
                    r_35 :
                    if(!(match_string(l_36, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm m_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, l_3, m_3);
                  PopChoice();
                }
              else
                {
                  t = n_9;
                  {
                    ATerm o_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm n_3 (ATerm t)
                        {
                          ATerm m_36 = NULL;
                          m_36 = t;
                          s_35 :
                          if(!(match_string(m_36, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm o_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, n_3, o_3);
                        PopChoice();
                      }
                    else
                      {
                        t = o_9;
                        {
                          ATerm p_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm r_3 (ATerm t)
                              {
                                ATerm n_36 = NULL;
                                n_36 = t;
                                t_35 :
                                if(!(match_string(n_36, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm s_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, r_3, s_3);
                              PopChoice();
                            }
                          else
                            {
                              t = p_9;
                              {
                                ATerm q_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm t_3 (ATerm t)
                                    {
                                      ATerm o_36 = NULL;
                                      o_36 = t;
                                      u_35 :
                                      if(!(match_string(o_36, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm f_4 (ATerm t)
                                    {
                                      ATerm p_36 = NULL;
                                      p_36 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(p_36));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, t_3, f_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = q_9;
                                    {
                                      ATerm r_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm i_4 (ATerm t)
                                          {
                                            ATerm r_36 = NULL;
                                            r_36 = t;
                                            w_35 :
                                            if(!(match_string(r_36, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm j_4 (ATerm t)
                                          {
                                            ATerm s_36 = NULL;
                                            s_36 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_36));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, i_4, j_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = r_9;
                                          {
                                            ATerm s_9 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm k_4 (ATerm t)
                                                {
                                                  ATerm u_36 = NULL;
                                                  u_36 = t;
                                                  y_35 :
                                                  if(!(match_string(u_36, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm l_4 (ATerm t)
                                                {
                                                  ATerm v_36 = NULL;
                                                  v_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_36));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, k_4, l_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = s_9;
                                                {
                                                  ATerm u_9 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm n_4 (ATerm t)
                                                      {
                                                        ATerm x_36 = NULL;
                                                        x_36 = t;
                                                        a_36 :
                                                        if(!(match_string(x_36, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm o_4 (ATerm t)
                                                      {
                                                        ATerm y_36 = NULL;
                                                        y_36 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_36));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, n_4, o_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = u_9;
                                                      {
                                                        ATerm v_9 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm p_4 (ATerm t)
                                                            {
                                                              ATerm a_37 = NULL;
                                                              a_37 = t;
                                                              c_36 :
                                                              if(!(match_string(a_37, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm q_4 (ATerm t)
                                                            {
                                                              ATerm b_37 = NULL;
                                                              b_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_37));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, p_4, q_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = v_9;
                                                            {
                                                              ATerm w_9 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm r_4 (ATerm t)
                                                                  {
                                                                    ATerm d_37 = NULL;
                                                                    d_37 = t;
                                                                    e_36 :
                                                                    if(!(match_string(d_37, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm t_4 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, r_4, t_4);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = w_9;
                                                                  {
                                                                    ATerm x_9 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm v_4 (ATerm t)
                                                                        {
                                                                          ATerm e_37 = NULL;
                                                                          e_37 = t;
                                                                          f_36 :
                                                                          if(!(match_string(e_37, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm x_4 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, v_4, x_4);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_9;
                                                                        {
                                                                          ATerm y_9 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm y_4 (ATerm t)
                                                                              {
                                                                                ATerm f_37 = NULL;
                                                                                f_37 = t;
                                                                                g_36 :
                                                                                if(!(match_string(f_37, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm z_4 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, y_4, z_4);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_9;
                                                                              {
                                                                                ATerm z_9 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm a_5 (ATerm t)
                                                                                    {
                                                                                      ATerm g_37 = NULL;
                                                                                      g_37 = t;
                                                                                      h_36 :
                                                                                      if(!(match_string(g_37, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm b_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, a_5, b_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_9;
                                                                                    {
                                                                                      ATerm d_5 (ATerm t)
                                                                                      {
                                                                                        ATerm h_37 = NULL;
                                                                                        h_37 = t;
                                                                                        i_36 :
                                                                                        if(!(match_string(h_37, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm e_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, d_5, e_5);
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
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym_Cons_2))
    {
      q_37 = ATgetArgument(p_37, 0);
      r_37 = ATgetArgument(p_37, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_37)), not_null(r_37));
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm w_37 = NULL;
  w_37 = t;
  v_37 :
  if(!(match_cons(w_37, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_48 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm z_37 = NULL;
    z_37 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_37));
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm a_10 = t;
    if(PushChoice()==0)
      {
        ATerm b_10 = t;
        if(PushChoice()==0)
          {
            ATerm b_38 = NULL;
            b_38 = t;
            y_37 :
            if(!(match_cons(b_38, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = b_10;
            t = i_48(t);
            t = Cons_2(t, _id, g_5);
          }
        PopChoice();
      }
    else
      {
        t = a_10;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, f_5, g_5);
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm c_10 = t;
    if(PushChoice()==0)
      {
        t = io_options_0(t);
        PopChoice();
      }
    else
      {
        t = c_10;
        {
          ATerm d_10 = t;
          if(PushChoice()==0)
            {
              ATerm r_5 (ATerm t)
              {
                ATerm l_38 = NULL;
                l_38 = t;
                e_38 :
                if(!(match_string(l_38, "-I")))
                  _fail(t);
                return(t);
              }
              ATerm v_5 (ATerm t)
              {
                ATerm m_38 = NULL;
                m_38 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(m_38));
                return(t);
              }
              t = ArgOption_2(t, r_5, v_5);
              PopChoice();
            }
          else
            {
              t = d_10;
              {
                ATerm e_10 = t;
                if(PushChoice()==0)
                  {
                    ATerm w_5 (ATerm t)
                    {
                      ATerm o_38 = NULL;
                      o_38 = t;
                      g_38 :
                      if(!(match_string(o_38, "-nodep")))
                        _fail(t);
                      return(t);
                    }
                    ATerm y_5 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_NoDependency_0);
                      return(t);
                    }
                    t = Option_2(t, w_5, y_5);
                    PopChoice();
                  }
                else
                  {
                    t = e_10;
                    {
                      ATerm f_10 = t;
                      if(PushChoice()==0)
                        {
                          ATerm z_5 (ATerm t)
                          {
                            ATerm p_38 = NULL;
                            p_38 = t;
                            h_38 :
                            if(!(match_string(p_38, "-dep")))
                              _fail(t);
                            return(t);
                          }
                          ATerm b_6 (ATerm t)
                          {
                            ATerm q_38 = NULL;
                            q_38 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(q_38));
                            return(t);
                          }
                          t = ArgOption_2(t, z_5, b_6);
                          PopChoice();
                        }
                      else
                        {
                          t = f_10;
                          {
                            ATerm c_6 (ATerm t)
                            {
                              ATerm s_38 = NULL;
                              s_38 = t;
                              j_38 :
                              if(!(match_string(s_38, "--prefix")))
                                _fail(t);
                              return(t);
                            }
                            ATerm d_6 (ATerm t)
                            {
                              ATerm t_38 = NULL;
                              t_38 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, not_null(t_38)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm m_6 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, m_6);
                              }
                              t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(t_38));
                              return(t);
                            }
                            t = ArgOption_2(t, c_6, d_6);
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
  t = parse_options_1(t, q_5);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm g_44 (ATerm, ATerm (ATerm)), ATerm h_44 (ATerm))
{
  ATerm r_39 = NULL;
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,c_40 = NULL;
  t = pack_module_options_0(t);
  r_39 = t;
  {
    ATerm g_10 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, pack_modules_usage_0);
        PopChoice();
      }
    else
      t = g_10;
    {
      ATerm n_6 (ATerm t)
      {
        ATerm h_10 = t;
        if(PushChoice()==0)
          {
            ATerm x_39 = NULL,y_39 = NULL;
            x_39 = t;
            d_39 :
            if(match_cons(x_39, sym_Program_1))
              {
                y_39 = ATgetArgument(x_39, 0);
                if(t_39 != NULL && t_39 != y_39)
                  _fail(y_39);
                else
                  t_39 = y_39;
              }
            else
              {
                if(match_cons(x_39, sym_Input_1))
                  {
                    y_39 = ATgetArgument(x_39, 0);
                    if(u_39 != NULL && u_39 != y_39)
                      _fail(y_39);
                    else
                      u_39 = y_39;
                  }
                else
                  {
                    if(match_cons(x_39, sym_Output_1))
                      {
                        y_39 = ATgetArgument(x_39, 0);
                        if(v_39 != NULL && v_39 != y_39)
                          _fail(y_39);
                        else
                          v_39 = y_39;
                      }
                    else
                      {
                        if(match_cons(x_39, sym_Dependency_1))
                          {
                            y_39 = ATgetArgument(x_39, 0);
                            if(w_39 != NULL && w_39 != y_39)
                              _fail(y_39);
                            else
                              w_39 = y_39;
                          }
                        else
                          _fail(t);
                      }
                  }
              }
            PopChoice();
          }
        else
          t = h_10;
        return(t);
      }
      t = list_1(t, n_6);
      {
        ATerm e_40 = NULL;
        ATerm o_6 (ATerm t)
        {
          ATerm z_39 = NULL,a_40 = NULL;
          z_39 = t;
          f_39 :
          if(match_cons(z_39, sym_Include_1))
            {
              a_40 = ATgetArgument(z_39, 0);
              t = not_null(a_40);
            }
          else
            _fail(t);
          return(t);
        }
        t = filter_1(t, o_6);
        c_40 = t;
        {
          ATerm g_40 = NULL;
          ATerm i_10 = t;
          if(PushChoice()==0)
            {
              t = not_null(u_39);
              PopChoice();
            }
          else
            {
              t = i_10;
              t = (ATerm) ATmakeAppl(sym_stdin_0);
            }
          e_40 = t;
          {
            ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
            ATerm j_10 = t;
            if(PushChoice()==0)
              {
                t = not_null(v_39);
                PopChoice();
              }
            else
              {
                t = j_10;
                t = (ATerm) ATmakeAppl(sym_stdout_0);
              }
            g_40 = t;
            t = not_null(e_40);
            {
              ATerm r_6 (ATerm t)
              {
                t = not_null(c_40);
                return(t);
              }
              t = g_44(t, r_6);
              i_40 = t;
              o_39 :
              if(match_cons(i_40, sym_TCons_2))
                {
                  j_40 = ATgetArgument(i_40, 0);
                  k_40 = ATgetArgument(i_40, 1);
                  p_39 :
                  if(match_cons(k_40, sym_TCons_2))
                    {
                      l_40 = ATgetArgument(k_40, 0);
                      m_40 = ATgetArgument(k_40, 1);
                      q_39 :
                      if(match_cons(m_40, sym_TNil_0))
                        {
                          ATerm q_40 = NULL,t_40 = NULL;
                          t = not_null(r_39);
                          {
                            ATerm k_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm w_6 (ATerm t)
                                {
                                  ATerm p_40 = NULL;
                                  p_40 = t;
                                  k_39 :
                                  if(!(match_cons(p_40, sym_Binary_0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = fetch_1(t, w_6);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToBinaryFile_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = k_10;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = WriteToTextFile_0(t);
                              }
                            {
                              ATerm l_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm s_40 = NULL;
                                  ATerm m_10 = t;
                                  if(PushChoice()==0)
                                    {
                                      t = not_null(w_39);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = m_10;
                                      {
                                        ATerm n_10 = t;
                                        if(PushChoice()==0)
                                          {
                                            t = not_null(r_39);
                                            {
                                              ATerm x_6 (ATerm t)
                                              {
                                                ATerm r_40 = NULL;
                                                r_40 = t;
                                                l_39 :
                                                if(!(match_cons(r_40, sym_NoDependency_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = fetch_1(t, x_6);
                                            }
                                            PopChoice();
                                            _fail(t);
                                          }
                                        else
                                          t = n_10;
                                        t = h_44(t);
                                      }
                                    }
                                  s_40 = t;
                                  if(q_40 != NULL && q_40 != s_40)
                                    _fail(s_40);
                                  else
                                    q_40 = s_40;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm y_6 (ATerm t)
                                    {
                                      t = not_null(q_40);
                                      return(t);
                                    }
                                    t = create_dep_file_1(t, y_6);
                                  }
                                  PopChoice();
                                }
                              else
                                t = l_10;
                              t = dtime_0(t);
                              t_40 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_39), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_40), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = printnl_0(t);
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
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  ATerm o_10;
  o_10 = t;
  {
    ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
    p_41 = t;
    i_41 :
    if(match_cons(p_41, sym_TCons_2))
      {
        q_41 = ATgetArgument(p_41, 0);
        r_41 = ATgetArgument(p_41, 1);
        j_41 :
        if(match_cons(r_41, sym_TCons_2))
          {
            s_41 = ATgetArgument(r_41, 0);
            t_41 = ATgetArgument(r_41, 1);
            k_41 :
            if(match_cons(t_41, sym_TCons_2))
              {
                u_41 = ATgetArgument(t_41, 0);
                v_41 = ATgetArgument(t_41, 1);
                l_41 :
                if(match_cons(v_41, sym_TNil_0))
                  {
                    if(m_41 != NULL && m_41 != q_41)
                      _fail(q_41);
                    else
                      m_41 = q_41;
                    if(n_41 != NULL && n_41 != s_41)
                      _fail(s_41);
                    else
                      n_41 = s_41;
                    if(o_41 != NULL && o_41 != u_41)
                      _fail(u_41);
                    else
                      o_41 = u_41;
                    t = SSL_table_put(not_null(m_41), not_null(n_41), not_null(o_41));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = o_10;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
  b_42 = t;
  y_41 :
  if(match_cons(b_42, sym_TCons_2))
    {
      c_42 = ATgetArgument(b_42, 0);
      d_42 = ATgetArgument(b_42, 1);
      z_41 :
      if(match_cons(d_42, sym_TCons_2))
        {
          e_42 = ATgetArgument(d_42, 0);
          f_42 = ATgetArgument(d_42, 1);
          a_42 :
          if(match_cons(f_42, sym_TNil_0))
            t = SSL_table_get(not_null(c_42), not_null(e_42));
          else
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
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  p_42 = t;
  l_42 :
  if(match_cons(p_42, sym_TCons_2))
    {
      q_42 = ATgetArgument(p_42, 0);
      r_42 = ATgetArgument(p_42, 1);
      m_42 :
      if(match_cons(r_42, sym_TCons_2))
        {
          s_42 = ATgetArgument(r_42, 0);
          t_42 = ATgetArgument(r_42, 1);
          n_42 :
          if(match_cons(t_42, sym_TCons_2))
            {
              u_42 = ATgetArgument(t_42, 0);
              v_42 = ATgetArgument(t_42, 1);
              o_42 :
              if(match_cons(v_42, sym_TNil_0))
                {
                  ATerm p_10;
                  p_10 = t;
                  {
                    ATerm z_42 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm q_10 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = q_10;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      z_42 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_42), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_42), not_null(z_42)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = p_10;
                }
              else
                _fail(t);
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
ATerm assert_1 (ATerm t, ATerm c_44 (ATerm))
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,s_43 = NULL;
  m_43 = t;
  i_43 :
  if(match_cons(m_43, sym_TCons_2))
    {
      n_43 = ATgetArgument(m_43, 0);
      o_43 = ATgetArgument(m_43, 1);
      j_43 :
      if(match_cons(o_43, sym_TCons_2))
        {
          p_43 = ATgetArgument(o_43, 0);
          s_43 = ATgetArgument(o_43, 1);
          l_43 :
          if(match_cons(s_43, sym_TNil_0))
            {
              ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
              ATerm r_10;
              r_10 = t;
              {
                ATerm a_44 = NULL;
                ATerm b_44 = NULL,d_44 = NULL,f_44 = NULL;
                t = c_44(t);
                a_44 = t;
                if(x_43 != NULL && x_43 != a_44)
                  _fail(a_44);
                else
                  x_43 = a_44;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_43), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm s_10 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_43), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = s_10;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  b_44 = t;
                  h_43 :
                  if(match_cons(b_44, sym_Cons_2))
                    {
                      d_44 = ATgetArgument(b_44, 0);
                      f_44 = ATgetArgument(b_44, 1);
                      if(y_43 != NULL && y_43 != d_44)
                        _fail(d_44);
                      else
                        y_43 = d_44;
                      if(z_43 != NULL && z_43 != f_44)
                        _fail(f_44);
                      else
                        z_43 = f_44;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_43), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_43), not_null(y_43)), not_null(z_43)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = r_10;
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
  ATerm t_44 = NULL;
  t_44 = t;
  t = SSL_implode_string(not_null(t_44));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  t = SSL_explode_string(not_null(x_44));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm t_10 = t;
    if(PushChoice()==0)
      {
        ATerm f_45 (ATerm t)
        {
          ATerm u_10 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, f_45);
              PopChoice();
            }
          else
            {
              t = u_10;
              {
                ATerm z_6 (ATerm t)
                {
                  ATerm e_45 = NULL;
                  e_45 = t;
                  a_45 :
                  if(!(match_int(e_45, 47)))
                    _fail(t);
                  return(t);
                }
                ATerm i_7 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = Cons_2(t, z_6, i_7);
              }
            }
          return(t);
        }
        t = f_45(t);
        PopChoice();
      }
    else
      {
        t = t_10;
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_43 (ATerm), ATerm v_43 (ATerm))
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_cons(k_45, sym_Cons_2))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      {
        ATerm p_45 = NULL;
        t = not_null(l_45);
        {
          ATerm r_45 = NULL;
          t = u_43(t);
          p_45 = t;
          t = not_null(m_45);
          t = v_43(t);
          r_45 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_45), not_null(r_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm x_45 = NULL;
  ATerm v_10;
  v_10 = t;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm y_45 = NULL;
      t = get_path_0(t);
      y_45 = t;
      if(x_45 != NULL && x_45 != y_45)
        _fail(y_45);
      else
        x_45 = y_45;
      return(t);
    }
    t = Cons_2(t, j_7, _id);
    {
      ATerm w_10;
      w_10 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, not_null(x_45)), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm k_7 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
          return(t);
        }
        t = assert_1(t, k_7);
      }
      t = w_10;
    }
  }
  t = v_10;
  {
    ATerm l_7 (ATerm t)
    {
      t = basename_1(t, _id);
      return(t);
    }
    t = pack_modules_2(t, pack_stratego_1, l_7);
  }
  return(t);
}
