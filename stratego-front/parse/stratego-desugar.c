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
Symbol sym_Char_1;
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
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
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
ATerm term_r_15;
ATerm term_g_15;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_l_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_x_7;
ATerm term_s_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_v_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_b_6;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_i_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_a_5;
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
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_5);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Call_2, term_s_5, (ATerm) ATempty);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_Call_2, term_u_5, (ATerm) ATempty);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_6);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Call_2, term_j_6, (ATerm) ATempty);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Op_2, term_r_5, (ATerm) ATempty);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_m_8);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_8);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_i_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_i_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__3, term_r_13, term_s_13, (ATerm) ATempty);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm c_56 (ATerm), ATerm d_56 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm n_55 (ATerm), ATerm o_55 (ATerm));
ATerm SVar_1 (ATerm, ATerm t_57 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm s_60 (ATerm), ATerm t_60 (ATerm));
ATerm SDef_3 (ATerm, ATerm o_60 (ATerm), ATerm p_60 (ATerm), ATerm q_60 (ATerm));
ATerm RDef_3 (ATerm, ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm d_57 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm r_60 (ATerm));
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_92 (ATerm));
ATerm at_last_1 (ATerm, ATerm l_84 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_1 (ATerm, ATerm y_75 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm k_91 (ATerm), ATerm l_91 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_91 (ATerm));
ATerm topdown_1 (ATerm, ATerm d_88 (ATerm));
ATerm _2 (ATerm, ATerm m_53 (ATerm), ATerm n_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm a_74 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm k_71 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm crush_2 (ATerm, ATerm p_79 (ATerm), ATerm q_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_71 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm k_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_76 (ATerm), ATerm m_76 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_73 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_84 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_70 (ATerm));
ATerm map_1 (ATerm, ATerm n_83 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_70 (ATerm));
ATerm Program_1 (ATerm, ATerm e_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_83 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_71 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_70 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_70 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm s_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_72 (ATerm), ATerm p_72 (ATerm));
ATerm iowrap_1 (ATerm, ATerm l_72 (ATerm));
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
ATerm Op_2 (ATerm t, ATerm c_56 (ATerm), ATerm d_56 (ATerm))
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
            t = c_56(t);
            {
              g_6 = t;
              {
                t = not_null(a_6);
                {
                  ATerm k_6 = NULL;
                  t = d_56(t);
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
ATerm OpDecl_2 (ATerm t, ATerm n_55 (ATerm), ATerm o_55 (ATerm))
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
            t = n_55(t);
            {
              f_7 = t;
              {
                t = not_null(z_6);
                {
                  ATerm j_7 = NULL;
                  t = o_55(t);
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
ATerm SVar_1 (ATerm t, ATerm t_57 (ATerm))
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
            t = t_57(t);
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
ATerm VarDec_2 (ATerm t, ATerm s_60 (ATerm), ATerm t_60 (ATerm))
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
            t = s_60(t);
            {
              w_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm a_11 = NULL;
                  t = t_60(t);
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
ATerm SDef_3 (ATerm t, ATerm o_60 (ATerm), ATerm p_60 (ATerm), ATerm q_60 (ATerm))
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
            t = o_60(t);
            {
              y_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm c_12 = NULL;
                  t = p_60(t);
                  {
                    a_12 = t;
                    {
                      t = not_null(r_11);
                      {
                        ATerm e_12 = NULL;
                        t = q_60(t);
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
ATerm RDef_3 (ATerm t, ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm d_57 (ATerm))
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
            t = b_57(t);
            {
              d_13 = t;
              {
                t = not_null(v_12);
                {
                  ATerm h_13 = NULL;
                  t = c_57(t);
                  {
                    f_13 = t;
                    {
                      t = not_null(w_12);
                      {
                        ATerm j_13 = NULL;
                        t = d_57(t);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm r_60 (ATerm))
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
            t = r_60(t);
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
ATerm try_1 (ATerm t, ATerm h_92 (ATerm))
{
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_92(t);
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
ATerm at_last_1 (ATerm t, ATerm l_84 (ATerm))
{
  ATerm i_15 (ATerm t)
  {
    ATerm w_4 = t;
    int x_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = l_84(t);
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
ATerm unquote_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm j_16 = NULL;
  t = explode_string_0(t);
  {
    j_16 = t;
    {
      t = Hd_0(t);
      {
        t = y_75(t);
        {
          t = not_null(j_16);
          {
            t = last_0(t);
            {
              t = y_75(t);
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
ATerm DesugarCharGeneric_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  v_16 = t;
  p_16 :
  if(((ATgetType(v_16) == AT_LIST) && ((ATermList) v_16 != ATempty)))
    {
      w_16 = ATgetFirst((ATermList) v_16);
      x_16 = (ATerm) ATgetNext((ATermList) v_16);
      q_16 :
      if(match_int(w_16, 39))
        {
          r_16 :
          if(((ATgetType(x_16) == AT_LIST) && ((ATermList) x_16 != ATempty)))
            {
              y_16 = ATgetFirst((ATermList) x_16);
              z_16 = (ATerm) ATgetNext((ATermList) x_16);
              s_16 :
              if(((ATgetType(z_16) == AT_LIST) && ((ATermList) z_16 != ATempty)))
                {
                  a_17 = ATgetFirst((ATermList) z_16);
                  b_17 = (ATerm) ATgetNext((ATermList) z_16);
                  t_16 :
                  if(match_int(a_17, 39))
                    {
                      u_16 :
                      if(((ATermList) b_17 == ATempty))
                        {
                          t = not_null(y_16);
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
ATerm DesugarChar_0 (ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_string(k_17, "'\\ '"))
    {
      t = term_a_5;
    }
  else
    {
      if(match_string(k_17, "'\\r'"))
        {
          t = term_c_5;
        }
      else
        {
          if(match_string(k_17, "'\\t'"))
            {
              t = term_l_3;
            }
          else
            {
              if(match_string(k_17, "'\\n'"))
                {
                  t = term_m_3;
                }
              else
                {
                  if(match_string(k_17, "'\\''"))
                    {
                      t = term_d_5;
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
ATerm Desugar_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  ATerm y_22 (ATerm t)
  {
    t = not_null(t_19);
    {
      ATerm e_5 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_5;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_i_5, not_null(t_19));
    return(t);
  }
  ATerm z_22 (ATerm t)
  {
    t = not_null(p_19);
    return(t);
  }
  ATerm a_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(t_19)));
    return(t);
  }
  ATerm b_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(t_19)));
    return(t);
  }
  ATerm c_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(t_19)));
    return(t);
  }
  ATerm d_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_19)), (ATerm) ATempty);
    return(t);
  }
  ATerm e_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_19)), not_null(u_19));
    return(t);
  }
  ATerm f_23 (ATerm t)
  {
    t = not_null(t_19);
    {
      ATerm d_0 (ATerm t)
      {
        t = not_null(u_19);
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
        c_21 = t;
        c_19 :
        if(match_cons(c_21, sym__2))
          {
            d_21 = ATgetArgument(c_21, 0);
            e_21 = ATgetArgument(c_21, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_q_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_21)), not_null(d_21)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, d_0, e_0);
    }
    return(t);
  }
  ATerm g_23 (ATerm t)
  {
    t = not_null(t_19);
    {
      ATerm f_0 (ATerm t)
      {
        t = term_t_5;
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
        i_21 = t;
        e_19 :
        if(match_cons(i_21, sym__2))
          {
            j_21 = ATgetArgument(i_21, 0);
            k_21 = ATgetArgument(i_21, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_q_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_21)), not_null(j_21)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, f_0, n_0);
    }
    return(t);
  }
  ATerm h_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_u_5, (ATerm) ATinsert(CheckATermList(not_null(u_19)), not_null(t_19)));
    return(t);
  }
  ATerm i_23 (ATerm t)
  {
    t = not_null(t_19);
    {
      ATerm v_5 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_5;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_u_5, not_null(t_19));
    return(t);
  }
  ATerm j_23 (ATerm t)
  {
    t = not_null(p_19);
    return(t);
  }
  ATerm k_23 (ATerm t)
  {
    t = term_w_5;
    return(t);
  }
  ATerm l_23 (ATerm t)
  {
    t = not_null(t_19);
    return(t);
  }
  ATerm m_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(t_19), not_null(u_19), term_b_6);
    return(t);
  }
  ATerm n_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_19), not_null(u_19), term_b_6);
    return(t);
  }
  ATerm o_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(t_19), (ATerm)ATempty, not_null(u_19));
    return(t);
  }
  ATerm p_23 (ATerm t)
  {
    ATerm a_22 = NULL;
    ATerm b_22 = NULL;
    t = not_null(t_19);
    {
      t = un_double_quote_0(t);
      {
        b_22 = t;
        if(((a_22 != NULL) && (a_22 != b_22)))
          _fail(b_22);
        else
          a_22 = b_22;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(a_22), not_null(u_19));
    return(t);
  }
  ATerm q_23 (ATerm t)
  {
    ATerm d_22 = NULL;
    ATerm e_22 = NULL;
    t = not_null(t_19);
    {
      t = un_double_quote_0(t);
      {
        e_22 = t;
        if(((d_22 != NULL) && (d_22 != e_22)))
          _fail(e_22);
        else
          d_22 = e_22;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(d_22), (ATerm) ATempty);
    return(t);
  }
  ATerm r_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(t_19), (ATerm) ATempty);
    return(t);
  }
  ATerm s_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_19), (ATerm)ATempty, not_null(u_19));
    return(t);
  }
  ATerm t_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(t_19), not_null(u_19), not_null(r_19));
    return(t);
  }
  ATerm u_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(t_19), (ATerm)ATempty, not_null(u_19));
    return(t);
  }
  ATerm v_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(t_19), (ATerm)ATempty, not_null(u_19));
    return(t);
  }
  ATerm w_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(u_19));
    return(t);
  }
  s_19 = t;
  h_19 :
  if(match_cons(s_19, sym_SortNoArgs_1))
    {
      t_19 = ATgetArgument(s_19, 0);
      t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(t_19), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(s_19, sym_Char_1))
        {
          t_19 = ATgetArgument(s_19, 0);
          {
            ATerm x_19 = NULL;
            ATerm y_19 = NULL;
            t = not_null(t_19);
            {
              ATerm c_6 = t;
              int d_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = DesugarChar_0(t);
                  LocalPopChoice(d_6);
                }
              else
                {
                  t = c_6;
                  {
                    t = explode_string_0(t);
                    t = DesugarCharGeneric_0(t);
                  }
                }
              {
                y_19 = t;
                if(((x_19 != NULL) && (x_19 != y_19)))
                  _fail(y_19);
                else
                  x_19 = y_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(x_19));
          }
        }
      else
        {
          if(match_cons(s_19, sym_Con_2))
            {
              t_19 = ATgetArgument(s_19, 0);
              u_19 = ATgetArgument(s_19, 1);
              i_19 :
              if(match_cons(u_19, sym_Con2_2))
                {
                  o_19 = ATgetArgument(u_19, 0);
                  n_19 = ATgetArgument(u_19, 1);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(t_19), not_null(o_19), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_19)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(u_19, sym_Con1_1))
                    {
                      o_19 = ATgetArgument(u_19, 0);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(t_19), not_null(o_19), term_m_6);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(s_19, sym_ListTail_2))
                {
                  t_19 = ATgetArgument(s_19, 0);
                  u_19 = ATgetArgument(s_19, 1);
                  {
                    t = not_null(t_19);
                    {
                      ATerm o_0 (ATerm t)
                      {
                        t = not_null(u_19);
                        return(t);
                      }
                      ATerm p_0 (ATerm t)
                      {
                        ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
                        h_20 = t;
                        y_18 :
                        if(match_cons(h_20, sym__2))
                          {
                            i_20 = ATgetArgument(h_20, 0);
                            j_20 = ATgetArgument(h_20, 1);
                            t = (ATerm) ATmakeAppl(sym_Op_2, term_p_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_20)), not_null(i_20)));
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
                  if(match_cons(s_19, sym_List_1))
                    {
                      t_19 = ATgetArgument(s_19, 0);
                      {
                        t = not_null(t_19);
                        {
                          ATerm q_0 (ATerm t)
                          {
                            t = term_n_6;
                            return(t);
                          }
                          ATerm r_0 (ATerm t)
                          {
                            ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
                            n_20 = t;
                            a_19 :
                            if(match_cons(n_20, sym__2))
                              {
                                o_20 = ATgetArgument(n_20, 0);
                                p_20 = ATgetArgument(n_20, 1);
                                t = (ATerm) ATmakeAppl(sym_Op_2, term_p_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_20)), not_null(o_20)));
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
                      if(match_cons(s_19, sym_Tuple_1))
                        {
                          t_19 = ATgetArgument(s_19, 0);
                          j_19 :
                          if(((ATgetType(t_19) == AT_LIST) && ((ATermList) t_19 != ATempty)))
                            {
                              p_19 = ATgetFirst((ATermList) t_19);
                              q_19 = (ATerm) ATgetNext((ATermList) t_19);
                              k_19 :
                              if(((ATermList) q_19 == ATempty))
                                {
                                  {
                                    ATerm o_6 = t;
                                    int p_6 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = y_22(t);
                                        LocalPopChoice(p_6);
                                      }
                                    else
                                      {
                                        t = o_6;
                                        t = z_22(t);
                                      }
                                  }
                                }
                              else
                                {
                                  t = y_22(t);
                                }
                            }
                          else
                            {
                              t = y_22(t);
                            }
                        }
                      else
                        {
                          if(match_cons(s_19, sym_RealCong_1))
                            {
                              t_19 = ATgetArgument(s_19, 0);
                              t = a_23(t);
                            }
                          else
                            {
                              if(match_cons(s_19, sym_IntCong_1))
                                {
                                  t_19 = ATgetArgument(s_19, 0);
                                  t = b_23(t);
                                }
                              else
                                {
                                  if(match_cons(s_19, sym_StrCong_1))
                                    {
                                      t_19 = ATgetArgument(s_19, 0);
                                      t = c_23(t);
                                    }
                                  else
                                    {
                                      if(match_cons(s_19, sym_ModCongNoArgs_1))
                                        {
                                          t_19 = ATgetArgument(s_19, 0);
                                          t = d_23(t);
                                        }
                                      else
                                        {
                                          if(match_cons(s_19, sym_ModCong_2))
                                            {
                                              t_19 = ATgetArgument(s_19, 0);
                                              u_19 = ATgetArgument(s_19, 1);
                                              t = e_23(t);
                                            }
                                          else
                                            {
                                              if(match_cons(s_19, sym_ListCong_2))
                                                {
                                                  t_19 = ATgetArgument(s_19, 0);
                                                  u_19 = ATgetArgument(s_19, 1);
                                                  t = f_23(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(s_19, sym_ListCongNoTail_1))
                                                    {
                                                      t_19 = ATgetArgument(s_19, 0);
                                                      t = g_23(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(s_19, sym_TupleCong_2))
                                                        {
                                                          t_19 = ATgetArgument(s_19, 0);
                                                          u_19 = ATgetArgument(s_19, 1);
                                                          t = h_23(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(s_19, sym_TupleCong_1))
                                                            {
                                                              t_19 = ATgetArgument(s_19, 0);
                                                              l_19 :
                                                              if(((ATgetType(t_19) == AT_LIST) && ((ATermList) t_19 != ATempty)))
                                                                {
                                                                  p_19 = ATgetFirst((ATermList) t_19);
                                                                  q_19 = (ATerm) ATgetNext((ATermList) t_19);
                                                                  m_19 :
                                                                  if(((ATermList) q_19 == ATempty))
                                                                    {
                                                                      {
                                                                        ATerm q_6 = t;
                                                                        int r_6 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = i_23(t);
                                                                            LocalPopChoice(r_6);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = q_6;
                                                                            t = j_23(t);
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_23(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = i_23(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(s_19, sym_TupleCong_0))
                                                                {
                                                                  t = k_23(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(s_19, sym_ParenStrat_1))
                                                                    {
                                                                      t_19 = ATgetArgument(s_19, 0);
                                                                      t = l_23(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(s_19, sym_StratRuleNoCond_2))
                                                                        {
                                                                          t_19 = ATgetArgument(s_19, 0);
                                                                          u_19 = ATgetArgument(s_19, 1);
                                                                          t = m_23(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(s_19, sym_RuleNoCond_2))
                                                                            {
                                                                              t_19 = ATgetArgument(s_19, 0);
                                                                              u_19 = ATgetArgument(s_19, 1);
                                                                              t = n_23(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(s_19, sym_OverlayNoArgs_2))
                                                                                {
                                                                                  t_19 = ATgetArgument(s_19, 0);
                                                                                  u_19 = ATgetArgument(s_19, 1);
                                                                                  t = o_23(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(s_19, sym_Prim_2))
                                                                                    {
                                                                                      t_19 = ATgetArgument(s_19, 0);
                                                                                      u_19 = ATgetArgument(s_19, 1);
                                                                                      t = p_23(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(s_19, sym_PrimNoArgs_1))
                                                                                        {
                                                                                          t_19 = ATgetArgument(s_19, 0);
                                                                                          t = q_23(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(s_19, sym_CallNoArgs_1))
                                                                                            {
                                                                                              t_19 = ATgetArgument(s_19, 0);
                                                                                              t = r_23(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(s_19, sym_SDefNoArgs_2))
                                                                                                {
                                                                                                  t_19 = ATgetArgument(s_19, 0);
                                                                                                  u_19 = ATgetArgument(s_19, 1);
                                                                                                  t = s_23(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(s_19, sym_SRDef_3))
                                                                                                    {
                                                                                                      t_19 = ATgetArgument(s_19, 0);
                                                                                                      u_19 = ATgetArgument(s_19, 1);
                                                                                                      r_19 = ATgetArgument(s_19, 2);
                                                                                                      t = t_23(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(s_19, sym_SRDefNoArgs_2))
                                                                                                        {
                                                                                                          t_19 = ATgetArgument(s_19, 0);
                                                                                                          u_19 = ATgetArgument(s_19, 1);
                                                                                                          t = u_23(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(s_19, sym_RDefNoArgs_2))
                                                                                                            {
                                                                                                              t_19 = ATgetArgument(s_19, 0);
                                                                                                              u_19 = ATgetArgument(s_19, 1);
                                                                                                              t = v_23(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(s_19, sym_Module_2))
                                                                                                                {
                                                                                                                  t_19 = ATgetArgument(s_19, 0);
                                                                                                                  u_19 = ATgetArgument(s_19, 1);
                                                                                                                  t = w_23(t);
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
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm k_91 (ATerm), ATerm l_91 (ATerm))
{
  ATerm e_24 (ATerm t)
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_91(t);
        t = e_24(t);
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        t = l_91(t);
      }
    return(t);
  }
  t = e_24(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_91 (ATerm))
{
  t = repeat_2(t, n_91, _id);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm d_88 (ATerm))
{
  t = d_88(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = topdown_1(t, d_88);
      return(t);
    }
    t = _all(t, s_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm m_53 (ATerm), ATerm n_53 (ATerm))
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym__2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      {
        ATerm r_24 = NULL,t_24 = NULL;
        ATerm s_24 = NULL;
        t = SSLgetAnnotations(not_null(l_24));
        {
          s_24 = t;
          if(((r_24 != NULL) && (r_24 != s_24)))
            _fail(s_24);
          else
            r_24 = s_24;
        }
        {
          t = not_null(m_24);
          {
            ATerm v_24 = NULL;
            t = m_53(t);
            {
              t_24 = t;
              {
                t = not_null(n_24);
                {
                  ATerm x_24 = NULL;
                  t = n_53(t);
                  {
                    v_24 = t;
                    {
                      ATerm y_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_24), not_null(v_24)), not_null(r_24));
                      {
                        y_24 = t;
                        if(((x_24 != NULL) && (x_24 != y_24)))
                          _fail(y_24);
                        else
                          x_24 = y_24;
                      }
                      t = not_null(x_24);
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
  ATerm g_25 = NULL;
  ATerm u_6;
  u_6 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm h_25 = NULL,i_25 = NULL;
      h_25 = t;
      f_25 :
      if(match_cons(h_25, sym_Program_1))
        {
          i_25 = ATgetArgument(h_25, 0);
          if(((g_25 != NULL) && (g_25 != i_25)))
            _fail(i_25);
          else
            g_25 = i_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, t_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_7), not_null(g_25)), term_a_7));
      {
        t = printnl_0(t);
        {
          t = term_c_7;
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
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym__2))
    {
      n_25 = ATgetArgument(m_25, 0);
      o_25 = ATgetArgument(m_25, 1);
      {
        ATerm g_7;
        g_7 = t;
        t = SSL_printnl(not_null(n_25), not_null(o_25));
        t = g_7;
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
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym__2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      {
        t = not_null(v_25);
        {
          ATerm u_0 (ATerm t)
          {
            t = not_null(w_25);
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
ATerm debug_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm i_7;
  i_7 = t;
  {
    ATerm j_26 = NULL,l_26 = NULL;
    ATerm l_7;
    l_7 = t;
    {
      ATerm k_26 = NULL;
      t = a_74(t);
      {
        k_26 = t;
        if(((j_26 != NULL) && (j_26 != k_26)))
          _fail(k_26);
        else
          j_26 = k_26;
      }
    }
    t = l_7;
    {
      ATerm m_26 = NULL;
      m_26 = t;
      if(((l_26 != NULL) && (l_26 != m_26)))
        _fail(m_26);
      else
        l_26 = m_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_26)), not_null(j_26)));
        t = printnl_0(t);
      }
    }
  }
  t = i_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  t = SSL_is_string(not_null(q_26));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            {
              ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
              c_27 = t;
              b_27 :
              if(match_cons(c_27, sym_Path_1))
                {
                  d_27 = ATgetArgument(c_27, 0);
                  t = not_null(d_27);
                }
              else
                {
                  if(match_cons(c_27, sym_Var_1))
                    {
                      d_27 = ATgetArgument(c_27, 0);
                      {
                        t = not_null(d_27);
                        {
                          ATerm q_7 = t;
                          int r_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_7);
                            }
                          else
                            {
                              t = q_7;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_s_7;
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
                      if(match_cons(c_27, sym_Prefix_2))
                        {
                          d_27 = ATgetArgument(c_27, 0);
                          e_27 = ATgetArgument(c_27, 1);
                          {
                            ATerm j_27 = NULL,l_27 = NULL;
                            ATerm t_7;
                            t_7 = t;
                            {
                              ATerm k_27 = NULL;
                              t = not_null(d_27);
                              {
                                t = eval_config_0(t);
                                {
                                  k_27 = t;
                                  if(((j_27 != NULL) && (j_27 != k_27)))
                                    _fail(k_27);
                                  else
                                    j_27 = k_27;
                                }
                              }
                            }
                            t = t_7;
                            {
                              ATerm m_27 = NULL;
                              t = not_null(e_27);
                              {
                                t = eval_config_0(t);
                                {
                                  m_27 = t;
                                  if(((l_27 != NULL) && (l_27 != m_27)))
                                    _fail(m_27);
                                  else
                                    l_27 = m_27;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(l_27));
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
  ATerm v_27 = NULL;
  v_27 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_7, not_null(v_27));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm y_7;
            y_7 = t;
            {
              ATerm x_27 = NULL;
              ATerm y_27 = NULL;
              y_27 = t;
              if(((x_27 != NULL) && (x_27 != y_27)))
                _fail(y_27);
              else
                x_27 = y_27;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(v_27), not_null(x_27));
                t = table_put_0(t);
              }
            }
            t = y_7;
          }
          return(t);
        }
        t = try_1(t, x_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm c_8;
    c_8 = t;
    {
      ATerm c_28 = NULL;
      ATerm d_28 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          d_28 = t;
          if(((c_28 != NULL) && (c_28 != d_28)))
            _fail(d_28);
          else
            c_28 = d_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), term_g_8);
        t = geq_0(t);
      }
    }
    t = c_8;
    t = k_71(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, term_h_8));
  {
    t = printnl_0(t);
    {
      t = term_c_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_TicksToSeconds(not_null(g_28));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym__2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_28), not_null(n_28));
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            t = SSL_addr(not_null(m_28), not_null(n_28));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_77(t);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
        u_28 = t;
        t_28 :
        if(((ATgetType(u_28) == AT_LIST) && ((ATermList) u_28 != ATempty)))
          {
            v_28 = ATgetFirst((ATermList) u_28);
            w_28 = (ATerm) ATgetNext((ATermList) u_28);
            {
              ATerm z_28 = NULL;
              ATerm a_29 = NULL;
              t = not_null(w_28);
              {
                t = foldr_2(t, x_77, y_77);
                {
                  a_29 = t;
                  if(((z_28 != NULL) && (z_28 != a_29)))
                    _fail(a_29);
                  else
                    z_28 = a_29;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(z_28));
                t = y_77(t);
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
ATerm crush_2 (ATerm t, ATerm p_79 (ATerm), ATerm q_79 (ATerm))
{
  ATerm p_29 = NULL;
  ATerm t_29 = NULL;
  p_29 = t;
  {
    ATerm u_29 = NULL;
    ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
    t = not_null(p_29);
    {
      u_29 = t;
      {
        t = SSL_explode_term(not_null(u_29));
        {
          w_29 = t;
          o_29 :
          if(match_cons(w_29, sym__2))
            {
              x_29 = ATgetArgument(w_29, 0);
              y_29 = ATgetArgument(w_29, 1);
              if(((t_29 != NULL) && (t_29 != y_29)))
                _fail(y_29);
              else
                t_29 = y_29;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_29);
      t = foldr_2(t, p_79, q_79);
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
      t = term_m_8;
      return(t);
    }
    t = crush_2(t, z_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,i_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym__2))
    {
      f_30 = ATgetArgument(e_30, 0);
      i_30 = ATgetArgument(e_30, 1);
      {
        ATerm n_8;
        n_8 = t;
        {
          ATerm o_8 = t;
          int p_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_30), not_null(i_30));
              LocalPopChoice(p_8);
            }
          else
            {
              t = o_8;
              t = SSL_gtr(not_null(f_30), not_null(i_30));
            }
        }
        t = n_8;
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
  ATerm o_30 = NULL;
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_30 = NULL,w_30 = NULL,d_31 = NULL;
      v_30 = t;
      n_30 :
      if(match_cons(v_30, sym__2))
        {
          w_30 = ATgetArgument(v_30, 0);
          d_31 = ATgetArgument(v_30, 1);
          {
            if(((o_30 != NULL) && (o_30 != w_30)))
              _fail(w_30);
            else
              o_30 = w_30;
            if(((o_30 != NULL) && (o_30 != d_31)))
              _fail(d_31);
            else
              o_30 = d_31;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_71 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm s_8;
    s_8 = t;
    {
      ATerm g_31 = NULL;
      ATerm h_31 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          h_31 = t;
          if(((g_31 != NULL) && (g_31 != h_31)))
            _fail(h_31);
          else
            g_31 = h_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), term_c_7);
        t = geq_0(t);
      }
    }
    t = s_8;
    t = j_71(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm l_31 = NULL,o_31 = NULL;
    ATerm t_8;
    t_8 = t;
    {
      ATerm n_31 = NULL;
      t = run_time_0(t);
      {
        n_31 = t;
        if(((l_31 != NULL) && (l_31 != n_31)))
          _fail(n_31);
        else
          l_31 = n_31;
      }
    }
    t = t_8;
    {
      ATerm p_31 = NULL;
      t = term_u_8;
      {
        t = get_config_0(t);
        {
          p_31 = t;
          if(((o_31 != NULL) && (o_31 != p_31)))
            _fail(p_31);
          else
            o_31 = p_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_8), not_null(l_31)), term_y_8), not_null(o_31)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_1);
  {
    t = term_m_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym__2))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      t = SSL_WriteToTextFile(not_null(v_31), not_null(w_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym__2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      t = SSL_WriteToBinaryFile(not_null(d_32), not_null(e_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_32 = NULL;
  ATerm d_9;
  d_9 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm g_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm n_32 = NULL,o_32 = NULL;
            n_32 = t;
            j_32 :
            if(match_cons(n_32, sym_Output_1))
              {
                o_32 = ATgetArgument(n_32, 0);
                if(((m_32 != NULL) && (m_32 != o_32)))
                  _fail(o_32);
                else
                  m_32 = o_32;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_1);
          LocalPopChoice(h_9);
        }
      else
        {
          t = g_9;
          {
            ATerm p_32 = NULL;
            t = term_l_9;
            {
              p_32 = t;
              if(((m_32 != NULL) && (m_32 != p_32)))
                _fail(p_32);
              else
                m_32 = p_32;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_1, _id);
  }
  t = d_9;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(m_32);
        return(t);
      }
      t = split_2(t, f_1, _id);
      return(t);
    }
    t = _2(t, _id, e_1);
    {
      ATerm o_9 = t;
      int p_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              ATerm q_32 = NULL;
              q_32 = t;
              l_32 :
              if(!(match_cons(q_32, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_1);
            return(t);
          }
          t = _2(t, g_1, WriteToBinaryFile_0);
          LocalPopChoice(p_9);
        }
      else
        {
          t = o_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm k_73 (ATerm))
{
  ATerm w_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  ATerm t_9;
  t_9 = t;
  t = dtime_0(t);
  t = t_9;
  {
    t = k_73(t);
    {
      ATerm w_9;
      w_9 = t;
      {
        ATerm x_32 = NULL;
        t = dtime_0(t);
        {
          x_32 = t;
          if(((w_32 != NULL) && (w_32 != x_32)))
            _fail(x_32);
          else
            w_32 = x_32;
        }
      }
      t = w_9;
      {
        y_32 = t;
        v_32 :
        if(match_cons(y_32, sym__2))
          {
            z_32 = ATgetArgument(y_32, 0);
            a_33 = ATgetArgument(y_32, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_32)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_32))), not_null(a_33));
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
  ATerm g_33 = NULL;
  g_33 = t;
  t = SSL_ReadFromFile(not_null(g_33));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_76 (ATerm), ATerm m_76 (ATerm))
{
  ATerm l_33 = NULL,n_33 = NULL;
  ATerm x_9;
  x_9 = t;
  {
    ATerm m_33 = NULL;
    t = l_76(t);
    {
      m_33 = t;
      if(((l_33 != NULL) && (l_33 != m_33)))
        _fail(m_33);
      else
        l_33 = m_33;
    }
  }
  t = x_9;
  {
    ATerm q_33 = NULL;
    t = m_76(t);
    {
      q_33 = t;
      if(((n_33 != NULL) && (n_33 != q_33)))
        _fail(q_33);
      else
        n_33 = q_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_33), not_null(n_33));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_34 = NULL;
  ATerm y_9;
  y_9 = t;
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          ATerm c_34 = NULL,d_34 = NULL;
          c_34 = t;
          z_33 :
          if(match_cons(c_34, sym_Input_1))
            {
              d_34 = ATgetArgument(c_34, 0);
              if(((b_34 != NULL) && (b_34 != d_34)))
                _fail(d_34);
              else
                b_34 = d_34;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_1);
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        {
          ATerm e_34 = NULL;
          t = term_b_10;
          {
            e_34 = t;
            if(((b_34 != NULL) && (b_34 != e_34)))
              _fail(e_34);
            else
              b_34 = e_34;
          }
        }
      }
  }
  t = y_9;
  {
    ATerm j_1 (ATerm t)
    {
      t = not_null(b_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  l_34 :
  if(match_cons(m_34, sym_Version_0))
    {
      ATerm o_34 = NULL,q_34 = NULL;
      ATerm c_10;
      c_10 = t;
      {
        ATerm p_34 = NULL;
        t = SSLgetAnnotations(not_null(m_34));
        {
          p_34 = t;
          if(((o_34 != NULL) && (o_34 != p_34)))
            _fail(p_34);
          else
            o_34 = p_34;
        }
      }
      t = c_10;
      {
        ATerm r_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_34));
        {
          r_34 = t;
          if(((q_34 != NULL) && (q_34 != r_34)))
            _fail(r_34);
          else
            q_34 = r_34;
        }
        t = not_null(q_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        {
          ATerm f_10 = t;
          int g_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_10);
            }
          else
            {
              t = f_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_1);
  t = i_73(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  t = SSL_table_create(not_null(w_34));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_35 = NULL;
  c_35 = t;
  {
    ATerm h_10;
    h_10 = t;
    {
      t = term_i_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_10, term_j_10, not_null(c_35));
          t = table_put_0(t);
        }
      }
    }
    t = h_10;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_35 = NULL;
  g_35 = t;
  t = SSL_string_to_int(not_null(g_35));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  o_35 = t;
  m_35 :
  if(match_string(o_35, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_35) == AT_LIST) && ((ATermList) o_35 != ATempty)))
        {
          p_35 = ATgetFirst((ATermList) o_35);
          q_35 = (ATerm) ATgetNext((ATermList) o_35);
          n_35 :
          if(((ATgetType(q_35) == AT_LIST) && ((ATermList) q_35 != ATempty)))
            {
              r_35 = ATgetFirst((ATermList) q_35);
              s_35 = (ATerm) ATgetNext((ATermList) q_35);
              {
                ATerm w_35 = NULL;
                ATerm k_10;
                k_10 = t;
                {
                  t = not_null(p_35);
                  t = j_0(t);
                }
                t = k_10;
                {
                  ATerm x_35 = NULL;
                  t = not_null(r_35);
                  {
                    t = k_0(t);
                    {
                      x_35 = t;
                      if(((w_35 != NULL) && (w_35 != x_35)))
                        _fail(x_35);
                      else
                        w_35 = x_35;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_35)), not_null(w_35));
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
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm u_36 = NULL;
        u_36 = t;
        d_36 :
        if(!(match_string(u_36, "-i")))
          {
            if(!(match_string(u_36, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        ATerm x_36 = NULL;
        ATerm r_10;
        r_10 = t;
        {
          ATerm v_36 = NULL;
          ATerm w_36 = NULL;
          w_36 = t;
          if(((v_36 != NULL) && (v_36 != w_36)))
            _fail(w_36);
          else
            v_36 = w_36;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_s_10, not_null(v_36));
            t = set_config_0(t);
          }
        }
        t = r_10;
        {
          ATerm y_36 = NULL;
          y_36 = t;
          if(((x_36 != NULL) && (x_36 != y_36)))
            _fail(y_36);
          else
            x_36 = y_36;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_36));
        }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_t_10;
        return(t);
      }
      t = ArgOption_3(t, l_1, m_1, n_1);
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
            ATerm o_1 (ATerm t)
            {
              ATerm z_36 = NULL;
              z_36 = t;
              i_36 :
              if(!(match_string(z_36, "-o")))
                {
                  if(!(match_string(z_36, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              ATerm c_37 = NULL;
              ATerm c_11;
              c_11 = t;
              {
                ATerm a_37 = NULL;
                ATerm b_37 = NULL;
                b_37 = t;
                if(((a_37 != NULL) && (a_37 != b_37)))
                  _fail(b_37);
                else
                  a_37 = b_37;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_11, not_null(a_37));
                  t = set_config_0(t);
                }
              }
              t = c_11;
              {
                ATerm d_37 = NULL;
                d_37 = t;
                if(((c_37 != NULL) && (c_37 != d_37)))
                  _fail(d_37);
                else
                  c_37 = d_37;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_37));
              }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              t = term_e_11;
              return(t);
            }
            t = ArgOption_3(t, o_1, p_1, q_1);
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
                  ATerm r_1 (ATerm t)
                  {
                    ATerm e_37 = NULL;
                    e_37 = t;
                    l_36 :
                    if(!(match_string(e_37, "-S")))
                      {
                        if(!(match_string(e_37, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm s_1 (ATerm t)
                  {
                    t = term_h_11;
                    t = set_config_0(t);
                    t = term_i_11;
                    return(t);
                  }
                  ATerm t_1 (ATerm t)
                  {
                    t = term_j_11;
                    return(t);
                  }
                  t = Option_3(t, r_1, s_1, t_1);
                  LocalPopChoice(g_11);
                }
              else
                {
                  t = f_11;
                  {
                    ATerm k_11 = t;
                    int l_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_1 (ATerm t)
                        {
                          ATerm f_37 = NULL;
                          f_37 = t;
                          m_36 :
                          if(!(match_string(f_37, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm v_1 (ATerm t)
                        {
                          ATerm i_37 = NULL;
                          ATerm m_11;
                          m_11 = t;
                          {
                            ATerm g_37 = NULL;
                            ATerm h_37 = NULL;
                            t = string_to_int_0(t);
                            {
                              h_37 = t;
                              if(((g_37 != NULL) && (g_37 != h_37)))
                                _fail(h_37);
                              else
                                g_37 = h_37;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(g_37));
                              t = set_config_0(t);
                            }
                          }
                          t = m_11;
                          {
                            ATerm j_37 = NULL;
                            j_37 = t;
                            if(((i_37 != NULL) && (i_37 != j_37)))
                              _fail(j_37);
                            else
                              i_37 = j_37;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_37));
                          }
                          return(t);
                        }
                        ATerm w_1 (ATerm t)
                        {
                          t = term_s_11;
                          return(t);
                        }
                        t = ArgOption_3(t, u_1, v_1, w_1);
                        LocalPopChoice(l_11);
                      }
                    else
                      {
                        t = k_11;
                        {
                          ATerm t_11 = t;
                          int u_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_1 (ATerm t)
                              {
                                ATerm k_37 = NULL;
                                k_37 = t;
                                p_36 :
                                if(!(match_string(k_37, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm y_1 (ATerm t)
                              {
                                ATerm v_11;
                                v_11 = t;
                                {
                                  ATerm l_37 = NULL;
                                  ATerm m_37 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    m_37 = t;
                                    if(((l_37 != NULL) && (l_37 != m_37)))
                                      _fail(m_37);
                                    else
                                      l_37 = m_37;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(l_37));
                                    t = set_config_0(t);
                                  }
                                }
                                t = v_11;
                                return(t);
                              }
                              ATerm z_1 (ATerm t)
                              {
                                t = term_b_12;
                                return(t);
                              }
                              t = ArgOption_3(t, x_1, y_1, z_1);
                              LocalPopChoice(u_11);
                            }
                          else
                            {
                              t = t_11;
                              {
                                ATerm d_12 = t;
                                int g_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_2 (ATerm t)
                                    {
                                      ATerm n_37 = NULL;
                                      n_37 = t;
                                      r_36 :
                                      if(!(match_string(n_37, "-v")))
                                        {
                                          if(!(match_string(n_37, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm b_2 (ATerm t)
                                    {
                                      t = term_j_12;
                                      t = set_config_0(t);
                                      t = term_k_12;
                                      return(t);
                                    }
                                    ATerm c_2 (ATerm t)
                                    {
                                      t = term_l_12;
                                      return(t);
                                    }
                                    t = Option_3(t, a_2, b_2, c_2);
                                    LocalPopChoice(g_12);
                                  }
                                else
                                  {
                                    t = d_12;
                                    {
                                      ATerm m_12 = t;
                                      int n_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_2 (ATerm t)
                                          {
                                            ATerm o_37 = NULL;
                                            o_37 = t;
                                            s_36 :
                                            if(!(match_string(o_37, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm e_2 (ATerm t)
                                          {
                                            t = term_p_12;
                                            t = set_config_0(t);
                                            t = term_q_12;
                                            return(t);
                                          }
                                          ATerm f_2 (ATerm t)
                                          {
                                            t = term_r_12;
                                            return(t);
                                          }
                                          t = Option_3(t, d_2, e_2, f_2);
                                          LocalPopChoice(n_12);
                                        }
                                      else
                                        {
                                          t = m_12;
                                          {
                                            ATerm g_2 (ATerm t)
                                            {
                                              ATerm p_37 = NULL;
                                              p_37 = t;
                                              t_36 :
                                              if(!(match_string(p_37, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm h_2 (ATerm t)
                                            {
                                              t = term_y_12;
                                              t = set_config_0(t);
                                              t = term_z_12;
                                              return(t);
                                            }
                                            ATerm i_2 (ATerm t)
                                            {
                                              t = term_a_13;
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
  ATerm b_38 = NULL;
  b_38 = t;
  t = SSL_table_destroy(not_null(b_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_38 = NULL;
  j_38 = t;
  t = SSL_exit(not_null(j_38));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm n_38 = NULL;
  n_38 = t;
  t = SSL_implode_string(not_null(n_38));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_84 (ATerm))
{
  ATerm q_38 (ATerm t)
  {
    ATerm e_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_38);
        LocalPopChoice(g_13);
      }
    else
      {
        t = e_13;
        {
          t = Nil_0(t);
          t = c_84(t);
        }
      }
    return(t);
  }
  t = q_38(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_13);
    }
  else
    {
      t = i_13;
      {
        ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
        t_38 = t;
        s_38 :
        if(((ATgetType(t_38) == AT_LIST) && ((ATermList) t_38 != ATempty)))
          {
            u_38 = ATgetFirst((ATermList) t_38);
            v_38 = (ATerm) ATgetNext((ATermList) t_38);
            {
              t = not_null(u_38);
              {
                ATerm j_2 (ATerm t)
                {
                  t = not_null(v_38);
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
  ATerm b_39 = NULL;
  b_39 = t;
  t = SSL_explode_string(not_null(b_39));
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
ATerm long_description_1 (ATerm t, ATerm d_70 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm e_39 (ATerm t)
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = Cons_2(t, n_83, e_39);
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
  o_39 = t;
  l_39 :
  if(((ATgetType(o_39) == AT_LIST) && ((ATermList) o_39 != ATempty)))
    {
      m_39 = ATgetFirst((ATermList) o_39);
      n_39 = (ATerm) ATgetNext((ATermList) o_39);
      {
        ATerm r_39 = NULL;
        t = not_null(n_39);
        {
          ATerm o_13;
          o_13 = t;
          {
            ATerm s_39 = NULL,u_39 = NULL,w_39 = NULL;
            ATerm p_13;
            p_13 = t;
            {
              ATerm t_39 = NULL;
              t = i_0(t);
              {
                t_39 = t;
                if(((s_39 != NULL) && (s_39 != t_39)))
                  _fail(t_39);
                else
                  s_39 = t_39;
              }
            }
            t = p_13;
            {
              ATerm v_39 = NULL;
              t = not_null(m_39);
              {
                t = h_0(t);
                {
                  v_39 = t;
                  if(((u_39 != NULL) && (u_39 != v_39)))
                    _fail(v_39);
                  else
                    u_39 = v_39;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_39)), not_null(u_39));
                {
                  w_39 = t;
                  if(((r_39 != NULL) && (r_39 != w_39)))
                    _fail(w_39);
                  else
                    r_39 = w_39;
                }
              }
            }
          }
          t = o_13;
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(r_39);
              return(t);
            }
            t = reverse_acc_2(t, h_0, k_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_39 == ATempty))
        {
          {
            t = term_i_12;
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
ATerm short_description_1 (ATerm t, ATerm c_70 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_Program_1))
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
            t = e_61(t);
            {
              n_40 = t;
              {
                ATerm q_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_40)), not_null(l_40));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm z_40 = NULL;
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm a_41 = NULL;
      a_41 = t;
      if(((z_40 != NULL) && (z_40 != a_41)))
        _fail(a_41);
      else
        z_40 = a_41;
      return(t);
    }
    t = Program_1(t, n_2);
    return(t);
  }
  t = option_defined_1(t, m_2);
  {
    ATerm o_2 (ATerm t)
    {
      ATerm b_41 = NULL;
      ATerm c_41 = NULL;
      t = term_i_12;
      {
        ATerm p_2 (ATerm t)
        {
          t = not_null(z_40);
          return(t);
        }
        t = short_description_1(t, p_2);
        {
          t = concat_strings_0(t);
          {
            c_41 = t;
            if(((b_41 != NULL) && (b_41 != c_41)))
              _fail(c_41);
            else
              b_41 = c_41;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, not_null(b_41)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, o_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, term_q_13));
      {
        t = printnl_0(t);
        {
          t = term_t_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_2 (ATerm t)
                {
                  ATerm d_41 = NULL;
                  d_41 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_41)), term_u_13));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_2);
                {
                  ATerm r_2 (ATerm t)
                  {
                    ATerm f_41 = NULL;
                    ATerm g_41 = NULL;
                    t = term_i_12;
                    {
                      ATerm s_2 (ATerm t)
                      {
                        t = not_null(z_40);
                        return(t);
                      }
                      t = long_description_1(t, s_2);
                      {
                        t = concat_strings_0(t);
                        {
                          g_41 = t;
                          if(((f_41 != NULL) && (f_41 != g_41)))
                            _fail(g_41);
                          else
                            f_41 = g_41;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_41)), term_y_13));
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
ATerm Undefined_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm q_41 = NULL,r_41 = NULL;
  q_41 = t;
  p_41 :
  if(match_cons(q_41, sym_Undefined_1))
    {
      r_41 = ATgetArgument(q_41, 0);
      {
        ATerm u_41 = NULL,w_41 = NULL;
        ATerm v_41 = NULL;
        t = SSLgetAnnotations(not_null(q_41));
        {
          v_41 = t;
          if(((u_41 != NULL) && (u_41 != v_41)))
            _fail(v_41);
          else
            u_41 = v_41;
        }
        {
          t = not_null(r_41);
          {
            ATerm y_41 = NULL;
            t = f_61(t);
            {
              w_41 = t;
              {
                ATerm z_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_41)), not_null(u_41));
                {
                  z_41 = t;
                  if(((y_41 != NULL) && (y_41 != z_41)))
                    _fail(z_41);
                  else
                    y_41 = z_41;
                }
                t = not_null(y_41);
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
ATerm fetch_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm e_42 (ATerm t)
  {
    ATerm z_13 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_83, _id);
        LocalPopChoice(d_14);
      }
    else
      {
        t = z_13;
        t = Cons_2(t, _id, e_42);
      }
    return(t);
  }
  t = e_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_71 (ATerm))
{
  t = fetch_1(t, h_71);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym_Help_0))
    {
      ATerm l_42 = NULL,n_42 = NULL;
      ATerm g_14;
      g_14 = t;
      {
        ATerm m_42 = NULL;
        t = SSLgetAnnotations(not_null(j_42));
        {
          m_42 = t;
          if(((l_42 != NULL) && (l_42 != m_42)))
            _fail(m_42);
          else
            l_42 = m_42;
        }
      }
      t = g_14;
      {
        ATerm q_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_42));
        {
          q_42 = t;
          if(((n_42 != NULL) && (n_42 != q_42)))
            _fail(q_42);
          else
            n_42 = q_42;
        }
        t = not_null(n_42);
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
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_cons(w_42, sym__2))
    {
      x_42 = ATgetArgument(w_42, 0);
      y_42 = ATgetArgument(w_42, 1);
      t = SSL_table_get(not_null(x_42), not_null(y_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  f_43 = t;
  e_43 :
  if(match_cons(f_43, sym__3))
    {
      g_43 = ATgetArgument(f_43, 0);
      h_43 = ATgetArgument(f_43, 1);
      i_43 = ATgetArgument(f_43, 2);
      {
        ATerm h_14;
        h_14 = t;
        {
          ATerm m_43 = NULL;
          ATerm n_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_43), not_null(h_43));
          {
            ATerm i_14 = t;
            int j_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_14);
              }
            else
              {
                t = i_14;
                t = (ATerm) ATempty;
              }
            {
              n_43 = t;
              if(((m_43 != NULL) && (m_43 != n_43)))
                _fail(n_43);
              else
                m_43 = n_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_43), not_null(h_43), (ATerm) ATinsert(CheckATermList(not_null(m_43)), not_null(i_43)));
            t = table_put_0(t);
          }
        }
        t = h_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm r_43 = NULL;
  ATerm s_43 = NULL;
  t = term_i_12;
  {
    t = h_70(t);
    {
      s_43 = t;
      if(((r_43 != NULL) && (r_43 != s_43)))
        _fail(s_43);
      else
        r_43 = s_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_13, term_s_13, not_null(r_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  x_43 :
  if(match_string(y_43, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_43) == AT_LIST) && ((ATermList) y_43 != ATempty)))
        {
          z_43 = ATgetFirst((ATermList) y_43);
          a_44 = (ATerm) ATgetNext((ATermList) y_43);
          {
            ATerm d_44 = NULL;
            ATerm k_14;
            k_14 = t;
            {
              t = not_null(z_43);
              t = a_0(t);
            }
            t = k_14;
            {
              ATerm e_44 = NULL;
              t = term_i_12;
              {
                t = b_0(t);
                {
                  e_44 = t;
                  if(((d_44 != NULL) && (d_44 != e_44)))
                    _fail(e_44);
                  else
                    d_44 = e_44;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_44)), not_null(d_44));
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
    ATerm k_44 = NULL;
    k_44 = t;
    j_44 :
    if(!(match_string(k_44, "--help")))
      {
        if(!(match_string(k_44, "-h")))
          {
            if(!(match_string(k_44, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_l_14;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_m_14;
    return(t);
  }
  t = Option_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  m_44 :
  if(((ATgetType(n_44) == AT_LIST) && ((ATermList) n_44 != ATempty)))
    {
      o_44 = ATgetFirst((ATermList) n_44);
      p_44 = (ATerm) ATgetNext((ATermList) n_44);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_44)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_44)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  y_44 :
  if(((ATgetType(z_44) == AT_LIST) && ((ATermList) z_44 != ATempty)))
    {
      a_45 = ATgetFirst((ATermList) z_44);
      b_45 = (ATerm) ATgetNext((ATermList) z_44);
      {
        ATerm f_45 = NULL,h_45 = NULL;
        ATerm g_45 = NULL;
        t = SSLgetAnnotations(not_null(z_44));
        {
          g_45 = t;
          if(((f_45 != NULL) && (f_45 != g_45)))
            _fail(g_45);
          else
            f_45 = g_45;
        }
        {
          t = not_null(a_45);
          {
            ATerm j_45 = NULL;
            t = c_66(t);
            {
              h_45 = t;
              {
                t = not_null(b_45);
                {
                  ATerm l_45 = NULL;
                  t = d_66(t);
                  {
                    j_45 = t;
                    {
                      ATerm m_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_45)), not_null(h_45)), not_null(f_45));
                      {
                        m_45 = t;
                        if(((l_45 != NULL) && (l_45 != m_45)))
                          _fail(m_45);
                        else
                          l_45 = m_45;
                      }
                      t = not_null(l_45);
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
  ATerm w_45 = NULL;
  w_45 = t;
  v_45 :
  if(((ATermList) w_45 == ATempty))
    {
      {
        ATerm y_45 = NULL,a_46 = NULL;
        ATerm n_14;
        n_14 = t;
        {
          ATerm z_45 = NULL;
          t = SSLgetAnnotations(not_null(w_45));
          {
            z_45 = t;
            if(((y_45 != NULL) && (y_45 != z_45)))
              _fail(z_45);
            else
              y_45 = z_45;
          }
        }
        t = n_14;
        {
          ATerm b_46 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_45));
          {
            b_46 = t;
            if(((a_46 != NULL) && (a_46 != b_46)))
              _fail(b_46);
            else
              a_46 = b_46;
          }
          t = not_null(a_46);
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
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  g_46 :
  if(match_cons(h_46, sym__2))
    {
      i_46 = ATgetArgument(h_46, 0);
      j_46 = ATgetArgument(h_46, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(i_46), not_null(j_46));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm o_14;
  o_14 = t;
  {
    ATerm w_2 (ATerm t)
    {
      t = term_p_14;
      t = f_70(t);
      return(t);
    }
    t = try_1(t, w_2);
  }
  t = o_14;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm r_46 = NULL;
      ATerm t_14;
      t_14 = t;
      {
        ATerm p_46 = NULL;
        ATerm q_46 = NULL;
        q_46 = t;
        if(((p_46 != NULL) && (p_46 != q_46)))
          _fail(q_46);
        else
          p_46 = q_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_8, not_null(p_46));
          t = set_config_0(t);
        }
      }
      t = t_14;
      {
        ATerm s_46 = NULL;
        s_46 = t;
        if(((r_46 != NULL) && (r_46 != s_46)))
          _fail(s_46);
        else
          r_46 = s_46;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_46));
      }
      return(t);
    }
    ATerm y_2 (ATerm t)
    {
      ATerm w_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              {
                t = f_70(t);
                t = Cons_2(t, _id, y_2);
              }
            }
          LocalPopChoice(z_14);
        }
      else
        {
          t = w_14;
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
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  ATerm e_15;
  e_15 = t;
  {
    ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
    b_47 = t;
    x_46 :
    if(match_cons(b_47, sym__3))
      {
        c_47 = ATgetArgument(b_47, 0);
        d_47 = ATgetArgument(b_47, 1);
        e_47 = ATgetArgument(b_47, 2);
        {
          if(((y_46 != NULL) && (y_46 != c_47)))
            _fail(c_47);
          else
            y_46 = c_47;
          {
            if(((z_46 != NULL) && (z_46 != d_47)))
              _fail(d_47);
            else
              z_46 = d_47;
            {
              if(((a_47 != NULL) && (a_47 != e_47)))
                _fail(e_47);
              else
                a_47 = e_47;
              t = SSL_table_put(not_null(y_46), not_null(z_46), not_null(a_47));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_70 (ATerm))
{
  ATerm h_47 = NULL;
  ATerm f_15;
  f_15 = t;
  {
    t = term_g_15;
    t = table_put_0(t);
  }
  t = f_15;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm h_15 = t;
      int j_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_70(t);
          LocalPopChoice(j_15);
        }
      else
        {
          t = h_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_2);
    {
      ATerm a_3 (ATerm t)
      {
        ATerm o_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_m_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(p_15);
          }
        else
          {
            t = o_15;
            {
              ATerm b_3 (ATerm t)
              {
                ATerm c_3 (ATerm t)
                {
                  ATerm i_47 = NULL;
                  i_47 = t;
                  if(((h_47 != NULL) && (h_47 != i_47)))
                    _fail(i_47);
                  else
                    h_47 = i_47;
                  return(t);
                }
                t = Undefined_1(t, c_3);
                return(t);
              }
              t = option_defined_1(t, b_3);
              {
                ATerm q_15;
                q_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_47)), term_r_15));
                  t = printnl_0(t);
                }
                t = q_15;
                {
                  t = system_usage_0(t);
                  {
                    t = term_c_7;
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
        ATerm x_15;
        x_15 = t;
        {
          t = term_r_13;
          t = table_destroy_0(t);
        }
        t = x_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_72(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, e_3);
  {
    t = store_options_0(t);
    {
      t = z_72(t);
      {
        ATerm a_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_72);
            LocalPopChoice(f_16);
          }
        else
          {
            t = a_16;
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, w_72);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm s_72 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      ATerm i_16;
      i_16 = t;
      {
        ATerm l_47 = NULL;
        ATerm m_47 = NULL;
        t = term_u_8;
        {
          t = get_config_0(t);
          {
            m_47 = t;
            if(((l_47 != NULL) && (l_47 != m_47)))
              _fail(m_47);
            else
              l_47 = m_47;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, not_null(l_47)));
          t = printnl_0(t);
        }
      }
      t = i_16;
      return(t);
    }
    t = if_verbose2_1(t, g_3);
    return(t);
  }
  t = iowrap_4(t, q_72, r_72, s_72, f_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_72 (ATerm), ATerm p_72 (ATerm))
{
  t = iowrap_3(t, o_72, p_72, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    t = _2(t, _id, l_72);
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
      ATerm u_47 = NULL;
      ATerm w_47 = NULL;
      u_47 = t;
      {
        ATerm x_47 = NULL;
        ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
        t = not_null(u_47);
        {
          x_47 = t;
          {
            t = SSL_explode_term(not_null(x_47));
            {
              z_47 = t;
              r_47 :
              if(match_cons(z_47, sym__2))
                {
                  a_48 = ATgetArgument(z_47, 0);
                  b_48 = ATgetArgument(z_47, 1);
                  s_47 :
                  if(((ATgetType(b_48) == AT_LIST) && ((ATermList) b_48 != ATempty)))
                    {
                      c_48 = ATgetFirst((ATermList) b_48);
                      d_48 = (ATerm) ATgetNext((ATermList) b_48);
                      t_47 :
                      if(((ATermList) d_48 == ATempty))
                        {
                          if(((w_47 != NULL) && (w_47 != c_48)))
                            _fail(c_48);
                          else
                            w_47 = c_48;
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
        t = not_null(w_47);
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
