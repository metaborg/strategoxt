#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Imports_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_Script_1;
Symbol sym_Command_1;
Symbol sym_Dump_1;
Symbol sym_Load_1;
Symbol sym_Eval_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Star_0;
Symbol sym_StarStar_0;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Tuple_1;
Symbol sym_List_1;
Symbol sym_ListTail_2;
Symbol sym_BuildDefault_1;
Symbol sym_Con1_2;
Symbol sym_Con_3;
Symbol sym_Con3_3;
Symbol sym_Con4_4;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_SRDef_3;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_CallNoArgs_1;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_RChoice_2;
Symbol sym_GChoice_2;
Symbol sym_RGChoice_2;
Symbol sym_AM_2;
Symbol sym_ParenStrat_1;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Bagof_1;
Symbol sym_PrimNoArgs_1;
Symbol sym_Prim_2;
Symbol sym_PrimTS_3;
Symbol sym_PrimS_2;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_AnnoCong_2;
Symbol sym_StrategyCurly_1;
Symbol sym_TupleCong_0;
Symbol sym_TupleCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_ModCong_2;
Symbol sym_Mod_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ListCong_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermRef_2;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Id_1;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
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
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Script_1 = ATmakeSymbol("Script", 1, ATfalse);
  ATprotectSymbol(sym_Script_1);
  sym_Command_1 = ATmakeSymbol("Command", 1, ATfalse);
  ATprotectSymbol(sym_Command_1);
  sym_Dump_1 = ATmakeSymbol("Dump", 1, ATfalse);
  ATprotectSymbol(sym_Dump_1);
  sym_Load_1 = ATmakeSymbol("Load", 1, ATfalse);
  ATprotectSymbol(sym_Load_1);
  sym_Eval_1 = ATmakeSymbol("Eval", 1, ATfalse);
  ATprotectSymbol(sym_Eval_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Star_0 = ATmakeSymbol("Star", 0, ATfalse);
  ATprotectSymbol(sym_Star_0);
  sym_StarStar_0 = ATmakeSymbol("StarStar", 0, ATfalse);
  ATprotectSymbol(sym_StarStar_0);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_RGChoice_2 = ATmakeSymbol("RGChoice", 2, ATfalse);
  ATprotectSymbol(sym_RGChoice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimTS_3 = ATmakeSymbol("PrimTS", 3, ATfalse);
  ATprotectSymbol(sym_PrimTS_3);
  sym_PrimS_2 = ATmakeSymbol("PrimS", 2, ATfalse);
  ATprotectSymbol(sym_PrimS_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  init_constant_terms();
}
ATerm term_n_18;
ATerm term_p_17;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_x_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_l_9;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_b_5;
ATerm term_a_5;
void init_constant_terms (void)
{
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-param", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_s_5);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_v_5);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("if-verbose2", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_6);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("integers", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("verbose", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_o_5);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_n_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_o_5);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_o_5);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_b_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_o_5);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__3, term_a_15, term_b_15, (ATerm) ATempty);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm param_name_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm c_78 (ATerm));
ATerm subt_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_88 (ATerm), ATerm p_88 (ATerm));
ATerm for_3 (ATerm, ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm));
ATerm copy_0 (ATerm);
ATerm int_to_int_list_0 (ATerm);
ATerm create_call_0 (ATerm);
ATerm to_fc_Body_0 (ATerm);
ATerm fc_name_0 (ATerm);
ATerm to_fc_SDef_0 (ATerm);
ATerm tg_to_format_checker_0 (ATerm);
ATerm _2 (ATerm, ATerm k_56 (ATerm), ATerm l_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_95 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_70 (ATerm));
ATerm debug_1 (ATerm, ATerm z_71 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm r_82 (ATerm), ATerm s_82 (ATerm));
ATerm crush_2 (ATerm, ATerm p_81 (ATerm), ATerm q_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_95 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_70 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_87 (ATerm));
ATerm map_1 (ATerm, ATerm h_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_87 (ATerm));
ATerm Program_1 (ATerm, ATerm q_69 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_69 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_57 (ATerm), ATerm u_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm y_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm i_71 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_71 (ATerm), ATerm f_71 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_71 (ATerm));
ATerm io_tg2fc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm q_0 = NULL;
  q_0 = t;
  t = SSL_int_to_string(not_null(q_0));
  return(t);
}
ATerm param_name_0 (ATerm t)
{
  ATerm h_1 = NULL;
  ATerm s_1 = NULL;
  t = int_to_string_0(t);
  {
    s_1 = t;
    if(((h_1 != NULL) && (h_1 != s_1)))
      _fail(s_1);
    else
      h_1 = s_1;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_5, not_null(h_1));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm d_2 = NULL;
  ATerm f_2 = NULL,g_2 = NULL;
  d_2 = t;
  {
    ATerm h_2 = NULL;
    ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
    t = not_null(d_2);
    {
      h_2 = t;
      {
        t = SSL_explode_term(not_null(h_2));
        {
          j_2 = t;
          a_2 :
          if(match_cons(j_2, sym__2))
            {
              k_2 = ATgetArgument(j_2, 0);
              l_2 = ATgetArgument(j_2, 1);
              b_2 :
              if(match_string(k_2, ""))
                {
                  c_2 :
                  if(((ATgetType(l_2) == AT_LIST) && !(ATisEmpty(l_2))))
                    {
                      m_2 = ATgetFirst((ATermList) l_2);
                      n_2 = (ATerm) ATgetNext((ATermList) l_2);
                      {
                        if(((g_2 != NULL) && (g_2 != m_2)))
                          _fail(m_2);
                        else
                          g_2 = m_2;
                        if(((f_2 != NULL) && (f_2 != n_2)))
                          _fail(n_2);
                        else
                          f_2 = n_2;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(g_2);
  }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm s_2 = NULL;
  ATerm t_2 = NULL;
  t_2 = t;
  if(((s_2 != NULL) && (s_2 != t_2)))
    _fail(t_2);
  else
    s_2 = t_2;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_b_5);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm d_3 = NULL;
  ATerm e_3 = NULL;
  e_3 = t;
  if(((d_3 != NULL) && (d_3 != e_3)))
    _fail(e_3);
  else
    d_3 = e_3;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_5, not_null(d_3));
    {
      ATerm u_3 (ATerm t)
      {
        ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
        f_3 = t;
        b_3 :
        if(match_cons(f_3, sym__2))
          {
            g_3 = ATgetArgument(f_3, 0);
            h_3 = ATgetArgument(f_3, 1);
            c_3 :
            if(((ATgetType(h_3) == AT_LIST) && ATisEmpty(h_3)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(h_3) == AT_LIST) && !(ATisEmpty(h_3))))
                  {
                    i_3 = ATgetFirst((ATermList) h_3);
                    j_3 = (ATerm) ATgetNext((ATermList) h_3);
                    {
                      ATerm n_3 = NULL,p_3 = NULL;
                      ATerm g_5;
                      g_5 = t;
                      {
                        ATerm o_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(i_3));
                        {
                          t = c_78(t);
                          {
                            o_3 = t;
                            if(((n_3 != NULL) && (n_3 != o_3)))
                              _fail(o_3);
                            else
                              n_3 = o_3;
                          }
                        }
                      }
                      t = g_5;
                      {
                        ATerm q_3 = NULL,s_3 = NULL;
                        ATerm r_3 = NULL;
                        t = not_null(g_3);
                        {
                          t = inc_0(t);
                          {
                            r_3 = t;
                            if(((q_3 != NULL) && (q_3 != r_3)))
                              _fail(r_3);
                            else
                              q_3 = r_3;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_3), not_null(j_3));
                          {
                            t = u_3(t);
                            {
                              s_3 = t;
                              if(((p_3 != NULL) && (p_3 != s_3)))
                                _fail(s_3);
                              else
                                p_3 = s_3;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(p_3)), not_null(n_3));
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = u_3(t);
    }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      e_4 = ATgetArgument(c_4, 1);
      {
        ATerm h_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_4), not_null(e_4));
            ;
            LocalPopChoice(i_5);
          }
        else
          {
            t = h_5;
            t = SSL_subtr(not_null(d_4), not_null(e_4));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm o_88 (ATerm), ATerm p_88 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm l_5 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_88(t);
        ;
        LocalPopChoice(m_5);
      }
    else
      {
        t = l_5;
        {
          t = p_88(t);
          t = i_4(t);
        }
      }
    return(t);
  }
  t = i_4(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm))
{
  t = r_88(t);
  t = while_not_2(t, s_88, t_88);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
    r_4 = t;
    k_4 :
    if(match_cons(r_4, sym__2))
      {
        s_4 = ATgetArgument(r_4, 0);
        t_4 = ATgetArgument(r_4, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_4), not_null(t_4), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
    w_4 = t;
    m_4 :
    if(match_cons(w_4, sym__3))
      {
        x_4 = ATgetArgument(w_4, 0);
        y_4 = ATgetArgument(w_4, 1);
        z_4 = ATgetArgument(w_4, 2);
        n_4 :
        if(match_int(x_4, 0))
          {
            t = not_null(z_4);
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
    c_5 = t;
    q_4 :
    if(match_cons(c_5, sym__3))
      {
        d_5 = ATgetArgument(c_5, 0);
        e_5 = ATgetArgument(c_5, 1);
        f_5 = ATgetArgument(c_5, 2);
        {
          ATerm j_5 = NULL;
          ATerm n_5;
          n_5 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), term_b_5);
            t = geq_0(t);
          }
          t = n_5;
          {
            ATerm k_5 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), term_b_5);
            {
              t = subt_0(t);
              {
                k_5 = t;
                if(((j_5 != NULL) && (j_5 != k_5)))
                  _fail(k_5);
                else
                  j_5 = k_5;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_5), not_null(e_5), (ATerm) ATinsert(CheckATermList(not_null(f_5)), not_null(e_5)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, b_0, e_0, f_0);
  return(t);
}
ATerm int_to_int_list_0 (ATerm t)
{
  ATerm q_5 = NULL;
  ATerm r_5 = NULL;
  r_5 = t;
  if(((q_5 != NULL) && (q_5 != r_5)))
    _fail(r_5);
  else
    q_5 = r_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), term_o_5);
    {
      t = copy_0(t);
      t = map_with_index_1(t, Fst_0);
    }
  }
  return(t);
}
ATerm create_call_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
  f_6 = t;
  c_6 :
  if(match_cons(f_6, sym_Param_1))
    {
      g_6 = ATgetArgument(f_6, 0);
      {
        ATerm k_6 = NULL;
        ATerm l_6 = NULL;
        t = not_null(g_6);
        {
          t = param_name_0(t);
          {
            l_6 = t;
            if(((k_6 != NULL) && (k_6 != l_6)))
              _fail(l_6);
            else
              k_6 = l_6;
          }
        }
        t = not_null(k_6);
      }
    }
  else
    {
      if(match_cons(f_6, sym_String_0))
        {
          t = term_t_5;
        }
      else
        {
          if(match_cons(f_6, sym_Int_0))
            {
              t = term_w_5;
            }
          else
            {
              if(match_cons(f_6, sym_NonTermRef_2))
                {
                  g_6 = ATgetArgument(f_6, 0);
                  i_6 = ATgetArgument(f_6, 1);
                  d_6 :
                  if(match_cons(g_6, sym_Id_1))
                    {
                      h_6 = ATgetArgument(g_6, 0);
                      {
                        ATerm o_6 = NULL,p_6 = NULL;
                        ATerm q_6 = NULL;
                        t = not_null(h_6);
                        {
                          ATerm r_6 = NULL;
                          t = fc_name_0(t);
                          {
                            q_6 = t;
                            {
                              if(((o_6 != NULL) && (o_6 != q_6)))
                                _fail(q_6);
                              else
                                o_6 = q_6;
                              {
                                t = not_null(i_6);
                                {
                                  t = map_1(t, create_call_0);
                                  {
                                    r_6 = t;
                                    if(((p_6 != NULL) && (p_6 != r_6)))
                                      _fail(r_6);
                                    else
                                      p_6 = r_6;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_6)), not_null(p_6));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(f_6, sym_Prod_2))
                    {
                      g_6 = ATgetArgument(f_6, 0);
                      i_6 = ATgetArgument(f_6, 1);
                      e_6 :
                      if(match_cons(g_6, sym_Id_1))
                        {
                          h_6 = ATgetArgument(g_6, 0);
                          {
                            ATerm u_6 = NULL;
                            ATerm v_6 = NULL;
                            t = not_null(i_6);
                            {
                              t = map_1(t, create_call_0);
                              {
                                v_6 = t;
                                if(((u_6 != NULL) && (u_6 != v_6)))
                                  _fail(v_6);
                                else
                                  u_6 = v_6;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_6)), not_null(u_6));
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm to_fc_Body_0 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  j_7 :
  if(((ATgetType(n_7) == AT_LIST) && !(ATisEmpty(n_7))))
    {
      o_7 = ATgetFirst((ATermList) n_7);
      p_7 = (ATerm) ATgetNext((ATermList) n_7);
      k_7 :
      if(((ATgetType(p_7) == AT_LIST) && !(ATisEmpty(p_7))))
        {
          l_7 = ATgetFirst((ATermList) p_7);
          m_7 = (ATerm) ATgetNext((ATermList) p_7);
          {
            ATerm t_7 = NULL,u_7 = NULL;
            ATerm v_7 = NULL;
            t = not_null(o_7);
            {
              ATerm w_7 = NULL;
              t = create_call_0(t);
              {
                v_7 = t;
                {
                  if(((t_7 != NULL) && (t_7 != v_7)))
                    _fail(v_7);
                  else
                    t_7 = v_7;
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(m_7)), not_null(l_7));
                    {
                      t = to_fc_Body_0(t);
                      {
                        w_7 = t;
                        if(((u_7 != NULL) && (u_7 != w_7)))
                          _fail(w_7);
                        else
                          u_7 = w_7;
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_7), not_null(u_7));
          }
        }
      else
        {
          if(((ATgetType(p_7) == AT_LIST) && ATisEmpty(p_7)))
            {
              {
                t = not_null(o_7);
                t = create_call_0(t);
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fc_name_0 (ATerm t)
{
  ATerm d_8 = NULL;
  ATerm e_8 = NULL;
  e_8 = t;
  if(((d_8 != NULL) && (d_8 != e_8)))
    _fail(e_8);
  else
    d_8 = e_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_5, not_null(d_8));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm to_fc_SDef_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
  o_8 = t;
  m_8 :
  if(match_cons(o_8, sym_NonTermDec_3))
    {
      p_8 = ATgetArgument(o_8, 0);
      r_8 = ATgetArgument(o_8, 1);
      s_8 = ATgetArgument(o_8, 2);
      n_8 :
      if(match_cons(p_8, sym_Id_1))
        {
          q_8 = ATgetArgument(p_8, 0);
          {
            ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
            ATerm a_9 = NULL;
            t = not_null(q_8);
            {
              ATerm b_9 = NULL;
              t = fc_name_0(t);
              {
                a_9 = t;
                {
                  if(((w_8 != NULL) && (w_8 != a_9)))
                    _fail(a_9);
                  else
                    w_8 = a_9;
                  {
                    t = not_null(s_8);
                    {
                      ATerm e_9 = NULL;
                      t = to_fc_Body_0(t);
                      {
                        b_9 = t;
                        {
                          if(((x_8 != NULL) && (x_8 != b_9)))
                            _fail(b_9);
                          else
                            x_8 = b_9;
                          {
                            t = not_null(r_8);
                            {
                              t = int_to_int_list_0(t);
                              {
                                ATerm f_9 = NULL;
                                ATerm h_0 (ATerm t)
                                {
                                  ATerm c_9 = NULL;
                                  ATerm d_9 = NULL;
                                  t = param_name_0(t);
                                  {
                                    d_9 = t;
                                    if(((c_9 != NULL) && (c_9 != d_9)))
                                      _fail(d_9);
                                    else
                                      c_9 = d_9;
                                  }
                                  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(c_9));
                                  return(t);
                                }
                                t = map_1(t, h_0);
                                {
                                  e_9 = t;
                                  {
                                    if(((y_8 != NULL) && (y_8 != e_9)))
                                      _fail(e_9);
                                    else
                                      y_8 = e_9;
                                    {
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_5), not_null(q_8)), term_y_5);
                                      {
                                        t = concat_strings_0(t);
                                        {
                                          f_9 = t;
                                          if(((z_8 != NULL) && (z_8 != f_9)))
                                            _fail(f_9);
                                          else
                                            z_8 = f_9;
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
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(w_8), not_null(y_8), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_8), (ATerm) ATmakeAppl(sym_Call_2, term_b_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, term_m_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(z_8)))))))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tg_to_format_checker_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym_TreeGrammar_1))
    {
      q_9 = ATgetArgument(p_9, 0);
      {
        ATerm s_9 = NULL;
        ATerm t_9 = NULL;
        t = not_null(q_9);
        {
          t = map_1(t, to_fc_SDef_0);
          {
            t_9 = t;
            if(((s_9 != NULL) && (s_9 != t_9)))
              _fail(t_9);
            else
              s_9 = t_9;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Module_2, term_n_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_9))), (ATerm) ATmakeAppl(sym_Imports_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_6), term_t_6), term_s_6))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm k_56 (ATerm), ATerm l_56 (ATerm))
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym__2))
    {
      d_10 = ATgetArgument(c_10, 0);
      e_10 = ATgetArgument(c_10, 1);
      {
        ATerm i_10 = NULL,k_10 = NULL;
        ATerm j_10 = NULL;
        t = SSLgetAnnotations(not_null(c_10));
        {
          j_10 = t;
          if(((i_10 != NULL) && (i_10 != j_10)))
            _fail(j_10);
          else
            i_10 = j_10;
        }
        {
          t = not_null(d_10);
          {
            ATerm m_10 = NULL;
            t = k_56(t);
            {
              k_10 = t;
              {
                t = not_null(e_10);
                {
                  ATerm o_10 = NULL;
                  t = l_56(t);
                  {
                    m_10 = t;
                    {
                      ATerm p_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_10), not_null(m_10)), not_null(i_10));
                      {
                        p_10 = t;
                        if(((o_10 != NULL) && (o_10 != p_10)))
                          _fail(p_10);
                        else
                          o_10 = p_10;
                      }
                      t = not_null(o_10);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_10 = NULL;
  ATerm x_6;
  x_6 = t;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm y_10 = NULL,z_10 = NULL;
      y_10 = t;
      w_10 :
      if(match_cons(y_10, sym_Program_1))
        {
          z_10 = ATgetArgument(y_10, 0);
          if(((x_10 != NULL) && (x_10 != z_10)))
            _fail(z_10);
          else
            x_10 = z_10;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_7), not_null(x_10)), term_z_6));
      {
        t = printnl_0(t);
        {
          t = term_b_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  d_11 = t;
  c_11 :
  if(match_cons(d_11, sym__2))
    {
      e_11 = ATgetArgument(d_11, 0);
      f_11 = ATgetArgument(d_11, 1);
      {
        ATerm b_7;
        b_7 = t;
        t = SSL_printnl(not_null(e_11), not_null(f_11));
        t = b_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm k_11 = NULL;
  k_11 = t;
  t = SSL_implode_string(not_null(k_11));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
        p_11 = t;
        o_11 :
        if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
          {
            q_11 = ATgetFirst((ATermList) p_11);
            r_11 = (ATerm) ATgetNext((ATermList) p_11);
            {
              t = not_null(q_11);
              {
                ATerm n_0 (ATerm t)
                {
                  t = not_null(r_11);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_0);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm b_12 = NULL;
  ATerm d_12 = NULL;
  b_12 = t;
  {
    ATerm e_12 = NULL;
    ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
    t = not_null(b_12);
    {
      e_12 = t;
      {
        t = SSL_explode_term(not_null(e_12));
        {
          g_12 = t;
          z_11 :
          if(match_cons(g_12, sym__2))
            {
              h_12 = ATgetArgument(g_12, 0);
              i_12 = ATgetArgument(g_12, 1);
              a_12 :
              if(match_string(h_12, ""))
                {
                  if(((d_12 != NULL) && (d_12 != i_12)))
                    _fail(i_12);
                  else
                    d_12 = i_12;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_12);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm m_12 (ATerm t)
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_12);
        ;
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
        {
          t = Nil_0(t);
          t = w_76(t);
        }
      }
    return(t);
  }
  t = m_12(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym__2))
    {
      q_12 = ATgetArgument(p_12, 0);
      r_12 = ATgetArgument(p_12, 1);
      {
        t = not_null(q_12);
        {
          ATerm o_0 (ATerm t)
          {
            t = not_null(r_12);
            return(t);
          }
          t = at_end_1(t, o_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  t = SSL_explode_string(not_null(w_12));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  t = SSL_is_string(not_null(a_13));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = i_7;
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_0);
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            {
              ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
              j_13 = t;
              i_13 :
              if(match_cons(j_13, sym_Path_1))
                {
                  k_13 = ATgetArgument(j_13, 0);
                  t = not_null(k_13);
                }
              else
                {
                  if(match_cons(j_13, sym_Var_1))
                    {
                      k_13 = ATgetArgument(j_13, 0);
                      {
                        t = not_null(k_13);
                        {
                          ATerm x_7 = t;
                          int y_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_7);
                            }
                          else
                            {
                              t = x_7;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_z_7;
                                  return(t);
                                }
                                t = debug_1(t, r_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_13, sym_Prefix_2))
                        {
                          k_13 = ATgetArgument(j_13, 0);
                          l_13 = ATgetArgument(j_13, 1);
                          {
                            ATerm q_13 = NULL,s_13 = NULL;
                            ATerm a_8;
                            a_8 = t;
                            {
                              ATerm r_13 = NULL;
                              t = not_null(k_13);
                              {
                                t = eval_config_0(t);
                                {
                                  r_13 = t;
                                  if(((q_13 != NULL) && (q_13 != r_13)))
                                    _fail(r_13);
                                  else
                                    q_13 = r_13;
                                }
                              }
                            }
                            t = a_8;
                            {
                              ATerm t_13 = NULL;
                              t = not_null(l_13);
                              {
                                t = eval_config_0(t);
                                {
                                  t_13 = t;
                                  if(((s_13 != NULL) && (s_13 != t_13)))
                                    _fail(t_13);
                                  else
                                    s_13 = t_13;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_13), not_null(s_13));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(b_14));
    {
      t = table_get_0(t);
      {
        ATerm s_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_8;
            c_8 = t;
            {
              ATerm d_14 = NULL;
              ATerm e_14 = NULL;
              e_14 = t;
              if(((d_14 != NULL) && (d_14 != e_14)))
                _fail(e_14);
              else
                d_14 = e_14;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_8, not_null(b_14), not_null(d_14));
                t = table_put_0(t);
              }
            }
            t = c_8;
          }
          return(t);
        }
        t = try_1(t, s_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm f_8;
    f_8 = t;
    {
      ATerm i_14 = NULL;
      ATerm j_14 = NULL;
      t = term_g_8;
      {
        t = get_config_0(t);
        {
          j_14 = t;
          if(((i_14 != NULL) && (i_14 != j_14)))
            _fail(j_14);
          else
            i_14 = j_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_14), term_h_8);
        t = geq_0(t);
      }
    }
    t = f_8;
    t = q_95(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym__2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      t = SSL_WriteToTextFile(not_null(o_14), not_null(p_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym__2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      t = SSL_WriteToBinaryFile(not_null(w_14), not_null(x_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_15 = NULL;
  ATerm i_8;
  i_8 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            ATerm g_15 = NULL,h_15 = NULL;
            g_15 = t;
            c_15 :
            if(match_cons(g_15, sym_Output_1))
              {
                h_15 = ATgetArgument(g_15, 0);
                if(((f_15 != NULL) && (f_15 != h_15)))
                  _fail(h_15);
                else
                  f_15 = h_15;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_0);
          ;
          LocalPopChoice(k_8);
        }
      else
        {
          t = j_8;
          {
            ATerm i_15 = NULL;
            t = term_l_8;
            {
              i_15 = t;
              if(((f_15 != NULL) && (f_15 != i_15)))
                _fail(i_15);
              else
                f_15 = i_15;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_0, _id);
  }
  t = i_8;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        t = not_null(f_15);
        return(t);
      }
      t = split_2(t, x_0, _id);
      return(t);
    }
    t = _2(t, _id, w_0);
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              ATerm j_15 = NULL;
              j_15 = t;
              e_15 :
              if(!(match_cons(j_15, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_0);
            return(t);
          }
          t = _2(t, y_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          t = _2(t, _id, WriteToTextFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm p_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
  ATerm v_8;
  v_8 = t;
  t = dtime_0(t);
  t = v_8;
  {
    t = r_70(t);
    {
      ATerm g_9;
      g_9 = t;
      {
        ATerm q_15 = NULL;
        t = dtime_0(t);
        {
          q_15 = t;
          if(((p_15 != NULL) && (p_15 != q_15)))
            _fail(q_15);
          else
            p_15 = q_15;
        }
      }
      t = g_9;
      {
        r_15 = t;
        o_15 :
        if(match_cons(r_15, sym__2))
          {
            s_15 = ATgetArgument(r_15, 0);
            t_15 = ATgetArgument(r_15, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_15)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_15))), not_null(t_15));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm h_9;
  h_9 = t;
  {
    ATerm a_16 = NULL,c_16 = NULL;
    ATerm i_9;
    i_9 = t;
    {
      ATerm b_16 = NULL;
      t = z_71(t);
      {
        b_16 = t;
        if(((a_16 != NULL) && (a_16 != b_16)))
          _fail(b_16);
        else
          a_16 = b_16;
      }
    }
    t = i_9;
    {
      ATerm d_16 = NULL;
      d_16 = t;
      if(((c_16 != NULL) && (c_16 != d_16)))
        _fail(d_16);
      else
        c_16 = d_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_16)), not_null(a_16)));
        t = printnl_0(t);
      }
    }
  }
  t = h_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_16 = NULL;
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_16 = NULL;
      i_16 = t;
      {
        if(((h_16 != NULL) && (h_16 != i_16)))
          _fail(i_16);
        else
          h_16 = i_16;
        t = SSL_ReadFromFile(not_null(h_16));
      }
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm a_1 (ATerm t)
        {
          t = term_l_9;
          return(t);
        }
        t = debug_1(t, a_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm))
{
  ATerm m_16 = NULL,o_16 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm n_16 = NULL;
    t = g_84(t);
    {
      n_16 = t;
      if(((m_16 != NULL) && (m_16 != n_16)))
        _fail(n_16);
      else
        m_16 = n_16;
    }
  }
  t = m_9;
  {
    ATerm p_16 = NULL;
    t = h_84(t);
    {
      p_16 = t;
      if(((o_16 != NULL) && (o_16 != p_16)))
        _fail(p_16);
      else
        o_16 = p_16;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(o_16));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_16 = NULL;
  ATerm n_9;
  n_9 = t;
  {
    ATerm r_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          ATerm w_16 = NULL,x_16 = NULL;
          w_16 = t;
          t_16 :
          if(match_cons(w_16, sym_Input_1))
            {
              x_16 = ATgetArgument(w_16, 0);
              if(((v_16 != NULL) && (v_16 != x_16)))
                _fail(x_16);
              else
                v_16 = x_16;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, b_1);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = r_9;
        {
          ATerm y_16 = NULL;
          t = term_v_9;
          {
            y_16 = t;
            if(((v_16 != NULL) && (v_16 != y_16)))
              _fail(y_16);
            else
              v_16 = y_16;
          }
        }
      }
  }
  t = n_9;
  {
    ATerm c_1 (ATerm t)
    {
      t = not_null(v_16);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, c_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm c_17 = NULL;
    c_17 = t;
    b_17 :
    if(!(match_string(c_17, "-v")))
      {
        if(!(match_string(c_17, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_x_9;
    t = set_config_0(t);
    t = term_y_9;
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    t = term_z_9;
    return(t);
  }
  t = Option_3(t, d_1, e_1, f_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm f_17 = NULL;
    f_17 = t;
    d_17 :
    if(!(match_string(f_17, "-k")))
      {
        if(!(match_string(f_17, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm a_10;
    a_10 = t;
    {
      ATerm g_17 = NULL;
      ATerm h_17 = NULL;
      t = string_to_int_0(t);
      {
        h_17 = t;
        if(((g_17 != NULL) && (g_17 != h_17)))
          _fail(h_17);
        else
          g_17 = h_17;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(g_17));
        t = set_config_0(t);
      }
    }
    t = a_10;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_g_10;
    return(t);
  }
  t = ArgOption_3(t, g_1, i_1, j_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  t = SSL_string_to_int(not_null(k_17));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm s_17 = NULL;
        s_17 = t;
        n_17 :
        if(!(match_string(s_17, "-S")))
          {
            if(!(match_string(s_17, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_q_10;
        t = set_config_0(t);
        t = term_r_10;
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_s_10;
        return(t);
      }
      t = Option_3(t, k_1, l_1, m_1);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = h_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm t_17 = NULL;
              t_17 = t;
              o_17 :
              if(!(match_string(t_17, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm w_17 = NULL;
              ATerm v_10;
              v_10 = t;
              {
                ATerm u_17 = NULL;
                ATerm v_17 = NULL;
                t = string_to_int_0(t);
                {
                  v_17 = t;
                  if(((u_17 != NULL) && (u_17 != v_17)))
                    _fail(v_17);
                  else
                    u_17 = v_17;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(u_17));
                  t = set_config_0(t);
                }
              }
              t = v_10;
              {
                ATerm x_17 = NULL;
                x_17 = t;
                if(((w_17 != NULL) && (w_17 != x_17)))
                  _fail(x_17);
                else
                  w_17 = x_17;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_17));
              }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              t = term_a_11;
              return(t);
            }
            t = ArgOption_3(t, n_1, o_1, p_1);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm q_1 (ATerm t)
              {
                ATerm y_17 = NULL;
                y_17 = t;
                r_17 :
                if(!(match_string(y_17, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_1 (ATerm t)
              {
                t = term_g_11;
                t = set_config_0(t);
                t = term_h_11;
                return(t);
              }
              ATerm t_1 (ATerm t)
              {
                t = term_i_11;
                return(t);
              }
              t = Option_3(t, q_1, r_1, t_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = j_11;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm e_18 = NULL;
    e_18 = t;
    b_18 :
    if(!(match_string(e_18, "-o")))
      {
        if(!(match_string(e_18, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm h_18 = NULL;
    ATerm s_11;
    s_11 = t;
    {
      ATerm f_18 = NULL;
      ATerm g_18 = NULL;
      g_18 = t;
      if(((f_18 != NULL) && (f_18 != g_18)))
        _fail(g_18);
      else
        f_18 = g_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_11, not_null(f_18));
        t = set_config_0(t);
      }
    }
    t = s_11;
    {
      ATerm i_18 = NULL;
      i_18 = t;
      if(((h_18 != NULL) && (h_18 != i_18)))
        _fail(i_18);
      else
        h_18 = i_18;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_18));
    }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_u_11;
    return(t);
  }
  t = ArgOption_3(t, u_1, v_1, w_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm m_18 = NULL;
          m_18 = t;
          l_18 :
          if(!(match_string(m_18, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          t = term_y_11;
          t = set_config_0(t);
          t = term_c_12;
          return(t);
        }
        ATerm z_1 (ATerm t)
        {
          t = term_f_12;
          return(t);
        }
        t = Option_3(t, x_1, y_1, z_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
  s_18 = t;
  q_18 :
  if(match_string(s_18, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
        {
          t_18 = ATgetFirst((ATermList) s_18);
          u_18 = (ATerm) ATgetNext((ATermList) s_18);
          r_18 :
          if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
            {
              v_18 = ATgetFirst((ATermList) u_18);
              w_18 = (ATerm) ATgetNext((ATermList) u_18);
              {
                ATerm a_19 = NULL;
                ATerm j_12;
                j_12 = t;
                {
                  t = not_null(t_18);
                  t = j_0(t);
                }
                t = j_12;
                {
                  ATerm b_19 = NULL;
                  t = not_null(v_18);
                  {
                    t = k_0(t);
                    {
                      b_19 = t;
                      if(((a_19 != NULL) && (a_19 != b_19)))
                        _fail(b_19);
                      else
                        a_19 = b_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_18)), not_null(a_19));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm i_19 = NULL;
    i_19 = t;
    f_19 :
    if(!(match_string(i_19, "-i")))
      {
        if(!(match_string(i_19, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm l_19 = NULL;
    ATerm k_12;
    k_12 = t;
    {
      ATerm j_19 = NULL;
      ATerm k_19 = NULL;
      k_19 = t;
      if(((j_19 != NULL) && (j_19 != k_19)))
        _fail(k_19);
      else
        j_19 = k_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_12, not_null(j_19));
        t = set_config_0(t);
      }
    }
    t = k_12;
    {
      ATerm m_19 = NULL;
      m_19 = t;
      if(((l_19 != NULL) && (l_19 != m_19)))
        _fail(m_19);
      else
        l_19 = m_19;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_19));
    }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_n_12;
    return(t);
  }
  t = ArgOption_3(t, e_2, i_2, o_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, term_x_12));
  {
    t = printnl_0(t);
    {
      t = term_b_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  t = SSL_TicksToSeconds(not_null(q_19));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_19), not_null(x_19));
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = SSL_addr(not_null(w_19), not_null(x_19));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_82 (ATerm), ATerm s_82 (ATerm))
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_82(t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
        e_20 = t;
        d_20 :
        if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
          {
            f_20 = ATgetFirst((ATermList) e_20);
            g_20 = (ATerm) ATgetNext((ATermList) e_20);
            {
              ATerm j_20 = NULL;
              ATerm k_20 = NULL;
              t = not_null(g_20);
              {
                t = foldr_2(t, r_82, s_82);
                {
                  k_20 = t;
                  if(((j_20 != NULL) && (j_20 != k_20)))
                    _fail(k_20);
                  else
                    j_20 = k_20;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), not_null(j_20));
                t = s_82(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm p_81 (ATerm), ATerm q_81 (ATerm))
{
  ATerm r_20 = NULL;
  ATerm t_20 = NULL;
  r_20 = t;
  {
    ATerm u_20 = NULL;
    ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
    t = not_null(r_20);
    {
      u_20 = t;
      {
        t = SSL_explode_term(not_null(u_20));
        {
          w_20 = t;
          q_20 :
          if(match_cons(w_20, sym__2))
            {
              x_20 = ATgetArgument(w_20, 0);
              y_20 = ATgetArgument(w_20, 1);
              if(((t_20 != NULL) && (t_20 != y_20)))
                _fail(y_20);
              else
                t_20 = y_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_20);
      t = foldr_2(t, p_81, q_81);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm p_2 (ATerm t)
    {
      t = term_n_10;
      return(t);
    }
    t = crush_2(t, p_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_cons(e_21, sym__2))
    {
      f_21 = ATgetArgument(e_21, 0);
      g_21 = ATgetArgument(e_21, 1);
      {
        ATerm d_13;
        d_13 = t;
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_21), not_null(g_21));
              ;
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              t = SSL_gtr(not_null(f_21), not_null(g_21));
            }
        }
        t = d_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm m_21 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
      n_21 = t;
      l_21 :
      if(match_cons(n_21, sym__2))
        {
          o_21 = ATgetArgument(n_21, 0);
          p_21 = ATgetArgument(n_21, 1);
          {
            if(((m_21 != NULL) && (m_21 != o_21)))
              _fail(o_21);
            else
              m_21 = o_21;
            if(((m_21 != NULL) && (m_21 != p_21)))
              _fail(p_21);
            else
              m_21 = p_21;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_95 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm m_13;
    m_13 = t;
    {
      ATerm s_21 = NULL;
      ATerm t_21 = NULL;
      t = term_g_8;
      {
        t = get_config_0(t);
        {
          t_21 = t;
          if(((s_21 != NULL) && (s_21 != t_21)))
            _fail(t_21);
          else
            s_21 = t_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_21), term_b_5);
        t = geq_0(t);
      }
    }
    t = m_13;
    t = p_95(t);
    return(t);
  }
  t = try_1(t, q_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm x_21 = NULL,z_21 = NULL;
    ATerm n_13;
    n_13 = t;
    {
      ATerm y_21 = NULL;
      t = run_time_0(t);
      {
        y_21 = t;
        if(((x_21 != NULL) && (x_21 != y_21)))
          _fail(y_21);
        else
          x_21 = y_21;
      }
    }
    t = n_13;
    {
      ATerm a_22 = NULL;
      t = term_o_13;
      {
        t = get_config_0(t);
        {
          a_22 = t;
          if(((z_21 != NULL) && (z_21 != a_22)))
            _fail(a_22);
          else
            z_21 = a_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_13), not_null(x_21)), term_p_13), not_null(z_21)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_2);
  {
    t = term_n_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym_Version_0))
    {
      ATerm j_22 = NULL,l_22 = NULL;
      ATerm v_13;
      v_13 = t;
      {
        ATerm k_22 = NULL;
        t = SSLgetAnnotations(not_null(h_22));
        {
          k_22 = t;
          if(((j_22 != NULL) && (j_22 != k_22)))
            _fail(k_22);
          else
            j_22 = k_22;
        }
      }
      t = v_13;
      {
        ATerm m_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_22));
        {
          m_22 = t;
          if(((l_22 != NULL) && (l_22 != m_22)))
            _fail(m_22);
          else
            l_22 = m_22;
        }
        t = not_null(l_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_70 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, u_2);
  t = p_70(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  t = SSL_table_create(not_null(r_22));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  {
    ATerm a_14;
    a_14 = t;
    {
      t = term_c_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_14, term_f_14, not_null(v_22));
          t = table_put_0(t);
        }
      }
    }
    t = a_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  t = SSL_table_destroy(not_null(z_22));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  t = SSL_exit(not_null(d_23));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  g_23 :
  if(((ATgetType(h_23) == AT_LIST) && ATisEmpty(h_23)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
        {
          i_23 = ATgetFirst((ATermList) h_23);
          j_23 = (ATerm) ATgetNext((ATermList) h_23);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm g_14;
  g_14 = t;
  {
    ATerm m_23 = NULL;
    ATerm p_23 = NULL;
    ATerm h_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = h_14;
        {
          ATerm n_23 = NULL;
          ATerm o_23 = NULL;
          o_23 = t;
          if(((n_23 != NULL) && (n_23 != o_23)))
            _fail(o_23);
          else
            n_23 = o_23;
          t = (ATerm) ATinsert(ATempty, not_null(n_23));
        }
      }
    {
      p_23 = t;
      if(((m_23 != NULL) && (m_23 != p_23)))
        _fail(p_23);
      else
        m_23 = p_23;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(m_23));
      t = printnl_0(t);
    }
  }
  t = g_14;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_76 (ATerm))
{
  ATerm s_23 (ATerm t)
  {
    ATerm l_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = l_14;
        t = Cons_2(t, h_76, s_23);
      }
    return(t);
  }
  t = s_23(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  b_24 = t;
  y_23 :
  if(((ATgetType(b_24) == AT_LIST) && !(ATisEmpty(b_24))))
    {
      z_23 = ATgetFirst((ATermList) b_24);
      a_24 = (ATerm) ATgetNext((ATermList) b_24);
      {
        ATerm e_24 = NULL;
        t = not_null(a_24);
        {
          ATerm r_14;
          r_14 = t;
          {
            ATerm f_24 = NULL,h_24 = NULL,j_24 = NULL;
            ATerm s_14;
            s_14 = t;
            {
              ATerm g_24 = NULL;
              t = i_0(t);
              {
                g_24 = t;
                if(((f_24 != NULL) && (f_24 != g_24)))
                  _fail(g_24);
                else
                  f_24 = g_24;
              }
            }
            t = s_14;
            {
              ATerm i_24 = NULL;
              t = not_null(z_23);
              {
                t = g_0(t);
                {
                  i_24 = t;
                  if(((h_24 != NULL) && (h_24 != i_24)))
                    _fail(i_24);
                  else
                    h_24 = i_24;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_24)), not_null(h_24));
                {
                  j_24 = t;
                  if(((e_24 != NULL) && (e_24 != j_24)))
                    _fail(j_24);
                  else
                    e_24 = j_24;
                }
              }
            }
          }
          t = r_14;
          {
            ATerm v_2 (ATerm t)
            {
              t = not_null(e_24);
              return(t);
            }
            t = reverse_acc_2(t, g_0, v_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_24) == AT_LIST) && ATisEmpty(b_24)))
        {
          {
            t = term_o_5;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_69 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_Program_1))
    {
      v_24 = ATgetArgument(u_24, 0);
      {
        ATerm y_24 = NULL,a_25 = NULL;
        ATerm z_24 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
        {
          t = not_null(v_24);
          {
            ATerm c_25 = NULL;
            t = q_69(t);
            {
              a_25 = t;
              {
                ATerm d_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_25)), not_null(y_24));
                {
                  d_25 = t;
                  if(((c_25 != NULL) && (c_25 != d_25)))
                    _fail(d_25);
                  else
                    c_25 = d_25;
                }
                t = not_null(c_25);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm r_26 = NULL;
  ATerm t_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_26 = NULL;
      t = term_o_13;
      {
        t = get_config_0(t);
        {
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
        }
      }
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = t_14;
      {
        ATerm x_2 (ATerm t)
        {
          ATerm y_2 (ATerm t)
          {
            ATerm t_26 = NULL;
            t_26 = t;
            if(((r_26 != NULL) && (r_26 != t_26)))
              _fail(t_26);
            else
              r_26 = t_26;
            return(t);
          }
          t = Program_1(t, y_2);
          return(t);
        }
        t = option_defined_1(t, x_2);
      }
    }
  {
    ATerm z_2 (ATerm t)
    {
      ATerm a_3 (ATerm t)
      {
        t = not_null(r_26);
        return(t);
      }
      t = short_description_1(t, a_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, z_2);
    {
      t = term_z_14;
      {
        t = echo_0(t);
        {
          t = term_d_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_3 (ATerm t)
                {
                  ATerm u_26 = NULL;
                  ATerm v_26 = NULL;
                  v_26 = t;
                  if(((u_26 != NULL) && (u_26 != v_26)))
                    _fail(v_26);
                  else
                    u_26 = v_26;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_26)), term_k_15);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_3);
                {
                  ATerm l_3 (ATerm t)
                  {
                    ATerm w_26 = NULL;
                    ATerm x_26 = NULL;
                    ATerm m_3 (ATerm t)
                    {
                      t = not_null(r_26);
                      return(t);
                    }
                    t = long_description_1(t, m_3);
                    {
                      x_26 = t;
                      if(((w_26 != NULL) && (w_26 != x_26)))
                        _fail(x_26);
                      else
                        w_26 = x_26;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(w_26)), term_l_15);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_3);
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
ATerm debug_0 (ATerm t)
{
  ATerm m_15;
  m_15 = t;
  {
    ATerm k_27 = NULL;
    ATerm l_27 = NULL;
    l_27 = t;
    if(((k_27 != NULL) && (k_27 != l_27)))
      _fail(l_27);
    else
      k_27 = l_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, not_null(k_27)));
      t = printnl_0(t);
    }
  }
  t = m_15;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm n_15;
  n_15 = t;
  {
    t = a_72(t);
    t = debug_0(t);
  }
  t = n_15;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm s_27 = NULL,t_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym_Undefined_1))
    {
      t_27 = ATgetArgument(s_27, 0);
      {
        ATerm w_27 = NULL,y_27 = NULL;
        ATerm x_27 = NULL;
        t = SSLgetAnnotations(not_null(s_27));
        {
          x_27 = t;
          if(((w_27 != NULL) && (w_27 != x_27)))
            _fail(x_27);
          else
            w_27 = x_27;
        }
        {
          t = not_null(t_27);
          {
            ATerm a_28 = NULL;
            t = r_69(t);
            {
              y_27 = t;
              {
                ATerm b_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_27)), not_null(w_27));
                {
                  b_28 = t;
                  if(((a_28 != NULL) && (a_28 != b_28)))
                    _fail(b_28);
                  else
                    a_28 = b_28;
                }
                t = not_null(a_28);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm q_76 (ATerm))
{
  ATerm l_28 (ATerm t)
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_76, _id);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = Cons_2(t, _id, l_28);
      }
    return(t);
  }
  t = l_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_86 (ATerm))
{
  t = fetch_1(t, q_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Help_0))
    {
      ATerm s_28 = NULL,u_28 = NULL;
      ATerm w_15;
      w_15 = t;
      {
        ATerm t_28 = NULL;
        t = SSLgetAnnotations(not_null(q_28));
        {
          t_28 = t;
          if(((s_28 != NULL) && (s_28 != t_28)))
            _fail(t_28);
          else
            s_28 = t_28;
        }
      }
      t = w_15;
      {
        ATerm v_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_28));
        {
          v_28 = t;
          if(((u_28 != NULL) && (u_28 != v_28)))
            _fail(v_28);
          else
            u_28 = v_28;
        }
        t = not_null(u_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_75(t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym__2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      t = SSL_table_get(not_null(f_29), not_null(g_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym__3))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      q_29 = ATgetArgument(n_29, 2);
      {
        ATerm z_15;
        z_15 = t;
        {
          ATerm x_29 = NULL;
          ATerm y_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(p_29));
          {
            ATerm e_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_16);
              }
            else
              {
                t = e_16;
                t = (ATerm) ATempty;
              }
            {
              y_29 = t;
              if(((x_29 != NULL) && (x_29 != y_29)))
                _fail(y_29);
              else
                x_29 = y_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_29), not_null(p_29), (ATerm) ATinsert(CheckATermList(not_null(x_29)), not_null(q_29)));
            t = table_put_0(t);
          }
        }
        t = z_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_87 (ATerm))
{
  ATerm c_30 = NULL;
  ATerm d_30 = NULL;
  t = term_o_5;
  {
    t = v_87(t);
    {
      d_30 = t;
      if(((c_30 != NULL) && (c_30 != d_30)))
        _fail(d_30);
      else
        c_30 = d_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_15, term_b_15, not_null(c_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_string(j_30, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(j_30) == AT_LIST) && !(ATisEmpty(j_30))))
        {
          k_30 = ATgetFirst((ATermList) j_30);
          l_30 = (ATerm) ATgetNext((ATermList) j_30);
          {
            ATerm o_30 = NULL;
            ATerm g_16;
            g_16 = t;
            {
              t = not_null(k_30);
              t = a_0(t);
            }
            t = g_16;
            {
              ATerm p_30 = NULL;
              t = term_o_5;
              {
                t = c_0(t);
                {
                  p_30 = t;
                  if(((o_30 != NULL) && (o_30 != p_30)))
                    _fail(p_30);
                  else
                    o_30 = p_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_30)), not_null(o_30));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm u_30 = NULL;
    u_30 = t;
    t_30 :
    if(!(match_string(u_30, "--help")))
      {
        if(!(match_string(u_30, "-h")))
          {
            if(!(match_string(u_30, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_k_16;
    {
      t = set_config_0(t);
      t = term_l_16;
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  t = Option_3(t, t_3, v_3, w_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
  x_30 = t;
  w_30 :
  if(((ATgetType(x_30) == AT_LIST) && !(ATisEmpty(x_30))))
    {
      y_30 = ATgetFirst((ATermList) x_30);
      z_30 = (ATerm) ATgetNext((ATermList) x_30);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_30)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_30)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_57 (ATerm), ATerm u_57 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  i_31 :
  if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
    {
      k_31 = ATgetFirst((ATermList) j_31);
      l_31 = (ATerm) ATgetNext((ATermList) j_31);
      {
        ATerm p_31 = NULL,r_31 = NULL;
        ATerm q_31 = NULL;
        t = SSLgetAnnotations(not_null(j_31));
        {
          q_31 = t;
          if(((p_31 != NULL) && (p_31 != q_31)))
            _fail(q_31);
          else
            p_31 = q_31;
        }
        {
          t = not_null(k_31);
          {
            ATerm t_31 = NULL;
            t = t_57(t);
            {
              r_31 = t;
              {
                t = not_null(l_31);
                {
                  ATerm v_31 = NULL;
                  t = u_57(t);
                  {
                    t_31 = t;
                    {
                      ATerm w_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_31)), not_null(r_31)), not_null(p_31));
                      {
                        w_31 = t;
                        if(((v_31 != NULL) && (v_31 != w_31)))
                          _fail(w_31);
                        else
                          v_31 = w_31;
                      }
                      t = not_null(v_31);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm g_32 = NULL;
  g_32 = t;
  f_32 :
  if(((ATgetType(g_32) == AT_LIST) && ATisEmpty(g_32)))
    {
      {
        ATerm i_32 = NULL,k_32 = NULL;
        ATerm r_16;
        r_16 = t;
        {
          ATerm j_32 = NULL;
          t = SSLgetAnnotations(not_null(g_32));
          {
            j_32 = t;
            if(((i_32 != NULL) && (i_32 != j_32)))
              _fail(j_32);
            else
              i_32 = j_32;
          }
        }
        t = r_16;
        {
          ATerm l_32 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_32));
          {
            l_32 = t;
            if(((k_32 != NULL) && (k_32 != l_32)))
              _fail(l_32);
            else
              k_32 = l_32;
          }
          t = not_null(k_32);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(match_cons(r_32, sym__2))
    {
      s_32 = ATgetArgument(r_32, 0);
      t_32 = ATgetArgument(r_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_8, not_null(s_32), not_null(t_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_87 (ATerm))
{
  ATerm s_16;
  s_16 = t;
  {
    ATerm x_3 (ATerm t)
    {
      t = term_u_16;
      t = t_87(t);
      return(t);
    }
    t = try_1(t, x_3);
  }
  t = s_16;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm b_33 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm z_32 = NULL;
        ATerm a_33 = NULL;
        a_33 = t;
        if(((z_32 != NULL) && (z_32 != a_33)))
          _fail(a_33);
        else
          z_32 = a_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_13, not_null(z_32));
          t = set_config_0(t);
        }
      }
      t = z_16;
      {
        ATerm c_33 = NULL;
        c_33 = t;
        if(((b_33 != NULL) && (b_33 != c_33)))
          _fail(c_33);
        else
          b_33 = c_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_33));
      }
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      ATerm a_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              {
                t = t_87(t);
                t = Cons_2(t, _id, z_3);
              }
            }
          ;
          LocalPopChoice(e_17);
        }
      else
        {
          t = a_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_3, z_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  ATerm l_17;
  l_17 = t;
  {
    ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,p_33 = NULL;
    l_33 = t;
    h_33 :
    if(match_cons(l_33, sym__3))
      {
        m_33 = ATgetArgument(l_33, 0);
        n_33 = ATgetArgument(l_33, 1);
        p_33 = ATgetArgument(l_33, 2);
        {
          if(((i_33 != NULL) && (i_33 != m_33)))
            _fail(m_33);
          else
            i_33 = m_33;
          {
            if(((j_33 != NULL) && (j_33 != n_33)))
              _fail(n_33);
            else
              j_33 = n_33;
            {
              if(((k_33 != NULL) && (k_33 != p_33)))
                _fail(p_33);
              else
                k_33 = p_33;
              t = SSL_table_put(not_null(i_33), not_null(j_33), not_null(k_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm s_33 = NULL;
  ATerm m_17;
  m_17 = t;
  {
    t = term_p_17;
    t = table_put_0(t);
  }
  t = m_17;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm q_17 = t;
      int z_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_87(t);
          ;
          LocalPopChoice(z_17);
        }
      else
        {
          t = q_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_4);
    {
      ATerm f_4 (ATerm t)
      {
        ATerm a_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_18;
            d_18 = t;
            {
              ATerm j_18 = t;
              int k_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_j_16;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(k_18);
                }
              else
                {
                  t = j_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = d_18;
            {
              t = system_usage_0(t);
              {
                t = term_n_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = a_18;
            {
              ATerm g_4 (ATerm t)
              {
                ATerm h_4 (ATerm t)
                {
                  ATerm t_33 = NULL;
                  t_33 = t;
                  if(((s_33 != NULL) && (s_33 != t_33)))
                    _fail(t_33);
                  else
                    s_33 = t_33;
                  return(t);
                }
                t = Undefined_1(t, h_4);
                return(t);
              }
              t = option_defined_1(t, g_4);
              {
                ATerm j_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_33)), term_n_18);
                  return(t);
                }
                t = say_1(t, j_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_b_5;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_4);
      {
        ATerm o_18;
        o_18 = t;
        {
          t = term_a_15;
          t = table_destroy_0(t);
        }
        t = o_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  t = parse_options_1(t, v_70);
  {
    t = store_options_0(t);
    {
      t = x_70(t);
      {
        ATerm p_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_70);
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = p_18;
            {
              ATerm y_18 = t;
              int z_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_70(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(z_18);
                }
              else
                {
                  t = y_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_71(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, m_71);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_4, o_71, p_71, o_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm i_71 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm u_4 (ATerm t)
    {
      ATerm e_19;
      e_19 = t;
      {
        ATerm w_33 = NULL;
        ATerm x_33 = NULL;
        t = term_o_13;
        {
          t = get_config_0(t);
          {
            x_33 = t;
            if(((w_33 != NULL) && (w_33 != x_33)))
              _fail(x_33);
            else
              w_33 = x_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, not_null(w_33)));
          t = printnl_0(t);
        }
      }
      t = e_19;
      return(t);
    }
    t = if_verbose2_1(t, u_4);
    return(t);
  }
  t = iowrap_4(t, g_71, h_71, i_71, p_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_71 (ATerm), ATerm f_71 (ATerm))
{
  t = iowrap_3(t, e_71, f_71, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    t = _2(t, _id, b_71);
    return(t);
  }
  t = iowrap_2(t, v_4, _fail);
  return(t);
}
ATerm io_tg2fc_0 (ATerm t)
{
  t = iowrap_1(t, tg_to_format_checker_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_tg2fc_0(t);
  return(t);
}
