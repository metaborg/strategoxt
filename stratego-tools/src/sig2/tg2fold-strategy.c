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
ATerm term_o_21;
ATerm term_v_20;
ATerm term_z_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_i_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_w_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_g_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_q_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_t_4;
ATerm term_p_4;
ATerm term_k_4;
ATerm term_j_4;
ATerm term_i_4;
ATerm term_h_4;
void init_constant_terms (void)
{
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_4);
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_i_4);
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_4);
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_p_4);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("to-s", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("to-", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("fold-strategy", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_5);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_RootApp_1, term_u_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("T2-", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("cond", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_h_6);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("transform", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_j_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("children", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_s_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("nt", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Var_1, term_u_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_6);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_w_6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("risky", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-strings", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_g_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nTransformation failed when trying to transform to ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Str_1, term_l_7);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n-------------\n", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Str_1, term_r_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_6);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_x_7);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nExpected ", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Str_1, term_d_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol(", but found:\n-------------\n", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Str_1, term_f_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_6);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_j_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_j_5);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_d_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_j_5);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_j_5);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_j_5);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__3, term_v_17, term_a_18, (ATerm) ATempty);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Snd_0 (ATerm);
ATerm arg_to_fold_arg_0 (ATerm);
ATerm prod_to_cong_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm to_Typedid_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm to_nt_paramname_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm x_77 (ATerm));
ATerm subt_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_88 (ATerm), ATerm n_88 (ATerm));
ATerm for_3 (ATerm, ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm));
ATerm copy_0 (ATerm);
ATerm int_to_int_list_0 (ATerm);
ATerm to_nt_0 (ATerm);
ATerm is_nt_0 (ATerm);
ATerm to_nt_sdef_0 (ATerm);
ATerm t2_nt_0 (ATerm);
ATerm t2_sdef_0 (ATerm);
ATerm T2_Module_0 (ATerm);
ATerm _2 (ATerm, ATerm a_56 (ATerm), ATerm b_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_76 (ATerm));
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
ATerm apply_strategy_1 (ATerm, ATerm h_70 (ATerm));
ATerm debug_1 (ATerm, ATerm p_71 (ATerm));
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
ATerm need_help_1 (ATerm, ATerm f_70 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_87 (ATerm));
ATerm map_1 (ATerm, ATerm c_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_87 (ATerm));
ATerm Program_1 (ATerm, ATerm f_69 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm g_69 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_57 (ATerm), ATerm k_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm o_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm f_71 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm y_70 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm iowrap_1 (ATerm, ATerm r_70 (ATerm));
ATerm io_tg2fold_strategy_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Snd_0 (ATerm t)
{
  ATerm y_1 = NULL;
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
  y_1 = t;
  {
    ATerm e_2 = NULL;
    ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
    t = not_null(y_1);
    {
      e_2 = t;
      {
        t = SSL_explode_term(not_null(e_2));
        {
          h_2 = t;
          g_1 :
          if(match_cons(h_2, sym__2))
            {
              i_2 = ATgetArgument(h_2, 0);
              j_2 = ATgetArgument(h_2, 1);
              s_1 :
              if(match_string(i_2, ""))
                {
                  t_1 :
                  if(((ATgetType(j_2) == AT_LIST) && !(ATisEmpty(j_2))))
                    {
                      k_2 = ATgetFirst((ATermList) j_2);
                      l_2 = (ATerm) ATgetNext((ATermList) j_2);
                      u_1 :
                      if(((ATgetType(l_2) == AT_LIST) && !(ATisEmpty(l_2))))
                        {
                          m_2 = ATgetFirst((ATermList) l_2);
                          n_2 = (ATerm) ATgetNext((ATermList) l_2);
                          {
                            if(((b_2 != NULL) && (b_2 != k_2)))
                              _fail(k_2);
                            else
                              b_2 = k_2;
                            {
                              if(((d_2 != NULL) && (d_2 != m_2)))
                                _fail(m_2);
                              else
                                d_2 = m_2;
                              if(((c_2 != NULL) && (c_2 != n_2)))
                                _fail(n_2);
                              else
                                c_2 = n_2;
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
    t = not_null(d_2);
  }
  return(t);
}
ATerm arg_to_fold_arg_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  a_3 = t;
  y_2 :
  if(match_cons(a_3, sym_Param_1))
    {
      b_3 = ATgetArgument(a_3, 0);
      {
        ATerm f_3 = NULL;
        ATerm g_3 = NULL;
        t = not_null(b_3);
        {
          t = to_nt_paramname_0(t);
          {
            g_3 = t;
            if(((f_3 != NULL) && (f_3 != g_3)))
              _fail(g_3);
            else
              f_3 = g_3;
          }
        }
        t = (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, not_null(f_3)));
      }
    }
  else
    {
      if(match_cons(a_3, sym_String_0))
        {
          t = term_j_4;
        }
      else
        {
          if(match_cons(a_3, sym_Int_0))
            {
              t = term_t_4;
            }
          else
            {
              if(match_cons(a_3, sym_NonTermRef_2))
                {
                  b_3 = ATgetArgument(a_3, 0);
                  d_3 = ATgetArgument(a_3, 1);
                  z_2 :
                  if(match_cons(b_3, sym_Id_1))
                    {
                      c_3 = ATgetArgument(b_3, 0);
                      {
                        ATerm j_3 = NULL,k_3 = NULL;
                        ATerm l_3 = NULL;
                        t = not_null(c_3);
                        {
                          ATerm m_3 = NULL;
                          t = to_nt_0(t);
                          {
                            l_3 = t;
                            {
                              if(((j_3 != NULL) && (j_3 != l_3)))
                                _fail(l_3);
                              else
                                j_3 = l_3;
                              {
                                t = not_null(d_3);
                                {
                                  t = map_1(t, arg_to_fold_arg_0);
                                  {
                                    m_3 = t;
                                    if(((k_3 != NULL) && (k_3 != m_3)))
                                      _fail(m_3);
                                    else
                                      k_3 = m_3;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_3)), not_null(k_3));
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
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  y_3 = t;
  w_3 :
  if(match_cons(y_3, sym_Prod_2))
    {
      z_3 = ATgetArgument(y_3, 0);
      b_4 = ATgetArgument(y_3, 1);
      x_3 :
      if(match_cons(z_3, sym_Id_1))
        {
          a_4 = ATgetArgument(z_3, 0);
          {
            ATerm e_4 = NULL;
            ATerm f_4 = NULL;
            t = not_null(b_4);
            {
              t = map_1(t, arg_to_fold_arg_0);
              {
                f_4 = t;
                if(((e_4 != NULL) && (e_4 != f_4)))
                  _fail(f_4);
                else
                  e_4 = f_4;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_4)), not_null(e_4));
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
  ATerm o_4 = NULL;
  ATerm q_4 = NULL,r_4 = NULL;
  o_4 = t;
  {
    ATerm s_4 = NULL;
    ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
    t = not_null(o_4);
    {
      s_4 = t;
      {
        t = SSL_explode_term(not_null(s_4));
        {
          u_4 = t;
          l_4 :
          if(match_cons(u_4, sym__2))
            {
              v_4 = ATgetArgument(u_4, 0);
              w_4 = ATgetArgument(u_4, 1);
              m_4 :
              if(match_string(v_4, ""))
                {
                  n_4 :
                  if(((ATgetType(w_4) == AT_LIST) && !(ATisEmpty(w_4))))
                    {
                      x_4 = ATgetFirst((ATermList) w_4);
                      y_4 = (ATerm) ATgetNext((ATermList) w_4);
                      {
                        if(((r_4 != NULL) && (r_4 != x_4)))
                          _fail(x_4);
                        else
                          r_4 = x_4;
                        if(((q_4 != NULL) && (q_4 != y_4)))
                          _fail(y_4);
                        else
                          q_4 = y_4;
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
    t = not_null(r_4);
  }
  return(t);
}
ATerm to_Typedid_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  {
    t = not_null(d_5);
    t = is_string_0(t);
    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(d_5));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm h_5 = NULL;
  h_5 = t;
  t = SSL_int_to_string(not_null(h_5));
  return(t);
}
ATerm to_nt_paramname_0 (ATerm t)
{
  ATerm l_5 = NULL;
  ATerm m_5 = NULL;
  t = int_to_string_0(t);
  {
    m_5 = t;
    if(((l_5 != NULL) && (l_5 != m_5)))
      _fail(m_5);
    else
      l_5 = m_5;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_4, not_null(l_5));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm p_5 = NULL;
  ATerm q_5 = NULL;
  q_5 = t;
  if(((p_5 != NULL) && (p_5 != q_5)))
    _fail(q_5);
  else
    p_5 = q_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_a_5);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm a_6 = NULL;
  ATerm b_6 = NULL;
  b_6 = t;
  if(((a_6 != NULL) && (a_6 != b_6)))
    _fail(b_6);
  else
    a_6 = b_6;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_5, not_null(a_6));
    {
      ATerm r_6 (ATerm t)
      {
        ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
        c_6 = t;
        y_5 :
        if(match_cons(c_6, sym__2))
          {
            d_6 = ATgetArgument(c_6, 0);
            e_6 = ATgetArgument(c_6, 1);
            z_5 :
            if(((ATgetType(e_6) == AT_LIST) && ATisEmpty(e_6)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(e_6) == AT_LIST) && !(ATisEmpty(e_6))))
                  {
                    f_6 = ATgetFirst((ATermList) e_6);
                    g_6 = (ATerm) ATgetNext((ATermList) e_6);
                    {
                      ATerm k_6 = NULL,m_6 = NULL;
                      ATerm b_5;
                      b_5 = t;
                      {
                        ATerm l_6 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(f_6));
                        {
                          t = x_77(t);
                          {
                            l_6 = t;
                            if(((k_6 != NULL) && (k_6 != l_6)))
                              _fail(l_6);
                            else
                              k_6 = l_6;
                          }
                        }
                      }
                      t = b_5;
                      {
                        ATerm n_6 = NULL,p_6 = NULL;
                        ATerm o_6 = NULL;
                        t = not_null(d_6);
                        {
                          t = inc_0(t);
                          {
                            o_6 = t;
                            if(((n_6 != NULL) && (n_6 != o_6)))
                              _fail(o_6);
                            else
                              n_6 = o_6;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_6), not_null(g_6));
                          {
                            t = r_6(t);
                            {
                              p_6 = t;
                              if(((m_6 != NULL) && (m_6 != p_6)))
                                _fail(p_6);
                              else
                                m_6 = p_6;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(m_6)), not_null(k_6));
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
      t = r_6(t);
    }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  z_6 = t;
  y_6 :
  if(match_cons(z_6, sym__2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      {
        ATerm c_5 = t;
        int e_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(a_7), not_null(b_7));
            LocalPopChoice(e_5);
          }
        else
          {
            t = c_5;
            t = SSL_subtr(not_null(a_7), not_null(b_7));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm m_88 (ATerm), ATerm n_88 (ATerm))
{
  ATerm f_7 (ATerm t)
  {
    ATerm f_5 = t;
    int g_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_88(t);
        LocalPopChoice(g_5);
      }
    else
      {
        t = f_5;
        {
          t = n_88(t);
          t = f_7(t);
        }
      }
    return(t);
  }
  t = f_7(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm))
{
  t = p_88(t);
  t = while_not_2(t, q_88, r_88);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
    o_7 = t;
    h_7 :
    if(match_cons(o_7, sym__2))
      {
        p_7 = ATgetArgument(o_7, 0);
        q_7 = ATgetArgument(o_7, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(p_7), not_null(q_7), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm c_0 (ATerm t)
  {
    ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
    t_7 = t;
    j_7 :
    if(match_cons(t_7, sym__3))
      {
        u_7 = ATgetArgument(t_7, 0);
        v_7 = ATgetArgument(t_7, 1);
        w_7 = ATgetArgument(t_7, 2);
        k_7 :
        if(match_int(u_7, 0))
          {
            t = not_null(w_7);
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
    ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
    z_7 = t;
    n_7 :
    if(match_cons(z_7, sym__3))
      {
        a_8 = ATgetArgument(z_7, 0);
        b_8 = ATgetArgument(z_7, 1);
        c_8 = ATgetArgument(z_7, 2);
        {
          ATerm g_8 = NULL;
          ATerm i_5;
          i_5 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), term_a_5);
            t = geq_0(t);
          }
          t = i_5;
          {
            ATerm h_8 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), term_a_5);
            {
              t = subt_0(t);
              {
                h_8 = t;
                if(((g_8 != NULL) && (g_8 != h_8)))
                  _fail(h_8);
                else
                  g_8 = h_8;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_8), not_null(b_8), (ATerm) ATinsert(CheckATermList(not_null(c_8)), not_null(b_8)));
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
  ATerm n_8 = NULL;
  ATerm o_8 = NULL;
  o_8 = t;
  if(((n_8 != NULL) && (n_8 != o_8)))
    _fail(o_8);
  else
    n_8 = o_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_8), term_j_5);
    {
      t = copy_0(t);
      t = map_with_index_1(t, Fst_0);
    }
  }
  return(t);
}
ATerm to_nt_0 (ATerm t)
{
  ATerm r_8 = NULL;
  ATerm s_8 = NULL;
  s_8 = t;
  if(((r_8 != NULL) && (r_8 != s_8)))
    _fail(s_8);
  else
    r_8 = s_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_5, not_null(r_8));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm is_nt_0 (ATerm t)
{
  ATerm v_8 = NULL;
  ATerm w_8 = NULL;
  w_8 = t;
  if(((v_8 != NULL) && (v_8 != w_8)))
    _fail(w_8);
  else
    v_8 = w_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_5, not_null(v_8));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm to_nt_sdef_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  i_9 = t;
  g_9 :
  if(match_cons(i_9, sym_NonTermDec_3))
    {
      j_9 = ATgetArgument(i_9, 0);
      l_9 = ATgetArgument(i_9, 1);
      m_9 = ATgetArgument(i_9, 2);
      h_9 :
      if(match_cons(j_9, sym_Id_1))
        {
          k_9 = ATgetArgument(j_9, 0);
          {
            ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
            ATerm v_9 = NULL;
            t = not_null(k_9);
            {
              ATerm w_9 = NULL;
              t = t2_nt_0(t);
              {
                v_9 = t;
                {
                  if(((q_9 != NULL) && (q_9 != v_9)))
                    _fail(v_9);
                  else
                    q_9 = v_9;
                  {
                    t = not_null(k_9);
                    {
                      ATerm x_9 = NULL;
                      t = is_nt_0(t);
                      {
                        w_9 = t;
                        {
                          if(((r_9 != NULL) && (r_9 != w_9)))
                            _fail(w_9);
                          else
                            r_9 = w_9;
                          {
                            t = not_null(k_9);
                            {
                              ATerm y_9 = NULL;
                              t = to_nt_0(t);
                              {
                                x_9 = t;
                                {
                                  if(((s_9 != NULL) && (s_9 != x_9)))
                                    _fail(x_9);
                                  else
                                    s_9 = x_9;
                                  {
                                    t = not_null(l_9);
                                    {
                                      t = int_to_int_list_0(t);
                                      {
                                        ATerm d_10 = NULL;
                                        ATerm f_0 (ATerm t)
                                        {
                                          t = to_nt_paramname_0(t);
                                          t = to_Typedid_0(t);
                                          return(t);
                                        }
                                        t = map_1(t, f_0);
                                        {
                                          y_9 = t;
                                          {
                                            if(((t_9 != NULL) && (t_9 != y_9)))
                                              _fail(y_9);
                                            else
                                              t_9 = y_9;
                                            {
                                              t = not_null(m_9);
                                              {
                                                ATerm m_0 (ATerm t)
                                                {
                                                  t = term_o_5;
                                                  return(t);
                                                }
                                                ATerm n_0 (ATerm t)
                                                {
                                                  ATerm z_9 = NULL,b_10 = NULL;
                                                  ATerm r_5;
                                                  r_5 = t;
                                                  {
                                                    ATerm a_10 = NULL;
                                                    t = Fst_0(t);
                                                    {
                                                      t = prod_to_cong_0(t);
                                                      {
                                                        a_10 = t;
                                                        if(((z_9 != NULL) && (z_9 != a_10)))
                                                          _fail(a_10);
                                                        else
                                                          z_9 = a_10;
                                                      }
                                                    }
                                                  }
                                                  t = r_5;
                                                  {
                                                    ATerm c_10 = NULL;
                                                    t = Snd_0(t);
                                                    {
                                                      c_10 = t;
                                                      if(((b_10 != NULL) && (b_10 != c_10)))
                                                        _fail(c_10);
                                                      else
                                                        b_10 = c_10;
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_9), not_null(b_10));
                                                  }
                                                  return(t);
                                                }
                                                t = foldr_2(t, m_0, n_0);
                                                {
                                                  d_10 = t;
                                                  if(((u_9 != NULL) && (u_9 != d_10)))
                                                    _fail(d_10);
                                                  else
                                                    u_9 = d_10;
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
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_9), not_null(t_9), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_t_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_9)), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, not_null(q_9)))), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, not_null(r_9))))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_v_5), (ATerm) ATmakeAppl(sym_Str_1, not_null(k_9))))));
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
  ATerm n_10 = NULL;
  ATerm o_10 = NULL;
  o_10 = t;
  if(((n_10 != NULL) && (n_10 != o_10)))
    _fail(o_10);
  else
    n_10 = o_10;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_5, not_null(n_10));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm t2_sdef_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  u_10 = t;
  s_10 :
  if(match_cons(u_10, sym_NonTermDec_3))
    {
      v_10 = ATgetArgument(u_10, 0);
      x_10 = ATgetArgument(u_10, 1);
      y_10 = ATgetArgument(u_10, 2);
      t_10 :
      if(match_cons(v_10, sym_Id_1))
        {
          w_10 = ATgetArgument(v_10, 0);
          {
            ATerm a_11 = NULL;
            ATerm b_11 = NULL;
            t = not_null(w_10);
            {
              t = t2_nt_0(t);
              {
                b_11 = t;
                if(((a_11 != NULL) && (a_11 != b_11)))
                  _fail(b_11);
                else
                  a_11 = b_11;
              }
            }
            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, not_null(a_11), term_o_5);
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
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_TreeGrammar_1))
    {
      j_11 = ATgetArgument(i_11, 0);
      {
        ATerm l_11 = NULL,m_11 = NULL;
        ATerm n_11 = NULL;
        t = not_null(j_11);
        {
          ATerm o_11 = NULL;
          t = map_1(t, t2_sdef_0);
          {
            n_11 = t;
            {
              if(((l_11 != NULL) && (l_11 != n_11)))
                _fail(n_11);
              else
                l_11 = n_11;
              {
                t = not_null(j_11);
                {
                  t = map_1(t, to_nt_sdef_0);
                  {
                    o_11 = t;
                    if(((m_11 != NULL) && (m_11 != o_11)))
                      _fail(o_11);
                    else
                      m_11 = o_11;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Module_2, term_x_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_s_5, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_t_6), term_q_6), term_i_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_v_5), term_v_6))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, term_x_6, term_u_5, (ATerm) ATmakeAppl(sym_Call_2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, term_y_7), (ATerm) ATmakeAppl(sym_BA_2, term_i_7, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), term_v_6), term_m_7)))))), (ATerm) ATmakeAppl(sym_Call_2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, term_k_8), (ATerm) ATmakeAppl(sym_BA_2, term_i_7, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), term_v_6), term_e_8))))))))))), (ATerm) ATmakeAppl(sym_Strategies_1, not_null(l_11))), (ATerm) ATmakeAppl(sym_Strategies_1, not_null(m_11))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_56 (ATerm), ATerm b_56 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym__2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      {
        ATerm e_12 = NULL,g_12 = NULL;
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(y_11));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
        {
          t = not_null(z_11);
          {
            ATerm i_12 = NULL;
            t = a_56(t);
            {
              g_12 = t;
              {
                t = not_null(a_12);
                {
                  ATerm k_12 = NULL;
                  t = b_56(t);
                  {
                    i_12 = t;
                    {
                      ATerm l_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_12), not_null(i_12)), not_null(e_12));
                      {
                        l_12 = t;
                        if(((k_12 != NULL) && (k_12 != l_12)))
                          _fail(l_12);
                        else
                          k_12 = l_12;
                      }
                      t = not_null(k_12);
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
  ATerm t_12 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm u_12 = NULL,v_12 = NULL;
      u_12 = t;
      s_12 :
      if(match_cons(u_12, sym_Program_1))
        {
          v_12 = ATgetArgument(u_12, 0);
          if(((t_12 != NULL) && (t_12 != v_12)))
            _fail(v_12);
          else
            t_12 = v_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, o_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_8), not_null(t_12)), term_p_8));
      {
        t = printnl_0(t);
        {
          t = term_a_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym__2))
    {
      a_13 = ATgetArgument(z_12, 0);
      b_13 = ATgetArgument(z_12, 1);
      {
        ATerm t_8;
        t_8 = t;
        t = SSL_printnl(not_null(a_13), not_null(b_13));
        t = t_8;
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
  ATerm g_13 = NULL;
  g_13 = t;
  t = SSL_implode_string(not_null(g_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = u_8;
      {
        ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
        l_13 = t;
        k_13 :
        if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
          {
            m_13 = ATgetFirst((ATermList) l_13);
            n_13 = (ATerm) ATgetNext((ATermList) l_13);
            {
              t = not_null(m_13);
              {
                ATerm p_0 (ATerm t)
                {
                  t = not_null(n_13);
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
  ATerm x_13 = NULL;
  ATerm z_13 = NULL;
  x_13 = t;
  {
    ATerm a_14 = NULL;
    ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
    t = not_null(x_13);
    {
      a_14 = t;
      {
        t = SSL_explode_term(not_null(a_14));
        {
          c_14 = t;
          v_13 :
          if(match_cons(c_14, sym__2))
            {
              d_14 = ATgetArgument(c_14, 0);
              e_14 = ATgetArgument(c_14, 1);
              w_13 :
              if(match_string(d_14, ""))
                {
                  if(((z_13 != NULL) && (z_13 != e_14)))
                    _fail(e_14);
                  else
                    z_13 = e_14;
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
      t = not_null(z_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_76 (ATerm))
{
  ATerm i_14 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_14);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        {
          t = Nil_0(t);
          t = r_76(t);
        }
      }
    return(t);
  }
  t = i_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym__2))
    {
      m_14 = ATgetArgument(l_14, 0);
      n_14 = ATgetArgument(l_14, 1);
      {
        t = not_null(m_14);
        {
          ATerm q_0 (ATerm t)
          {
            t = not_null(n_14);
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
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  t = SSL_explode_string(not_null(s_14));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  t = SSL_is_string(not_null(w_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              ATerm p_9 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = p_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, r_0);
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
              f_15 = t;
              e_15 :
              if(match_cons(f_15, sym_Path_1))
                {
                  g_15 = ATgetArgument(f_15, 0);
                  t = not_null(g_15);
                }
              else
                {
                  if(match_cons(f_15, sym_Var_1))
                    {
                      g_15 = ATgetArgument(f_15, 0);
                      {
                        t = not_null(g_15);
                        {
                          ATerm f_10 = t;
                          int g_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_10);
                            }
                          else
                            {
                              t = f_10;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_h_10;
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
                      if(match_cons(f_15, sym_Prefix_2))
                        {
                          g_15 = ATgetArgument(f_15, 0);
                          h_15 = ATgetArgument(f_15, 1);
                          {
                            ATerm m_15 = NULL,o_15 = NULL;
                            ATerm i_10;
                            i_10 = t;
                            {
                              ATerm n_15 = NULL;
                              t = not_null(g_15);
                              {
                                t = eval_config_0(t);
                                {
                                  n_15 = t;
                                  if(((m_15 != NULL) && (m_15 != n_15)))
                                    _fail(n_15);
                                  else
                                    m_15 = n_15;
                                }
                              }
                            }
                            t = i_10;
                            {
                              ATerm p_15 = NULL;
                              t = not_null(h_15);
                              {
                                t = eval_config_0(t);
                                {
                                  p_15 = t;
                                  if(((o_15 != NULL) && (o_15 != p_15)))
                                    _fail(p_15);
                                  else
                                    o_15 = p_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_15), not_null(o_15));
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
  ATerm x_15 = NULL;
  x_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(x_15));
    {
      t = table_get_0(t);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm m_10;
              m_10 = t;
              {
                ATerm z_15 = NULL;
                ATerm a_16 = NULL;
                a_16 = t;
                if(((z_15 != NULL) && (z_15 != a_16)))
                  _fail(a_16);
                else
                  z_15 = a_16;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_j_10, not_null(x_15), not_null(z_15));
                  t = table_put_0(t);
                }
              }
              t = m_10;
            }
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_95 (ATerm))
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_10;
      r_10 = t;
      {
        ATerm e_16 = NULL;
        ATerm f_16 = NULL;
        t = term_z_10;
        {
          t = get_config_0(t);
          {
            f_16 = t;
            if(((e_16 != NULL) && (e_16 != f_16)))
              _fail(f_16);
            else
              e_16 = f_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), term_c_11);
          t = geq_0(t);
        }
      }
      t = r_10;
      t = o_95(t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym__2))
    {
      k_16 = ATgetArgument(j_16, 0);
      l_16 = ATgetArgument(j_16, 1);
      t = SSL_WriteToTextFile(not_null(k_16), not_null(l_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym__2))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      t = SSL_WriteToBinaryFile(not_null(s_16), not_null(t_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_17 = NULL;
  ATerm d_11;
  d_11 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm e_11 = t;
      int f_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            ATerm c_17 = NULL,d_17 = NULL;
            c_17 = t;
            y_16 :
            if(match_cons(c_17, sym_Output_1))
              {
                d_17 = ATgetArgument(c_17, 0);
                if(((b_17 != NULL) && (b_17 != d_17)))
                  _fail(d_17);
                else
                  b_17 = d_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, u_0);
          LocalPopChoice(f_11);
        }
      else
        {
          t = e_11;
          {
            ATerm e_17 = NULL;
            t = term_g_11;
            {
              e_17 = t;
              if(((b_17 != NULL) && (b_17 != e_17)))
                _fail(e_17);
              else
                b_17 = e_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, t_0, _id);
  }
  t = d_11;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm w_0 (ATerm t)
      {
        t = not_null(b_17);
        return(t);
      }
      t = split_2(t, w_0, _id);
      return(t);
    }
    t = _2(t, _id, v_0);
    {
      ATerm k_11 = t;
      int p_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            ATerm y_0 (ATerm t)
            {
              ATerm f_17 = NULL;
              f_17 = t;
              a_17 :
              if(!(match_cons(f_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, y_0);
            return(t);
          }
          t = _2(t, x_0, WriteToBinaryFile_0);
          LocalPopChoice(p_11);
        }
      else
        {
          t = k_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm l_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  ATerm q_11;
  q_11 = t;
  t = dtime_0(t);
  t = q_11;
  {
    t = h_70(t);
    {
      ATerm r_11;
      r_11 = t;
      {
        ATerm m_17 = NULL;
        t = dtime_0(t);
        {
          m_17 = t;
          if(((l_17 != NULL) && (l_17 != m_17)))
            _fail(m_17);
          else
            l_17 = m_17;
        }
      }
      t = r_11;
      {
        n_17 = t;
        k_17 :
        if(match_cons(n_17, sym__2))
          {
            o_17 = ATgetArgument(n_17, 0);
            p_17 = ATgetArgument(n_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_17))), not_null(p_17));
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
ATerm debug_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm s_11;
  s_11 = t;
  {
    ATerm w_17 = NULL,y_17 = NULL;
    ATerm t_11;
    t_11 = t;
    {
      ATerm x_17 = NULL;
      t = p_71(t);
      {
        x_17 = t;
        if(((w_17 != NULL) && (w_17 != x_17)))
          _fail(x_17);
        else
          w_17 = x_17;
      }
    }
    t = t_11;
    {
      ATerm z_17 = NULL;
      z_17 = t;
      if(((y_17 != NULL) && (y_17 != z_17)))
        _fail(z_17);
      else
        y_17 = z_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_17)), not_null(w_17)));
        t = printnl_0(t);
      }
    }
  }
  t = s_11;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_18 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_18 = NULL;
      e_18 = t;
      {
        if(((d_18 != NULL) && (d_18 != e_18)))
          _fail(e_18);
        else
          d_18 = e_18;
        t = SSL_ReadFromFile(not_null(d_18));
      }
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_w_11;
          return(t);
        }
        t = debug_1(t, z_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_84 (ATerm), ATerm g_84 (ATerm))
{
  ATerm i_18 = NULL,k_18 = NULL;
  ATerm b_12;
  b_12 = t;
  {
    ATerm j_18 = NULL;
    t = f_84(t);
    {
      j_18 = t;
      if(((i_18 != NULL) && (i_18 != j_18)))
        _fail(j_18);
      else
        i_18 = j_18;
    }
  }
  t = b_12;
  {
    ATerm l_18 = NULL;
    t = g_84(t);
    {
      l_18 = t;
      if(((k_18 != NULL) && (k_18 != l_18)))
        _fail(l_18);
      else
        k_18 = l_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_18), not_null(k_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_18 = NULL;
  ATerm c_12;
  c_12 = t;
  {
    ATerm d_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 (ATerm t)
        {
          ATerm s_18 = NULL,t_18 = NULL;
          s_18 = t;
          p_18 :
          if(match_cons(s_18, sym_Input_1))
            {
              t_18 = ATgetArgument(s_18, 0);
              if(((r_18 != NULL) && (r_18 != t_18)))
                _fail(t_18);
              else
                r_18 = t_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, a_1);
        LocalPopChoice(h_12);
      }
    else
      {
        t = d_12;
        {
          ATerm u_18 = NULL;
          t = term_j_12;
          {
            u_18 = t;
            if(((r_18 != NULL) && (r_18 != u_18)))
              _fail(u_18);
            else
              r_18 = u_18;
          }
        }
      }
  }
  t = c_12;
  {
    ATerm b_1 (ATerm t)
    {
      t = not_null(r_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm y_18 = NULL;
    y_18 = t;
    x_18 :
    if(!(match_string(y_18, "-v")))
      {
        if(!(match_string(y_18, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_n_12;
    t = set_config_0(t);
    t = term_o_12;
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_p_12;
    return(t);
  }
  t = Option_3(t, c_1, d_1, e_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm b_19 = NULL;
    b_19 = t;
    z_18 :
    if(!(match_string(b_19, "-k")))
      {
        if(!(match_string(b_19, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm q_12;
    q_12 = t;
    {
      ATerm c_19 = NULL;
      ATerm d_19 = NULL;
      t = string_to_int_0(t);
      {
        d_19 = t;
        if(((c_19 != NULL) && (c_19 != d_19)))
          _fail(d_19);
        else
          c_19 = d_19;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(c_19));
        t = set_config_0(t);
      }
    }
    t = q_12;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_w_12;
    return(t);
  }
  t = ArgOption_3(t, f_1, h_1, i_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_string_to_int(not_null(g_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_12 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm o_19 = NULL;
        o_19 = t;
        j_19 :
        if(!(match_string(o_19, "-S")))
          {
            if(!(match_string(o_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = term_e_13;
        t = set_config_0(t);
        t = term_f_13;
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_h_13;
        return(t);
      }
      t = Option_3(t, j_1, k_1, l_1);
      LocalPopChoice(c_13);
    }
  else
    {
      t = x_12;
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm p_19 = NULL;
              p_19 = t;
              k_19 :
              if(!(match_string(p_19, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              ATerm s_19 = NULL;
              ATerm o_13;
              o_13 = t;
              {
                ATerm q_19 = NULL;
                ATerm r_19 = NULL;
                t = string_to_int_0(t);
                {
                  r_19 = t;
                  if(((q_19 != NULL) && (q_19 != r_19)))
                    _fail(r_19);
                  else
                    q_19 = r_19;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(q_19));
                  t = set_config_0(t);
                }
              }
              t = o_13;
              {
                ATerm t_19 = NULL;
                t_19 = t;
                if(((s_19 != NULL) && (s_19 != t_19)))
                  _fail(t_19);
                else
                  s_19 = t_19;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_19));
              }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              t = term_p_13;
              return(t);
            }
            t = ArgOption_3(t, m_1, n_1, o_1);
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm p_1 (ATerm t)
              {
                ATerm u_19 = NULL;
                u_19 = t;
                n_19 :
                if(!(match_string(u_19, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_1 (ATerm t)
              {
                t = term_r_13;
                t = set_config_0(t);
                t = term_s_13;
                return(t);
              }
              ATerm r_1 (ATerm t)
              {
                t = term_t_13;
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
  ATerm u_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = u_13;
      {
        ATerm b_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(f_14);
          }
        else
          {
            t = b_14;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm a_20 = NULL;
    a_20 = t;
    x_19 :
    if(!(match_string(a_20, "-o")))
      {
        if(!(match_string(a_20, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm d_20 = NULL;
    ATerm g_14;
    g_14 = t;
    {
      ATerm b_20 = NULL;
      ATerm c_20 = NULL;
      c_20 = t;
      if(((b_20 != NULL) && (b_20 != c_20)))
        _fail(c_20);
      else
        b_20 = c_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_14, not_null(b_20));
        t = set_config_0(t);
      }
    }
    t = g_14;
    {
      ATerm e_20 = NULL;
      e_20 = t;
      if(((d_20 != NULL) && (d_20 != e_20)))
        _fail(e_20);
      else
        d_20 = e_20;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_20));
    }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_j_14;
    return(t);
  }
  t = ArgOption_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm i_20 = NULL;
          i_20 = t;
          h_20 :
          if(!(match_string(i_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm a_2 (ATerm t)
        {
          t = term_r_14;
          t = set_config_0(t);
          t = term_t_14;
          return(t);
        }
        ATerm f_2 (ATerm t)
        {
          t = term_u_14;
          return(t);
        }
        t = Option_3(t, z_1, a_2, f_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  o_20 = t;
  m_20 :
  if(match_string(o_20, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
        {
          p_20 = ATgetFirst((ATermList) o_20);
          q_20 = (ATerm) ATgetNext((ATermList) o_20);
          n_20 :
          if(((ATgetType(q_20) == AT_LIST) && !(ATisEmpty(q_20))))
            {
              r_20 = ATgetFirst((ATermList) q_20);
              s_20 = (ATerm) ATgetNext((ATermList) q_20);
              {
                ATerm w_20 = NULL;
                ATerm v_14;
                v_14 = t;
                {
                  t = not_null(p_20);
                  t = j_0(t);
                }
                t = v_14;
                {
                  ATerm x_20 = NULL;
                  t = not_null(r_20);
                  {
                    t = k_0(t);
                    {
                      x_20 = t;
                      if(((w_20 != NULL) && (w_20 != x_20)))
                        _fail(x_20);
                      else
                        w_20 = x_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_20)), not_null(w_20));
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
  ATerm g_2 (ATerm t)
  {
    ATerm e_21 = NULL;
    e_21 = t;
    b_21 :
    if(!(match_string(e_21, "-i")))
      {
        if(!(match_string(e_21, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm h_21 = NULL;
    ATerm x_14;
    x_14 = t;
    {
      ATerm f_21 = NULL;
      ATerm g_21 = NULL;
      g_21 = t;
      if(((f_21 != NULL) && (f_21 != g_21)))
        _fail(g_21);
      else
        f_21 = g_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(f_21));
        t = set_config_0(t);
      }
    }
    t = x_14;
    {
      ATerm i_21 = NULL;
      i_21 = t;
      if(((h_21 != NULL) && (h_21 != i_21)))
        _fail(i_21);
      else
        h_21 = i_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_21));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_z_14;
    return(t);
  }
  t = ArgOption_3(t, g_2, o_2, p_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, term_i_15));
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
  ATerm m_21 = NULL;
  m_21 = t;
  t = SSL_TicksToSeconds(not_null(m_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym__2))
    {
      s_21 = ATgetArgument(r_21, 0);
      t_21 = ATgetArgument(r_21, 1);
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_21), not_null(t_21));
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            t = SSL_addr(not_null(s_21), not_null(t_21));
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
  ATerm l_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_82(t);
      LocalPopChoice(q_15);
    }
  else
    {
      t = l_15;
      {
        ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
        a_22 = t;
        z_21 :
        if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
          {
            b_22 = ATgetFirst((ATermList) a_22);
            c_22 = (ATerm) ATgetNext((ATermList) a_22);
            {
              ATerm f_22 = NULL;
              ATerm g_22 = NULL;
              t = not_null(c_22);
              {
                t = foldr_2(t, q_82, r_82);
                {
                  g_22 = t;
                  if(((f_22 != NULL) && (f_22 != g_22)))
                    _fail(g_22);
                  else
                    f_22 = g_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_22), not_null(f_22));
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
  ATerm n_22 = NULL;
  ATerm p_22 = NULL;
  n_22 = t;
  {
    ATerm q_22 = NULL;
    ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
    t = not_null(n_22);
    {
      q_22 = t;
      {
        t = SSL_explode_term(not_null(q_22));
        {
          s_22 = t;
          m_22 :
          if(match_cons(s_22, sym__2))
            {
              t_22 = ATgetArgument(s_22, 0);
              u_22 = ATgetArgument(s_22, 1);
              if(((p_22 != NULL) && (p_22 != u_22)))
                _fail(u_22);
              else
                p_22 = u_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_22);
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
    ATerm q_2 (ATerm t)
    {
      t = term_d_13;
      return(t);
    }
    t = crush_2(t, q_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
  a_23 = t;
  z_22 :
  if(match_cons(a_23, sym__2))
    {
      b_23 = ATgetArgument(a_23, 0);
      c_23 = ATgetArgument(a_23, 1);
      {
        ATerm r_15;
        r_15 = t;
        {
          ATerm s_15 = t;
          int t_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_23), not_null(c_23));
              LocalPopChoice(t_15);
            }
          else
            {
              t = s_15;
              t = SSL_gtr(not_null(b_23), not_null(c_23));
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
  ATerm i_23 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
      j_23 = t;
      h_23 :
      if(match_cons(j_23, sym__2))
        {
          k_23 = ATgetArgument(j_23, 0);
          l_23 = ATgetArgument(j_23, 1);
          {
            if(((i_23 != NULL) && (i_23 != k_23)))
              _fail(k_23);
            else
              i_23 = k_23;
            if(((i_23 != NULL) && (i_23 != l_23)))
              _fail(l_23);
            else
              i_23 = l_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm w_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16;
      b_16 = t;
      {
        ATerm o_23 = NULL;
        ATerm p_23 = NULL;
        t = term_z_10;
        {
          t = get_config_0(t);
          {
            p_23 = t;
            if(((o_23 != NULL) && (o_23 != p_23)))
              _fail(p_23);
            else
              o_23 = p_23;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), term_a_5);
          t = geq_0(t);
        }
      }
      t = b_16;
      t = n_95(t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = w_15;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm t_23 = NULL,v_23 = NULL;
    ATerm c_16;
    c_16 = t;
    {
      ATerm u_23 = NULL;
      t = run_time_0(t);
      {
        u_23 = t;
        if(((t_23 != NULL) && (t_23 != u_23)))
          _fail(u_23);
        else
          t_23 = u_23;
      }
    }
    t = c_16;
    {
      ATerm w_23 = NULL;
      t = term_d_16;
      {
        t = get_config_0(t);
        {
          w_23 = t;
          if(((v_23 != NULL) && (v_23 != w_23)))
            _fail(w_23);
          else
            v_23 = w_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_16), not_null(t_23)), term_g_16), not_null(v_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_2);
  {
    t = term_d_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym_Version_0))
    {
      ATerm f_24 = NULL,h_24 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm g_24 = NULL;
        t = SSLgetAnnotations(not_null(d_24));
        {
          g_24 = t;
          if(((f_24 != NULL) && (f_24 != g_24)))
            _fail(g_24);
          else
            f_24 = g_24;
        }
      }
      t = m_16;
      {
        ATerm i_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_24));
        {
          i_24 = t;
          if(((h_24 != NULL) && (h_24 != i_24)))
            _fail(i_24);
          else
            h_24 = i_24;
        }
        t = not_null(h_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          ATerm p_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_16);
            }
          else
            {
              t = p_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, s_2);
  t = f_70(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  t = SSL_table_create(not_null(n_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  {
    ATerm v_16;
    v_16 = t;
    {
      t = term_w_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_16, term_x_16, not_null(r_24));
          t = table_put_0(t);
        }
      }
    }
    t = v_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = SSL_table_destroy(not_null(v_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = SSL_exit(not_null(z_24));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  c_25 :
  if(((ATgetType(d_25) == AT_LIST) && ATisEmpty(d_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_25) == AT_LIST) && !(ATisEmpty(d_25))))
        {
          e_25 = ATgetFirst((ATermList) d_25);
          f_25 = (ATerm) ATgetNext((ATermList) d_25);
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
  ATerm z_16;
  z_16 = t;
  {
    ATerm m_26 = NULL;
    ATerm p_26 = NULL;
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        {
          ATerm n_26 = NULL;
          ATerm o_26 = NULL;
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
          t = (ATerm) ATinsert(ATempty, not_null(n_26));
        }
      }
    {
      p_26 = t;
      if(((m_26 != NULL) && (m_26 != p_26)))
        _fail(p_26);
      else
        m_26 = p_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_11, not_null(m_26));
      t = printnl_0(t);
    }
  }
  t = z_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_76 (ATerm))
{
  ATerm s_26 (ATerm t)
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = Cons_2(t, c_76, s_26);
      }
    return(t);
  }
  t = s_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  i_27 = t;
  a_27 :
  if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
    {
      g_27 = ATgetFirst((ATermList) i_27);
      h_27 = (ATerm) ATgetNext((ATermList) i_27);
      {
        ATerm l_27 = NULL;
        t = not_null(h_27);
        {
          ATerm q_17;
          q_17 = t;
          {
            ATerm m_27 = NULL,o_27 = NULL,q_27 = NULL;
            ATerm r_17;
            r_17 = t;
            {
              ATerm n_27 = NULL;
              t = i_0(t);
              {
                n_27 = t;
                if(((m_27 != NULL) && (m_27 != n_27)))
                  _fail(n_27);
                else
                  m_27 = n_27;
              }
            }
            t = r_17;
            {
              ATerm p_27 = NULL;
              t = not_null(g_27);
              {
                t = h_0(t);
                {
                  p_27 = t;
                  if(((o_27 != NULL) && (o_27 != p_27)))
                    _fail(p_27);
                  else
                    o_27 = p_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_27)), not_null(o_27));
                {
                  q_27 = t;
                  if(((l_27 != NULL) && (l_27 != q_27)))
                    _fail(q_27);
                  else
                    l_27 = q_27;
                }
              }
            }
          }
          t = q_17;
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(l_27);
              return(t);
            }
            t = reverse_acc_2(t, h_0, t_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_27) == AT_LIST) && ATisEmpty(i_27)))
        {
          {
            t = term_j_5;
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
  ATerm u_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_69 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_Program_1))
    {
      h_28 = ATgetArgument(g_28, 0);
      {
        ATerm k_28 = NULL,m_28 = NULL;
        ATerm l_28 = NULL;
        t = SSLgetAnnotations(not_null(g_28));
        {
          l_28 = t;
          if(((k_28 != NULL) && (k_28 != l_28)))
            _fail(l_28);
          else
            k_28 = l_28;
        }
        {
          t = not_null(h_28);
          {
            ATerm o_28 = NULL;
            t = f_69(t);
            {
              m_28 = t;
              {
                ATerm p_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_28)), not_null(k_28));
                {
                  p_28 = t;
                  if(((o_28 != NULL) && (o_28 != p_28)))
                    _fail(p_28);
                  else
                    o_28 = p_28;
                }
                t = not_null(o_28);
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
  ATerm a_29 = NULL;
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL;
      t = term_d_16;
      {
        t = get_config_0(t);
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
      }
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm v_2 (ATerm t)
        {
          ATerm w_2 (ATerm t)
          {
            ATerm c_29 = NULL;
            c_29 = t;
            if(((a_29 != NULL) && (a_29 != c_29)))
              _fail(c_29);
            else
              a_29 = c_29;
            return(t);
          }
          t = Program_1(t, w_2);
          return(t);
        }
        t = fetch_1(t, v_2);
      }
    }
  {
    t = term_u_17;
    {
      t = echo_0(t);
      {
        t = term_b_18;
        {
          t = table_get_0(t);
          {
            ATerm x_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, x_2);
            {
              ATerm e_3 (ATerm t)
              {
                ATerm d_29 = NULL;
                ATerm e_29 = NULL;
                e_29 = t;
                if(((d_29 != NULL) && (d_29 != e_29)))
                  _fail(e_29);
                else
                  d_29 = e_29;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_29)), term_c_18);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, e_3);
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
  ATerm f_18;
  f_18 = t;
  {
    ATerm j_29 = NULL;
    ATerm k_29 = NULL;
    k_29 = t;
    if(((j_29 != NULL) && (j_29 != k_29)))
      _fail(k_29);
    else
      j_29 = k_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(j_29)));
      t = printnl_0(t);
    }
  }
  t = f_18;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm g_18;
  g_18 = t;
  {
    t = q_71(t);
    t = debug_0(t);
  }
  t = g_18;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_69 (ATerm))
{
  ATerm u_29 = NULL,v_29 = NULL;
  u_29 = t;
  t_29 :
  if(match_cons(u_29, sym_Undefined_1))
    {
      v_29 = ATgetArgument(u_29, 0);
      {
        ATerm y_29 = NULL,a_30 = NULL;
        ATerm z_29 = NULL;
        t = SSLgetAnnotations(not_null(u_29));
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
            t = g_69(t);
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
ATerm fetch_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm i_30 (ATerm t)
  {
    ATerm h_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_76, _id);
        LocalPopChoice(m_18);
      }
    else
      {
        t = h_18;
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
      ATerm n_18;
      n_18 = t;
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
      t = n_18;
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
ATerm try_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm o_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_75(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = o_18;
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
        ATerm v_18;
        v_18 = t;
        {
          ATerm o_31 = NULL;
          ATerm p_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), not_null(j_31));
          {
            ATerm w_18 = t;
            int a_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_19);
              }
            else
              {
                t = w_18;
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
        t = v_18;
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
  t = term_j_5;
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
    t = (ATerm) ATmakeAppl(sym__3, term_v_17, term_a_18, not_null(t_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_string(a_32, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
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
              t = term_j_5;
              {
                t = d_0(t);
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
  ATerm h_3 (ATerm t)
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
  ATerm i_3 (ATerm t)
  {
    t = term_h_19;
    {
      t = set_config_0(t);
      t = term_i_19;
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_l_19;
    return(t);
  }
  t = Option_3(t, h_3, i_3, n_3);
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
ATerm Cons_2 (ATerm t, ATerm j_57 (ATerm), ATerm k_57 (ATerm))
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
    {
      b_33 = ATgetFirst((ATermList) a_33);
      c_33 = (ATerm) ATgetNext((ATermList) a_33);
      {
        ATerm h_33 = NULL,j_33 = NULL;
        ATerm i_33 = NULL;
        t = SSLgetAnnotations(not_null(a_33));
        {
          i_33 = t;
          if(((h_33 != NULL) && (h_33 != i_33)))
            _fail(i_33);
          else
            h_33 = i_33;
        }
        {
          t = not_null(b_33);
          {
            ATerm l_33 = NULL;
            t = j_57(t);
            {
              j_33 = t;
              {
                t = not_null(c_33);
                {
                  ATerm n_33 = NULL;
                  t = k_57(t);
                  {
                    l_33 = t;
                    {
                      ATerm o_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_33)), not_null(j_33)), not_null(h_33));
                      {
                        o_33 = t;
                        if(((n_33 != NULL) && (n_33 != o_33)))
                          _fail(o_33);
                        else
                          n_33 = o_33;
                      }
                      t = not_null(n_33);
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
        ATerm m_19;
        m_19 = t;
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
        t = m_19;
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
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
  l_34 = t;
  k_34 :
  if(match_cons(l_34, sym__2))
    {
      m_34 = ATgetArgument(l_34, 0);
      n_34 = ATgetArgument(l_34, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_10, not_null(m_34), not_null(n_34));
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
    ATerm w_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_19;
        t = s_87(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = w_19;
        {
        }
      }
  }
  t = v_19;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm c_35 = NULL;
      ATerm f_20;
      f_20 = t;
      {
        ATerm a_35 = NULL;
        ATerm b_35 = NULL;
        b_35 = t;
        if(((a_35 != NULL) && (a_35 != b_35)))
          _fail(b_35);
        else
          a_35 = b_35;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_16, not_null(a_35));
          t = set_config_0(t);
        }
      }
      t = f_20;
      {
        ATerm d_35 = NULL;
        d_35 = t;
        if(((c_35 != NULL) && (c_35 != d_35)))
          _fail(d_35);
        else
          c_35 = d_35;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_35));
      }
      return(t);
    }
    ATerm p_3 (ATerm t)
    {
      ATerm g_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_20);
            }
          else
            {
              t = k_20;
              {
                t = s_87(t);
                t = Cons_2(t, _id, p_3);
              }
            }
          LocalPopChoice(j_20);
        }
      else
        {
          t = g_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_3, p_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  ATerm t_20;
  t_20 = t;
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
  t = t_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm s_35 = NULL;
  ATerm u_20;
  u_20 = t;
  {
    t = term_v_20;
    t = table_put_0(t);
  }
  t = u_20;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm y_20 = t;
      int z_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_87(t);
          LocalPopChoice(z_20);
        }
      else
        {
          t = y_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_3);
    {
      ATerm a_21 = t;
      int c_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_21;
          d_21 = t;
          {
            ATerm j_21 = t;
            int k_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_f_19;
                t = get_config_0(t);
                LocalPopChoice(k_21);
              }
            else
              {
                t = j_21;
                t = fetch_1(t, Help_0);
              }
          }
          t = d_21;
          {
            t = system_usage_0(t);
            {
              t = term_d_13;
              t = exit_0(t);
            }
          }
          LocalPopChoice(c_21);
        }
      else
        {
          t = a_21;
          {
            ATerm l_21 = t;
            int n_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_3 (ATerm t)
                {
                  ATerm s_3 (ATerm t)
                  {
                    ATerm t_35 = NULL;
                    t_35 = t;
                    if(((s_35 != NULL) && (s_35 != t_35)))
                      _fail(t_35);
                    else
                      s_35 = t_35;
                    return(t);
                  }
                  t = Undefined_1(t, s_3);
                  return(t);
                }
                t = fetch_1(t, r_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_35)), term_o_21);
                    return(t);
                  }
                  t = say_1(t, t_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_a_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(n_21);
              }
            else
              {
                t = l_21;
                {
                }
              }
          }
        }
      {
        ATerm p_21;
        p_21 = t;
        {
          t = term_v_17;
          t = table_destroy_0(t);
        }
        t = p_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm o_70 (ATerm))
{
  t = parse_options_1(t, l_70);
  {
    t = store_options_0(t);
    {
      t = n_70(t);
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_70);
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_70(t);
                  t = report_success_0(t);
                  LocalPopChoice(x_21);
                }
              else
                {
                  t = w_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm f_71 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm y_21 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_71(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = y_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, c_71);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_3, e_71, f_71, v_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      ATerm e_22;
      e_22 = t;
      {
        ATerm w_35 = NULL;
        ATerm c_36 = NULL;
        t = term_d_16;
        {
          t = get_config_0(t);
          {
            c_36 = t;
            if(((w_35 != NULL) && (w_35 != c_36)))
              _fail(c_36);
            else
              w_35 = c_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(w_35)));
          t = printnl_0(t);
        }
      }
      t = e_22;
      return(t);
    }
    t = if_verbose2_1(t, d_4);
    return(t);
  }
  t = iowrap_4(t, w_70, x_70, y_70, c_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  t = iowrap_3(t, u_70, v_70, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = _2(t, _id, r_70);
    return(t);
  }
  t = iowrap_2(t, g_4, _fail);
  return(t);
}
ATerm io_tg2fold_strategy_0 (ATerm t)
{
  t = iowrap_1(t, T2_Module_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, T2_Module_0);
  return(t);
}