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
ATerm term_j_21;
ATerm term_u_20;
ATerm term_b_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_c_17;
ATerm term_v_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_d_16;
ATerm term_m_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_d_12;
ATerm term_n_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_n_10;
ATerm term_j_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_o_6;
ATerm term_m_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_c_5;
void init_constant_terms (void)
{
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_5);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_e_5);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_5);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_j_5);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("to-s", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to-", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("fold-strategy", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_RootApp_1, term_s_6);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("T2-", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("cond", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_a_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("transform", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_e_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("children", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_i_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("nt", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Var_1, term_o_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_u_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("risky", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_8);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-strings", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_f_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nTransformation failed when trying to transform to ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Str_1, term_h_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n-------------\n", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Str_1, term_l_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_7);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_p_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nExpected ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Str_1, term_t_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol(", but found:\n-------------\n", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Str_1, term_v_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_7);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_x_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_e_6);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_e_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_e_6);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_r_14, term_e_6);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_y_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_h_19, term_e_6);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__3, term_x_17, term_y_17, (ATerm) ATempty);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Snd_0 (ATerm);
ATerm arg_to_fold_arg_0 (ATerm);
ATerm prod_to_cong_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm to_Typedid_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm to_nt_paramname_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm b_78 (ATerm));
ATerm subt_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm n_88 (ATerm), ATerm o_88 (ATerm));
ATerm for_3 (ATerm, ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm));
ATerm copy_0 (ATerm);
ATerm int_to_int_list_0 (ATerm);
ATerm to_nt_0 (ATerm);
ATerm is_nt_0 (ATerm);
ATerm to_nt_sdef_0 (ATerm);
ATerm t2_nt_0 (ATerm);
ATerm t2_sdef_0 (ATerm);
ATerm T2_Module_0 (ATerm);
ATerm _2 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_95 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_70 (ATerm));
ATerm debug_1 (ATerm, ATerm y_71 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_84 (ATerm), ATerm g_84 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm q_82 (ATerm), ATerm r_82 (ATerm));
ATerm crush_2 (ATerm, ATerm o_81 (ATerm), ATerm p_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_95 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_70 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_87 (ATerm));
ATerm map_1 (ATerm, ATerm g_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_87 (ATerm));
ATerm Program_1 (ATerm, ATerm p_69 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm z_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm q_69 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_57 (ATerm), ATerm t_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_71 (ATerm), ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm h_71 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_71 (ATerm), ATerm e_71 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_71 (ATerm));
ATerm io_tg2fold_strategy_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Snd_0 (ATerm t)
{
  ATerm t_1 = NULL;
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  t_1 = t;
  {
    ATerm b_2 = NULL;
    ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
    t = not_null(t_1);
    {
      b_2 = t;
      {
        t = SSL_explode_term(not_null(b_2));
        {
          d_2 = t;
          f_1 :
          if(match_cons(d_2, sym__2))
            {
              e_2 = ATgetArgument(d_2, 0);
              f_2 = ATgetArgument(d_2, 1);
              g_1 :
              if(match_string(e_2, ""))
                {
                  h_1 :
                  if(((ATgetType(f_2) == AT_LIST) && !(ATisEmpty(f_2))))
                    {
                      g_2 = ATgetFirst((ATermList) f_2);
                      h_2 = (ATerm) ATgetNext((ATermList) f_2);
                      s_1 :
                      if(((ATgetType(h_2) == AT_LIST) && !(ATisEmpty(h_2))))
                        {
                          i_2 = ATgetFirst((ATermList) h_2);
                          j_2 = (ATerm) ATgetNext((ATermList) h_2);
                          {
                            if(((y_1 != NULL) && (y_1 != g_2)))
                              _fail(g_2);
                            else
                              y_1 = g_2;
                            {
                              if(((a_2 != NULL) && (a_2 != i_2)))
                                _fail(i_2);
                              else
                                a_2 = i_2;
                              if(((z_1 != NULL) && (z_1 != j_2)))
                                _fail(j_2);
                              else
                                z_1 = j_2;
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
    t = not_null(a_2);
  }
  return(t);
}
ATerm arg_to_fold_arg_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  w_2 = t;
  u_2 :
  if(match_cons(w_2, sym_Param_1))
    {
      x_2 = ATgetArgument(w_2, 0);
      {
        ATerm b_3 = NULL;
        ATerm c_3 = NULL;
        t = not_null(x_2);
        {
          t = to_nt_paramname_0(t);
          {
            c_3 = t;
            if(((b_3 != NULL) && (b_3 != c_3)))
              _fail(c_3);
            else
              b_3 = c_3;
          }
        }
        t = (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, not_null(b_3)));
      }
    }
  else
    {
      if(match_cons(w_2, sym_String_0))
        {
          t = term_f_5;
        }
      else
        {
          if(match_cons(w_2, sym_Int_0))
            {
              t = term_k_5;
            }
          else
            {
              if(match_cons(w_2, sym_NonTermRef_2))
                {
                  x_2 = ATgetArgument(w_2, 0);
                  z_2 = ATgetArgument(w_2, 1);
                  v_2 :
                  if(match_cons(x_2, sym_Id_1))
                    {
                      y_2 = ATgetArgument(x_2, 0);
                      {
                        ATerm f_3 = NULL,g_3 = NULL;
                        ATerm h_3 = NULL;
                        t = not_null(y_2);
                        {
                          ATerm i_3 = NULL;
                          t = to_nt_0(t);
                          {
                            h_3 = t;
                            {
                              if(((f_3 != NULL) && (f_3 != h_3)))
                                _fail(h_3);
                              else
                                f_3 = h_3;
                              {
                                t = not_null(z_2);
                                {
                                  t = map_1(t, arg_to_fold_arg_0);
                                  {
                                    i_3 = t;
                                    if(((g_3 != NULL) && (g_3 != i_3)))
                                      _fail(i_3);
                                    else
                                      g_3 = i_3;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_3)), not_null(g_3));
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
  return(t);
}
ATerm prod_to_cong_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  u_3 = t;
  s_3 :
  if(match_cons(u_3, sym_Prod_2))
    {
      v_3 = ATgetArgument(u_3, 0);
      x_3 = ATgetArgument(u_3, 1);
      t_3 :
      if(match_cons(v_3, sym_Id_1))
        {
          w_3 = ATgetArgument(v_3, 0);
          {
            ATerm a_4 = NULL;
            ATerm b_4 = NULL;
            t = not_null(x_3);
            {
              t = map_1(t, arg_to_fold_arg_0);
              {
                b_4 = t;
                if(((a_4 != NULL) && (a_4 != b_4)))
                  _fail(b_4);
                else
                  a_4 = b_4;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_3)), not_null(a_4));
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
ATerm Fst_0 (ATerm t)
{
  ATerm k_4 = NULL;
  ATerm m_4 = NULL,n_4 = NULL;
  k_4 = t;
  {
    ATerm o_4 = NULL;
    ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
    t = not_null(k_4);
    {
      o_4 = t;
      {
        t = SSL_explode_term(not_null(o_4));
        {
          q_4 = t;
          h_4 :
          if(match_cons(q_4, sym__2))
            {
              r_4 = ATgetArgument(q_4, 0);
              s_4 = ATgetArgument(q_4, 1);
              i_4 :
              if(match_string(r_4, ""))
                {
                  j_4 :
                  if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
                    {
                      t_4 = ATgetFirst((ATermList) s_4);
                      u_4 = (ATerm) ATgetNext((ATermList) s_4);
                      {
                        if(((n_4 != NULL) && (n_4 != t_4)))
                          _fail(t_4);
                        else
                          n_4 = t_4;
                        if(((m_4 != NULL) && (m_4 != u_4)))
                          _fail(u_4);
                        else
                          m_4 = u_4;
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
    t = not_null(n_4);
  }
  return(t);
}
ATerm to_Typedid_0 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  {
    t = not_null(z_4);
    t = is_string_0(t);
    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(z_4));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  t = SSL_int_to_string(not_null(d_5));
  return(t);
}
ATerm to_nt_paramname_0 (ATerm t)
{
  ATerm h_5 = NULL;
  ATerm i_5 = NULL;
  t = int_to_string_0(t);
  {
    i_5 = t;
    if(((h_5 != NULL) && (h_5 != i_5)))
      _fail(i_5);
    else
      h_5 = i_5;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_5, not_null(h_5));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm l_5 = NULL;
  ATerm m_5 = NULL;
  m_5 = t;
  if(((l_5 != NULL) && (l_5 != m_5)))
    _fail(m_5);
  else
    l_5 = m_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_o_5);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm b_78 (ATerm))
{
  ATerm w_5 = NULL;
  ATerm x_5 = NULL;
  x_5 = t;
  if(((w_5 != NULL) && (w_5 != x_5)))
    _fail(x_5);
  else
    w_5 = x_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_5, not_null(w_5));
    {
      ATerm n_6 (ATerm t)
      {
        ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
        y_5 = t;
        u_5 :
        if(match_cons(y_5, sym__2))
          {
            z_5 = ATgetArgument(y_5, 0);
            a_6 = ATgetArgument(y_5, 1);
            v_5 :
            if(((ATgetType(a_6) == AT_LIST) && ATisEmpty(a_6)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(a_6) == AT_LIST) && !(ATisEmpty(a_6))))
                  {
                    b_6 = ATgetFirst((ATermList) a_6);
                    c_6 = (ATerm) ATgetNext((ATermList) a_6);
                    {
                      ATerm g_6 = NULL,i_6 = NULL;
                      ATerm p_5;
                      p_5 = t;
                      {
                        ATerm h_6 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), not_null(b_6));
                        {
                          t = b_78(t);
                          {
                            h_6 = t;
                            if(((g_6 != NULL) && (g_6 != h_6)))
                              _fail(h_6);
                            else
                              g_6 = h_6;
                          }
                        }
                      }
                      t = p_5;
                      {
                        ATerm j_6 = NULL,l_6 = NULL;
                        ATerm k_6 = NULL;
                        t = not_null(z_5);
                        {
                          t = inc_0(t);
                          {
                            k_6 = t;
                            if(((j_6 != NULL) && (j_6 != k_6)))
                              _fail(k_6);
                            else
                              j_6 = k_6;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), not_null(c_6));
                          {
                            t = n_6(t);
                            {
                              l_6 = t;
                              if(((i_6 != NULL) && (i_6 != l_6)))
                                _fail(l_6);
                              else
                                i_6 = l_6;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(i_6)), not_null(g_6));
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
      t = n_6(t);
    }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym__2))
    {
      w_6 = ATgetArgument(v_6, 0);
      x_6 = ATgetArgument(v_6, 1);
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_6), not_null(x_6));
            ;
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            t = SSL_subtr(not_null(w_6), not_null(x_6));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm n_88 (ATerm), ATerm o_88 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_88(t);
        ;
        LocalPopChoice(t_5);
      }
    else
      {
        t = s_5;
        {
          t = o_88(t);
          t = b_7(t);
        }
      }
    return(t);
  }
  t = b_7(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm))
{
  t = q_88(t);
  t = while_not_2(t, r_88, s_88);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
    k_7 = t;
    d_7 :
    if(match_cons(k_7, sym__2))
      {
        l_7 = ATgetArgument(k_7, 0);
        m_7 = ATgetArgument(k_7, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(l_7), not_null(m_7), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
    p_7 = t;
    f_7 :
    if(match_cons(p_7, sym__3))
      {
        q_7 = ATgetArgument(p_7, 0);
        r_7 = ATgetArgument(p_7, 1);
        s_7 = ATgetArgument(p_7, 2);
        g_7 :
        if(match_int(q_7, 0))
          {
            t = not_null(s_7);
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
    ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
    v_7 = t;
    j_7 :
    if(match_cons(v_7, sym__3))
      {
        w_7 = ATgetArgument(v_7, 0);
        x_7 = ATgetArgument(v_7, 1);
        y_7 = ATgetArgument(v_7, 2);
        {
          ATerm c_8 = NULL;
          ATerm d_6;
          d_6 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_o_5);
            t = geq_0(t);
          }
          t = d_6;
          {
            ATerm d_8 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_o_5);
            {
              t = subt_0(t);
              {
                d_8 = t;
                if(((c_8 != NULL) && (c_8 != d_8)))
                  _fail(d_8);
                else
                  c_8 = d_8;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_8), not_null(x_7), (ATerm) ATinsert(CheckATermList(not_null(y_7)), not_null(x_7)));
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
  ATerm j_8 = NULL;
  ATerm k_8 = NULL;
  k_8 = t;
  if(((j_8 != NULL) && (j_8 != k_8)))
    _fail(k_8);
  else
    j_8 = k_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), term_e_6);
    {
      t = copy_0(t);
      t = map_with_index_1(t, Fst_0);
    }
  }
  return(t);
}
ATerm to_nt_0 (ATerm t)
{
  ATerm n_8 = NULL;
  ATerm o_8 = NULL;
  o_8 = t;
  if(((n_8 != NULL) && (n_8 != o_8)))
    _fail(o_8);
  else
    n_8 = o_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_6, not_null(n_8));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm is_nt_0 (ATerm t)
{
  ATerm r_8 = NULL;
  ATerm s_8 = NULL;
  s_8 = t;
  if(((r_8 != NULL) && (r_8 != s_8)))
    _fail(s_8);
  else
    r_8 = s_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_6, not_null(r_8));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm to_nt_sdef_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  e_9 = t;
  c_9 :
  if(match_cons(e_9, sym_NonTermDec_3))
    {
      f_9 = ATgetArgument(e_9, 0);
      h_9 = ATgetArgument(e_9, 1);
      i_9 = ATgetArgument(e_9, 2);
      d_9 :
      if(match_cons(f_9, sym_Id_1))
        {
          g_9 = ATgetArgument(f_9, 0);
          {
            ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
            ATerm r_9 = NULL;
            t = not_null(g_9);
            {
              ATerm s_9 = NULL;
              t = t2_nt_0(t);
              {
                r_9 = t;
                {
                  if(((m_9 != NULL) && (m_9 != r_9)))
                    _fail(r_9);
                  else
                    m_9 = r_9;
                  {
                    t = not_null(g_9);
                    {
                      ATerm t_9 = NULL;
                      t = is_nt_0(t);
                      {
                        s_9 = t;
                        {
                          if(((n_9 != NULL) && (n_9 != s_9)))
                            _fail(s_9);
                          else
                            n_9 = s_9;
                          {
                            t = not_null(g_9);
                            {
                              ATerm u_9 = NULL;
                              t = to_nt_0(t);
                              {
                                t_9 = t;
                                {
                                  if(((o_9 != NULL) && (o_9 != t_9)))
                                    _fail(t_9);
                                  else
                                    o_9 = t_9;
                                  {
                                    t = not_null(h_9);
                                    {
                                      t = int_to_int_list_0(t);
                                      {
                                        ATerm z_9 = NULL;
                                        ATerm h_0 (ATerm t)
                                        {
                                          t = to_nt_paramname_0(t);
                                          t = to_Typedid_0(t);
                                          return(t);
                                        }
                                        t = map_1(t, h_0);
                                        {
                                          u_9 = t;
                                          {
                                            if(((p_9 != NULL) && (p_9 != u_9)))
                                              _fail(u_9);
                                            else
                                              p_9 = u_9;
                                            {
                                              t = not_null(i_9);
                                              {
                                                ATerm m_0 (ATerm t)
                                                {
                                                  t = term_o_6;
                                                  return(t);
                                                }
                                                ATerm n_0 (ATerm t)
                                                {
                                                  ATerm v_9 = NULL,x_9 = NULL;
                                                  ATerm p_6;
                                                  p_6 = t;
                                                  {
                                                    ATerm w_9 = NULL;
                                                    t = Fst_0(t);
                                                    {
                                                      t = prod_to_cong_0(t);
                                                      {
                                                        w_9 = t;
                                                        if(((v_9 != NULL) && (v_9 != w_9)))
                                                          _fail(w_9);
                                                        else
                                                          v_9 = w_9;
                                                      }
                                                    }
                                                  }
                                                  t = p_6;
                                                  {
                                                    ATerm y_9 = NULL;
                                                    t = Snd_0(t);
                                                    {
                                                      y_9 = t;
                                                      if(((x_9 != NULL) && (x_9 != y_9)))
                                                        _fail(y_9);
                                                      else
                                                        x_9 = y_9;
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_9), not_null(x_9));
                                                  }
                                                  return(t);
                                                }
                                                t = foldr_2(t, m_0, n_0);
                                                {
                                                  z_9 = t;
                                                  if(((q_9 != NULL) && (q_9 != z_9)))
                                                    _fail(z_9);
                                                  else
                                                    q_9 = z_9;
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
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_9), not_null(p_9), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_r_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_9)), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, not_null(m_9)))), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, not_null(n_9))))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_t_6), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_9))))));
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
ATerm t2_nt_0 (ATerm t)
{
  ATerm j_10 = NULL;
  ATerm k_10 = NULL;
  k_10 = t;
  if(((j_10 != NULL) && (j_10 != k_10)))
    _fail(k_10);
  else
    j_10 = k_10;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_6, not_null(j_10));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm t2_sdef_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  q_10 = t;
  o_10 :
  if(match_cons(q_10, sym_NonTermDec_3))
    {
      r_10 = ATgetArgument(q_10, 0);
      t_10 = ATgetArgument(q_10, 1);
      u_10 = ATgetArgument(q_10, 2);
      p_10 :
      if(match_cons(r_10, sym_Id_1))
        {
          s_10 = ATgetArgument(r_10, 0);
          {
            ATerm w_10 = NULL;
            ATerm x_10 = NULL;
            t = not_null(s_10);
            {
              t = t2_nt_0(t);
              {
                x_10 = t;
                if(((w_10 != NULL) && (w_10 != x_10)))
                  _fail(x_10);
                else
                  w_10 = x_10;
              }
            }
            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, not_null(w_10), term_o_6);
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
ATerm T2_Module_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym_TreeGrammar_1))
    {
      f_11 = ATgetArgument(e_11, 0);
      {
        ATerm h_11 = NULL,i_11 = NULL;
        ATerm j_11 = NULL;
        t = not_null(f_11);
        {
          ATerm k_11 = NULL;
          t = map_1(t, t2_sdef_0);
          {
            j_11 = t;
            {
              if(((h_11 != NULL) && (h_11 != j_11)))
                _fail(j_11);
              else
                h_11 = j_11;
              {
                t = not_null(f_11);
                {
                  t = map_1(t, to_nt_sdef_0);
                  {
                    k_11 = t;
                    if(((i_11 != NULL) && (i_11 != k_11)))
                      _fail(k_11);
                    else
                      i_11 = k_11;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Module_2, term_z_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_q_6, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_n_7), term_h_7), term_c_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_t_6), term_t_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, term_z_7, term_s_6, (ATerm) ATmakeAppl(sym_Call_2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), (ATerm) ATmakeAppl(sym_BA_2, term_g_8, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_8), term_t_7), term_i_8)))))), (ATerm) ATmakeAppl(sym_Call_2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, term_y_8), (ATerm) ATmakeAppl(sym_BA_2, term_g_8, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_8), term_t_7), term_u_8))))))))))), (ATerm) ATmakeAppl(sym_Strategies_1, not_null(h_11))), (ATerm) ATmakeAppl(sym_Strategies_1, not_null(i_11))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym__2))
    {
      v_11 = ATgetArgument(u_11, 0);
      w_11 = ATgetArgument(u_11, 1);
      {
        ATerm a_12 = NULL,c_12 = NULL;
        ATerm b_12 = NULL;
        t = SSLgetAnnotations(not_null(u_11));
        {
          b_12 = t;
          if(((a_12 != NULL) && (a_12 != b_12)))
            _fail(b_12);
          else
            a_12 = b_12;
        }
        {
          t = not_null(v_11);
          {
            ATerm e_12 = NULL;
            t = j_56(t);
            {
              c_12 = t;
              {
                t = not_null(w_11);
                {
                  ATerm g_12 = NULL;
                  t = k_56(t);
                  {
                    e_12 = t;
                    {
                      ATerm h_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_12), not_null(e_12)), not_null(a_12));
                      {
                        h_12 = t;
                        if(((g_12 != NULL) && (g_12 != h_12)))
                          _fail(h_12);
                        else
                          g_12 = h_12;
                      }
                      t = not_null(g_12);
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
  ATerm p_12 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm q_12 = NULL,r_12 = NULL;
      q_12 = t;
      o_12 :
      if(match_cons(q_12, sym_Program_1))
        {
          r_12 = ATgetArgument(q_12, 0);
          if(((p_12 != NULL) && (p_12 != r_12)))
            _fail(r_12);
          else
            p_12 = r_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, o_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_9), not_null(p_12)), term_b_9));
      {
        t = printnl_0(t);
        {
          t = term_o_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym__2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      {
        ATerm k_9;
        k_9 = t;
        t = SSL_printnl(not_null(w_12), not_null(x_12));
        t = k_9;
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
  ATerm c_13 = NULL;
  c_13 = t;
  t = SSL_implode_string(not_null(c_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = l_9;
      {
        ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
        h_13 = t;
        g_13 :
        if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
          {
            i_13 = ATgetFirst((ATermList) h_13);
            j_13 = (ATerm) ATgetNext((ATermList) h_13);
            {
              t = not_null(i_13);
              {
                ATerm p_0 (ATerm t)
                {
                  t = not_null(j_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_0);
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
  ATerm t_13 = NULL;
  ATerm v_13 = NULL;
  t_13 = t;
  {
    ATerm w_13 = NULL;
    ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
    t = not_null(t_13);
    {
      w_13 = t;
      {
        t = SSL_explode_term(not_null(w_13));
        {
          y_13 = t;
          r_13 :
          if(match_cons(y_13, sym__2))
            {
              z_13 = ATgetArgument(y_13, 0);
              a_14 = ATgetArgument(y_13, 1);
              s_13 :
              if(match_string(z_13, ""))
                {
                  if(((v_13 != NULL) && (v_13 != a_14)))
                    _fail(a_14);
                  else
                    v_13 = a_14;
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
      t = not_null(v_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_76 (ATerm))
{
  ATerm e_14 (ATerm t)
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_14);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        {
          t = Nil_0(t);
          t = v_76(t);
        }
      }
    return(t);
  }
  t = e_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      {
        t = not_null(i_14);
        {
          ATerm q_0 (ATerm t)
          {
            t = not_null(j_14);
            return(t);
          }
          t = at_end_1(t, q_0);
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
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_14 = NULL;
  o_14 = t;
  t = SSL_explode_string(not_null(o_14));
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
  ATerm s_14 = NULL;
  s_14 = t;
  t = SSL_is_string(not_null(s_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_0);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
              b_15 = t;
              a_15 :
              if(match_cons(b_15, sym_Path_1))
                {
                  c_15 = ATgetArgument(b_15, 0);
                  t = not_null(c_15);
                }
              else
                {
                  if(match_cons(b_15, sym_Var_1))
                    {
                      c_15 = ATgetArgument(b_15, 0);
                      {
                        t = not_null(c_15);
                        {
                          ATerm l_10 = t;
                          int m_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_10);
                            }
                          else
                            {
                              t = l_10;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_n_10;
                                  return(t);
                                }
                                t = debug_1(t, s_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_15, sym_Prefix_2))
                        {
                          c_15 = ATgetArgument(b_15, 0);
                          d_15 = ATgetArgument(b_15, 1);
                          {
                            ATerm i_15 = NULL,k_15 = NULL;
                            ATerm v_10;
                            v_10 = t;
                            {
                              ATerm j_15 = NULL;
                              t = not_null(c_15);
                              {
                                t = eval_config_0(t);
                                {
                                  j_15 = t;
                                  if(((i_15 != NULL) && (i_15 != j_15)))
                                    _fail(j_15);
                                  else
                                    i_15 = j_15;
                                }
                              }
                            }
                            t = v_10;
                            {
                              ATerm l_15 = NULL;
                              t = not_null(d_15);
                              {
                                t = eval_config_0(t);
                                {
                                  l_15 = t;
                                  if(((k_15 != NULL) && (k_15 != l_15)))
                                    _fail(l_15);
                                  else
                                    k_15 = l_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), not_null(k_15));
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
  ATerm t_15 = NULL;
  t_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(t_15));
    {
      t = table_get_0(t);
      {
        ATerm t_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_10;
            z_10 = t;
            {
              ATerm v_15 = NULL;
              ATerm w_15 = NULL;
              w_15 = t;
              if(((v_15 != NULL) && (v_15 != w_15)))
                _fail(w_15);
              else
                v_15 = w_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_10, not_null(t_15), not_null(v_15));
                t = table_put_0(t);
              }
            }
            t = z_10;
          }
          return(t);
        }
        t = try_1(t, t_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_95 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm a_11;
    a_11 = t;
    {
      ATerm a_16 = NULL;
      ATerm b_16 = NULL;
      t = term_b_11;
      {
        t = get_config_0(t);
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), term_c_11);
        t = geq_0(t);
      }
    }
    t = a_11;
    t = o_95(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym__2))
    {
      g_16 = ATgetArgument(f_16, 0);
      h_16 = ATgetArgument(f_16, 1);
      t = SSL_WriteToTextFile(not_null(g_16), not_null(h_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym__2))
    {
      o_16 = ATgetArgument(n_16, 0);
      p_16 = ATgetArgument(n_16, 1);
      t = SSL_WriteToBinaryFile(not_null(o_16), not_null(p_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_16 = NULL;
  ATerm g_11;
  g_11 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm l_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm y_16 = NULL,z_16 = NULL;
            y_16 = t;
            u_16 :
            if(match_cons(y_16, sym_Output_1))
              {
                z_16 = ATgetArgument(y_16, 0);
                if(((x_16 != NULL) && (x_16 != z_16)))
                  _fail(z_16);
                else
                  x_16 = z_16;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, w_0);
          ;
          LocalPopChoice(m_11);
        }
      else
        {
          t = l_11;
          {
            ATerm a_17 = NULL;
            t = term_n_11;
            {
              a_17 = t;
              if(((x_16 != NULL) && (x_16 != a_17)))
                _fail(a_17);
              else
                x_16 = a_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, v_0, _id);
  }
  t = g_11;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_0 (ATerm t)
      {
        t = not_null(x_16);
        return(t);
      }
      t = split_2(t, y_0, _id);
      return(t);
    }
    t = _2(t, _id, x_0);
    {
      ATerm o_11 = t;
      int p_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              ATerm b_17 = NULL;
              b_17 = t;
              w_16 :
              if(!(match_cons(b_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, a_1);
            return(t);
          }
          t = _2(t, z_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(p_11);
        }
      else
        {
          t = o_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_70 (ATerm))
{
  ATerm h_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  ATerm q_11;
  q_11 = t;
  t = dtime_0(t);
  t = q_11;
  {
    t = q_70(t);
    {
      ATerm r_11;
      r_11 = t;
      {
        ATerm i_17 = NULL;
        t = dtime_0(t);
        {
          i_17 = t;
          if(((h_17 != NULL) && (h_17 != i_17)))
            _fail(i_17);
          else
            h_17 = i_17;
        }
      }
      t = r_11;
      {
        j_17 = t;
        g_17 :
        if(match_cons(j_17, sym__2))
          {
            k_17 = ATgetArgument(j_17, 0);
            l_17 = ATgetArgument(j_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_17))), not_null(l_17));
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
ATerm debug_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm s_11;
  s_11 = t;
  {
    ATerm s_17 = NULL,u_17 = NULL;
    ATerm x_11;
    x_11 = t;
    {
      ATerm t_17 = NULL;
      t = y_71(t);
      {
        t_17 = t;
        if(((s_17 != NULL) && (s_17 != t_17)))
          _fail(t_17);
        else
          s_17 = t_17;
      }
    }
    t = x_11;
    {
      ATerm v_17 = NULL;
      v_17 = t;
      if(((u_17 != NULL) && (u_17 != v_17)))
        _fail(v_17);
      else
        u_17 = v_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_17)), not_null(s_17)));
        t = printnl_0(t);
      }
    }
  }
  t = s_11;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm z_17 = NULL;
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_18 = NULL;
      a_18 = t;
      {
        if(((z_17 != NULL) && (z_17 != a_18)))
          _fail(a_18);
        else
          z_17 = a_18;
        t = SSL_ReadFromFile(not_null(z_17));
      }
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm b_1 (ATerm t)
        {
          t = term_d_12;
          return(t);
        }
        t = debug_1(t, b_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_84 (ATerm), ATerm g_84 (ATerm))
{
  ATerm e_18 = NULL,g_18 = NULL;
  ATerm f_12;
  f_12 = t;
  {
    ATerm f_18 = NULL;
    t = f_84(t);
    {
      f_18 = t;
      if(((e_18 != NULL) && (e_18 != f_18)))
        _fail(f_18);
      else
        e_18 = f_18;
    }
  }
  t = f_12;
  {
    ATerm h_18 = NULL;
    t = g_84(t);
    {
      h_18 = t;
      if(((g_18 != NULL) && (g_18 != h_18)))
        _fail(h_18);
      else
        g_18 = h_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), not_null(g_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_18 = NULL;
  ATerm i_12;
  i_12 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 (ATerm t)
        {
          ATerm o_18 = NULL,p_18 = NULL;
          o_18 = t;
          l_18 :
          if(match_cons(o_18, sym_Input_1))
            {
              p_18 = ATgetArgument(o_18, 0);
              if(((n_18 != NULL) && (n_18 != p_18)))
                _fail(p_18);
              else
                n_18 = p_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_1);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        {
          ATerm q_18 = NULL;
          t = term_l_12;
          {
            q_18 = t;
            if(((n_18 != NULL) && (n_18 != q_18)))
              _fail(q_18);
            else
              n_18 = q_18;
          }
        }
      }
  }
  t = i_12;
  {
    ATerm d_1 (ATerm t)
    {
      t = not_null(n_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm u_18 = NULL;
    u_18 = t;
    t_18 :
    if(!(match_string(u_18, "-v")))
      {
        if(!(match_string(u_18, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_n_12;
    t = set_config_0(t);
    t = term_s_12;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_t_12;
    return(t);
  }
  t = Option_3(t, e_1, i_1, j_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm x_18 = NULL;
    x_18 = t;
    v_18 :
    if(!(match_string(x_18, "-k")))
      {
        if(!(match_string(x_18, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm y_12;
    y_12 = t;
    {
      ATerm y_18 = NULL;
      ATerm z_18 = NULL;
      t = string_to_int_0(t);
      {
        z_18 = t;
        if(((y_18 != NULL) && (y_18 != z_18)))
          _fail(z_18);
        else
          y_18 = z_18;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(y_18));
        t = set_config_0(t);
      }
    }
    t = y_12;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_a_13;
    return(t);
  }
  t = ArgOption_3(t, k_1, l_1, m_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  t = SSL_string_to_int(not_null(c_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm b_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm k_19 = NULL;
        k_19 = t;
        f_19 :
        if(!(match_string(k_19, "-S")))
          {
            if(!(match_string(k_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_f_13;
        t = set_config_0(t);
        t = term_k_13;
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_l_13;
        return(t);
      }
      t = Option_3(t, n_1, o_1, p_1);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = b_13;
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm l_19 = NULL;
              l_19 = t;
              g_19 :
              if(!(match_string(l_19, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              ATerm o_19 = NULL;
              ATerm o_13;
              o_13 = t;
              {
                ATerm m_19 = NULL;
                ATerm n_19 = NULL;
                t = string_to_int_0(t);
                {
                  n_19 = t;
                  if(((m_19 != NULL) && (m_19 != n_19)))
                    _fail(n_19);
                  else
                    m_19 = n_19;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_11, not_null(m_19));
                  t = set_config_0(t);
                }
              }
              t = o_13;
              {
                ATerm p_19 = NULL;
                p_19 = t;
                if(((o_19 != NULL) && (o_19 != p_19)))
                  _fail(p_19);
                else
                  o_19 = p_19;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_19));
              }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              t = term_p_13;
              return(t);
            }
            t = ArgOption_3(t, q_1, r_1, u_1);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm v_1 (ATerm t)
              {
                ATerm q_19 = NULL;
                q_19 = t;
                j_19 :
                if(!(match_string(q_19, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_1 (ATerm t)
              {
                t = term_u_13;
                t = set_config_0(t);
                t = term_x_13;
                return(t);
              }
              ATerm x_1 (ATerm t)
              {
                t = term_b_14;
                return(t);
              }
              t = Option_3(t, v_1, w_1, x_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm f_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = f_14;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm w_19 = NULL;
    w_19 = t;
    t_19 :
    if(!(match_string(w_19, "-o")))
      {
        if(!(match_string(w_19, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm z_19 = NULL;
    ATerm l_14;
    l_14 = t;
    {
      ATerm x_19 = NULL;
      ATerm y_19 = NULL;
      y_19 = t;
      if(((x_19 != NULL) && (x_19 != y_19)))
        _fail(y_19);
      else
        x_19 = y_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_14, not_null(x_19));
        t = set_config_0(t);
      }
    }
    t = l_14;
    {
      ATerm a_20 = NULL;
      a_20 = t;
      if(((z_19 != NULL) && (z_19 != a_20)))
        _fail(a_20);
      else
        z_19 = a_20;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_19));
    }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_n_14;
    return(t);
  }
  t = ArgOption_3(t, c_2, k_2, l_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm e_20 = NULL;
          e_20 = t;
          d_20 :
          if(!(match_string(e_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = term_t_14;
          t = set_config_0(t);
          t = term_u_14;
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_v_14;
          return(t);
        }
        t = Option_3(t, m_2, n_2, o_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  k_20 = t;
  i_20 :
  if(match_string(k_20, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
        {
          l_20 = ATgetFirst((ATermList) k_20);
          m_20 = (ATerm) ATgetNext((ATermList) k_20);
          j_20 :
          if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
            {
              n_20 = ATgetFirst((ATermList) m_20);
              o_20 = (ATerm) ATgetNext((ATermList) m_20);
              {
                ATerm s_20 = NULL;
                ATerm w_14;
                w_14 = t;
                {
                  t = not_null(l_20);
                  t = j_0(t);
                }
                t = w_14;
                {
                  ATerm t_20 = NULL;
                  t = not_null(n_20);
                  {
                    t = k_0(t);
                    {
                      t_20 = t;
                      if(((s_20 != NULL) && (s_20 != t_20)))
                        _fail(t_20);
                      else
                        s_20 = t_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_20)), not_null(s_20));
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
  ATerm p_2 (ATerm t)
  {
    ATerm a_21 = NULL;
    a_21 = t;
    x_20 :
    if(!(match_string(a_21, "-i")))
      {
        if(!(match_string(a_21, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm d_21 = NULL;
    ATerm x_14;
    x_14 = t;
    {
      ATerm b_21 = NULL;
      ATerm c_21 = NULL;
      c_21 = t;
      if(((b_21 != NULL) && (b_21 != c_21)))
        _fail(c_21);
      else
        b_21 = c_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(b_21));
        t = set_config_0(t);
      }
    }
    t = x_14;
    {
      ATerm e_21 = NULL;
      e_21 = t;
      if(((d_21 != NULL) && (d_21 != e_21)))
        _fail(e_21);
      else
        d_21 = e_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_21));
    }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_z_14;
    return(t);
  }
  t = ArgOption_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, term_m_15));
  {
    t = printnl_0(t);
    {
      t = term_o_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  t = SSL_TicksToSeconds(not_null(i_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym__2))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_21), not_null(p_21));
            ;
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            t = SSL_addr(not_null(o_21), not_null(p_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_82 (ATerm), ATerm r_82 (ATerm))
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_82(t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      {
        ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
        w_21 = t;
        v_21 :
        if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
          {
            x_21 = ATgetFirst((ATermList) w_21);
            y_21 = (ATerm) ATgetNext((ATermList) w_21);
            {
              ATerm b_22 = NULL;
              ATerm c_22 = NULL;
              t = not_null(y_21);
              {
                t = foldr_2(t, q_82, r_82);
                {
                  c_22 = t;
                  if(((b_22 != NULL) && (b_22 != c_22)))
                    _fail(c_22);
                  else
                    b_22 = c_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_21), not_null(b_22));
                t = r_82(t);
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
ATerm crush_2 (ATerm t, ATerm o_81 (ATerm), ATerm p_81 (ATerm))
{
  ATerm j_22 = NULL;
  ATerm l_22 = NULL;
  j_22 = t;
  {
    ATerm m_22 = NULL;
    ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
    t = not_null(j_22);
    {
      m_22 = t;
      {
        t = SSL_explode_term(not_null(m_22));
        {
          o_22 = t;
          i_22 :
          if(match_cons(o_22, sym__2))
            {
              p_22 = ATgetArgument(o_22, 0);
              q_22 = ATgetArgument(o_22, 1);
              if(((l_22 != NULL) && (l_22 != q_22)))
                _fail(q_22);
              else
                l_22 = q_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_22);
      t = foldr_2(t, o_81, p_81);
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
    ATerm s_2 (ATerm t)
    {
      t = term_e_13;
      return(t);
    }
    t = crush_2(t, s_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym__2))
    {
      x_22 = ATgetArgument(w_22, 0);
      y_22 = ATgetArgument(w_22, 1);
      {
        ATerm r_15;
        r_15 = t;
        {
          ATerm s_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_22), not_null(y_22));
              ;
              LocalPopChoice(u_15);
            }
          else
            {
              t = s_15;
              t = SSL_gtr(not_null(x_22), not_null(y_22));
            }
        }
        t = r_15;
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
  ATerm e_23 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
      f_23 = t;
      d_23 :
      if(match_cons(f_23, sym__2))
        {
          g_23 = ATgetArgument(f_23, 0);
          h_23 = ATgetArgument(f_23, 1);
          {
            if(((e_23 != NULL) && (e_23 != g_23)))
              _fail(g_23);
            else
              e_23 = g_23;
            if(((e_23 != NULL) && (e_23 != h_23)))
              _fail(h_23);
            else
              e_23 = h_23;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm z_15;
    z_15 = t;
    {
      ATerm k_23 = NULL;
      ATerm l_23 = NULL;
      t = term_b_11;
      {
        t = get_config_0(t);
        {
          l_23 = t;
          if(((k_23 != NULL) && (k_23 != l_23)))
            _fail(l_23);
          else
            k_23 = l_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), term_o_5);
        t = geq_0(t);
      }
    }
    t = z_15;
    t = n_95(t);
    return(t);
  }
  t = try_1(t, t_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm p_23 = NULL,r_23 = NULL;
    ATerm c_16;
    c_16 = t;
    {
      ATerm q_23 = NULL;
      t = run_time_0(t);
      {
        q_23 = t;
        if(((p_23 != NULL) && (p_23 != q_23)))
          _fail(q_23);
        else
          p_23 = q_23;
      }
    }
    t = c_16;
    {
      ATerm s_23 = NULL;
      t = term_d_16;
      {
        t = get_config_0(t);
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_16), not_null(p_23)), term_i_16), not_null(r_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_3);
  {
    t = term_e_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_23 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym_Version_0))
    {
      ATerm b_24 = NULL,d_24 = NULL;
      ATerm k_16;
      k_16 = t;
      {
        ATerm c_24 = NULL;
        t = SSLgetAnnotations(not_null(z_23));
        {
          c_24 = t;
          if(((b_24 != NULL) && (b_24 != c_24)))
            _fail(c_24);
          else
            b_24 = c_24;
        }
      }
      t = k_16;
      {
        ATerm e_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_24));
        {
          e_24 = t;
          if(((d_24 != NULL) && (d_24 != e_24)))
            _fail(e_24);
          else
            d_24 = e_24;
        }
        t = not_null(d_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    ATerm l_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = l_16;
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(s_16);
            }
          else
            {
              t = r_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_3);
  t = o_70(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = SSL_table_create(not_null(j_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  {
    ATerm t_16;
    t_16 = t;
    {
      t = term_v_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_16, term_c_17, not_null(n_24));
          t = table_put_0(t);
        }
      }
    }
    t = t_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = SSL_table_destroy(not_null(r_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = SSL_exit(not_null(v_24));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  y_24 :
  if(((ATgetType(z_24) == AT_LIST) && ATisEmpty(z_24)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
        {
          a_25 = ATgetFirst((ATermList) z_24);
          b_25 = (ATerm) ATgetNext((ATermList) z_24);
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
  ATerm d_17;
  d_17 = t;
  {
    ATerm e_25 = NULL;
    ATerm h_25 = NULL;
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        {
          ATerm f_25 = NULL;
          ATerm g_25 = NULL;
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
          t = (ATerm) ATinsert(ATempty, not_null(f_25));
        }
      }
    {
      h_25 = t;
      if(((e_25 != NULL) && (e_25 != h_25)))
        _fail(h_25);
      else
        e_25 = h_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_11, not_null(e_25));
      t = printnl_0(t);
    }
  }
  t = d_17;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm o_26 (ATerm t)
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = Cons_2(t, g_76, o_26);
      }
    return(t);
  }
  t = o_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  x_26 = t;
  u_26 :
  if(((ATgetType(x_26) == AT_LIST) && !(ATisEmpty(x_26))))
    {
      v_26 = ATgetFirst((ATermList) x_26);
      w_26 = (ATerm) ATgetNext((ATermList) x_26);
      {
        ATerm c_27 = NULL;
        t = not_null(w_26);
        {
          ATerm o_17;
          o_17 = t;
          {
            ATerm d_27 = NULL,k_27 = NULL,m_27 = NULL;
            ATerm p_17;
            p_17 = t;
            {
              ATerm j_27 = NULL;
              t = i_0(t);
              {
                j_27 = t;
                if(((d_27 != NULL) && (d_27 != j_27)))
                  _fail(j_27);
                else
                  d_27 = j_27;
              }
            }
            t = p_17;
            {
              ATerm l_27 = NULL;
              t = not_null(v_26);
              {
                t = g_0(t);
                {
                  l_27 = t;
                  if(((k_27 != NULL) && (k_27 != l_27)))
                    _fail(l_27);
                  else
                    k_27 = l_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_27)), not_null(k_27));
                {
                  m_27 = t;
                  if(((c_27 != NULL) && (c_27 != m_27)))
                    _fail(m_27);
                  else
                    c_27 = m_27;
                }
              }
            }
          }
          t = o_17;
          {
            ATerm e_3 (ATerm t)
            {
              t = not_null(c_27);
              return(t);
            }
            t = reverse_acc_2(t, g_0, e_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_26) == AT_LIST) && ATisEmpty(x_26)))
        {
          {
            t = term_e_6;
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
  ATerm j_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, j_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym_Program_1))
    {
      y_27 = ATgetArgument(x_27, 0);
      {
        ATerm b_28 = NULL,d_28 = NULL;
        ATerm c_28 = NULL;
        t = SSLgetAnnotations(not_null(x_27));
        {
          c_28 = t;
          if(((b_28 != NULL) && (b_28 != c_28)))
            _fail(c_28);
          else
            b_28 = c_28;
        }
        {
          t = not_null(y_27);
          {
            ATerm k_28 = NULL;
            t = p_69(t);
            {
              d_28 = t;
              {
                ATerm l_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_28)), not_null(b_28));
                {
                  l_28 = t;
                  if(((k_28 != NULL) && (k_28 != l_28)))
                    _fail(l_28);
                  else
                    k_28 = l_28;
                }
                t = not_null(k_28);
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
  ATerm u_28 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_28 = NULL;
      t = term_d_16;
      {
        t = get_config_0(t);
        {
          v_28 = t;
          if(((u_28 != NULL) && (u_28 != v_28)))
            _fail(v_28);
          else
            u_28 = v_28;
        }
      }
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_3 (ATerm t)
          {
            ATerm w_28 = NULL;
            w_28 = t;
            if(((u_28 != NULL) && (u_28 != w_28)))
              _fail(w_28);
            else
              u_28 = w_28;
            return(t);
          }
          t = Program_1(t, l_3);
          return(t);
        }
        t = option_defined_1(t, k_3);
      }
    }
  {
    ATerm m_3 (ATerm t)
    {
      ATerm n_3 (ATerm t)
      {
        t = not_null(u_28);
        return(t);
      }
      t = short_description_1(t, n_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_3);
    {
      t = term_w_17;
      {
        t = echo_0(t);
        {
          t = term_b_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm a_29 = NULL;
                  ATerm b_29 = NULL;
                  b_29 = t;
                  if(((a_29 != NULL) && (a_29 != b_29)))
                    _fail(b_29);
                  else
                    a_29 = b_29;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_29)), term_c_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_3);
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm c_29 = NULL;
                    ATerm d_29 = NULL;
                    ATerm q_3 (ATerm t)
                    {
                      t = not_null(u_28);
                      return(t);
                    }
                    t = long_description_1(t, q_3);
                    {
                      d_29 = t;
                      if(((c_29 != NULL) && (c_29 != d_29)))
                        _fail(d_29);
                      else
                        c_29 = d_29;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_29)), term_d_18);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_3);
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
  ATerm i_18;
  i_18 = t;
  {
    ATerm j_29 = NULL;
    ATerm k_29 = NULL;
    k_29 = t;
    if(((j_29 != NULL) && (j_29 != k_29)))
      _fail(k_29);
    else
      j_29 = k_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, not_null(j_29)));
      t = printnl_0(t);
    }
  }
  t = i_18;
  return(t);
}
ATerm say_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm j_18;
  j_18 = t;
  {
    t = z_71(t);
    t = debug_0(t);
  }
  t = j_18;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_69 (ATerm))
{
  ATerm r_29 = NULL,v_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym_Undefined_1))
    {
      v_29 = ATgetArgument(r_29, 0);
      {
        ATerm y_29 = NULL,a_30 = NULL;
        ATerm z_29 = NULL;
        t = SSLgetAnnotations(not_null(r_29));
        {
          z_29 = t;
          if(((y_29 != NULL) && (y_29 != z_29)))
            _fail(z_29);
          else
            y_29 = z_29;
        }
        {
          t = not_null(v_29);
          {
            ATerm c_30 = NULL;
            t = q_69(t);
            {
              a_30 = t;
              {
                ATerm d_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_30)), not_null(y_29));
                {
                  d_30 = t;
                  if(((c_30 != NULL) && (c_30 != d_30)))
                    _fail(d_30);
                  else
                    c_30 = d_30;
                }
                t = not_null(c_30);
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
ATerm fetch_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm i_30 (ATerm t)
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_76, _id);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = k_18;
        t = Cons_2(t, _id, i_30);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_86 (ATerm))
{
  t = fetch_1(t, p_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym_Help_0))
    {
      ATerm p_30 = NULL,r_30 = NULL;
      ATerm r_18;
      r_18 = t;
      {
        ATerm q_30 = NULL;
        t = SSLgetAnnotations(not_null(n_30));
        {
          q_30 = t;
          if(((p_30 != NULL) && (p_30 != q_30)))
            _fail(q_30);
          else
            p_30 = q_30;
        }
      }
      t = r_18;
      {
        ATerm s_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_30));
        {
          s_30 = t;
          if(((r_30 != NULL) && (r_30 != s_30)))
            _fail(s_30);
          else
            r_30 = s_30;
        }
        t = not_null(r_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm s_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_75(t);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = s_18;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  y_30 = t;
  x_30 :
  if(match_cons(y_30, sym__2))
    {
      z_30 = ATgetArgument(y_30, 0);
      a_31 = ATgetArgument(y_30, 1);
      t = SSL_table_get(not_null(z_30), not_null(a_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  h_31 = t;
  g_31 :
  if(match_cons(h_31, sym__3))
    {
      i_31 = ATgetArgument(h_31, 0);
      j_31 = ATgetArgument(h_31, 1);
      k_31 = ATgetArgument(h_31, 2);
      {
        ATerm a_19;
        a_19 = t;
        {
          ATerm o_31 = NULL;
          ATerm p_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), not_null(j_31));
          {
            ATerm b_19 = t;
            int d_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(d_19);
              }
            else
              {
                t = b_19;
                t = (ATerm) ATempty;
              }
            {
              p_31 = t;
              if(((o_31 != NULL) && (o_31 != p_31)))
                _fail(p_31);
              else
                o_31 = p_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_31), not_null(j_31), (ATerm) ATinsert(CheckATermList(not_null(o_31)), not_null(k_31)));
            t = table_put_0(t);
          }
        }
        t = a_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_87 (ATerm))
{
  ATerm t_31 = NULL;
  ATerm u_31 = NULL;
  t = term_e_6;
  {
    t = u_87(t);
    {
      u_31 = t;
      if(((t_31 != NULL) && (t_31 != u_31)))
        _fail(u_31);
      else
        t_31 = u_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_17, term_y_17, not_null(t_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_string(a_32, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(a_32) == AT_LIST) && !(ATisEmpty(a_32))))
        {
          b_32 = ATgetFirst((ATermList) a_32);
          c_32 = (ATerm) ATgetNext((ATermList) a_32);
          {
            ATerm f_32 = NULL;
            ATerm e_19;
            e_19 = t;
            {
              t = not_null(b_32);
              t = a_0(t);
            }
            t = e_19;
            {
              ATerm g_32 = NULL;
              t = term_e_6;
              {
                t = c_0(t);
                {
                  g_32 = t;
                  if(((f_32 != NULL) && (f_32 != g_32)))
                    _fail(g_32);
                  else
                    f_32 = g_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_32)), not_null(f_32));
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
  ATerm r_3 (ATerm t)
  {
    ATerm l_32 = NULL;
    l_32 = t;
    k_32 :
    if(!(match_string(l_32, "--help")))
      {
        if(!(match_string(l_32, "-h")))
          {
            if(!(match_string(l_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_i_19;
    {
      t = set_config_0(t);
      t = term_r_19;
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_s_19;
    return(t);
  }
  t = Option_3(t, r_3, y_3, z_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  o_32 = t;
  n_32 :
  if(((ATgetType(o_32) == AT_LIST) && !(ATisEmpty(o_32))))
    {
      p_32 = ATgetFirst((ATermList) o_32);
      q_32 = (ATerm) ATgetNext((ATermList) o_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_57 (ATerm), ATerm t_57 (ATerm))
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
    {
      b_33 = ATgetFirst((ATermList) a_33);
      c_33 = (ATerm) ATgetNext((ATermList) a_33);
      {
        ATerm g_33 = NULL,i_33 = NULL;
        ATerm h_33 = NULL;
        t = SSLgetAnnotations(not_null(a_33));
        {
          h_33 = t;
          if(((g_33 != NULL) && (g_33 != h_33)))
            _fail(h_33);
          else
            g_33 = h_33;
        }
        {
          t = not_null(b_33);
          {
            ATerm k_33 = NULL;
            t = s_57(t);
            {
              i_33 = t;
              {
                t = not_null(c_33);
                {
                  ATerm m_33 = NULL;
                  t = t_57(t);
                  {
                    k_33 = t;
                    {
                      ATerm o_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_33)), not_null(i_33)), not_null(g_33));
                      {
                        o_33 = t;
                        if(((m_33 != NULL) && (m_33 != o_33)))
                          _fail(o_33);
                        else
                          m_33 = o_33;
                      }
                      t = not_null(m_33);
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
  ATerm y_33 = NULL;
  y_33 = t;
  x_33 :
  if(((ATgetType(y_33) == AT_LIST) && ATisEmpty(y_33)))
    {
      {
        ATerm a_34 = NULL,c_34 = NULL;
        ATerm u_19;
        u_19 = t;
        {
          ATerm b_34 = NULL;
          t = SSLgetAnnotations(not_null(y_33));
          {
            b_34 = t;
            if(((a_34 != NULL) && (a_34 != b_34)))
              _fail(b_34);
            else
              a_34 = b_34;
          }
        }
        t = u_19;
        {
          ATerm d_34 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_34));
          {
            d_34 = t;
            if(((c_34 != NULL) && (c_34 != d_34)))
              _fail(d_34);
            else
              c_34 = d_34;
          }
          t = not_null(c_34);
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
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym__2))
    {
      k_34 = ATgetArgument(j_34, 0);
      l_34 = ATgetArgument(j_34, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_10, not_null(k_34), not_null(l_34));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm v_19;
  v_19 = t;
  {
    ATerm c_4 (ATerm t)
    {
      t = term_b_20;
      t = s_87(t);
      return(t);
    }
    t = try_1(t, c_4);
  }
  t = v_19;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm v_34 = NULL;
      ATerm c_20;
      c_20 = t;
      {
        ATerm t_34 = NULL;
        ATerm u_34 = NULL;
        u_34 = t;
        if(((t_34 != NULL) && (t_34 != u_34)))
          _fail(u_34);
        else
          t_34 = u_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_16, not_null(t_34));
          t = set_config_0(t);
        }
      }
      t = c_20;
      {
        ATerm d_35 = NULL;
        d_35 = t;
        if(((v_34 != NULL) && (v_34 != d_35)))
          _fail(d_35);
        else
          v_34 = d_35;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_34));
      }
      return(t);
    }
    ATerm e_4 (ATerm t)
    {
      ATerm f_20 = t;
      int g_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_20);
            }
          else
            {
              t = h_20;
              {
                t = s_87(t);
                t = Cons_2(t, _id, e_4);
              }
            }
          ;
          LocalPopChoice(g_20);
        }
      else
        {
          t = f_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_4, e_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  ATerm q_20;
  q_20 = t;
  {
    ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
    m_35 = t;
    i_35 :
    if(match_cons(m_35, sym__3))
      {
        n_35 = ATgetArgument(m_35, 0);
        o_35 = ATgetArgument(m_35, 1);
        p_35 = ATgetArgument(m_35, 2);
        {
          if(((j_35 != NULL) && (j_35 != n_35)))
            _fail(n_35);
          else
            j_35 = n_35;
          {
            if(((k_35 != NULL) && (k_35 != o_35)))
              _fail(o_35);
            else
              k_35 = o_35;
            {
              if(((l_35 != NULL) && (l_35 != p_35)))
                _fail(p_35);
              else
                l_35 = p_35;
              t = SSL_table_put(not_null(j_35), not_null(k_35), not_null(l_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm s_35 = NULL;
  ATerm r_20;
  r_20 = t;
  {
    t = term_u_20;
    t = table_put_0(t);
  }
  t = r_20;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm v_20 = t;
      int w_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_87(t);
          ;
          LocalPopChoice(w_20);
        }
      else
        {
          t = v_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_4);
    {
      ATerm g_4 (ATerm t)
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21;
            f_21 = t;
            {
              ATerm g_21 = t;
              int h_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_h_19;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(h_21);
                }
              else
                {
                  t = g_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_21;
            {
              t = system_usage_0(t);
              {
                t = term_e_13;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            {
              ATerm l_4 (ATerm t)
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm t_35 = NULL;
                  t_35 = t;
                  if(((s_35 != NULL) && (s_35 != t_35)))
                    _fail(t_35);
                  else
                    s_35 = t_35;
                  return(t);
                }
                t = Undefined_1(t, p_4);
                return(t);
              }
              t = option_defined_1(t, l_4);
              {
                ATerm v_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_35)), term_j_21);
                  return(t);
                }
                t = say_1(t, v_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_5;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_4);
      {
        ATerm k_21;
        k_21 = t;
        {
          t = term_x_17;
          t = table_destroy_0(t);
        }
        t = k_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm))
{
  t = parse_options_1(t, u_70);
  {
    t = store_options_0(t);
    {
      t = w_70(t);
      {
        ATerm l_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_70);
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = l_21;
            {
              ATerm r_21 = t;
              int s_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_70(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(s_21);
                }
              else
                {
                  t = r_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_71 (ATerm), ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_71(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_71);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, w_4, n_71, o_71, x_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm h_71 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm z_21;
      z_21 = t;
      {
        ATerm w_35 = NULL;
        ATerm x_35 = NULL;
        t = term_d_16;
        {
          t = get_config_0(t);
          {
            x_35 = t;
            if(((w_35 != NULL) && (w_35 != x_35)))
              _fail(x_35);
            else
              w_35 = x_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, not_null(w_35)));
          t = printnl_0(t);
        }
      }
      t = z_21;
      return(t);
    }
    t = if_verbose2_1(t, a_5);
    return(t);
  }
  t = iowrap_4(t, f_71, g_71, h_71, y_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_71 (ATerm), ATerm e_71 (ATerm))
{
  t = iowrap_3(t, d_71, e_71, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_71 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    t = _2(t, _id, a_71);
    return(t);
  }
  t = iowrap_2(t, b_5, _fail);
  return(t);
}
ATerm io_tg2fold_strategy_0 (ATerm t)
{
  t = iowrap_1(t, T2_Module_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_tg2fold_strategy_0(t);
  return(t);
}
