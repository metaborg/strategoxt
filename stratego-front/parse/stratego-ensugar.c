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
  init_constant_terms();
}
ATerm term_x_17;
ATerm term_d_17;
ATerm term_k_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_s_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_j_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_h_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_h_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_y_3;
ATerm term_x_3;
ATerm term_w_3;
ATerm term_v_3;
ATerm term_t_3;
ATerm term_s_3;
ATerm term_r_3;
ATerm term_q_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_l_3;
ATerm term_k_3;
ATerm term_j_3;
ATerm term_i_3;
ATerm term_h_3;
ATerm term_g_3;
ATerm term_f_3;
ATerm term_e_3;
ATerm term_d_3;
ATerm term_c_3;
ATerm term_b_3;
void init_constant_terms (void)
{
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_c_3));
  term_c_3 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_e_3));
  term_e_3 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_f_3));
  term_f_3 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_i_3));
  term_i_3 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_j_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_s_9);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_s_9);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_s_9);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, (ATerm) ATempty);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm member_0 (ATerm);
ATerm AddLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm t_54 (ATerm), ATerm u_54 (ATerm));
ATerm SVar_1 (ATerm, ATerm a_58 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm l_60 (ATerm), ATerm m_60 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm r_60 (ATerm));
ATerm RDef_3 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm c_57 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm k_60 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm f_90 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm is_quoted_chars_0 (ATerm);
ATerm is_quoted_0 (ATerm);
ATerm is_double_quoted_0 (ATerm);
ATerm Ensugar_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm h_80 (ATerm), ATerm i_80 (ATerm));
ATerm repeat_1 (ATerm, ATerm k_80 (ATerm));
ATerm topdown_1 (ATerm, ATerm h_90 (ATerm));
ATerm Stratego_Ensugar_0 (ATerm);
ATerm _2 (ATerm, ATerm s_52 (ATerm), ATerm t_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_68 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_88 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_76 (ATerm), ATerm e_76 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm o_74 (ATerm), ATerm p_74 (ATerm));
ATerm crush_2 (ATerm, ATerm m_73 (ATerm), ATerm n_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_65 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_79 (ATerm));
ATerm map_1 (ATerm, ATerm a_68 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_79 (ATerm));
ATerm Program_1 (ATerm, ATerm i_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_67 (ATerm));
ATerm Undefined_1 (ATerm, ATerm j_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_68 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_54 (ATerm), ATerm c_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_79 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm e_66 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_66 (ATerm), ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm o_66 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_66 (ATerm));
ATerm stratego_ensugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm member_0 (ATerm t)
{
  ATerm u_3 = NULL;
  ATerm b_0 (ATerm t)
  {
    ATerm f_4 = NULL;
    f_4 = t;
    if(((u_3 != NULL) && (u_3 != f_4)))
      _fail(f_4);
    else
      u_3 = f_4;
    return(t);
  }
  ATerm c_0 (ATerm t)
  {
    ATerm e_0 (ATerm t)
    {
      ATerm g_4 = NULL;
      g_4 = t;
      if(((u_3 != NULL) && (u_3 != g_4)))
        _fail(g_4);
      else
        u_3 = g_4;
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
  ATerm r_4 = NULL;
  ATerm u_4 = NULL;
  r_4 = t;
  {
    ATerm x_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_3), term_w_3), term_v_3), term_t_3), term_s_3), term_r_3), term_q_3), term_p_3), term_o_3), term_n_3), term_m_3), term_l_3), term_k_3), term_j_3), term_i_3), term_h_3), term_g_3), term_f_3), term_e_3), term_d_3), term_c_3), term_b_3));
    {
      t = member_0(t);
      {
        t = not_null(r_4);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm v_4 = NULL;
            ATerm w_4 = NULL;
            w_4 = t;
            if(((v_4 != NULL) && (v_4 != w_4)))
              _fail(w_4);
            else
              v_4 = w_4;
            t = (ATerm) ATinsert(CheckATermList(not_null(v_4)), term_y_3);
            return(t);
          }
          t = string_as_chars_1(t, f_0);
          {
            x_4 = t;
            if(((u_4 != NULL) && (u_4 != x_4)))
              _fail(x_4);
            else
              u_4 = x_4;
          }
        }
      }
    }
    t = not_null(u_4);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
  i_5 = t;
  h_5 :
  if(match_cons(i_5, sym_Op_2))
    {
      j_5 = ATgetArgument(i_5, 0);
      k_5 = ATgetArgument(i_5, 1);
      {
        ATerm o_5 = NULL,q_5 = NULL;
        ATerm p_5 = NULL;
        t = SSLgetAnnotations(not_null(i_5));
        {
          p_5 = t;
          if(((o_5 != NULL) && (o_5 != p_5)))
            _fail(p_5);
          else
            o_5 = p_5;
        }
        {
          t = not_null(j_5);
          {
            ATerm s_5 = NULL;
            t = h_55(t);
            {
              q_5 = t;
              {
                t = not_null(k_5);
                {
                  ATerm u_5 = NULL;
                  t = i_55(t);
                  {
                    s_5 = t;
                    {
                      ATerm v_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(q_5), not_null(s_5)), not_null(o_5));
                      {
                        v_5 = t;
                        if(((u_5 != NULL) && (u_5 != v_5)))
                          _fail(v_5);
                        else
                          u_5 = v_5;
                      }
                      t = not_null(u_5);
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
ATerm OpDecl_2 (ATerm t, ATerm t_54 (ATerm), ATerm u_54 (ATerm))
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  h_6 = t;
  g_6 :
  if(match_cons(h_6, sym_OpDecl_2))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      {
        ATerm n_6 = NULL,p_6 = NULL;
        ATerm o_6 = NULL;
        t = SSLgetAnnotations(not_null(h_6));
        {
          o_6 = t;
          if(((n_6 != NULL) && (n_6 != o_6)))
            _fail(o_6);
          else
            n_6 = o_6;
        }
        {
          t = not_null(i_6);
          {
            ATerm r_6 = NULL;
            t = t_54(t);
            {
              p_6 = t;
              {
                t = not_null(j_6);
                {
                  ATerm t_6 = NULL;
                  t = u_54(t);
                  {
                    r_6 = t;
                    {
                      ATerm u_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(p_6), not_null(r_6)), not_null(n_6));
                      {
                        u_6 = t;
                        if(((t_6 != NULL) && (t_6 != u_6)))
                          _fail(u_6);
                        else
                          t_6 = u_6;
                      }
                      t = not_null(t_6);
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
ATerm SVar_1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm f_7 = NULL,g_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym_SVar_1))
    {
      g_7 = ATgetArgument(f_7, 0);
      {
        ATerm j_7 = NULL,l_7 = NULL;
        ATerm k_7 = NULL;
        t = SSLgetAnnotations(not_null(f_7));
        {
          k_7 = t;
          if(((j_7 != NULL) && (j_7 != k_7)))
            _fail(k_7);
          else
            j_7 = k_7;
        }
        {
          t = not_null(g_7);
          {
            ATerm n_7 = NULL;
            t = a_58(t);
            {
              l_7 = t;
              {
                ATerm o_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(l_7)), not_null(j_7));
                {
                  o_7 = t;
                  if(((n_7 != NULL) && (n_7 != o_7)))
                    _fail(o_7);
                  else
                    n_7 = o_7;
                }
                t = not_null(n_7);
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
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_Var_1))
    {
      h_8 = ATgetArgument(g_8, 0);
      {
        ATerm z_3 = t;
        int a_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL,m_8 = NULL;
            ATerm l_8 = NULL;
            t = SSLgetAnnotations(not_null(g_8));
            {
              l_8 = t;
              if(((k_8 != NULL) && (k_8 != l_8)))
                _fail(l_8);
              else
                k_8 = l_8;
            }
            {
              t = not_null(h_8);
              {
                ATerm o_8 = NULL;
                t = m_0(t);
                {
                  m_8 = t;
                  {
                    ATerm p_8 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_8)), not_null(k_8));
                    {
                      p_8 = t;
                      if(((o_8 != NULL) && (o_8 != p_8)))
                        _fail(p_8);
                      else
                        o_8 = p_8;
                    }
                    t = not_null(o_8);
                  }
                }
              }
            }
            LocalPopChoice(a_4);
          }
        else
          {
            t = z_3;
            {
              ATerm b_4 = t;
              int c_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_8 = NULL,u_8 = NULL;
                  ATerm t_8 = NULL;
                  t = SSLgetAnnotations(not_null(g_8));
                  {
                    t_8 = t;
                    if(((s_8 != NULL) && (s_8 != t_8)))
                      _fail(t_8);
                    else
                      s_8 = t_8;
                  }
                  {
                    t = not_null(h_8);
                    {
                      ATerm w_8 = NULL;
                      t = m_0(t);
                      {
                        u_8 = t;
                        {
                          ATerm x_8 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_8)), not_null(s_8));
                          {
                            x_8 = t;
                            if(((w_8 != NULL) && (w_8 != x_8)))
                              _fail(x_8);
                            else
                              w_8 = x_8;
                          }
                          t = not_null(w_8);
                        }
                      }
                    }
                  }
                  LocalPopChoice(c_4);
                }
              else
                {
                  t = b_4;
                  {
                    ATerm a_9 = NULL,c_9 = NULL;
                    ATerm b_9 = NULL;
                    t = SSLgetAnnotations(not_null(g_8));
                    {
                      b_9 = t;
                      if(((a_9 != NULL) && (a_9 != b_9)))
                        _fail(b_9);
                      else
                        a_9 = b_9;
                    }
                    {
                      t = not_null(h_8);
                      {
                        ATerm e_9 = NULL;
                        t = m_0(t);
                        {
                          c_9 = t;
                          {
                            ATerm f_9 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_9)), not_null(a_9));
                            {
                              f_9 = t;
                              if(((e_9 != NULL) && (e_9 != f_9)))
                                _fail(f_9);
                              else
                                e_9 = f_9;
                            }
                            t = not_null(e_9);
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
ATerm VarDec_2 (ATerm t, ATerm l_60 (ATerm), ATerm m_60 (ATerm))
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym_VarDec_2))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      {
        ATerm e_10 = NULL,g_10 = NULL;
        ATerm f_10 = NULL;
        t = SSLgetAnnotations(not_null(y_9));
        {
          f_10 = t;
          if(((e_10 != NULL) && (e_10 != f_10)))
            _fail(f_10);
          else
            e_10 = f_10;
        }
        {
          t = not_null(z_9);
          {
            ATerm i_10 = NULL;
            t = l_60(t);
            {
              g_10 = t;
              {
                t = not_null(a_10);
                {
                  ATerm k_10 = NULL;
                  t = m_60(t);
                  {
                    i_10 = t;
                    {
                      ATerm l_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(g_10), not_null(i_10)), not_null(e_10));
                      {
                        l_10 = t;
                        if(((k_10 != NULL) && (k_10 != l_10)))
                          _fail(l_10);
                        else
                          k_10 = l_10;
                      }
                      t = not_null(k_10);
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
ATerm SDef_3 (ATerm t, ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm r_60 (ATerm))
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  y_10 = t;
  x_10 :
  if(match_cons(y_10, sym_SDef_3))
    {
      z_10 = ATgetArgument(y_10, 0);
      a_11 = ATgetArgument(y_10, 1);
      b_11 = ATgetArgument(y_10, 2);
      {
        ATerm g_11 = NULL,i_11 = NULL;
        ATerm h_11 = NULL;
        t = SSLgetAnnotations(not_null(y_10));
        {
          h_11 = t;
          if(((g_11 != NULL) && (g_11 != h_11)))
            _fail(h_11);
          else
            g_11 = h_11;
        }
        {
          t = not_null(z_10);
          {
            ATerm k_11 = NULL;
            t = p_60(t);
            {
              i_11 = t;
              {
                t = not_null(a_11);
                {
                  ATerm m_11 = NULL;
                  t = q_60(t);
                  {
                    k_11 = t;
                    {
                      t = not_null(b_11);
                      {
                        ATerm o_11 = NULL;
                        t = r_60(t);
                        {
                          m_11 = t;
                          {
                            ATerm p_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(i_11), not_null(k_11), not_null(m_11)), not_null(g_11));
                            {
                              p_11 = t;
                              if(((o_11 != NULL) && (o_11 != p_11)))
                                _fail(p_11);
                              else
                                o_11 = p_11;
                            }
                            t = not_null(o_11);
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
ATerm RDef_3 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm c_57 (ATerm))
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_RDef_3))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      g_12 = ATgetArgument(d_12, 2);
      {
        ATerm l_12 = NULL,n_12 = NULL;
        ATerm m_12 = NULL;
        t = SSLgetAnnotations(not_null(d_12));
        {
          m_12 = t;
          if(((l_12 != NULL) && (l_12 != m_12)))
            _fail(m_12);
          else
            l_12 = m_12;
        }
        {
          t = not_null(e_12);
          {
            ATerm p_12 = NULL;
            t = a_57(t);
            {
              n_12 = t;
              {
                t = not_null(f_12);
                {
                  ATerm r_12 = NULL;
                  t = b_57(t);
                  {
                    p_12 = t;
                    {
                      t = not_null(g_12);
                      {
                        ATerm t_12 = NULL;
                        t = c_57(t);
                        {
                          r_12 = t;
                          {
                            ATerm u_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(n_12), not_null(p_12), not_null(r_12)), not_null(l_12));
                            {
                              u_12 = t;
                              if(((t_12 != NULL) && (t_12 != u_12)))
                                _fail(u_12);
                              else
                                t_12 = u_12;
                            }
                            t = not_null(t_12);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm g_13 = NULL,h_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_DefaultVarDec_1))
    {
      h_13 = ATgetArgument(g_13, 0);
      {
        ATerm k_13 = NULL,m_13 = NULL;
        ATerm l_13 = NULL;
        t = SSLgetAnnotations(not_null(g_13));
        {
          l_13 = t;
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
        }
        {
          t = not_null(h_13);
          {
            ATerm o_13 = NULL;
            t = k_60(t);
            {
              m_13 = t;
              {
                ATerm p_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(m_13)), not_null(k_13));
                {
                  p_13 = t;
                  if(((o_13 != NULL) && (o_13 != p_13)))
                    _fail(p_13);
                  else
                    o_13 = p_13;
                }
                t = not_null(o_13);
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
  ATerm v_13 = NULL;
  v_13 = t;
  t = SSL_int_to_string(not_null(v_13));
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  t = SSL_real_to_string(not_null(z_13));
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
  f_14 = t;
  d_14 :
  if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
    {
      g_14 = ATgetFirst((ATermList) f_14);
      h_14 = (ATerm) ATgetNext((ATermList) f_14);
      e_14 :
      if(match_int(g_14, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_14)), term_e_4), term_d_4);
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
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  l_14 :
  if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
    {
      o_14 = ATgetFirst((ATermList) n_14);
      p_14 = (ATerm) ATgetNext((ATermList) n_14);
      m_14 :
      if(match_int(o_14, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_14)), term_d_4), term_d_4);
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
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  t_14 :
  if(((ATgetType(v_14) == AT_LIST) && !(ATisEmpty(v_14))))
    {
      w_14 = ATgetFirst((ATermList) v_14);
      x_14 = (ATerm) ATgetNext((ATermList) v_14);
      u_14 :
      if(match_int(w_14, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_14)), term_h_4), term_d_4);
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
  ATerm i_4 = t;
  int j_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
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
            t = Escape_backslash_0(t);
            LocalPopChoice(l_4);
          }
        else
          {
            t = k_4;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm m_4 = t;
  int n_4 = stack_ptr;
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
      LocalPopChoice(n_4);
    }
  else
    {
      t = m_4;
      {
        ATerm o_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(p_4);
          }
        else
          {
            t = o_4;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm is_double_quoted_chars_0 (ATerm t)
{
  ATerm q_4;
  q_4 = t;
  {
    ATerm c_15 = NULL;
    ATerm d_15 = NULL;
    d_15 = t;
    if(((c_15 != NULL) && (c_15 != d_15)))
      _fail(d_15);
    else
      c_15 = d_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_4, not_null(c_15));
      t = is_quoted_chars_0(t);
    }
  }
  t = q_4;
  return(t);
}
ATerm EnsugarOnce_0 (ATerm t)
{
  ATerm s_4 = t;
  int t_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL,n_15 = NULL;
      m_15 = t;
      l_15 :
      if(match_cons(m_15, sym_Str_1))
        {
          n_15 = ATgetArgument(m_15, 0);
          {
            ATerm p_15 = NULL;
            ATerm q_15 = NULL;
            t = not_null(n_15);
            {
              ATerm o_0 (ATerm t)
              {
                ATerm y_4 = t;
                if((PushChoice() == 0))
                  {
                    t = is_double_quoted_chars_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_4;
                  }
                {
                  t = escape_chars_0(t);
                  t = double_quote_chars_0(t);
                }
                return(t);
              }
              t = string_as_chars_1(t, o_0);
              {
                q_15 = t;
                if(((p_15 != NULL) && (p_15 != q_15)))
                  _fail(q_15);
                else
                  p_15 = q_15;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(p_15));
          }
        }
      else
        {
          if(match_cons(m_15, sym_Real_1))
            {
              n_15 = ATgetArgument(m_15, 0);
              {
                ATerm s_15 = NULL;
                ATerm t_15 = NULL;
                t = not_null(n_15);
                {
                  t = real_to_string_0(t);
                  {
                    t_15 = t;
                    if(((s_15 != NULL) && (s_15 != t_15)))
                      _fail(t_15);
                    else
                      s_15 = t_15;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(s_15));
              }
            }
          else
            {
              if(match_cons(m_15, sym_Int_1))
                {
                  n_15 = ATgetArgument(m_15, 0);
                  {
                    ATerm v_15 = NULL;
                    ATerm w_15 = NULL;
                    t = not_null(n_15);
                    {
                      t = int_to_string_0(t);
                      {
                        w_15 = t;
                        if(((v_15 != NULL) && (v_15 != w_15)))
                          _fail(w_15);
                        else
                          v_15 = w_15;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Int_1, not_null(v_15));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      LocalPopChoice(t_4);
    }
  else
    {
      t = s_4;
      {
        ATerm z_4 = t;
        int a_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, AddLeadingPrime_0);
            LocalPopChoice(a_5);
          }
        else
          {
            t = z_4;
            {
              ATerm b_5 = t;
              int c_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3(t, AddLeadingPrime_0, _id, _id);
                  LocalPopChoice(c_5);
                }
              else
                {
                  t = b_5;
                  {
                    ATerm d_5 = t;
                    int e_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3(t, AddLeadingPrime_0, _id, _id);
                        LocalPopChoice(e_5);
                      }
                    else
                      {
                        t = d_5;
                        {
                          ATerm f_5 = t;
                          int g_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2(t, AddLeadingPrime_0, _id);
                              LocalPopChoice(g_5);
                            }
                          else
                            {
                              t = f_5;
                              {
                                ATerm l_5 = t;
                                int m_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1(t, AddLeadingPrime_0);
                                    LocalPopChoice(m_5);
                                  }
                                else
                                  {
                                    t = l_5;
                                    {
                                      ATerm n_5 = t;
                                      int r_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1(t, AddLeadingPrime_0);
                                          LocalPopChoice(r_5);
                                        }
                                      else
                                        {
                                          t = n_5;
                                          {
                                            ATerm t_5 = t;
                                            int w_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2(t, AddLeadingPrime_0, _id);
                                                LocalPopChoice(w_5);
                                              }
                                            else
                                              {
                                                t = t_5;
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
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym__2))
    {
      g_16 = ATgetArgument(f_16, 0);
      h_16 = ATgetArgument(f_16, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_16)), not_null(g_16)), (ATerm) ATinsert(ATempty, not_null(g_16)));
        {
          ATerm x_5 = t;
          int y_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(y_5);
            }
          else
            {
              t = x_5;
              t = conc_more_lists_0(t);
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
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm m_16 = NULL;
  ATerm n_16 = NULL;
  n_16 = t;
  if(((m_16 != NULL) && (m_16 != n_16)))
    _fail(n_16);
  else
    m_16 = n_16;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_4, not_null(m_16));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm f_90 (ATerm))
{
  t = explode_string_0(t);
  {
    t = f_90(t);
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
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
    {
      s_16 = ATgetFirst((ATermList) r_16);
      t_16 = (ATerm) ATgetNext((ATermList) r_16);
      t = not_null(t_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  x_16 :
  if(((ATgetType(z_16) == AT_LIST) && !(ATisEmpty(z_16))))
    {
      a_17 = ATgetFirst((ATermList) z_16);
      b_17 = (ATerm) ATgetNext((ATermList) z_16);
      y_16 :
      if(((ATgetType(b_17) == AT_LIST) && ATisEmpty(b_17)))
        {
          t = not_null(a_17);
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
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm is_quoted_chars_0 (ATerm t)
{
  ATerm j_17 = NULL;
  ATerm b_6;
  b_6 = t;
  {
    ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
    k_17 = t;
    i_17 :
    if(match_cons(k_17, sym__2))
      {
        l_17 = ATgetArgument(k_17, 0);
        m_17 = ATgetArgument(k_17, 1);
        {
          ATerm n_17 = NULL;
          if(((j_17 != NULL) && (j_17 != l_17)))
            _fail(l_17);
          else
            j_17 = l_17;
          {
            if(((n_17 != NULL) && (n_17 != m_17)))
              _fail(m_17);
            else
              n_17 = m_17;
            {
              t = not_null(n_17);
              {
                ATerm p_0 (ATerm t)
                {
                  ATerm o_17 = NULL;
                  o_17 = t;
                  if(((j_17 != NULL) && (j_17 != o_17)))
                    _fail(o_17);
                  else
                    j_17 = o_17;
                  return(t);
                }
                ATerm q_0 (ATerm t)
                {
                  ATerm p_17 = NULL;
                  t = last_0(t);
                  {
                    p_17 = t;
                    if(((j_17 != NULL) && (j_17 != p_17)))
                      _fail(p_17);
                    else
                      j_17 = p_17;
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
  t = b_6;
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
  ATerm c_6;
  c_6 = t;
  {
    ATerm u_17 = NULL;
    ATerm v_17 = NULL;
    v_17 = t;
    if(((u_17 != NULL) && (u_17 != v_17)))
      _fail(v_17);
    else
      u_17 = v_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_4, not_null(u_17));
      t = is_quoted_0(t);
    }
  }
  t = c_6;
  return(t);
}
ATerm Ensugar_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  b_18 :
  if(match_cons(f_18, sym_StratRule_3))
    {
      g_18 = ATgetArgument(f_18, 0);
      h_18 = ATgetArgument(f_18, 1);
      e_18 = ATgetArgument(f_18, 2);
      c_18 :
      if(match_cons(e_18, sym_Id_0))
        {
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, not_null(g_18), not_null(h_18));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(f_18, sym_Rule_3))
        {
          g_18 = ATgetArgument(f_18, 0);
          h_18 = ATgetArgument(f_18, 1);
          e_18 = ATgetArgument(f_18, 2);
          d_18 :
          if(match_cons(e_18, sym_Id_0))
            {
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, not_null(g_18), not_null(h_18));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(f_18, sym_Prim_2))
            {
              g_18 = ATgetArgument(f_18, 0);
              h_18 = ATgetArgument(f_18, 1);
              {
                ATerm o_18 = NULL;
                ATerm d_6;
                d_6 = t;
                {
                  t = not_null(g_18);
                  {
                    ATerm e_6 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_double_quoted_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = e_6;
                      }
                  }
                }
                t = d_6;
                {
                  ATerm p_18 = NULL;
                  t = not_null(g_18);
                  {
                    t = string_as_chars_1(t, double_quote_chars_0);
                    {
                      p_18 = t;
                      if(((o_18 != NULL) && (o_18 != p_18)))
                        _fail(p_18);
                      else
                        o_18 = p_18;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(o_18), not_null(h_18));
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
ATerm repeat_2 (ATerm t, ATerm h_80 (ATerm), ATerm i_80 (ATerm))
{
  ATerm u_18 (ATerm t)
  {
    ATerm f_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_80(t);
        t = u_18(t);
        LocalPopChoice(k_6);
      }
    else
      {
        t = f_6;
        t = i_80(t);
      }
    return(t);
  }
  t = u_18(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm k_80 (ATerm))
{
  t = repeat_2(t, k_80, _id);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_90 (ATerm))
{
  t = h_90(t);
  {
    ATerm r_0 (ATerm t)
    {
      t = topdown_1(t, h_90);
      return(t);
    }
    t = _all(t, r_0);
  }
  return(t);
}
ATerm Stratego_Ensugar_0 (ATerm t)
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_19 = NULL;
      ATerm d_19 = NULL;
      b_19 = t;
      {
        ATerm e_19 = NULL;
        ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
        t = not_null(b_19);
        {
          e_19 = t;
          {
            t = SSL_explode_term(not_null(e_19));
            {
              g_19 = t;
              y_18 :
              if(match_cons(g_19, sym__2))
                {
                  h_19 = ATgetArgument(g_19, 0);
                  i_19 = ATgetArgument(g_19, 1);
                  z_18 :
                  if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
                    {
                      j_19 = ATgetFirst((ATermList) i_19);
                      k_19 = (ATerm) ATgetNext((ATermList) i_19);
                      a_19 :
                      if(((ATgetType(k_19) == AT_LIST) && ATisEmpty(k_19)))
                        {
                          if(((d_19 != NULL) && (d_19 != j_19)))
                            _fail(j_19);
                          else
                            d_19 = j_19;
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
        t = not_null(d_19);
      }
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
      }
    }
  {
    ATerm s_0 (ATerm t)
    {
      t = repeat_2(t, Ensugar_0, _id);
      {
        ATerm q_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = EnsugarOnce_0(t);
            LocalPopChoice(s_6);
          }
        else
          {
            t = q_6;
            {
            }
          }
      }
      return(t);
    }
    t = topdown_1(t, s_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm s_52 (ATerm), ATerm t_52 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym__2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      {
        ATerm a_20 = NULL,c_20 = NULL;
        ATerm b_20 = NULL;
        t = SSLgetAnnotations(not_null(u_19));
        {
          b_20 = t;
          if(((a_20 != NULL) && (a_20 != b_20)))
            _fail(b_20);
          else
            a_20 = b_20;
        }
        {
          t = not_null(v_19);
          {
            ATerm e_20 = NULL;
            t = s_52(t);
            {
              c_20 = t;
              {
                t = not_null(w_19);
                {
                  ATerm g_20 = NULL;
                  t = t_52(t);
                  {
                    e_20 = t;
                    {
                      ATerm h_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_20), not_null(e_20)), not_null(a_20));
                      {
                        h_20 = t;
                        if(((g_20 != NULL) && (g_20 != h_20)))
                          _fail(h_20);
                        else
                          g_20 = h_20;
                      }
                      t = not_null(g_20);
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
  ATerm p_20 = NULL;
  ATerm v_6;
  v_6 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm q_20 = NULL,r_20 = NULL;
      q_20 = t;
      o_20 :
      if(match_cons(q_20, sym_Program_1))
        {
          r_20 = ATgetArgument(q_20, 0);
          if(((p_20 != NULL) && (p_20 != r_20)))
            _fail(r_20);
          else
            p_20 = r_20;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, t_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_6), not_null(p_20)), term_x_6));
      {
        t = printnl_0(t);
        {
          t = term_z_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym__2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      {
        ATerm a_7;
        a_7 = t;
        t = SSL_printnl(not_null(w_20), not_null(x_20));
        t = a_7;
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
  ATerm c_21 = NULL;
  c_21 = t;
  t = SSL_implode_string(not_null(c_21));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
        h_21 = t;
        g_21 :
        if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
          {
            i_21 = ATgetFirst((ATermList) h_21);
            j_21 = (ATerm) ATgetNext((ATermList) h_21);
            {
              t = not_null(i_21);
              {
                ATerm u_0 (ATerm t)
                {
                  t = not_null(j_21);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm t_21 = NULL;
  ATerm v_21 = NULL;
  t_21 = t;
  {
    ATerm w_21 = NULL;
    ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
    t = not_null(t_21);
    {
      w_21 = t;
      {
        t = SSL_explode_term(not_null(w_21));
        {
          y_21 = t;
          r_21 :
          if(match_cons(y_21, sym__2))
            {
              z_21 = ATgetArgument(y_21, 0);
              a_22 = ATgetArgument(y_21, 1);
              s_21 :
              if(match_string(z_21, ""))
                {
                  if(((v_21 != NULL) && (v_21 != a_22)))
                    _fail(a_22);
                  else
                    v_21 = a_22;
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
      t = not_null(v_21);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm e_22 (ATerm t)
  {
    ATerm d_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_22);
        LocalPopChoice(h_7);
      }
    else
      {
        t = d_7;
        {
          t = Nil_0(t);
          t = p_68(t);
        }
      }
    return(t);
  }
  t = e_22(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym__2))
    {
      i_22 = ATgetArgument(h_22, 0);
      j_22 = ATgetArgument(h_22, 1);
      {
        t = not_null(i_22);
        {
          ATerm v_0 (ATerm t)
          {
            t = not_null(j_22);
            return(t);
          }
          t = at_end_1(t, v_0);
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
  ATerm i_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_7);
    }
  else
    {
      t = i_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  t = SSL_explode_string(not_null(o_22));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm r_7;
  r_7 = t;
  {
    ATerm f_23 = NULL,o_23 = NULL;
    ATerm s_7;
    s_7 = t;
    {
      ATerm n_23 = NULL;
      t = f_67(t);
      {
        n_23 = t;
        if(((f_23 != NULL) && (f_23 != n_23)))
          _fail(n_23);
        else
          f_23 = n_23;
      }
    }
    t = s_7;
    {
      ATerm p_23 = NULL;
      p_23 = t;
      if(((o_23 != NULL) && (o_23 != p_23)))
        _fail(p_23);
      else
        o_23 = p_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_23)), not_null(f_23)));
        t = printnl_0(t);
      }
    }
  }
  t = r_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  t = SSL_is_string(not_null(t_23));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_7 = t;
              int y_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(y_7);
                }
              else
                {
                  t = x_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, w_0);
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            {
              ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
              j_24 = t;
              i_24 :
              if(match_cons(j_24, sym_Path_1))
                {
                  k_24 = ATgetArgument(j_24, 0);
                  t = not_null(k_24);
                }
              else
                {
                  if(match_cons(j_24, sym_Var_1))
                    {
                      k_24 = ATgetArgument(j_24, 0);
                      {
                        t = not_null(k_24);
                        {
                          ATerm z_7 = t;
                          int a_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_8);
                            }
                          else
                            {
                              t = z_7;
                              {
                                ATerm x_0 (ATerm t)
                                {
                                  t = term_b_8;
                                  return(t);
                                }
                                t = debug_1(t, x_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_24, sym_Prefix_2))
                        {
                          k_24 = ATgetArgument(j_24, 0);
                          l_24 = ATgetArgument(j_24, 1);
                          {
                            ATerm v_24 = NULL,x_24 = NULL;
                            ATerm c_8;
                            c_8 = t;
                            {
                              ATerm w_24 = NULL;
                              t = not_null(k_24);
                              {
                                t = eval_config_0(t);
                                {
                                  w_24 = t;
                                  if(((v_24 != NULL) && (v_24 != w_24)))
                                    _fail(w_24);
                                  else
                                    v_24 = w_24;
                                }
                              }
                            }
                            t = c_8;
                            {
                              ATerm y_24 = NULL;
                              t = not_null(l_24);
                              {
                                t = eval_config_0(t);
                                {
                                  y_24 = t;
                                  if(((x_24 != NULL) && (x_24 != y_24)))
                                    _fail(y_24);
                                  else
                                    x_24 = y_24;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), not_null(x_24));
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
  ATerm l_25 = NULL;
  l_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(l_25));
    {
      t = table_get_0(t);
      {
        ATerm e_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm j_8;
              j_8 = t;
              {
                ATerm n_25 = NULL;
                ATerm o_25 = NULL;
                o_25 = t;
                if(((n_25 != NULL) && (n_25 != o_25)))
                  _fail(o_25);
                else
                  n_25 = o_25;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_d_8, not_null(l_25), not_null(n_25));
                  t = table_put_0(t);
                }
              }
              t = j_8;
            }
            LocalPopChoice(i_8);
          }
        else
          {
            t = e_8;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm n_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_8;
      r_8 = t;
      {
        ATerm s_25 = NULL;
        ATerm t_25 = NULL;
        t = term_v_8;
        {
          t = get_config_0(t);
          {
            t_25 = t;
            if(((s_25 != NULL) && (s_25 != t_25)))
              _fail(t_25);
            else
              s_25 = t_25;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_25), term_y_8);
          t = geq_0(t);
        }
      }
      t = r_8;
      t = a_88(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = n_8;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym__2))
    {
      y_25 = ATgetArgument(x_25, 0);
      z_25 = ATgetArgument(x_25, 1);
      t = SSL_WriteToTextFile(not_null(y_25), not_null(z_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      t = SSL_WriteToBinaryFile(not_null(g_26), not_null(h_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_26 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm d_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm q_26 = NULL,r_26 = NULL;
            q_26 = t;
            m_26 :
            if(match_cons(q_26, sym_Output_1))
              {
                r_26 = ATgetArgument(q_26, 0);
                if(((p_26 != NULL) && (p_26 != r_26)))
                  _fail(r_26);
                else
                  p_26 = r_26;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, z_0);
          LocalPopChoice(g_9);
        }
      else
        {
          t = d_9;
          {
            ATerm s_26 = NULL;
            t = term_h_9;
            {
              s_26 = t;
              if(((p_26 != NULL) && (p_26 != s_26)))
                _fail(s_26);
              else
                p_26 = s_26;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_0, _id);
  }
  t = z_8;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(p_26);
        return(t);
      }
      t = split_2(t, b_1, _id);
      return(t);
    }
    t = _2(t, _id, a_1);
    {
      ATerm i_9 = t;
      int j_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              ATerm t_26 = NULL;
              t_26 = t;
              o_26 :
              if(!(match_cons(t_26, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, d_1);
            return(t);
          }
          t = _2(t, c_1, WriteToBinaryFile_0);
          LocalPopChoice(j_9);
        }
      else
        {
          t = i_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  ATerm k_9;
  k_9 = t;
  t = dtime_0(t);
  t = k_9;
  {
    t = x_65(t);
    {
      ATerm l_9;
      l_9 = t;
      {
        ATerm a_27 = NULL;
        t = dtime_0(t);
        {
          a_27 = t;
          if(((z_26 != NULL) && (z_26 != a_27)))
            _fail(a_27);
          else
            z_26 = a_27;
        }
      }
      t = l_9;
      {
        b_27 = t;
        y_26 :
        if(match_cons(b_27, sym__2))
          {
            c_27 = ATgetArgument(b_27, 0);
            d_27 = ATgetArgument(b_27, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_27)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_26))), not_null(d_27));
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm j_27 = NULL;
  j_27 = t;
  t = SSL_ReadFromFile(not_null(j_27));
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_76 (ATerm), ATerm e_76 (ATerm))
{
  ATerm o_27 = NULL,q_27 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm p_27 = NULL;
    t = d_76(t);
    {
      p_27 = t;
      if(((o_27 != NULL) && (o_27 != p_27)))
        _fail(p_27);
      else
        o_27 = p_27;
    }
  }
  t = m_9;
  {
    ATerm r_27 = NULL;
    t = e_76(t);
    {
      r_27 = t;
      if(((q_27 != NULL) && (q_27 != r_27)))
        _fail(r_27);
      else
        q_27 = r_27;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_27), not_null(q_27));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_27 = NULL;
  ATerm n_9;
  n_9 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
        {
          ATerm y_27 = NULL,z_27 = NULL;
          y_27 = t;
          v_27 :
          if(match_cons(y_27, sym_Input_1))
            {
              z_27 = ATgetArgument(y_27, 0);
              if(((x_27 != NULL) && (x_27 != z_27)))
                _fail(z_27);
              else
                x_27 = z_27;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, e_1);
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm a_28 = NULL;
          t = term_q_9;
          {
            a_28 = t;
            if(((x_27 != NULL) && (x_27 != a_28)))
              _fail(a_28);
            else
              x_27 = a_28;
          }
        }
      }
  }
  t = n_9;
  {
    ATerm f_1 (ATerm t)
    {
      t = not_null(x_27);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm e_28 = NULL;
    e_28 = t;
    d_28 :
    if(!(match_string(e_28, "-v")))
      {
        if(!(match_string(e_28, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_t_9;
    t = set_config_0(t);
    t = term_u_9;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  t = Option_3(t, g_1, h_1, i_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm h_28 = NULL;
    h_28 = t;
    f_28 :
    if(!(match_string(h_28, "-k")))
      {
        if(!(match_string(h_28, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm w_9;
    w_9 = t;
    {
      ATerm i_28 = NULL;
      ATerm j_28 = NULL;
      t = string_to_int_0(t);
      {
        j_28 = t;
        if(((i_28 != NULL) && (i_28 != j_28)))
          _fail(j_28);
        else
          i_28 = j_28;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, not_null(i_28));
        t = set_config_0(t);
      }
    }
    t = w_9;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_c_10;
    return(t);
  }
  t = ArgOption_3(t, j_1, k_1, l_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = SSL_string_to_int(not_null(m_28));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm u_28 = NULL;
        u_28 = t;
        p_28 :
        if(!(match_string(u_28, "-S")))
          {
            if(!(match_string(u_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_m_10;
        t = set_config_0(t);
        t = term_n_10;
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_o_10;
        return(t);
      }
      t = Option_3(t, m_1, n_1, o_1);
      LocalPopChoice(h_10);
    }
  else
    {
      t = d_10;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm v_28 = NULL;
              v_28 = t;
              q_28 :
              if(!(match_string(v_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm y_28 = NULL;
              ATerm r_10;
              r_10 = t;
              {
                ATerm w_28 = NULL;
                ATerm x_28 = NULL;
                t = string_to_int_0(t);
                {
                  x_28 = t;
                  if(((w_28 != NULL) && (w_28 != x_28)))
                    _fail(x_28);
                  else
                    w_28 = x_28;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_8, not_null(w_28));
                  t = set_config_0(t);
                }
              }
              t = r_10;
              {
                ATerm z_28 = NULL;
                z_28 = t;
                if(((y_28 != NULL) && (y_28 != z_28)))
                  _fail(z_28);
                else
                  y_28 = z_28;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_28));
              }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_s_10;
              return(t);
            }
            t = ArgOption_3(t, p_1, q_1, r_1);
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            {
              ATerm s_1 (ATerm t)
              {
                ATerm a_29 = NULL;
                a_29 = t;
                t_28 :
                if(!(match_string(a_29, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm t_1 (ATerm t)
              {
                t = term_u_10;
                t = set_config_0(t);
                t = term_v_10;
                return(t);
              }
              ATerm u_1 (ATerm t)
              {
                t = term_w_10;
                return(t);
              }
              t = Option_3(t, s_1, t_1, u_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
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
    ATerm g_29 = NULL;
    g_29 = t;
    d_29 :
    if(!(match_string(g_29, "-o")))
      {
        if(!(match_string(g_29, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm j_29 = NULL;
    ATerm j_11;
    j_11 = t;
    {
      ATerm h_29 = NULL;
      ATerm i_29 = NULL;
      i_29 = t;
      if(((h_29 != NULL) && (h_29 != i_29)))
        _fail(i_29);
      else
        h_29 = i_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(h_29));
        t = set_config_0(t);
      }
    }
    t = j_11;
    {
      ATerm k_29 = NULL;
      k_29 = t;
      if(((j_29 != NULL) && (j_29 != k_29)))
        _fail(k_29);
      else
        j_29 = k_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_29));
    }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_n_11;
    return(t);
  }
  t = ArgOption_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm y_1 (ATerm t)
        {
          ATerm o_29 = NULL;
          o_29 = t;
          n_29 :
          if(!(match_string(o_29, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_1 (ATerm t)
        {
          t = term_t_11;
          t = set_config_0(t);
          t = term_u_11;
          return(t);
        }
        ATerm a_2 (ATerm t)
        {
          t = term_v_11;
          return(t);
        }
        t = Option_3(t, y_1, z_1, a_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  u_29 = t;
  s_29 :
  if(match_string(u_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
        {
          w_29 = ATgetFirst((ATermList) u_29);
          x_29 = (ATerm) ATgetNext((ATermList) u_29);
          t_29 :
          if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
            {
              y_29 = ATgetFirst((ATermList) x_29);
              z_29 = (ATerm) ATgetNext((ATermList) x_29);
              {
                ATerm d_30 = NULL;
                ATerm w_11;
                w_11 = t;
                {
                  t = not_null(w_29);
                  t = j_0(t);
                }
                t = w_11;
                {
                  ATerm e_30 = NULL;
                  t = not_null(y_29);
                  {
                    t = k_0(t);
                    {
                      e_30 = t;
                      if(((d_30 != NULL) && (d_30 != e_30)))
                        _fail(e_30);
                      else
                        d_30 = e_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_29)), not_null(d_30));
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
  ATerm b_2 (ATerm t)
  {
    ATerm l_30 = NULL;
    l_30 = t;
    i_30 :
    if(!(match_string(l_30, "-i")))
      {
        if(!(match_string(l_30, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm o_30 = NULL;
    ATerm x_11;
    x_11 = t;
    {
      ATerm m_30 = NULL;
      ATerm n_30 = NULL;
      n_30 = t;
      if(((m_30 != NULL) && (m_30 != n_30)))
        _fail(n_30);
      else
        m_30 = n_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(m_30));
        t = set_config_0(t);
      }
    }
    t = x_11;
    {
      ATerm p_30 = NULL;
      p_30 = t;
      if(((o_30 != NULL) && (o_30 != p_30)))
        _fail(p_30);
      else
        o_30 = p_30;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_30));
    }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_z_11;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, term_j_12));
  {
    t = printnl_0(t);
    {
      t = term_z_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  t = SSL_TicksToSeconds(not_null(t_30));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym__2))
    {
      b_31 = ATgetArgument(a_31, 0);
      c_31 = ATgetArgument(a_31, 1);
      {
        ATerm k_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_31), not_null(c_31));
            LocalPopChoice(o_12);
          }
        else
          {
            t = k_12;
            t = SSL_addr(not_null(b_31), not_null(c_31));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_74 (ATerm), ATerm p_74 (ATerm))
{
  ATerm q_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_74(t);
      LocalPopChoice(s_12);
    }
  else
    {
      t = q_12;
      {
        ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
        j_31 = t;
        i_31 :
        if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
          {
            k_31 = ATgetFirst((ATermList) j_31);
            l_31 = (ATerm) ATgetNext((ATermList) j_31);
            {
              ATerm o_31 = NULL;
              ATerm p_31 = NULL;
              t = not_null(l_31);
              {
                t = foldr_2(t, o_74, p_74);
                {
                  p_31 = t;
                  if(((o_31 != NULL) && (o_31 != p_31)))
                    _fail(p_31);
                  else
                    o_31 = p_31;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), not_null(o_31));
                t = p_74(t);
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
ATerm crush_2 (ATerm t, ATerm m_73 (ATerm), ATerm n_73 (ATerm))
{
  ATerm w_31 = NULL;
  ATerm y_31 = NULL;
  w_31 = t;
  {
    ATerm z_31 = NULL;
    ATerm b_32 = NULL,c_32 = NULL,e_32 = NULL;
    t = not_null(w_31);
    {
      z_31 = t;
      {
        t = SSL_explode_term(not_null(z_31));
        {
          b_32 = t;
          v_31 :
          if(match_cons(b_32, sym__2))
            {
              c_32 = ATgetArgument(b_32, 0);
              e_32 = ATgetArgument(b_32, 1);
              if(((y_31 != NULL) && (y_31 != e_32)))
                _fail(e_32);
              else
                y_31 = e_32;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_31);
      t = foldr_2(t, m_73, n_73);
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
    ATerm e_2 (ATerm t)
    {
      t = term_j_10;
      return(t);
    }
    t = crush_2(t, e_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym__2))
    {
      l_32 = ATgetArgument(k_32, 0);
      m_32 = ATgetArgument(k_32, 1);
      {
        ATerm v_12;
        v_12 = t;
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_32), not_null(m_32));
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              t = SSL_gtr(not_null(l_32), not_null(m_32));
            }
        }
        t = v_12;
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
  ATerm s_32 = NULL;
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
      t_32 = t;
      r_32 :
      if(match_cons(t_32, sym__2))
        {
          u_32 = ATgetArgument(t_32, 0);
          v_32 = ATgetArgument(t_32, 1);
          {
            if(((s_32 != NULL) && (s_32 != u_32)))
              _fail(u_32);
            else
              s_32 = u_32;
            if(((s_32 != NULL) && (s_32 != v_32)))
              _fail(v_32);
            else
              s_32 = v_32;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13;
      c_13 = t;
      {
        ATerm y_32 = NULL;
        ATerm z_32 = NULL;
        t = term_v_8;
        {
          t = get_config_0(t);
          {
            z_32 = t;
            if(((y_32 != NULL) && (y_32 != z_32)))
              _fail(z_32);
            else
              y_32 = z_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_32), term_z_6);
          t = geq_0(t);
        }
      }
      t = c_13;
      t = z_87(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm d_33 = NULL,f_33 = NULL;
    ATerm d_13;
    d_13 = t;
    {
      ATerm e_33 = NULL;
      t = run_time_0(t);
      {
        e_33 = t;
        if(((d_33 != NULL) && (d_33 != e_33)))
          _fail(e_33);
        else
          d_33 = e_33;
      }
    }
    t = d_13;
    {
      ATerm g_33 = NULL;
      t = term_e_13;
      {
        t = get_config_0(t);
        {
          g_33 = t;
          if(((f_33 != NULL) && (f_33 != g_33)))
            _fail(g_33);
          else
            f_33 = g_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_13), not_null(d_33)), term_i_13), not_null(f_33)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_2);
  {
    t = term_j_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  m_33 :
  if(match_cons(n_33, sym_Version_0))
    {
      ATerm p_33 = NULL,r_33 = NULL;
      ATerm n_13;
      n_13 = t;
      {
        ATerm q_33 = NULL;
        t = SSLgetAnnotations(not_null(n_33));
        {
          q_33 = t;
          if(((p_33 != NULL) && (p_33 != q_33)))
            _fail(q_33);
          else
            p_33 = q_33;
        }
      }
      t = n_13;
      {
        ATerm u_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_33));
        {
          u_33 = t;
          if(((r_33 != NULL) && (r_33 != u_33)))
            _fail(u_33);
          else
            r_33 = u_33;
        }
        t = not_null(r_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, g_2);
  t = v_65(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  t = SSL_table_create(not_null(b_34));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  {
    ATerm u_13;
    u_13 = t;
    {
      t = term_w_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_13, term_x_13, not_null(f_34));
          t = table_put_0(t);
        }
      }
    }
    t = u_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  t = SSL_table_destroy(not_null(j_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  t = SSL_exit(not_null(n_34));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  q_34 :
  if(((ATgetType(r_34) == AT_LIST) && ATisEmpty(r_34)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
        {
          s_34 = ATgetFirst((ATermList) r_34);
          t_34 = (ATerm) ATgetNext((ATermList) r_34);
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
  ATerm y_13;
  y_13 = t;
  {
    ATerm w_34 = NULL;
    ATerm b_35 = NULL;
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          ATerm x_34 = NULL;
          ATerm a_35 = NULL;
          a_35 = t;
          if(((x_34 != NULL) && (x_34 != a_35)))
            _fail(a_35);
          else
            x_34 = a_35;
          t = (ATerm) ATinsert(ATempty, not_null(x_34));
        }
      }
    {
      b_35 = t;
      if(((w_34 != NULL) && (w_34 != b_35)))
        _fail(b_35);
      else
        w_34 = b_35;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(w_34));
      t = printnl_0(t);
    }
  }
  t = y_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm f_35 (ATerm t)
  {
    ATerm c_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = c_14;
        t = Cons_2(t, a_68, f_35);
      }
    return(t);
  }
  t = f_35(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  o_35 = t;
  l_35 :
  if(((ATgetType(o_35) == AT_LIST) && !(ATisEmpty(o_35))))
    {
      m_35 = ATgetFirst((ATermList) o_35);
      n_35 = (ATerm) ATgetNext((ATermList) o_35);
      {
        ATerm r_35 = NULL;
        t = not_null(n_35);
        {
          ATerm j_14;
          j_14 = t;
          {
            ATerm s_35 = NULL,x_35 = NULL,z_35 = NULL;
            ATerm k_14;
            k_14 = t;
            {
              ATerm w_35 = NULL;
              t = i_0(t);
              {
                w_35 = t;
                if(((s_35 != NULL) && (s_35 != w_35)))
                  _fail(w_35);
                else
                  s_35 = w_35;
              }
            }
            t = k_14;
            {
              ATerm y_35 = NULL;
              t = not_null(m_35);
              {
                t = h_0(t);
                {
                  y_35 = t;
                  if(((x_35 != NULL) && (x_35 != y_35)))
                    _fail(y_35);
                  else
                    x_35 = y_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_35)), not_null(x_35));
                {
                  z_35 = t;
                  if(((r_35 != NULL) && (r_35 != z_35)))
                    _fail(z_35);
                  else
                    r_35 = z_35;
                }
              }
            }
          }
          t = j_14;
          {
            ATerm h_2 (ATerm t)
            {
              t = not_null(r_35);
              return(t);
            }
            t = reverse_acc_2(t, h_0, h_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_35) == AT_LIST) && ATisEmpty(o_35)))
        {
          {
            t = term_s_9;
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
  ATerm i_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm k_36 = NULL,l_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym_Program_1))
    {
      l_36 = ATgetArgument(k_36, 0);
      {
        ATerm o_36 = NULL,q_36 = NULL;
        ATerm p_36 = NULL;
        t = SSLgetAnnotations(not_null(k_36));
        {
          p_36 = t;
          if(((o_36 != NULL) && (o_36 != p_36)))
            _fail(p_36);
          else
            o_36 = p_36;
        }
        {
          t = not_null(l_36);
          {
            ATerm s_36 = NULL;
            t = i_65(t);
            {
              q_36 = t;
              {
                ATerm t_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_36)), not_null(o_36));
                {
                  t_36 = t;
                  if(((s_36 != NULL) && (s_36 != t_36)))
                    _fail(t_36);
                  else
                    s_36 = t_36;
                }
                t = not_null(s_36);
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
  ATerm b_37 = NULL;
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_37 = NULL;
      t = term_e_13;
      {
        t = get_config_0(t);
        {
          c_37 = t;
          if(((b_37 != NULL) && (b_37 != c_37)))
            _fail(c_37);
          else
            b_37 = c_37;
        }
      }
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm k_37 = NULL;
            k_37 = t;
            if(((b_37 != NULL) && (b_37 != k_37)))
              _fail(k_37);
            else
              b_37 = k_37;
            return(t);
          }
          t = Program_1(t, k_2);
          return(t);
        }
        t = fetch_1(t, j_2);
      }
    }
  {
    t = term_s_14;
    {
      t = echo_0(t);
      {
        t = term_a_15;
        {
          t = table_get_0(t);
          {
            ATerm l_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, l_2);
            {
              ATerm m_2 (ATerm t)
              {
                ATerm l_37 = NULL;
                ATerm m_37 = NULL;
                m_37 = t;
                if(((l_37 != NULL) && (l_37 != m_37)))
                  _fail(m_37);
                else
                  l_37 = m_37;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_37)), term_b_15);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, m_2);
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
  ATerm e_15;
  e_15 = t;
  {
    ATerm r_37 = NULL;
    ATerm s_37 = NULL;
    s_37 = t;
    if(((r_37 != NULL) && (r_37 != s_37)))
      _fail(s_37);
    else
      r_37 = s_37;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(r_37)));
      t = printnl_0(t);
    }
  }
  t = e_15;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_67 (ATerm))
{
  ATerm f_15;
  f_15 = t;
  {
    t = g_67(t);
    t = debug_0(t);
  }
  t = f_15;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_65 (ATerm))
{
  ATerm z_37 = NULL,a_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym_Undefined_1))
    {
      a_38 = ATgetArgument(z_37, 0);
      {
        ATerm d_38 = NULL,f_38 = NULL;
        ATerm e_38 = NULL;
        t = SSLgetAnnotations(not_null(z_37));
        {
          e_38 = t;
          if(((d_38 != NULL) && (d_38 != e_38)))
            _fail(e_38);
          else
            d_38 = e_38;
        }
        {
          t = not_null(a_38);
          {
            ATerm h_38 = NULL;
            t = j_65(t);
            {
              f_38 = t;
              {
                ATerm j_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_38)), not_null(d_38));
                {
                  j_38 = t;
                  if(((h_38 != NULL) && (h_38 != j_38)))
                    _fail(j_38);
                  else
                    h_38 = j_38;
                }
                t = not_null(h_38);
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
ATerm fetch_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm o_38 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_68, _id);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        t = Cons_2(t, _id, o_38);
      }
    return(t);
  }
  t = o_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_78 (ATerm))
{
  t = fetch_1(t, n_78);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  s_38 :
  if(match_cons(t_38, sym_Help_0))
    {
      ATerm v_38 = NULL,x_38 = NULL;
      ATerm i_15;
      i_15 = t;
      {
        ATerm w_38 = NULL;
        t = SSLgetAnnotations(not_null(t_38));
        {
          w_38 = t;
          if(((v_38 != NULL) && (v_38 != w_38)))
            _fail(w_38);
          else
            v_38 = w_38;
        }
      }
      t = i_15;
      {
        ATerm y_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_38));
        {
          y_38 = t;
          if(((x_38 != NULL) && (x_38 != y_38)))
            _fail(y_38);
          else
            x_38 = y_38;
        }
        t = not_null(x_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_79(t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym__2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      t = SSL_table_get(not_null(f_39), not_null(g_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym__3))
    {
      o_39 = ATgetArgument(n_39, 0);
      p_39 = ATgetArgument(n_39, 1);
      q_39 = ATgetArgument(n_39, 2);
      {
        ATerm o_15;
        o_15 = t;
        {
          ATerm u_39 = NULL;
          ATerm v_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_39), not_null(p_39));
          {
            ATerm r_15 = t;
            int u_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_15);
              }
            else
              {
                t = r_15;
                t = (ATerm) ATempty;
              }
            {
              v_39 = t;
              if(((u_39 != NULL) && (u_39 != v_39)))
                _fail(v_39);
              else
                u_39 = v_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_39), not_null(p_39), (ATerm) ATinsert(CheckATermList(not_null(u_39)), not_null(q_39)));
            t = table_put_0(t);
          }
        }
        t = o_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm e_40 = NULL;
  ATerm f_40 = NULL;
  t = term_s_9;
  {
    t = s_79(t);
    {
      f_40 = t;
      if(((e_40 != NULL) && (e_40 != f_40)))
        _fail(f_40);
      else
        e_40 = f_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, not_null(e_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_string(p_40, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(p_40) == AT_LIST) && !(ATisEmpty(p_40))))
        {
          q_40 = ATgetFirst((ATermList) p_40);
          r_40 = (ATerm) ATgetNext((ATermList) p_40);
          {
            ATerm u_40 = NULL;
            ATerm x_15;
            x_15 = t;
            {
              t = not_null(q_40);
              t = a_0(t);
            }
            t = x_15;
            {
              ATerm v_40 = NULL;
              t = term_s_9;
              {
                t = d_0(t);
                {
                  v_40 = t;
                  if(((u_40 != NULL) && (u_40 != v_40)))
                    _fail(v_40);
                  else
                    u_40 = v_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_40)), not_null(u_40));
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
  ATerm n_2 (ATerm t)
  {
    ATerm a_41 = NULL;
    a_41 = t;
    z_40 :
    if(!(match_string(a_41, "--help")))
      {
        if(!(match_string(a_41, "-h")))
          {
            if(!(match_string(a_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_z_15;
    {
      t = set_config_0(t);
      t = term_a_16;
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_b_16;
    return(t);
  }
  t = Option_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  d_41 = t;
  c_41 :
  if(((ATgetType(d_41) == AT_LIST) && !(ATisEmpty(d_41))))
    {
      e_41 = ATgetFirst((ATermList) d_41);
      f_41 = (ATerm) ATgetNext((ATermList) d_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_54 (ATerm), ATerm c_54 (ATerm))
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  o_41 :
  if(((ATgetType(p_41) == AT_LIST) && !(ATisEmpty(p_41))))
    {
      q_41 = ATgetFirst((ATermList) p_41);
      r_41 = (ATerm) ATgetNext((ATermList) p_41);
      {
        ATerm v_41 = NULL,x_41 = NULL;
        ATerm w_41 = NULL;
        t = SSLgetAnnotations(not_null(p_41));
        {
          w_41 = t;
          if(((v_41 != NULL) && (v_41 != w_41)))
            _fail(w_41);
          else
            v_41 = w_41;
        }
        {
          t = not_null(q_41);
          {
            ATerm z_41 = NULL;
            t = b_54(t);
            {
              x_41 = t;
              {
                t = not_null(r_41);
                {
                  ATerm b_42 = NULL;
                  t = c_54(t);
                  {
                    z_41 = t;
                    {
                      ATerm d_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_41)), not_null(x_41)), not_null(v_41));
                      {
                        d_42 = t;
                        if(((b_42 != NULL) && (b_42 != d_42)))
                          _fail(d_42);
                        else
                          b_42 = d_42;
                      }
                      t = not_null(b_42);
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
  ATerm n_42 = NULL;
  n_42 = t;
  m_42 :
  if(((ATgetType(n_42) == AT_LIST) && ATisEmpty(n_42)))
    {
      {
        ATerm p_42 = NULL,r_42 = NULL;
        ATerm c_16;
        c_16 = t;
        {
          ATerm q_42 = NULL;
          t = SSLgetAnnotations(not_null(n_42));
          {
            q_42 = t;
            if(((p_42 != NULL) && (p_42 != q_42)))
              _fail(q_42);
            else
              p_42 = q_42;
          }
        }
        t = c_16;
        {
          ATerm s_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_42));
          {
            s_42 = t;
            if(((r_42 != NULL) && (r_42 != s_42)))
              _fail(s_42);
            else
              r_42 = s_42;
          }
          t = not_null(r_42);
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
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  y_42 = t;
  x_42 :
  if(match_cons(y_42, sym__2))
    {
      z_42 = ATgetArgument(y_42, 0);
      a_43 = ATgetArgument(y_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_8, not_null(z_42), not_null(a_43));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm d_16;
  d_16 = t;
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_16;
        t = q_79(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        {
        }
      }
  }
  t = d_16;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm i_43 = NULL;
      ATerm l_16;
      l_16 = t;
      {
        ATerm g_43 = NULL;
        ATerm h_43 = NULL;
        h_43 = t;
        if(((g_43 != NULL) && (g_43 != h_43)))
          _fail(h_43);
        else
          g_43 = h_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(g_43));
          t = set_config_0(t);
        }
      }
      t = l_16;
      {
        ATerm j_43 = NULL;
        j_43 = t;
        if(((i_43 != NULL) && (i_43 != j_43)))
          _fail(j_43);
        else
          i_43 = j_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_43));
      }
      return(t);
    }
    ATerm r_2 (ATerm t)
    {
      ATerm o_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              {
                t = q_79(t);
                t = Cons_2(t, _id, r_2);
              }
            }
          LocalPopChoice(p_16);
        }
      else
        {
          t = o_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_2, r_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
    s_43 = t;
    o_43 :
    if(match_cons(s_43, sym__3))
      {
        t_43 = ATgetArgument(s_43, 0);
        u_43 = ATgetArgument(s_43, 1);
        v_43 = ATgetArgument(s_43, 2);
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
            {
              if(((r_43 != NULL) && (r_43 != v_43)))
                _fail(v_43);
              else
                r_43 = v_43;
              t = SSL_table_put(not_null(p_43), not_null(q_43), not_null(r_43));
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
ATerm parse_options_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm y_43 = NULL;
  ATerm c_17;
  c_17 = t;
  {
    t = term_d_17;
    t = table_put_0(t);
  }
  t = c_17;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_79(t);
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_2);
    {
      ATerm g_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_17;
          q_17 = t;
          {
            ATerm r_17 = t;
            int s_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_y_15;
                t = get_config_0(t);
                LocalPopChoice(s_17);
              }
            else
              {
                t = r_17;
                t = fetch_1(t, Help_0);
              }
          }
          t = q_17;
          {
            t = system_usage_0(t);
            {
              t = term_j_10;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_17);
        }
      else
        {
          t = g_17;
          {
            ATerm t_17 = t;
            int w_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_2 (ATerm t)
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm z_43 = NULL;
                    z_43 = t;
                    if(((y_43 != NULL) && (y_43 != z_43)))
                      _fail(z_43);
                    else
                      y_43 = z_43;
                    return(t);
                  }
                  t = Undefined_1(t, u_2);
                  return(t);
                }
                t = fetch_1(t, t_2);
                {
                  ATerm v_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_43)), term_x_17);
                    return(t);
                  }
                  t = say_1(t, v_2);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_z_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_17);
              }
            else
              {
                t = t_17;
                {
                }
              }
          }
        }
      {
        ATerm y_17;
        y_17 = t;
        {
          t = term_y_14;
          t = table_destroy_0(t);
        }
        t = y_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm e_66 (ATerm))
{
  t = parse_options_1(t, b_66);
  {
    t = store_options_0(t);
    {
      t = d_66(t);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_66);
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            {
              ATerm i_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_66(t);
                  t = report_success_0(t);
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = i_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_66 (ATerm), ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_66(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_66);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, w_2, u_66, v_66, x_2);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm o_66 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm z_2 (ATerm t)
    {
      ATerm m_18;
      m_18 = t;
      {
        ATerm c_44 = NULL;
        ATerm d_44 = NULL;
        t = term_e_13;
        {
          t = get_config_0(t);
          {
            d_44 = t;
            if(((c_44 != NULL) && (c_44 != d_44)))
              _fail(d_44);
            else
              c_44 = d_44;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(c_44)));
          t = printnl_0(t);
        }
      }
      t = m_18;
      return(t);
    }
    t = if_verbose2_1(t, z_2);
    return(t);
  }
  t = iowrap_4(t, m_66, n_66, o_66, y_2);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm))
{
  t = iowrap_3(t, k_66, l_66, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    t = _2(t, _id, h_66);
    return(t);
  }
  t = iowrap_2(t, a_3, _fail);
  return(t);
}
ATerm stratego_ensugar_0 (ATerm t)
{
  t = iowrap_1(t, Stratego_Ensugar_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, Stratego_Ensugar_0);
  return(t);
}
