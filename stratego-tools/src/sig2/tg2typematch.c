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
ATerm term_x_16;
ATerm term_j_16;
ATerm term_q_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_f_13;
ATerm term_x_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_y_11;
ATerm term_y_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_t_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_j_7;
ATerm term_t_6;
ATerm term_k_6;
ATerm term_g_6;
ATerm term_d_6;
ATerm term_b_6;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_v_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_n_4;
void init_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_u_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_h_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_u_7);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_u_7);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_a_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_u_7);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__3, term_z_13, term_a_14, (ATerm) ATempty);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm create_call_0 (ATerm);
ATerm to_TypeMatch_Strat_0 (ATerm);
ATerm to_TypeMatch_SDef_0 (ATerm);
ATerm tg_to_stratego_typematch_0 (ATerm);
ATerm _2 (ATerm, ATerm x_55 (ATerm), ATerm y_55 (ATerm));
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
ATerm if_verbose2_1 (ATerm, ATerm s_95 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_70 (ATerm));
ATerm debug_1 (ATerm, ATerm m_71 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_84 (ATerm), ATerm k_84 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm u_82 (ATerm), ATerm v_82 (ATerm));
ATerm crush_2 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_95 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_70 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_87 (ATerm));
ATerm map_1 (ATerm, ATerm g_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_87 (ATerm));
ATerm Program_1 (ATerm, ATerm d_69 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_69 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_57 (ATerm), ATerm h_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm b_71 (ATerm), ATerm c_71 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_70 (ATerm));
ATerm io_tg2typematch_0 (ATerm);
ATerm main_0 (ATerm);
ATerm create_call_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,s_1 = NULL,t_1 = NULL;
  g_1 = t;
  r_0 :
  if(match_cons(g_1, sym_Prod_2))
    {
      h_1 = ATgetArgument(g_1, 0);
      t_1 = ATgetArgument(g_1, 1);
      f_1 :
      if(match_cons(h_1, sym_Id_1))
        {
          s_1 = ATgetArgument(h_1, 0);
          {
            ATerm z_1 = NULL;
            ATerm a_2 = NULL;
            t = not_null(t_1);
            {
              ATerm b_0 (ATerm t)
              {
                t = term_n_4;
                return(t);
              }
              t = map_1(t, b_0);
              {
                a_2 = t;
                if(((z_1 != NULL) && (z_1 != a_2)))
                  _fail(a_2);
                else
                  z_1 = a_2;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(s_1), not_null(z_1)));
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
ATerm to_TypeMatch_Strat_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
  l_2 = t;
  h_2 :
  if(((ATgetType(l_2) == AT_LIST) && !(ATisEmpty(l_2))))
    {
      m_2 = ATgetFirst((ATermList) l_2);
      n_2 = (ATerm) ATgetNext((ATermList) l_2);
      i_2 :
      if(((ATgetType(n_2) == AT_LIST) && !(ATisEmpty(n_2))))
        {
          j_2 = ATgetFirst((ATermList) n_2);
          k_2 = (ATerm) ATgetNext((ATermList) n_2);
          {
            ATerm r_2 = NULL,s_2 = NULL;
            ATerm t_2 = NULL;
            t = not_null(m_2);
            {
              ATerm u_2 = NULL;
              t = create_call_0(t);
              {
                t_2 = t;
                {
                  if(((r_2 != NULL) && (r_2 != t_2)))
                    _fail(t_2);
                  else
                    r_2 = t_2;
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(k_2)), not_null(j_2));
                    {
                      t = to_TypeMatch_Strat_0(t);
                      {
                        u_2 = t;
                        if(((s_2 != NULL) && (s_2 != u_2)))
                          _fail(u_2);
                        else
                          s_2 = u_2;
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_2), not_null(s_2));
          }
        }
      else
        {
          if(((ATgetType(n_2) == AT_LIST) && ATisEmpty(n_2)))
            {
              {
                t = not_null(m_2);
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
ATerm to_TypeMatch_SDef_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
  f_3 = t;
  d_3 :
  if(match_cons(f_3, sym_NonTermDec_3))
    {
      g_3 = ATgetArgument(f_3, 0);
      i_3 = ATgetArgument(f_3, 1);
      j_3 = ATgetArgument(f_3, 2);
      e_3 :
      if(match_cons(g_3, sym_Id_1))
        {
          h_3 = ATgetArgument(g_3, 0);
          {
            ATerm n_3 = NULL,o_3 = NULL;
            ATerm p_3 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, term_o_4, not_null(h_3));
            {
              ATerm q_3 = NULL;
              t = conc_strings_0(t);
              {
                p_3 = t;
                {
                  if(((n_3 != NULL) && (n_3 != p_3)))
                    _fail(p_3);
                  else
                    n_3 = p_3;
                  {
                    t = not_null(j_3);
                    {
                      t = to_TypeMatch_Strat_0(t);
                      {
                        q_3 = t;
                        if(((o_3 != NULL) && (o_3 != q_3)))
                          _fail(q_3);
                        else
                          o_3 = q_3;
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, not_null(n_3), not_null(o_3));
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
ATerm tg_to_stratego_typematch_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  x_3 = t;
  w_3 :
  if(match_cons(x_3, sym_TreeGrammar_1))
    {
      y_3 = ATgetArgument(x_3, 0);
      {
        ATerm a_4 = NULL;
        ATerm b_4 = NULL;
        t = not_null(y_3);
        {
          t = map_1(t, to_TypeMatch_SDef_0);
          {
            b_4 = t;
            if(((a_4 != NULL) && (a_4 != b_4)))
              _fail(b_4);
            else
              a_4 = b_4;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Module_2, term_p_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(a_4))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_55 (ATerm), ATerm y_55 (ATerm))
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      {
        ATerm q_4 = NULL,s_4 = NULL;
        ATerm r_4 = NULL;
        t = SSLgetAnnotations(not_null(k_4));
        {
          r_4 = t;
          if(((q_4 != NULL) && (q_4 != r_4)))
            _fail(r_4);
          else
            q_4 = r_4;
        }
        {
          t = not_null(l_4);
          {
            ATerm u_4 = NULL;
            t = x_55(t);
            {
              s_4 = t;
              {
                t = not_null(m_4);
                {
                  ATerm w_4 = NULL;
                  t = y_55(t);
                  {
                    u_4 = t;
                    {
                      ATerm x_4 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_4), not_null(u_4)), not_null(q_4));
                      {
                        x_4 = t;
                        if(((w_4 != NULL) && (w_4 != x_4)))
                          _fail(x_4);
                        else
                          w_4 = x_4;
                      }
                      t = not_null(w_4);
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
  ATerm f_5 = NULL;
  ATerm t_4;
  t_4 = t;
  {
    ATerm c_0 (ATerm t)
    {
      ATerm g_5 = NULL,h_5 = NULL;
      g_5 = t;
      e_5 :
      if(match_cons(g_5, sym_Program_1))
        {
          h_5 = ATgetArgument(g_5, 0);
          if(((f_5 != NULL) && (f_5 != h_5)))
            _fail(h_5);
          else
            f_5 = h_5;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, c_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_4), not_null(f_5)), term_y_4));
      {
        t = printnl_0(t);
        {
          t = term_a_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_4;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  l_5 = t;
  k_5 :
  if(match_cons(l_5, sym__2))
    {
      m_5 = ATgetArgument(l_5, 0);
      n_5 = ATgetArgument(l_5, 1);
      {
        ATerm b_5;
        b_5 = t;
        t = SSL_printnl(not_null(m_5), not_null(n_5));
        t = b_5;
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
  ATerm s_5 = NULL;
  s_5 = t;
  t = SSL_implode_string(not_null(s_5));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
      {
        ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
        x_5 = t;
        w_5 :
        if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
          {
            y_5 = ATgetFirst((ATermList) x_5);
            z_5 = (ATerm) ATgetNext((ATermList) x_5);
            {
              t = not_null(y_5);
              {
                ATerm e_0 (ATerm t)
                {
                  t = not_null(z_5);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_0);
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
  ATerm j_6 = NULL;
  ATerm l_6 = NULL;
  j_6 = t;
  {
    ATerm m_6 = NULL;
    ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
    t = not_null(j_6);
    {
      m_6 = t;
      {
        t = SSL_explode_term(not_null(m_6));
        {
          o_6 = t;
          h_6 :
          if(match_cons(o_6, sym__2))
            {
              p_6 = ATgetArgument(o_6, 0);
              q_6 = ATgetArgument(o_6, 1);
              i_6 :
              if(match_string(p_6, ""))
                {
                  if(((l_6 != NULL) && (l_6 != q_6)))
                    _fail(q_6);
                  else
                    l_6 = q_6;
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
      t = not_null(l_6);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_76 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm i_5 = t;
    int j_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_6);
        ;
        LocalPopChoice(j_5);
      }
    else
      {
        t = i_5;
        {
          t = Nil_0(t);
          t = v_76(t);
        }
      }
    return(t);
  }
  t = u_6(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym__2))
    {
      y_6 = ATgetArgument(x_6, 0);
      z_6 = ATgetArgument(x_6, 1);
      {
        t = not_null(y_6);
        {
          ATerm f_0 (ATerm t)
          {
            t = not_null(z_6);
            return(t);
          }
          t = at_end_1(t, f_0);
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
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(p_5);
    }
  else
    {
      t = o_5;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  t = SSL_explode_string(not_null(e_7));
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
  ATerm i_7 = NULL;
  i_7 = t;
  t = SSL_is_string(not_null(i_7));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(r_5);
    }
  else
    {
      t = q_5;
      {
        ATerm t_5 = t;
        int u_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_0);
            ;
            LocalPopChoice(u_5);
          }
        else
          {
            t = t_5;
            {
              ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
              r_7 = t;
              q_7 :
              if(match_cons(r_7, sym_Path_1))
                {
                  s_7 = ATgetArgument(r_7, 0);
                  t = not_null(s_7);
                }
              else
                {
                  if(match_cons(r_7, sym_Var_1))
                    {
                      s_7 = ATgetArgument(r_7, 0);
                      {
                        t = not_null(s_7);
                        {
                          ATerm v_5 = t;
                          int a_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_6);
                            }
                          else
                            {
                              t = v_5;
                              {
                                ATerm n_0 (ATerm t)
                                {
                                  t = term_b_6;
                                  return(t);
                                }
                                t = debug_1(t, n_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_7, sym_Prefix_2))
                        {
                          s_7 = ATgetArgument(r_7, 0);
                          t_7 = ATgetArgument(r_7, 1);
                          {
                            ATerm y_7 = NULL,a_8 = NULL;
                            ATerm c_6;
                            c_6 = t;
                            {
                              ATerm z_7 = NULL;
                              t = not_null(s_7);
                              {
                                t = eval_config_0(t);
                                {
                                  z_7 = t;
                                  if(((y_7 != NULL) && (y_7 != z_7)))
                                    _fail(z_7);
                                  else
                                    y_7 = z_7;
                                }
                              }
                            }
                            t = c_6;
                            {
                              ATerm b_8 = NULL;
                              t = not_null(t_7);
                              {
                                t = eval_config_0(t);
                                {
                                  b_8 = t;
                                  if(((a_8 != NULL) && (a_8 != b_8)))
                                    _fail(b_8);
                                  else
                                    a_8 = b_8;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_7), not_null(a_8));
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
  ATerm j_8 = NULL;
  j_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_6, not_null(j_8));
    {
      t = table_get_0(t);
      {
        ATerm o_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_6;
            e_6 = t;
            {
              ATerm l_8 = NULL;
              ATerm m_8 = NULL;
              m_8 = t;
              if(((l_8 != NULL) && (l_8 != m_8)))
                _fail(m_8);
              else
                l_8 = m_8;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_6, not_null(j_8), not_null(l_8));
                t = table_put_0(t);
              }
            }
            t = e_6;
          }
          return(t);
        }
        t = try_1(t, o_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm s_95 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm f_6;
    f_6 = t;
    {
      ATerm q_8 = NULL;
      ATerm r_8 = NULL;
      t = term_g_6;
      {
        t = get_config_0(t);
        {
          r_8 = t;
          if(((q_8 != NULL) && (q_8 != r_8)))
            _fail(r_8);
          else
            q_8 = r_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), term_k_6);
        t = geq_0(t);
      }
    }
    t = f_6;
    t = s_95(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym__2))
    {
      w_8 = ATgetArgument(v_8, 0);
      x_8 = ATgetArgument(v_8, 1);
      t = SSL_WriteToTextFile(not_null(w_8), not_null(x_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym__2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      t = SSL_WriteToBinaryFile(not_null(e_9), not_null(f_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_9 = NULL;
  ATerm n_6;
  n_6 = t;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm r_6 = t;
      int s_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            ATerm o_9 = NULL,p_9 = NULL;
            o_9 = t;
            k_9 :
            if(match_cons(o_9, sym_Output_1))
              {
                p_9 = ATgetArgument(o_9, 0);
                if(((n_9 != NULL) && (n_9 != p_9)))
                  _fail(p_9);
                else
                  n_9 = p_9;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_0);
          ;
          LocalPopChoice(s_6);
        }
      else
        {
          t = r_6;
          {
            ATerm q_9 = NULL;
            t = term_t_6;
            {
              q_9 = t;
              if(((n_9 != NULL) && (n_9 != q_9)))
                _fail(q_9);
              else
                n_9 = q_9;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_0, _id);
  }
  t = n_6;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm u_0 (ATerm t)
      {
        t = not_null(n_9);
        return(t);
      }
      t = split_2(t, u_0, _id);
      return(t);
    }
    t = _2(t, _id, t_0);
    {
      ATerm v_6 = t;
      int a_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            ATerm w_0 (ATerm t)
            {
              ATerm r_9 = NULL;
              r_9 = t;
              m_9 :
              if(!(match_cons(r_9, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_0);
            return(t);
          }
          t = _2(t, v_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(a_7);
        }
      else
        {
          t = v_6;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_70 (ATerm))
{
  ATerm x_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  ATerm b_7;
  b_7 = t;
  t = dtime_0(t);
  t = b_7;
  {
    t = e_70(t);
    {
      ATerm c_7;
      c_7 = t;
      {
        ATerm y_9 = NULL;
        t = dtime_0(t);
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
      }
      t = c_7;
      {
        z_9 = t;
        w_9 :
        if(match_cons(z_9, sym__2))
          {
            a_10 = ATgetArgument(z_9, 0);
            b_10 = ATgetArgument(z_9, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_10)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_9))), not_null(b_10));
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
ATerm debug_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm d_7;
  d_7 = t;
  {
    ATerm i_10 = NULL,k_10 = NULL;
    ATerm f_7;
    f_7 = t;
    {
      ATerm j_10 = NULL;
      t = m_71(t);
      {
        j_10 = t;
        if(((i_10 != NULL) && (i_10 != j_10)))
          _fail(j_10);
        else
          i_10 = j_10;
      }
    }
    t = f_7;
    {
      ATerm l_10 = NULL;
      l_10 = t;
      if(((k_10 != NULL) && (k_10 != l_10)))
        _fail(l_10);
      else
        k_10 = l_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_10)), not_null(i_10)));
        t = printnl_0(t);
      }
    }
  }
  t = d_7;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_10 = NULL;
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_10 = NULL;
      q_10 = t;
      {
        if(((p_10 != NULL) && (p_10 != q_10)))
          _fail(q_10);
        else
          p_10 = q_10;
        t = SSL_ReadFromFile(not_null(p_10));
      }
      ;
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm x_0 (ATerm t)
        {
          t = term_j_7;
          return(t);
        }
        t = debug_1(t, x_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_84 (ATerm), ATerm k_84 (ATerm))
{
  ATerm u_10 = NULL,w_10 = NULL;
  ATerm k_7;
  k_7 = t;
  {
    ATerm v_10 = NULL;
    t = j_84(t);
    {
      v_10 = t;
      if(((u_10 != NULL) && (u_10 != v_10)))
        _fail(v_10);
      else
        u_10 = v_10;
    }
  }
  t = k_7;
  {
    ATerm x_10 = NULL;
    t = k_84(t);
    {
      x_10 = t;
      if(((w_10 != NULL) && (w_10 != x_10)))
        _fail(x_10);
      else
        w_10 = x_10;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_10), not_null(w_10));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_11 = NULL;
  ATerm l_7;
  l_7 = t;
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          ATerm e_11 = NULL,f_11 = NULL;
          e_11 = t;
          b_11 :
          if(match_cons(e_11, sym_Input_1))
            {
              f_11 = ATgetArgument(e_11, 0);
              if(((d_11 != NULL) && (d_11 != f_11)))
                _fail(f_11);
              else
                d_11 = f_11;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_0);
        ;
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
        {
          ATerm g_11 = NULL;
          t = term_o_7;
          {
            g_11 = t;
            if(((d_11 != NULL) && (d_11 != g_11)))
              _fail(g_11);
            else
              d_11 = g_11;
          }
        }
      }
  }
  t = l_7;
  {
    ATerm z_0 (ATerm t)
    {
      t = not_null(d_11);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_0);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm k_11 = NULL;
    k_11 = t;
    j_11 :
    if(!(match_string(k_11, "-v")))
      {
        if(!(match_string(k_11, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    t = term_v_7;
    t = set_config_0(t);
    t = term_w_7;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_x_7;
    return(t);
  }
  t = Option_3(t, a_1, b_1, c_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm n_11 = NULL;
    n_11 = t;
    l_11 :
    if(!(match_string(n_11, "-k")))
      {
        if(!(match_string(n_11, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    ATerm c_8;
    c_8 = t;
    {
      ATerm o_11 = NULL;
      ATerm p_11 = NULL;
      t = string_to_int_0(t);
      {
        p_11 = t;
        if(((o_11 != NULL) && (o_11 != p_11)))
          _fail(p_11);
        else
          o_11 = p_11;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(o_11));
        t = set_config_0(t);
      }
    }
    t = c_8;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_e_8;
    return(t);
  }
  t = ArgOption_3(t, d_1, e_1, i_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  t = SSL_string_to_int(not_null(s_11));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm a_12 = NULL;
        a_12 = t;
        v_11 :
        if(!(match_string(a_12, "-S")))
          {
            if(!(match_string(a_12, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = term_i_8;
        t = set_config_0(t);
        t = term_k_8;
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_n_8;
        return(t);
      }
      t = Option_3(t, j_1, k_1, l_1);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm b_12 = NULL;
              b_12 = t;
              w_11 :
              if(!(match_string(b_12, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              ATerm e_12 = NULL;
              ATerm s_8;
              s_8 = t;
              {
                ATerm c_12 = NULL;
                ATerm d_12 = NULL;
                t = string_to_int_0(t);
                {
                  d_12 = t;
                  if(((c_12 != NULL) && (c_12 != d_12)))
                    _fail(d_12);
                  else
                    c_12 = d_12;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_6, not_null(c_12));
                  t = set_config_0(t);
                }
              }
              t = s_8;
              {
                ATerm f_12 = NULL;
                f_12 = t;
                if(((e_12 != NULL) && (e_12 != f_12)))
                  _fail(f_12);
                else
                  e_12 = f_12;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_12));
              }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              t = term_t_8;
              return(t);
            }
            t = ArgOption_3(t, m_1, n_1, o_1);
            ;
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            {
              ATerm p_1 (ATerm t)
              {
                ATerm g_12 = NULL;
                g_12 = t;
                z_11 :
                if(!(match_string(g_12, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_1 (ATerm t)
              {
                t = term_z_8;
                t = set_config_0(t);
                t = term_a_9;
                return(t);
              }
              ATerm r_1 (ATerm t)
              {
                t = term_b_9;
                return(t);
              }
              t = Option_3(t, p_1, q_1, r_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
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
    ATerm m_12 = NULL;
    m_12 = t;
    j_12 :
    if(!(match_string(m_12, "-o")))
      {
        if(!(match_string(m_12, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm p_12 = NULL;
    ATerm l_9;
    l_9 = t;
    {
      ATerm n_12 = NULL;
      ATerm o_12 = NULL;
      o_12 = t;
      if(((n_12 != NULL) && (n_12 != o_12)))
        _fail(o_12);
      else
        n_12 = o_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(n_12));
        t = set_config_0(t);
      }
    }
    t = l_9;
    {
      ATerm q_12 = NULL;
      q_12 = t;
      if(((p_12 != NULL) && (p_12 != q_12)))
        _fail(q_12);
      else
        p_12 = q_12;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_12));
    }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_t_9;
    return(t);
  }
  t = ArgOption_3(t, u_1, v_1, w_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm u_12 = NULL;
          u_12 = t;
          t_12 :
          if(!(match_string(u_12, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          t = term_d_10;
          t = set_config_0(t);
          t = term_e_10;
          return(t);
        }
        ATerm b_2 (ATerm t)
        {
          t = term_f_10;
          return(t);
        }
        t = Option_3(t, x_1, y_1, b_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  a_13 = t;
  y_12 :
  if(match_string(a_13, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
        {
          b_13 = ATgetFirst((ATermList) a_13);
          c_13 = (ATerm) ATgetNext((ATermList) a_13);
          z_12 :
          if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
            {
              d_13 = ATgetFirst((ATermList) c_13);
              e_13 = (ATerm) ATgetNext((ATermList) c_13);
              {
                ATerm i_13 = NULL;
                ATerm g_10;
                g_10 = t;
                {
                  t = not_null(b_13);
                  t = j_0(t);
                }
                t = g_10;
                {
                  ATerm j_13 = NULL;
                  t = not_null(d_13);
                  {
                    t = k_0(t);
                    {
                      j_13 = t;
                      if(((i_13 != NULL) && (i_13 != j_13)))
                        _fail(j_13);
                      else
                        i_13 = j_13;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_13)), not_null(i_13));
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
  ATerm c_2 (ATerm t)
  {
    ATerm q_13 = NULL;
    q_13 = t;
    n_13 :
    if(!(match_string(q_13, "-i")))
      {
        if(!(match_string(q_13, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm t_13 = NULL;
    ATerm h_10;
    h_10 = t;
    {
      ATerm r_13 = NULL;
      ATerm s_13 = NULL;
      s_13 = t;
      if(((r_13 != NULL) && (r_13 != s_13)))
        _fail(s_13);
      else
        r_13 = s_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_10, not_null(r_13));
        t = set_config_0(t);
      }
    }
    t = h_10;
    {
      ATerm u_13 = NULL;
      u_13 = t;
      if(((t_13 != NULL) && (t_13 != u_13)))
        _fail(u_13);
      else
        t_13 = u_13;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_13));
    }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  t = ArgOption_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = o_10;
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATempty, term_y_10));
  {
    t = printnl_0(t);
    {
      t = term_a_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  t = SSL_TicksToSeconds(not_null(y_13));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym__2))
    {
      e_14 = ATgetArgument(d_14, 0);
      f_14 = ATgetArgument(d_14, 1);
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_14), not_null(f_14));
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            t = SSL_addr(not_null(e_14), not_null(f_14));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_82 (ATerm), ATerm v_82 (ATerm))
{
  ATerm c_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_82(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = c_11;
      {
        ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
        m_14 = t;
        l_14 :
        if(((ATgetType(m_14) == AT_LIST) && !(ATisEmpty(m_14))))
          {
            n_14 = ATgetFirst((ATermList) m_14);
            o_14 = (ATerm) ATgetNext((ATermList) m_14);
            {
              ATerm r_14 = NULL;
              ATerm s_14 = NULL;
              t = not_null(o_14);
              {
                t = foldr_2(t, u_82, v_82);
                {
                  s_14 = t;
                  if(((r_14 != NULL) && (r_14 != s_14)))
                    _fail(s_14);
                  else
                    r_14 = s_14;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(r_14));
                t = v_82(t);
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
ATerm crush_2 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm))
{
  ATerm z_14 = NULL;
  ATerm b_15 = NULL;
  z_14 = t;
  {
    ATerm c_15 = NULL;
    ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
    t = not_null(z_14);
    {
      c_15 = t;
      {
        t = SSL_explode_term(not_null(c_15));
        {
          e_15 = t;
          y_14 :
          if(match_cons(e_15, sym__2))
            {
              f_15 = ATgetArgument(e_15, 0);
              g_15 = ATgetArgument(e_15, 1);
              if(((b_15 != NULL) && (b_15 != g_15)))
                _fail(g_15);
              else
                b_15 = g_15;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_15);
      t = foldr_2(t, s_81, t_81);
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
    ATerm f_2 (ATerm t)
    {
      t = term_h_8;
      return(t);
    }
    t = crush_2(t, f_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym__2))
    {
      n_15 = ATgetArgument(m_15, 0);
      o_15 = ATgetArgument(m_15, 1);
      {
        ATerm i_11;
        i_11 = t;
        {
          ATerm m_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_15), not_null(o_15));
              ;
              LocalPopChoice(q_11);
            }
          else
            {
              t = m_11;
              t = SSL_gtr(not_null(n_15), not_null(o_15));
            }
        }
        t = i_11;
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
  ATerm u_15 = NULL;
  ATerm r_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
      v_15 = t;
      t_15 :
      if(match_cons(v_15, sym__2))
        {
          w_15 = ATgetArgument(v_15, 0);
          x_15 = ATgetArgument(v_15, 1);
          {
            if(((u_15 != NULL) && (u_15 != w_15)))
              _fail(w_15);
            else
              u_15 = w_15;
            if(((u_15 != NULL) && (u_15 != x_15)))
              _fail(x_15);
            else
              u_15 = x_15;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = r_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_95 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm u_11;
    u_11 = t;
    {
      ATerm a_16 = NULL;
      ATerm b_16 = NULL;
      t = term_g_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), term_a_5);
        t = geq_0(t);
      }
    }
    t = u_11;
    t = r_95(t);
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm f_16 = NULL,h_16 = NULL;
    ATerm x_11;
    x_11 = t;
    {
      ATerm g_16 = NULL;
      t = run_time_0(t);
      {
        g_16 = t;
        if(((f_16 != NULL) && (f_16 != g_16)))
          _fail(g_16);
        else
          f_16 = g_16;
      }
    }
    t = x_11;
    {
      ATerm i_16 = NULL;
      t = term_y_11;
      {
        t = get_config_0(t);
        {
          i_16 = t;
          if(((h_16 != NULL) && (h_16 != i_16)))
            _fail(i_16);
          else
            h_16 = i_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_12), not_null(f_16)), term_h_12), not_null(h_16)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_2);
  {
    t = term_h_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym_Version_0))
    {
      ATerm r_16 = NULL,t_16 = NULL;
      ATerm k_12;
      k_12 = t;
      {
        ATerm s_16 = NULL;
        t = SSLgetAnnotations(not_null(p_16));
        {
          s_16 = t;
          if(((r_16 != NULL) && (r_16 != s_16)))
            _fail(s_16);
          else
            r_16 = s_16;
        }
      }
      t = k_12;
      {
        ATerm u_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_16));
        {
          u_16 = t;
          if(((t_16 != NULL) && (t_16 != u_16)))
            _fail(u_16);
          else
            t_16 = u_16;
        }
        t = not_null(t_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_70 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm l_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = l_12;
        {
          ATerm s_12 = t;
          int v_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(v_12);
            }
          else
            {
              t = s_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_2);
  t = c_70(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_16 = NULL;
  z_16 = t;
  t = SSL_table_create(not_null(z_16));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  {
    ATerm w_12;
    w_12 = t;
    {
      t = term_x_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_12, term_f_13, not_null(d_17));
          t = table_put_0(t);
        }
      }
    }
    t = w_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_17 = NULL;
  h_17 = t;
  t = SSL_table_destroy(not_null(h_17));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  t = SSL_exit(not_null(l_17));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  p_17 = t;
  o_17 :
  if(((ATgetType(p_17) == AT_LIST) && ATisEmpty(p_17)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
        {
          q_17 = ATgetFirst((ATermList) p_17);
          r_17 = (ATerm) ATgetNext((ATermList) p_17);
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
  ATerm g_13;
  g_13 = t;
  {
    ATerm u_17 = NULL;
    ATerm x_17 = NULL;
    ATerm h_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = h_13;
        {
          ATerm v_17 = NULL;
          ATerm w_17 = NULL;
          w_17 = t;
          if(((v_17 != NULL) && (v_17 != w_17)))
            _fail(w_17);
          else
            v_17 = w_17;
          t = (ATerm) ATinsert(ATempty, not_null(v_17));
        }
      }
    {
      x_17 = t;
      if(((u_17 != NULL) && (u_17 != x_17)))
        _fail(x_17);
      else
        u_17 = x_17;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, not_null(u_17));
      t = printnl_0(t);
    }
  }
  t = g_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm a_18 (ATerm t)
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = Cons_2(t, g_76, a_18);
      }
    return(t);
  }
  t = a_18(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  j_18 = t;
  g_18 :
  if(((ATgetType(j_18) == AT_LIST) && !(ATisEmpty(j_18))))
    {
      h_18 = ATgetFirst((ATermList) j_18);
      i_18 = (ATerm) ATgetNext((ATermList) j_18);
      {
        ATerm m_18 = NULL;
        t = not_null(i_18);
        {
          ATerm o_13;
          o_13 = t;
          {
            ATerm n_18 = NULL,p_18 = NULL,r_18 = NULL;
            ATerm p_13;
            p_13 = t;
            {
              ATerm o_18 = NULL;
              t = i_0(t);
              {
                o_18 = t;
                if(((n_18 != NULL) && (n_18 != o_18)))
                  _fail(o_18);
                else
                  n_18 = o_18;
              }
            }
            t = p_13;
            {
              ATerm q_18 = NULL;
              t = not_null(h_18);
              {
                t = h_0(t);
                {
                  q_18 = t;
                  if(((p_18 != NULL) && (p_18 != q_18)))
                    _fail(q_18);
                  else
                    p_18 = q_18;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_18)), not_null(p_18));
                {
                  r_18 = t;
                  if(((m_18 != NULL) && (m_18 != r_18)))
                    _fail(r_18);
                  else
                    m_18 = r_18;
                }
              }
            }
          }
          t = o_13;
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(m_18);
              return(t);
            }
            t = reverse_acc_2(t, h_0, q_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_18) == AT_LIST) && ATisEmpty(j_18)))
        {
          {
            t = term_u_7;
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
  ATerm v_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm c_19 = NULL,d_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_Program_1))
    {
      d_19 = ATgetArgument(c_19, 0);
      {
        ATerm g_19 = NULL,i_19 = NULL;
        ATerm h_19 = NULL;
        t = SSLgetAnnotations(not_null(c_19));
        {
          h_19 = t;
          if(((g_19 != NULL) && (g_19 != h_19)))
            _fail(h_19);
          else
            g_19 = h_19;
        }
        {
          t = not_null(d_19);
          {
            ATerm k_19 = NULL;
            t = d_69(t);
            {
              i_19 = t;
              {
                ATerm l_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_19)), not_null(g_19));
                {
                  l_19 = t;
                  if(((k_19 != NULL) && (k_19 != l_19)))
                    _fail(l_19);
                  else
                    k_19 = l_19;
                }
                t = not_null(k_19);
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
  ATerm u_19 = NULL;
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_19 = NULL;
      t = term_y_11;
      {
        t = get_config_0(t);
        {
          v_19 = t;
          if(((u_19 != NULL) && (u_19 != v_19)))
            _fail(v_19);
          else
            u_19 = v_19;
        }
      }
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm x_2 (ATerm t)
          {
            ATerm w_19 = NULL;
            w_19 = t;
            if(((u_19 != NULL) && (u_19 != w_19)))
              _fail(w_19);
            else
              u_19 = w_19;
            return(t);
          }
          t = Program_1(t, x_2);
          return(t);
        }
        t = option_defined_1(t, w_2);
      }
    }
  {
    ATerm y_2 (ATerm t)
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(u_19);
        return(t);
      }
      t = short_description_1(t, z_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_2);
    {
      t = term_x_13;
      {
        t = echo_0(t);
        {
          t = term_b_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_3 (ATerm t)
                {
                  ATerm x_19 = NULL;
                  ATerm y_19 = NULL;
                  y_19 = t;
                  if(((x_19 != NULL) && (x_19 != y_19)))
                    _fail(y_19);
                  else
                    x_19 = y_19;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_19)), term_g_14);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_3);
                {
                  ATerm b_3 (ATerm t)
                  {
                    ATerm z_19 = NULL;
                    ATerm a_20 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      t = not_null(u_19);
                      return(t);
                    }
                    t = long_description_1(t, c_3);
                    {
                      a_20 = t;
                      if(((z_19 != NULL) && (z_19 != a_20)))
                        _fail(a_20);
                      else
                        z_19 = a_20;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_19)), term_h_14);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_3);
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
  ATerm i_14;
  i_14 = t;
  {
    ATerm g_20 = NULL;
    ATerm h_20 = NULL;
    h_20 = t;
    if(((g_20 != NULL) && (g_20 != h_20)))
      _fail(h_20);
    else
      g_20 = h_20;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATempty, not_null(g_20)));
      t = printnl_0(t);
    }
  }
  t = i_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm j_14;
  j_14 = t;
  {
    t = n_71(t);
    t = debug_0(t);
  }
  t = j_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_69 (ATerm))
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_Undefined_1))
    {
      p_20 = ATgetArgument(o_20, 0);
      {
        ATerm s_20 = NULL,u_20 = NULL;
        ATerm t_20 = NULL;
        t = SSLgetAnnotations(not_null(o_20));
        {
          t_20 = t;
          if(((s_20 != NULL) && (s_20 != t_20)))
            _fail(t_20);
          else
            s_20 = t_20;
        }
        {
          t = not_null(p_20);
          {
            ATerm w_20 = NULL;
            t = e_69(t);
            {
              u_20 = t;
              {
                ATerm x_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_20)), not_null(s_20));
                {
                  x_20 = t;
                  if(((w_20 != NULL) && (w_20 != x_20)))
                    _fail(x_20);
                  else
                    w_20 = x_20;
                }
                t = not_null(w_20);
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
  ATerm c_21 (ATerm t)
  {
    ATerm k_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_76, _id);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = k_14;
        t = Cons_2(t, _id, c_21);
      }
    return(t);
  }
  t = c_21(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_86 (ATerm))
{
  t = fetch_1(t, t_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  g_21 :
  if(match_cons(h_21, sym_Help_0))
    {
      ATerm j_21 = NULL,l_21 = NULL;
      ATerm q_14;
      q_14 = t;
      {
        ATerm k_21 = NULL;
        t = SSLgetAnnotations(not_null(h_21));
        {
          k_21 = t;
          if(((j_21 != NULL) && (j_21 != k_21)))
            _fail(k_21);
          else
            j_21 = k_21;
        }
      }
      t = q_14;
      {
        ATerm m_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_21));
        {
          m_21 = t;
          if(((l_21 != NULL) && (l_21 != m_21)))
            _fail(m_21);
          else
            l_21 = m_21;
        }
        t = not_null(l_21);
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
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_75(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym__2))
    {
      t_21 = ATgetArgument(s_21, 0);
      u_21 = ATgetArgument(s_21, 1);
      t = SSL_table_get(not_null(t_21), not_null(u_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym__3))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      e_22 = ATgetArgument(b_22, 2);
      {
        ATerm v_14;
        v_14 = t;
        {
          ATerm i_22 = NULL;
          ATerm j_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(d_22));
          {
            ATerm w_14 = t;
            int x_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(x_14);
              }
            else
              {
                t = w_14;
                t = (ATerm) ATempty;
              }
            {
              j_22 = t;
              if(((i_22 != NULL) && (i_22 != j_22)))
                _fail(j_22);
              else
                i_22 = j_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_22), not_null(d_22), (ATerm) ATinsert(CheckATermList(not_null(i_22)), not_null(e_22)));
            t = table_put_0(t);
          }
        }
        t = v_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm n_22 = NULL;
  ATerm o_22 = NULL;
  t = term_u_7;
  {
    t = y_87(t);
    {
      o_22 = t;
      if(((n_22 != NULL) && (n_22 != o_22)))
        _fail(o_22);
      else
        n_22 = o_22;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_13, term_a_14, not_null(n_22));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  t_22 :
  if(match_string(u_22, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
        {
          v_22 = ATgetFirst((ATermList) u_22);
          w_22 = (ATerm) ATgetNext((ATermList) u_22);
          {
            ATerm z_22 = NULL;
            ATerm a_15;
            a_15 = t;
            {
              t = not_null(v_22);
              t = a_0(t);
            }
            t = a_15;
            {
              ATerm a_23 = NULL;
              t = term_u_7;
              {
                t = d_0(t);
                {
                  a_23 = t;
                  if(((z_22 != NULL) && (z_22 != a_23)))
                    _fail(a_23);
                  else
                    z_22 = a_23;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_22)), not_null(z_22));
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
  ATerm k_3 (ATerm t)
  {
    ATerm f_23 = NULL;
    f_23 = t;
    e_23 :
    if(!(match_string(f_23, "--help")))
      {
        if(!(match_string(f_23, "-h")))
          {
            if(!(match_string(f_23, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_h_15;
    {
      t = set_config_0(t);
      t = term_i_15;
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_j_15;
    return(t);
  }
  t = Option_3(t, k_3, l_3, m_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  h_23 :
  if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
    {
      j_23 = ATgetFirst((ATermList) i_23);
      k_23 = (ATerm) ATgetNext((ATermList) i_23);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_23)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_23)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_57 (ATerm), ATerm h_57 (ATerm))
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  u_23 = t;
  t_23 :
  if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
    {
      v_23 = ATgetFirst((ATermList) u_23);
      w_23 = (ATerm) ATgetNext((ATermList) u_23);
      {
        ATerm a_24 = NULL,c_24 = NULL;
        ATerm b_24 = NULL;
        t = SSLgetAnnotations(not_null(u_23));
        {
          b_24 = t;
          if(((a_24 != NULL) && (a_24 != b_24)))
            _fail(b_24);
          else
            a_24 = b_24;
        }
        {
          t = not_null(v_23);
          {
            ATerm e_24 = NULL;
            t = g_57(t);
            {
              c_24 = t;
              {
                t = not_null(w_23);
                {
                  ATerm g_24 = NULL;
                  t = h_57(t);
                  {
                    e_24 = t;
                    {
                      ATerm h_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_24)), not_null(c_24)), not_null(a_24));
                      {
                        h_24 = t;
                        if(((g_24 != NULL) && (g_24 != h_24)))
                          _fail(h_24);
                        else
                          g_24 = h_24;
                      }
                      t = not_null(g_24);
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
  ATerm r_24 = NULL;
  r_24 = t;
  q_24 :
  if(((ATgetType(r_24) == AT_LIST) && ATisEmpty(r_24)))
    {
      {
        ATerm t_24 = NULL,v_24 = NULL;
        ATerm k_15;
        k_15 = t;
        {
          ATerm u_24 = NULL;
          t = SSLgetAnnotations(not_null(r_24));
          {
            u_24 = t;
            if(((t_24 != NULL) && (t_24 != u_24)))
              _fail(u_24);
            else
              t_24 = u_24;
          }
        }
        t = k_15;
        {
          ATerm w_24 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_24));
          {
            w_24 = t;
            if(((v_24 != NULL) && (v_24 != w_24)))
              _fail(w_24);
            else
              v_24 = w_24;
          }
          t = not_null(v_24);
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
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym__2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_6, not_null(d_25), not_null(e_25));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm p_15;
  p_15 = t;
  {
    ATerm r_3 (ATerm t)
    {
      t = term_q_15;
      t = w_87(t);
      return(t);
    }
    t = try_1(t, r_3);
  }
  t = p_15;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm j_26 = NULL;
      ATerm r_15;
      r_15 = t;
      {
        ATerm h_26 = NULL;
        ATerm i_26 = NULL;
        i_26 = t;
        if(((h_26 != NULL) && (h_26 != i_26)))
          _fail(i_26);
        else
          h_26 = i_26;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(h_26));
          t = set_config_0(t);
        }
      }
      t = r_15;
      {
        ATerm k_26 = NULL;
        k_26 = t;
        if(((j_26 != NULL) && (j_26 != k_26)))
          _fail(k_26);
        else
          j_26 = k_26;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_26));
      }
      return(t);
    }
    ATerm t_3 (ATerm t)
    {
      ATerm s_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_15 = t;
          int c_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(c_16);
            }
          else
            {
              t = z_15;
              {
                t = w_87(t);
                t = Cons_2(t, _id, t_3);
              }
            }
          ;
          LocalPopChoice(y_15);
        }
      else
        {
          t = s_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_3, t_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,z_26 = NULL;
  ATerm d_16;
  d_16 = t;
  {
    ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
    a_27 = t;
    r_26 :
    if(match_cons(a_27, sym__3))
      {
        b_27 = ATgetArgument(a_27, 0);
        c_27 = ATgetArgument(a_27, 1);
        d_27 = ATgetArgument(a_27, 2);
        {
          if(((s_26 != NULL) && (s_26 != b_27)))
            _fail(b_27);
          else
            s_26 = b_27;
          {
            if(((t_26 != NULL) && (t_26 != c_27)))
              _fail(c_27);
            else
              t_26 = c_27;
            {
              if(((z_26 != NULL) && (z_26 != d_27)))
                _fail(d_27);
              else
                z_26 = d_27;
              t = SSL_table_put(not_null(s_26), not_null(t_26), not_null(z_26));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_87 (ATerm))
{
  ATerm g_27 = NULL;
  ATerm e_16;
  e_16 = t;
  {
    t = term_j_16;
    t = table_put_0(t);
  }
  t = e_16;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm k_16 = t;
      int l_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_87(t);
          ;
          LocalPopChoice(l_16);
        }
      else
        {
          t = k_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_3);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16;
            q_16 = t;
            {
              ATerm v_16 = t;
              int w_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(w_16);
                }
              else
                {
                  t = v_16;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = q_16;
            {
              t = system_usage_0(t);
              {
                t = term_h_8;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            {
              ATerm z_3 (ATerm t)
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm h_27 = NULL;
                  h_27 = t;
                  if(((g_27 != NULL) && (g_27 != h_27)))
                    _fail(h_27);
                  else
                    g_27 = h_27;
                  return(t);
                }
                t = Undefined_1(t, c_4);
                return(t);
              }
              t = option_defined_1(t, z_3);
              {
                ATerm d_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_27)), term_x_16);
                  return(t);
                }
                t = say_1(t, d_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_5;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_3);
      {
        ATerm y_16;
        y_16 = t;
        {
          t = term_z_13;
          t = table_destroy_0(t);
        }
        t = y_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm))
{
  t = parse_options_1(t, i_70);
  {
    t = store_options_0(t);
    {
      t = k_70(t);
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_70);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            {
              ATerm c_17 = t;
              int e_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_70(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(e_17);
                }
              else
                {
                  t = c_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm b_71 (ATerm), ATerm c_71 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_71(t);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_70);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, e_4, b_71, c_71, f_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm h_4 (ATerm t)
    {
      ATerm i_17;
      i_17 = t;
      {
        ATerm k_27 = NULL;
        ATerm l_27 = NULL;
        t = term_y_11;
        {
          t = get_config_0(t);
          {
            l_27 = t;
            if(((k_27 != NULL) && (k_27 != l_27)))
              _fail(l_27);
            else
              k_27 = l_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATempty, not_null(k_27)));
          t = printnl_0(t);
        }
      }
      t = i_17;
      return(t);
    }
    t = if_verbose2_1(t, h_4);
    return(t);
  }
  t = iowrap_4(t, t_70, u_70, v_70, g_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  t = iowrap_3(t, r_70, s_70, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    t = _2(t, _id, o_70);
    return(t);
  }
  t = iowrap_2(t, i_4, _fail);
  return(t);
}
ATerm io_tg2typematch_0 (ATerm t)
{
  t = iowrap_1(t, tg_to_stratego_typematch_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_tg2typematch_0(t);
  return(t);
}
