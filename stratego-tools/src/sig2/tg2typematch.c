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
ATerm term_c_17;
ATerm term_i_16;
ATerm term_t_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_s_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_h_7;
ATerm term_o_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_u_5;
ATerm term_s_5;
ATerm term_i_4;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_d_4;
ATerm term_y_3;
ATerm term_x_3;
ATerm term_w_3;
void init_constant_terms (void)
{
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_q_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_h_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_q_7);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_q_7);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_b_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_q_7);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, (ATerm) ATempty);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm create_call_0 (ATerm);
ATerm to_TypeMatch_Strat_0 (ATerm);
ATerm to_TypeMatch_SDef_0 (ATerm);
ATerm tg_to_stratego_typematch_0 (ATerm);
ATerm _2 (ATerm, ATerm p_55 (ATerm), ATerm q_55 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_95 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_69 (ATerm));
ATerm debug_1 (ATerm, ATerm e_71 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_83 (ATerm), ATerm v_83 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm f_82 (ATerm), ATerm g_82 (ATerm));
ATerm crush_2 (ATerm, ATerm d_81 (ATerm), ATerm e_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_95 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_69 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_87 (ATerm));
ATerm map_1 (ATerm, ATerm r_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_87 (ATerm));
ATerm Program_1 (ATerm, ATerm u_68 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm f_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_74 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_56 (ATerm), ATerm z_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm d_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t_70 (ATerm), ATerm u_70 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_70 (ATerm), ATerm k_70 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_70 (ATerm));
ATerm io_tg2typematch_0 (ATerm);
ATerm main_0 (ATerm);
ATerm create_call_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,y_1 = NULL;
  s_1 = t;
  r_0 :
  if(match_cons(s_1, sym_Prod_2))
    {
      t_1 = ATgetArgument(s_1, 0);
      y_1 = ATgetArgument(s_1, 1);
      g_1 :
      if(match_cons(t_1, sym_Id_1))
        {
          u_1 = ATgetArgument(t_1, 0);
          {
            ATerm c_2 = NULL;
            ATerm d_2 = NULL;
            t = not_null(y_1);
            {
              ATerm b_0 (ATerm t)
              {
                t = term_w_3;
                return(t);
              }
              t = map_1(t, b_0);
              {
                d_2 = t;
                if(((c_2 != NULL) && (c_2 != d_2)))
                  _fail(d_2);
                else
                  c_2 = d_2;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_1), not_null(c_2)));
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
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  p_2 = t;
  l_2 :
  if(((ATgetType(p_2) == AT_LIST) && !(ATisEmpty(p_2))))
    {
      q_2 = ATgetFirst((ATermList) p_2);
      r_2 = (ATerm) ATgetNext((ATermList) p_2);
      m_2 :
      if(((ATgetType(r_2) == AT_LIST) && !(ATisEmpty(r_2))))
        {
          n_2 = ATgetFirst((ATermList) r_2);
          o_2 = (ATerm) ATgetNext((ATermList) r_2);
          {
            ATerm v_2 = NULL,w_2 = NULL;
            ATerm x_2 = NULL;
            t = not_null(q_2);
            {
              ATerm y_2 = NULL;
              t = create_call_0(t);
              {
                x_2 = t;
                {
                  if(((v_2 != NULL) && (v_2 != x_2)))
                    _fail(x_2);
                  else
                    v_2 = x_2;
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(o_2)), not_null(n_2));
                    {
                      t = to_TypeMatch_Strat_0(t);
                      {
                        y_2 = t;
                        if(((w_2 != NULL) && (w_2 != y_2)))
                          _fail(y_2);
                        else
                          w_2 = y_2;
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_2), not_null(w_2));
          }
        }
      else
        {
          if(((ATgetType(r_2) == AT_LIST) && ATisEmpty(r_2)))
            {
              {
                t = not_null(q_2);
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
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  j_3 = t;
  h_3 :
  if(match_cons(j_3, sym_NonTermDec_3))
    {
      k_3 = ATgetArgument(j_3, 0);
      m_3 = ATgetArgument(j_3, 1);
      n_3 = ATgetArgument(j_3, 2);
      i_3 :
      if(match_cons(k_3, sym_Id_1))
        {
          l_3 = ATgetArgument(k_3, 0);
          {
            ATerm r_3 = NULL,s_3 = NULL;
            ATerm t_3 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, term_x_3, not_null(l_3));
            {
              ATerm u_3 = NULL;
              t = conc_strings_0(t);
              {
                t_3 = t;
                {
                  if(((r_3 != NULL) && (r_3 != t_3)))
                    _fail(t_3);
                  else
                    r_3 = t_3;
                  {
                    t = not_null(n_3);
                    {
                      t = to_TypeMatch_Strat_0(t);
                      {
                        u_3 = t;
                        if(((s_3 != NULL) && (s_3 != u_3)))
                          _fail(u_3);
                        else
                          s_3 = u_3;
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, not_null(r_3), not_null(s_3));
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
  ATerm b_4 = NULL,c_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym_TreeGrammar_1))
    {
      c_4 = ATgetArgument(b_4, 0);
      {
        ATerm e_4 = NULL;
        ATerm f_4 = NULL;
        t = not_null(c_4);
        {
          t = map_1(t, to_TypeMatch_SDef_0);
          {
            f_4 = t;
            if(((e_4 != NULL) && (e_4 != f_4)))
              _fail(f_4);
            else
              e_4 = f_4;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Module_2, term_y_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(e_4))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_55 (ATerm), ATerm q_55 (ATerm))
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
  o_4 = t;
  n_4 :
  if(match_cons(o_4, sym__2))
    {
      p_4 = ATgetArgument(o_4, 0);
      q_4 = ATgetArgument(o_4, 1);
      {
        ATerm u_4 = NULL,w_4 = NULL;
        ATerm v_4 = NULL;
        t = SSLgetAnnotations(not_null(o_4));
        {
          v_4 = t;
          if(((u_4 != NULL) && (u_4 != v_4)))
            _fail(v_4);
          else
            u_4 = v_4;
        }
        {
          t = not_null(p_4);
          {
            ATerm y_4 = NULL;
            t = p_55(t);
            {
              w_4 = t;
              {
                t = not_null(q_4);
                {
                  ATerm a_5 = NULL;
                  t = q_55(t);
                  {
                    y_4 = t;
                    {
                      ATerm b_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_4), not_null(y_4)), not_null(u_4));
                      {
                        b_5 = t;
                        if(((a_5 != NULL) && (a_5 != b_5)))
                          _fail(b_5);
                        else
                          a_5 = b_5;
                      }
                      t = not_null(a_5);
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
  ATerm j_5 = NULL;
  ATerm z_3;
  z_3 = t;
  {
    ATerm c_0 (ATerm t)
    {
      ATerm k_5 = NULL,l_5 = NULL;
      k_5 = t;
      i_5 :
      if(match_cons(k_5, sym_Program_1))
        {
          l_5 = ATgetArgument(k_5, 0);
          if(((j_5 != NULL) && (j_5 != l_5)))
            _fail(l_5);
          else
            j_5 = l_5;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, c_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_4), not_null(j_5)), term_g_4));
      {
        t = printnl_0(t);
        {
          t = term_i_4;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_3;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym__2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      {
        ATerm j_4;
        j_4 = t;
        t = SSL_printnl(not_null(q_5), not_null(r_5));
        t = j_4;
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
  ATerm w_5 = NULL;
  w_5 = t;
  t = SSL_implode_string(not_null(w_5));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_4 = t;
  int l_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_4);
    }
  else
    {
      t = k_4;
      {
        ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
        b_6 = t;
        a_6 :
        if(((ATgetType(b_6) == AT_LIST) && !(ATisEmpty(b_6))))
          {
            c_6 = ATgetFirst((ATermList) b_6);
            d_6 = (ATerm) ATgetNext((ATermList) b_6);
            {
              t = not_null(c_6);
              {
                ATerm e_0 (ATerm t)
                {
                  t = not_null(d_6);
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
  ATerm n_6 = NULL;
  ATerm p_6 = NULL;
  n_6 = t;
  {
    ATerm q_6 = NULL;
    ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
    t = not_null(n_6);
    {
      q_6 = t;
      {
        t = SSL_explode_term(not_null(q_6));
        {
          s_6 = t;
          l_6 :
          if(match_cons(s_6, sym__2))
            {
              t_6 = ATgetArgument(s_6, 0);
              u_6 = ATgetArgument(s_6, 1);
              m_6 :
              if(match_string(t_6, ""))
                {
                  if(((p_6 != NULL) && (p_6 != u_6)))
                    _fail(u_6);
                  else
                    p_6 = u_6;
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
      t = not_null(p_6);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm y_6 (ATerm t)
  {
    ATerm m_4 = t;
    int r_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_6);
        LocalPopChoice(r_4);
      }
    else
      {
        t = m_4;
        {
          t = Nil_0(t);
          t = g_76(t);
        }
      }
    return(t);
  }
  t = y_6(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym__2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        t = not_null(c_7);
        {
          ATerm f_0 (ATerm t)
          {
            t = not_null(d_7);
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
  ATerm s_4 = t;
  int t_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(t_4);
    }
  else
    {
      t = s_4;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  t = SSL_explode_string(not_null(i_7));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm x_4 = t;
    int z_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(z_4);
      }
    else
      {
        t = x_4;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_7 = NULL;
  m_7 = t;
  t = SSL_is_string(not_null(m_7));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
      {
        ATerm e_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              ATerm g_5 = t;
              int h_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(h_5);
                }
              else
                {
                  t = g_5;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, m_0);
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            {
              ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
              v_7 = t;
              u_7 :
              if(match_cons(v_7, sym_Path_1))
                {
                  w_7 = ATgetArgument(v_7, 0);
                  t = not_null(w_7);
                }
              else
                {
                  if(match_cons(v_7, sym_Var_1))
                    {
                      w_7 = ATgetArgument(v_7, 0);
                      {
                        t = not_null(w_7);
                        {
                          ATerm m_5 = t;
                          int n_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_5);
                            }
                          else
                            {
                              t = m_5;
                              {
                                ATerm n_0 (ATerm t)
                                {
                                  t = term_s_5;
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
                      if(match_cons(v_7, sym_Prefix_2))
                        {
                          w_7 = ATgetArgument(v_7, 0);
                          x_7 = ATgetArgument(v_7, 1);
                          {
                            ATerm c_8 = NULL,e_8 = NULL;
                            ATerm t_5;
                            t_5 = t;
                            {
                              ATerm d_8 = NULL;
                              t = not_null(w_7);
                              {
                                t = eval_config_0(t);
                                {
                                  d_8 = t;
                                  if(((c_8 != NULL) && (c_8 != d_8)))
                                    _fail(d_8);
                                  else
                                    c_8 = d_8;
                                }
                              }
                            }
                            t = t_5;
                            {
                              ATerm f_8 = NULL;
                              t = not_null(x_7);
                              {
                                t = eval_config_0(t);
                                {
                                  f_8 = t;
                                  if(((e_8 != NULL) && (e_8 != f_8)))
                                    _fail(f_8);
                                  else
                                    e_8 = f_8;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_8), not_null(e_8));
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
  ATerm n_8 = NULL;
  n_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_5, not_null(n_8));
    {
      t = table_get_0(t);
      {
        ATerm v_5 = t;
        int x_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm y_5;
              y_5 = t;
              {
                ATerm p_8 = NULL;
                ATerm q_8 = NULL;
                q_8 = t;
                if(((p_8 != NULL) && (p_8 != q_8)))
                  _fail(q_8);
                else
                  p_8 = q_8;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_u_5, not_null(n_8), not_null(p_8));
                  t = table_put_0(t);
                }
              }
              t = y_5;
            }
            LocalPopChoice(x_5);
          }
        else
          {
            t = v_5;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm d_95 (ATerm))
{
  ATerm z_5 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6;
      f_6 = t;
      {
        ATerm u_8 = NULL;
        ATerm v_8 = NULL;
        t = term_g_6;
        {
          t = get_config_0(t);
          {
            v_8 = t;
            if(((u_8 != NULL) && (u_8 != v_8)))
              _fail(v_8);
            else
              u_8 = v_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_8), term_h_6);
          t = geq_0(t);
        }
      }
      t = f_6;
      t = d_95(t);
      LocalPopChoice(e_6);
    }
  else
    {
      t = z_5;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym__2))
    {
      a_9 = ATgetArgument(z_8, 0);
      b_9 = ATgetArgument(z_8, 1);
      t = SSL_WriteToTextFile(not_null(a_9), not_null(b_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym__2))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      t = SSL_WriteToBinaryFile(not_null(i_9), not_null(j_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_9 = NULL;
  ATerm i_6;
  i_6 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm j_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_0 (ATerm t)
          {
            ATerm s_9 = NULL,t_9 = NULL;
            s_9 = t;
            o_9 :
            if(match_cons(s_9, sym_Output_1))
              {
                t_9 = ATgetArgument(s_9, 0);
                if(((r_9 != NULL) && (r_9 != t_9)))
                  _fail(t_9);
                else
                  r_9 = t_9;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, p_0);
          LocalPopChoice(k_6);
        }
      else
        {
          t = j_6;
          {
            ATerm u_9 = NULL;
            t = term_o_6;
            {
              u_9 = t;
              if(((r_9 != NULL) && (r_9 != u_9)))
                _fail(u_9);
              else
                r_9 = u_9;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_0, _id);
  }
  t = i_6;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm s_0 (ATerm t)
      {
        t = not_null(r_9);
        return(t);
      }
      t = split_2(t, s_0, _id);
      return(t);
    }
    t = _2(t, _id, q_0);
    {
      ATerm r_6 = t;
      int v_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 (ATerm t)
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_9 = NULL;
              v_9 = t;
              q_9 :
              if(!(match_cons(v_9, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_0);
            return(t);
          }
          t = _2(t, t_0, WriteToBinaryFile_0);
          LocalPopChoice(v_6);
        }
      else
        {
          t = r_6;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_69 (ATerm))
{
  ATerm b_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  ATerm w_6;
  w_6 = t;
  t = dtime_0(t);
  t = w_6;
  {
    t = w_69(t);
    {
      ATerm x_6;
      x_6 = t;
      {
        ATerm c_10 = NULL;
        t = dtime_0(t);
        {
          c_10 = t;
          if(((b_10 != NULL) && (b_10 != c_10)))
            _fail(c_10);
          else
            b_10 = c_10;
        }
      }
      t = x_6;
      {
        d_10 = t;
        a_10 :
        if(match_cons(d_10, sym__2))
          {
            e_10 = ATgetArgument(d_10, 0);
            f_10 = ATgetArgument(d_10, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_10)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_10))), not_null(f_10));
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
ATerm debug_1 (ATerm t, ATerm e_71 (ATerm))
{
  ATerm z_6;
  z_6 = t;
  {
    ATerm m_10 = NULL,o_10 = NULL;
    ATerm e_7;
    e_7 = t;
    {
      ATerm n_10 = NULL;
      t = e_71(t);
      {
        n_10 = t;
        if(((m_10 != NULL) && (m_10 != n_10)))
          _fail(n_10);
        else
          m_10 = n_10;
      }
    }
    t = e_7;
    {
      ATerm p_10 = NULL;
      p_10 = t;
      if(((o_10 != NULL) && (o_10 != p_10)))
        _fail(p_10);
      else
        o_10 = p_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_10)), not_null(m_10)));
        t = printnl_0(t);
      }
    }
  }
  t = z_6;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_10 = NULL;
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL;
      u_10 = t;
      {
        if(((t_10 != NULL) && (t_10 != u_10)))
          _fail(u_10);
        else
          t_10 = u_10;
        t = SSL_ReadFromFile(not_null(t_10));
      }
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_h_7;
          return(t);
        }
        t = debug_1(t, v_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_83 (ATerm), ATerm v_83 (ATerm))
{
  ATerm y_10 = NULL,a_11 = NULL;
  ATerm j_7;
  j_7 = t;
  {
    ATerm z_10 = NULL;
    t = u_83(t);
    {
      z_10 = t;
      if(((y_10 != NULL) && (y_10 != z_10)))
        _fail(z_10);
      else
        y_10 = z_10;
    }
  }
  t = j_7;
  {
    ATerm b_11 = NULL;
    t = v_83(t);
    {
      b_11 = t;
      if(((a_11 != NULL) && (a_11 != b_11)))
        _fail(b_11);
      else
        a_11 = b_11;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_10), not_null(a_11));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_11 = NULL;
  ATerm k_7;
  k_7 = t;
  {
    ATerm l_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 (ATerm t)
        {
          ATerm i_11 = NULL,j_11 = NULL;
          i_11 = t;
          f_11 :
          if(match_cons(i_11, sym_Input_1))
            {
              j_11 = ATgetArgument(i_11, 0);
              if(((h_11 != NULL) && (h_11 != j_11)))
                _fail(j_11);
              else
                h_11 = j_11;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, w_0);
        LocalPopChoice(n_7);
      }
    else
      {
        t = l_7;
        {
          ATerm k_11 = NULL;
          t = term_o_7;
          {
            k_11 = t;
            if(((h_11 != NULL) && (h_11 != k_11)))
              _fail(k_11);
            else
              h_11 = k_11;
          }
        }
      }
  }
  t = k_7;
  {
    ATerm x_0 (ATerm t)
    {
      t = not_null(h_11);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_0);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm o_11 = NULL;
    o_11 = t;
    n_11 :
    if(!(match_string(o_11, "-v")))
      {
        if(!(match_string(o_11, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    t = term_r_7;
    t = set_config_0(t);
    t = term_s_7;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    t = term_t_7;
    return(t);
  }
  t = Option_3(t, y_0, z_0, a_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm r_11 = NULL;
    r_11 = t;
    p_11 :
    if(!(match_string(r_11, "-k")))
      {
        if(!(match_string(r_11, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm y_7;
    y_7 = t;
    {
      ATerm s_11 = NULL;
      ATerm t_11 = NULL;
      t = string_to_int_0(t);
      {
        t_11 = t;
        if(((s_11 != NULL) && (s_11 != t_11)))
          _fail(t_11);
        else
          s_11 = t_11;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_7, not_null(s_11));
        t = set_config_0(t);
      }
    }
    t = y_7;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_a_8;
    return(t);
  }
  t = ArgOption_3(t, b_1, c_1, d_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  t = SSL_string_to_int(not_null(w_11));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm b_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm e_12 = NULL;
        e_12 = t;
        z_11 :
        if(!(match_string(e_12, "-S")))
          {
            if(!(match_string(e_12, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        t = term_i_8;
        t = set_config_0(t);
        t = term_j_8;
        return(t);
      }
      ATerm h_1 (ATerm t)
      {
        t = term_k_8;
        return(t);
      }
      t = Option_3(t, e_1, f_1, h_1);
      LocalPopChoice(g_8);
    }
  else
    {
      t = b_8;
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              ATerm f_12 = NULL;
              f_12 = t;
              a_12 :
              if(!(match_string(f_12, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              ATerm i_12 = NULL;
              ATerm o_8;
              o_8 = t;
              {
                ATerm g_12 = NULL;
                ATerm h_12 = NULL;
                t = string_to_int_0(t);
                {
                  h_12 = t;
                  if(((g_12 != NULL) && (g_12 != h_12)))
                    _fail(h_12);
                  else
                    g_12 = h_12;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_6, not_null(g_12));
                  t = set_config_0(t);
                }
              }
              t = o_8;
              {
                ATerm j_12 = NULL;
                j_12 = t;
                if(((i_12 != NULL) && (i_12 != j_12)))
                  _fail(j_12);
                else
                  i_12 = j_12;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_12));
              }
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              t = term_r_8;
              return(t);
            }
            t = ArgOption_3(t, i_1, j_1, k_1);
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            {
              ATerm l_1 (ATerm t)
              {
                ATerm k_12 = NULL;
                k_12 = t;
                d_12 :
                if(!(match_string(k_12, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_1 (ATerm t)
              {
                t = term_t_8;
                t = set_config_0(t);
                t = term_w_8;
                return(t);
              }
              ATerm n_1 (ATerm t)
              {
                t = term_x_8;
                return(t);
              }
              t = Option_3(t, l_1, m_1, n_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm q_12 = NULL;
    q_12 = t;
    n_12 :
    if(!(match_string(q_12, "-o")))
      {
        if(!(match_string(q_12, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm t_12 = NULL;
    ATerm k_9;
    k_9 = t;
    {
      ATerm r_12 = NULL;
      ATerm s_12 = NULL;
      s_12 = t;
      if(((r_12 != NULL) && (r_12 != s_12)))
        _fail(s_12);
      else
        r_12 = s_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_9, not_null(r_12));
        t = set_config_0(t);
      }
    }
    t = k_9;
    {
      ATerm u_12 = NULL;
      u_12 = t;
      if(((t_12 != NULL) && (t_12 != u_12)))
        _fail(u_12);
      else
        t_12 = u_12;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_12));
    }
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_m_9;
    return(t);
  }
  t = ArgOption_3(t, o_1, p_1, q_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = n_9;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm y_12 = NULL;
          y_12 = t;
          x_12 :
          if(!(match_string(y_12, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_1 (ATerm t)
        {
          t = term_x_9;
          t = set_config_0(t);
          t = term_y_9;
          return(t);
        }
        ATerm w_1 (ATerm t)
        {
          t = term_z_9;
          return(t);
        }
        t = Option_3(t, r_1, v_1, w_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  e_13 = t;
  c_13 :
  if(match_string(e_13, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
        {
          f_13 = ATgetFirst((ATermList) e_13);
          g_13 = (ATerm) ATgetNext((ATermList) e_13);
          d_13 :
          if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
            {
              h_13 = ATgetFirst((ATermList) g_13);
              i_13 = (ATerm) ATgetNext((ATermList) g_13);
              {
                ATerm m_13 = NULL;
                ATerm g_10;
                g_10 = t;
                {
                  t = not_null(f_13);
                  t = j_0(t);
                }
                t = g_10;
                {
                  ATerm n_13 = NULL;
                  t = not_null(h_13);
                  {
                    t = k_0(t);
                    {
                      n_13 = t;
                      if(((m_13 != NULL) && (m_13 != n_13)))
                        _fail(n_13);
                      else
                        m_13 = n_13;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_13)), not_null(m_13));
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
  ATerm x_1 (ATerm t)
  {
    ATerm u_13 = NULL;
    u_13 = t;
    r_13 :
    if(!(match_string(u_13, "-i")))
      {
        if(!(match_string(u_13, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm x_13 = NULL;
    ATerm h_10;
    h_10 = t;
    {
      ATerm v_13 = NULL;
      ATerm w_13 = NULL;
      w_13 = t;
      if(((v_13 != NULL) && (v_13 != w_13)))
        _fail(w_13);
      else
        v_13 = w_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(v_13));
        t = set_config_0(t);
      }
    }
    t = h_10;
    {
      ATerm y_13 = NULL;
      y_13 = t;
      if(((x_13 != NULL) && (x_13 != y_13)))
        _fail(y_13);
      else
        x_13 = y_13;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_13));
    }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_j_10;
    return(t);
  }
  t = ArgOption_3(t, x_1, z_1, a_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATempty, term_s_10));
  {
    t = printnl_0(t);
    {
      t = term_i_4;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  t = SSL_TicksToSeconds(not_null(c_14));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_14), not_null(j_14));
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            t = SSL_addr(not_null(i_14), not_null(j_14));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_82 (ATerm), ATerm g_82 (ATerm))
{
  ATerm x_10 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_82(t);
      LocalPopChoice(c_11);
    }
  else
    {
      t = x_10;
      {
        ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
        q_14 = t;
        p_14 :
        if(((ATgetType(q_14) == AT_LIST) && !(ATisEmpty(q_14))))
          {
            r_14 = ATgetFirst((ATermList) q_14);
            s_14 = (ATerm) ATgetNext((ATermList) q_14);
            {
              ATerm v_14 = NULL;
              ATerm w_14 = NULL;
              t = not_null(s_14);
              {
                t = foldr_2(t, f_82, g_82);
                {
                  w_14 = t;
                  if(((v_14 != NULL) && (v_14 != w_14)))
                    _fail(w_14);
                  else
                    v_14 = w_14;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(v_14));
                t = g_82(t);
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
ATerm crush_2 (ATerm t, ATerm d_81 (ATerm), ATerm e_81 (ATerm))
{
  ATerm d_15 = NULL;
  ATerm f_15 = NULL;
  d_15 = t;
  {
    ATerm g_15 = NULL;
    ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
    t = not_null(d_15);
    {
      g_15 = t;
      {
        t = SSL_explode_term(not_null(g_15));
        {
          i_15 = t;
          c_15 :
          if(match_cons(i_15, sym__2))
            {
              j_15 = ATgetArgument(i_15, 0);
              k_15 = ATgetArgument(i_15, 1);
              if(((f_15 != NULL) && (f_15 != k_15)))
                _fail(k_15);
              else
                f_15 = k_15;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_15);
      t = foldr_2(t, d_81, e_81);
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
      t = term_h_8;
      return(t);
    }
    t = crush_2(t, b_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym__2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      {
        ATerm d_11;
        d_11 = t;
        {
          ATerm e_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_15), not_null(s_15));
              LocalPopChoice(g_11);
            }
          else
            {
              t = e_11;
              t = SSL_gtr(not_null(r_15), not_null(s_15));
            }
        }
        t = d_11;
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
  ATerm y_15 = NULL;
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
      z_15 = t;
      x_15 :
      if(match_cons(z_15, sym__2))
        {
          a_16 = ATgetArgument(z_15, 0);
          b_16 = ATgetArgument(z_15, 1);
          {
            if(((y_15 != NULL) && (y_15 != a_16)))
              _fail(a_16);
            else
              y_15 = a_16;
            if(((y_15 != NULL) && (y_15 != b_16)))
              _fail(b_16);
            else
              y_15 = b_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm q_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_11;
      v_11 = t;
      {
        ATerm e_16 = NULL;
        ATerm f_16 = NULL;
        t = term_g_6;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), term_i_4);
          t = geq_0(t);
        }
      }
      t = v_11;
      t = c_95(t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = q_11;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm j_16 = NULL,l_16 = NULL;
    ATerm x_11;
    x_11 = t;
    {
      ATerm k_16 = NULL;
      t = run_time_0(t);
      {
        k_16 = t;
        if(((j_16 != NULL) && (j_16 != k_16)))
          _fail(k_16);
        else
          j_16 = k_16;
      }
    }
    t = x_11;
    {
      ATerm m_16 = NULL;
      t = term_y_11;
      {
        t = get_config_0(t);
        {
          m_16 = t;
          if(((l_16 != NULL) && (l_16 != m_16)))
            _fail(m_16);
          else
            l_16 = m_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_12), not_null(j_16)), term_b_12), not_null(l_16)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_2);
  {
    t = term_h_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym_Version_0))
    {
      ATerm v_16 = NULL,x_16 = NULL;
      ATerm l_12;
      l_12 = t;
      {
        ATerm w_16 = NULL;
        t = SSLgetAnnotations(not_null(t_16));
        {
          w_16 = t;
          if(((v_16 != NULL) && (v_16 != w_16)))
            _fail(w_16);
          else
            v_16 = w_16;
        }
      }
      t = l_12;
      {
        ATerm y_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_16));
        {
          y_16 = t;
          if(((x_16 != NULL) && (x_16 != y_16)))
            _fail(y_16);
          else
            x_16 = y_16;
        }
        t = not_null(x_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm m_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = m_12;
        {
          ATerm p_12 = t;
          int v_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_12);
            }
          else
            {
              t = p_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, f_2);
  t = u_69(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  t = SSL_table_create(not_null(d_17));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_17 = NULL;
  h_17 = t;
  {
    ATerm w_12;
    w_12 = t;
    {
      t = term_z_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_12, term_a_13, not_null(h_17));
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
  ATerm l_17 = NULL;
  l_17 = t;
  t = SSL_table_destroy(not_null(l_17));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_17 = NULL;
  p_17 = t;
  t = SSL_exit(not_null(p_17));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(((ATgetType(t_17) == AT_LIST) && ATisEmpty(t_17)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
        {
          u_17 = ATgetFirst((ATermList) t_17);
          v_17 = (ATerm) ATgetNext((ATermList) t_17);
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
  ATerm b_13;
  b_13 = t;
  {
    ATerm y_17 = NULL;
    ATerm b_18 = NULL;
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        {
          ATerm z_17 = NULL;
          ATerm a_18 = NULL;
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
          t = (ATerm) ATinsert(ATempty, not_null(z_17));
        }
      }
    {
      b_18 = t;
      if(((y_17 != NULL) && (y_17 != b_18)))
        _fail(b_18);
      else
        y_17 = b_18;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_6, not_null(y_17));
      t = printnl_0(t);
    }
  }
  t = b_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm e_18 (ATerm t)
  {
    ATerm l_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = l_13;
        t = Cons_2(t, r_75, e_18);
      }
    return(t);
  }
  t = e_18(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  n_18 = t;
  k_18 :
  if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
    {
      l_18 = ATgetFirst((ATermList) n_18);
      m_18 = (ATerm) ATgetNext((ATermList) n_18);
      {
        ATerm q_18 = NULL;
        t = not_null(m_18);
        {
          ATerm p_13;
          p_13 = t;
          {
            ATerm r_18 = NULL,t_18 = NULL,v_18 = NULL;
            ATerm q_13;
            q_13 = t;
            {
              ATerm s_18 = NULL;
              t = i_0(t);
              {
                s_18 = t;
                if(((r_18 != NULL) && (r_18 != s_18)))
                  _fail(s_18);
                else
                  r_18 = s_18;
              }
            }
            t = q_13;
            {
              ATerm u_18 = NULL;
              t = not_null(l_18);
              {
                t = h_0(t);
                {
                  u_18 = t;
                  if(((t_18 != NULL) && (t_18 != u_18)))
                    _fail(u_18);
                  else
                    t_18 = u_18;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_18)), not_null(t_18));
                {
                  v_18 = t;
                  if(((q_18 != NULL) && (q_18 != v_18)))
                    _fail(v_18);
                  else
                    q_18 = v_18;
                }
              }
            }
          }
          t = p_13;
          {
            ATerm g_2 (ATerm t)
            {
              t = not_null(q_18);
              return(t);
            }
            t = reverse_acc_2(t, h_0, g_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_18) == AT_LIST) && ATisEmpty(n_18)))
        {
          {
            t = term_q_7;
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
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_68 (ATerm))
{
  ATerm g_19 = NULL,h_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_Program_1))
    {
      h_19 = ATgetArgument(g_19, 0);
      {
        ATerm k_19 = NULL,m_19 = NULL;
        ATerm l_19 = NULL;
        t = SSLgetAnnotations(not_null(g_19));
        {
          l_19 = t;
          if(((k_19 != NULL) && (k_19 != l_19)))
            _fail(l_19);
          else
            k_19 = l_19;
        }
        {
          t = not_null(h_19);
          {
            ATerm o_19 = NULL;
            t = u_68(t);
            {
              m_19 = t;
              {
                ATerm p_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_19)), not_null(k_19));
                {
                  p_19 = t;
                  if(((o_19 != NULL) && (o_19 != p_19)))
                    _fail(p_19);
                  else
                    o_19 = p_19;
                }
                t = not_null(o_19);
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
  ATerm x_19 = NULL;
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_19 = NULL;
      t = term_y_11;
      {
        t = get_config_0(t);
        {
          y_19 = t;
          if(((x_19 != NULL) && (x_19 != y_19)))
            _fail(y_19);
          else
            x_19 = y_19;
        }
      }
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm i_2 (ATerm t)
        {
          ATerm j_2 (ATerm t)
          {
            ATerm z_19 = NULL;
            z_19 = t;
            if(((x_19 != NULL) && (x_19 != z_19)))
              _fail(z_19);
            else
              x_19 = z_19;
            return(t);
          }
          t = Program_1(t, j_2);
          return(t);
        }
        t = fetch_1(t, i_2);
      }
    }
  {
    t = term_z_13;
    {
      t = echo_0(t);
      {
        t = term_d_14;
        {
          t = table_get_0(t);
          {
            ATerm k_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, k_2);
            {
              ATerm s_2 (ATerm t)
              {
                ATerm a_20 = NULL;
                ATerm b_20 = NULL;
                b_20 = t;
                if(((a_20 != NULL) && (a_20 != b_20)))
                  _fail(b_20);
                else
                  a_20 = b_20;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_20)), term_e_14);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, s_2);
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
  ATerm f_14;
  f_14 = t;
  {
    ATerm g_20 = NULL;
    ATerm h_20 = NULL;
    h_20 = t;
    if(((g_20 != NULL) && (g_20 != h_20)))
      _fail(h_20);
    else
      g_20 = h_20;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATempty, not_null(g_20)));
      t = printnl_0(t);
    }
  }
  t = f_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm k_14;
  k_14 = t;
  {
    t = f_71(t);
    t = debug_0(t);
  }
  t = k_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_68 (ATerm))
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
            t = v_68(t);
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
ATerm fetch_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm c_21 (ATerm t)
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_76, _id);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = Cons_2(t, _id, c_21);
      }
    return(t);
  }
  t = c_21(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_86 (ATerm))
{
  t = fetch_1(t, e_86);
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
      ATerm n_14;
      n_14 = t;
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
      t = n_14;
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
ATerm try_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm o_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_74(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = o_14;
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
        ATerm u_14;
        u_14 = t;
        {
          ATerm i_22 = NULL;
          ATerm j_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(d_22));
          {
            ATerm x_14 = t;
            int y_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_14);
              }
            else
              {
                t = x_14;
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
        t = u_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_87 (ATerm))
{
  ATerm n_22 = NULL;
  ATerm o_22 = NULL;
  t = term_q_7;
  {
    t = j_87(t);
    {
      o_22 = t;
      if(((n_22 != NULL) && (n_22 != o_22)))
        _fail(o_22);
      else
        n_22 = o_22;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, not_null(n_22));
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
            ATerm z_14;
            z_14 = t;
            {
              t = not_null(v_22);
              t = a_0(t);
            }
            t = z_14;
            {
              ATerm a_23 = NULL;
              t = term_q_7;
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
  ATerm t_2 (ATerm t)
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
  ATerm u_2 (ATerm t)
  {
    t = term_b_15;
    {
      t = set_config_0(t);
      t = term_e_15;
    }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_h_15;
    return(t);
  }
  t = Option_3(t, t_2, u_2, z_2);
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
ATerm Cons_2 (ATerm t, ATerm y_56 (ATerm), ATerm z_56 (ATerm))
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
            t = y_56(t);
            {
              c_24 = t;
              {
                t = not_null(w_23);
                {
                  ATerm g_24 = NULL;
                  t = z_56(t);
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
        ATerm l_15;
        l_15 = t;
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
        t = l_15;
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
  ATerm c_25 = NULL,a_26 = NULL,b_26 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym__2))
    {
      a_26 = ATgetArgument(c_25, 0);
      b_26 = ATgetArgument(c_25, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_5, not_null(a_26), not_null(b_26));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_87 (ATerm))
{
  ATerm m_15;
  m_15 = t;
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_15;
        t = h_87(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
        }
      }
  }
  t = m_15;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm j_26 = NULL;
      ATerm u_15;
      u_15 = t;
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
      t = u_15;
      {
        ATerm m_26 = NULL;
        m_26 = t;
        if(((j_26 != NULL) && (j_26 != m_26)))
          _fail(m_26);
        else
          j_26 = m_26;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_26));
      }
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      ATerm v_15 = t;
      int w_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_16 = t;
          int d_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_16);
            }
          else
            {
              t = c_16;
              {
                t = h_87(t);
                t = Cons_2(t, _id, b_3);
              }
            }
          LocalPopChoice(w_15);
        }
      else
        {
          t = v_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_3, b_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
    a_27 = t;
    w_26 :
    if(match_cons(a_27, sym__3))
      {
        b_27 = ATgetArgument(a_27, 0);
        c_27 = ATgetArgument(a_27, 1);
        d_27 = ATgetArgument(a_27, 2);
        {
          if(((x_26 != NULL) && (x_26 != b_27)))
            _fail(b_27);
          else
            x_26 = b_27;
          {
            if(((y_26 != NULL) && (y_26 != c_27)))
              _fail(c_27);
            else
              y_26 = c_27;
            {
              if(((z_26 != NULL) && (z_26 != d_27)))
                _fail(d_27);
              else
                z_26 = d_27;
              t = SSL_table_put(not_null(x_26), not_null(y_26), not_null(z_26));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm g_27 = NULL;
  ATerm h_16;
  h_16 = t;
  {
    t = term_i_16;
    t = table_put_0(t);
  }
  t = h_16;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm n_16 = t;
      int o_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_87(t);
          LocalPopChoice(o_16);
        }
      else
        {
          t = n_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_3);
    {
      ATerm p_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_16;
          r_16 = t;
          {
            ATerm u_16 = t;
            int z_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_a_15;
                t = get_config_0(t);
                LocalPopChoice(z_16);
              }
            else
              {
                t = u_16;
                t = fetch_1(t, Help_0);
              }
          }
          t = r_16;
          {
            t = system_usage_0(t);
            {
              t = term_h_8;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_16);
        }
      else
        {
          t = p_16;
          {
            ATerm a_17 = t;
            int b_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm h_27 = NULL;
                    h_27 = t;
                    if(((g_27 != NULL) && (g_27 != h_27)))
                      _fail(h_27);
                    else
                      g_27 = h_27;
                    return(t);
                  }
                  t = Undefined_1(t, e_3);
                  return(t);
                }
                t = fetch_1(t, d_3);
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_27)), term_c_17);
                    return(t);
                  }
                  t = say_1(t, f_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_i_4;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(b_17);
              }
            else
              {
                t = a_17;
                {
                }
              }
          }
        }
      {
        ATerm e_17;
        e_17 = t;
        {
          t = term_a_14;
          t = table_destroy_0(t);
        }
        t = e_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm d_70 (ATerm))
{
  t = parse_options_1(t, a_70);
  {
    t = store_options_0(t);
    {
      t = c_70(t);
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_70);
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            {
              ATerm i_17 = t;
              int j_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_70(t);
                  t = report_success_0(t);
                  LocalPopChoice(j_17);
                }
              else
                {
                  t = i_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t_70 (ATerm), ATerm u_70 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm k_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_70(t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = k_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_70);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, g_3, t_70, u_70, o_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      ATerm n_17;
      n_17 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATempty, not_null(k_27)));
          t = printnl_0(t);
        }
      }
      t = n_17;
      return(t);
    }
    t = if_verbose2_1(t, q_3);
    return(t);
  }
  t = iowrap_4(t, l_70, m_70, n_70, p_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_70 (ATerm), ATerm k_70 (ATerm))
{
  t = iowrap_3(t, j_70, k_70, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    t = _2(t, _id, g_70);
    return(t);
  }
  t = iowrap_2(t, v_3, _fail);
  return(t);
}
ATerm io_tg2typematch_0 (ATerm t)
{
  t = iowrap_1(t, tg_to_stratego_typematch_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, tg_to_stratego_typematch_0);
  return(t);
}
