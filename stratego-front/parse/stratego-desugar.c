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
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_ParenStrat_1;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
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
Symbol sym_Prim_2;
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
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_CallNoArgs_1;
Symbol sym_LRule_1;
Symbol sym_PrimNoArgs_1;
Symbol sym_Choice_2;
Symbol sym_RChoice_2;
Symbol sym_GChoice_2;
Symbol sym_RGChoice_2;
Symbol sym_AM_2;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_SRDef_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
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
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Star_0;
Symbol sym_StarStar_0;
Symbol sym_OpDecl_2;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Script_1;
Symbol sym_Command_1;
Symbol sym_Dump_1;
Symbol sym_Load_1;
Symbol sym_Eval_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_Imports_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
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
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
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
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
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
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
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
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
ATerm term_f_16;
ATerm term_q_15;
ATerm term_d_15;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_g_10;
ATerm term_x_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_r_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_i_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_q_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
void init_constant_terms (void)
{
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_5);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_Call_2, term_u_5, (ATerm) ATempty);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_5);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_Call_2, term_w_5, (ATerm) ATempty);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_6);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Op_2, term_t_5, (ATerm) ATempty);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Call_2, term_r_6, (ATerm) ATempty);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_r_8);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_8);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_n_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_n_12);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_d_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__3, term_z_13, term_d_14, (ATerm) ATempty);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm n_59 (ATerm), ATerm o_59 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm u_60 (ATerm), ATerm v_60 (ATerm));
ATerm SVar_1 (ATerm, ATerm p_55 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm m_55 (ATerm), ATerm n_55 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm), ATerm k_55 (ATerm));
ATerm RDef_3 (ATerm, ATerm o_58 (ATerm), ATerm p_58 (ATerm), ATerm q_58 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm l_55 (ATerm));
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_92 (ATerm));
ATerm at_last_1 (ATerm, ATerm y_84 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_1 (ATerm, ATerm l_76 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm x_91 (ATerm), ATerm y_91 (ATerm));
ATerm repeat_1 (ATerm, ATerm a_92 (ATerm));
ATerm topdown_1 (ATerm, ATerm q_88 (ATerm));
ATerm _2 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_74 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_71 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm));
ATerm crush_2 (ATerm, ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_71 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_76 (ATerm), ATerm z_76 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_73 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_84 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_70 (ATerm));
ATerm map_1 (ATerm, ATerm a_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_70 (ATerm));
ATerm Program_1 (ATerm, ATerm r_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_84 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_71 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_70 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_66 (ATerm), ATerm q_66 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_70 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm m_73 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_73 (ATerm), ATerm c_73 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_72 (ATerm));
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_n_3);
                }
              else
                {
                  if(match_int(r_4, 110))
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_o_3);
                    }
                  else
                    {
                      if(match_int(r_4, 92))
                        {
                          t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_p_3);
                        }
                      else
                        {
                          if(match_int(r_4, 34))
                            {
                              t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_q_3);
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
        ATerm r_3 = t;
        int s_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, b_5);
            LocalPopChoice(s_3);
          }
        else
          {
            t = r_3;
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
ATerm Op_2 (ATerm t, ATerm n_59 (ATerm), ATerm o_59 (ATerm))
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
            t = n_59(t);
            {
              g_6 = t;
              {
                t = not_null(a_6);
                {
                  ATerm k_6 = NULL;
                  t = o_59(t);
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
ATerm OpDecl_2 (ATerm t, ATerm u_60 (ATerm), ATerm v_60 (ATerm))
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
            t = u_60(t);
            {
              f_7 = t;
              {
                t = not_null(z_6);
                {
                  ATerm j_7 = NULL;
                  t = v_60(t);
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
ATerm SVar_1 (ATerm t, ATerm p_55 (ATerm))
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
            t = p_55(t);
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
        ATerm t_3 = t;
        int u_3 = stack_ptr;
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
            LocalPopChoice(u_3);
          }
        else
          {
            t = t_3;
            {
              ATerm v_3 = t;
              int w_3 = stack_ptr;
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
                  LocalPopChoice(w_3);
                }
              else
                {
                  t = v_3;
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
ATerm VarDec_2 (ATerm t, ATerm m_55 (ATerm), ATerm n_55 (ATerm))
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
            t = m_55(t);
            {
              w_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm a_11 = NULL;
                  t = n_55(t);
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
ATerm SDef_3 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm), ATerm k_55 (ATerm))
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
            t = i_55(t);
            {
              y_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm c_12 = NULL;
                  t = j_55(t);
                  {
                    a_12 = t;
                    {
                      t = not_null(r_11);
                      {
                        ATerm e_12 = NULL;
                        t = k_55(t);
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
ATerm RDef_3 (ATerm t, ATerm o_58 (ATerm), ATerm p_58 (ATerm), ATerm q_58 (ATerm))
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
            t = o_58(t);
            {
              d_13 = t;
              {
                t = not_null(v_12);
                {
                  ATerm h_13 = NULL;
                  t = p_58(t);
                  {
                    f_13 = t;
                    {
                      t = not_null(w_12);
                      {
                        ATerm j_13 = NULL;
                        t = q_58(t);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm l_55 (ATerm))
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
            t = l_55(t);
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
  ATerm x_3 = t;
  int y_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
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
            t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
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
                  t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
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
                        t = VarDec_2(t, RemoveLeadingPrime_0, _id);
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
                              t = Var_1(t, RemoveLeadingPrime_0);
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
                                    t = SVar_1(t, RemoveLeadingPrime_0);
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
                                          t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                          LocalPopChoice(t_4);
                                        }
                                      else
                                        {
                                          t = k_4;
                                          {
                                            ATerm u_4 = t;
                                            int v_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2(t, RemoveLeadingPrime_0, _id);
                                                LocalPopChoice(v_4);
                                              }
                                            else
                                              {
                                                t = u_4;
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
ATerm try_1 (ATerm t, ATerm u_92 (ATerm))
{
  ATerm w_4 = t;
  int x_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_92(t);
      LocalPopChoice(x_4);
    }
  else
    {
      t = w_4;
      {
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm i_15 (ATerm t)
  {
    ATerm y_4 = t;
    int z_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = y_84(t);
        LocalPopChoice(z_4);
      }
    else
      {
        t = y_4;
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
  ATerm a_5 = t;
  int c_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(c_5);
    }
  else
    {
      t = a_5;
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
ATerm unquote_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm j_16 = NULL;
  t = explode_string_0(t);
  {
    j_16 = t;
    {
      t = Hd_0(t);
      {
        t = l_76(t);
        {
          t = not_null(j_16);
          {
            t = last_0(t);
            {
              t = l_76(t);
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
      t = term_d_5;
    }
  else
    {
      if(match_string(k_17, "'\\r'"))
        {
          t = term_e_5;
        }
      else
        {
          if(match_string(k_17, "'\\t'"))
            {
              t = term_n_3;
            }
          else
            {
              if(match_string(k_17, "'\\n'"))
                {
                  t = term_o_3;
                }
              else
                {
                  if(match_string(k_17, "'\\''"))
                    {
                      t = term_i_5;
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
ATerm Snd_0 (ATerm t)
{
  ATerm x_17 = NULL;
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  x_17 = t;
  {
    ATerm c_18 = NULL;
    ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
    t = not_null(x_17);
    {
      c_18 = t;
      {
        t = SSL_explode_term(not_null(c_18));
        {
          e_18 = t;
          t_17 :
          if(match_cons(e_18, sym__2))
            {
              f_18 = ATgetArgument(e_18, 0);
              g_18 = ATgetArgument(e_18, 1);
              u_17 :
              if(match_string(f_18, ""))
                {
                  v_17 :
                  if(((ATgetType(g_18) == AT_LIST) && ((ATermList) g_18 != ATempty)))
                    {
                      h_18 = ATgetFirst((ATermList) g_18);
                      i_18 = (ATerm) ATgetNext((ATermList) g_18);
                      w_17 :
                      if(((ATgetType(i_18) == AT_LIST) && ((ATermList) i_18 != ATempty)))
                        {
                          j_18 = ATgetFirst((ATermList) i_18);
                          k_18 = (ATerm) ATgetNext((ATermList) i_18);
                          {
                            if(((z_17 != NULL) && (z_17 != h_18)))
                              _fail(h_18);
                            else
                              z_17 = h_18;
                            {
                              if(((b_18 != NULL) && (b_18 != j_18)))
                                _fail(j_18);
                              else
                                b_18 = j_18;
                              if(((a_18 != NULL) && (a_18 != k_18)))
                                _fail(k_18);
                              else
                                a_18 = k_18;
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
    t = not_null(b_18);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm u_18 = NULL;
  ATerm w_18 = NULL,x_18 = NULL;
  u_18 = t;
  {
    ATerm y_18 = NULL;
    ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
    t = not_null(u_18);
    {
      y_18 = t;
      {
        t = SSL_explode_term(not_null(y_18));
        {
          a_19 = t;
          r_18 :
          if(match_cons(a_19, sym__2))
            {
              b_19 = ATgetArgument(a_19, 0);
              c_19 = ATgetArgument(a_19, 1);
              s_18 :
              if(match_string(b_19, ""))
                {
                  t_18 :
                  if(((ATgetType(c_19) == AT_LIST) && ((ATermList) c_19 != ATempty)))
                    {
                      d_19 = ATgetFirst((ATermList) c_19);
                      e_19 = (ATerm) ATgetNext((ATermList) c_19);
                      {
                        if(((x_18 != NULL) && (x_18 != d_19)))
                          _fail(d_19);
                        else
                          x_18 = d_19;
                        if(((w_18 != NULL) && (w_18 != e_19)))
                          _fail(e_19);
                        else
                          w_18 = e_19;
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
    t = not_null(x_18);
  }
  return(t);
}
ATerm Desugar_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  ATerm k_25 (ATerm t)
  {
    t = not_null(r_21);
    {
      ATerm p_5 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_5;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_q_5, not_null(r_21));
    return(t);
  }
  ATerm l_25 (ATerm t)
  {
    t = not_null(m_21);
    return(t);
  }
  ATerm m_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(r_21)));
    return(t);
  }
  ATerm n_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(r_21)));
    return(t);
  }
  ATerm o_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_21)));
    return(t);
  }
  ATerm p_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_21)), (ATerm) ATempty);
    return(t);
  }
  ATerm q_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_21)), not_null(s_21));
    return(t);
  }
  ATerm r_25 (ATerm t)
  {
    t = not_null(r_21);
    {
      ATerm d_0 (ATerm t)
      {
        t = not_null(s_21);
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
        k_23 = t;
        a_21 :
        if(match_cons(k_23, sym__2))
          {
            l_23 = ATgetArgument(k_23, 0);
            m_23 = ATgetArgument(k_23, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_s_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_23)), not_null(l_23)));
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
  ATerm s_25 (ATerm t)
  {
    t = not_null(r_21);
    {
      ATerm f_0 (ATerm t)
      {
        t = term_v_5;
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
        q_23 = t;
        c_21 :
        if(match_cons(q_23, sym__2))
          {
            r_23 = ATgetArgument(q_23, 0);
            s_23 = ATgetArgument(q_23, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_s_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_23)), not_null(r_23)));
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
  ATerm t_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_w_5, (ATerm) ATinsert(CheckATermList(not_null(s_21)), not_null(r_21)));
    return(t);
  }
  ATerm u_25 (ATerm t)
  {
    t = not_null(r_21);
    {
      ATerm b_6 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_6;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_w_5, not_null(r_21));
    return(t);
  }
  ATerm v_25 (ATerm t)
  {
    t = not_null(m_21);
    return(t);
  }
  ATerm w_25 (ATerm t)
  {
    t = term_c_6;
    return(t);
  }
  ATerm x_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_21)), not_null(r_21)));
    return(t);
  }
  ATerm y_25 (ATerm t)
  {
    t = not_null(r_21);
    return(t);
  }
  ATerm z_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(r_21), not_null(s_21), term_j_6);
    return(t);
  }
  ATerm a_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_21), not_null(s_21), term_j_6);
    return(t);
  }
  ATerm b_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(r_21), (ATerm)ATempty, not_null(s_21));
    return(t);
  }
  ATerm c_26 (ATerm t)
  {
    ATerm k_24 = NULL;
    ATerm l_24 = NULL;
    t = not_null(r_21);
    {
      t = un_double_quote_0(t);
      {
        l_24 = t;
        if(((k_24 != NULL) && (k_24 != l_24)))
          _fail(l_24);
        else
          k_24 = l_24;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(k_24), not_null(s_21));
    return(t);
  }
  ATerm d_26 (ATerm t)
  {
    ATerm n_24 = NULL;
    ATerm o_24 = NULL;
    t = not_null(r_21);
    {
      t = un_double_quote_0(t);
      {
        o_24 = t;
        if(((n_24 != NULL) && (n_24 != o_24)))
          _fail(o_24);
        else
          n_24 = o_24;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(n_24), (ATerm) ATempty);
    return(t);
  }
  ATerm l_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(r_21), (ATerm) ATempty);
    return(t);
  }
  ATerm m_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_21), (ATerm)ATempty, not_null(s_21));
    return(t);
  }
  ATerm n_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_21), not_null(s_21), not_null(p_21));
    return(t);
  }
  ATerm o_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_21), (ATerm)ATempty, not_null(s_21));
    return(t);
  }
  ATerm p_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_21), (ATerm)ATempty, not_null(s_21));
    return(t);
  }
  ATerm q_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(s_21));
    return(t);
  }
  q_21 = t;
  f_21 :
  if(match_cons(q_21, sym_Anno_2))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      {
        ATerm v_21 = NULL;
        ATerm a_22 = NULL;
        t = not_null(s_21);
        {
          ATerm o_0 (ATerm t)
          {
            t = term_m_6;
            return(t);
          }
          ATerm p_0 (ATerm t)
          {
            ATerm w_21 = NULL,y_21 = NULL;
            ATerm n_6;
            n_6 = t;
            {
              ATerm x_21 = NULL;
              t = Fst_0(t);
              {
                x_21 = t;
                if(((w_21 != NULL) && (w_21 != x_21)))
                  _fail(x_21);
                else
                  w_21 = x_21;
              }
            }
            t = n_6;
            {
              ATerm z_21 = NULL;
              t = Snd_0(t);
              {
                z_21 = t;
                if(((y_21 != NULL) && (y_21 != z_21)))
                  _fail(z_21);
                else
                  y_21 = z_21;
              }
              t = (ATerm) ATmakeAppl(sym_Op_2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), not_null(w_21)));
            }
            return(t);
          }
          t = foldr_2(t, o_0, p_0);
          {
            a_22 = t;
            if(((v_21 != NULL) && (v_21 != a_22)))
              _fail(a_22);
            else
              v_21 = a_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(r_21), not_null(v_21));
      }
    }
  else
    {
      if(match_cons(q_21, sym_SortNoArgs_1))
        {
          r_21 = ATgetArgument(q_21, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(r_21), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(q_21, sym_Char_1))
            {
              r_21 = ATgetArgument(q_21, 0);
              {
                ATerm d_22 = NULL;
                ATerm e_22 = NULL;
                t = not_null(r_21);
                {
                  ATerm o_6 = t;
                  int p_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = DesugarChar_0(t);
                      LocalPopChoice(p_6);
                    }
                  else
                    {
                      t = o_6;
                      {
                        t = explode_string_0(t);
                        t = DesugarCharGeneric_0(t);
                      }
                    }
                  {
                    e_22 = t;
                    if(((d_22 != NULL) && (d_22 != e_22)))
                      _fail(e_22);
                    else
                      d_22 = e_22;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(d_22));
              }
            }
          else
            {
              if(match_cons(q_21, sym_Con4_4))
                {
                  r_21 = ATgetArgument(q_21, 0);
                  s_21 = ATgetArgument(q_21, 1);
                  p_21 = ATgetArgument(q_21, 2);
                  l_21 = ATgetArgument(q_21, 3);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(r_21), not_null(p_21), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_21)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(q_21, sym_Con3_3))
                    {
                      r_21 = ATgetArgument(q_21, 0);
                      s_21 = ATgetArgument(q_21, 1);
                      p_21 = ATgetArgument(q_21, 2);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(r_21), not_null(p_21), term_s_6);
                    }
                  else
                    {
                      if(match_cons(q_21, sym_Con1_2))
                        {
                          r_21 = ATgetArgument(q_21, 0);
                          s_21 = ATgetArgument(q_21, 1);
                          t = (ATerm) ATmakeAppl(sym_Con_3, not_null(r_21), not_null(s_21), term_s_6);
                        }
                      else
                        {
                          if(match_cons(q_21, sym_ListTail_2))
                            {
                              r_21 = ATgetArgument(q_21, 0);
                              s_21 = ATgetArgument(q_21, 1);
                              {
                                t = not_null(r_21);
                                {
                                  ATerm q_0 (ATerm t)
                                  {
                                    t = not_null(s_21);
                                    return(t);
                                  }
                                  ATerm r_0 (ATerm t)
                                  {
                                    ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
                                    p_22 = t;
                                    w_20 :
                                    if(match_cons(p_22, sym__2))
                                      {
                                        q_22 = ATgetArgument(p_22, 0);
                                        r_22 = ATgetArgument(p_22, 1);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_22)), not_null(q_22)));
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
                              if(match_cons(q_21, sym_List_1))
                                {
                                  r_21 = ATgetArgument(q_21, 0);
                                  {
                                    t = not_null(r_21);
                                    {
                                      ATerm s_0 (ATerm t)
                                      {
                                        t = term_m_6;
                                        return(t);
                                      }
                                      ATerm t_0 (ATerm t)
                                      {
                                        ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
                                        v_22 = t;
                                        y_20 :
                                        if(match_cons(v_22, sym__2))
                                          {
                                            w_22 = ATgetArgument(v_22, 0);
                                            x_22 = ATgetArgument(v_22, 1);
                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_22)), not_null(w_22)));
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = foldr_2(t, s_0, t_0);
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(q_21, sym_Tuple_1))
                                    {
                                      r_21 = ATgetArgument(q_21, 0);
                                      g_21 :
                                      if(((ATgetType(r_21) == AT_LIST) && ((ATermList) r_21 != ATempty)))
                                        {
                                          m_21 = ATgetFirst((ATermList) r_21);
                                          n_21 = (ATerm) ATgetNext((ATermList) r_21);
                                          h_21 :
                                          if(((ATermList) n_21 == ATempty))
                                            {
                                              {
                                                ATerm t_6 = t;
                                                int u_6 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = k_25(t);
                                                    LocalPopChoice(u_6);
                                                  }
                                                else
                                                  {
                                                    t = t_6;
                                                    t = l_25(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              t = k_25(t);
                                            }
                                        }
                                      else
                                        {
                                          t = k_25(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(q_21, sym_RealCong_1))
                                        {
                                          r_21 = ATgetArgument(q_21, 0);
                                          t = m_25(t);
                                        }
                                      else
                                        {
                                          if(match_cons(q_21, sym_IntCong_1))
                                            {
                                              r_21 = ATgetArgument(q_21, 0);
                                              t = n_25(t);
                                            }
                                          else
                                            {
                                              if(match_cons(q_21, sym_StrCong_1))
                                                {
                                                  r_21 = ATgetArgument(q_21, 0);
                                                  t = o_25(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(q_21, sym_ModCongNoArgs_1))
                                                    {
                                                      r_21 = ATgetArgument(q_21, 0);
                                                      t = p_25(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(q_21, sym_ModCong_2))
                                                        {
                                                          r_21 = ATgetArgument(q_21, 0);
                                                          s_21 = ATgetArgument(q_21, 1);
                                                          t = q_25(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(q_21, sym_ListCong_2))
                                                            {
                                                              r_21 = ATgetArgument(q_21, 0);
                                                              s_21 = ATgetArgument(q_21, 1);
                                                              t = r_25(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(q_21, sym_ListCongNoTail_1))
                                                                {
                                                                  r_21 = ATgetArgument(q_21, 0);
                                                                  t = s_25(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(q_21, sym_TupleCong_2))
                                                                    {
                                                                      r_21 = ATgetArgument(q_21, 0);
                                                                      s_21 = ATgetArgument(q_21, 1);
                                                                      t = t_25(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(q_21, sym_TupleCong_1))
                                                                        {
                                                                          r_21 = ATgetArgument(q_21, 0);
                                                                          i_21 :
                                                                          if(((ATgetType(r_21) == AT_LIST) && ((ATermList) r_21 != ATempty)))
                                                                            {
                                                                              m_21 = ATgetFirst((ATermList) r_21);
                                                                              n_21 = (ATerm) ATgetNext((ATermList) r_21);
                                                                              j_21 :
                                                                              if(((ATermList) n_21 == ATempty))
                                                                                {
                                                                                  {
                                                                                    ATerm v_6 = t;
                                                                                    int a_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = u_25(t);
                                                                                        LocalPopChoice(a_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_6;
                                                                                        t = v_25(t);
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_25(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_25(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(q_21, sym_TupleCong_0))
                                                                            {
                                                                              t = w_25(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(q_21, sym_AnnoCong_2))
                                                                                {
                                                                                  r_21 = ATgetArgument(q_21, 0);
                                                                                  s_21 = ATgetArgument(q_21, 1);
                                                                                  k_21 :
                                                                                  if(match_cons(s_21, sym_StrategyCurly_1))
                                                                                    {
                                                                                      o_21 = ATgetArgument(s_21, 0);
                                                                                      t = x_25(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(q_21, sym_ParenStrat_1))
                                                                                    {
                                                                                      r_21 = ATgetArgument(q_21, 0);
                                                                                      t = y_25(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(q_21, sym_StratRuleNoCond_2))
                                                                                        {
                                                                                          r_21 = ATgetArgument(q_21, 0);
                                                                                          s_21 = ATgetArgument(q_21, 1);
                                                                                          t = z_25(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(q_21, sym_RuleNoCond_2))
                                                                                            {
                                                                                              r_21 = ATgetArgument(q_21, 0);
                                                                                              s_21 = ATgetArgument(q_21, 1);
                                                                                              t = a_26(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(q_21, sym_OverlayNoArgs_2))
                                                                                                {
                                                                                                  r_21 = ATgetArgument(q_21, 0);
                                                                                                  s_21 = ATgetArgument(q_21, 1);
                                                                                                  t = b_26(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(q_21, sym_Prim_2))
                                                                                                    {
                                                                                                      r_21 = ATgetArgument(q_21, 0);
                                                                                                      s_21 = ATgetArgument(q_21, 1);
                                                                                                      t = c_26(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(q_21, sym_PrimNoArgs_1))
                                                                                                        {
                                                                                                          r_21 = ATgetArgument(q_21, 0);
                                                                                                          t = d_26(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(q_21, sym_CallNoArgs_1))
                                                                                                            {
                                                                                                              r_21 = ATgetArgument(q_21, 0);
                                                                                                              t = l_26(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(q_21, sym_SDefNoArgs_2))
                                                                                                                {
                                                                                                                  r_21 = ATgetArgument(q_21, 0);
                                                                                                                  s_21 = ATgetArgument(q_21, 1);
                                                                                                                  t = m_26(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(q_21, sym_SRDef_3))
                                                                                                                    {
                                                                                                                      r_21 = ATgetArgument(q_21, 0);
                                                                                                                      s_21 = ATgetArgument(q_21, 1);
                                                                                                                      p_21 = ATgetArgument(q_21, 2);
                                                                                                                      t = n_26(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(q_21, sym_SRDefNoArgs_2))
                                                                                                                        {
                                                                                                                          r_21 = ATgetArgument(q_21, 0);
                                                                                                                          s_21 = ATgetArgument(q_21, 1);
                                                                                                                          t = o_26(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(q_21, sym_RDefNoArgs_2))
                                                                                                                            {
                                                                                                                              r_21 = ATgetArgument(q_21, 0);
                                                                                                                              s_21 = ATgetArgument(q_21, 1);
                                                                                                                              t = p_26(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(q_21, sym_Module_2))
                                                                                                                                {
                                                                                                                                  r_21 = ATgetArgument(q_21, 0);
                                                                                                                                  s_21 = ATgetArgument(q_21, 1);
                                                                                                                                  t = q_26(t);
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
                }
            }
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm x_91 (ATerm), ATerm y_91 (ATerm))
{
  ATerm e_27 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_91(t);
        t = e_27(t);
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = y_91(t);
      }
    return(t);
  }
  t = e_27(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm a_92 (ATerm))
{
  t = repeat_2(t, a_92, _id);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm q_88 (ATerm))
{
  t = q_88(t);
  {
    ATerm u_0 (ATerm t)
    {
      t = topdown_1(t, q_88);
      return(t);
    }
    t = _all(t, u_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm))
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym__2))
    {
      m_27 = ATgetArgument(l_27, 0);
      n_27 = ATgetArgument(l_27, 1);
      {
        ATerm r_27 = NULL,u_27 = NULL;
        ATerm s_27 = NULL;
        t = SSLgetAnnotations(not_null(l_27));
        {
          s_27 = t;
          if(((r_27 != NULL) && (r_27 != s_27)))
            _fail(s_27);
          else
            r_27 = s_27;
        }
        {
          t = not_null(m_27);
          {
            ATerm w_27 = NULL;
            t = x_53(t);
            {
              u_27 = t;
              {
                t = not_null(n_27);
                {
                  ATerm y_27 = NULL;
                  t = y_53(t);
                  {
                    w_27 = t;
                    {
                      ATerm z_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_27), not_null(w_27)), not_null(r_27));
                      {
                        z_27 = t;
                        if(((y_27 != NULL) && (y_27 != z_27)))
                          _fail(z_27);
                        else
                          y_27 = z_27;
                      }
                      t = not_null(y_27);
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
  ATerm h_28 = NULL;
  ATerm g_7;
  g_7 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm i_28 = NULL,j_28 = NULL;
      i_28 = t;
      g_28 :
      if(match_cons(i_28, sym_Program_1))
        {
          j_28 = ATgetArgument(i_28, 0);
          if(((h_28 != NULL) && (h_28 != j_28)))
            _fail(j_28);
          else
            h_28 = j_28;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, v_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_7), not_null(h_28)), term_l_7));
      {
        t = printnl_0(t);
        {
          t = term_n_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  n_28 = t;
  m_28 :
  if(match_cons(n_28, sym__2))
    {
      o_28 = ATgetArgument(n_28, 0);
      p_28 = ATgetArgument(n_28, 1);
      {
        ATerm o_7;
        o_7 = t;
        t = SSL_printnl(not_null(o_28), not_null(p_28));
        t = o_7;
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
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym__2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      {
        t = not_null(w_28);
        {
          ATerm w_0 (ATerm t)
          {
            t = not_null(x_28);
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
ATerm debug_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm p_7;
  p_7 = t;
  {
    ATerm d_29 = NULL,f_29 = NULL;
    ATerm q_7;
    q_7 = t;
    {
      ATerm e_29 = NULL;
      t = n_74(t);
      {
        e_29 = t;
        if(((d_29 != NULL) && (d_29 != e_29)))
          _fail(e_29);
        else
          d_29 = e_29;
      }
    }
    t = q_7;
    {
      ATerm o_29 = NULL;
      o_29 = t;
      if(((f_29 != NULL) && (f_29 != o_29)))
        _fail(o_29);
      else
        f_29 = o_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_29)), not_null(d_29)));
        t = printnl_0(t);
      }
    }
  }
  t = p_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  t = SSL_is_string(not_null(s_29));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
        ATerm t_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_0);
            LocalPopChoice(x_7);
          }
        else
          {
            t = t_7;
            {
              ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
              d_30 = t;
              c_30 :
              if(match_cons(d_30, sym_Path_1))
                {
                  e_30 = ATgetArgument(d_30, 0);
                  t = not_null(e_30);
                }
              else
                {
                  if(match_cons(d_30, sym_Var_1))
                    {
                      e_30 = ATgetArgument(d_30, 0);
                      {
                        t = not_null(e_30);
                        {
                          ATerm y_7 = t;
                          int c_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_8);
                            }
                          else
                            {
                              t = y_7;
                              {
                                ATerm y_0 (ATerm t)
                                {
                                  t = term_f_8;
                                  return(t);
                                }
                                t = debug_1(t, y_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_30, sym_Prefix_2))
                        {
                          e_30 = ATgetArgument(d_30, 0);
                          f_30 = ATgetArgument(d_30, 1);
                          {
                            ATerm k_30 = NULL,o_30 = NULL;
                            ATerm g_8;
                            g_8 = t;
                            {
                              ATerm n_30 = NULL;
                              t = not_null(e_30);
                              {
                                t = eval_config_0(t);
                                {
                                  n_30 = t;
                                  if(((k_30 != NULL) && (k_30 != n_30)))
                                    _fail(n_30);
                                  else
                                    k_30 = n_30;
                                }
                              }
                            }
                            t = g_8;
                            {
                              ATerm p_30 = NULL;
                              t = not_null(f_30);
                              {
                                t = eval_config_0(t);
                                {
                                  p_30 = t;
                                  if(((o_30 != NULL) && (o_30 != p_30)))
                                    _fail(p_30);
                                  else
                                    o_30 = p_30;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), not_null(o_30));
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
  ATerm j_31 = NULL;
  j_31 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_8, not_null(j_31));
    {
      t = table_get_0(t);
      {
        ATerm z_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_8;
            i_8 = t;
            {
              ATerm l_31 = NULL;
              ATerm m_31 = NULL;
              m_31 = t;
              if(((l_31 != NULL) && (l_31 != m_31)))
                _fail(m_31);
              else
                l_31 = m_31;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_8, not_null(j_31), not_null(l_31));
                t = table_put_0(t);
              }
            }
            t = i_8;
          }
          return(t);
        }
        t = try_1(t, z_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm j_8;
    j_8 = t;
    {
      ATerm q_31 = NULL;
      ATerm s_31 = NULL;
      t = term_k_8;
      {
        t = get_config_0(t);
        {
          s_31 = t;
          if(((q_31 != NULL) && (q_31 != s_31)))
            _fail(s_31);
          else
            q_31 = s_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_31), term_l_8);
        t = geq_0(t);
      }
    }
    t = j_8;
    t = x_71(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATempty, term_m_8));
  {
    t = printnl_0(t);
    {
      t = term_n_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  t = SSL_TicksToSeconds(not_null(v_31));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_cons(a_32, sym__2))
    {
      b_32 = ATgetArgument(a_32, 0);
      c_32 = ATgetArgument(a_32, 1);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_32), not_null(c_32));
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = SSL_addr(not_null(b_32), not_null(c_32));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm))
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_78(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
        j_32 = t;
        i_32 :
        if(((ATgetType(j_32) == AT_LIST) && ((ATermList) j_32 != ATempty)))
          {
            k_32 = ATgetFirst((ATermList) j_32);
            l_32 = (ATerm) ATgetNext((ATermList) j_32);
            {
              ATerm o_32 = NULL;
              ATerm p_32 = NULL;
              t = not_null(l_32);
              {
                t = foldr_2(t, k_78, l_78);
                {
                  p_32 = t;
                  if(((o_32 != NULL) && (o_32 != p_32)))
                    _fail(p_32);
                  else
                    o_32 = p_32;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_32), not_null(o_32));
                t = l_78(t);
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
ATerm crush_2 (ATerm t, ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  ATerm w_32 = NULL;
  ATerm y_32 = NULL;
  w_32 = t;
  {
    ATerm z_32 = NULL;
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
    t = not_null(w_32);
    {
      z_32 = t;
      {
        t = SSL_explode_term(not_null(z_32));
        {
          b_33 = t;
          v_32 :
          if(match_cons(b_33, sym__2))
            {
              c_33 = ATgetArgument(b_33, 0);
              d_33 = ATgetArgument(b_33, 1);
              if(((y_32 != NULL) && (y_32 != d_33)))
                _fail(d_33);
              else
                y_32 = d_33;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_32);
      t = foldr_2(t, c_80, d_80);
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
    ATerm b_1 (ATerm t)
    {
      t = term_r_8;
      return(t);
    }
    t = crush_2(t, b_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  i_33 :
  if(match_cons(j_33, sym__2))
    {
      k_33 = ATgetArgument(j_33, 0);
      l_33 = ATgetArgument(j_33, 1);
      {
        ATerm s_8;
        s_8 = t;
        {
          ATerm t_8 = t;
          int u_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_33), not_null(l_33));
              LocalPopChoice(u_8);
            }
          else
            {
              t = t_8;
              t = SSL_gtr(not_null(k_33), not_null(l_33));
            }
        }
        t = s_8;
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
  ATerm r_33 = NULL;
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_33 = NULL,v_33 = NULL,w_33 = NULL;
      s_33 = t;
      q_33 :
      if(match_cons(s_33, sym__2))
        {
          v_33 = ATgetArgument(s_33, 0);
          w_33 = ATgetArgument(s_33, 1);
          {
            if(((r_33 != NULL) && (r_33 != v_33)))
              _fail(v_33);
            else
              r_33 = v_33;
            if(((r_33 != NULL) && (r_33 != w_33)))
              _fail(w_33);
            else
              r_33 = w_33;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_71 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_9;
    d_9 = t;
    {
      ATerm e_34 = NULL;
      ATerm f_34 = NULL;
      t = term_k_8;
      {
        t = get_config_0(t);
        {
          f_34 = t;
          if(((e_34 != NULL) && (e_34 != f_34)))
            _fail(f_34);
          else
            e_34 = f_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_34), term_n_7);
        t = geq_0(t);
      }
    }
    t = d_9;
    t = w_71(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm j_34 = NULL,l_34 = NULL;
    ATerm g_9;
    g_9 = t;
    {
      ATerm k_34 = NULL;
      t = run_time_0(t);
      {
        k_34 = t;
        if(((j_34 != NULL) && (j_34 != k_34)))
          _fail(k_34);
        else
          j_34 = k_34;
      }
    }
    t = g_9;
    {
      ATerm n_34 = NULL;
      t = term_h_9;
      {
        t = get_config_0(t);
        {
          n_34 = t;
          if(((l_34 != NULL) && (l_34 != n_34)))
            _fail(n_34);
          else
            l_34 = n_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_9), not_null(j_34)), term_l_9), not_null(l_34)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_1);
  {
    t = term_r_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(match_cons(s_34, sym__2))
    {
      t_34 = ATgetArgument(s_34, 0);
      u_34 = ATgetArgument(s_34, 1);
      t = SSL_WriteToTextFile(not_null(t_34), not_null(u_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      t = SSL_WriteToBinaryFile(not_null(b_35), not_null(c_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_35 = NULL;
  ATerm p_9;
  p_9 = t;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm t_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_1 (ATerm t)
          {
            ATerm n_35 = NULL,o_35 = NULL;
            n_35 = t;
            j_35 :
            if(match_cons(n_35, sym_Output_1))
              {
                o_35 = ATgetArgument(n_35, 0);
                if(((m_35 != NULL) && (m_35 != o_35)))
                  _fail(o_35);
                else
                  m_35 = o_35;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, f_1);
          LocalPopChoice(w_9);
        }
      else
        {
          t = t_9;
          {
            ATerm p_35 = NULL;
            t = term_x_9;
            {
              p_35 = t;
              if(((m_35 != NULL) && (m_35 != p_35)))
                _fail(p_35);
              else
                m_35 = p_35;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_1, _id);
  }
  t = p_9;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm h_1 (ATerm t)
      {
        t = not_null(m_35);
        return(t);
      }
      t = split_2(t, h_1, _id);
      return(t);
    }
    t = _2(t, _id, g_1);
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_1 (ATerm t)
          {
            ATerm j_1 (ATerm t)
            {
              ATerm q_35 = NULL;
              q_35 = t;
              l_35 :
              if(!(match_cons(q_35, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, j_1);
            return(t);
          }
          t = _2(t, i_1, WriteToBinaryFile_0);
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_73 (ATerm))
{
  ATerm w_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  ATerm a_10;
  a_10 = t;
  t = dtime_0(t);
  t = a_10;
  {
    t = x_73(t);
    {
      ATerm b_10;
      b_10 = t;
      {
        ATerm x_35 = NULL;
        t = dtime_0(t);
        {
          x_35 = t;
          if(((w_35 != NULL) && (w_35 != x_35)))
            _fail(x_35);
          else
            w_35 = x_35;
        }
      }
      t = b_10;
      {
        y_35 = t;
        v_35 :
        if(match_cons(y_35, sym__2))
          {
            z_35 = ATgetArgument(y_35, 0);
            a_36 = ATgetArgument(y_35, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_35)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_35))), not_null(a_36));
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
  ATerm i_36 = NULL;
  i_36 = t;
  t = SSL_ReadFromFile(not_null(i_36));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_76 (ATerm), ATerm z_76 (ATerm))
{
  ATerm p_36 = NULL,r_36 = NULL;
  ATerm c_10;
  c_10 = t;
  {
    ATerm q_36 = NULL;
    t = y_76(t);
    {
      q_36 = t;
      if(((p_36 != NULL) && (p_36 != q_36)))
        _fail(q_36);
      else
        p_36 = q_36;
    }
  }
  t = c_10;
  {
    ATerm s_36 = NULL;
    t = z_76(t);
    {
      s_36 = t;
      if(((r_36 != NULL) && (r_36 != s_36)))
        _fail(s_36);
      else
        r_36 = s_36;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), not_null(r_36));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_36 = NULL;
  ATerm d_10;
  d_10 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          ATerm z_36 = NULL,a_37 = NULL;
          z_36 = t;
          w_36 :
          if(match_cons(z_36, sym_Input_1))
            {
              a_37 = ATgetArgument(z_36, 0);
              if(((y_36 != NULL) && (y_36 != a_37)))
                _fail(a_37);
              else
                y_36 = a_37;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_1);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm b_37 = NULL;
          t = term_g_10;
          {
            b_37 = t;
            if(((y_36 != NULL) && (y_36 != b_37)))
              _fail(b_37);
            else
              y_36 = b_37;
          }
        }
      }
  }
  t = d_10;
  {
    ATerm l_1 (ATerm t)
    {
      t = not_null(y_36);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  h_37 :
  if(match_cons(i_37, sym_Version_0))
    {
      ATerm k_37 = NULL,m_37 = NULL;
      ATerm h_10;
      h_10 = t;
      {
        ATerm l_37 = NULL;
        t = SSLgetAnnotations(not_null(i_37));
        {
          l_37 = t;
          if(((k_37 != NULL) && (k_37 != l_37)))
            _fail(l_37);
          else
            k_37 = l_37;
        }
      }
      t = h_10;
      {
        ATerm n_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_37));
        {
          n_37 = t;
          if(((m_37 != NULL) && (m_37 != n_37)))
            _fail(n_37);
          else
            m_37 = n_37;
        }
        t = not_null(m_37);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm m_1 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_1);
  t = v_73(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  t = SSL_table_create(not_null(s_37));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_37 = NULL;
  w_37 = t;
  {
    ATerm m_10;
    m_10 = t;
    {
      t = term_r_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_10, term_s_10, not_null(w_37));
          t = table_put_0(t);
        }
      }
    }
    t = m_10;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  t = SSL_string_to_int(not_null(d_38));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  p_38 = t;
  n_38 :
  if(match_string(p_38, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(p_38) == AT_LIST) && ((ATermList) p_38 != ATempty)))
        {
          q_38 = ATgetFirst((ATermList) p_38);
          r_38 = (ATerm) ATgetNext((ATermList) p_38);
          o_38 :
          if(((ATgetType(r_38) == AT_LIST) && ((ATermList) r_38 != ATempty)))
            {
              s_38 = ATgetFirst((ATermList) r_38);
              t_38 = (ATerm) ATgetNext((ATermList) r_38);
              {
                ATerm x_38 = NULL;
                ATerm t_10;
                t_10 = t;
                {
                  t = not_null(q_38);
                  t = j_0(t);
                }
                t = t_10;
                {
                  ATerm y_38 = NULL;
                  t = not_null(s_38);
                  {
                    t = k_0(t);
                    {
                      y_38 = t;
                      if(((x_38 != NULL) && (x_38 != y_38)))
                        _fail(y_38);
                      else
                        x_38 = y_38;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_38)), not_null(x_38));
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
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm s_39 = NULL;
        s_39 = t;
        c_39 :
        if(!(match_string(s_39, "-i")))
          {
            if(!(match_string(s_39, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        ATerm v_39 = NULL;
        ATerm c_11;
        c_11 = t;
        {
          ATerm t_39 = NULL;
          ATerm u_39 = NULL;
          u_39 = t;
          if(((t_39 != NULL) && (t_39 != u_39)))
            _fail(u_39);
          else
            t_39 = u_39;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_d_11, not_null(t_39));
            t = set_config_0(t);
          }
        }
        t = c_11;
        {
          ATerm w_39 = NULL;
          w_39 = t;
          if(((v_39 != NULL) && (v_39 != w_39)))
            _fail(w_39);
          else
            v_39 = w_39;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_39));
        }
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_e_11;
        return(t);
      }
      t = ArgOption_3(t, n_1, o_1, p_1);
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
            ATerm q_1 (ATerm t)
            {
              ATerm x_39 = NULL;
              x_39 = t;
              f_39 :
              if(!(match_string(x_39, "-o")))
                {
                  if(!(match_string(x_39, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              ATerm a_40 = NULL;
              ATerm h_11;
              h_11 = t;
              {
                ATerm y_39 = NULL;
                ATerm z_39 = NULL;
                z_39 = t;
                if(((y_39 != NULL) && (y_39 != z_39)))
                  _fail(z_39);
                else
                  y_39 = z_39;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(y_39));
                  t = set_config_0(t);
                }
              }
              t = h_11;
              {
                ATerm b_40 = NULL;
                b_40 = t;
                if(((a_40 != NULL) && (a_40 != b_40)))
                  _fail(b_40);
                else
                  a_40 = b_40;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_40));
              }
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              t = term_j_11;
              return(t);
            }
            t = ArgOption_3(t, q_1, r_1, s_1);
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
                  ATerm t_1 (ATerm t)
                  {
                    ATerm c_40 = NULL;
                    c_40 = t;
                    i_39 :
                    if(!(match_string(c_40, "-S")))
                      {
                        if(!(match_string(c_40, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_1 (ATerm t)
                  {
                    t = term_m_11;
                    t = set_config_0(t);
                    t = term_s_11;
                    return(t);
                  }
                  ATerm v_1 (ATerm t)
                  {
                    t = term_t_11;
                    return(t);
                  }
                  t = Option_3(t, t_1, u_1, v_1);
                  LocalPopChoice(l_11);
                }
              else
                {
                  t = k_11;
                  {
                    ATerm u_11 = t;
                    int v_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_1 (ATerm t)
                        {
                          ATerm d_40 = NULL;
                          d_40 = t;
                          j_39 :
                          if(!(match_string(d_40, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          ATerm g_40 = NULL;
                          ATerm z_11;
                          z_11 = t;
                          {
                            ATerm e_40 = NULL;
                            ATerm f_40 = NULL;
                            t = string_to_int_0(t);
                            {
                              f_40 = t;
                              if(((e_40 != NULL) && (e_40 != f_40)))
                                _fail(f_40);
                              else
                                e_40 = f_40;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(e_40));
                              t = set_config_0(t);
                            }
                          }
                          t = z_11;
                          {
                            ATerm h_40 = NULL;
                            h_40 = t;
                            if(((g_40 != NULL) && (g_40 != h_40)))
                              _fail(h_40);
                            else
                              g_40 = h_40;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_40));
                          }
                          return(t);
                        }
                        ATerm y_1 (ATerm t)
                        {
                          t = term_b_12;
                          return(t);
                        }
                        t = ArgOption_3(t, w_1, x_1, y_1);
                        LocalPopChoice(v_11);
                      }
                    else
                      {
                        t = u_11;
                        {
                          ATerm d_12 = t;
                          int g_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_1 (ATerm t)
                              {
                                ATerm i_40 = NULL;
                                i_40 = t;
                                n_39 :
                                if(!(match_string(i_40, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm a_2 (ATerm t)
                              {
                                ATerm h_12;
                                h_12 = t;
                                {
                                  ATerm j_40 = NULL;
                                  ATerm k_40 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    k_40 = t;
                                    if(((j_40 != NULL) && (j_40 != k_40)))
                                      _fail(k_40);
                                    else
                                      j_40 = k_40;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_i_12, not_null(j_40));
                                    t = set_config_0(t);
                                  }
                                }
                                t = h_12;
                                return(t);
                              }
                              ATerm b_2 (ATerm t)
                              {
                                t = term_j_12;
                                return(t);
                              }
                              t = ArgOption_3(t, z_1, a_2, b_2);
                              LocalPopChoice(g_12);
                            }
                          else
                            {
                              t = d_12;
                              {
                                ATerm k_12 = t;
                                int l_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_2 (ATerm t)
                                    {
                                      ATerm l_40 = NULL;
                                      l_40 = t;
                                      p_39 :
                                      if(!(match_string(l_40, "-v")))
                                        {
                                          if(!(match_string(l_40, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm d_2 (ATerm t)
                                    {
                                      t = term_o_12;
                                      t = set_config_0(t);
                                      t = term_p_12;
                                      return(t);
                                    }
                                    ATerm e_2 (ATerm t)
                                    {
                                      t = term_q_12;
                                      return(t);
                                    }
                                    t = Option_3(t, c_2, d_2, e_2);
                                    LocalPopChoice(l_12);
                                  }
                                else
                                  {
                                    t = k_12;
                                    {
                                      ATerm r_12 = t;
                                      int x_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_2 (ATerm t)
                                          {
                                            ATerm m_40 = NULL;
                                            m_40 = t;
                                            q_39 :
                                            if(!(match_string(m_40, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm g_2 (ATerm t)
                                          {
                                            t = term_z_12;
                                            t = set_config_0(t);
                                            t = term_a_13;
                                            return(t);
                                          }
                                          ATerm h_2 (ATerm t)
                                          {
                                            t = term_e_13;
                                            return(t);
                                          }
                                          t = Option_3(t, f_2, g_2, h_2);
                                          LocalPopChoice(x_12);
                                        }
                                      else
                                        {
                                          t = r_12;
                                          {
                                            ATerm i_2 (ATerm t)
                                            {
                                              ATerm n_40 = NULL;
                                              n_40 = t;
                                              r_39 :
                                              if(!(match_string(n_40, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm j_2 (ATerm t)
                                            {
                                              t = term_i_13;
                                              t = set_config_0(t);
                                              t = term_l_13;
                                              return(t);
                                            }
                                            ATerm k_2 (ATerm t)
                                            {
                                              t = term_m_13;
                                              return(t);
                                            }
                                            t = Option_3(t, i_2, j_2, k_2);
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
  ATerm w_40 = NULL;
  w_40 = t;
  t = SSL_table_destroy(not_null(w_40));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_41 = NULL;
  a_41 = t;
  t = SSL_exit(not_null(a_41));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  t = SSL_implode_string(not_null(e_41));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_84 (ATerm))
{
  ATerm h_41 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_41);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          t = Nil_0(t);
          t = p_84(t);
        }
      }
    return(t);
  }
  t = h_41(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
        k_41 = t;
        j_41 :
        if(((ATgetType(k_41) == AT_LIST) && ((ATermList) k_41 != ATempty)))
          {
            l_41 = ATgetFirst((ATermList) k_41);
            m_41 = (ATerm) ATgetNext((ATermList) k_41);
            {
              t = not_null(l_41);
              {
                ATerm l_2 (ATerm t)
                {
                  t = not_null(m_41);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_2);
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
  ATerm x_41 = NULL;
  x_41 = t;
  t = SSL_explode_string(not_null(x_41));
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
ATerm long_description_1 (ATerm t, ATerm q_70 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_84 (ATerm))
{
  ATerm a_42 (ATerm t)
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = Cons_2(t, a_84, a_42);
      }
    return(t);
  }
  t = a_42(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
  j_42 = t;
  g_42 :
  if(((ATgetType(j_42) == AT_LIST) && ((ATermList) j_42 != ATempty)))
    {
      h_42 = ATgetFirst((ATermList) j_42);
      i_42 = (ATerm) ATgetNext((ATermList) j_42);
      {
        ATerm m_42 = NULL;
        t = not_null(i_42);
        {
          ATerm t_13;
          t_13 = t;
          {
            ATerm n_42 = NULL,p_42 = NULL,r_42 = NULL;
            ATerm u_13;
            u_13 = t;
            {
              ATerm o_42 = NULL;
              t = i_0(t);
              {
                o_42 = t;
                if(((n_42 != NULL) && (n_42 != o_42)))
                  _fail(o_42);
                else
                  n_42 = o_42;
              }
            }
            t = u_13;
            {
              ATerm q_42 = NULL;
              t = not_null(h_42);
              {
                t = h_0(t);
                {
                  q_42 = t;
                  if(((p_42 != NULL) && (p_42 != q_42)))
                    _fail(q_42);
                  else
                    p_42 = q_42;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_42)), not_null(p_42));
                {
                  r_42 = t;
                  if(((m_42 != NULL) && (m_42 != r_42)))
                    _fail(r_42);
                  else
                    m_42 = r_42;
                }
              }
            }
          }
          t = t_13;
          {
            ATerm m_2 (ATerm t)
            {
              t = not_null(m_42);
              return(t);
            }
            t = reverse_acc_2(t, h_0, m_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) j_42 == ATempty))
        {
          {
            t = term_n_12;
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
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_70 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm e_43 = NULL,f_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym_Program_1))
    {
      f_43 = ATgetArgument(e_43, 0);
      {
        ATerm i_43 = NULL,k_43 = NULL;
        ATerm j_43 = NULL;
        t = SSLgetAnnotations(not_null(e_43));
        {
          j_43 = t;
          if(((i_43 != NULL) && (i_43 != j_43)))
            _fail(j_43);
          else
            i_43 = j_43;
        }
        {
          t = not_null(f_43);
          {
            ATerm m_43 = NULL;
            t = r_61(t);
            {
              k_43 = t;
              {
                ATerm n_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_43)), not_null(i_43));
                {
                  n_43 = t;
                  if(((m_43 != NULL) && (m_43 != n_43)))
                    _fail(n_43);
                  else
                    m_43 = n_43;
                }
                t = not_null(m_43);
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
  ATerm w_43 = NULL;
  ATerm o_2 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      ATerm x_43 = NULL;
      x_43 = t;
      if(((w_43 != NULL) && (w_43 != x_43)))
        _fail(x_43);
      else
        w_43 = x_43;
      return(t);
    }
    t = Program_1(t, p_2);
    return(t);
  }
  t = option_defined_1(t, o_2);
  {
    ATerm q_2 (ATerm t)
    {
      ATerm y_43 = NULL;
      ATerm z_43 = NULL;
      t = term_n_12;
      {
        ATerm r_2 (ATerm t)
        {
          t = not_null(w_43);
          return(t);
        }
        t = short_description_1(t, r_2);
        {
          t = concat_strings_0(t);
          {
            z_43 = t;
            if(((y_43 != NULL) && (y_43 != z_43)))
              _fail(z_43);
            else
              y_43 = z_43;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATempty, not_null(y_43)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, q_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATempty, term_y_13));
      {
        t = printnl_0(t);
        {
          t = term_g_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm a_44 = NULL;
                  a_44 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_44)), term_h_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_2);
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm c_44 = NULL;
                    ATerm d_44 = NULL;
                    t = term_n_12;
                    {
                      ATerm u_2 (ATerm t)
                      {
                        t = not_null(w_43);
                        return(t);
                      }
                      t = long_description_1(t, u_2);
                      {
                        t = concat_strings_0(t);
                        {
                          d_44 = t;
                          if(((c_44 != NULL) && (c_44 != d_44)))
                            _fail(d_44);
                          else
                            c_44 = d_44;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_44)), term_i_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_2);
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
ATerm Undefined_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm o_44 = NULL,p_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym_Undefined_1))
    {
      p_44 = ATgetArgument(o_44, 0);
      {
        ATerm s_44 = NULL,u_44 = NULL;
        ATerm t_44 = NULL;
        t = SSLgetAnnotations(not_null(o_44));
        {
          t_44 = t;
          if(((s_44 != NULL) && (s_44 != t_44)))
            _fail(t_44);
          else
            s_44 = t_44;
        }
        {
          t = not_null(p_44);
          {
            ATerm w_44 = NULL;
            t = s_61(t);
            {
              u_44 = t;
              {
                ATerm x_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_44)), not_null(s_44));
                {
                  x_44 = t;
                  if(((w_44 != NULL) && (w_44 != x_44)))
                    _fail(x_44);
                  else
                    w_44 = x_44;
                }
                t = not_null(w_44);
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
ATerm fetch_1 (ATerm t, ATerm j_84 (ATerm))
{
  ATerm c_45 (ATerm t)
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_84, _id);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        t = Cons_2(t, _id, c_45);
      }
    return(t);
  }
  t = c_45(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_71 (ATerm))
{
  t = fetch_1(t, u_71);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  g_45 :
  if(match_cons(h_45, sym_Help_0))
    {
      ATerm j_45 = NULL,l_45 = NULL;
      ATerm l_14;
      l_14 = t;
      {
        ATerm k_45 = NULL;
        t = SSLgetAnnotations(not_null(h_45));
        {
          k_45 = t;
          if(((j_45 != NULL) && (j_45 != k_45)))
            _fail(k_45);
          else
            j_45 = k_45;
        }
      }
      t = l_14;
      {
        ATerm m_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_45));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
  s_45 = t;
  r_45 :
  if(match_cons(s_45, sym__2))
    {
      t_45 = ATgetArgument(s_45, 0);
      u_45 = ATgetArgument(s_45, 1);
      t = SSL_table_get(not_null(t_45), not_null(u_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
  b_46 = t;
  a_46 :
  if(match_cons(b_46, sym__3))
    {
      c_46 = ATgetArgument(b_46, 0);
      d_46 = ATgetArgument(b_46, 1);
      e_46 = ATgetArgument(b_46, 2);
      {
        ATerm m_14;
        m_14 = t;
        {
          ATerm i_46 = NULL;
          ATerm j_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_46), not_null(d_46));
          {
            ATerm n_14 = t;
            int o_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_14);
              }
            else
              {
                t = n_14;
                t = (ATerm) ATempty;
              }
            {
              j_46 = t;
              if(((i_46 != NULL) && (i_46 != j_46)))
                _fail(j_46);
              else
                i_46 = j_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_46), not_null(d_46), (ATerm) ATinsert(CheckATermList(not_null(i_46)), not_null(e_46)));
            t = table_put_0(t);
          }
        }
        t = m_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_70 (ATerm))
{
  ATerm n_46 = NULL;
  ATerm o_46 = NULL;
  t = term_n_12;
  {
    t = u_70(t);
    {
      o_46 = t;
      if(((n_46 != NULL) && (n_46 != o_46)))
        _fail(o_46);
      else
        n_46 = o_46;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_13, term_d_14, not_null(n_46));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
  u_46 = t;
  t_46 :
  if(match_string(u_46, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(u_46) == AT_LIST) && ((ATermList) u_46 != ATempty)))
        {
          v_46 = ATgetFirst((ATermList) u_46);
          w_46 = (ATerm) ATgetNext((ATermList) u_46);
          {
            ATerm z_46 = NULL;
            ATerm p_14;
            p_14 = t;
            {
              t = not_null(v_46);
              t = a_0(t);
            }
            t = p_14;
            {
              ATerm a_47 = NULL;
              t = term_n_12;
              {
                t = b_0(t);
                {
                  a_47 = t;
                  if(((z_46 != NULL) && (z_46 != a_47)))
                    _fail(a_47);
                  else
                    z_46 = a_47;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_46)), not_null(z_46));
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
  ATerm v_2 (ATerm t)
  {
    ATerm f_47 = NULL;
    f_47 = t;
    e_47 :
    if(!(match_string(f_47, "--help")))
      {
        if(!(match_string(f_47, "-h")))
          {
            if(!(match_string(f_47, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_t_14;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_w_14;
    return(t);
  }
  t = Option_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  h_47 :
  if(((ATgetType(i_47) == AT_LIST) && ((ATermList) i_47 != ATempty)))
    {
      j_47 = ATgetFirst((ATermList) i_47);
      k_47 = (ATerm) ATgetNext((ATermList) i_47);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_47)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_47)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_66 (ATerm), ATerm q_66 (ATerm))
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
  u_47 = t;
  t_47 :
  if(((ATgetType(u_47) == AT_LIST) && ((ATermList) u_47 != ATempty)))
    {
      v_47 = ATgetFirst((ATermList) u_47);
      w_47 = (ATerm) ATgetNext((ATermList) u_47);
      {
        ATerm a_48 = NULL,c_48 = NULL;
        ATerm b_48 = NULL;
        t = SSLgetAnnotations(not_null(u_47));
        {
          b_48 = t;
          if(((a_48 != NULL) && (a_48 != b_48)))
            _fail(b_48);
          else
            a_48 = b_48;
        }
        {
          t = not_null(v_47);
          {
            ATerm e_48 = NULL;
            t = p_66(t);
            {
              c_48 = t;
              {
                t = not_null(w_47);
                {
                  ATerm g_48 = NULL;
                  t = q_66(t);
                  {
                    e_48 = t;
                    {
                      ATerm h_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_48)), not_null(c_48)), not_null(a_48));
                      {
                        h_48 = t;
                        if(((g_48 != NULL) && (g_48 != h_48)))
                          _fail(h_48);
                        else
                          g_48 = h_48;
                      }
                      t = not_null(g_48);
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
  ATerm r_48 = NULL;
  r_48 = t;
  q_48 :
  if(((ATermList) r_48 == ATempty))
    {
      {
        ATerm y_48 = NULL,a_49 = NULL;
        ATerm z_14;
        z_14 = t;
        {
          ATerm z_48 = NULL;
          t = SSLgetAnnotations(not_null(r_48));
          {
            z_48 = t;
            if(((y_48 != NULL) && (y_48 != z_48)))
              _fail(z_48);
            else
              y_48 = z_48;
          }
        }
        t = z_14;
        {
          ATerm b_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_48));
          {
            b_49 = t;
            if(((a_49 != NULL) && (a_49 != b_49)))
              _fail(b_49);
            else
              a_49 = b_49;
          }
          t = not_null(a_49);
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
  ATerm h_49 = NULL,i_49 = NULL,m_49 = NULL;
  h_49 = t;
  g_49 :
  if(match_cons(h_49, sym__2))
    {
      i_49 = ATgetArgument(h_49, 0);
      m_49 = ATgetArgument(h_49, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_8, not_null(i_49), not_null(m_49));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm c_15;
  c_15 = t;
  {
    ATerm y_2 (ATerm t)
    {
      t = term_d_15;
      t = s_70(t);
      return(t);
    }
    t = try_1(t, y_2);
  }
  t = c_15;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm y_49 = NULL;
      ATerm e_15;
      e_15 = t;
      {
        ATerm w_49 = NULL;
        ATerm x_49 = NULL;
        x_49 = t;
        if(((w_49 != NULL) && (w_49 != x_49)))
          _fail(x_49);
        else
          w_49 = x_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(w_49));
          t = set_config_0(t);
        }
      }
      t = e_15;
      {
        ATerm z_49 = NULL;
        z_49 = t;
        if(((y_49 != NULL) && (y_49 != z_49)))
          _fail(z_49);
        else
          y_49 = z_49;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_49));
      }
      return(t);
    }
    ATerm a_3 (ATerm t)
    {
      ATerm f_15 = t;
      int g_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_15);
            }
          else
            {
              t = h_15;
              {
                t = s_70(t);
                t = Cons_2(t, _id, a_3);
              }
            }
          LocalPopChoice(g_15);
        }
      else
        {
          t = f_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_2, a_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  ATerm o_15;
  o_15 = t;
  {
    ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
    i_50 = t;
    e_50 :
    if(match_cons(i_50, sym__3))
      {
        j_50 = ATgetArgument(i_50, 0);
        k_50 = ATgetArgument(i_50, 1);
        l_50 = ATgetArgument(i_50, 2);
        {
          if(((f_50 != NULL) && (f_50 != j_50)))
            _fail(j_50);
          else
            f_50 = j_50;
          {
            if(((g_50 != NULL) && (g_50 != k_50)))
              _fail(k_50);
            else
              g_50 = k_50;
            {
              if(((h_50 != NULL) && (h_50 != l_50)))
                _fail(l_50);
              else
                h_50 = l_50;
              t = SSL_table_put(not_null(f_50), not_null(g_50), not_null(h_50));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm o_50 = NULL;
  ATerm p_15;
  p_15 = t;
  {
    t = term_q_15;
    t = table_put_0(t);
  }
  t = p_15;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm r_15 = t;
      int x_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_70(t);
          LocalPopChoice(x_15);
        }
      else
        {
          t = r_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_3);
    {
      ATerm c_3 (ATerm t)
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_r_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm e_3 (ATerm t)
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm p_50 = NULL;
                  p_50 = t;
                  if(((o_50 != NULL) && (o_50 != p_50)))
                    _fail(p_50);
                  else
                    o_50 = p_50;
                  return(t);
                }
                t = Undefined_1(t, f_3);
                return(t);
              }
              t = option_defined_1(t, e_3);
              {
                ATerm a_16;
                a_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_50)), term_f_16));
                  t = printnl_0(t);
                }
                t = a_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_3);
      {
        ATerm g_16;
        g_16 = t;
        {
          t = term_z_13;
          t = table_destroy_0(t);
        }
        t = g_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm m_73 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_73(t);
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, g_3);
  {
    t = store_options_0(t);
    {
      t = m_73(t);
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_73);
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            {
              ATerm o_16 = t;
              int c_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, j_73);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(c_17);
                }
              else
                {
                  t = o_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      ATerm d_17;
      d_17 = t;
      {
        ATerm s_50 = NULL;
        ATerm t_50 = NULL;
        t = term_h_9;
        {
          t = get_config_0(t);
          {
            t_50 = t;
            if(((s_50 != NULL) && (s_50 != t_50)))
              _fail(t_50);
            else
              s_50 = t_50;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATempty, not_null(s_50)));
          t = printnl_0(t);
        }
      }
      t = d_17;
      return(t);
    }
    t = if_verbose2_1(t, i_3);
    return(t);
  }
  t = iowrap_4(t, d_73, e_73, f_73, h_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm))
{
  t = iowrap_3(t, b_73, c_73, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_72 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    t = _2(t, _id, y_72);
    return(t);
  }
  t = iowrap_2(t, j_3, _fail);
  return(t);
}
ATerm stratego_desugar_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm z_53 = NULL;
      ATerm b_54 = NULL;
      z_53 = t;
      {
        ATerm c_54 = NULL;
        ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
        t = not_null(z_53);
        {
          c_54 = t;
          {
            t = SSL_explode_term(not_null(c_54));
            {
              e_54 = t;
              y_50 :
              if(match_cons(e_54, sym__2))
                {
                  f_54 = ATgetArgument(e_54, 0);
                  g_54 = ATgetArgument(e_54, 1);
                  z_50 :
                  if(((ATgetType(g_54) == AT_LIST) && ((ATermList) g_54 != ATempty)))
                    {
                      h_54 = ATgetFirst((ATermList) g_54);
                      i_54 = (ATerm) ATgetNext((ATermList) g_54);
                      w_53 :
                      if(((ATermList) i_54 == ATempty))
                        {
                          if(((b_54 != NULL) && (b_54 != h_54)))
                            _fail(h_54);
                          else
                            b_54 = h_54;
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
        t = not_null(b_54);
      }
      return(t);
    }
    t = try_1(t, l_3);
    {
      ATerm m_3 (ATerm t)
      {
        t = repeat_1(t, Desugar_0);
        t = try_1(t, DesugarOnce_0);
        return(t);
      }
      t = topdown_1(t, m_3);
    }
    return(t);
  }
  t = iowrap_1(t, k_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_desugar_0(t);
  return(t);
}
