#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
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
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_Script_1;
Symbol sym_Command_1;
Symbol sym_Dump_1;
Symbol sym_Load_1;
Symbol sym_Eval_1;
Symbol sym_Imports_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Star_0;
Symbol sym_StarStar_0;
Symbol sym_OpDecl_2;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_BuildDefault_1;
Symbol sym_Con_2;
Symbol sym_Op_2;
Symbol sym_As_2;
Symbol sym_Tuple_1;
Symbol sym_App_2;
Symbol sym_List_1;
Symbol sym_ListTail_2;
Symbol sym_Explode_2;
Symbol sym_RootApp_1;
Symbol sym_Anno_2;
Symbol sym_Con1_1;
Symbol sym_Con2_2;
Symbol sym_Con3_2;
Symbol sym_Con4_3;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_SRDef_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallNoArgs_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_AM_2;
Symbol sym_ParenStrat_1;
Symbol sym_LRule_1;
Symbol sym_AnnoCong_2;
Symbol sym_StrategyCurly_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_RChoice_2;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_RGChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Bagof_1;
Symbol sym_PrimNoArgs_1;
Symbol sym_Prim_2;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_TupleCong_0;
Symbol sym_TupleCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_ModCong_2;
Symbol sym_Mod_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ListCong_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Star_0 = ATmakeSymbol("Star", 0, ATfalse);
  ATprotectSymbol(sym_Star_0);
  sym_StarStar_0 = ATmakeSymbol("StarStar", 0, ATfalse);
  ATprotectSymbol(sym_StarStar_0);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Con_2 = ATmakeSymbol("Con", 2, ATfalse);
  ATprotectSymbol(sym_Con_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Con1_1 = ATmakeSymbol("Con1", 1, ATfalse);
  ATprotectSymbol(sym_Con1_1);
  sym_Con2_2 = ATmakeSymbol("Con2", 2, ATfalse);
  ATprotectSymbol(sym_Con2_2);
  sym_Con3_2 = ATmakeSymbol("Con3", 2, ATfalse);
  ATprotectSymbol(sym_Con3_2);
  sym_Con4_3 = ATmakeSymbol("Con4", 3, ATfalse);
  ATprotectSymbol(sym_Con4_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
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
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_RGChoice_2 = ATmakeSymbol("RGChoice", 2, ATfalse);
  ATprotectSymbol(sym_RGChoice_2);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_h_15;
ATerm term_z_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_w_9;
ATerm term_y_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_h_8;
ATerm term_x_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_p_7;
ATerm term_n_7;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_i_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_o_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_l_3;
void init_constant_terms (void)
{
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_5);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_5);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_Call_2, term_p_5, (ATerm) ATempty);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Call_2, term_r_5, (ATerm) ATempty);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_5);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Call_2, term_w_5, (ATerm) ATempty);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_Op_2, term_i_5, (ATerm) ATempty);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_h_8);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_8);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_z_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_z_11);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_z_11);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__3, term_m_13, term_n_13, (ATerm) ATempty);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm k_55 (ATerm), ATerm l_55 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm w_54 (ATerm), ATerm x_54 (ATerm));
ATerm SVar_1 (ATerm, ATerm b_57 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm a_60 (ATerm), ATerm b_60 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm RDef_3 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm l_56 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm z_59 (ATerm));
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_91 (ATerm));
ATerm at_last_1 (ATerm, ATerm t_83 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_1 (ATerm, ATerm g_75 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm s_90 (ATerm), ATerm t_90 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_90 (ATerm));
ATerm topdown_1 (ATerm, ATerm l_87 (ATerm));
ATerm _2 (ATerm, ATerm v_52 (ATerm), ATerm w_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_73 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm s_70 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_77 (ATerm), ATerm g_77 (ATerm));
ATerm crush_2 (ATerm, ATerm x_78 (ATerm), ATerm y_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_70 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_72 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_75 (ATerm), ATerm u_75 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_83 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_69 (ATerm));
ATerm map_1 (ATerm, ATerm v_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_69 (ATerm));
ATerm Program_1 (ATerm, ATerm m_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_83 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_70 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_69 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_65 (ATerm), ATerm l_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_69 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_69 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm h_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm a_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_71 (ATerm), ATerm x_71 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_71 (ATerm));
ATerm stratego_desugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm string_to_real_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  t = SSL_string_to_real(not_null(d_3));
  return(t);
}
ATerm UnEscape_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  o_4 = t;
  h_4 :
  if(((ATgetType(o_4) == AT_LIST) && ((ATermList) o_4 != ATempty)))
    {
      p_4 = ATgetFirst((ATermList) o_4);
      q_4 = (ATerm) ATgetNext((ATermList) o_4);
      l_4 :
      if(match_int(p_4, 92))
        {
          m_4 :
          if(((ATgetType(q_4) == AT_LIST) && ((ATermList) q_4 != ATempty)))
            {
              r_4 = ATgetFirst((ATermList) q_4);
              s_4 = (ATerm) ATgetNext((ATermList) q_4);
              n_4 :
              if(match_int(r_4, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_l_3);
                }
              else
                {
                  if(match_int(r_4, 110))
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_m_3);
                    }
                  else
                    {
                      if(match_int(r_4, 92))
                        {
                          t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_n_3);
                        }
                      else
                        {
                          if(match_int(r_4, 34))
                            {
                              t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_o_3);
                            }
                          else
                            {
                              _fail(t);
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
ATerm unescape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm b_5 (ATerm t)
    {
      t = try_1(t, UnEscape_0);
      {
        ATerm p_3 = t;
        int q_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, b_5);
            LocalPopChoice(q_3);
          }
        else
          {
            t = p_3;
            t = Nil_0(t);
          }
      }
      return(t);
    }
    t = b_5(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm RemoveLeadingPrime_0 (ATerm t)
{
  ATerm h_5 = NULL;
  ATerm j_5 = NULL,k_5 = NULL;
  h_5 = t;
  {
    ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
    t = not_null(h_5);
    {
      t = explode_string_0(t);
      {
        l_5 = t;
        f_5 :
        if(((ATgetType(l_5) == AT_LIST) && ((ATermList) l_5 != ATempty)))
          {
            m_5 = ATgetFirst((ATermList) l_5);
            n_5 = (ATerm) ATgetNext((ATermList) l_5);
            g_5 :
            if(match_int(m_5, 39))
              {
                ATerm o_5 = NULL;
                if(((j_5 != NULL) && (j_5 != n_5)))
                  _fail(n_5);
                else
                  j_5 = n_5;
                {
                  t = not_null(j_5);
                  {
                    t = implode_string_0(t);
                    {
                      o_5 = t;
                      if(((k_5 != NULL) && (k_5 != o_5)))
                        _fail(o_5);
                      else
                        k_5 = o_5;
                    }
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
    }
    t = not_null(k_5);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm k_55 (ATerm), ATerm l_55 (ATerm))
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym_Op_2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      {
        ATerm e_6 = NULL,g_6 = NULL;
        ATerm f_6 = NULL;
        t = SSLgetAnnotations(not_null(y_5));
        {
          f_6 = t;
          if(((e_6 != NULL) && (e_6 != f_6)))
            _fail(f_6);
          else
            e_6 = f_6;
        }
        {
          t = not_null(z_5);
          {
            ATerm i_6 = NULL;
            t = k_55(t);
            {
              g_6 = t;
              {
                t = not_null(a_6);
                {
                  ATerm k_6 = NULL;
                  t = l_55(t);
                  {
                    i_6 = t;
                    {
                      ATerm l_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(g_6), not_null(i_6)), not_null(e_6));
                      {
                        l_6 = t;
                        if(((k_6 != NULL) && (k_6 != l_6)))
                          _fail(l_6);
                        else
                          k_6 = l_6;
                      }
                      t = not_null(k_6);
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
ATerm OpDecl_2 (ATerm t, ATerm w_54 (ATerm), ATerm x_54 (ATerm))
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym_OpDecl_2))
    {
      y_6 = ATgetArgument(x_6, 0);
      z_6 = ATgetArgument(x_6, 1);
      {
        ATerm d_7 = NULL,f_7 = NULL;
        ATerm e_7 = NULL;
        t = SSLgetAnnotations(not_null(x_6));
        {
          e_7 = t;
          if(((d_7 != NULL) && (d_7 != e_7)))
            _fail(e_7);
          else
            d_7 = e_7;
        }
        {
          t = not_null(y_6);
          {
            ATerm h_7 = NULL;
            t = w_54(t);
            {
              f_7 = t;
              {
                t = not_null(z_6);
                {
                  ATerm j_7 = NULL;
                  t = x_54(t);
                  {
                    h_7 = t;
                    {
                      ATerm k_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(f_7), not_null(h_7)), not_null(d_7));
                      {
                        k_7 = t;
                        if(((j_7 != NULL) && (j_7 != k_7)))
                          _fail(k_7);
                        else
                          j_7 = k_7;
                      }
                      t = not_null(j_7);
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
ATerm SVar_1 (ATerm t, ATerm b_57 (ATerm))
{
  ATerm v_7 = NULL,w_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym_SVar_1))
    {
      w_7 = ATgetArgument(v_7, 0);
      {
        ATerm z_7 = NULL,b_8 = NULL;
        ATerm a_8 = NULL;
        t = SSLgetAnnotations(not_null(v_7));
        {
          a_8 = t;
          if(((z_7 != NULL) && (z_7 != a_8)))
            _fail(a_8);
          else
            z_7 = a_8;
        }
        {
          t = not_null(w_7);
          {
            ATerm d_8 = NULL;
            t = b_57(t);
            {
              b_8 = t;
              {
                ATerm e_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_8)), not_null(z_7));
                {
                  e_8 = t;
                  if(((d_8 != NULL) && (d_8 != e_8)))
                    _fail(e_8);
                  else
                    d_8 = e_8;
                }
                t = not_null(d_8);
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
  ATerm w_8 = NULL,x_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_Var_1))
    {
      x_8 = ATgetArgument(w_8, 0);
      {
        ATerm r_3 = t;
        int s_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 = NULL,c_9 = NULL;
            ATerm b_9 = NULL;
            t = SSLgetAnnotations(not_null(w_8));
            {
              b_9 = t;
              if(((a_9 != NULL) && (a_9 != b_9)))
                _fail(b_9);
              else
                a_9 = b_9;
            }
            {
              t = not_null(x_8);
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
            LocalPopChoice(s_3);
          }
        else
          {
            t = r_3;
            {
              ATerm t_3 = t;
              int u_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_9 = NULL,k_9 = NULL;
                  ATerm j_9 = NULL;
                  t = SSLgetAnnotations(not_null(w_8));
                  {
                    j_9 = t;
                    if(((i_9 != NULL) && (i_9 != j_9)))
                      _fail(j_9);
                    else
                      i_9 = j_9;
                  }
                  {
                    t = not_null(x_8);
                    {
                      ATerm m_9 = NULL;
                      t = m_0(t);
                      {
                        k_9 = t;
                        {
                          ATerm n_9 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_9)), not_null(i_9));
                          {
                            n_9 = t;
                            if(((m_9 != NULL) && (m_9 != n_9)))
                              _fail(n_9);
                            else
                              m_9 = n_9;
                          }
                          t = not_null(m_9);
                        }
                      }
                    }
                  }
                  LocalPopChoice(u_3);
                }
              else
                {
                  t = t_3;
                  {
                    ATerm q_9 = NULL,s_9 = NULL;
                    ATerm r_9 = NULL;
                    t = SSLgetAnnotations(not_null(w_8));
                    {
                      r_9 = t;
                      if(((q_9 != NULL) && (q_9 != r_9)))
                        _fail(r_9);
                      else
                        q_9 = r_9;
                    }
                    {
                      t = not_null(x_8);
                      {
                        ATerm u_9 = NULL;
                        t = m_0(t);
                        {
                          s_9 = t;
                          {
                            ATerm v_9 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_9)), not_null(q_9));
                            {
                              v_9 = t;
                              if(((u_9 != NULL) && (u_9 != v_9)))
                                _fail(v_9);
                              else
                                u_9 = v_9;
                            }
                            t = not_null(u_9);
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
ATerm VarDec_2 (ATerm t, ATerm a_60 (ATerm), ATerm b_60 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_VarDec_2))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      {
        ATerm u_10 = NULL,w_10 = NULL;
        ATerm v_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          v_10 = t;
          if(((u_10 != NULL) && (u_10 != v_10)))
            _fail(v_10);
          else
            u_10 = v_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm y_10 = NULL;
            t = a_60(t);
            {
              w_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm a_11 = NULL;
                  t = b_60(t);
                  {
                    y_10 = t;
                    {
                      ATerm b_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(w_10), not_null(y_10)), not_null(u_10));
                      {
                        b_11 = t;
                        if(((a_11 != NULL) && (a_11 != b_11)))
                          _fail(b_11);
                        else
                          a_11 = b_11;
                      }
                      t = not_null(a_11);
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
ATerm SDef_3 (ATerm t, ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_SDef_3))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      r_11 = ATgetArgument(o_11, 2);
      {
        ATerm w_11 = NULL,y_11 = NULL;
        ATerm x_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          x_11 = t;
          if(((w_11 != NULL) && (w_11 != x_11)))
            _fail(x_11);
          else
            w_11 = x_11;
        }
        {
          t = not_null(p_11);
          {
            ATerm a_12 = NULL;
            t = w_59(t);
            {
              y_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm c_12 = NULL;
                  t = x_59(t);
                  {
                    a_12 = t;
                    {
                      t = not_null(r_11);
                      {
                        ATerm e_12 = NULL;
                        t = y_59(t);
                        {
                          c_12 = t;
                          {
                            ATerm f_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_11), not_null(a_12), not_null(c_12)), not_null(w_11));
                            {
                              f_12 = t;
                              if(((e_12 != NULL) && (e_12 != f_12)))
                                _fail(f_12);
                              else
                                e_12 = f_12;
                            }
                            t = not_null(e_12);
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
ATerm RDef_3 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm l_56 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_RDef_3))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      w_12 = ATgetArgument(t_12, 2);
      {
        ATerm b_13 = NULL,d_13 = NULL;
        ATerm c_13 = NULL;
        t = SSLgetAnnotations(not_null(t_12));
        {
          c_13 = t;
          if(((b_13 != NULL) && (b_13 != c_13)))
            _fail(c_13);
          else
            b_13 = c_13;
        }
        {
          t = not_null(u_12);
          {
            ATerm f_13 = NULL;
            t = j_56(t);
            {
              d_13 = t;
              {
                t = not_null(v_12);
                {
                  ATerm h_13 = NULL;
                  t = k_56(t);
                  {
                    f_13 = t;
                    {
                      t = not_null(w_12);
                      {
                        ATerm j_13 = NULL;
                        t = l_56(t);
                        {
                          h_13 = t;
                          {
                            ATerm k_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(d_13), not_null(f_13), not_null(h_13)), not_null(b_13));
                            {
                              k_13 = t;
                              if(((j_13 != NULL) && (j_13 != k_13)))
                                _fail(k_13);
                              else
                                j_13 = k_13;
                            }
                            t = not_null(j_13);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm w_13 = NULL,x_13 = NULL;
  w_13 = t;
  v_13 :
  if(match_cons(w_13, sym_DefaultVarDec_1))
    {
      x_13 = ATgetArgument(w_13, 0);
      {
        ATerm a_14 = NULL,c_14 = NULL;
        ATerm b_14 = NULL;
        t = SSLgetAnnotations(not_null(w_13));
        {
          b_14 = t;
          if(((a_14 != NULL) && (a_14 != b_14)))
            _fail(b_14);
          else
            a_14 = b_14;
        }
        {
          t = not_null(x_13);
          {
            ATerm e_14 = NULL;
            t = z_59(t);
            {
              c_14 = t;
              {
                ATerm f_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(c_14)), not_null(a_14));
                {
                  f_14 = t;
                  if(((e_14 != NULL) && (e_14 != f_14)))
                    _fail(f_14);
                  else
                    e_14 = f_14;
                }
                t = not_null(e_14);
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
ATerm DesugarOnce_0 (ATerm t)
{
  ATerm v_3 = t;
  int w_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
      LocalPopChoice(w_3);
    }
  else
    {
      t = v_3;
      {
        ATerm x_3 = t;
        int y_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
            LocalPopChoice(y_3);
          }
        else
          {
            t = x_3;
            {
              ATerm z_3 = t;
              int a_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
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
                        t = VarDec_2(t, RemoveLeadingPrime_0, _id);
                        LocalPopChoice(c_4);
                      }
                    else
                      {
                        t = b_4;
                        {
                          ATerm d_4 = t;
                          int e_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, RemoveLeadingPrime_0);
                              LocalPopChoice(e_4);
                            }
                          else
                            {
                              t = d_4;
                              {
                                ATerm f_4 = t;
                                int g_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SVar_1(t, RemoveLeadingPrime_0);
                                    LocalPopChoice(g_4);
                                  }
                                else
                                  {
                                    t = f_4;
                                    {
                                      ATerm i_4 = t;
                                      int j_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                          LocalPopChoice(j_4);
                                        }
                                      else
                                        {
                                          t = i_4;
                                          {
                                            ATerm k_4 = t;
                                            int t_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2(t, RemoveLeadingPrime_0, _id);
                                                LocalPopChoice(t_4);
                                              }
                                            else
                                              {
                                                t = k_4;
                                                {
                                                  ATerm r_14 = NULL,s_14 = NULL;
                                                  r_14 = t;
                                                  q_14 :
                                                  if(match_cons(r_14, sym_Str_1))
                                                    {
                                                      s_14 = ATgetArgument(r_14, 0);
                                                      {
                                                        ATerm u_14 = NULL;
                                                        ATerm v_14 = NULL;
                                                        t = not_null(s_14);
                                                        {
                                                          t = un_double_quote_0(t);
                                                          {
                                                            t = unescape_0(t);
                                                            {
                                                              v_14 = t;
                                                              if(((u_14 != NULL) && (u_14 != v_14)))
                                                                _fail(v_14);
                                                              else
                                                                u_14 = v_14;
                                                            }
                                                          }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_Str_1, not_null(u_14));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(r_14, sym_Real_1))
                                                        {
                                                          s_14 = ATgetArgument(r_14, 0);
                                                          {
                                                            ATerm x_14 = NULL;
                                                            ATerm y_14 = NULL;
                                                            t = not_null(s_14);
                                                            {
                                                              t = string_to_real_0(t);
                                                              {
                                                                y_14 = t;
                                                                if(((x_14 != NULL) && (x_14 != y_14)))
                                                                  _fail(y_14);
                                                                else
                                                                  x_14 = y_14;
                                                              }
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(x_14));
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(r_14, sym_Int_1))
                                                            {
                                                              s_14 = ATgetArgument(r_14, 0);
                                                              {
                                                                ATerm a_15 = NULL;
                                                                ATerm b_15 = NULL;
                                                                t = not_null(s_14);
                                                                {
                                                                  t = string_to_int_0(t);
                                                                  {
                                                                    b_15 = t;
                                                                    if(((a_15 != NULL) && (a_15 != b_15)))
                                                                      _fail(b_15);
                                                                    else
                                                                      a_15 = b_15;
                                                                  }
                                                                }
                                                                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(a_15));
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
ATerm try_1 (ATerm t, ATerm p_91 (ATerm))
{
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_91(t);
      LocalPopChoice(v_4);
    }
  else
    {
      t = u_4;
      {
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm t_83 (ATerm))
{
  ATerm i_15 (ATerm t)
  {
    ATerm w_4 = t;
    int x_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = t_83(t);
        LocalPopChoice(x_4);
      }
    else
      {
        t = w_4;
        t = Cons_2(t, _id, i_15);
      }
    return(t);
  }
  t = i_15(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
  l_15 = t;
  k_15 :
  if(((ATgetType(l_15) == AT_LIST) && ((ATermList) l_15 != ATempty)))
    {
      m_15 = ATgetFirst((ATermList) l_15);
      n_15 = (ATerm) ATgetNext((ATermList) l_15);
      t = not_null(n_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  s_15 :
  if(((ATgetType(u_15) == AT_LIST) && ((ATermList) u_15 != ATempty)))
    {
      v_15 = ATgetFirst((ATermList) u_15);
      w_15 = (ATerm) ATgetNext((ATermList) u_15);
      t_15 :
      if(((ATermList) w_15 == ATempty))
        {
          t = not_null(v_15);
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
  ATerm y_4 = t;
  int z_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(z_4);
    }
  else
    {
      t = y_4;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(((ATgetType(c_16) == AT_LIST) && ((ATermList) c_16 != ATempty)))
    {
      d_16 = ATgetFirst((ATermList) c_16);
      e_16 = (ATerm) ATgetNext((ATermList) c_16);
      t = not_null(d_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm j_16 = NULL;
  t = explode_string_0(t);
  {
    j_16 = t;
    {
      t = Hd_0(t);
      {
        t = g_75(t);
        {
          t = not_null(j_16);
          {
            t = last_0(t);
            {
              t = g_75(t);
              {
                t = not_null(j_16);
                {
                  t = Tl_0(t);
                  {
                    t = init_0(t);
                    t = implode_string_0(t);
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
ATerm un_double_quote_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm n_16 = NULL;
    n_16 = t;
    m_16 :
    if(!(match_int(n_16, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_1(t, c_0);
  return(t);
}
ATerm Desugar_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  ATerm q_21 (ATerm t)
  {
    t = not_null(p_18);
    {
      ATerm a_5 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_5;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_c_5, not_null(p_18));
    return(t);
  }
  ATerm r_21 (ATerm t)
  {
    t = not_null(l_18);
    return(t);
  }
  ATerm s_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(p_18)));
    return(t);
  }
  ATerm t_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(p_18)));
    return(t);
  }
  ATerm u_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_18)));
    return(t);
  }
  ATerm v_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_18)), (ATerm) ATempty);
    return(t);
  }
  ATerm w_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_18)), not_null(q_18));
    return(t);
  }
  ATerm x_21 (ATerm t)
  {
    t = not_null(p_18);
    {
      ATerm d_0 (ATerm t)
      {
        t = not_null(q_18);
        return(t);
      }
      ATerm g_0 (ATerm t)
      {
        ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
        v_19 = t;
        y_17 :
        if(match_cons(v_19, sym__2))
          {
            w_19 = ATgetArgument(v_19, 0);
            x_19 = ATgetArgument(v_19, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_e_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_19)), not_null(w_19)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, d_0, g_0);
    }
    return(t);
  }
  ATerm y_21 (ATerm t)
  {
    t = not_null(p_18);
    {
      ATerm h_0 (ATerm t)
      {
        t = term_q_5;
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
        b_20 = t;
        a_18 :
        if(match_cons(b_20, sym__2))
          {
            c_20 = ATgetArgument(b_20, 0);
            d_20 = ATgetArgument(b_20, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_e_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_20)), not_null(c_20)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, h_0, n_0);
    }
    return(t);
  }
  ATerm z_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_r_5, (ATerm) ATinsert(CheckATermList(not_null(q_18)), not_null(p_18)));
    return(t);
  }
  ATerm a_22 (ATerm t)
  {
    t = not_null(p_18);
    {
      ATerm s_5 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_5;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_r_5, not_null(p_18));
    return(t);
  }
  ATerm b_22 (ATerm t)
  {
    t = not_null(l_18);
    return(t);
  }
  ATerm c_22 (ATerm t)
  {
    t = term_t_5;
    return(t);
  }
  ATerm d_22 (ATerm t)
  {
    t = not_null(p_18);
    return(t);
  }
  ATerm e_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(p_18), not_null(q_18), term_u_5);
    return(t);
  }
  ATerm f_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_18), not_null(q_18), term_u_5);
    return(t);
  }
  ATerm g_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(p_18), (ATerm)ATempty, not_null(q_18));
    return(t);
  }
  ATerm h_22 (ATerm t)
  {
    ATerm t_20 = NULL;
    ATerm u_20 = NULL;
    t = not_null(p_18);
    {
      t = un_double_quote_0(t);
      {
        u_20 = t;
        if(((t_20 != NULL) && (t_20 != u_20)))
          _fail(u_20);
        else
          t_20 = u_20;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(t_20), not_null(q_18));
    return(t);
  }
  ATerm i_22 (ATerm t)
  {
    ATerm w_20 = NULL;
    ATerm x_20 = NULL;
    t = not_null(p_18);
    {
      t = un_double_quote_0(t);
      {
        x_20 = t;
        if(((w_20 != NULL) && (w_20 != x_20)))
          _fail(x_20);
        else
          w_20 = x_20;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(w_20), (ATerm) ATempty);
    return(t);
  }
  ATerm j_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(p_18), (ATerm) ATempty);
    return(t);
  }
  ATerm k_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_18), (ATerm)ATempty, not_null(q_18));
    return(t);
  }
  ATerm l_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(p_18), not_null(q_18), not_null(n_18));
    return(t);
  }
  ATerm m_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(p_18), (ATerm)ATempty, not_null(q_18));
    return(t);
  }
  ATerm n_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(p_18), (ATerm)ATempty, not_null(q_18));
    return(t);
  }
  ATerm o_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_18));
    return(t);
  }
  o_18 = t;
  d_18 :
  if(match_cons(o_18, sym_SortNoArgs_1))
    {
      p_18 = ATgetArgument(o_18, 0);
      t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(p_18), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(o_18, sym_Con_2))
        {
          p_18 = ATgetArgument(o_18, 0);
          q_18 = ATgetArgument(o_18, 1);
          e_18 :
          if(match_cons(q_18, sym_Con2_2))
            {
              k_18 = ATgetArgument(q_18, 0);
              j_18 = ATgetArgument(q_18, 1);
              t = (ATerm) ATmakeAppl(sym_Con_3, not_null(p_18), not_null(k_18), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_18)), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(q_18, sym_Con1_1))
                {
                  k_18 = ATgetArgument(q_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(p_18), not_null(k_18), term_b_6);
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(o_18, sym_ListTail_2))
            {
              p_18 = ATgetArgument(o_18, 0);
              q_18 = ATgetArgument(o_18, 1);
              {
                t = not_null(p_18);
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = not_null(q_18);
                    return(t);
                  }
                  ATerm p_0 (ATerm t)
                  {
                    ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
                    a_19 = t;
                    u_17 :
                    if(match_cons(a_19, sym__2))
                      {
                        b_19 = ATgetArgument(a_19, 0);
                        c_19 = ATgetArgument(a_19, 1);
                        t = (ATerm) ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_19)), not_null(b_19)));
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = foldr_2(t, o_0, p_0);
                }
              }
            }
          else
            {
              if(match_cons(o_18, sym_List_1))
                {
                  p_18 = ATgetArgument(o_18, 0);
                  {
                    t = not_null(p_18);
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = term_c_6;
                        return(t);
                      }
                      ATerm r_0 (ATerm t)
                      {
                        ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
                        g_19 = t;
                        w_17 :
                        if(match_cons(g_19, sym__2))
                          {
                            h_19 = ATgetArgument(g_19, 0);
                            i_19 = ATgetArgument(g_19, 1);
                            t = (ATerm) ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_19)), not_null(h_19)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = foldr_2(t, q_0, r_0);
                    }
                  }
                }
              else
                {
                  if(match_cons(o_18, sym_Tuple_1))
                    {
                      p_18 = ATgetArgument(o_18, 0);
                      f_18 :
                      if(((ATgetType(p_18) == AT_LIST) && ((ATermList) p_18 != ATempty)))
                        {
                          l_18 = ATgetFirst((ATermList) p_18);
                          m_18 = (ATerm) ATgetNext((ATermList) p_18);
                          g_18 :
                          if(((ATermList) m_18 == ATempty))
                            {
                              {
                                ATerm d_6 = t;
                                int h_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = q_21(t);
                                    LocalPopChoice(h_6);
                                  }
                                else
                                  {
                                    t = d_6;
                                    t = r_21(t);
                                  }
                              }
                            }
                          else
                            {
                              t = q_21(t);
                            }
                        }
                      else
                        {
                          t = q_21(t);
                        }
                    }
                  else
                    {
                      if(match_cons(o_18, sym_RealCong_1))
                        {
                          p_18 = ATgetArgument(o_18, 0);
                          t = s_21(t);
                        }
                      else
                        {
                          if(match_cons(o_18, sym_IntCong_1))
                            {
                              p_18 = ATgetArgument(o_18, 0);
                              t = t_21(t);
                            }
                          else
                            {
                              if(match_cons(o_18, sym_StrCong_1))
                                {
                                  p_18 = ATgetArgument(o_18, 0);
                                  t = u_21(t);
                                }
                              else
                                {
                                  if(match_cons(o_18, sym_ModCongNoArgs_1))
                                    {
                                      p_18 = ATgetArgument(o_18, 0);
                                      t = v_21(t);
                                    }
                                  else
                                    {
                                      if(match_cons(o_18, sym_ModCong_2))
                                        {
                                          p_18 = ATgetArgument(o_18, 0);
                                          q_18 = ATgetArgument(o_18, 1);
                                          t = w_21(t);
                                        }
                                      else
                                        {
                                          if(match_cons(o_18, sym_ListCong_2))
                                            {
                                              p_18 = ATgetArgument(o_18, 0);
                                              q_18 = ATgetArgument(o_18, 1);
                                              t = x_21(t);
                                            }
                                          else
                                            {
                                              if(match_cons(o_18, sym_ListCongNoTail_1))
                                                {
                                                  p_18 = ATgetArgument(o_18, 0);
                                                  t = y_21(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(o_18, sym_TupleCong_2))
                                                    {
                                                      p_18 = ATgetArgument(o_18, 0);
                                                      q_18 = ATgetArgument(o_18, 1);
                                                      t = z_21(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(o_18, sym_TupleCong_1))
                                                        {
                                                          p_18 = ATgetArgument(o_18, 0);
                                                          h_18 :
                                                          if(((ATgetType(p_18) == AT_LIST) && ((ATermList) p_18 != ATempty)))
                                                            {
                                                              l_18 = ATgetFirst((ATermList) p_18);
                                                              m_18 = (ATerm) ATgetNext((ATermList) p_18);
                                                              i_18 :
                                                              if(((ATermList) m_18 == ATempty))
                                                                {
                                                                  {
                                                                    ATerm j_6 = t;
                                                                    int m_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = a_22(t);
                                                                        LocalPopChoice(m_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_6;
                                                                        t = b_22(t);
                                                                      }
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  t = a_22(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = a_22(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(o_18, sym_TupleCong_0))
                                                            {
                                                              t = c_22(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(o_18, sym_ParenStrat_1))
                                                                {
                                                                  p_18 = ATgetArgument(o_18, 0);
                                                                  t = d_22(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(o_18, sym_StratRuleNoCond_2))
                                                                    {
                                                                      p_18 = ATgetArgument(o_18, 0);
                                                                      q_18 = ATgetArgument(o_18, 1);
                                                                      t = e_22(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(o_18, sym_RuleNoCond_2))
                                                                        {
                                                                          p_18 = ATgetArgument(o_18, 0);
                                                                          q_18 = ATgetArgument(o_18, 1);
                                                                          t = f_22(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(o_18, sym_OverlayNoArgs_2))
                                                                            {
                                                                              p_18 = ATgetArgument(o_18, 0);
                                                                              q_18 = ATgetArgument(o_18, 1);
                                                                              t = g_22(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(o_18, sym_Prim_2))
                                                                                {
                                                                                  p_18 = ATgetArgument(o_18, 0);
                                                                                  q_18 = ATgetArgument(o_18, 1);
                                                                                  t = h_22(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(o_18, sym_PrimNoArgs_1))
                                                                                    {
                                                                                      p_18 = ATgetArgument(o_18, 0);
                                                                                      t = i_22(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(o_18, sym_CallNoArgs_1))
                                                                                        {
                                                                                          p_18 = ATgetArgument(o_18, 0);
                                                                                          t = j_22(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(o_18, sym_SDefNoArgs_2))
                                                                                            {
                                                                                              p_18 = ATgetArgument(o_18, 0);
                                                                                              q_18 = ATgetArgument(o_18, 1);
                                                                                              t = k_22(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(o_18, sym_SRDef_3))
                                                                                                {
                                                                                                  p_18 = ATgetArgument(o_18, 0);
                                                                                                  q_18 = ATgetArgument(o_18, 1);
                                                                                                  n_18 = ATgetArgument(o_18, 2);
                                                                                                  t = l_22(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(o_18, sym_SRDefNoArgs_2))
                                                                                                    {
                                                                                                      p_18 = ATgetArgument(o_18, 0);
                                                                                                      q_18 = ATgetArgument(o_18, 1);
                                                                                                      t = m_22(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(o_18, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          p_18 = ATgetArgument(o_18, 0);
                                                                                                          q_18 = ATgetArgument(o_18, 1);
                                                                                                          t = n_22(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(o_18, sym_Module_2))
                                                                                                            {
                                                                                                              p_18 = ATgetArgument(o_18, 0);
                                                                                                              q_18 = ATgetArgument(o_18, 1);
                                                                                                              t = o_22(t);
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
ATerm repeat_2 (ATerm t, ATerm s_90 (ATerm), ATerm t_90 (ATerm))
{
  ATerm v_22 (ATerm t)
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_90(t);
        t = v_22(t);
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        t = t_90(t);
      }
    return(t);
  }
  t = v_22(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_90 (ATerm))
{
  t = repeat_2(t, v_90, _id);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm l_87 (ATerm))
{
  t = l_87(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = topdown_1(t, l_87);
      return(t);
    }
    t = _all(t, s_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm v_52 (ATerm), ATerm w_52 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym__2))
    {
      d_23 = ATgetArgument(c_23, 0);
      e_23 = ATgetArgument(c_23, 1);
      {
        ATerm i_23 = NULL,k_23 = NULL;
        ATerm j_23 = NULL;
        t = SSLgetAnnotations(not_null(c_23));
        {
          j_23 = t;
          if(((i_23 != NULL) && (i_23 != j_23)))
            _fail(j_23);
          else
            i_23 = j_23;
        }
        {
          t = not_null(d_23);
          {
            ATerm m_23 = NULL;
            t = v_52(t);
            {
              k_23 = t;
              {
                t = not_null(e_23);
                {
                  ATerm o_23 = NULL;
                  t = w_52(t);
                  {
                    m_23 = t;
                    {
                      ATerm p_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_23), not_null(m_23)), not_null(i_23));
                      {
                        p_23 = t;
                        if(((o_23 != NULL) && (o_23 != p_23)))
                          _fail(p_23);
                        else
                          o_23 = p_23;
                      }
                      t = not_null(o_23);
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
  ATerm x_23 = NULL;
  ATerm p_6;
  p_6 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm y_23 = NULL,z_23 = NULL;
      y_23 = t;
      w_23 :
      if(match_cons(y_23, sym_Program_1))
        {
          z_23 = ATgetArgument(y_23, 0);
          if(((x_23 != NULL) && (x_23 != z_23)))
            _fail(z_23);
          else
            x_23 = z_23;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, t_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_6), not_null(x_23)), term_r_6));
      {
        t = printnl_0(t);
        {
          t = term_t_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym__2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      {
        ATerm u_6;
        u_6 = t;
        t = SSL_printnl(not_null(e_24), not_null(f_24));
        t = u_6;
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
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym__2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      {
        t = not_null(m_24);
        {
          ATerm u_0 (ATerm t)
          {
            t = not_null(n_24);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm v_6;
  v_6 = t;
  {
    ATerm t_24 = NULL,v_24 = NULL;
    ATerm a_7;
    a_7 = t;
    {
      ATerm u_24 = NULL;
      t = i_73(t);
      {
        u_24 = t;
        if(((t_24 != NULL) && (t_24 != u_24)))
          _fail(u_24);
        else
          t_24 = u_24;
      }
    }
    t = a_7;
    {
      ATerm w_24 = NULL;
      w_24 = t;
      if(((v_24 != NULL) && (v_24 != w_24)))
        _fail(w_24);
      else
        v_24 = w_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_24)), not_null(t_24)));
        t = printnl_0(t);
      }
    }
  }
  t = v_6;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  t = SSL_is_string(not_null(a_25));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm g_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            LocalPopChoice(i_7);
          }
        else
          {
            t = g_7;
            {
              ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
              j_25 = t;
              i_25 :
              if(match_cons(j_25, sym_Path_1))
                {
                  k_25 = ATgetArgument(j_25, 0);
                  t = not_null(k_25);
                }
              else
                {
                  if(match_cons(j_25, sym_Var_1))
                    {
                      k_25 = ATgetArgument(j_25, 0);
                      {
                        t = not_null(k_25);
                        {
                          ATerm l_7 = t;
                          int m_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(m_7);
                            }
                          else
                            {
                              t = l_7;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_n_7;
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
                      if(match_cons(j_25, sym_Prefix_2))
                        {
                          k_25 = ATgetArgument(j_25, 0);
                          l_25 = ATgetArgument(j_25, 1);
                          {
                            ATerm q_25 = NULL,z_25 = NULL;
                            ATerm o_7;
                            o_7 = t;
                            {
                              ATerm y_25 = NULL;
                              t = not_null(k_25);
                              {
                                t = eval_config_0(t);
                                {
                                  y_25 = t;
                                  if(((q_25 != NULL) && (q_25 != y_25)))
                                    _fail(y_25);
                                  else
                                    q_25 = y_25;
                                }
                              }
                            }
                            t = o_7;
                            {
                              ATerm a_26 = NULL;
                              t = not_null(l_25);
                              {
                                t = eval_config_0(t);
                                {
                                  a_26 = t;
                                  if(((z_25 != NULL) && (z_25 != a_26)))
                                    _fail(a_26);
                                  else
                                    z_25 = a_26;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), not_null(z_25));
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
  ATerm i_26 = NULL;
  i_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_7, not_null(i_26));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_7;
            q_7 = t;
            {
              ATerm k_26 = NULL;
              ATerm o_26 = NULL;
              o_26 = t;
              if(((k_26 != NULL) && (k_26 != o_26)))
                _fail(o_26);
              else
                k_26 = o_26;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_7, not_null(i_26), not_null(k_26));
                t = table_put_0(t);
              }
            }
            t = q_7;
          }
          return(t);
        }
        t = try_1(t, x_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm r_7;
    r_7 = t;
    {
      ATerm s_26 = NULL;
      ATerm t_26 = NULL;
      t = term_s_7;
      {
        t = get_config_0(t);
        {
          t_26 = t;
          if(((s_26 != NULL) && (s_26 != t_26)))
            _fail(t_26);
          else
            s_26 = t_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), term_t_7);
        t = geq_0(t);
      }
    }
    t = r_7;
    t = s_70(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, term_x_7));
  {
    t = printnl_0(t);
    {
      t = term_t_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_26 = NULL;
  w_26 = t;
  t = SSL_TicksToSeconds(not_null(w_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym__2))
    {
      c_27 = ATgetArgument(b_27, 0);
      d_27 = ATgetArgument(b_27, 1);
      {
        ATerm y_7 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_27), not_null(d_27));
            LocalPopChoice(c_8);
          }
        else
          {
            t = y_7;
            t = SSL_addr(not_null(c_27), not_null(d_27));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_77 (ATerm), ATerm g_77 (ATerm))
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_77(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
        l_27 = t;
        k_27 :
        if(((ATgetType(l_27) == AT_LIST) && ((ATermList) l_27 != ATempty)))
          {
            m_27 = ATgetFirst((ATermList) l_27);
            n_27 = (ATerm) ATgetNext((ATermList) l_27);
            {
              ATerm q_27 = NULL;
              ATerm r_27 = NULL;
              t = not_null(n_27);
              {
                t = foldr_2(t, f_77, g_77);
                {
                  r_27 = t;
                  if(((q_27 != NULL) && (q_27 != r_27)))
                    _fail(r_27);
                  else
                    q_27 = r_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_27), not_null(q_27));
                t = g_77(t);
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
ATerm crush_2 (ATerm t, ATerm x_78 (ATerm), ATerm y_78 (ATerm))
{
  ATerm y_27 = NULL;
  ATerm a_28 = NULL;
  y_27 = t;
  {
    ATerm b_28 = NULL;
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
    t = not_null(y_27);
    {
      b_28 = t;
      {
        t = SSL_explode_term(not_null(b_28));
        {
          d_28 = t;
          x_27 :
          if(match_cons(d_28, sym__2))
            {
              e_28 = ATgetArgument(d_28, 0);
              f_28 = ATgetArgument(d_28, 1);
              if(((a_28 != NULL) && (a_28 != f_28)))
                _fail(f_28);
              else
                a_28 = f_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_28);
      t = foldr_2(t, x_78, y_78);
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
    ATerm z_0 (ATerm t)
    {
      t = term_h_8;
      return(t);
    }
    t = crush_2(t, z_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym__2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      {
        ATerm i_8;
        i_8 = t;
        {
          ATerm j_8 = t;
          int k_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_28), not_null(n_28));
              LocalPopChoice(k_8);
            }
          else
            {
              t = j_8;
              t = SSL_gtr(not_null(m_28), not_null(n_28));
            }
        }
        t = i_8;
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
  ATerm b_29 = NULL;
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
      c_29 = t;
      s_28 :
      if(match_cons(c_29, sym__2))
        {
          d_29 = ATgetArgument(c_29, 0);
          e_29 = ATgetArgument(c_29, 1);
          {
            if(((b_29 != NULL) && (b_29 != d_29)))
              _fail(d_29);
            else
              b_29 = d_29;
            if(((b_29 != NULL) && (b_29 != e_29)))
              _fail(e_29);
            else
              b_29 = e_29;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm n_8;
    n_8 = t;
    {
      ATerm h_29 = NULL;
      ATerm i_29 = NULL;
      t = term_s_7;
      {
        t = get_config_0(t);
        {
          i_29 = t;
          if(((h_29 != NULL) && (h_29 != i_29)))
            _fail(i_29);
          else
            h_29 = i_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), term_t_6);
        t = geq_0(t);
      }
    }
    t = n_8;
    t = r_70(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm o_29 = NULL,q_29 = NULL;
    ATerm o_8;
    o_8 = t;
    {
      ATerm p_29 = NULL;
      t = run_time_0(t);
      {
        p_29 = t;
        if(((o_29 != NULL) && (o_29 != p_29)))
          _fail(p_29);
        else
          o_29 = p_29;
      }
    }
    t = o_8;
    {
      ATerm r_29 = NULL;
      t = term_p_8;
      {
        t = get_config_0(t);
        {
          r_29 = t;
          if(((q_29 != NULL) && (q_29 != r_29)))
            _fail(r_29);
          else
            q_29 = r_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_8), not_null(o_29)), term_q_8), not_null(q_29)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_1);
  {
    t = term_h_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym__2))
    {
      z_29 = ATgetArgument(y_29, 0);
      a_30 = ATgetArgument(y_29, 1);
      t = SSL_WriteToTextFile(not_null(z_29), not_null(a_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym__2))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      t = SSL_WriteToBinaryFile(not_null(t_30), not_null(u_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_31 = NULL;
  ATerm s_8;
  s_8 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm e_31 = NULL,f_31 = NULL;
            e_31 = t;
            a_31 :
            if(match_cons(e_31, sym_Output_1))
              {
                f_31 = ATgetArgument(e_31, 0);
                if(((d_31 != NULL) && (d_31 != f_31)))
                  _fail(f_31);
                else
                  d_31 = f_31;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_1);
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          {
            ATerm g_31 = NULL;
            t = term_y_8;
            {
              g_31 = t;
              if(((d_31 != NULL) && (d_31 != g_31)))
                _fail(g_31);
              else
                d_31 = g_31;
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
        t = not_null(d_31);
        return(t);
      }
      t = split_2(t, f_1, _id);
      return(t);
    }
    t = _2(t, _id, e_1);
    {
      ATerm z_8 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              ATerm h_31 = NULL;
              h_31 = t;
              c_31 :
              if(!(match_cons(h_31, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_1);
            return(t);
          }
          t = _2(t, g_1, WriteToBinaryFile_0);
          LocalPopChoice(d_9);
        }
      else
        {
          t = z_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_72 (ATerm))
{
  ATerm n_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  ATerm g_9;
  g_9 = t;
  t = dtime_0(t);
  t = g_9;
  {
    t = s_72(t);
    {
      ATerm h_9;
      h_9 = t;
      {
        ATerm o_31 = NULL;
        t = dtime_0(t);
        {
          o_31 = t;
          if(((n_31 != NULL) && (n_31 != o_31)))
            _fail(o_31);
          else
            n_31 = o_31;
        }
      }
      t = h_9;
      {
        p_31 = t;
        m_31 :
        if(match_cons(p_31, sym__2))
          {
            q_31 = ATgetArgument(p_31, 0);
            r_31 = ATgetArgument(p_31, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_31)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_31))), not_null(r_31));
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
  ATerm x_31 = NULL;
  x_31 = t;
  t = SSL_ReadFromFile(not_null(x_31));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_75 (ATerm), ATerm u_75 (ATerm))
{
  ATerm c_32 = NULL,e_32 = NULL;
  ATerm l_9;
  l_9 = t;
  {
    ATerm d_32 = NULL;
    t = t_75(t);
    {
      d_32 = t;
      if(((c_32 != NULL) && (c_32 != d_32)))
        _fail(d_32);
      else
        c_32 = d_32;
    }
  }
  t = l_9;
  {
    ATerm f_32 = NULL;
    t = u_75(t);
    {
      f_32 = t;
      if(((e_32 != NULL) && (e_32 != f_32)))
        _fail(f_32);
      else
        e_32 = f_32;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_32), not_null(e_32));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_32 = NULL;
  ATerm o_9;
  o_9 = t;
  {
    ATerm p_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          ATerm m_32 = NULL,n_32 = NULL;
          m_32 = t;
          j_32 :
          if(match_cons(m_32, sym_Input_1))
            {
              n_32 = ATgetArgument(m_32, 0);
              if(((l_32 != NULL) && (l_32 != n_32)))
                _fail(n_32);
              else
                l_32 = n_32;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_1);
        LocalPopChoice(t_9);
      }
    else
      {
        t = p_9;
        {
          ATerm o_32 = NULL;
          t = term_w_9;
          {
            o_32 = t;
            if(((l_32 != NULL) && (l_32 != o_32)))
              _fail(o_32);
            else
              l_32 = o_32;
          }
        }
      }
  }
  t = o_9;
  {
    ATerm j_1 (ATerm t)
    {
      t = not_null(l_32);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  u_32 :
  if(match_cons(v_32, sym_Version_0))
    {
      ATerm x_32 = NULL,z_32 = NULL;
      ATerm x_9;
      x_9 = t;
      {
        ATerm y_32 = NULL;
        t = SSLgetAnnotations(not_null(v_32));
        {
          y_32 = t;
          if(((x_32 != NULL) && (x_32 != y_32)))
            _fail(y_32);
          else
            x_32 = y_32;
        }
      }
      t = x_9;
      {
        ATerm a_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_32));
        {
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
        }
        t = not_null(z_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        {
          ATerm a_10 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_10);
            }
          else
            {
              t = a_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_1);
  t = q_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  t = SSL_table_create(not_null(m_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  {
    ATerm c_10;
    c_10 = t;
    {
      t = term_d_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_e_10, not_null(q_33));
          t = table_put_0(t);
        }
      }
    }
    t = c_10;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  t = SSL_string_to_int(not_null(v_33));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
  d_34 = t;
  b_34 :
  if(match_string(d_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_34) == AT_LIST) && ((ATermList) d_34 != ATempty)))
        {
          e_34 = ATgetFirst((ATermList) d_34);
          f_34 = (ATerm) ATgetNext((ATermList) d_34);
          c_34 :
          if(((ATgetType(f_34) == AT_LIST) && ((ATermList) f_34 != ATempty)))
            {
              g_34 = ATgetFirst((ATermList) f_34);
              h_34 = (ATerm) ATgetNext((ATermList) f_34);
              {
                ATerm n_34 = NULL;
                ATerm f_10;
                f_10 = t;
                {
                  t = not_null(e_34);
                  t = j_0(t);
                }
                t = f_10;
                {
                  ATerm o_34 = NULL;
                  t = not_null(g_34);
                  {
                    t = k_0(t);
                    {
                      o_34 = t;
                      if(((n_34 != NULL) && (n_34 != o_34)))
                        _fail(o_34);
                      else
                        n_34 = o_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_34)), not_null(n_34));
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
ATerm io_options_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm h_35 = NULL;
        h_35 = t;
        s_34 :
        if(!(match_string(h_35, "-i")))
          {
            if(!(match_string(h_35, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        ATerm k_35 = NULL;
        ATerm i_10;
        i_10 = t;
        {
          ATerm i_35 = NULL;
          ATerm j_35 = NULL;
          j_35 = t;
          if(((i_35 != NULL) && (i_35 != j_35)))
            _fail(j_35);
          else
            i_35 = j_35;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(i_35));
            t = set_config_0(t);
          }
        }
        t = i_10;
        {
          ATerm n_35 = NULL;
          n_35 = t;
          if(((k_35 != NULL) && (k_35 != n_35)))
            _fail(n_35);
          else
            k_35 = n_35;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_35));
        }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_k_10;
        return(t);
      }
      t = ArgOption_3(t, l_1, m_1, n_1);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm o_35 = NULL;
              o_35 = t;
              v_34 :
              if(!(match_string(o_35, "-o")))
                {
                  if(!(match_string(o_35, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              ATerm s_35 = NULL;
              ATerm r_10;
              r_10 = t;
              {
                ATerm p_35 = NULL;
                ATerm q_35 = NULL;
                q_35 = t;
                if(((p_35 != NULL) && (p_35 != q_35)))
                  _fail(q_35);
                else
                  p_35 = q_35;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_10, not_null(p_35));
                  t = set_config_0(t);
                }
              }
              t = r_10;
              {
                ATerm t_35 = NULL;
                t_35 = t;
                if(((s_35 != NULL) && (s_35 != t_35)))
                  _fail(t_35);
                else
                  s_35 = t_35;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_35));
              }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              t = term_t_10;
              return(t);
            }
            t = ArgOption_3(t, o_1, p_1, q_1);
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            {
              ATerm x_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    ATerm v_35 = NULL;
                    v_35 = t;
                    y_34 :
                    if(!(match_string(v_35, "-S")))
                      {
                        if(!(match_string(v_35, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm s_1 (ATerm t)
                  {
                    t = term_c_11;
                    t = set_config_0(t);
                    t = term_d_11;
                    return(t);
                  }
                  ATerm t_1 (ATerm t)
                  {
                    t = term_e_11;
                    return(t);
                  }
                  t = Option_3(t, r_1, s_1, t_1);
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = x_10;
                  {
                    ATerm f_11 = t;
                    int g_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_1 (ATerm t)
                        {
                          ATerm w_35 = NULL;
                          w_35 = t;
                          z_34 :
                          if(!(match_string(w_35, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm v_1 (ATerm t)
                        {
                          ATerm z_35 = NULL;
                          ATerm h_11;
                          h_11 = t;
                          {
                            ATerm x_35 = NULL;
                            ATerm y_35 = NULL;
                            t = string_to_int_0(t);
                            {
                              y_35 = t;
                              if(((x_35 != NULL) && (x_35 != y_35)))
                                _fail(y_35);
                              else
                                x_35 = y_35;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_s_7, not_null(x_35));
                              t = set_config_0(t);
                            }
                          }
                          t = h_11;
                          {
                            ATerm a_36 = NULL;
                            a_36 = t;
                            if(((z_35 != NULL) && (z_35 != a_36)))
                              _fail(a_36);
                            else
                              z_35 = a_36;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_35));
                          }
                          return(t);
                        }
                        ATerm w_1 (ATerm t)
                        {
                          t = term_i_11;
                          return(t);
                        }
                        t = ArgOption_3(t, u_1, v_1, w_1);
                        LocalPopChoice(g_11);
                      }
                    else
                      {
                        t = f_11;
                        {
                          ATerm j_11 = t;
                          int k_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_1 (ATerm t)
                              {
                                ATerm b_36 = NULL;
                                b_36 = t;
                                c_35 :
                                if(!(match_string(b_36, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm y_1 (ATerm t)
                              {
                                ATerm l_11;
                                l_11 = t;
                                {
                                  ATerm c_36 = NULL;
                                  ATerm d_36 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    d_36 = t;
                                    if(((c_36 != NULL) && (c_36 != d_36)))
                                      _fail(d_36);
                                    else
                                      c_36 = d_36;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_m_11, not_null(c_36));
                                    t = set_config_0(t);
                                  }
                                }
                                t = l_11;
                                return(t);
                              }
                              ATerm z_1 (ATerm t)
                              {
                                t = term_s_11;
                                return(t);
                              }
                              t = ArgOption_3(t, x_1, y_1, z_1);
                              LocalPopChoice(k_11);
                            }
                          else
                            {
                              t = j_11;
                              {
                                ATerm t_11 = t;
                                int u_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_2 (ATerm t)
                                    {
                                      ATerm e_36 = NULL;
                                      e_36 = t;
                                      e_35 :
                                      if(!(match_string(e_36, "-v")))
                                        {
                                          if(!(match_string(e_36, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm b_2 (ATerm t)
                                    {
                                      t = term_b_12;
                                      t = set_config_0(t);
                                      t = term_d_12;
                                      return(t);
                                    }
                                    ATerm c_2 (ATerm t)
                                    {
                                      t = term_g_12;
                                      return(t);
                                    }
                                    t = Option_3(t, a_2, b_2, c_2);
                                    LocalPopChoice(u_11);
                                  }
                                else
                                  {
                                    t = t_11;
                                    {
                                      ATerm h_12 = t;
                                      int i_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_2 (ATerm t)
                                          {
                                            ATerm f_36 = NULL;
                                            f_36 = t;
                                            f_35 :
                                            if(!(match_string(f_36, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm e_2 (ATerm t)
                                          {
                                            t = term_k_12;
                                            t = set_config_0(t);
                                            t = term_l_12;
                                            return(t);
                                          }
                                          ATerm f_2 (ATerm t)
                                          {
                                            t = term_m_12;
                                            return(t);
                                          }
                                          t = Option_3(t, d_2, e_2, f_2);
                                          LocalPopChoice(i_12);
                                        }
                                      else
                                        {
                                          t = h_12;
                                          {
                                            ATerm g_2 (ATerm t)
                                            {
                                              ATerm g_36 = NULL;
                                              g_36 = t;
                                              g_35 :
                                              if(!(match_string(g_36, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm h_2 (ATerm t)
                                            {
                                              t = term_o_12;
                                              t = set_config_0(t);
                                              t = term_p_12;
                                              return(t);
                                            }
                                            ATerm i_2 (ATerm t)
                                            {
                                              t = term_q_12;
                                              return(t);
                                            }
                                            t = Option_3(t, g_2, h_2, i_2);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  t = SSL_table_destroy(not_null(p_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = SSL_exit(not_null(t_36));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  t = SSL_implode_string(not_null(x_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_83 (ATerm))
{
  ATerm a_37 (ATerm t)
  {
    ATerm r_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_37);
        LocalPopChoice(x_12);
      }
    else
      {
        t = r_12;
        {
          t = Nil_0(t);
          t = k_83(t);
        }
      }
    return(t);
  }
  t = a_37(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm d_37 = NULL,e_37 = NULL,i_37 = NULL;
        d_37 = t;
        c_37 :
        if(((ATgetType(d_37) == AT_LIST) && ((ATermList) d_37 != ATempty)))
          {
            e_37 = ATgetFirst((ATermList) d_37);
            i_37 = (ATerm) ATgetNext((ATermList) d_37);
            {
              t = not_null(e_37);
              {
                ATerm j_2 (ATerm t)
                {
                  t = not_null(i_37);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_2);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  t = SSL_explode_string(not_null(o_37));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_69 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_82 (ATerm))
{
  ATerm v_37 (ATerm t)
  {
    ATerm a_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = a_13;
        t = Cons_2(t, v_82, v_37);
      }
    return(t);
  }
  t = v_37(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
  e_38 = t;
  b_38 :
  if(((ATgetType(e_38) == AT_LIST) && ((ATermList) e_38 != ATempty)))
    {
      c_38 = ATgetFirst((ATermList) e_38);
      d_38 = (ATerm) ATgetNext((ATermList) e_38);
      {
        ATerm h_38 = NULL;
        t = not_null(d_38);
        {
          ATerm g_13;
          g_13 = t;
          {
            ATerm i_38 = NULL,k_38 = NULL,m_38 = NULL;
            ATerm i_13;
            i_13 = t;
            {
              ATerm j_38 = NULL;
              t = i_0(t);
              {
                j_38 = t;
                if(((i_38 != NULL) && (i_38 != j_38)))
                  _fail(j_38);
                else
                  i_38 = j_38;
              }
            }
            t = i_13;
            {
              ATerm l_38 = NULL;
              t = not_null(c_38);
              {
                t = f_0(t);
                {
                  l_38 = t;
                  if(((k_38 != NULL) && (k_38 != l_38)))
                    _fail(l_38);
                  else
                    k_38 = l_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_38)), not_null(k_38));
                {
                  m_38 = t;
                  if(((h_38 != NULL) && (h_38 != m_38)))
                    _fail(m_38);
                  else
                    h_38 = m_38;
                }
              }
            }
          }
          t = g_13;
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(h_38);
              return(t);
            }
            t = reverse_acc_2(t, f_0, k_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) e_38 == ATempty))
        {
          {
            t = term_z_11;
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
ATerm short_description_1 (ATerm t, ATerm k_69 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_60 (ATerm))
{
  ATerm y_38 = NULL,z_38 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym_Program_1))
    {
      z_38 = ATgetArgument(y_38, 0);
      {
        ATerm c_39 = NULL,e_39 = NULL;
        ATerm d_39 = NULL;
        t = SSLgetAnnotations(not_null(y_38));
        {
          d_39 = t;
          if(((c_39 != NULL) && (c_39 != d_39)))
            _fail(d_39);
          else
            c_39 = d_39;
        }
        {
          t = not_null(z_38);
          {
            ATerm g_39 = NULL;
            t = m_60(t);
            {
              e_39 = t;
              {
                ATerm h_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_39)), not_null(c_39));
                {
                  h_39 = t;
                  if(((g_39 != NULL) && (g_39 != h_39)))
                    _fail(h_39);
                  else
                    g_39 = h_39;
                }
                t = not_null(g_39);
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
  ATerm q_39 = NULL;
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm r_39 = NULL;
      r_39 = t;
      if(((q_39 != NULL) && (q_39 != r_39)))
        _fail(r_39);
      else
        q_39 = r_39;
      return(t);
    }
    t = Program_1(t, n_2);
    return(t);
  }
  t = option_defined_1(t, m_2);
  {
    ATerm o_2 (ATerm t)
    {
      ATerm s_39 = NULL;
      ATerm t_39 = NULL;
      t = term_z_11;
      {
        ATerm p_2 (ATerm t)
        {
          t = not_null(q_39);
          return(t);
        }
        t = short_description_1(t, p_2);
        {
          t = concat_strings_0(t);
          {
            t_39 = t;
            if(((s_39 != NULL) && (s_39 != t_39)))
              _fail(t_39);
            else
              s_39 = t_39;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, not_null(s_39)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, o_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, term_l_13));
      {
        t = printnl_0(t);
        {
          t = term_o_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_2 (ATerm t)
                {
                  ATerm u_39 = NULL;
                  u_39 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_39)), term_p_13));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_2);
                {
                  ATerm r_2 (ATerm t)
                  {
                    ATerm w_39 = NULL;
                    ATerm x_39 = NULL;
                    t = term_z_11;
                    {
                      ATerm s_2 (ATerm t)
                      {
                        t = not_null(q_39);
                        return(t);
                      }
                      t = long_description_1(t, s_2);
                      {
                        t = concat_strings_0(t);
                        {
                          x_39 = t;
                          if(((w_39 != NULL) && (w_39 != x_39)))
                            _fail(x_39);
                          else
                            w_39 = x_39;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_39)), term_q_13));
                      t = printnl_0(t);
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
ATerm Undefined_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_Undefined_1))
    {
      i_40 = ATgetArgument(h_40, 0);
      {
        ATerm l_40 = NULL,n_40 = NULL;
        ATerm m_40 = NULL;
        t = SSLgetAnnotations(not_null(h_40));
        {
          m_40 = t;
          if(((l_40 != NULL) && (l_40 != m_40)))
            _fail(m_40);
          else
            l_40 = m_40;
        }
        {
          t = not_null(i_40);
          {
            ATerm p_40 = NULL;
            t = n_60(t);
            {
              n_40 = t;
              {
                ATerm q_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_40)), not_null(l_40));
                {
                  q_40 = t;
                  if(((p_40 != NULL) && (p_40 != q_40)))
                    _fail(q_40);
                  else
                    p_40 = q_40;
                }
                t = not_null(p_40);
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
ATerm fetch_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm v_40 (ATerm t)
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_83, _id);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = Cons_2(t, _id, v_40);
      }
    return(t);
  }
  t = v_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_70 (ATerm))
{
  t = fetch_1(t, p_70);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym_Help_0))
    {
      ATerm c_41 = NULL,e_41 = NULL;
      ATerm t_13;
      t_13 = t;
      {
        ATerm d_41 = NULL;
        t = SSLgetAnnotations(not_null(a_41));
        {
          d_41 = t;
          if(((c_41 != NULL) && (c_41 != d_41)))
            _fail(d_41);
          else
            c_41 = d_41;
        }
      }
      t = t_13;
      {
        ATerm f_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_41));
        {
          f_41 = t;
          if(((e_41 != NULL) && (e_41 != f_41)))
            _fail(f_41);
          else
            e_41 = f_41;
        }
        t = not_null(e_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  k_41 :
  if(match_cons(l_41, sym__2))
    {
      m_41 = ATgetArgument(l_41, 0);
      n_41 = ATgetArgument(l_41, 1);
      t = SSL_table_get(not_null(m_41), not_null(n_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  u_41 = t;
  t_41 :
  if(match_cons(u_41, sym__3))
    {
      v_41 = ATgetArgument(u_41, 0);
      w_41 = ATgetArgument(u_41, 1);
      x_41 = ATgetArgument(u_41, 2);
      {
        ATerm u_13;
        u_13 = t;
        {
          ATerm d_42 = NULL;
          ATerm e_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_41), not_null(w_41));
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
                t = (ATerm) ATempty;
              }
            {
              e_42 = t;
              if(((d_42 != NULL) && (d_42 != e_42)))
                _fail(e_42);
              else
                d_42 = e_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_41), not_null(w_41), (ATerm) ATinsert(CheckATermList(not_null(d_42)), not_null(x_41)));
            t = table_put_0(t);
          }
        }
        t = u_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm i_42 = NULL;
  ATerm j_42 = NULL;
  t = term_z_11;
  {
    t = p_69(t);
    {
      j_42 = t;
      if(((i_42 != NULL) && (i_42 != j_42)))
        _fail(j_42);
      else
        i_42 = j_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_13, term_n_13, not_null(i_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  o_42 :
  if(match_string(p_42, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(p_42) == AT_LIST) && ((ATermList) p_42 != ATempty)))
        {
          q_42 = ATgetFirst((ATermList) p_42);
          r_42 = (ATerm) ATgetNext((ATermList) p_42);
          {
            ATerm u_42 = NULL;
            ATerm d_14;
            d_14 = t;
            {
              t = not_null(q_42);
              t = a_0(t);
            }
            t = d_14;
            {
              ATerm v_42 = NULL;
              t = term_z_11;
              {
                t = b_0(t);
                {
                  v_42 = t;
                  if(((u_42 != NULL) && (u_42 != v_42)))
                    _fail(v_42);
                  else
                    u_42 = v_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_42)), not_null(u_42));
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
    ATerm a_43 = NULL;
    a_43 = t;
    z_42 :
    if(!(match_string(a_43, "--help")))
      {
        if(!(match_string(a_43, "-h")))
          {
            if(!(match_string(a_43, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_g_14;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_h_14;
    return(t);
  }
  t = Option_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  c_43 :
  if(((ATgetType(d_43) == AT_LIST) && ((ATermList) d_43 != ATempty)))
    {
      e_43 = ATgetFirst((ATermList) d_43);
      f_43 = (ATerm) ATgetNext((ATermList) d_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_65 (ATerm), ATerm l_65 (ATerm))
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
  p_43 = t;
  o_43 :
  if(((ATgetType(p_43) == AT_LIST) && ((ATermList) p_43 != ATempty)))
    {
      q_43 = ATgetFirst((ATermList) p_43);
      r_43 = (ATerm) ATgetNext((ATermList) p_43);
      {
        ATerm w_43 = NULL,y_43 = NULL;
        ATerm x_43 = NULL;
        t = SSLgetAnnotations(not_null(p_43));
        {
          x_43 = t;
          if(((w_43 != NULL) && (w_43 != x_43)))
            _fail(x_43);
          else
            w_43 = x_43;
        }
        {
          t = not_null(q_43);
          {
            ATerm a_44 = NULL;
            t = k_65(t);
            {
              y_43 = t;
              {
                t = not_null(r_43);
                {
                  ATerm c_44 = NULL;
                  t = l_65(t);
                  {
                    a_44 = t;
                    {
                      ATerm d_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_44)), not_null(y_43)), not_null(w_43));
                      {
                        d_44 = t;
                        if(((c_44 != NULL) && (c_44 != d_44)))
                          _fail(d_44);
                        else
                          c_44 = d_44;
                      }
                      t = not_null(c_44);
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
  ATerm n_44 = NULL;
  n_44 = t;
  m_44 :
  if(((ATermList) n_44 == ATempty))
    {
      {
        ATerm p_44 = NULL,r_44 = NULL;
        ATerm i_14;
        i_14 = t;
        {
          ATerm q_44 = NULL;
          t = SSLgetAnnotations(not_null(n_44));
          {
            q_44 = t;
            if(((p_44 != NULL) && (p_44 != q_44)))
              _fail(q_44);
            else
              p_44 = q_44;
          }
        }
        t = i_14;
        {
          ATerm s_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_44));
          {
            s_44 = t;
            if(((r_44 != NULL) && (r_44 != s_44)))
              _fail(s_44);
            else
              r_44 = s_44;
          }
          t = not_null(r_44);
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
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  x_44 :
  if(match_cons(y_44, sym__2))
    {
      z_44 = ATgetArgument(y_44, 0);
      a_45 = ATgetArgument(y_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_7, not_null(z_44), not_null(a_45));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm j_14;
  j_14 = t;
  {
    ATerm w_2 (ATerm t)
    {
      t = term_k_14;
      t = n_69(t);
      return(t);
    }
    t = try_1(t, w_2);
  }
  t = j_14;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm i_45 = NULL;
      ATerm l_14;
      l_14 = t;
      {
        ATerm g_45 = NULL;
        ATerm h_45 = NULL;
        h_45 = t;
        if(((g_45 != NULL) && (g_45 != h_45)))
          _fail(h_45);
        else
          g_45 = h_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(g_45));
          t = set_config_0(t);
        }
      }
      t = l_14;
      {
        ATerm j_45 = NULL;
        j_45 = t;
        if(((i_45 != NULL) && (i_45 != j_45)))
          _fail(j_45);
        else
          i_45 = j_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_45));
      }
      return(t);
    }
    ATerm y_2 (ATerm t)
    {
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              {
                t = n_69(t);
                t = Cons_2(t, _id, y_2);
              }
            }
          LocalPopChoice(n_14);
        }
      else
        {
          t = m_14;
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
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  ATerm t_14;
  t_14 = t;
  {
    ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
    s_45 = t;
    o_45 :
    if(match_cons(s_45, sym__3))
      {
        t_45 = ATgetArgument(s_45, 0);
        u_45 = ATgetArgument(s_45, 1);
        v_45 = ATgetArgument(s_45, 2);
        {
          if(((p_45 != NULL) && (p_45 != t_45)))
            _fail(t_45);
          else
            p_45 = t_45;
          {
            if(((q_45 != NULL) && (q_45 != u_45)))
              _fail(u_45);
            else
              q_45 = u_45;
            {
              if(((r_45 != NULL) && (r_45 != v_45)))
                _fail(v_45);
              else
                r_45 = v_45;
              t = SSL_table_put(not_null(p_45), not_null(q_45), not_null(r_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm y_45 = NULL;
  ATerm w_14;
  w_14 = t;
  {
    t = term_z_14;
    t = table_put_0(t);
  }
  t = w_14;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_69(t);
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_2);
    {
      ATerm a_3 (ATerm t)
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_h_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            {
              ATerm b_3 (ATerm t)
              {
                ATerm c_3 (ATerm t)
                {
                  ATerm z_45 = NULL;
                  z_45 = t;
                  if(((y_45 != NULL) && (y_45 != z_45)))
                    _fail(z_45);
                  else
                    y_45 = z_45;
                  return(t);
                }
                t = Undefined_1(t, c_3);
                return(t);
              }
              t = option_defined_1(t, b_3);
              {
                ATerm g_15;
                g_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_45)), term_h_15));
                  t = printnl_0(t);
                }
                t = g_15;
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, a_3);
      {
        ATerm j_15;
        j_15 = t;
        {
          t = term_m_13;
          t = table_destroy_0(t);
        }
        t = j_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm h_72 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_72(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, e_3);
  {
    t = store_options_0(t);
    {
      t = h_72(t);
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_72);
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, e_72);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = x_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm a_72 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      ATerm z_15;
      z_15 = t;
      {
        ATerm c_46 = NULL;
        ATerm d_46 = NULL;
        t = term_p_8;
        {
          t = get_config_0(t);
          {
            d_46 = t;
            if(((c_46 != NULL) && (c_46 != d_46)))
              _fail(d_46);
            else
              c_46 = d_46;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, not_null(c_46)));
          t = printnl_0(t);
        }
      }
      t = z_15;
      return(t);
    }
    t = if_verbose2_1(t, g_3);
    return(t);
  }
  t = iowrap_4(t, y_71, z_71, a_72, f_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_71 (ATerm), ATerm x_71 (ATerm))
{
  t = iowrap_3(t, w_71, x_71, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    t = _2(t, _id, t_71);
    return(t);
  }
  t = iowrap_2(t, h_3, _fail);
  return(t);
}
ATerm stratego_desugar_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm j_3 (ATerm t)
    {
      ATerm l_46 = NULL;
      ATerm n_46 = NULL;
      l_46 = t;
      {
        ATerm o_46 = NULL;
        ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
        t = not_null(l_46);
        {
          o_46 = t;
          {
            t = SSL_explode_term(not_null(o_46));
            {
              q_46 = t;
              i_46 :
              if(match_cons(q_46, sym__2))
                {
                  r_46 = ATgetArgument(q_46, 0);
                  s_46 = ATgetArgument(q_46, 1);
                  j_46 :
                  if(((ATgetType(s_46) == AT_LIST) && ((ATermList) s_46 != ATempty)))
                    {
                      t_46 = ATgetFirst((ATermList) s_46);
                      u_46 = (ATerm) ATgetNext((ATermList) s_46);
                      k_46 :
                      if(((ATermList) u_46 == ATempty))
                        {
                          if(((n_46 != NULL) && (n_46 != t_46)))
                            _fail(t_46);
                          else
                            n_46 = t_46;
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
        t = not_null(n_46);
      }
      return(t);
    }
    t = try_1(t, j_3);
    {
      ATerm k_3 (ATerm t)
      {
        t = repeat_1(t, Desugar_0);
        t = try_1(t, DesugarOnce_0);
        return(t);
      }
      t = topdown_1(t, k_3);
    }
    return(t);
  }
  t = iowrap_1(t, i_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_desugar_0(t);
  return(t);
}
