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
ATerm term_q_17;
ATerm term_y_16;
ATerm term_h_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_o_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_a_9;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_l_4;
ATerm term_k_4;
ATerm term_j_4;
ATerm term_i_4;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_f_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_b_4;
ATerm term_a_4;
ATerm term_z_3;
ATerm term_y_3;
ATerm term_x_3;
ATerm term_w_3;
ATerm term_v_3;
ATerm term_u_3;
ATerm term_r_3;
ATerm term_q_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
void init_constant_terms (void)
{
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_o_8, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_u_9);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_u_9);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_u_9);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__3, term_u_14, term_x_14, (ATerm) ATempty);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm member_0 (ATerm);
ATerm AddLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm j_57 (ATerm), ATerm k_57 (ATerm));
ATerm SVar_1 (ATerm, ATerm q_60 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm b_63 (ATerm), ATerm c_63 (ATerm));
ATerm SDef_3 (ATerm, ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm RDef_3 (ATerm, ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm s_59 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm a_63 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm real_to_string_0 (ATerm);
ATerm Escape_linefeed_0 (ATerm);
ATerm Escape_backslash_0 (ATerm);
ATerm Escape_double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_chars_0 (ATerm);
ATerm is_double_quoted_chars_0 (ATerm);
ATerm EnsugarOnce_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm o_93 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm is_quoted_chars_0 (ATerm);
ATerm is_quoted_0 (ATerm);
ATerm is_double_quoted_0 (ATerm);
ATerm Ensugar_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm s_83 (ATerm));
ATerm topdown_1 (ATerm, ATerm q_93 (ATerm));
ATerm Stratego_Ensugar_0 (ATerm);
ATerm _2 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_71 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_91 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_68 (ATerm));
ATerm debug_1 (ATerm, ATerm h_70 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_79 (ATerm), ATerm h_79 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm));
ATerm crush_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_68 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_82 (ATerm));
ATerm map_1 (ATerm, ATerm d_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_82 (ATerm));
ATerm Program_1 (ATerm, ATerm y_67 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_70 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_81 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_82 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_82 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_82 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_82 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_69 (ATerm));
ATerm stratego_ensugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm member_0 (ATerm t)
{
  ATerm e_3 = NULL;
  ATerm b_0 (ATerm t)
  {
    ATerm s_3 = NULL;
    s_3 = t;
    if(((e_3 != NULL) && (e_3 != s_3)))
      _fail(s_3);
    else
      e_3 = s_3;
    return(t);
  }
  ATerm c_0 (ATerm t)
  {
    ATerm e_0 (ATerm t)
    {
      ATerm t_3 = NULL;
      t_3 = t;
      if(((e_3 != NULL) && (e_3 != t_3)))
        _fail(t_3);
      else
        e_3 = t_3;
      return(t);
    }
    t = fetch_1(t, e_0);
    return(t);
  }
  t = _2(t, b_0, c_0);
  return(t);
}
ATerm AddLeadingPrime_0 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm o_4 = NULL;
  m_4 = t;
  {
    ATerm r_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_4), term_j_4), term_i_4), term_h_4), term_g_4), term_f_4), term_e_4), term_d_4), term_c_4), term_b_4), term_a_4), term_z_3), term_y_3), term_x_3), term_w_3), term_v_3), term_u_3), term_r_3), term_q_3), term_p_3), term_o_3), term_n_3));
    {
      t = member_0(t);
      {
        t = not_null(m_4);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm p_4 = NULL;
            ATerm q_4 = NULL;
            q_4 = t;
            if(((p_4 != NULL) && (p_4 != q_4)))
              _fail(q_4);
            else
              p_4 = q_4;
            t = (ATerm) ATinsert(CheckATermList(not_null(p_4)), term_l_4);
            return(t);
          }
          t = string_as_chars_1(t, f_0);
          {
            r_4 = t;
            if(((o_4 != NULL) && (o_4 != r_4)))
              _fail(r_4);
            else
              o_4 = r_4;
          }
        }
      }
    }
    t = not_null(o_4);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym_Op_2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      {
        ATerm h_5 = NULL,j_5 = NULL;
        ATerm i_5 = NULL;
        t = SSLgetAnnotations(not_null(b_5));
        {
          i_5 = t;
          if(((h_5 != NULL) && (h_5 != i_5)))
            _fail(i_5);
          else
            h_5 = i_5;
        }
        {
          t = not_null(c_5);
          {
            ATerm l_5 = NULL;
            t = x_57(t);
            {
              j_5 = t;
              {
                t = not_null(d_5);
                {
                  ATerm n_5 = NULL;
                  t = y_57(t);
                  {
                    l_5 = t;
                    {
                      ATerm o_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_5), not_null(l_5)), not_null(h_5));
                      {
                        o_5 = t;
                        if(((n_5 != NULL) && (n_5 != o_5)))
                          _fail(o_5);
                        else
                          n_5 = o_5;
                      }
                      t = not_null(n_5);
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
ATerm OpDecl_2 (ATerm t, ATerm j_57 (ATerm), ATerm k_57 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_OpDecl_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      {
        ATerm g_6 = NULL,i_6 = NULL;
        ATerm h_6 = NULL;
        t = SSLgetAnnotations(not_null(a_6));
        {
          h_6 = t;
          if(((g_6 != NULL) && (g_6 != h_6)))
            _fail(h_6);
          else
            g_6 = h_6;
        }
        {
          t = not_null(b_6);
          {
            ATerm k_6 = NULL;
            t = j_57(t);
            {
              i_6 = t;
              {
                t = not_null(c_6);
                {
                  ATerm m_6 = NULL;
                  t = k_57(t);
                  {
                    k_6 = t;
                    {
                      ATerm n_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(i_6), not_null(k_6)), not_null(g_6));
                      {
                        n_6 = t;
                        if(((m_6 != NULL) && (m_6 != n_6)))
                          _fail(n_6);
                        else
                          m_6 = n_6;
                      }
                      t = not_null(m_6);
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
ATerm SVar_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm y_6 = NULL,z_6 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_SVar_1))
    {
      z_6 = ATgetArgument(y_6, 0);
      {
        ATerm c_7 = NULL,e_7 = NULL;
        ATerm d_7 = NULL;
        t = SSLgetAnnotations(not_null(y_6));
        {
          d_7 = t;
          if(((c_7 != NULL) && (c_7 != d_7)))
            _fail(d_7);
          else
            c_7 = d_7;
        }
        {
          t = not_null(z_6);
          {
            ATerm g_7 = NULL;
            t = q_60(t);
            {
              e_7 = t;
              {
                ATerm h_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(e_7)), not_null(c_7));
                {
                  h_7 = t;
                  if(((g_7 != NULL) && (g_7 != h_7)))
                    _fail(h_7);
                  else
                    g_7 = h_7;
                }
                t = not_null(g_7);
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
ATerm Var_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm z_7 = NULL,a_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_Var_1))
    {
      a_8 = ATgetArgument(z_7, 0);
      {
        ATerm n_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_8 = NULL,f_8 = NULL;
            ATerm e_8 = NULL;
            t = SSLgetAnnotations(not_null(z_7));
            {
              e_8 = t;
              if(((d_8 != NULL) && (d_8 != e_8)))
                _fail(e_8);
              else
                d_8 = e_8;
            }
            {
              t = not_null(a_8);
              {
                ATerm h_8 = NULL;
                t = m_0(t);
                {
                  f_8 = t;
                  {
                    ATerm i_8 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_8)), not_null(d_8));
                    {
                      i_8 = t;
                      if(((h_8 != NULL) && (h_8 != i_8)))
                        _fail(i_8);
                      else
                        h_8 = i_8;
                    }
                    t = not_null(h_8);
                  }
                }
              }
            }
            ;
            LocalPopChoice(s_4);
          }
        else
          {
            t = n_4;
            {
              ATerm t_4 = t;
              int u_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_8 = NULL,n_8 = NULL;
                  ATerm m_8 = NULL;
                  t = SSLgetAnnotations(not_null(z_7));
                  {
                    m_8 = t;
                    if(((l_8 != NULL) && (l_8 != m_8)))
                      _fail(m_8);
                    else
                      l_8 = m_8;
                  }
                  {
                    t = not_null(a_8);
                    {
                      ATerm p_8 = NULL;
                      t = m_0(t);
                      {
                        n_8 = t;
                        {
                          ATerm q_8 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_8)), not_null(l_8));
                          {
                            q_8 = t;
                            if(((p_8 != NULL) && (p_8 != q_8)))
                              _fail(q_8);
                            else
                              p_8 = q_8;
                          }
                          t = not_null(p_8);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(u_4);
                }
              else
                {
                  t = t_4;
                  {
                    ATerm t_8 = NULL,v_8 = NULL;
                    ATerm u_8 = NULL;
                    t = SSLgetAnnotations(not_null(z_7));
                    {
                      u_8 = t;
                      if(((t_8 != NULL) && (t_8 != u_8)))
                        _fail(u_8);
                      else
                        t_8 = u_8;
                    }
                    {
                      t = not_null(a_8);
                      {
                        ATerm x_8 = NULL;
                        t = m_0(t);
                        {
                          v_8 = t;
                          {
                            ATerm y_8 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_8)), not_null(t_8));
                            {
                              y_8 = t;
                              if(((x_8 != NULL) && (x_8 != y_8)))
                                _fail(y_8);
                              else
                                x_8 = y_8;
                            }
                            t = not_null(x_8);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  r_9 = t;
  q_9 :
  if(match_cons(r_9, sym_VarDec_2))
    {
      s_9 = ATgetArgument(r_9, 0);
      t_9 = ATgetArgument(r_9, 1);
      {
        ATerm x_9 = NULL,z_9 = NULL;
        ATerm y_9 = NULL;
        t = SSLgetAnnotations(not_null(r_9));
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
        {
          t = not_null(s_9);
          {
            ATerm b_10 = NULL;
            t = b_63(t);
            {
              z_9 = t;
              {
                t = not_null(t_9);
                {
                  ATerm d_10 = NULL;
                  t = c_63(t);
                  {
                    b_10 = t;
                    {
                      ATerm e_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_9), not_null(b_10)), not_null(x_9));
                      {
                        e_10 = t;
                        if(((d_10 != NULL) && (d_10 != e_10)))
                          _fail(e_10);
                        else
                          d_10 = e_10;
                      }
                      t = not_null(d_10);
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
ATerm SDef_3 (ATerm t, ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_SDef_3))
    {
      s_10 = ATgetArgument(r_10, 0);
      t_10 = ATgetArgument(r_10, 1);
      u_10 = ATgetArgument(r_10, 2);
      {
        ATerm z_10 = NULL,b_11 = NULL;
        ATerm a_11 = NULL;
        t = SSLgetAnnotations(not_null(r_10));
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
        {
          t = not_null(s_10);
          {
            ATerm d_11 = NULL;
            t = f_63(t);
            {
              b_11 = t;
              {
                t = not_null(t_10);
                {
                  ATerm f_11 = NULL;
                  t = g_63(t);
                  {
                    d_11 = t;
                    {
                      t = not_null(u_10);
                      {
                        ATerm h_11 = NULL;
                        t = h_63(t);
                        {
                          f_11 = t;
                          {
                            ATerm i_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(b_11), not_null(d_11), not_null(f_11)), not_null(z_10));
                            {
                              i_11 = t;
                              if(((h_11 != NULL) && (h_11 != i_11)))
                                _fail(i_11);
                              else
                                h_11 = i_11;
                            }
                            t = not_null(h_11);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm s_59 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_RDef_3))
    {
      x_11 = ATgetArgument(w_11, 0);
      y_11 = ATgetArgument(w_11, 1);
      z_11 = ATgetArgument(w_11, 2);
      {
        ATerm e_12 = NULL,g_12 = NULL;
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(w_11));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
        {
          t = not_null(x_11);
          {
            ATerm i_12 = NULL;
            t = q_59(t);
            {
              g_12 = t;
              {
                t = not_null(y_11);
                {
                  ATerm k_12 = NULL;
                  t = r_59(t);
                  {
                    i_12 = t;
                    {
                      t = not_null(z_11);
                      {
                        ATerm m_12 = NULL;
                        t = s_59(t);
                        {
                          k_12 = t;
                          {
                            ATerm n_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(g_12), not_null(i_12), not_null(k_12)), not_null(e_12));
                            {
                              n_12 = t;
                              if(((m_12 != NULL) && (m_12 != n_12)))
                                _fail(n_12);
                              else
                                m_12 = n_12;
                            }
                            t = not_null(m_12);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefaultVarDec_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym_DefaultVarDec_1))
    {
      a_13 = ATgetArgument(z_12, 0);
      {
        ATerm d_13 = NULL,f_13 = NULL;
        ATerm e_13 = NULL;
        t = SSLgetAnnotations(not_null(z_12));
        {
          e_13 = t;
          if(((d_13 != NULL) && (d_13 != e_13)))
            _fail(e_13);
          else
            d_13 = e_13;
        }
        {
          t = not_null(a_13);
          {
            ATerm h_13 = NULL;
            t = a_63(t);
            {
              f_13 = t;
              {
                ATerm i_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(f_13)), not_null(d_13));
                {
                  i_13 = t;
                  if(((h_13 != NULL) && (h_13 != i_13)))
                    _fail(i_13);
                  else
                    h_13 = i_13;
                }
                t = not_null(h_13);
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
ATerm int_to_string_0 (ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  t = SSL_int_to_string(not_null(o_13));
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  t = SSL_real_to_string(not_null(s_13));
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  w_13 :
  if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
    {
      z_13 = ATgetFirst((ATermList) y_13);
      a_14 = (ATerm) ATgetNext((ATermList) y_13);
      x_13 :
      if(match_int(z_13, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_14)), term_w_4), term_v_4);
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
ATerm Escape_backslash_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  e_14 :
  if(((ATgetType(g_14) == AT_LIST) && !(ATisEmpty(g_14))))
    {
      h_14 = ATgetFirst((ATermList) g_14);
      i_14 = (ATerm) ATgetNext((ATermList) g_14);
      f_14 :
      if(match_int(h_14, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_14)), term_v_4), term_v_4);
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
ATerm Escape_double_quote_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  m_14 :
  if(((ATgetType(o_14) == AT_LIST) && !(ATisEmpty(o_14))))
    {
      p_14 = ATgetFirst((ATermList) o_14);
      q_14 = (ATerm) ATgetNext((ATermList) o_14);
      n_14 :
      if(match_int(p_14, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_14)), term_x_4), term_v_4);
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
ATerm Escape_0 (ATerm t)
{
  ATerm y_4 = t;
  int z_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(z_4);
    }
  else
    {
      t = y_4;
      {
        ATerm e_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm g_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm n_0 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, n_0);
      }
      ;
      LocalPopChoice(k_5);
    }
  else
    {
      t = g_5;
      {
        ATerm m_5 = t;
        int p_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(p_5);
          }
        else
          {
            t = m_5;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm is_double_quoted_chars_0 (ATerm t)
{
  ATerm q_5;
  q_5 = t;
  {
    ATerm v_14 = NULL;
    ATerm w_14 = NULL;
    w_14 = t;
    if(((v_14 != NULL) && (v_14 != w_14)))
      _fail(w_14);
    else
      v_14 = w_14;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_4, not_null(v_14));
      t = is_quoted_chars_0(t);
    }
  }
  t = q_5;
  return(t);
}
ATerm EnsugarOnce_0 (ATerm t)
{
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL,g_15 = NULL;
      f_15 = t;
      e_15 :
      if(match_cons(f_15, sym_Str_1))
        {
          g_15 = ATgetArgument(f_15, 0);
          {
            ATerm i_15 = NULL;
            ATerm j_15 = NULL;
            t = not_null(g_15);
            {
              ATerm o_0 (ATerm t)
              {
                ATerm t_5 = t;
                if((PushChoice() == 0))
                  {
                    t = is_double_quoted_chars_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_5;
                  }
                {
                  t = escape_chars_0(t);
                  t = double_quote_chars_0(t);
                }
                return(t);
              }
              t = string_as_chars_1(t, o_0);
              {
                j_15 = t;
                if(((i_15 != NULL) && (i_15 != j_15)))
                  _fail(j_15);
                else
                  i_15 = j_15;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(i_15));
          }
        }
      else
        {
          if(match_cons(f_15, sym_Real_1))
            {
              g_15 = ATgetArgument(f_15, 0);
              {
                ATerm l_15 = NULL;
                ATerm m_15 = NULL;
                t = not_null(g_15);
                {
                  t = real_to_string_0(t);
                  {
                    m_15 = t;
                    if(((l_15 != NULL) && (l_15 != m_15)))
                      _fail(m_15);
                    else
                      l_15 = m_15;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(l_15));
              }
            }
          else
            {
              if(match_cons(f_15, sym_Int_1))
                {
                  g_15 = ATgetArgument(f_15, 0);
                  {
                    ATerm o_15 = NULL;
                    ATerm p_15 = NULL;
                    t = not_null(g_15);
                    {
                      t = int_to_string_0(t);
                      {
                        p_15 = t;
                        if(((o_15 != NULL) && (o_15 != p_15)))
                          _fail(p_15);
                        else
                          o_15 = p_15;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Int_1, not_null(o_15));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      ;
      LocalPopChoice(s_5);
    }
  else
    {
      t = r_5;
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, AddLeadingPrime_0);
            ;
            LocalPopChoice(v_5);
          }
        else
          {
            t = u_5;
            {
              ATerm w_5 = t;
              int x_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3(t, AddLeadingPrime_0, _id, _id);
                  ;
                  LocalPopChoice(x_5);
                }
              else
                {
                  t = w_5;
                  {
                    ATerm y_5 = t;
                    int d_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3(t, AddLeadingPrime_0, _id, _id);
                        ;
                        LocalPopChoice(d_6);
                      }
                    else
                      {
                        t = y_5;
                        {
                          ATerm e_6 = t;
                          int f_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2(t, AddLeadingPrime_0, _id);
                              ;
                              LocalPopChoice(f_6);
                            }
                          else
                            {
                              t = e_6;
                              {
                                ATerm j_6 = t;
                                int l_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1(t, AddLeadingPrime_0);
                                    ;
                                    LocalPopChoice(l_6);
                                  }
                                else
                                  {
                                    t = j_6;
                                    {
                                      ATerm o_6 = t;
                                      int p_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1(t, AddLeadingPrime_0);
                                          ;
                                          LocalPopChoice(p_6);
                                        }
                                      else
                                        {
                                          t = o_6;
                                          {
                                            ATerm q_6 = t;
                                            int r_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2(t, AddLeadingPrime_0, _id);
                                                ;
                                                LocalPopChoice(r_6);
                                              }
                                            else
                                              {
                                                t = q_6;
                                                t = Op_2(t, AddLeadingPrime_0, _id);
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
ATerm quote_chars_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym__2))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_16)), not_null(z_15)), (ATerm) ATinsert(ATempty, not_null(z_15)));
        t = conc_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm f_16 = NULL;
  ATerm g_16 = NULL;
  g_16 = t;
  if(((f_16 != NULL) && (f_16 != g_16)))
    _fail(g_16);
  else
    f_16 = g_16;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_4, not_null(f_16));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm o_93 (ATerm))
{
  t = explode_string_0(t);
  {
    t = o_93(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
    {
      l_16 = ATgetFirst((ATermList) k_16);
      m_16 = (ATerm) ATgetNext((ATermList) k_16);
      t = not_null(m_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  q_16 :
  if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
    {
      t_16 = ATgetFirst((ATermList) s_16);
      u_16 = (ATerm) ATgetNext((ATermList) s_16);
      r_16 :
      if(((ATgetType(u_16) == AT_LIST) && ATisEmpty(u_16)))
        {
          t = not_null(t_16);
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
ATerm last_0 (ATerm t)
{
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm is_quoted_chars_0 (ATerm t)
{
  ATerm c_17 = NULL;
  ATerm u_6;
  u_6 = t;
  {
    ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
    d_17 = t;
    b_17 :
    if(match_cons(d_17, sym__2))
      {
        e_17 = ATgetArgument(d_17, 0);
        f_17 = ATgetArgument(d_17, 1);
        {
          ATerm g_17 = NULL;
          if(((c_17 != NULL) && (c_17 != e_17)))
            _fail(e_17);
          else
            c_17 = e_17;
          {
            if(((g_17 != NULL) && (g_17 != f_17)))
              _fail(f_17);
            else
              g_17 = f_17;
            {
              t = not_null(g_17);
              {
                ATerm p_0 (ATerm t)
                {
                  ATerm h_17 = NULL;
                  h_17 = t;
                  if(((c_17 != NULL) && (c_17 != h_17)))
                    _fail(h_17);
                  else
                    c_17 = h_17;
                  return(t);
                }
                ATerm q_0 (ATerm t)
                {
                  ATerm i_17 = NULL;
                  t = last_0(t);
                  {
                    i_17 = t;
                    if(((c_17 != NULL) && (c_17 != i_17)))
                      _fail(i_17);
                    else
                      c_17 = i_17;
                  }
                  return(t);
                }
                t = Cons_2(t, p_0, q_0);
              }
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_6;
  return(t);
}
ATerm is_quoted_0 (ATerm t)
{
  t = _2(t, _id, explode_string_0);
  t = is_quoted_chars_0(t);
  return(t);
}
ATerm is_double_quoted_0 (ATerm t)
{
  ATerm v_6;
  v_6 = t;
  {
    ATerm n_17 = NULL;
    ATerm o_17 = NULL;
    o_17 = t;
    if(((n_17 != NULL) && (n_17 != o_17)))
      _fail(o_17);
    else
      n_17 = o_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_4, not_null(n_17));
      t = is_quoted_0(t);
    }
  }
  t = v_6;
  return(t);
}
ATerm Ensugar_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  u_17 :
  if(match_cons(y_17, sym_StratRule_3))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      x_17 = ATgetArgument(y_17, 2);
      v_17 :
      if(match_cons(x_17, sym_Id_0))
        {
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, not_null(z_17), not_null(a_18));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(y_17, sym_Rule_3))
        {
          z_17 = ATgetArgument(y_17, 0);
          a_18 = ATgetArgument(y_17, 1);
          x_17 = ATgetArgument(y_17, 2);
          w_17 :
          if(match_cons(x_17, sym_Id_0))
            {
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, not_null(z_17), not_null(a_18));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(y_17, sym_Prim_2))
            {
              z_17 = ATgetArgument(y_17, 0);
              a_18 = ATgetArgument(y_17, 1);
              {
                ATerm h_18 = NULL;
                ATerm w_6;
                w_6 = t;
                {
                  t = not_null(z_17);
                  {
                    ATerm a_7 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_double_quoted_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = a_7;
                      }
                  }
                }
                t = w_6;
                {
                  ATerm i_18 = NULL;
                  t = not_null(z_17);
                  {
                    t = double_quote_0(t);
                    {
                      i_18 = t;
                      if(((h_18 != NULL) && (h_18 != i_18)))
                        _fail(i_18);
                      else
                        h_18 = i_18;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(h_18), not_null(a_18));
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
ATerm repeat_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm n_18 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      t = s_83(t);
      t = n_18(t);
      return(t);
    }
    t = try_1(t, r_0);
    return(t);
  }
  t = n_18(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm q_93 (ATerm))
{
  t = q_93(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = topdown_1(t, q_93);
      return(t);
    }
    t = _all(t, s_0);
  }
  return(t);
}
ATerm Stratego_Ensugar_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm u_18 = NULL;
    ATerm w_18 = NULL;
    u_18 = t;
    {
      ATerm x_18 = NULL;
      ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
      t = not_null(u_18);
      {
        x_18 = t;
        {
          t = SSL_explode_term(not_null(x_18));
          {
            z_18 = t;
            r_18 :
            if(match_cons(z_18, sym__2))
              {
                a_19 = ATgetArgument(z_18, 0);
                b_19 = ATgetArgument(z_18, 1);
                s_18 :
                if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
                  {
                    c_19 = ATgetFirst((ATermList) b_19);
                    d_19 = (ATerm) ATgetNext((ATermList) b_19);
                    t_18 :
                    if(((ATgetType(d_19) == AT_LIST) && ATisEmpty(d_19)))
                      {
                        if(((w_18 != NULL) && (w_18 != c_19)))
                          _fail(c_19);
                        else
                          w_18 = c_19;
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
      t = not_null(w_18);
    }
    return(t);
  }
  t = try_1(t, t_0);
  {
    ATerm u_0 (ATerm t)
    {
      t = repeat_1(t, Ensugar_0);
      t = try_1(t, EnsugarOnce_0);
      return(t);
    }
    t = topdown_1(t, u_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  n_19 = t;
  m_19 :
  if(match_cons(n_19, sym__2))
    {
      o_19 = ATgetArgument(n_19, 0);
      p_19 = ATgetArgument(n_19, 1);
      {
        ATerm t_19 = NULL,v_19 = NULL;
        ATerm u_19 = NULL;
        t = SSLgetAnnotations(not_null(n_19));
        {
          u_19 = t;
          if(((t_19 != NULL) && (t_19 != u_19)))
            _fail(u_19);
          else
            t_19 = u_19;
        }
        {
          t = not_null(o_19);
          {
            ATerm x_19 = NULL;
            t = i_55(t);
            {
              v_19 = t;
              {
                t = not_null(p_19);
                {
                  ATerm z_19 = NULL;
                  t = j_55(t);
                  {
                    x_19 = t;
                    {
                      ATerm a_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_19), not_null(x_19)), not_null(t_19));
                      {
                        a_20 = t;
                        if(((z_19 != NULL) && (z_19 != a_20)))
                          _fail(a_20);
                        else
                          z_19 = a_20;
                      }
                      t = not_null(z_19);
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
  ATerm i_20 = NULL;
  ATerm b_7;
  b_7 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm j_20 = NULL,k_20 = NULL;
      j_20 = t;
      h_20 :
      if(match_cons(j_20, sym_Program_1))
        {
          k_20 = ATgetArgument(j_20, 0);
          if(((i_20 != NULL) && (i_20 != k_20)))
            _fail(k_20);
          else
            i_20 = k_20;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, v_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_7), not_null(i_20)), term_i_7));
      {
        t = printnl_0(t);
        {
          t = term_k_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym__2))
    {
      p_20 = ATgetArgument(o_20, 0);
      q_20 = ATgetArgument(o_20, 1);
      {
        ATerm l_7;
        l_7 = t;
        t = SSL_printnl(not_null(p_20), not_null(q_20));
        t = l_7;
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
  ATerm v_20 = NULL;
  v_20 = t;
  t = SSL_implode_string(not_null(v_20));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
        a_21 = t;
        z_20 :
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            b_21 = ATgetFirst((ATermList) a_21);
            c_21 = (ATerm) ATgetNext((ATermList) a_21);
            {
              t = not_null(b_21);
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(c_21);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_0);
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
  ATerm m_21 = NULL;
  ATerm o_21 = NULL;
  m_21 = t;
  {
    ATerm p_21 = NULL;
    ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
    t = not_null(m_21);
    {
      p_21 = t;
      {
        t = SSL_explode_term(not_null(p_21));
        {
          r_21 = t;
          k_21 :
          if(match_cons(r_21, sym__2))
            {
              s_21 = ATgetArgument(r_21, 0);
              t_21 = ATgetArgument(r_21, 1);
              l_21 :
              if(match_string(s_21, ""))
                {
                  if(((o_21 != NULL) && (o_21 != t_21)))
                    _fail(t_21);
                  else
                    o_21 = t_21;
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
      t = not_null(o_21);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm x_21 (ATerm t)
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_21);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        {
          t = Nil_0(t);
          t = s_71(t);
        }
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym__2))
    {
      b_22 = ATgetArgument(a_22, 0);
      c_22 = ATgetArgument(a_22, 1);
      {
        t = not_null(b_22);
        {
          ATerm x_0 (ATerm t)
          {
            t = not_null(c_22);
            return(t);
          }
          t = at_end_1(t, x_0);
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
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  t = SSL_explode_string(not_null(h_22));
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
  ATerm l_22 = NULL;
  l_22 = t;
  t = SSL_is_string(not_null(l_22));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_0);
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
              ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
              u_22 = t;
              t_22 :
              if(match_cons(u_22, sym_Path_1))
                {
                  v_22 = ATgetArgument(u_22, 0);
                  t = not_null(v_22);
                }
              else
                {
                  if(match_cons(u_22, sym_Var_1))
                    {
                      v_22 = ATgetArgument(u_22, 0);
                      {
                        t = not_null(v_22);
                        {
                          ATerm w_7 = t;
                          int x_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(x_7);
                            }
                          else
                            {
                              t = w_7;
                              {
                                ATerm z_0 (ATerm t)
                                {
                                  t = term_b_8;
                                  return(t);
                                }
                                t = debug_1(t, z_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_22, sym_Prefix_2))
                        {
                          v_22 = ATgetArgument(u_22, 0);
                          w_22 = ATgetArgument(u_22, 1);
                          {
                            ATerm b_23 = NULL,d_23 = NULL;
                            ATerm c_8;
                            c_8 = t;
                            {
                              ATerm c_23 = NULL;
                              t = not_null(v_22);
                              {
                                t = eval_config_0(t);
                                {
                                  c_23 = t;
                                  if(((b_23 != NULL) && (b_23 != c_23)))
                                    _fail(c_23);
                                  else
                                    b_23 = c_23;
                                }
                              }
                            }
                            t = c_8;
                            {
                              ATerm e_23 = NULL;
                              t = not_null(w_22);
                              {
                                t = eval_config_0(t);
                                {
                                  e_23 = t;
                                  if(((d_23 != NULL) && (d_23 != e_23)))
                                    _fail(e_23);
                                  else
                                    d_23 = e_23;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), not_null(d_23));
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
  ATerm m_23 = NULL;
  m_23 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(m_23));
    {
      t = table_get_0(t);
      {
        ATerm a_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_8;
            j_8 = t;
            {
              ATerm o_23 = NULL;
              ATerm p_23 = NULL;
              p_23 = t;
              if(((o_23 != NULL) && (o_23 != p_23)))
                _fail(p_23);
              else
                o_23 = p_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_g_8, not_null(m_23), not_null(o_23));
                t = table_put_0(t);
              }
            }
            t = j_8;
          }
          return(t);
        }
        t = try_1(t, a_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_91 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm k_8;
    k_8 = t;
    {
      ATerm t_23 = NULL;
      ATerm u_23 = NULL;
      t = term_o_8;
      {
        t = get_config_0(t);
        {
          u_23 = t;
          if(((t_23 != NULL) && (t_23 != u_23)))
            _fail(u_23);
          else
            t_23 = u_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), term_r_8);
        t = geq_0(t);
      }
    }
    t = k_8;
    t = j_91(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym__2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      t = SSL_WriteToTextFile(not_null(z_23), not_null(a_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym__2))
    {
      h_24 = ATgetArgument(g_24, 0);
      i_24 = ATgetArgument(g_24, 1);
      t = SSL_WriteToBinaryFile(not_null(h_24), not_null(i_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_24 = NULL;
  ATerm s_8;
  s_8 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm w_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm r_24 = NULL,s_24 = NULL;
            r_24 = t;
            n_24 :
            if(match_cons(r_24, sym_Output_1))
              {
                s_24 = ATgetArgument(r_24, 0);
                if(((q_24 != NULL) && (q_24 != s_24)))
                  _fail(s_24);
                else
                  q_24 = s_24;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_1);
          ;
          LocalPopChoice(z_8);
        }
      else
        {
          t = w_8;
          {
            ATerm t_24 = NULL;
            t = term_a_9;
            {
              t_24 = t;
              if(((q_24 != NULL) && (q_24 != t_24)))
                _fail(t_24);
              else
                q_24 = t_24;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_1, _id);
  }
  t = s_8;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(q_24);
        return(t);
      }
      t = split_2(t, f_1, _id);
      return(t);
    }
    t = _2(t, _id, e_1);
    {
      ATerm b_9 = t;
      int c_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              ATerm u_24 = NULL;
              u_24 = t;
              p_24 :
              if(!(match_cons(u_24, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_1);
            return(t);
          }
          t = _2(t, g_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(c_9);
        }
      else
        {
          t = b_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm u_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  ATerm d_9;
  d_9 = t;
  t = dtime_0(t);
  t = d_9;
  {
    t = z_68(t);
    {
      ATerm e_9;
      e_9 = t;
      {
        ATerm v_25 = NULL;
        t = dtime_0(t);
        {
          v_25 = t;
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
        }
      }
      t = e_9;
      {
        w_25 = t;
        t_25 :
        if(match_cons(w_25, sym__2))
          {
            x_25 = ATgetArgument(w_25, 0);
            y_25 = ATgetArgument(w_25, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_25)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_25))), not_null(y_25));
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
ATerm debug_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm f_9;
  f_9 = t;
  {
    ATerm m_26 = NULL,o_26 = NULL;
    ATerm g_9;
    g_9 = t;
    {
      ATerm n_26 = NULL;
      t = h_70(t);
      {
        n_26 = t;
        if(((m_26 != NULL) && (m_26 != n_26)))
          _fail(n_26);
        else
          m_26 = n_26;
      }
    }
    t = g_9;
    {
      ATerm p_26 = NULL;
      p_26 = t;
      if(((o_26 != NULL) && (o_26 != p_26)))
        _fail(p_26);
      else
        o_26 = p_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_26)), not_null(m_26)));
        t = printnl_0(t);
      }
    }
  }
  t = f_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm y_26 = NULL;
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_26 = NULL;
      z_26 = t;
      {
        if(((y_26 != NULL) && (y_26 != z_26)))
          _fail(z_26);
        else
          y_26 = z_26;
        t = SSL_ReadFromFile(not_null(y_26));
      }
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm i_1 (ATerm t)
        {
          t = term_j_9;
          return(t);
        }
        t = debug_1(t, i_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  ATerm d_27 = NULL,f_27 = NULL;
  ATerm k_9;
  k_9 = t;
  {
    ATerm e_27 = NULL;
    t = g_79(t);
    {
      e_27 = t;
      if(((d_27 != NULL) && (d_27 != e_27)))
        _fail(e_27);
      else
        d_27 = e_27;
    }
  }
  t = k_9;
  {
    ATerm g_27 = NULL;
    t = h_79(t);
    {
      g_27 = t;
      if(((f_27 != NULL) && (f_27 != g_27)))
        _fail(g_27);
      else
        f_27 = g_27;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_27), not_null(f_27));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_27 = NULL;
  ATerm l_9;
  l_9 = t;
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 (ATerm t)
        {
          ATerm s_27 = NULL,t_27 = NULL;
          s_27 = t;
          n_27 :
          if(match_cons(s_27, sym_Input_1))
            {
              t_27 = ATgetArgument(s_27, 0);
              if(((r_27 != NULL) && (r_27 != t_27)))
                _fail(t_27);
              else
                r_27 = t_27;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, j_1);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          ATerm u_27 = NULL;
          t = term_o_9;
          {
            u_27 = t;
            if(((r_27 != NULL) && (r_27 != u_27)))
              _fail(u_27);
            else
              r_27 = u_27;
          }
        }
      }
  }
  t = l_9;
  {
    ATerm k_1 (ATerm t)
    {
      t = not_null(r_27);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm y_27 = NULL;
    y_27 = t;
    x_27 :
    if(!(match_string(y_27, "-v")))
      {
        if(!(match_string(y_27, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_v_9;
    t = set_config_0(t);
    t = term_w_9;
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  t = Option_3(t, l_1, m_1, n_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm b_28 = NULL;
    b_28 = t;
    z_27 :
    if(!(match_string(b_28, "-k")))
      {
        if(!(match_string(b_28, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm c_10;
    c_10 = t;
    {
      ATerm c_28 = NULL;
      ATerm d_28 = NULL;
      t = string_to_int_0(t);
      {
        d_28 = t;
        if(((c_28 != NULL) && (c_28 != d_28)))
          _fail(d_28);
        else
          c_28 = d_28;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(c_28));
        t = set_config_0(t);
      }
    }
    t = c_10;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_g_10;
    return(t);
  }
  t = ArgOption_3(t, o_1, p_1, q_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_string_to_int(not_null(g_28));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm o_28 = NULL;
        o_28 = t;
        j_28 :
        if(!(match_string(o_28, "-S")))
          {
            if(!(match_string(o_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_k_10;
        t = set_config_0(t);
        t = term_l_10;
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_m_10;
        return(t);
      }
      t = Option_3(t, r_1, s_1, t_1);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              ATerm p_28 = NULL;
              p_28 = t;
              k_28 :
              if(!(match_string(p_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              ATerm s_28 = NULL;
              ATerm p_10;
              p_10 = t;
              {
                ATerm q_28 = NULL;
                ATerm r_28 = NULL;
                t = string_to_int_0(t);
                {
                  r_28 = t;
                  if(((q_28 != NULL) && (q_28 != r_28)))
                    _fail(r_28);
                  else
                    q_28 = r_28;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_8, not_null(q_28));
                  t = set_config_0(t);
                }
              }
              t = p_10;
              {
                ATerm t_28 = NULL;
                t_28 = t;
                if(((s_28 != NULL) && (s_28 != t_28)))
                  _fail(t_28);
                else
                  s_28 = t_28;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_28));
              }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              t = term_v_10;
              return(t);
            }
            t = ArgOption_3(t, u_1, v_1, w_1);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            {
              ATerm x_1 (ATerm t)
              {
                ATerm u_28 = NULL;
                u_28 = t;
                n_28 :
                if(!(match_string(u_28, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_1 (ATerm t)
              {
                t = term_x_10;
                t = set_config_0(t);
                t = term_y_10;
                return(t);
              }
              ATerm z_1 (ATerm t)
              {
                t = term_c_11;
                return(t);
              }
              t = Option_3(t, x_1, y_1, z_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm e_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = e_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm a_29 = NULL;
    a_29 = t;
    x_28 :
    if(!(match_string(a_29, "-o")))
      {
        if(!(match_string(a_29, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm d_29 = NULL;
    ATerm l_11;
    l_11 = t;
    {
      ATerm b_29 = NULL;
      ATerm c_29 = NULL;
      c_29 = t;
      if(((b_29 != NULL) && (b_29 != c_29)))
        _fail(c_29);
      else
        b_29 = c_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_11, not_null(b_29));
        t = set_config_0(t);
      }
    }
    t = l_11;
    {
      ATerm e_29 = NULL;
      e_29 = t;
      if(((d_29 != NULL) && (d_29 != e_29)))
        _fail(e_29);
      else
        d_29 = e_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_29));
    }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_n_11;
    return(t);
  }
  t = ArgOption_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm d_2 (ATerm t)
        {
          ATerm i_29 = NULL;
          i_29 = t;
          h_29 :
          if(!(match_string(i_29, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = term_r_11;
          t = set_config_0(t);
          t = term_s_11;
          return(t);
        }
        ATerm f_2 (ATerm t)
        {
          t = term_t_11;
          return(t);
        }
        t = Option_3(t, d_2, e_2, f_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL;
  o_29 = t;
  m_29 :
  if(match_string(o_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_29) == AT_LIST) && !(ATisEmpty(o_29))))
        {
          p_29 = ATgetFirst((ATermList) o_29);
          q_29 = (ATerm) ATgetNext((ATermList) o_29);
          n_29 :
          if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
            {
              r_29 = ATgetFirst((ATermList) q_29);
              s_29 = (ATerm) ATgetNext((ATermList) q_29);
              {
                ATerm w_29 = NULL;
                ATerm u_11;
                u_11 = t;
                {
                  t = not_null(p_29);
                  t = j_0(t);
                }
                t = u_11;
                {
                  ATerm x_29 = NULL;
                  t = not_null(r_29);
                  {
                    t = k_0(t);
                    {
                      x_29 = t;
                      if(((w_29 != NULL) && (w_29 != x_29)))
                        _fail(x_29);
                      else
                        w_29 = x_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_29)), not_null(w_29));
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
    ATerm e_30 = NULL;
    e_30 = t;
    b_30 :
    if(!(match_string(e_30, "-i")))
      {
        if(!(match_string(e_30, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm h_30 = NULL;
    ATerm a_12;
    a_12 = t;
    {
      ATerm f_30 = NULL;
      ATerm g_30 = NULL;
      g_30 = t;
      if(((f_30 != NULL) && (f_30 != g_30)))
        _fail(g_30);
      else
        f_30 = g_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(f_30));
        t = set_config_0(t);
      }
    }
    t = a_12;
    {
      ATerm i_30 = NULL;
      i_30 = t;
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_30));
    }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_c_12;
    return(t);
  }
  t = ArgOption_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = d_12;
      {
        ATerm j_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = j_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_o_12));
  {
    t = printnl_0(t);
    {
      t = term_k_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_TicksToSeconds(not_null(m_30));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  q_30 :
  if(match_cons(r_30, sym__2))
    {
      s_30 = ATgetArgument(r_30, 0);
      t_30 = ATgetArgument(r_30, 1);
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_30), not_null(t_30));
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = SSL_addr(not_null(s_30), not_null(t_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm))
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_77(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
        ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
        a_31 = t;
        z_30 :
        if(((ATgetType(a_31) == AT_LIST) && !(ATisEmpty(a_31))))
          {
            b_31 = ATgetFirst((ATermList) a_31);
            c_31 = (ATerm) ATgetNext((ATermList) a_31);
            {
              ATerm f_31 = NULL;
              ATerm g_31 = NULL;
              t = not_null(c_31);
              {
                t = foldr_2(t, r_77, s_77);
                {
                  g_31 = t;
                  if(((f_31 != NULL) && (f_31 != g_31)))
                    _fail(g_31);
                  else
                    f_31 = g_31;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), not_null(f_31));
                t = s_77(t);
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
ATerm crush_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm n_31 = NULL;
  ATerm p_31 = NULL;
  n_31 = t;
  {
    ATerm q_31 = NULL;
    ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
    t = not_null(n_31);
    {
      q_31 = t;
      {
        t = SSL_explode_term(not_null(q_31));
        {
          s_31 = t;
          m_31 :
          if(match_cons(s_31, sym__2))
            {
              t_31 = ATgetArgument(s_31, 0);
              u_31 = ATgetArgument(s_31, 1);
              if(((p_31 != NULL) && (p_31 != u_31)))
                _fail(u_31);
              else
                p_31 = u_31;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_31);
      t = foldr_2(t, p_76, q_76);
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
    ATerm j_2 (ATerm t)
    {
      t = term_j_10;
      return(t);
    }
    t = crush_2(t, j_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  z_31 :
  if(match_cons(b_32, sym__2))
    {
      c_32 = ATgetArgument(b_32, 0);
      d_32 = ATgetArgument(b_32, 1);
      {
        ATerm t_12;
        t_12 = t;
        {
          ATerm u_12 = t;
          int v_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_32), not_null(d_32));
              ;
              LocalPopChoice(v_12);
            }
          else
            {
              t = u_12;
              t = SSL_gtr(not_null(c_32), not_null(d_32));
            }
        }
        t = t_12;
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
  ATerm j_32 = NULL;
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
      k_32 = t;
      i_32 :
      if(match_cons(k_32, sym__2))
        {
          l_32 = ATgetArgument(k_32, 0);
          m_32 = ATgetArgument(k_32, 1);
          {
            if(((j_32 != NULL) && (j_32 != l_32)))
              _fail(l_32);
            else
              j_32 = l_32;
            if(((j_32 != NULL) && (j_32 != m_32)))
              _fail(m_32);
            else
              j_32 = m_32;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm b_13;
    b_13 = t;
    {
      ATerm p_32 = NULL;
      ATerm q_32 = NULL;
      t = term_o_8;
      {
        t = get_config_0(t);
        {
          q_32 = t;
          if(((p_32 != NULL) && (p_32 != q_32)))
            _fail(q_32);
          else
            p_32 = q_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_32), term_k_7);
        t = geq_0(t);
      }
    }
    t = b_13;
    t = i_91(t);
    return(t);
  }
  t = try_1(t, k_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm u_32 = NULL,w_32 = NULL;
    ATerm c_13;
    c_13 = t;
    {
      ATerm v_32 = NULL;
      t = run_time_0(t);
      {
        v_32 = t;
        if(((u_32 != NULL) && (u_32 != v_32)))
          _fail(v_32);
        else
          u_32 = v_32;
      }
    }
    t = c_13;
    {
      ATerm x_32 = NULL;
      t = term_g_13;
      {
        t = get_config_0(t);
        {
          x_32 = t;
          if(((w_32 != NULL) && (w_32 != x_32)))
            _fail(x_32);
          else
            w_32 = x_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_13), not_null(u_32)), term_j_13), not_null(w_32)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, l_2);
  {
    t = term_j_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_33 = NULL;
  g_33 = t;
  f_33 :
  if(match_cons(g_33, sym_Version_0))
    {
      ATerm i_33 = NULL,k_33 = NULL;
      ATerm l_13;
      l_13 = t;
      {
        ATerm j_33 = NULL;
        t = SSLgetAnnotations(not_null(g_33));
        {
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
        }
      }
      t = l_13;
      {
        ATerm l_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_33));
        {
          l_33 = t;
          if(((k_33 != NULL) && (k_33 != l_33)))
            _fail(l_33);
          else
            k_33 = l_33;
        }
        t = not_null(k_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_68 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_2);
  t = x_68(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  t = SSL_table_create(not_null(q_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  {
    ATerm r_13;
    r_13 = t;
    {
      t = term_t_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_13, term_u_13, not_null(u_33));
          t = table_put_0(t);
        }
      }
    }
    t = r_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  t = SSL_table_destroy(not_null(y_33));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_34 = NULL;
  c_34 = t;
  t = SSL_exit(not_null(c_34));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,j_34 = NULL;
  g_34 = t;
  f_34 :
  if(((ATgetType(g_34) == AT_LIST) && ATisEmpty(g_34)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
        {
          h_34 = ATgetFirst((ATermList) g_34);
          j_34 = (ATerm) ATgetNext((ATermList) g_34);
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
  ATerm v_13;
  v_13 = t;
  {
    ATerm m_34 = NULL;
    ATerm p_34 = NULL;
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          ATerm n_34 = NULL;
          ATerm o_34 = NULL;
          o_34 = t;
          if(((n_34 != NULL) && (n_34 != o_34)))
            _fail(o_34);
          else
            n_34 = o_34;
          t = (ATerm) ATinsert(ATempty, not_null(n_34));
        }
      }
    {
      p_34 = t;
      if(((m_34 != NULL) && (m_34 != p_34)))
        _fail(p_34);
      else
        m_34 = p_34;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, not_null(m_34));
      t = printnl_0(t);
    }
  }
  t = v_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_71 (ATerm))
{
  ATerm s_34 (ATerm t)
  {
    ATerm d_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = d_14;
        t = Cons_2(t, d_71, s_34);
      }
    return(t);
  }
  t = s_34(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  b_35 = t;
  y_34 :
  if(((ATgetType(b_35) == AT_LIST) && !(ATisEmpty(b_35))))
    {
      z_34 = ATgetFirst((ATermList) b_35);
      a_35 = (ATerm) ATgetNext((ATermList) b_35);
      {
        ATerm e_35 = NULL;
        t = not_null(a_35);
        {
          ATerm k_14;
          k_14 = t;
          {
            ATerm f_35 = NULL,h_35 = NULL,j_35 = NULL;
            ATerm l_14;
            l_14 = t;
            {
              ATerm g_35 = NULL;
              t = i_0(t);
              {
                g_35 = t;
                if(((f_35 != NULL) && (f_35 != g_35)))
                  _fail(g_35);
                else
                  f_35 = g_35;
              }
            }
            t = l_14;
            {
              ATerm i_35 = NULL;
              t = not_null(z_34);
              {
                t = h_0(t);
                {
                  i_35 = t;
                  if(((h_35 != NULL) && (h_35 != i_35)))
                    _fail(i_35);
                  else
                    h_35 = i_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_35)), not_null(h_35));
                {
                  j_35 = t;
                  if(((e_35 != NULL) && (e_35 != j_35)))
                    _fail(j_35);
                  else
                    e_35 = j_35;
                }
              }
            }
          }
          t = k_14;
          {
            ATerm n_2 (ATerm t)
            {
              t = not_null(e_35);
              return(t);
            }
            t = reverse_acc_2(t, h_0, n_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_35) == AT_LIST) && ATisEmpty(b_35)))
        {
          {
            t = term_u_9;
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
  ATerm o_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_67 (ATerm))
{
  ATerm u_35 = NULL,v_35 = NULL;
  u_35 = t;
  t_35 :
  if(match_cons(u_35, sym_Program_1))
    {
      v_35 = ATgetArgument(u_35, 0);
      {
        ATerm a_36 = NULL,c_36 = NULL;
        ATerm b_36 = NULL;
        t = SSLgetAnnotations(not_null(u_35));
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
        {
          t = not_null(v_35);
          {
            ATerm g_36 = NULL;
            t = y_67(t);
            {
              c_36 = t;
              {
                ATerm h_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_36)), not_null(a_36));
                {
                  h_36 = t;
                  if(((g_36 != NULL) && (g_36 != h_36)))
                    _fail(h_36);
                  else
                    g_36 = h_36;
                }
                t = not_null(g_36);
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
  ATerm q_36 = NULL;
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_36 = NULL;
      t = term_g_13;
      {
        t = get_config_0(t);
        {
          r_36 = t;
          if(((q_36 != NULL) && (q_36 != r_36)))
            _fail(r_36);
          else
            q_36 = r_36;
        }
      }
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm s_36 = NULL;
            s_36 = t;
            if(((q_36 != NULL) && (q_36 != s_36)))
              _fail(s_36);
            else
              q_36 = s_36;
            return(t);
          }
          t = Program_1(t, q_2);
          return(t);
        }
        t = option_defined_1(t, p_2);
      }
    }
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(q_36);
        return(t);
      }
      t = short_description_1(t, s_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, r_2);
    {
      t = term_t_14;
      {
        t = echo_0(t);
        {
          t = term_y_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_2 (ATerm t)
                {
                  ATerm t_36 = NULL;
                  ATerm u_36 = NULL;
                  u_36 = t;
                  if(((t_36 != NULL) && (t_36 != u_36)))
                    _fail(u_36);
                  else
                    t_36 = u_36;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_36)), term_z_14);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_2);
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm v_36 = NULL;
                    ATerm w_36 = NULL;
                    ATerm v_2 (ATerm t)
                    {
                      t = not_null(q_36);
                      return(t);
                    }
                    t = long_description_1(t, v_2);
                    {
                      w_36 = t;
                      if(((v_36 != NULL) && (v_36 != w_36)))
                        _fail(w_36);
                      else
                        v_36 = w_36;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_36)), term_a_15);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_2);
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
  ATerm b_15;
  b_15 = t;
  {
    ATerm c_37 = NULL;
    ATerm f_37 = NULL;
    f_37 = t;
    if(((c_37 != NULL) && (c_37 != f_37)))
      _fail(f_37);
    else
      c_37 = f_37;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(c_37)));
      t = printnl_0(t);
    }
  }
  t = b_15;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm c_15;
  c_15 = t;
  {
    t = i_70(t);
    t = debug_0(t);
  }
  t = c_15;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_67 (ATerm))
{
  ATerm n_37 = NULL,o_37 = NULL;
  n_37 = t;
  m_37 :
  if(match_cons(n_37, sym_Undefined_1))
    {
      o_37 = ATgetArgument(n_37, 0);
      {
        ATerm r_37 = NULL,t_37 = NULL;
        ATerm s_37 = NULL;
        t = SSLgetAnnotations(not_null(n_37));
        {
          s_37 = t;
          if(((r_37 != NULL) && (r_37 != s_37)))
            _fail(s_37);
          else
            r_37 = s_37;
        }
        {
          t = not_null(o_37);
          {
            ATerm v_37 = NULL;
            t = z_67(t);
            {
              t_37 = t;
              {
                ATerm w_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_37)), not_null(r_37));
                {
                  w_37 = t;
                  if(((v_37 != NULL) && (v_37 != w_37)))
                    _fail(w_37);
                  else
                    v_37 = w_37;
                }
                t = not_null(v_37);
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
ATerm fetch_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm e_38 (ATerm t)
  {
    ATerm d_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_71, _id);
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = d_15;
        t = Cons_2(t, _id, e_38);
      }
    return(t);
  }
  t = e_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_81 (ATerm))
{
  t = fetch_1(t, q_81);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym_Help_0))
    {
      ATerm l_38 = NULL,n_38 = NULL;
      ATerm k_15;
      k_15 = t;
      {
        ATerm m_38 = NULL;
        t = SSLgetAnnotations(not_null(j_38));
        {
          m_38 = t;
          if(((l_38 != NULL) && (l_38 != m_38)))
            _fail(m_38);
          else
            l_38 = m_38;
        }
      }
      t = k_15;
      {
        ATerm o_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_38));
        {
          o_38 = t;
          if(((n_38 != NULL) && (n_38 != o_38)))
            _fail(o_38);
          else
            n_38 = o_38;
        }
        t = not_null(n_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_82 (ATerm))
{
  ATerm n_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_82(t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = n_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym__2))
    {
      v_38 = ATgetArgument(u_38, 0);
      w_38 = ATgetArgument(u_38, 1);
      t = SSL_table_get(not_null(v_38), not_null(w_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym__3))
    {
      e_39 = ATgetArgument(d_39, 0);
      f_39 = ATgetArgument(d_39, 1);
      g_39 = ATgetArgument(d_39, 2);
      {
        ATerm r_15;
        r_15 = t;
        {
          ATerm r_39 = NULL;
          ATerm s_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_39), not_null(f_39));
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
                t = (ATerm) ATempty;
              }
            {
              s_39 = t;
              if(((r_39 != NULL) && (r_39 != s_39)))
                _fail(s_39);
              else
                r_39 = s_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_39), not_null(f_39), (ATerm) ATinsert(CheckATermList(not_null(r_39)), not_null(g_39)));
            t = table_put_0(t);
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
ATerm register_usage_1 (ATerm t, ATerm v_82 (ATerm))
{
  ATerm w_39 = NULL;
  ATerm x_39 = NULL;
  t = term_u_9;
  {
    t = v_82(t);
    {
      x_39 = t;
      if(((w_39 != NULL) && (w_39 != x_39)))
        _fail(x_39);
      else
        w_39 = x_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_14, term_x_14, not_null(w_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  d_40 = t;
  c_40 :
  if(match_string(d_40, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
        {
          e_40 = ATgetFirst((ATermList) d_40);
          f_40 = (ATerm) ATgetNext((ATermList) d_40);
          {
            ATerm i_40 = NULL;
            ATerm u_15;
            u_15 = t;
            {
              t = not_null(e_40);
              t = a_0(t);
            }
            t = u_15;
            {
              ATerm j_40 = NULL;
              t = term_u_9;
              {
                t = d_0(t);
                {
                  j_40 = t;
                  if(((i_40 != NULL) && (i_40 != j_40)))
                    _fail(j_40);
                  else
                    i_40 = j_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_40)), not_null(i_40));
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
  ATerm w_2 (ATerm t)
  {
    ATerm p_40 = NULL;
    p_40 = t;
    o_40 :
    if(!(match_string(p_40, "--help")))
      {
        if(!(match_string(p_40, "-h")))
          {
            if(!(match_string(p_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_w_15;
    {
      t = set_config_0(t);
      t = term_b_16;
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_c_16;
    return(t);
  }
  t = Option_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(((ATgetType(s_40) == AT_LIST) && !(ATisEmpty(s_40))))
    {
      t_40 = ATgetFirst((ATermList) s_40);
      u_40 = (ATerm) ATgetNext((ATermList) s_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm))
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  e_41 = t;
  d_41 :
  if(((ATgetType(e_41) == AT_LIST) && !(ATisEmpty(e_41))))
    {
      f_41 = ATgetFirst((ATermList) e_41);
      g_41 = (ATerm) ATgetNext((ATermList) e_41);
      {
        ATerm k_41 = NULL,m_41 = NULL;
        ATerm l_41 = NULL;
        t = SSLgetAnnotations(not_null(e_41));
        {
          l_41 = t;
          if(((k_41 != NULL) && (k_41 != l_41)))
            _fail(l_41);
          else
            k_41 = l_41;
        }
        {
          t = not_null(f_41);
          {
            ATerm o_41 = NULL;
            t = r_56(t);
            {
              m_41 = t;
              {
                t = not_null(g_41);
                {
                  ATerm q_41 = NULL;
                  t = s_56(t);
                  {
                    o_41 = t;
                    {
                      ATerm r_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_41)), not_null(m_41)), not_null(k_41));
                      {
                        r_41 = t;
                        if(((q_41 != NULL) && (q_41 != r_41)))
                          _fail(r_41);
                        else
                          q_41 = r_41;
                      }
                      t = not_null(q_41);
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
  ATerm b_42 = NULL;
  b_42 = t;
  a_42 :
  if(((ATgetType(b_42) == AT_LIST) && ATisEmpty(b_42)))
    {
      {
        ATerm i_42 = NULL,k_42 = NULL;
        ATerm d_16;
        d_16 = t;
        {
          ATerm j_42 = NULL;
          t = SSLgetAnnotations(not_null(b_42));
          {
            j_42 = t;
            if(((i_42 != NULL) && (i_42 != j_42)))
              _fail(j_42);
            else
              i_42 = j_42;
          }
        }
        t = d_16;
        {
          ATerm l_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_42));
          {
            l_42 = t;
            if(((k_42 != NULL) && (k_42 != l_42)))
              _fail(l_42);
            else
              k_42 = l_42;
          }
          t = not_null(k_42);
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
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym__2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_8, not_null(w_42), not_null(x_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_82 (ATerm))
{
  ATerm e_16;
  e_16 = t;
  {
    ATerm z_2 (ATerm t)
    {
      t = term_h_16;
      t = t_82(t);
      return(t);
    }
    t = try_1(t, z_2);
  }
  t = e_16;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm f_43 = NULL;
      ATerm i_16;
      i_16 = t;
      {
        ATerm d_43 = NULL;
        ATerm e_43 = NULL;
        e_43 = t;
        if(((d_43 != NULL) && (d_43 != e_43)))
          _fail(e_43);
        else
          d_43 = e_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_13, not_null(d_43));
          t = set_config_0(t);
        }
      }
      t = i_16;
      {
        ATerm g_43 = NULL;
        g_43 = t;
        if(((f_43 != NULL) && (f_43 != g_43)))
          _fail(g_43);
        else
          f_43 = g_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_43));
      }
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      ATerm n_16 = t;
      int o_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(v_16);
            }
          else
            {
              t = p_16;
              {
                t = t_82(t);
                t = Cons_2(t, _id, b_3);
              }
            }
          ;
          LocalPopChoice(o_16);
        }
      else
        {
          t = n_16;
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
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
    p_43 = t;
    l_43 :
    if(match_cons(p_43, sym__3))
      {
        q_43 = ATgetArgument(p_43, 0);
        r_43 = ATgetArgument(p_43, 1);
        s_43 = ATgetArgument(p_43, 2);
        {
          if(((m_43 != NULL) && (m_43 != q_43)))
            _fail(q_43);
          else
            m_43 = q_43;
          {
            if(((n_43 != NULL) && (n_43 != r_43)))
              _fail(r_43);
            else
              n_43 = r_43;
            {
              if(((o_43 != NULL) && (o_43 != s_43)))
                _fail(s_43);
              else
                o_43 = s_43;
              t = SSL_table_put(not_null(m_43), not_null(n_43), not_null(o_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_82 (ATerm))
{
  ATerm v_43 = NULL;
  ATerm x_16;
  x_16 = t;
  {
    t = term_y_16;
    t = table_put_0(t);
  }
  t = x_16;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm z_16 = t;
      int a_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_82(t);
          ;
          LocalPopChoice(a_17);
        }
      else
        {
          t = z_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_3);
    {
      ATerm d_3 (ATerm t)
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_17;
            l_17 = t;
            {
              ATerm m_17 = t;
              int p_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(p_17);
                }
              else
                {
                  t = m_17;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = l_17;
            {
              t = system_usage_0(t);
              {
                t = term_j_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm f_3 (ATerm t)
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm w_43 = NULL;
                  w_43 = t;
                  if(((v_43 != NULL) && (v_43 != w_43)))
                    _fail(w_43);
                  else
                    v_43 = w_43;
                  return(t);
                }
                t = Undefined_1(t, g_3);
                return(t);
              }
              t = option_defined_1(t, f_3);
              {
                ATerm h_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_43)), term_q_17);
                  return(t);
                }
                t = say_1(t, h_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_3);
      {
        ATerm r_17;
        r_17 = t;
        {
          t = term_u_14;
          t = table_destroy_0(t);
        }
        t = r_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm))
{
  t = parse_options_1(t, d_69);
  {
    t = store_options_0(t);
    {
      t = f_69(t);
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_69);
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            {
              ATerm b_18 = t;
              int c_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_69(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(c_18);
                }
              else
                {
                  t = b_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_69(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, u_69);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, i_3, w_69, x_69, j_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm f_18;
      f_18 = t;
      {
        ATerm z_43 = NULL;
        ATerm a_44 = NULL;
        t = term_g_13;
        {
          t = get_config_0(t);
          {
            a_44 = t;
            if(((z_43 != NULL) && (z_43 != a_44)))
              _fail(a_44);
            else
              z_43 = a_44;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(z_43)));
          t = printnl_0(t);
        }
      }
      t = f_18;
      return(t);
    }
    t = if_verbose2_1(t, l_3);
    return(t);
  }
  t = iowrap_4(t, o_69, p_69, q_69, k_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  t = iowrap_3(t, m_69, n_69, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_69 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    t = _2(t, _id, j_69);
    return(t);
  }
  t = iowrap_2(t, m_3, _fail);
  return(t);
}
ATerm stratego_ensugar_0 (ATerm t)
{
  t = iowrap_1(t, Stratego_Ensugar_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_ensugar_0(t);
  return(t);
}
