#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_s_18;
ATerm term_q_17;
ATerm term_w_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_w_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_l_9;
ATerm term_l_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_d_4;
ATerm term_c_4;
void init_constant_terms (void)
{
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-param", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_4);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_y_4);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_5);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_f_5);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("if-verbose2", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_5);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("integers", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("verbose", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_s_4);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_s_4);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_s_4);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_s_4);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__3, term_c_15, term_d_15, (ATerm) ATempty);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm param_name_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm z_77 (ATerm));
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
ATerm _2 (ATerm, ATerm c_56 (ATerm), ATerm d_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_76 (ATerm));
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
ATerm apply_strategy_1 (ATerm, ATerm j_70 (ATerm));
ATerm debug_1 (ATerm, ATerm r_71 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_84 (ATerm), ATerm i_84 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm s_82 (ATerm), ATerm t_82 (ATerm));
ATerm crush_2 (ATerm, ATerm q_81 (ATerm), ATerm r_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_95 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_70 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_87 (ATerm));
ATerm map_1 (ATerm, ATerm e_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_87 (ATerm));
ATerm Program_1 (ATerm, ATerm h_69 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm s_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm i_69 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_57 (ATerm), ATerm m_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm h_71 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_70 (ATerm));
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
  ATerm t_1 = NULL;
  ATerm u_1 = NULL;
  t = int_to_string_0(t);
  {
    u_1 = t;
    if(((t_1 != NULL) && (t_1 != u_1)))
      _fail(u_1);
    else
      t_1 = u_1;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_4, not_null(t_1));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_2 = NULL;
  ATerm j_2 = NULL,k_2 = NULL;
  h_2 = t;
  {
    ATerm l_2 = NULL;
    ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
    t = not_null(h_2);
    {
      l_2 = t;
      {
        t = SSL_explode_term(not_null(l_2));
        {
          n_2 = t;
          d_2 :
          if(match_cons(n_2, sym__2))
            {
              o_2 = ATgetArgument(n_2, 0);
              p_2 = ATgetArgument(n_2, 1);
              e_2 :
              if(match_string(o_2, ""))
                {
                  g_2 :
                  if(((ATgetType(p_2) == AT_LIST) && !(ATisEmpty(p_2))))
                    {
                      q_2 = ATgetFirst((ATermList) p_2);
                      r_2 = (ATerm) ATgetNext((ATermList) p_2);
                      {
                        if(((k_2 != NULL) && (k_2 != q_2)))
                          _fail(q_2);
                        else
                          k_2 = q_2;
                        if(((j_2 != NULL) && (j_2 != r_2)))
                          _fail(r_2);
                        else
                          j_2 = r_2;
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
    t = not_null(k_2);
  }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm w_2 = NULL;
  ATerm x_2 = NULL;
  x_2 = t;
  if(((w_2 != NULL) && (w_2 != x_2)))
    _fail(x_2);
  else
    w_2 = x_2;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_2), term_d_4);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm h_3 = NULL;
  ATerm i_3 = NULL;
  i_3 = t;
  if(((h_3 != NULL) && (h_3 != i_3)))
    _fail(i_3);
  else
    h_3 = i_3;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_4, not_null(h_3));
    {
      ATerm y_3 (ATerm t)
      {
        ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
        j_3 = t;
        f_3 :
        if(match_cons(j_3, sym__2))
          {
            k_3 = ATgetArgument(j_3, 0);
            l_3 = ATgetArgument(j_3, 1);
            g_3 :
            if(((ATgetType(l_3) == AT_LIST) && ATisEmpty(l_3)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(l_3) == AT_LIST) && !(ATisEmpty(l_3))))
                  {
                    m_3 = ATgetFirst((ATermList) l_3);
                    n_3 = (ATerm) ATgetNext((ATermList) l_3);
                    {
                      ATerm r_3 = NULL,t_3 = NULL;
                      ATerm e_4;
                      e_4 = t;
                      {
                        ATerm s_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_3), not_null(m_3));
                        {
                          t = z_77(t);
                          {
                            s_3 = t;
                            if(((r_3 != NULL) && (r_3 != s_3)))
                              _fail(s_3);
                            else
                              r_3 = s_3;
                          }
                        }
                      }
                      t = e_4;
                      {
                        ATerm u_3 = NULL,w_3 = NULL;
                        ATerm v_3 = NULL;
                        t = not_null(k_3);
                        {
                          t = inc_0(t);
                          {
                            v_3 = t;
                            if(((u_3 != NULL) && (u_3 != v_3)))
                              _fail(v_3);
                            else
                              u_3 = v_3;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), not_null(n_3));
                          {
                            t = y_3(t);
                            {
                              w_3 = t;
                              if(((t_3 != NULL) && (t_3 != w_3)))
                                _fail(w_3);
                              else
                                t_3 = w_3;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(t_3)), not_null(r_3));
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
      t = y_3(t);
    }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
  g_4 = t;
  f_4 :
  if(match_cons(g_4, sym__2))
    {
      h_4 = ATgetArgument(g_4, 0);
      i_4 = ATgetArgument(g_4, 1);
      {
        ATerm j_4 = t;
        int k_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_4), not_null(i_4));
            LocalPopChoice(k_4);
          }
        else
          {
            t = j_4;
            t = SSL_subtr(not_null(h_4), not_null(i_4));
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
  ATerm m_4 (ATerm t)
  {
    ATerm l_4 = t;
    int n_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_88(t);
        LocalPopChoice(n_4);
      }
    else
      {
        t = l_4;
        {
          t = p_88(t);
          t = m_4(t);
        }
      }
    return(t);
  }
  t = m_4(t);
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
    ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
    v_4 = t;
    o_4 :
    if(match_cons(v_4, sym__2))
      {
        w_4 = ATgetArgument(v_4, 0);
        x_4 = ATgetArgument(v_4, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(w_4), not_null(x_4), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm c_0 (ATerm t)
  {
    ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
    a_5 = t;
    q_4 :
    if(match_cons(a_5, sym__3))
      {
        b_5 = ATgetArgument(a_5, 0);
        c_5 = ATgetArgument(a_5, 1);
        d_5 = ATgetArgument(a_5, 2);
        r_4 :
        if(match_int(b_5, 0))
          {
            t = not_null(d_5);
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
  ATerm e_0 (ATerm t)
  {
    ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
    g_5 = t;
    u_4 :
    if(match_cons(g_5, sym__3))
      {
        h_5 = ATgetArgument(g_5, 0);
        i_5 = ATgetArgument(g_5, 1);
        j_5 = ATgetArgument(g_5, 2);
        {
          ATerm n_5 = NULL;
          ATerm p_4;
          p_4 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), term_d_4);
            t = geq_0(t);
          }
          t = p_4;
          {
            ATerm o_5 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), term_d_4);
            {
              t = subt_0(t);
              {
                o_5 = t;
                if(((n_5 != NULL) && (n_5 != o_5)))
                  _fail(o_5);
                else
                  n_5 = o_5;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_5), not_null(i_5), (ATerm) ATinsert(CheckATermList(not_null(j_5)), not_null(i_5)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, b_0, c_0, e_0);
  return(t);
}
ATerm int_to_int_list_0 (ATerm t)
{
  ATerm u_5 = NULL;
  ATerm v_5 = NULL;
  v_5 = t;
  if(((u_5 != NULL) && (u_5 != v_5)))
    _fail(v_5);
  else
    u_5 = v_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_5), term_s_4);
    {
      t = copy_0(t);
      t = map_with_index_1(t, Fst_0);
    }
  }
  return(t);
}
ATerm create_call_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  j_6 = t;
  g_6 :
  if(match_cons(j_6, sym_Param_1))
    {
      k_6 = ATgetArgument(j_6, 0);
      {
        ATerm o_6 = NULL;
        ATerm p_6 = NULL;
        t = not_null(k_6);
        {
          t = param_name_0(t);
          {
            p_6 = t;
            if(((o_6 != NULL) && (o_6 != p_6)))
              _fail(p_6);
            else
              o_6 = p_6;
          }
        }
        t = not_null(o_6);
      }
    }
  else
    {
      if(match_cons(j_6, sym_String_0))
        {
          t = term_z_4;
        }
      else
        {
          if(match_cons(j_6, sym_Int_0))
            {
              t = term_k_5;
            }
          else
            {
              if(match_cons(j_6, sym_NonTermRef_2))
                {
                  k_6 = ATgetArgument(j_6, 0);
                  m_6 = ATgetArgument(j_6, 1);
                  h_6 :
                  if(match_cons(k_6, sym_Id_1))
                    {
                      l_6 = ATgetArgument(k_6, 0);
                      {
                        ATerm s_6 = NULL,t_6 = NULL;
                        ATerm u_6 = NULL;
                        t = not_null(l_6);
                        {
                          ATerm v_6 = NULL;
                          t = fc_name_0(t);
                          {
                            u_6 = t;
                            {
                              if(((s_6 != NULL) && (s_6 != u_6)))
                                _fail(u_6);
                              else
                                s_6 = u_6;
                              {
                                t = not_null(m_6);
                                {
                                  t = map_1(t, create_call_0);
                                  {
                                    v_6 = t;
                                    if(((t_6 != NULL) && (t_6 != v_6)))
                                      _fail(v_6);
                                    else
                                      t_6 = v_6;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_6)), not_null(t_6));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(j_6, sym_Prod_2))
                    {
                      k_6 = ATgetArgument(j_6, 0);
                      m_6 = ATgetArgument(j_6, 1);
                      i_6 :
                      if(match_cons(k_6, sym_Id_1))
                        {
                          l_6 = ATgetArgument(k_6, 0);
                          {
                            ATerm y_6 = NULL;
                            ATerm z_6 = NULL;
                            t = not_null(m_6);
                            {
                              t = map_1(t, create_call_0);
                              {
                                z_6 = t;
                                if(((y_6 != NULL) && (y_6 != z_6)))
                                  _fail(z_6);
                                else
                                  y_6 = z_6;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_6)), not_null(y_6));
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
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  n_7 :
  if(((ATgetType(r_7) == AT_LIST) && !(ATisEmpty(r_7))))
    {
      s_7 = ATgetFirst((ATermList) r_7);
      t_7 = (ATerm) ATgetNext((ATermList) r_7);
      o_7 :
      if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
        {
          p_7 = ATgetFirst((ATermList) t_7);
          q_7 = (ATerm) ATgetNext((ATermList) t_7);
          {
            ATerm x_7 = NULL,y_7 = NULL;
            ATerm z_7 = NULL;
            t = not_null(s_7);
            {
              ATerm a_8 = NULL;
              t = create_call_0(t);
              {
                z_7 = t;
                {
                  if(((x_7 != NULL) && (x_7 != z_7)))
                    _fail(z_7);
                  else
                    x_7 = z_7;
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(q_7)), not_null(p_7));
                    {
                      t = to_fc_Body_0(t);
                      {
                        a_8 = t;
                        if(((y_7 != NULL) && (y_7 != a_8)))
                          _fail(a_8);
                        else
                          y_7 = a_8;
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_7), not_null(y_7));
          }
        }
      else
        {
          if(((ATgetType(t_7) == AT_LIST) && ATisEmpty(t_7)))
            {
              {
                t = not_null(s_7);
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
  ATerm h_8 = NULL;
  ATerm i_8 = NULL;
  i_8 = t;
  if(((h_8 != NULL) && (h_8 != i_8)))
    _fail(i_8);
  else
    h_8 = i_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_5, not_null(h_8));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm to_fc_SDef_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  s_8 = t;
  q_8 :
  if(match_cons(s_8, sym_NonTermDec_3))
    {
      t_8 = ATgetArgument(s_8, 0);
      v_8 = ATgetArgument(s_8, 1);
      w_8 = ATgetArgument(s_8, 2);
      r_8 :
      if(match_cons(t_8, sym_Id_1))
        {
          u_8 = ATgetArgument(t_8, 0);
          {
            ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
            ATerm e_9 = NULL;
            t = not_null(u_8);
            {
              ATerm f_9 = NULL;
              t = fc_name_0(t);
              {
                e_9 = t;
                {
                  if(((a_9 != NULL) && (a_9 != e_9)))
                    _fail(e_9);
                  else
                    a_9 = e_9;
                  {
                    t = not_null(w_8);
                    {
                      ATerm i_9 = NULL;
                      t = to_fc_Body_0(t);
                      {
                        f_9 = t;
                        {
                          if(((b_9 != NULL) && (b_9 != f_9)))
                            _fail(f_9);
                          else
                            b_9 = f_9;
                          {
                            t = not_null(v_8);
                            {
                              t = int_to_int_list_0(t);
                              {
                                ATerm j_9 = NULL;
                                ATerm f_0 (ATerm t)
                                {
                                  ATerm g_9 = NULL;
                                  ATerm h_9 = NULL;
                                  t = param_name_0(t);
                                  {
                                    h_9 = t;
                                    if(((g_9 != NULL) && (g_9 != h_9)))
                                      _fail(h_9);
                                    else
                                      g_9 = h_9;
                                  }
                                  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(g_9));
                                  return(t);
                                }
                                t = map_1(t, f_0);
                                {
                                  i_9 = t;
                                  {
                                    if(((c_9 != NULL) && (c_9 != i_9)))
                                      _fail(i_9);
                                    else
                                      c_9 = i_9;
                                    {
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_5), not_null(u_8)), term_m_5);
                                      {
                                        t = concat_strings_0(t);
                                        {
                                          j_9 = t;
                                          if(((d_9 != NULL) && (d_9 != j_9)))
                                            _fail(j_9);
                                          else
                                            d_9 = j_9;
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
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_9), not_null(c_9), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_9), (ATerm) ATmakeAppl(sym_Call_2, term_r_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, term_t_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_9)))))))));
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
  ATerm t_9 = NULL,u_9 = NULL;
  t_9 = t;
  s_9 :
  if(match_cons(t_9, sym_TreeGrammar_1))
    {
      u_9 = ATgetArgument(t_9, 0);
      {
        ATerm w_9 = NULL;
        ATerm x_9 = NULL;
        t = not_null(u_9);
        {
          t = map_1(t, to_fc_SDef_0);
          {
            x_9 = t;
            if(((w_9 != NULL) && (w_9 != x_9)))
              _fail(x_9);
            else
              w_9 = x_9;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Module_2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(w_9))), (ATerm) ATmakeAppl(sym_Imports_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_5), term_y_5), term_x_5))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_56 (ATerm), ATerm d_56 (ATerm))
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      {
        ATerm m_10 = NULL,o_10 = NULL;
        ATerm n_10 = NULL;
        t = SSLgetAnnotations(not_null(g_10));
        {
          n_10 = t;
          if(((m_10 != NULL) && (m_10 != n_10)))
            _fail(n_10);
          else
            m_10 = n_10;
        }
        {
          t = not_null(h_10);
          {
            ATerm q_10 = NULL;
            t = c_56(t);
            {
              o_10 = t;
              {
                t = not_null(i_10);
                {
                  ATerm s_10 = NULL;
                  t = d_56(t);
                  {
                    q_10 = t;
                    {
                      ATerm t_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_10), not_null(q_10)), not_null(m_10));
                      {
                        t_10 = t;
                        if(((s_10 != NULL) && (s_10 != t_10)))
                          _fail(t_10);
                        else
                          s_10 = t_10;
                      }
                      t = not_null(s_10);
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
  ATerm b_11 = NULL;
  ATerm a_6;
  a_6 = t;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm c_11 = NULL,d_11 = NULL;
      c_11 = t;
      a_11 :
      if(match_cons(c_11, sym_Program_1))
        {
          d_11 = ATgetArgument(c_11, 0);
          if(((b_11 != NULL) && (b_11 != d_11)))
            _fail(d_11);
          else
            b_11 = d_11;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, m_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_6), not_null(b_11)), term_c_6));
      {
        t = printnl_0(t);
        {
          t = term_d_4;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      {
        ATerm e_6;
        e_6 = t;
        t = SSL_printnl(not_null(i_11), not_null(j_11));
        t = e_6;
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
  ATerm o_11 = NULL;
  o_11 = t;
  t = SSL_implode_string(not_null(o_11));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_6);
    }
  else
    {
      t = f_6;
      {
        ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
        t_11 = t;
        s_11 :
        if(((ATgetType(t_11) == AT_LIST) && !(ATisEmpty(t_11))))
          {
            u_11 = ATgetFirst((ATermList) t_11);
            v_11 = (ATerm) ATgetNext((ATermList) t_11);
            {
              t = not_null(u_11);
              {
                ATerm n_0 (ATerm t)
                {
                  t = not_null(v_11);
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
  ATerm f_12 = NULL;
  ATerm h_12 = NULL;
  f_12 = t;
  {
    ATerm i_12 = NULL;
    ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
    t = not_null(f_12);
    {
      i_12 = t;
      {
        t = SSL_explode_term(not_null(i_12));
        {
          k_12 = t;
          d_12 :
          if(match_cons(k_12, sym__2))
            {
              l_12 = ATgetArgument(k_12, 0);
              m_12 = ATgetArgument(k_12, 1);
              e_12 :
              if(match_string(l_12, ""))
                {
                  if(((h_12 != NULL) && (h_12 != m_12)))
                    _fail(m_12);
                  else
                    h_12 = m_12;
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
      t = not_null(h_12);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm q_12 (ATerm t)
  {
    ATerm q_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_12);
        LocalPopChoice(r_6);
      }
    else
      {
        t = q_6;
        {
          t = Nil_0(t);
          t = t_76(t);
        }
      }
    return(t);
  }
  t = q_12(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        t = not_null(u_12);
        {
          ATerm o_0 (ATerm t)
          {
            t = not_null(v_12);
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
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  t = SSL_explode_string(not_null(a_13));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_13 = NULL;
  e_13 = t;
  t = SSL_is_string(not_null(e_13));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              ATerm g_7 = t;
              int h_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(h_7);
                }
              else
                {
                  t = g_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, p_0);
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            {
              ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
              n_13 = t;
              m_13 :
              if(match_cons(n_13, sym_Path_1))
                {
                  o_13 = ATgetArgument(n_13, 0);
                  t = not_null(o_13);
                }
              else
                {
                  if(match_cons(n_13, sym_Var_1))
                    {
                      o_13 = ATgetArgument(n_13, 0);
                      {
                        t = not_null(o_13);
                        {
                          ATerm i_7 = t;
                          int j_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(j_7);
                            }
                          else
                            {
                              t = i_7;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_k_7;
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
                      if(match_cons(n_13, sym_Prefix_2))
                        {
                          o_13 = ATgetArgument(n_13, 0);
                          p_13 = ATgetArgument(n_13, 1);
                          {
                            ATerm u_13 = NULL,w_13 = NULL;
                            ATerm l_7;
                            l_7 = t;
                            {
                              ATerm v_13 = NULL;
                              t = not_null(o_13);
                              {
                                t = eval_config_0(t);
                                {
                                  v_13 = t;
                                  if(((u_13 != NULL) && (u_13 != v_13)))
                                    _fail(v_13);
                                  else
                                    u_13 = v_13;
                                }
                              }
                            }
                            t = l_7;
                            {
                              ATerm x_13 = NULL;
                              t = not_null(p_13);
                              {
                                t = eval_config_0(t);
                                {
                                  x_13 = t;
                                  if(((w_13 != NULL) && (w_13 != x_13)))
                                    _fail(x_13);
                                  else
                                    w_13 = x_13;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_13), not_null(w_13));
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
  ATerm f_14 = NULL;
  f_14 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_7, not_null(f_14));
    {
      t = table_get_0(t);
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm w_7;
              w_7 = t;
              {
                ATerm h_14 = NULL;
                ATerm i_14 = NULL;
                i_14 = t;
                if(((h_14 != NULL) && (h_14 != i_14)))
                  _fail(i_14);
                else
                  h_14 = i_14;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_m_7, not_null(f_14), not_null(h_14));
                  t = table_put_0(t);
                }
              }
              t = w_7;
            }
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8;
      d_8 = t;
      {
        ATerm m_14 = NULL;
        ATerm n_14 = NULL;
        t = term_e_8;
        {
          t = get_config_0(t);
          {
            n_14 = t;
            if(((m_14 != NULL) && (m_14 != n_14)))
              _fail(n_14);
            else
              m_14 = n_14;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), term_f_8);
          t = geq_0(t);
        }
      }
      t = d_8;
      t = q_95(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      t = SSL_WriteToTextFile(not_null(s_14), not_null(t_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym__2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      t = SSL_WriteToBinaryFile(not_null(a_15), not_null(b_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm g_8;
  g_8 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 (ATerm t)
          {
            ATerm k_15 = NULL,l_15 = NULL;
            k_15 = t;
            g_15 :
            if(match_cons(k_15, sym_Output_1))
              {
                l_15 = ATgetArgument(k_15, 0);
                if(((j_15 != NULL) && (j_15 != l_15)))
                  _fail(l_15);
                else
                  j_15 = l_15;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, t_0);
          LocalPopChoice(k_8);
        }
      else
        {
          t = j_8;
          {
            ATerm m_15 = NULL;
            t = term_l_8;
            {
              m_15 = t;
              if(((j_15 != NULL) && (j_15 != m_15)))
                _fail(m_15);
              else
                j_15 = m_15;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_0, _id);
  }
  t = g_8;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(j_15);
        return(t);
      }
      t = split_2(t, v_0, _id);
      return(t);
    }
    t = _2(t, _id, u_0);
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              ATerm n_15 = NULL;
              n_15 = t;
              i_15 :
              if(!(match_cons(n_15, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_0);
            return(t);
          }
          t = _2(t, w_0, WriteToBinaryFile_0);
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm t_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  ATerm o_8;
  o_8 = t;
  t = dtime_0(t);
  t = o_8;
  {
    t = j_70(t);
    {
      ATerm p_8;
      p_8 = t;
      {
        ATerm u_15 = NULL;
        t = dtime_0(t);
        {
          u_15 = t;
          if(((t_15 != NULL) && (t_15 != u_15)))
            _fail(u_15);
          else
            t_15 = u_15;
        }
      }
      t = p_8;
      {
        v_15 = t;
        s_15 :
        if(match_cons(v_15, sym__2))
          {
            w_15 = ATgetArgument(v_15, 0);
            x_15 = ATgetArgument(v_15, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_15)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_15))), not_null(x_15));
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
ATerm debug_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm x_8;
  x_8 = t;
  {
    ATerm e_16 = NULL,g_16 = NULL;
    ATerm y_8;
    y_8 = t;
    {
      ATerm f_16 = NULL;
      t = r_71(t);
      {
        f_16 = t;
        if(((e_16 != NULL) && (e_16 != f_16)))
          _fail(f_16);
        else
          e_16 = f_16;
      }
    }
    t = y_8;
    {
      ATerm h_16 = NULL;
      h_16 = t;
      if(((g_16 != NULL) && (g_16 != h_16)))
        _fail(h_16);
      else
        g_16 = h_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), not_null(e_16)));
        t = printnl_0(t);
      }
    }
  }
  t = x_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm l_16 = NULL;
  ATerm z_8 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_16 = NULL;
      m_16 = t;
      {
        if(((l_16 != NULL) && (l_16 != m_16)))
          _fail(m_16);
        else
          l_16 = m_16;
        t = SSL_ReadFromFile(not_null(l_16));
      }
      LocalPopChoice(k_9);
    }
  else
    {
      t = z_8;
      {
        ATerm y_0 (ATerm t)
        {
          t = term_l_9;
          return(t);
        }
        t = debug_1(t, y_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_84 (ATerm), ATerm i_84 (ATerm))
{
  ATerm q_16 = NULL,s_16 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm r_16 = NULL;
    t = h_84(t);
    {
      r_16 = t;
      if(((q_16 != NULL) && (q_16 != r_16)))
        _fail(r_16);
      else
        q_16 = r_16;
    }
  }
  t = m_9;
  {
    ATerm t_16 = NULL;
    t = i_84(t);
    {
      t_16 = t;
      if(((s_16 != NULL) && (s_16 != t_16)))
        _fail(t_16);
      else
        s_16 = t_16;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(s_16));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_16 = NULL;
  ATerm n_9;
  n_9 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_17 = NULL,b_17 = NULL;
          a_17 = t;
          x_16 :
          if(match_cons(a_17, sym_Input_1))
            {
              b_17 = ATgetArgument(a_17, 0);
              if(((z_16 != NULL) && (z_16 != b_17)))
                _fail(b_17);
              else
                z_16 = b_17;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, z_0);
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm c_17 = NULL;
          t = term_q_9;
          {
            c_17 = t;
            if(((z_16 != NULL) && (z_16 != c_17)))
              _fail(c_17);
            else
              z_16 = c_17;
          }
        }
      }
  }
  t = n_9;
  {
    ATerm a_1 (ATerm t)
    {
      t = not_null(z_16);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm g_17 = NULL;
    g_17 = t;
    f_17 :
    if(!(match_string(g_17, "-v")))
      {
        if(!(match_string(g_17, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_v_9;
    t = set_config_0(t);
    t = term_y_9;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_z_9;
    return(t);
  }
  t = Option_3(t, b_1, c_1, d_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm j_17 = NULL;
    j_17 = t;
    h_17 :
    if(!(match_string(j_17, "-k")))
      {
        if(!(match_string(j_17, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm a_10;
    a_10 = t;
    {
      ATerm k_17 = NULL;
      ATerm l_17 = NULL;
      t = string_to_int_0(t);
      {
        l_17 = t;
        if(((k_17 != NULL) && (k_17 != l_17)))
          _fail(l_17);
        else
          k_17 = l_17;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, not_null(k_17));
        t = set_config_0(t);
      }
    }
    t = a_10;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    t = term_c_10;
    return(t);
  }
  t = ArgOption_3(t, e_1, f_1, g_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_17 = NULL;
  o_17 = t;
  t = SSL_string_to_int(not_null(o_17));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm w_17 = NULL;
        w_17 = t;
        r_17 :
        if(!(match_string(w_17, "-S")))
          {
            if(!(match_string(w_17, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_1 (ATerm t)
      {
        t = term_k_10;
        t = set_config_0(t);
        t = term_l_10;
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = term_p_10;
        return(t);
      }
      t = Option_3(t, h_1, i_1, j_1);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm r_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm x_17 = NULL;
              x_17 = t;
              s_17 :
              if(!(match_string(x_17, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              ATerm a_18 = NULL;
              ATerm v_10;
              v_10 = t;
              {
                ATerm y_17 = NULL;
                ATerm z_17 = NULL;
                t = string_to_int_0(t);
                {
                  z_17 = t;
                  if(((y_17 != NULL) && (y_17 != z_17)))
                    _fail(z_17);
                  else
                    y_17 = z_17;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(y_17));
                  t = set_config_0(t);
                }
              }
              t = v_10;
              {
                ATerm b_18 = NULL;
                b_18 = t;
                if(((a_18 != NULL) && (a_18 != b_18)))
                  _fail(b_18);
                else
                  a_18 = b_18;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_18));
              }
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              t = term_w_10;
              return(t);
            }
            t = ArgOption_3(t, k_1, l_1, m_1);
            LocalPopChoice(u_10);
          }
        else
          {
            t = r_10;
            {
              ATerm n_1 (ATerm t)
              {
                ATerm c_18 = NULL;
                c_18 = t;
                v_17 :
                if(!(match_string(c_18, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_1 (ATerm t)
              {
                t = term_y_10;
                t = set_config_0(t);
                t = term_z_10;
                return(t);
              }
              ATerm p_1 (ATerm t)
              {
                t = term_e_11;
                return(t);
              }
              t = Option_3(t, n_1, o_1, p_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm f_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = f_11;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm i_18 = NULL;
    i_18 = t;
    f_18 :
    if(!(match_string(i_18, "-o")))
      {
        if(!(match_string(i_18, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm l_18 = NULL;
    ATerm n_11;
    n_11 = t;
    {
      ATerm j_18 = NULL;
      ATerm k_18 = NULL;
      k_18 = t;
      if(((j_18 != NULL) && (j_18 != k_18)))
        _fail(k_18);
      else
        j_18 = k_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(j_18));
        t = set_config_0(t);
      }
    }
    t = n_11;
    {
      ATerm m_18 = NULL;
      m_18 = t;
      if(((l_18 != NULL) && (l_18 != m_18)))
        _fail(m_18);
      else
        l_18 = m_18;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_18));
    }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_q_11;
    return(t);
  }
  t = ArgOption_3(t, q_1, r_1, s_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = r_11;
      {
        ATerm v_1 (ATerm t)
        {
          ATerm q_18 = NULL;
          q_18 = t;
          p_18 :
          if(!(match_string(q_18, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_1 (ATerm t)
        {
          t = term_y_11;
          t = set_config_0(t);
          t = term_z_11;
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          t = term_a_12;
          return(t);
        }
        t = Option_3(t, v_1, w_1, x_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  w_18 = t;
  u_18 :
  if(match_string(w_18, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_18) == AT_LIST) && !(ATisEmpty(w_18))))
        {
          x_18 = ATgetFirst((ATermList) w_18);
          y_18 = (ATerm) ATgetNext((ATermList) w_18);
          v_18 :
          if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
            {
              z_18 = ATgetFirst((ATermList) y_18);
              a_19 = (ATerm) ATgetNext((ATermList) y_18);
              {
                ATerm e_19 = NULL;
                ATerm b_12;
                b_12 = t;
                {
                  t = not_null(x_18);
                  t = j_0(t);
                }
                t = b_12;
                {
                  ATerm f_19 = NULL;
                  t = not_null(z_18);
                  {
                    t = k_0(t);
                    {
                      f_19 = t;
                      if(((e_19 != NULL) && (e_19 != f_19)))
                        _fail(f_19);
                      else
                        e_19 = f_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_19)), not_null(e_19));
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
  ATerm y_1 (ATerm t)
  {
    ATerm m_19 = NULL;
    m_19 = t;
    j_19 :
    if(!(match_string(m_19, "-i")))
      {
        if(!(match_string(m_19, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm p_19 = NULL;
    ATerm c_12;
    c_12 = t;
    {
      ATerm n_19 = NULL;
      ATerm o_19 = NULL;
      o_19 = t;
      if(((n_19 != NULL) && (n_19 != o_19)))
        _fail(o_19);
      else
        n_19 = o_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_12, not_null(n_19));
        t = set_config_0(t);
      }
    }
    t = c_12;
    {
      ATerm q_19 = NULL;
      q_19 = t;
      if(((p_19 != NULL) && (p_19 != q_19)))
        _fail(q_19);
      else
        p_19 = q_19;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_19));
    }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_j_12;
    return(t);
  }
  t = ArgOption_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm p_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(r_12);
          }
        else
          {
            t = p_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, term_w_12));
  {
    t = printnl_0(t);
    {
      t = term_d_4;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t = SSL_TicksToSeconds(not_null(u_19));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym__2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_20), not_null(b_20));
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = SSL_addr(not_null(a_20), not_null(b_20));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_82 (ATerm), ATerm t_82 (ATerm))
{
  ATerm z_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_82(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = z_12;
      {
        ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
        i_20 = t;
        h_20 :
        if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
          {
            j_20 = ATgetFirst((ATermList) i_20);
            k_20 = (ATerm) ATgetNext((ATermList) i_20);
            {
              ATerm n_20 = NULL;
              ATerm o_20 = NULL;
              t = not_null(k_20);
              {
                t = foldr_2(t, s_82, t_82);
                {
                  o_20 = t;
                  if(((n_20 != NULL) && (n_20 != o_20)))
                    _fail(o_20);
                  else
                    n_20 = o_20;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), not_null(n_20));
                t = t_82(t);
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
ATerm crush_2 (ATerm t, ATerm q_81 (ATerm), ATerm r_81 (ATerm))
{
  ATerm v_20 = NULL;
  ATerm x_20 = NULL;
  v_20 = t;
  {
    ATerm y_20 = NULL;
    ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
    t = not_null(v_20);
    {
      y_20 = t;
      {
        t = SSL_explode_term(not_null(y_20));
        {
          a_21 = t;
          u_20 :
          if(match_cons(a_21, sym__2))
            {
              b_21 = ATgetArgument(a_21, 0);
              c_21 = ATgetArgument(a_21, 1);
              if(((x_20 != NULL) && (x_20 != c_21)))
                _fail(c_21);
              else
                x_20 = c_21;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_20);
      t = foldr_2(t, q_81, r_81);
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
    ATerm b_2 (ATerm t)
    {
      t = term_j_10;
      return(t);
    }
    t = crush_2(t, b_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  h_21 :
  if(match_cons(i_21, sym__2))
    {
      j_21 = ATgetArgument(i_21, 0);
      k_21 = ATgetArgument(i_21, 1);
      {
        ATerm c_13;
        c_13 = t;
        {
          ATerm d_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_21), not_null(k_21));
              LocalPopChoice(f_13);
            }
          else
            {
              t = d_13;
              t = SSL_gtr(not_null(j_21), not_null(k_21));
            }
        }
        t = c_13;
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
  ATerm q_21 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
      r_21 = t;
      p_21 :
      if(match_cons(r_21, sym__2))
        {
          s_21 = ATgetArgument(r_21, 0);
          t_21 = ATgetArgument(r_21, 1);
          {
            if(((q_21 != NULL) && (q_21 != s_21)))
              _fail(s_21);
            else
              q_21 = s_21;
            if(((q_21 != NULL) && (q_21 != t_21)))
              _fail(t_21);
            else
              q_21 = t_21;
          }
        }
      else
        {
          _fail(t);
        }
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
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_13;
      k_13 = t;
      {
        ATerm w_21 = NULL;
        ATerm x_21 = NULL;
        t = term_e_8;
        {
          t = get_config_0(t);
          {
            x_21 = t;
            if(((w_21 != NULL) && (w_21 != x_21)))
              _fail(x_21);
            else
              w_21 = x_21;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), term_d_4);
          t = geq_0(t);
        }
      }
      t = k_13;
      t = p_95(t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm b_22 = NULL,d_22 = NULL;
    ATerm l_13;
    l_13 = t;
    {
      ATerm c_22 = NULL;
      t = run_time_0(t);
      {
        c_22 = t;
        if(((b_22 != NULL) && (b_22 != c_22)))
          _fail(c_22);
        else
          b_22 = c_22;
      }
    }
    t = l_13;
    {
      ATerm e_22 = NULL;
      t = term_q_13;
      {
        t = get_config_0(t);
        {
          e_22 = t;
          if(((d_22 != NULL) && (d_22 != e_22)))
            _fail(e_22);
          else
            d_22 = e_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_13), not_null(b_22)), term_r_13), not_null(d_22)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_2);
  {
    t = term_j_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Version_0))
    {
      ATerm n_22 = NULL,p_22 = NULL;
      ATerm t_13;
      t_13 = t;
      {
        ATerm o_22 = NULL;
        t = SSLgetAnnotations(not_null(l_22));
        {
          o_22 = t;
          if(((n_22 != NULL) && (n_22 != o_22)))
            _fail(o_22);
          else
            n_22 = o_22;
        }
      }
      t = t_13;
      {
        ATerm q_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
        t = not_null(p_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, f_2);
  t = h_70(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  t = SSL_table_create(not_null(v_22));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  {
    ATerm c_14;
    c_14 = t;
    {
      t = term_d_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_14, term_e_14, not_null(z_22));
          t = table_put_0(t);
        }
      }
    }
    t = c_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  t = SSL_table_destroy(not_null(d_23));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  t = SSL_exit(not_null(h_23));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  k_23 :
  if(((ATgetType(l_23) == AT_LIST) && ATisEmpty(l_23)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
        {
          m_23 = ATgetFirst((ATermList) l_23);
          n_23 = (ATerm) ATgetNext((ATermList) l_23);
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
    ATerm q_23 = NULL;
    ATerm t_23 = NULL;
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm r_23 = NULL;
          ATerm s_23 = NULL;
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
          t = (ATerm) ATinsert(ATempty, not_null(r_23));
        }
      }
    {
      t_23 = t;
      if(((q_23 != NULL) && (q_23 != t_23)))
        _fail(t_23);
      else
        q_23 = t_23;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(q_23));
      t = printnl_0(t);
    }
  }
  t = g_14;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm w_23 (ATerm t)
  {
    ATerm l_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = l_14;
        t = Cons_2(t, e_76, w_23);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  f_24 = t;
  c_24 :
  if(((ATgetType(f_24) == AT_LIST) && !(ATisEmpty(f_24))))
    {
      d_24 = ATgetFirst((ATermList) f_24);
      e_24 = (ATerm) ATgetNext((ATermList) f_24);
      {
        ATerm i_24 = NULL;
        t = not_null(e_24);
        {
          ATerm p_14;
          p_14 = t;
          {
            ATerm j_24 = NULL,l_24 = NULL,n_24 = NULL;
            ATerm u_14;
            u_14 = t;
            {
              ATerm k_24 = NULL;
              t = i_0(t);
              {
                k_24 = t;
                if(((j_24 != NULL) && (j_24 != k_24)))
                  _fail(k_24);
                else
                  j_24 = k_24;
              }
            }
            t = u_14;
            {
              ATerm m_24 = NULL;
              t = not_null(d_24);
              {
                t = h_0(t);
                {
                  m_24 = t;
                  if(((l_24 != NULL) && (l_24 != m_24)))
                    _fail(m_24);
                  else
                    l_24 = m_24;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_24)), not_null(l_24));
                {
                  n_24 = t;
                  if(((i_24 != NULL) && (i_24 != n_24)))
                    _fail(n_24);
                  else
                    i_24 = n_24;
                }
              }
            }
          }
          t = p_14;
          {
            ATerm i_2 (ATerm t)
            {
              t = not_null(i_24);
              return(t);
            }
            t = reverse_acc_2(t, h_0, i_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_24) == AT_LIST) && ATisEmpty(f_24)))
        {
          {
            t = term_s_4;
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
  ATerm m_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym_Program_1))
    {
      z_24 = ATgetArgument(y_24, 0);
      {
        ATerm c_25 = NULL,e_25 = NULL;
        ATerm d_25 = NULL;
        t = SSLgetAnnotations(not_null(y_24));
        {
          d_25 = t;
          if(((c_25 != NULL) && (c_25 != d_25)))
            _fail(d_25);
          else
            c_25 = d_25;
        }
        {
          t = not_null(z_24);
          {
            ATerm g_25 = NULL;
            t = h_69(t);
            {
              e_25 = t;
              {
                ATerm h_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_25)), not_null(c_25));
                {
                  h_25 = t;
                  if(((g_25 != NULL) && (g_25 != h_25)))
                    _fail(h_25);
                  else
                    g_25 = h_25;
                }
                t = not_null(g_25);
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
  ATerm u_26 = NULL;
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_26 = NULL;
      t = term_q_13;
      {
        t = get_config_0(t);
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
      }
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm s_2 (ATerm t)
        {
          ATerm t_2 (ATerm t)
          {
            ATerm w_26 = NULL;
            w_26 = t;
            if(((u_26 != NULL) && (u_26 != w_26)))
              _fail(w_26);
            else
              u_26 = w_26;
            return(t);
          }
          t = Program_1(t, t_2);
          return(t);
        }
        t = fetch_1(t, s_2);
      }
    }
  {
    t = term_x_14;
    {
      t = echo_0(t);
      {
        t = term_e_15;
        {
          t = table_get_0(t);
          {
            ATerm u_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, u_2);
            {
              ATerm v_2 (ATerm t)
              {
                ATerm z_26 = NULL;
                ATerm a_27 = NULL;
                a_27 = t;
                if(((z_26 != NULL) && (z_26 != a_27)))
                  _fail(a_27);
                else
                  z_26 = a_27;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_26)), term_f_15);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, v_2);
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
  ATerm h_15;
  h_15 = t;
  {
    ATerm k_27 = NULL;
    ATerm l_27 = NULL;
    l_27 = t;
    if(((k_27 != NULL) && (k_27 != l_27)))
      _fail(l_27);
    else
      k_27 = l_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, not_null(k_27)));
      t = printnl_0(t);
    }
  }
  t = h_15;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm o_15;
  o_15 = t;
  {
    t = s_71(t);
    t = debug_0(t);
  }
  t = o_15;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_69 (ATerm))
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
            ATerm f_28 = NULL;
            t = i_69(t);
            {
              y_27 = t;
              {
                ATerm g_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_27)), not_null(w_27));
                {
                  g_28 = t;
                  if(((f_28 != NULL) && (f_28 != g_28)))
                    _fail(g_28);
                  else
                    f_28 = g_28;
                }
                t = not_null(f_28);
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
ATerm fetch_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm l_28 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_76, _id);
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        t = Cons_2(t, _id, l_28);
      }
    return(t);
  }
  t = l_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_86 (ATerm))
{
  t = fetch_1(t, r_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Help_0))
    {
      ATerm v_28 = NULL,x_28 = NULL;
      ATerm r_15;
      r_15 = t;
      {
        ATerm w_28 = NULL;
        t = SSLgetAnnotations(not_null(q_28));
        {
          w_28 = t;
          if(((v_28 != NULL) && (v_28 != w_28)))
            _fail(w_28);
          else
            v_28 = w_28;
        }
      }
      t = r_15;
      {
        ATerm y_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_28));
        {
          y_28 = t;
          if(((x_28 != NULL) && (x_28 != y_28)))
            _fail(y_28);
          else
            x_28 = y_28;
        }
        t = not_null(x_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_75(t);
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
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
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  q_29 = t;
  m_29 :
  if(match_cons(q_29, sym__3))
    {
      r_29 = ATgetArgument(q_29, 0);
      s_29 = ATgetArgument(q_29, 1);
      t_29 = ATgetArgument(q_29, 2);
      {
        ATerm a_16;
        a_16 = t;
        {
          ATerm x_29 = NULL;
          ATerm y_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(s_29));
          {
            ATerm b_16 = t;
            int c_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_16);
              }
            else
              {
                t = b_16;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_29), not_null(s_29), (ATerm) ATinsert(CheckATermList(not_null(x_29)), not_null(t_29)));
            t = table_put_0(t);
          }
        }
        t = a_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm c_30 = NULL;
  ATerm d_30 = NULL;
  t = term_s_4;
  {
    t = w_87(t);
    {
      d_30 = t;
      if(((c_30 != NULL) && (c_30 != d_30)))
        _fail(d_30);
      else
        c_30 = d_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_15, term_d_15, not_null(c_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_string(j_30, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(j_30) == AT_LIST) && !(ATisEmpty(j_30))))
        {
          k_30 = ATgetFirst((ATermList) j_30);
          l_30 = (ATerm) ATgetNext((ATermList) j_30);
          {
            ATerm o_30 = NULL;
            ATerm d_16;
            d_16 = t;
            {
              t = not_null(k_30);
              t = a_0(t);
            }
            t = d_16;
            {
              ATerm p_30 = NULL;
              t = term_s_4;
              {
                t = d_0(t);
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
  ATerm y_2 (ATerm t)
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
  ATerm z_2 (ATerm t)
  {
    t = term_j_16;
    {
      t = set_config_0(t);
      t = term_k_16;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_n_16;
    return(t);
  }
  t = Option_3(t, y_2, z_2, a_3);
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
ATerm Cons_2 (ATerm t, ATerm l_57 (ATerm), ATerm m_57 (ATerm))
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
            t = l_57(t);
            {
              r_31 = t;
              {
                t = not_null(l_31);
                {
                  ATerm v_31 = NULL;
                  t = m_57(t);
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
        ATerm o_16;
        o_16 = t;
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
        t = o_16;
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
        t = (ATerm) ATmakeAppl(sym__3, term_m_7, not_null(s_32), not_null(t_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_87 (ATerm))
{
  ATerm p_16;
  p_16 = t;
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_16;
        t = u_87(t);
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        {
        }
      }
  }
  t = p_16;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm b_33 = NULL;
      ATerm y_16;
      y_16 = t;
      {
        ATerm z_32 = NULL;
        ATerm a_33 = NULL;
        a_33 = t;
        if(((z_32 != NULL) && (z_32 != a_33)))
          _fail(a_33);
        else
          z_32 = a_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_13, not_null(z_32));
          t = set_config_0(t);
        }
      }
      t = y_16;
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
    ATerm c_3 (ATerm t)
    {
      ATerm d_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_17);
            }
          else
            {
              t = i_17;
              {
                t = u_87(t);
                t = Cons_2(t, _id, c_3);
              }
            }
          LocalPopChoice(e_17);
        }
      else
        {
          t = d_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_3, c_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  ATerm n_17;
  n_17 = t;
  {
    ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
    m_33 = t;
    h_33 :
    if(match_cons(m_33, sym__3))
      {
        n_33 = ATgetArgument(m_33, 0);
        o_33 = ATgetArgument(m_33, 1);
        p_33 = ATgetArgument(m_33, 2);
        {
          if(((j_33 != NULL) && (j_33 != n_33)))
            _fail(n_33);
          else
            j_33 = n_33;
          {
            if(((k_33 != NULL) && (k_33 != o_33)))
              _fail(o_33);
            else
              k_33 = o_33;
            {
              if(((l_33 != NULL) && (l_33 != p_33)))
                _fail(p_33);
              else
                l_33 = p_33;
              t = SSL_table_put(not_null(j_33), not_null(k_33), not_null(l_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_87 (ATerm))
{
  ATerm s_33 = NULL;
  ATerm p_17;
  p_17 = t;
  {
    t = term_q_17;
    t = table_put_0(t);
  }
  t = p_17;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm t_17 = t;
      int u_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_87(t);
          LocalPopChoice(u_17);
        }
      else
        {
          t = t_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_3);
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_18;
          g_18 = t;
          {
            ATerm h_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_16;
                t = get_config_0(t);
                LocalPopChoice(n_18);
              }
            else
              {
                t = h_18;
                t = fetch_1(t, Help_0);
              }
          }
          t = g_18;
          {
            t = system_usage_0(t);
            {
              t = term_j_10;
              t = exit_0(t);
            }
          }
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          {
            ATerm o_18 = t;
            int r_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm o_3 (ATerm t)
                  {
                    ATerm t_33 = NULL;
                    t_33 = t;
                    if(((s_33 != NULL) && (s_33 != t_33)))
                      _fail(t_33);
                    else
                      s_33 = t_33;
                    return(t);
                  }
                  t = Undefined_1(t, o_3);
                  return(t);
                }
                t = fetch_1(t, e_3);
                {
                  ATerm p_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_33)), term_s_18);
                    return(t);
                  }
                  t = say_1(t, p_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_d_4;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(r_18);
              }
            else
              {
                t = o_18;
                {
                }
              }
          }
        }
      {
        ATerm t_18;
        t_18 = t;
        {
          t = term_c_15;
          t = table_destroy_0(t);
        }
        t = t_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm))
{
  t = parse_options_1(t, n_70);
  {
    t = store_options_0(t);
    {
      t = p_70(t);
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_70);
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            {
              ATerm d_19 = t;
              int g_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_70(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_19);
                }
              else
                {
                  t = d_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm h_71 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_71(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, e_71);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, q_3, g_71, h_71, x_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm k_19;
      k_19 = t;
      {
        ATerm w_33 = NULL;
        ATerm x_33 = NULL;
        t = term_q_13;
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
          t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, not_null(w_33)));
          t = printnl_0(t);
        }
      }
      t = k_19;
      return(t);
    }
    t = if_verbose2_1(t, a_4);
    return(t);
  }
  t = iowrap_4(t, y_70, z_70, a_71, z_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_70 (ATerm), ATerm x_70 (ATerm))
{
  t = iowrap_3(t, w_70, x_70, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_70 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    t = _2(t, _id, t_70);
    return(t);
  }
  t = iowrap_2(t, b_4, _fail);
  return(t);
}
ATerm io_tg2fc_0 (ATerm t)
{
  t = iowrap_1(t, tg_to_format_checker_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, tg_to_format_checker_0);
  return(t);
}
