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
ATerm term_o_17;
ATerm term_p_16;
ATerm term_b_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_b_13;
ATerm term_x_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_v_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_s_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_f_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_n_4;
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
ATerm term_m_3;
ATerm term_l_3;
ATerm term_k_3;
ATerm term_j_3;
void init_constant_terms (void)
{
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_v_6);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_f_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_v_6);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_v_6);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_u_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_v_6);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, (ATerm) ATempty);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm member_0 (ATerm);
ATerm AddLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm z_57 (ATerm), ATerm a_58 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm l_57 (ATerm), ATerm m_57 (ATerm));
ATerm SVar_1 (ATerm, ATerm s_60 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm SDef_3 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm RDef_3 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm u_59 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm c_63 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm y_93 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm is_quoted_chars_0 (ATerm);
ATerm is_quoted_0 (ATerm);
ATerm is_double_quoted_0 (ATerm);
ATerm Ensugar_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm c_84 (ATerm));
ATerm topdown_1 (ATerm, ATerm a_94 (ATerm));
ATerm Stratego_Ensugar_0 (ATerm);
ATerm _2 (ATerm, ATerm k_55 (ATerm), ATerm l_55 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_91 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_68 (ATerm));
ATerm debug_1 (ATerm, ATerm v_70 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_79 (ATerm), ATerm r_79 (ATerm));
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
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_78 (ATerm), ATerm c_78 (ATerm));
ATerm crush_2 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_91 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_69 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_83 (ATerm));
ATerm map_1 (ATerm, ATerm r_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_83 (ATerm));
ATerm Program_1 (ATerm, ATerm a_68 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_82 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_83 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_56 (ATerm), ATerm u_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_83 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_83 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm c_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_69 (ATerm), ATerm h_69 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_69 (ATerm));
ATerm stratego_ensugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm member_0 (ATerm t)
{
  ATerm e_3 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm s_3 = NULL;
    s_3 = t;
    if(((e_3 != NULL) && (e_3 != s_3)))
      _fail(s_3);
    else
      e_3 = s_3;
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm f_0 (ATerm t)
    {
      ATerm t_3 = NULL;
      t_3 = t;
      if(((e_3 != NULL) && (e_3 != t_3)))
        _fail(t_3);
      else
        e_3 = t_3;
      return(t);
    }
    t = fetch_1(t, f_0);
    return(t);
  }
  t = _2(t, c_0, e_0);
  return(t);
}
ATerm AddLeadingPrime_0 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm o_4 = NULL;
  m_4 = t;
  {
    ATerm r_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_4), term_f_4), term_e_4), term_d_4), term_c_4), term_b_4), term_a_4), term_z_3), term_y_3), term_x_3), term_w_3), term_v_3), term_u_3), term_r_3), term_q_3), term_p_3), term_o_3), term_n_3), term_m_3), term_l_3), term_k_3), term_j_3));
    {
      t = member_0(t);
      {
        t = not_null(m_4);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm p_4 = NULL;
            ATerm q_4 = NULL;
            q_4 = t;
            if(((p_4 != NULL) && (p_4 != q_4)))
              _fail(q_4);
            else
              p_4 = q_4;
            t = (ATerm) ATinsert(CheckATermList(not_null(p_4)), term_h_4);
            return(t);
          }
          t = string_as_chars_1(t, h_0);
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
ATerm Op_2 (ATerm t, ATerm z_57 (ATerm), ATerm a_58 (ATerm))
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
            t = z_57(t);
            {
              j_5 = t;
              {
                t = not_null(d_5);
                {
                  ATerm n_5 = NULL;
                  t = a_58(t);
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
ATerm OpDecl_2 (ATerm t, ATerm l_57 (ATerm), ATerm m_57 (ATerm))
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
            t = l_57(t);
            {
              i_6 = t;
              {
                t = not_null(c_6);
                {
                  ATerm m_6 = NULL;
                  t = m_57(t);
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
ATerm SVar_1 (ATerm t, ATerm s_60 (ATerm))
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
            t = s_60(t);
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
        ATerm i_4 = t;
        int j_4 = stack_ptr;
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
            LocalPopChoice(j_4);
          }
        else
          {
            t = i_4;
            {
              ATerm k_4 = t;
              int l_4 = stack_ptr;
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
                  LocalPopChoice(l_4);
                }
              else
                {
                  t = k_4;
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
ATerm VarDec_2 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm))
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
            t = d_63(t);
            {
              z_9 = t;
              {
                t = not_null(t_9);
                {
                  ATerm d_10 = NULL;
                  t = e_63(t);
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
ATerm SDef_3 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm j_63 (ATerm))
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
            t = h_63(t);
            {
              b_11 = t;
              {
                t = not_null(t_10);
                {
                  ATerm f_11 = NULL;
                  t = i_63(t);
                  {
                    d_11 = t;
                    {
                      t = not_null(u_10);
                      {
                        ATerm h_11 = NULL;
                        t = j_63(t);
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
ATerm RDef_3 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm u_59 (ATerm))
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
            t = s_59(t);
            {
              g_12 = t;
              {
                t = not_null(y_11);
                {
                  ATerm k_12 = NULL;
                  t = t_59(t);
                  {
                    i_12 = t;
                    {
                      t = not_null(z_11);
                      {
                        ATerm m_12 = NULL;
                        t = u_59(t);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm c_63 (ATerm))
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
            t = c_63(t);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_14)), term_s_4), term_n_4);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_14)), term_n_4), term_n_4);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_14)), term_t_4), term_n_4);
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
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(v_4);
    }
  else
    {
      t = u_4;
      {
        ATerm w_4 = t;
        int x_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(x_4);
          }
        else
          {
            t = w_4;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm y_4 = t;
  int z_4 = stack_ptr;
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
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm is_double_quoted_chars_0 (ATerm t)
{
  ATerm g_5;
  g_5 = t;
  {
    ATerm v_14 = NULL;
    ATerm w_14 = NULL;
    w_14 = t;
    if(((v_14 != NULL) && (v_14 != w_14)))
      _fail(w_14);
    else
      v_14 = w_14;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_4, not_null(v_14));
      t = is_quoted_chars_0(t);
    }
  }
  t = g_5;
  return(t);
}
ATerm EnsugarOnce_0 (ATerm t)
{
  ATerm k_5 = t;
  int m_5 = stack_ptr;
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
                ATerm p_5 = t;
                if((PushChoice() == 0))
                  {
                    t = is_double_quoted_chars_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_5;
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
      LocalPopChoice(m_5);
    }
  else
    {
      t = k_5;
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, AddLeadingPrime_0);
            ;
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            {
              ATerm s_5 = t;
              int t_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3(t, AddLeadingPrime_0, _id, _id);
                  ;
                  LocalPopChoice(t_5);
                }
              else
                {
                  t = s_5;
                  {
                    ATerm u_5 = t;
                    int v_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3(t, AddLeadingPrime_0, _id, _id);
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
                              t = VarDec_2(t, AddLeadingPrime_0, _id);
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
                                    t = Var_1(t, AddLeadingPrime_0);
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
                                          t = SVar_1(t, AddLeadingPrime_0);
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
                                                t = OpDecl_2(t, AddLeadingPrime_0, _id);
                                                ;
                                                LocalPopChoice(l_6);
                                              }
                                            else
                                              {
                                                t = j_6;
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
    t = (ATerm) ATmakeAppl(sym__2, term_t_4, not_null(f_16));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm y_93 (ATerm))
{
  t = explode_string_0(t);
  {
    t = y_93(t);
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
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm is_quoted_chars_0 (ATerm t)
{
  ATerm d_17 = NULL;
  ATerm q_6;
  q_6 = t;
  {
    ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
    e_17 = t;
    c_17 :
    if(match_cons(e_17, sym__2))
      {
        f_17 = ATgetArgument(e_17, 0);
        g_17 = ATgetArgument(e_17, 1);
        {
          ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
          if(((d_17 != NULL) && (d_17 != f_17)))
            _fail(f_17);
          else
            d_17 = f_17;
          {
            if(((h_17 != NULL) && (h_17 != g_17)))
              _fail(g_17);
            else
              h_17 = g_17;
            {
              t = not_null(h_17);
              {
                i_17 = t;
                b_17 :
                if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
                  {
                    j_17 = ATgetFirst((ATermList) i_17);
                    k_17 = (ATerm) ATgetNext((ATermList) i_17);
                    {
                      ATerm l_17 = NULL,m_17 = NULL;
                      if(((d_17 != NULL) && (d_17 != j_17)))
                        _fail(j_17);
                      else
                        d_17 = j_17;
                      {
                        if(((l_17 != NULL) && (l_17 != k_17)))
                          _fail(k_17);
                        else
                          l_17 = k_17;
                        {
                          t = not_null(l_17);
                          {
                            t = last_0(t);
                            {
                              m_17 = t;
                              if(((d_17 != NULL) && (d_17 != m_17)))
                                _fail(m_17);
                              else
                                d_17 = m_17;
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
  t = q_6;
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
  ATerm r_6;
  r_6 = t;
  {
    ATerm r_17 = NULL;
    ATerm s_17 = NULL;
    s_17 = t;
    if(((r_17 != NULL) && (r_17 != s_17)))
      _fail(s_17);
    else
      r_17 = s_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_4, not_null(r_17));
      t = is_quoted_0(t);
    }
  }
  t = r_6;
  return(t);
}
ATerm Ensugar_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  y_17 :
  if(match_cons(c_18, sym_StratRule_3))
    {
      d_18 = ATgetArgument(c_18, 0);
      e_18 = ATgetArgument(c_18, 1);
      b_18 = ATgetArgument(c_18, 2);
      z_17 :
      if(match_cons(b_18, sym_Id_0))
        {
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, not_null(d_18), not_null(e_18));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(c_18, sym_Rule_3))
        {
          d_18 = ATgetArgument(c_18, 0);
          e_18 = ATgetArgument(c_18, 1);
          b_18 = ATgetArgument(c_18, 2);
          a_18 :
          if(match_cons(b_18, sym_Id_0))
            {
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, not_null(d_18), not_null(e_18));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(c_18, sym_Prim_2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              {
                ATerm l_18 = NULL;
                ATerm s_6;
                s_6 = t;
                {
                  t = not_null(d_18);
                  {
                    ATerm t_6 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_double_quoted_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = t_6;
                      }
                  }
                }
                t = s_6;
                {
                  ATerm m_18 = NULL;
                  t = not_null(d_18);
                  {
                    t = double_quote_0(t);
                    {
                      m_18 = t;
                      if(((l_18 != NULL) && (l_18 != m_18)))
                        _fail(m_18);
                      else
                        l_18 = m_18;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_18), not_null(e_18));
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
ATerm repeat_1 (ATerm t, ATerm c_84 (ATerm))
{
  ATerm r_18 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = c_84(t);
      t = r_18(t);
      return(t);
    }
    t = try_1(t, p_0);
    return(t);
  }
  t = r_18(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_94 (ATerm))
{
  t = a_94(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = topdown_1(t, a_94);
      return(t);
    }
    t = _all(t, q_0);
  }
  return(t);
}
ATerm Stratego_Ensugar_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm z_18 = NULL;
    ATerm b_19 = NULL;
    z_18 = t;
    {
      ATerm c_19 = NULL;
      ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
      t = not_null(z_18);
      {
        c_19 = t;
        {
          t = SSL_explode_term(not_null(c_19));
          {
            e_19 = t;
            v_18 :
            if(match_cons(e_19, sym__2))
              {
                f_19 = ATgetArgument(e_19, 0);
                g_19 = ATgetArgument(e_19, 1);
                w_18 :
                if(match_string(f_19, ""))
                  {
                    x_18 :
                    if(((ATgetType(g_19) == AT_LIST) && !(ATisEmpty(g_19))))
                      {
                        h_19 = ATgetFirst((ATermList) g_19);
                        i_19 = (ATerm) ATgetNext((ATermList) g_19);
                        y_18 :
                        if(((ATgetType(i_19) == AT_LIST) && ATisEmpty(i_19)))
                          {
                            if(((b_19 != NULL) && (b_19 != h_19)))
                              _fail(h_19);
                            else
                              b_19 = h_19;
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
      t = not_null(b_19);
    }
    return(t);
  }
  t = try_1(t, r_0);
  {
    ATerm s_0 (ATerm t)
    {
      t = repeat_1(t, Ensugar_0);
      t = try_1(t, EnsugarOnce_0);
      return(t);
    }
    t = topdown_1(t, s_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm k_55 (ATerm), ATerm l_55 (ATerm))
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym__2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      {
        ATerm y_19 = NULL,a_20 = NULL;
        ATerm z_19 = NULL;
        t = SSLgetAnnotations(not_null(s_19));
        {
          z_19 = t;
          if(((y_19 != NULL) && (y_19 != z_19)))
            _fail(z_19);
          else
            y_19 = z_19;
        }
        {
          t = not_null(t_19);
          {
            ATerm c_20 = NULL;
            t = k_55(t);
            {
              a_20 = t;
              {
                t = not_null(u_19);
                {
                  ATerm e_20 = NULL;
                  t = l_55(t);
                  {
                    c_20 = t;
                    {
                      ATerm f_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_20), not_null(c_20)), not_null(y_19));
                      {
                        f_20 = t;
                        if(((e_20 != NULL) && (e_20 != f_20)))
                          _fail(f_20);
                        else
                          e_20 = f_20;
                      }
                      t = not_null(e_20);
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
  ATerm u_6;
  u_6 = t;
  {
    ATerm m_20 = NULL;
    ATerm n_20 = NULL;
    t = term_v_6;
    {
      t = whoami_0(t);
      {
        n_20 = t;
        if(((m_20 != NULL) && (m_20 != n_20)))
          _fail(n_20);
        else
          m_20 = n_20;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_7), not_null(m_20)), term_a_7));
      {
        t = printnl_0(t);
        {
          t = term_f_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym__2))
    {
      s_20 = ATgetArgument(r_20, 0);
      t_20 = ATgetArgument(r_20, 1);
      {
        ATerm i_7;
        i_7 = t;
        t = SSL_printnl(not_null(s_20), not_null(t_20));
        t = i_7;
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
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_implode_string(not_null(y_20));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
        d_21 = t;
        c_21 :
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            e_21 = ATgetFirst((ATermList) d_21);
            f_21 = (ATerm) ATgetNext((ATermList) d_21);
            {
              t = not_null(e_21);
              {
                ATerm t_0 (ATerm t)
                {
                  t = not_null(f_21);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_0);
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
  ATerm p_21 = NULL;
  ATerm r_21 = NULL;
  p_21 = t;
  {
    ATerm s_21 = NULL;
    ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
    t = not_null(p_21);
    {
      s_21 = t;
      {
        t = SSL_explode_term(not_null(s_21));
        {
          u_21 = t;
          n_21 :
          if(match_cons(u_21, sym__2))
            {
              v_21 = ATgetArgument(u_21, 0);
              w_21 = ATgetArgument(u_21, 1);
              o_21 :
              if(match_string(v_21, ""))
                {
                  if(((r_21 != NULL) && (r_21 != w_21)))
                    _fail(w_21);
                  else
                    r_21 = w_21;
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
      t = not_null(r_21);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm a_22 (ATerm t)
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_22);
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        {
          t = Nil_0(t);
          t = g_72(t);
        }
      }
    return(t);
  }
  t = a_22(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym__2))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      {
        t = not_null(e_22);
        {
          ATerm u_0 (ATerm t)
          {
            t = not_null(f_22);
            return(t);
          }
          t = at_end_1(t, u_0);
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
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  t = SSL_explode_string(not_null(k_22));
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
  ATerm o_22 = NULL;
  o_22 = t;
  t = SSL_is_string(not_null(o_22));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            {
              ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
              x_22 = t;
              w_22 :
              if(match_cons(x_22, sym_Path_1))
                {
                  y_22 = ATgetArgument(x_22, 0);
                  t = not_null(y_22);
                }
              else
                {
                  if(match_cons(x_22, sym_Var_1))
                    {
                      y_22 = ATgetArgument(x_22, 0);
                      {
                        t = not_null(y_22);
                        {
                          ATerm t_7 = t;
                          int u_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(u_7);
                            }
                          else
                            {
                              t = t_7;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_v_7;
                                  return(t);
                                }
                                t = debug_1(t, w_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_22, sym_Prefix_2))
                        {
                          y_22 = ATgetArgument(x_22, 0);
                          z_22 = ATgetArgument(x_22, 1);
                          {
                            ATerm e_23 = NULL,g_23 = NULL;
                            ATerm w_7;
                            w_7 = t;
                            {
                              ATerm f_23 = NULL;
                              t = not_null(y_22);
                              {
                                t = eval_config_0(t);
                                {
                                  f_23 = t;
                                  if(((e_23 != NULL) && (e_23 != f_23)))
                                    _fail(f_23);
                                  else
                                    e_23 = f_23;
                                }
                              }
                            }
                            t = w_7;
                            {
                              ATerm h_23 = NULL;
                              t = not_null(z_22);
                              {
                                t = eval_config_0(t);
                                {
                                  h_23 = t;
                                  if(((g_23 != NULL) && (g_23 != h_23)))
                                    _fail(h_23);
                                  else
                                    g_23 = h_23;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), not_null(g_23));
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
  ATerm p_23 = NULL;
  p_23 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_7, not_null(p_23));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm b_8;
            b_8 = t;
            {
              ATerm r_23 = NULL;
              ATerm s_23 = NULL;
              s_23 = t;
              if(((r_23 != NULL) && (r_23 != s_23)))
                _fail(s_23);
              else
                r_23 = s_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(p_23), not_null(r_23));
                t = table_put_0(t);
              }
            }
            t = b_8;
          }
          return(t);
        }
        t = try_1(t, x_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_91 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm c_8;
    c_8 = t;
    {
      ATerm w_23 = NULL;
      ATerm x_23 = NULL;
      t = term_g_8;
      {
        t = get_config_0(t);
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), term_j_8);
        t = geq_0(t);
      }
    }
    t = c_8;
    t = t_91(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym__2))
    {
      c_24 = ATgetArgument(b_24, 0);
      d_24 = ATgetArgument(b_24, 1);
      t = SSL_WriteToTextFile(not_null(c_24), not_null(d_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  i_24 :
  if(match_cons(j_24, sym__2))
    {
      k_24 = ATgetArgument(j_24, 0);
      l_24 = ATgetArgument(j_24, 1);
      t = SSL_WriteToBinaryFile(not_null(k_24), not_null(l_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_24 = NULL;
  ATerm k_8;
  k_8 = t;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm o_8 = t;
      int r_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_1 (ATerm t)
          {
            ATerm u_24 = NULL,o_25 = NULL;
            u_24 = t;
            q_24 :
            if(match_cons(u_24, sym_Output_1))
              {
                o_25 = ATgetArgument(u_24, 0);
                if(((t_24 != NULL) && (t_24 != o_25)))
                  _fail(o_25);
                else
                  t_24 = o_25;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, a_1);
          ;
          LocalPopChoice(r_8);
        }
      else
        {
          t = o_8;
          {
            ATerm p_25 = NULL;
            t = term_s_8;
            {
              p_25 = t;
              if(((t_24 != NULL) && (t_24 != p_25)))
                _fail(p_25);
              else
                t_24 = p_25;
            }
          }
        }
      return(t);
    }
    t = _2(t, z_0, _id);
  }
  t = k_8;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm c_1 (ATerm t)
      {
        t = not_null(t_24);
        return(t);
      }
      t = split_2(t, c_1, _id);
      return(t);
    }
    t = _2(t, _id, b_1);
    {
      ATerm w_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              ATerm q_25 = NULL;
              q_25 = t;
              s_24 :
              if(!(match_cons(q_25, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, e_1);
            return(t);
          }
          t = _2(t, d_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(z_8);
        }
      else
        {
          t = w_8;
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
  ATerm w_25 = NULL,y_25 = NULL,b_26 = NULL,c_26 = NULL;
  ATerm a_9;
  a_9 = t;
  t = dtime_0(t);
  t = a_9;
  {
    t = z_68(t);
    {
      ATerm b_9;
      b_9 = t;
      {
        ATerm x_25 = NULL;
        t = dtime_0(t);
        {
          x_25 = t;
          if(((w_25 != NULL) && (w_25 != x_25)))
            _fail(x_25);
          else
            w_25 = x_25;
        }
      }
      t = b_9;
      {
        y_25 = t;
        v_25 :
        if(match_cons(y_25, sym__2))
          {
            b_26 = ATgetArgument(y_25, 0);
            c_26 = ATgetArgument(y_25, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_26)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_25))), not_null(c_26));
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
ATerm debug_1 (ATerm t, ATerm v_70 (ATerm))
{
  ATerm c_9;
  c_9 = t;
  {
    ATerm o_26 = NULL,q_26 = NULL;
    ATerm d_9;
    d_9 = t;
    {
      ATerm p_26 = NULL;
      t = v_70(t);
      {
        p_26 = t;
        if(((o_26 != NULL) && (o_26 != p_26)))
          _fail(p_26);
        else
          o_26 = p_26;
      }
    }
    t = d_9;
    {
      ATerm w_26 = NULL;
      w_26 = t;
      if(((q_26 != NULL) && (q_26 != w_26)))
        _fail(w_26);
      else
        q_26 = w_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_26)), not_null(o_26)));
        t = printnl_0(t);
      }
    }
  }
  t = c_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm a_27 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL;
      b_27 = t;
      {
        if(((a_27 != NULL) && (a_27 != b_27)))
          _fail(b_27);
        else
          a_27 = b_27;
        t = SSL_ReadFromFile(not_null(a_27));
      }
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm f_1 (ATerm t)
        {
          t = term_g_9;
          return(t);
        }
        t = debug_1(t, f_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_79 (ATerm), ATerm r_79 (ATerm))
{
  ATerm f_27 = NULL,h_27 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm g_27 = NULL;
    t = q_79(t);
    {
      g_27 = t;
      if(((f_27 != NULL) && (f_27 != g_27)))
        _fail(g_27);
      else
        f_27 = g_27;
    }
  }
  t = h_9;
  {
    ATerm i_27 = NULL;
    t = r_79(t);
    {
      i_27 = t;
      if(((h_27 != NULL) && (h_27 != i_27)))
        _fail(i_27);
      else
        h_27 = i_27;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(h_27));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_27 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 (ATerm t)
        {
          ATerm u_27 = NULL,v_27 = NULL;
          u_27 = t;
          r_27 :
          if(match_cons(u_27, sym_Input_1))
            {
              v_27 = ATgetArgument(u_27, 0);
              if(((t_27 != NULL) && (t_27 != v_27)))
                _fail(v_27);
              else
                t_27 = v_27;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, g_1);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm w_27 = NULL;
          t = term_l_9;
          {
            w_27 = t;
            if(((t_27 != NULL) && (t_27 != w_27)))
              _fail(w_27);
            else
              t_27 = w_27;
          }
        }
      }
  }
  t = i_9;
  {
    ATerm h_1 (ATerm t)
    {
      t = not_null(t_27);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm a_28 = NULL;
    a_28 = t;
    z_27 :
    if(!(match_string(a_28, "-v")))
      {
        if(!(match_string(a_28, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_n_9;
    t = set_config_0(t);
    t = term_o_9;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = term_p_9;
    return(t);
  }
  t = Option_3(t, i_1, j_1, k_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm d_28 = NULL;
    d_28 = t;
    b_28 :
    if(!(match_string(d_28, "-k")))
      {
        if(!(match_string(d_28, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm u_9;
    u_9 = t;
    {
      ATerm e_28 = NULL;
      ATerm f_28 = NULL;
      t = string_to_int_0(t);
      {
        f_28 = t;
        if(((e_28 != NULL) && (e_28 != f_28)))
          _fail(f_28);
        else
          e_28 = f_28;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(e_28));
        t = set_config_0(t);
      }
    }
    t = u_9;
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_w_9;
    return(t);
  }
  t = ArgOption_3(t, l_1, m_1, n_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_string_to_int(not_null(i_28));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm q_28 = NULL;
        q_28 = t;
        l_28 :
        if(!(match_string(q_28, "-S")))
          {
            if(!(match_string(q_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_g_10;
        t = set_config_0(t);
        t = term_h_10;
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        t = term_i_10;
        return(t);
      }
      t = Option_3(t, o_1, p_1, q_1);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = a_10;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm r_28 = NULL;
              r_28 = t;
              m_28 :
              if(!(match_string(r_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              ATerm u_28 = NULL;
              ATerm l_10;
              l_10 = t;
              {
                ATerm s_28 = NULL;
                ATerm t_28 = NULL;
                t = string_to_int_0(t);
                {
                  t_28 = t;
                  if(((s_28 != NULL) && (s_28 != t_28)))
                    _fail(t_28);
                  else
                    s_28 = t_28;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(s_28));
                  t = set_config_0(t);
                }
              }
              t = l_10;
              {
                ATerm v_28 = NULL;
                v_28 = t;
                if(((u_28 != NULL) && (u_28 != v_28)))
                  _fail(v_28);
                else
                  u_28 = v_28;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_28));
              }
              return(t);
            }
            ATerm t_1 (ATerm t)
            {
              t = term_m_10;
              return(t);
            }
            t = ArgOption_3(t, r_1, s_1, t_1);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm u_1 (ATerm t)
              {
                ATerm w_28 = NULL;
                w_28 = t;
                p_28 :
                if(!(match_string(w_28, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_1 (ATerm t)
              {
                t = term_o_10;
                t = set_config_0(t);
                t = term_p_10;
                return(t);
              }
              ATerm w_1 (ATerm t)
              {
                t = term_v_10;
                return(t);
              }
              t = Option_3(t, u_1, v_1, w_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm y_10 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = y_10;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm c_29 = NULL;
    c_29 = t;
    z_28 :
    if(!(match_string(c_29, "-o")))
      {
        if(!(match_string(c_29, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm f_29 = NULL;
    ATerm e_11;
    e_11 = t;
    {
      ATerm d_29 = NULL;
      ATerm e_29 = NULL;
      e_29 = t;
      if(((d_29 != NULL) && (d_29 != e_29)))
        _fail(e_29);
      else
        d_29 = e_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_11, not_null(d_29));
        t = set_config_0(t);
      }
    }
    t = e_11;
    {
      ATerm g_29 = NULL;
      g_29 = t;
      if(((f_29 != NULL) && (f_29 != g_29)))
        _fail(g_29);
      else
        f_29 = g_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_29));
    }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  t = ArgOption_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm a_2 (ATerm t)
        {
          ATerm k_29 = NULL;
          k_29 = t;
          j_29 :
          if(!(match_string(k_29, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_2 (ATerm t)
        {
          t = term_n_11;
          t = set_config_0(t);
          t = term_o_11;
          return(t);
        }
        ATerm c_2 (ATerm t)
        {
          t = term_p_11;
          return(t);
        }
        t = Option_3(t, a_2, b_2, c_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  q_29 = t;
  o_29 :
  if(match_string(q_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
        {
          r_29 = ATgetFirst((ATermList) q_29);
          s_29 = (ATerm) ATgetNext((ATermList) q_29);
          p_29 :
          if(((ATgetType(s_29) == AT_LIST) && !(ATisEmpty(s_29))))
            {
              t_29 = ATgetFirst((ATermList) s_29);
              u_29 = (ATerm) ATgetNext((ATermList) s_29);
              {
                ATerm y_29 = NULL;
                ATerm q_11;
                q_11 = t;
                {
                  t = not_null(r_29);
                  t = j_0(t);
                }
                t = q_11;
                {
                  ATerm z_29 = NULL;
                  t = not_null(t_29);
                  {
                    t = k_0(t);
                    {
                      z_29 = t;
                      if(((y_29 != NULL) && (y_29 != z_29)))
                        _fail(z_29);
                      else
                        y_29 = z_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_29)), not_null(y_29));
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
  ATerm d_2 (ATerm t)
  {
    ATerm g_30 = NULL;
    g_30 = t;
    d_30 :
    if(!(match_string(g_30, "-i")))
      {
        if(!(match_string(g_30, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm j_30 = NULL;
    ATerm r_11;
    r_11 = t;
    {
      ATerm h_30 = NULL;
      ATerm i_30 = NULL;
      i_30 = t;
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(h_30));
        t = set_config_0(t);
      }
    }
    t = r_11;
    {
      ATerm k_30 = NULL;
      k_30 = t;
      if(((j_30 != NULL) && (j_30 != k_30)))
        _fail(k_30);
      else
        j_30 = k_30;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_30));
    }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_t_11;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, f_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(a_12);
    }
  else
    {
      t = u_11;
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm o_30 = NULL;
  t = report_run_time_0(t);
  {
    ATerm p_30 = NULL;
    t = term_v_6;
    {
      t = whoami_0(t);
      {
        p_30 = t;
        if(((o_30 != NULL) && (o_30 != p_30)))
          _fail(p_30);
        else
          o_30 = p_30;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_d_12), not_null(o_30)));
      {
        t = printnl_0(t);
        {
          t = term_f_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_h_12;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  t = SSL_TicksToSeconds(not_null(s_30));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
  x_30 = t;
  w_30 :
  if(match_cons(x_30, sym__2))
    {
      y_30 = ATgetArgument(x_30, 0);
      z_30 = ATgetArgument(x_30, 1);
      {
        ATerm j_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_30), not_null(z_30));
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = j_12;
            t = SSL_addr(not_null(y_30), not_null(z_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_78 (ATerm), ATerm c_78 (ATerm))
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_78(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
        g_31 = t;
        f_31 :
        if(((ATgetType(g_31) == AT_LIST) && !(ATisEmpty(g_31))))
          {
            h_31 = ATgetFirst((ATermList) g_31);
            i_31 = (ATerm) ATgetNext((ATermList) g_31);
            {
              ATerm l_31 = NULL;
              ATerm m_31 = NULL;
              t = not_null(i_31);
              {
                t = foldr_2(t, b_78, c_78);
                {
                  m_31 = t;
                  if(((l_31 != NULL) && (l_31 != m_31)))
                    _fail(m_31);
                  else
                    l_31 = m_31;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), not_null(l_31));
                t = c_78(t);
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
ATerm crush_2 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm))
{
  ATerm t_31 = NULL;
  ATerm v_31 = NULL;
  t_31 = t;
  {
    ATerm w_31 = NULL;
    ATerm y_31 = NULL,z_31 = NULL,b_32 = NULL;
    t = not_null(t_31);
    {
      w_31 = t;
      {
        t = SSL_explode_term(not_null(w_31));
        {
          y_31 = t;
          s_31 :
          if(match_cons(y_31, sym__2))
            {
              z_31 = ATgetArgument(y_31, 0);
              b_32 = ATgetArgument(y_31, 1);
              if(((v_31 != NULL) && (v_31 != b_32)))
                _fail(b_32);
              else
                v_31 = b_32;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_31);
      t = foldr_2(t, z_76, a_77);
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
    ATerm g_2 (ATerm t)
    {
      t = term_f_10;
      return(t);
    }
    t = crush_2(t, g_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  g_32 :
  if(match_cons(h_32, sym__2))
    {
      i_32 = ATgetArgument(h_32, 0);
      j_32 = ATgetArgument(h_32, 1);
      {
        ATerm q_12;
        q_12 = t;
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_32), not_null(j_32));
              ;
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              t = SSL_gtr(not_null(i_32), not_null(j_32));
            }
        }
        t = q_12;
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
  ATerm p_32 = NULL;
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
      q_32 = t;
      o_32 :
      if(match_cons(q_32, sym__2))
        {
          r_32 = ATgetArgument(q_32, 0);
          s_32 = ATgetArgument(q_32, 1);
          {
            if(((p_32 != NULL) && (p_32 != r_32)))
              _fail(r_32);
            else
              p_32 = r_32;
            if(((p_32 != NULL) && (p_32 != s_32)))
              _fail(s_32);
            else
              p_32 = s_32;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_91 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    ATerm v_12;
    v_12 = t;
    {
      ATerm v_32 = NULL;
      ATerm w_32 = NULL;
      t = term_g_8;
      {
        t = get_config_0(t);
        {
          w_32 = t;
          if(((v_32 != NULL) && (v_32 != w_32)))
            _fail(w_32);
          else
            v_32 = w_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), term_f_7);
        t = geq_0(t);
      }
    }
    t = v_12;
    t = s_91(t);
    return(t);
  }
  t = try_1(t, h_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm a_33 = NULL,e_33 = NULL;
    ATerm w_12;
    w_12 = t;
    {
      ATerm b_33 = NULL;
      t = run_time_0(t);
      {
        b_33 = t;
        if(((a_33 != NULL) && (a_33 != b_33)))
          _fail(b_33);
        else
          a_33 = b_33;
      }
    }
    t = w_12;
    {
      ATerm f_33 = NULL;
      t = term_v_6;
      {
        t = whoami_0(t);
        {
          f_33 = t;
          if(((e_33 != NULL) && (e_33 != f_33)))
            _fail(f_33);
          else
            e_33 = f_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_13), not_null(a_33)), term_x_12), not_null(e_33)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_f_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  l_33 :
  if(match_cons(m_33, sym_Version_0))
    {
      ATerm o_33 = NULL,q_33 = NULL;
      ATerm c_13;
      c_13 = t;
      {
        ATerm p_33 = NULL;
        t = SSLgetAnnotations(not_null(m_33));
        {
          p_33 = t;
          if(((o_33 != NULL) && (o_33 != p_33)))
            _fail(p_33);
          else
            o_33 = p_33;
        }
      }
      t = c_13;
      {
        ATerm r_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_33));
        {
          r_33 = t;
          if(((q_33 != NULL) && (q_33 != r_33)))
            _fail(r_33);
          else
            q_33 = r_33;
        }
        t = not_null(q_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_69 (ATerm))
{
  ATerm g_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_13;
      t = get_config_0(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = g_13;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              {
                ATerm n_13 = t;
                int p_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(p_13);
                  }
                else
                  {
                    t = n_13;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, j_2);
      }
    }
  t = x_69(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  t = SSL_table_create(not_null(w_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  {
    ATerm q_13;
    q_13 = t;
    {
      t = term_r_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_13, term_t_13, not_null(a_34));
          t = table_put_0(t);
        }
      }
    }
    t = q_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  t = SSL_table_destroy(not_null(e_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  t = SSL_exit(not_null(j_34));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  m_34 :
  if(((ATgetType(n_34) == AT_LIST) && ATisEmpty(n_34)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
        {
          o_34 = ATgetFirst((ATermList) n_34);
          p_34 = (ATerm) ATgetNext((ATermList) n_34);
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
  ATerm u_13;
  u_13 = t;
  {
    ATerm s_34 = NULL;
    ATerm v_34 = NULL;
    ATerm v_13 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = v_13;
        {
          ATerm t_34 = NULL;
          ATerm u_34 = NULL;
          u_34 = t;
          if(((t_34 != NULL) && (t_34 != u_34)))
            _fail(u_34);
          else
            t_34 = u_34;
          t = (ATerm) ATinsert(ATempty, not_null(t_34));
        }
      }
    {
      v_34 = t;
      if(((s_34 != NULL) && (s_34 != v_34)))
        _fail(v_34);
      else
        s_34 = v_34;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(s_34));
      t = printnl_0(t);
    }
  }
  t = u_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm y_34 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = Cons_2(t, r_71, y_34);
      }
    return(t);
  }
  t = y_34(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  h_35 = t;
  e_35 :
  if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
    {
      f_35 = ATgetFirst((ATermList) h_35);
      g_35 = (ATerm) ATgetNext((ATermList) h_35);
      {
        ATerm k_35 = NULL;
        t = not_null(g_35);
        {
          ATerm j_14;
          j_14 = t;
          {
            ATerm l_35 = NULL,n_35 = NULL,p_35 = NULL;
            ATerm k_14;
            k_14 = t;
            {
              ATerm m_35 = NULL;
              t = i_0(t);
              {
                m_35 = t;
                if(((l_35 != NULL) && (l_35 != m_35)))
                  _fail(m_35);
                else
                  l_35 = m_35;
              }
            }
            t = k_14;
            {
              ATerm o_35 = NULL;
              t = not_null(f_35);
              {
                t = g_0(t);
                {
                  o_35 = t;
                  if(((n_35 != NULL) && (n_35 != o_35)))
                    _fail(o_35);
                  else
                    n_35 = o_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_35)), not_null(n_35));
                {
                  p_35 = t;
                  if(((k_35 != NULL) && (k_35 != p_35)))
                    _fail(p_35);
                  else
                    k_35 = p_35;
                }
              }
            }
          }
          t = j_14;
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(k_35);
              return(t);
            }
            t = reverse_acc_2(t, g_0, k_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_35) == AT_LIST) && ATisEmpty(h_35)))
        {
          {
            t = term_v_6;
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
  ATerm l_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm c_36 = NULL,f_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym_Program_1))
    {
      f_36 = ATgetArgument(c_36, 0);
      {
        ATerm i_36 = NULL,k_36 = NULL;
        ATerm j_36 = NULL;
        t = SSLgetAnnotations(not_null(c_36));
        {
          j_36 = t;
          if(((i_36 != NULL) && (i_36 != j_36)))
            _fail(j_36);
          else
            i_36 = j_36;
        }
        {
          t = not_null(f_36);
          {
            ATerm m_36 = NULL;
            t = a_68(t);
            {
              k_36 = t;
              {
                ATerm n_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_36)), not_null(i_36));
                {
                  n_36 = t;
                  if(((m_36 != NULL) && (m_36 != n_36)))
                    _fail(n_36);
                  else
                    m_36 = n_36;
                }
                t = not_null(m_36);
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
  ATerm w_36 = NULL;
  ATerm l_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_36 = NULL;
      t = term_h_12;
      {
        t = get_config_0(t);
        {
          x_36 = t;
          if(((w_36 != NULL) && (w_36 != x_36)))
            _fail(x_36);
          else
            w_36 = x_36;
        }
      }
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = l_14;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm n_2 (ATerm t)
          {
            ATerm y_36 = NULL;
            y_36 = t;
            if(((w_36 != NULL) && (w_36 != y_36)))
              _fail(y_36);
            else
              w_36 = y_36;
            return(t);
          }
          t = Program_1(t, n_2);
          return(t);
        }
        t = option_defined_1(t, m_2);
      }
    }
  {
    ATerm o_2 (ATerm t)
    {
      ATerm p_2 (ATerm t)
      {
        t = not_null(w_36);
        return(t);
      }
      t = short_description_1(t, p_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, o_2);
    {
      t = term_s_14;
      {
        t = echo_0(t);
        {
          t = term_x_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_2 (ATerm t)
                {
                  ATerm z_36 = NULL;
                  ATerm a_37 = NULL;
                  a_37 = t;
                  if(((z_36 != NULL) && (z_36 != a_37)))
                    _fail(a_37);
                  else
                    z_36 = a_37;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_36)), term_y_14);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_2);
                {
                  ATerm r_2 (ATerm t)
                  {
                    ATerm b_37 = NULL;
                    ATerm c_37 = NULL;
                    ATerm s_2 (ATerm t)
                    {
                      t = not_null(w_36);
                      return(t);
                    }
                    t = long_description_1(t, s_2);
                    {
                      c_37 = t;
                      if(((b_37 != NULL) && (b_37 != c_37)))
                        _fail(c_37);
                      else
                        b_37 = c_37;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_37)), term_z_14);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, r_2);
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
ATerm Undefined_1 (ATerm t, ATerm b_68 (ATerm))
{
  ATerm p_37 = NULL,q_37 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym_Undefined_1))
    {
      q_37 = ATgetArgument(p_37, 0);
      {
        ATerm t_37 = NULL,v_37 = NULL;
        ATerm u_37 = NULL;
        t = SSLgetAnnotations(not_null(p_37));
        {
          u_37 = t;
          if(((t_37 != NULL) && (t_37 != u_37)))
            _fail(u_37);
          else
            t_37 = u_37;
        }
        {
          t = not_null(q_37);
          {
            ATerm x_37 = NULL;
            t = b_68(t);
            {
              v_37 = t;
              {
                ATerm b_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_37)), not_null(t_37));
                {
                  b_38 = t;
                  if(((x_37 != NULL) && (x_37 != b_38)))
                    _fail(b_38);
                  else
                    x_37 = b_38;
                }
                t = not_null(x_37);
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
ATerm fetch_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm g_38 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_72, _id);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = Cons_2(t, _id, g_38);
      }
    return(t);
  }
  t = g_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_82 (ATerm))
{
  t = fetch_1(t, a_82);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_38 = NULL;
  l_38 = t;
  k_38 :
  if(match_cons(l_38, sym_Help_0))
    {
      ATerm n_38 = NULL,p_38 = NULL;
      ATerm c_15;
      c_15 = t;
      {
        ATerm o_38 = NULL;
        t = SSLgetAnnotations(not_null(l_38));
        {
          o_38 = t;
          if(((n_38 != NULL) && (n_38 != o_38)))
            _fail(o_38);
          else
            n_38 = o_38;
        }
      }
      t = c_15;
      {
        ATerm q_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_38));
        {
          q_38 = t;
          if(((p_38 != NULL) && (p_38 != q_38)))
            _fail(q_38);
          else
            p_38 = q_38;
        }
        t = not_null(p_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_83 (ATerm))
{
  ATerm d_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_83(t);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = d_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym__2))
    {
      x_38 = ATgetArgument(w_38, 0);
      y_38 = ATgetArgument(w_38, 1);
      t = SSL_table_get(not_null(x_38), not_null(y_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,p_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym__3))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      p_39 = ATgetArgument(f_39, 2);
      {
        ATerm k_15;
        k_15 = t;
        {
          ATerm t_39 = NULL;
          ATerm u_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), not_null(h_39));
          {
            ATerm n_15 = t;
            int q_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(q_15);
              }
            else
              {
                t = n_15;
                t = (ATerm) ATempty;
              }
            {
              u_39 = t;
              if(((t_39 != NULL) && (t_39 != u_39)))
                _fail(u_39);
              else
                t_39 = u_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_39), not_null(h_39), (ATerm) ATinsert(CheckATermList(not_null(t_39)), not_null(p_39)));
            t = table_put_0(t);
          }
        }
        t = k_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_83 (ATerm))
{
  ATerm y_39 = NULL;
  ATerm z_39 = NULL;
  t = term_v_6;
  {
    t = f_83(t);
    {
      z_39 = t;
      if(((y_39 != NULL) && (y_39 != z_39)))
        _fail(z_39);
      else
        y_39 = z_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, not_null(y_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_string(f_40, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
        {
          g_40 = ATgetFirst((ATermList) f_40);
          h_40 = (ATerm) ATgetNext((ATermList) f_40);
          {
            ATerm k_40 = NULL;
            ATerm r_15;
            r_15 = t;
            {
              t = not_null(g_40);
              t = a_0(t);
            }
            t = r_15;
            {
              ATerm l_40 = NULL;
              t = term_v_6;
              {
                t = b_0(t);
                {
                  l_40 = t;
                  if(((k_40 != NULL) && (k_40 != l_40)))
                    _fail(l_40);
                  else
                    k_40 = l_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_40)), not_null(k_40));
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
    ATerm r_40 = NULL;
    r_40 = t;
    q_40 :
    if(!(match_string(r_40, "--help")))
      {
        if(!(match_string(r_40, "-h")))
          {
            if(!(match_string(r_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_s_15;
    {
      t = set_config_0(t);
      t = term_t_15;
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_u_15;
    return(t);
  }
  t = Option_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
  u_40 = t;
  t_40 :
  if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
    {
      v_40 = ATgetFirst((ATermList) u_40);
      w_40 = (ATerm) ATgetNext((ATermList) u_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  g_41 = t;
  f_41 :
  if(((ATgetType(g_41) == AT_LIST) && !(ATisEmpty(g_41))))
    {
      h_41 = ATgetFirst((ATermList) g_41);
      i_41 = (ATerm) ATgetNext((ATermList) g_41);
      {
        ATerm m_41 = NULL,o_41 = NULL;
        ATerm n_41 = NULL;
        t = SSLgetAnnotations(not_null(g_41));
        {
          n_41 = t;
          if(((m_41 != NULL) && (m_41 != n_41)))
            _fail(n_41);
          else
            m_41 = n_41;
        }
        {
          t = not_null(h_41);
          {
            ATerm q_41 = NULL;
            t = t_56(t);
            {
              o_41 = t;
              {
                t = not_null(i_41);
                {
                  ATerm s_41 = NULL;
                  t = u_56(t);
                  {
                    q_41 = t;
                    {
                      ATerm t_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_41)), not_null(o_41)), not_null(m_41));
                      {
                        t_41 = t;
                        if(((s_41 != NULL) && (s_41 != t_41)))
                          _fail(t_41);
                        else
                          s_41 = t_41;
                      }
                      t = not_null(s_41);
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
  ATerm i_42 = NULL;
  i_42 = t;
  h_42 :
  if(((ATgetType(i_42) == AT_LIST) && ATisEmpty(i_42)))
    {
      {
        ATerm k_42 = NULL,m_42 = NULL;
        ATerm v_15;
        v_15 = t;
        {
          ATerm l_42 = NULL;
          t = SSLgetAnnotations(not_null(i_42));
          {
            l_42 = t;
            if(((k_42 != NULL) && (k_42 != l_42)))
              _fail(l_42);
            else
              k_42 = l_42;
          }
        }
        t = v_15;
        {
          ATerm n_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_42));
          {
            n_42 = t;
            if(((m_42 != NULL) && (m_42 != n_42)))
              _fail(n_42);
            else
              m_42 = n_42;
          }
          t = not_null(m_42);
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
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym__2))
    {
      y_42 = ATgetArgument(x_42, 0);
      z_42 = ATgetArgument(x_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(y_42), not_null(z_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm w_15;
  w_15 = t;
  {
    ATerm w_2 (ATerm t)
    {
      t = term_b_16;
      t = d_83(t);
      return(t);
    }
    t = try_1(t, w_2);
  }
  t = w_15;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm h_43 = NULL;
      ATerm c_16;
      c_16 = t;
      {
        ATerm f_43 = NULL;
        ATerm g_43 = NULL;
        g_43 = t;
        if(((f_43 != NULL) && (f_43 != g_43)))
          _fail(g_43);
        else
          f_43 = g_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(f_43));
          t = set_config_0(t);
        }
      }
      t = c_16;
      {
        ATerm i_43 = NULL;
        i_43 = t;
        if(((h_43 != NULL) && (h_43 != i_43)))
          _fail(i_43);
        else
          h_43 = i_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_43));
      }
      return(t);
    }
    ATerm y_2 (ATerm t)
    {
      ATerm d_16 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              {
                t = d_83(t);
                t = Cons_2(t, _id, y_2);
              }
            }
          ;
          LocalPopChoice(e_16);
        }
      else
        {
          t = d_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_2, y_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
  ATerm n_16;
  n_16 = t;
  {
    ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
    r_43 = t;
    n_43 :
    if(match_cons(r_43, sym__3))
      {
        s_43 = ATgetArgument(r_43, 0);
        t_43 = ATgetArgument(r_43, 1);
        u_43 = ATgetArgument(r_43, 2);
        {
          if(((o_43 != NULL) && (o_43 != s_43)))
            _fail(s_43);
          else
            o_43 = s_43;
          {
            if(((p_43 != NULL) && (p_43 != t_43)))
              _fail(t_43);
            else
              p_43 = t_43;
            {
              if(((q_43 != NULL) && (q_43 != u_43)))
                _fail(u_43);
              else
                q_43 = u_43;
              t = SSL_table_put(not_null(o_43), not_null(p_43), not_null(q_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm x_43 = NULL;
  ATerm o_16;
  o_16 = t;
  {
    t = term_p_16;
    t = table_put_0(t);
  }
  t = o_16;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_83(t);
          ;
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_2);
    {
      ATerm a_3 (ATerm t)
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_16;
            z_16 = t;
            {
              ATerm a_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_k_13;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = a_17;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_16;
            {
              t = system_usage_0(t);
              {
                t = term_f_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            {
              ATerm b_3 (ATerm t)
              {
                ATerm c_3 (ATerm t)
                {
                  ATerm y_43 = NULL;
                  y_43 = t;
                  if(((x_43 != NULL) && (x_43 != y_43)))
                    _fail(y_43);
                  else
                    x_43 = y_43;
                  return(t);
                }
                t = Undefined_1(t, c_3);
                return(t);
              }
              t = option_defined_1(t, b_3);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_43)), term_o_17));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_f_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, a_3);
      {
        ATerm p_17;
        p_17 = t;
        {
          t = term_t_14;
          t = table_destroy_0(t);
        }
        t = p_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm c_70 (ATerm))
{
  t = parse_options_1(t, z_69);
  {
    t = store_options_0(t);
    {
      t = b_70(t);
      {
        ATerm q_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_70);
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = q_17;
            {
              ATerm u_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_70(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = u_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_69(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_69);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, d_3, q_69, r_69, f_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm h_3 (ATerm t)
    {
      ATerm f_18;
      f_18 = t;
      {
        ATerm b_44 = NULL;
        ATerm c_44 = NULL;
        t = term_h_12;
        {
          t = get_config_0(t);
          {
            c_44 = t;
            if(((b_44 != NULL) && (b_44 != c_44)))
              _fail(c_44);
            else
              b_44 = c_44;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(b_44)));
          t = printnl_0(t);
        }
      }
      t = f_18;
      return(t);
    }
    t = if_verbose2_1(t, h_3);
    return(t);
  }
  t = iowrap_4(t, i_69, j_69, k_69, g_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_69 (ATerm), ATerm h_69 (ATerm))
{
  t = iowrap_3(t, g_69, h_69, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    t = _2(t, _id, d_69);
    return(t);
  }
  t = iowrap_2(t, i_3, _fail);
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
