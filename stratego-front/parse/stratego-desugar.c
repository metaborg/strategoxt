#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
#include "xtc-conf.h"
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
ATerm term_v_18;
ATerm term_l_18;
ATerm term_o_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_x_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_d_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_k_7;
ATerm term_i_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_s_3;
ATerm term_r_3;
ATerm term_q_3;
ATerm term_p_3;
void init_constant_terms (void)
{
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Call_2, term_o_7, (ATerm) ATempty);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Call_2, term_q_7, (ATerm) ATempty);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATempty);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Call_2, term_j_8, (ATerm) ATempty);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_e_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_e_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_e_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_e_13);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym__3, term_g_16, term_h_16, (ATerm) ATempty);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm SVar_1 (ATerm, ATerm t_56 (ATerm));
ATerm Var_1 (ATerm, ATerm k_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm));
ATerm SDef_3 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm), ATerm o_56 (ATerm));
ATerm RDef_3 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm u_59 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm p_56 (ATerm));
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_94 (ATerm));
ATerm at_last_1 (ATerm, ATerm b_87 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm f_78 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm v_77 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm a_94 (ATerm), ATerm b_94 (ATerm));
ATerm repeat_1 (ATerm, ATerm d_94 (ATerm));
ATerm topdown_1 (ATerm, ATerm t_90 (ATerm));
ATerm _2 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_86 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_76 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm c_73 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_75 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_80 (ATerm), ATerm o_80 (ATerm));
ATerm crush_2 (ATerm, ATerm f_82 (ATerm), ATerm g_82 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_73 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_71 (ATerm));
ATerm map_1 (ATerm, ATerm d_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_71 (ATerm));
ATerm Program_1 (ATerm, ATerm v_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_76 (ATerm));
ATerm Undefined_1 (ATerm, ATerm w_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_86 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_72 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_71 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_71 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_71 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm u_74 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm e_75 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_75 (ATerm), ATerm b_75 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_74 (ATerm));
ATerm stratego_desugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm string_to_real_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  t = SSL_string_to_real(not_null(d_3));
  return(t);
}
ATerm UnEscape_tab_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
  l_4 = t;
  u_3 :
  if(((ATgetType(l_4) == AT_LIST) && ((ATermList) l_4 != ATempty)))
    {
      m_4 = ATgetFirst((ATermList) l_4);
      n_4 = (ATerm) ATgetNext((ATermList) l_4);
      f_4 :
      if(match_int(m_4, 92))
        {
          g_4 :
          if(((ATgetType(n_4) == AT_LIST) && ((ATermList) n_4 != ATempty)))
            {
              o_4 = ATgetFirst((ATermList) n_4);
              p_4 = (ATerm) ATgetNext((ATermList) n_4);
              h_4 :
              if(match_int(o_4, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_4)), term_p_3);
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
ATerm UnEscape_linefeed_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  x_4 = t;
  t_4 :
  if(((ATgetType(x_4) == AT_LIST) && ((ATermList) x_4 != ATempty)))
    {
      y_4 = ATgetFirst((ATermList) x_4);
      z_4 = (ATerm) ATgetNext((ATermList) x_4);
      u_4 :
      if(match_int(y_4, 92))
        {
          v_4 :
          if(((ATgetType(z_4) == AT_LIST) && ((ATermList) z_4 != ATempty)))
            {
              a_5 = ATgetFirst((ATermList) z_4);
              b_5 = (ATerm) ATgetNext((ATermList) z_4);
              w_4 :
              if(match_int(a_5, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_5)), term_q_3);
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
ATerm UnEscape_backslash_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
  j_5 = t;
  f_5 :
  if(((ATgetType(j_5) == AT_LIST) && ((ATermList) j_5 != ATempty)))
    {
      k_5 = ATgetFirst((ATermList) j_5);
      l_5 = (ATerm) ATgetNext((ATermList) j_5);
      g_5 :
      if(match_int(k_5, 92))
        {
          h_5 :
          if(((ATgetType(l_5) == AT_LIST) && ((ATermList) l_5 != ATempty)))
            {
              m_5 = ATgetFirst((ATermList) l_5);
              n_5 = (ATerm) ATgetNext((ATermList) l_5);
              i_5 :
              if(match_int(m_5, 92))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_5)), term_r_3);
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
ATerm UnEscape_double_quote_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL;
  v_5 = t;
  r_5 :
  if(((ATgetType(v_5) == AT_LIST) && ((ATermList) v_5 != ATempty)))
    {
      w_5 = ATgetFirst((ATermList) v_5);
      x_5 = (ATerm) ATgetNext((ATermList) v_5);
      s_5 :
      if(match_int(w_5, 92))
        {
          t_5 :
          if(((ATgetType(x_5) == AT_LIST) && ((ATermList) x_5 != ATempty)))
            {
              y_5 = ATgetFirst((ATermList) x_5);
              z_5 = (ATerm) ATgetNext((ATermList) x_5);
              u_5 :
              if(match_int(y_5, 34))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_5)), term_s_3);
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
ATerm UnEscape_0 (ATerm t)
{
  ATerm t_3 = t;
  int v_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
      LocalPopChoice(v_3);
    }
  else
    {
      t = t_3;
      {
        ATerm w_3 = t;
        int x_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UnEscape_backslash_0(t);
            LocalPopChoice(x_3);
          }
        else
          {
            t = w_3;
            {
              ATerm y_3 = t;
              int z_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UnEscape_linefeed_0(t);
                  LocalPopChoice(z_3);
                }
              else
                {
                  t = y_3;
                  t = UnEscape_tab_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm unescape_chars_0 (ATerm t)
{
  t = try_1(t, UnEscape_0);
  {
    ATerm a_4 = t;
    int b_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        LocalPopChoice(b_4);
      }
    else
      {
        t = a_4;
        t = Nil_0(t);
      }
  }
  return(t);
}
ATerm unescape_0 (ATerm t)
{
  t = string_as_chars_1(t, unescape_chars_0);
  return(t);
}
ATerm RemoveLeadingPrime_0 (ATerm t)
{
  ATerm i_6 = NULL;
  ATerm k_6 = NULL,l_6 = NULL;
  i_6 = t;
  {
    ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
    t = not_null(i_6);
    {
      t = explode_string_0(t);
      {
        m_6 = t;
        g_6 :
        if(((ATgetType(m_6) == AT_LIST) && ((ATermList) m_6 != ATempty)))
          {
            n_6 = ATgetFirst((ATermList) m_6);
            o_6 = (ATerm) ATgetNext((ATermList) m_6);
            h_6 :
            if(match_int(n_6, 39))
              {
                ATerm p_6 = NULL;
                if(((k_6 != NULL) && (k_6 != o_6)))
                  _fail(o_6);
                else
                  k_6 = o_6;
                {
                  t = not_null(k_6);
                  {
                    t = implode_string_0(t);
                    {
                      p_6 = t;
                      if(((l_6 != NULL) && (l_6 != p_6)))
                        _fail(p_6);
                      else
                        l_6 = p_6;
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
    t = not_null(l_6);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm r_60 (ATerm), ATerm s_60 (ATerm))
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  z_6 = t;
  y_6 :
  if(match_cons(z_6, sym_Op_2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      {
        ATerm f_7 = NULL,h_7 = NULL;
        ATerm g_7 = NULL;
        t = SSLgetAnnotations(not_null(z_6));
        {
          g_7 = t;
          if(((f_7 != NULL) && (f_7 != g_7)))
            _fail(g_7);
          else
            f_7 = g_7;
        }
        {
          t = not_null(a_7);
          {
            ATerm j_7 = NULL;
            t = r_60(t);
            {
              h_7 = t;
              {
                t = not_null(b_7);
                {
                  ATerm l_7 = NULL;
                  t = s_60(t);
                  {
                    j_7 = t;
                    {
                      ATerm m_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(h_7), not_null(j_7)), not_null(f_7));
                      {
                        m_7 = t;
                        if(((l_7 != NULL) && (l_7 != m_7)))
                          _fail(m_7);
                        else
                          l_7 = m_7;
                      }
                      t = not_null(l_7);
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
ATerm OpDecl_2 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm))
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym_OpDecl_2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      {
        ATerm e_8 = NULL,g_8 = NULL;
        ATerm f_8 = NULL;
        t = SSLgetAnnotations(not_null(y_7));
        {
          f_8 = t;
          if(((e_8 != NULL) && (e_8 != f_8)))
            _fail(f_8);
          else
            e_8 = f_8;
        }
        {
          t = not_null(z_7);
          {
            ATerm i_8 = NULL;
            t = y_61(t);
            {
              g_8 = t;
              {
                t = not_null(a_8);
                {
                  ATerm k_8 = NULL;
                  t = z_61(t);
                  {
                    i_8 = t;
                    {
                      ATerm l_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(g_8), not_null(i_8)), not_null(e_8));
                      {
                        l_8 = t;
                        if(((k_8 != NULL) && (k_8 != l_8)))
                          _fail(l_8);
                        else
                          k_8 = l_8;
                      }
                      t = not_null(k_8);
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
ATerm SVar_1 (ATerm t, ATerm t_56 (ATerm))
{
  ATerm w_8 = NULL,x_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_SVar_1))
    {
      x_8 = ATgetArgument(w_8, 0);
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
            t = t_56(t);
            {
              c_9 = t;
              {
                ATerm f_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(c_9)), not_null(a_9));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm x_9 = NULL,y_9 = NULL;
  x_9 = t;
  w_9 :
  if(match_cons(x_9, sym_Var_1))
    {
      y_9 = ATgetArgument(x_9, 0);
      {
        ATerm c_4 = t;
        int d_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_10 = NULL,d_10 = NULL;
            ATerm c_10 = NULL;
            t = SSLgetAnnotations(not_null(x_9));
            {
              c_10 = t;
              if(((b_10 != NULL) && (b_10 != c_10)))
                _fail(c_10);
              else
                b_10 = c_10;
            }
            {
              t = not_null(y_9);
              {
                ATerm f_10 = NULL;
                t = k_0(t);
                {
                  d_10 = t;
                  {
                    ATerm g_10 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_10)), not_null(b_10));
                    {
                      g_10 = t;
                      if(((f_10 != NULL) && (f_10 != g_10)))
                        _fail(g_10);
                      else
                        f_10 = g_10;
                    }
                    t = not_null(f_10);
                  }
                }
              }
            }
            LocalPopChoice(d_4);
          }
        else
          {
            t = c_4;
            {
              ATerm e_4 = t;
              int i_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_10 = NULL,l_10 = NULL;
                  ATerm k_10 = NULL;
                  t = SSLgetAnnotations(not_null(x_9));
                  {
                    k_10 = t;
                    if(((j_10 != NULL) && (j_10 != k_10)))
                      _fail(k_10);
                    else
                      j_10 = k_10;
                  }
                  {
                    t = not_null(y_9);
                    {
                      ATerm n_10 = NULL;
                      t = k_0(t);
                      {
                        l_10 = t;
                        {
                          ATerm o_10 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_10)), not_null(j_10));
                          {
                            o_10 = t;
                            if(((n_10 != NULL) && (n_10 != o_10)))
                              _fail(o_10);
                            else
                              n_10 = o_10;
                          }
                          t = not_null(n_10);
                        }
                      }
                    }
                  }
                  LocalPopChoice(i_4);
                }
              else
                {
                  t = e_4;
                  {
                    ATerm r_10 = NULL,t_10 = NULL;
                    ATerm s_10 = NULL;
                    t = SSLgetAnnotations(not_null(x_9));
                    {
                      s_10 = t;
                      if(((r_10 != NULL) && (r_10 != s_10)))
                        _fail(s_10);
                      else
                        r_10 = s_10;
                    }
                    {
                      t = not_null(y_9);
                      {
                        ATerm v_10 = NULL;
                        t = k_0(t);
                        {
                          t_10 = t;
                          {
                            ATerm w_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_10)), not_null(r_10));
                            {
                              w_10 = t;
                              if(((v_10 != NULL) && (v_10 != w_10)))
                                _fail(w_10);
                              else
                                v_10 = w_10;
                            }
                            t = not_null(v_10);
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
ATerm VarDec_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
  p_11 = t;
  o_11 :
  if(match_cons(p_11, sym_VarDec_2))
    {
      q_11 = ATgetArgument(p_11, 0);
      r_11 = ATgetArgument(p_11, 1);
      {
        ATerm v_11 = NULL,x_11 = NULL;
        ATerm w_11 = NULL;
        t = SSLgetAnnotations(not_null(p_11));
        {
          w_11 = t;
          if(((v_11 != NULL) && (v_11 != w_11)))
            _fail(w_11);
          else
            v_11 = w_11;
        }
        {
          t = not_null(q_11);
          {
            ATerm z_11 = NULL;
            t = q_56(t);
            {
              x_11 = t;
              {
                t = not_null(r_11);
                {
                  ATerm b_12 = NULL;
                  t = r_56(t);
                  {
                    z_11 = t;
                    {
                      ATerm c_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_11), not_null(z_11)), not_null(v_11));
                      {
                        c_12 = t;
                        if(((b_12 != NULL) && (b_12 != c_12)))
                          _fail(c_12);
                        else
                          b_12 = c_12;
                      }
                      t = not_null(b_12);
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
ATerm SDef_3 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_SDef_3))
    {
      q_12 = ATgetArgument(p_12, 0);
      r_12 = ATgetArgument(p_12, 1);
      s_12 = ATgetArgument(p_12, 2);
      {
        ATerm x_12 = NULL,z_12 = NULL;
        ATerm y_12 = NULL;
        t = SSLgetAnnotations(not_null(p_12));
        {
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
        }
        {
          t = not_null(q_12);
          {
            ATerm b_13 = NULL;
            t = m_56(t);
            {
              z_12 = t;
              {
                t = not_null(r_12);
                {
                  ATerm d_13 = NULL;
                  t = n_56(t);
                  {
                    b_13 = t;
                    {
                      t = not_null(s_12);
                      {
                        ATerm f_13 = NULL;
                        t = o_56(t);
                        {
                          d_13 = t;
                          {
                            ATerm g_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(z_12), not_null(b_13), not_null(d_13)), not_null(x_12));
                            {
                              g_13 = t;
                              if(((f_13 != NULL) && (f_13 != g_13)))
                                _fail(g_13);
                              else
                                f_13 = g_13;
                            }
                            t = not_null(f_13);
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
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_RDef_3))
    {
      v_13 = ATgetArgument(u_13, 0);
      w_13 = ATgetArgument(u_13, 1);
      x_13 = ATgetArgument(u_13, 2);
      {
        ATerm c_14 = NULL,e_14 = NULL;
        ATerm d_14 = NULL;
        t = SSLgetAnnotations(not_null(u_13));
        {
          d_14 = t;
          if(((c_14 != NULL) && (c_14 != d_14)))
            _fail(d_14);
          else
            c_14 = d_14;
        }
        {
          t = not_null(v_13);
          {
            ATerm g_14 = NULL;
            t = s_59(t);
            {
              e_14 = t;
              {
                t = not_null(w_13);
                {
                  ATerm i_14 = NULL;
                  t = t_59(t);
                  {
                    g_14 = t;
                    {
                      t = not_null(x_13);
                      {
                        ATerm k_14 = NULL;
                        t = u_59(t);
                        {
                          i_14 = t;
                          {
                            ATerm l_14 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(e_14), not_null(g_14), not_null(i_14)), not_null(c_14));
                            {
                              l_14 = t;
                              if(((k_14 != NULL) && (k_14 != l_14)))
                                _fail(l_14);
                              else
                                k_14 = l_14;
                            }
                            t = not_null(k_14);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm p_56 (ATerm))
{
  ATerm x_14 = NULL,y_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym_DefaultVarDec_1))
    {
      y_14 = ATgetArgument(x_14, 0);
      {
        ATerm b_15 = NULL,d_15 = NULL;
        ATerm c_15 = NULL;
        t = SSLgetAnnotations(not_null(x_14));
        {
          c_15 = t;
          if(((b_15 != NULL) && (b_15 != c_15)))
            _fail(c_15);
          else
            b_15 = c_15;
        }
        {
          t = not_null(y_14);
          {
            ATerm f_15 = NULL;
            t = p_56(t);
            {
              d_15 = t;
              {
                ATerm g_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(d_15)), not_null(b_15));
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
                t = not_null(f_15);
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
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
        ATerm q_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
            LocalPopChoice(r_4);
          }
        else
          {
            t = q_4;
            {
              ATerm s_4 = t;
              int c_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
                  LocalPopChoice(c_5);
                }
              else
                {
                  t = s_4;
                  {
                    ATerm d_5 = t;
                    int e_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = VarDec_2(t, RemoveLeadingPrime_0, _id);
                        LocalPopChoice(e_5);
                      }
                    else
                      {
                        t = d_5;
                        {
                          ATerm o_5 = t;
                          int p_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, RemoveLeadingPrime_0);
                              LocalPopChoice(p_5);
                            }
                          else
                            {
                              t = o_5;
                              {
                                ATerm q_5 = t;
                                int a_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SVar_1(t, RemoveLeadingPrime_0);
                                    LocalPopChoice(a_6);
                                  }
                                else
                                  {
                                    t = q_5;
                                    {
                                      ATerm b_6 = t;
                                      int c_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                          LocalPopChoice(c_6);
                                        }
                                      else
                                        {
                                          t = b_6;
                                          {
                                            ATerm d_6 = t;
                                            int e_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2(t, RemoveLeadingPrime_0, _id);
                                                LocalPopChoice(e_6);
                                              }
                                            else
                                              {
                                                t = d_6;
                                                {
                                                  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
                                                  t_15 = t;
                                                  s_15 :
                                                  if(match_cons(t_15, sym_Str_1))
                                                    {
                                                      u_15 = ATgetArgument(t_15, 0);
                                                      {
                                                        ATerm y_15 = NULL;
                                                        ATerm z_15 = NULL;
                                                        t = not_null(u_15);
                                                        {
                                                          t = un_double_quote_0(t);
                                                          {
                                                            t = unescape_0(t);
                                                            {
                                                              z_15 = t;
                                                              if(((y_15 != NULL) && (y_15 != z_15)))
                                                                _fail(z_15);
                                                              else
                                                                y_15 = z_15;
                                                            }
                                                          }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_Str_1, not_null(y_15));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t_15, sym_Real_1))
                                                        {
                                                          u_15 = ATgetArgument(t_15, 0);
                                                          {
                                                            ATerm b_16 = NULL;
                                                            ATerm c_16 = NULL;
                                                            t = not_null(u_15);
                                                            {
                                                              t = string_to_real_0(t);
                                                              {
                                                                c_16 = t;
                                                                if(((b_16 != NULL) && (b_16 != c_16)))
                                                                  _fail(c_16);
                                                                else
                                                                  b_16 = c_16;
                                                              }
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(b_16));
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t_15, sym_Int_1))
                                                            {
                                                              u_15 = ATgetArgument(t_15, 0);
                                                              {
                                                                ATerm e_16 = NULL;
                                                                ATerm f_16 = NULL;
                                                                t = not_null(u_15);
                                                                {
                                                                  t = string_to_int_0(t);
                                                                  {
                                                                    f_16 = t;
                                                                    if(((e_16 != NULL) && (e_16 != f_16)))
                                                                      _fail(f_16);
                                                                    else
                                                                      e_16 = f_16;
                                                                  }
                                                                }
                                                                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(e_16));
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t_15, sym_Con_3))
                                                                {
                                                                  u_15 = ATgetArgument(t_15, 0);
                                                                  v_15 = ATgetArgument(t_15, 1);
                                                                  w_15 = ATgetArgument(t_15, 2);
                                                                  {
                                                                    t = not_null(w_15);
                                                                    t = is_string_0(t);
                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, not_null(u_15), not_null(v_15), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_15)), (ATerm) ATempty));
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
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_94 (ATerm))
{
  ATerm f_6 = t;
  int j_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_94(t);
      LocalPopChoice(j_6);
    }
  else
    {
      t = f_6;
      {
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    ATerm q_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = b_87(t);
        LocalPopChoice(r_6);
      }
    else
      {
        t = q_6;
        t = Cons_2(t, _id, q_16);
      }
    return(t);
  }
  t = q_16(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  s_16 :
  if(((ATgetType(t_16) == AT_LIST) && ((ATermList) t_16 != ATempty)))
    {
      u_16 = ATgetFirst((ATermList) t_16);
      v_16 = (ATerm) ATgetNext((ATermList) t_16);
      t = not_null(v_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  a_17 :
  if(((ATgetType(c_17) == AT_LIST) && ((ATermList) c_17 != ATempty)))
    {
      d_17 = ATgetFirst((ATermList) c_17);
      e_17 = (ATerm) ATgetNext((ATermList) c_17);
      b_17 :
      if(((ATermList) e_17 == ATempty))
        {
          t = not_null(d_17);
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
ATerm Hd_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(((ATgetType(k_17) == AT_LIST) && ((ATermList) k_17 != ATempty)))
    {
      l_17 = ATgetFirst((ATermList) k_17);
      m_17 = (ATerm) ATgetNext((ATermList) k_17);
      t = not_null(l_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm u_6;
  u_6 = t;
  {
    t = Hd_0(t);
    t = f_78(t);
  }
  t = u_6;
  {
    ATerm v_6;
    v_6 = t;
    {
      t = last_0(t);
      t = f_78(t);
    }
    t = v_6;
    {
      t = Tl_0(t);
      t = init_0(t);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm r_17 = NULL;
    r_17 = t;
    q_17 :
    if(!(match_int(r_17, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, c_0);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm v_77 (ATerm))
{
  t = explode_string_0(t);
  {
    t = v_77(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, un_double_quote_chars_0);
  return(t);
}
ATerm DesugarCharGeneric_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  z_17 = t;
  t_17 :
  if(((ATgetType(z_17) == AT_LIST) && ((ATermList) z_17 != ATempty)))
    {
      a_18 = ATgetFirst((ATermList) z_17);
      b_18 = (ATerm) ATgetNext((ATermList) z_17);
      u_17 :
      if(match_int(a_18, 39))
        {
          v_17 :
          if(((ATgetType(b_18) == AT_LIST) && ((ATermList) b_18 != ATempty)))
            {
              c_18 = ATgetFirst((ATermList) b_18);
              d_18 = (ATerm) ATgetNext((ATermList) b_18);
              w_17 :
              if(((ATgetType(d_18) == AT_LIST) && ((ATermList) d_18 != ATempty)))
                {
                  e_18 = ATgetFirst((ATermList) d_18);
                  f_18 = (ATerm) ATgetNext((ATermList) d_18);
                  x_17 :
                  if(match_int(e_18, 39))
                    {
                      y_17 :
                      if(((ATermList) f_18 == ATempty))
                        {
                          t = not_null(c_18);
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
  ATerm o_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_string(o_18, "'\\ '"))
    {
      t = term_w_6;
    }
  else
    {
      if(match_string(o_18, "'\\r'"))
        {
          t = term_x_6;
        }
      else
        {
          if(match_string(o_18, "'\\t'"))
            {
              t = term_p_3;
            }
          else
            {
              if(match_string(o_18, "'\\n'"))
                {
                  t = term_q_3;
                }
              else
                {
                  if(match_string(o_18, "'\\''"))
                    {
                      t = term_c_7;
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
  ATerm b_19 = NULL;
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  b_19 = t;
  {
    ATerm g_19 = NULL;
    ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
    t = not_null(b_19);
    {
      g_19 = t;
      {
        t = SSL_explode_term(not_null(g_19));
        {
          i_19 = t;
          x_18 :
          if(match_cons(i_19, sym__2))
            {
              j_19 = ATgetArgument(i_19, 0);
              k_19 = ATgetArgument(i_19, 1);
              y_18 :
              if(match_string(j_19, ""))
                {
                  z_18 :
                  if(((ATgetType(k_19) == AT_LIST) && ((ATermList) k_19 != ATempty)))
                    {
                      l_19 = ATgetFirst((ATermList) k_19);
                      m_19 = (ATerm) ATgetNext((ATermList) k_19);
                      a_19 :
                      if(((ATgetType(m_19) == AT_LIST) && ((ATermList) m_19 != ATempty)))
                        {
                          n_19 = ATgetFirst((ATermList) m_19);
                          o_19 = (ATerm) ATgetNext((ATermList) m_19);
                          {
                            if(((d_19 != NULL) && (d_19 != l_19)))
                              _fail(l_19);
                            else
                              d_19 = l_19;
                            {
                              if(((f_19 != NULL) && (f_19 != n_19)))
                                _fail(n_19);
                              else
                                f_19 = n_19;
                              if(((e_19 != NULL) && (e_19 != o_19)))
                                _fail(o_19);
                              else
                                e_19 = o_19;
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
    t = not_null(f_19);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm y_19 = NULL;
  ATerm a_20 = NULL,b_20 = NULL;
  y_19 = t;
  {
    ATerm c_20 = NULL;
    ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
    t = not_null(y_19);
    {
      c_20 = t;
      {
        t = SSL_explode_term(not_null(c_20));
        {
          e_20 = t;
          v_19 :
          if(match_cons(e_20, sym__2))
            {
              f_20 = ATgetArgument(e_20, 0);
              g_20 = ATgetArgument(e_20, 1);
              w_19 :
              if(match_string(f_20, ""))
                {
                  x_19 :
                  if(((ATgetType(g_20) == AT_LIST) && ((ATermList) g_20 != ATempty)))
                    {
                      h_20 = ATgetFirst((ATermList) g_20);
                      i_20 = (ATerm) ATgetNext((ATermList) g_20);
                      {
                        if(((b_20 != NULL) && (b_20 != h_20)))
                          _fail(h_20);
                        else
                          b_20 = h_20;
                        if(((a_20 != NULL) && (a_20 != i_20)))
                          _fail(i_20);
                        else
                          a_20 = i_20;
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
    t = not_null(b_20);
  }
  return(t);
}
ATerm Desugar_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  ATerm v_26 (ATerm t)
  {
    t = not_null(v_22);
    {
      ATerm d_7 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_7;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_e_7, not_null(v_22));
    return(t);
  }
  ATerm w_26 (ATerm t)
  {
    t = not_null(q_22);
    return(t);
  }
  ATerm x_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(v_22)));
    return(t);
  }
  ATerm y_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(v_22)));
    return(t);
  }
  ATerm z_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(v_22)));
    return(t);
  }
  ATerm a_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_22)), (ATerm) ATempty);
    return(t);
  }
  ATerm b_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_22)), not_null(w_22));
    return(t);
  }
  ATerm c_27 (ATerm t)
  {
    t = not_null(v_22);
    {
      ATerm d_0 (ATerm t)
      {
        t = not_null(w_22);
        return(t);
      }
      ATerm l_0 (ATerm t)
      {
        ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
        o_24 = t;
        e_22 :
        if(match_cons(o_24, sym__2))
          {
            p_24 = ATgetArgument(o_24, 0);
            q_24 = ATgetArgument(o_24, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), not_null(p_24)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, d_0, l_0);
    }
    return(t);
  }
  ATerm d_27 (ATerm t)
  {
    t = not_null(v_22);
    {
      ATerm m_0 (ATerm t)
      {
        t = term_p_7;
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
        u_24 = t;
        g_22 :
        if(match_cons(u_24, sym__2))
          {
            v_24 = ATgetArgument(u_24, 0);
            w_24 = ATgetArgument(u_24, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_24)), not_null(v_24)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, m_0, n_0);
    }
    return(t);
  }
  ATerm e_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_q_7, (ATerm) ATinsert(CheckATermList(not_null(w_22)), not_null(v_22)));
    return(t);
  }
  ATerm f_27 (ATerm t)
  {
    t = not_null(v_22);
    {
      ATerm r_7 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_7;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_q_7, not_null(v_22));
    return(t);
  }
  ATerm g_27 (ATerm t)
  {
    t = not_null(q_22);
    return(t);
  }
  ATerm h_27 (ATerm t)
  {
    t = term_s_7;
    return(t);
  }
  ATerm i_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_22)), not_null(v_22)));
    return(t);
  }
  ATerm j_27 (ATerm t)
  {
    t = not_null(v_22);
    return(t);
  }
  ATerm k_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(v_22), not_null(w_22), term_v_7);
    return(t);
  }
  ATerm l_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_22), not_null(w_22), term_v_7);
    return(t);
  }
  ATerm p_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(v_22), (ATerm)ATempty, not_null(w_22));
    return(t);
  }
  ATerm q_27 (ATerm t)
  {
    ATerm o_25 = NULL;
    ATerm p_25 = NULL;
    t = not_null(v_22);
    {
      t = un_double_quote_0(t);
      {
        p_25 = t;
        if(((o_25 != NULL) && (o_25 != p_25)))
          _fail(p_25);
        else
          o_25 = p_25;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(o_25), not_null(w_22));
    return(t);
  }
  ATerm r_27 (ATerm t)
  {
    ATerm r_25 = NULL;
    ATerm s_25 = NULL;
    t = not_null(v_22);
    {
      t = un_double_quote_0(t);
      {
        s_25 = t;
        if(((r_25 != NULL) && (r_25 != s_25)))
          _fail(s_25);
        else
          r_25 = s_25;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(r_25), (ATerm) ATempty);
    return(t);
  }
  ATerm s_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(v_22), (ATerm) ATempty);
    return(t);
  }
  ATerm t_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_22), (ATerm)ATempty, not_null(w_22));
    return(t);
  }
  ATerm u_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(v_22), not_null(w_22), not_null(t_22));
    return(t);
  }
  ATerm v_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(v_22), (ATerm)ATempty, not_null(w_22));
    return(t);
  }
  ATerm w_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(v_22), (ATerm)ATempty, not_null(w_22));
    return(t);
  }
  ATerm x_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(w_22));
    return(t);
  }
  u_22 = t;
  j_22 :
  if(match_cons(u_22, sym_Anno_2))
    {
      v_22 = ATgetArgument(u_22, 0);
      w_22 = ATgetArgument(u_22, 1);
      {
        ATerm z_22 = NULL;
        ATerm e_23 = NULL;
        t = not_null(w_22);
        {
          ATerm o_0 (ATerm t)
          {
            t = term_w_7;
            return(t);
          }
          ATerm p_0 (ATerm t)
          {
            ATerm a_23 = NULL,c_23 = NULL;
            ATerm b_8;
            b_8 = t;
            {
              ATerm b_23 = NULL;
              t = Fst_0(t);
              {
                b_23 = t;
                if(((a_23 != NULL) && (a_23 != b_23)))
                  _fail(b_23);
                else
                  a_23 = b_23;
              }
            }
            t = b_8;
            {
              ATerm d_23 = NULL;
              t = Snd_0(t);
              {
                d_23 = t;
                if(((c_23 != NULL) && (c_23 != d_23)))
                  _fail(d_23);
                else
                  c_23 = d_23;
              }
              t = (ATerm) ATmakeAppl(sym_Op_2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_23)), not_null(a_23)));
            }
            return(t);
          }
          t = foldr_2(t, o_0, p_0);
          {
            e_23 = t;
            if(((z_22 != NULL) && (z_22 != e_23)))
              _fail(e_23);
            else
              z_22 = e_23;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(v_22), not_null(z_22));
      }
    }
  else
    {
      if(match_cons(u_22, sym_SortNoArgs_1))
        {
          v_22 = ATgetArgument(u_22, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(v_22), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(u_22, sym_Char_1))
            {
              v_22 = ATgetArgument(u_22, 0);
              {
                ATerm h_23 = NULL;
                ATerm i_23 = NULL;
                t = not_null(v_22);
                {
                  ATerm c_8 = t;
                  int d_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = DesugarChar_0(t);
                      LocalPopChoice(d_8);
                    }
                  else
                    {
                      t = c_8;
                      {
                        t = explode_string_0(t);
                        t = DesugarCharGeneric_0(t);
                      }
                    }
                  {
                    i_23 = t;
                    if(((h_23 != NULL) && (h_23 != i_23)))
                      _fail(i_23);
                    else
                      h_23 = i_23;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(h_23));
              }
            }
          else
            {
              if(match_cons(u_22, sym_Con4_4))
                {
                  v_22 = ATgetArgument(u_22, 0);
                  w_22 = ATgetArgument(u_22, 1);
                  t_22 = ATgetArgument(u_22, 2);
                  p_22 = ATgetArgument(u_22, 3);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(v_22), not_null(t_22), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_22)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(u_22, sym_Con3_3))
                    {
                      v_22 = ATgetArgument(u_22, 0);
                      w_22 = ATgetArgument(u_22, 1);
                      t_22 = ATgetArgument(u_22, 2);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(v_22), not_null(t_22), term_m_8);
                    }
                  else
                    {
                      if(match_cons(u_22, sym_Con1_2))
                        {
                          v_22 = ATgetArgument(u_22, 0);
                          w_22 = ATgetArgument(u_22, 1);
                          t = (ATerm) ATmakeAppl(sym_Con_3, not_null(v_22), not_null(w_22), term_m_8);
                        }
                      else
                        {
                          if(match_cons(u_22, sym_ListTail_2))
                            {
                              v_22 = ATgetArgument(u_22, 0);
                              w_22 = ATgetArgument(u_22, 1);
                              {
                                t = not_null(v_22);
                                {
                                  ATerm q_0 (ATerm t)
                                  {
                                    t = not_null(w_22);
                                    return(t);
                                  }
                                  ATerm r_0 (ATerm t)
                                  {
                                    ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
                                    t_23 = t;
                                    a_22 :
                                    if(match_cons(t_23, sym__2))
                                      {
                                        u_23 = ATgetArgument(t_23, 0);
                                        v_23 = ATgetArgument(t_23, 1);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_23)), not_null(u_23)));
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
                              if(match_cons(u_22, sym_List_1))
                                {
                                  v_22 = ATgetArgument(u_22, 0);
                                  {
                                    t = not_null(v_22);
                                    {
                                      ATerm s_0 (ATerm t)
                                      {
                                        t = term_w_7;
                                        return(t);
                                      }
                                      ATerm t_0 (ATerm t)
                                      {
                                        ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
                                        z_23 = t;
                                        c_22 :
                                        if(match_cons(z_23, sym__2))
                                          {
                                            a_24 = ATgetArgument(z_23, 0);
                                            b_24 = ATgetArgument(z_23, 1);
                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_24)), not_null(a_24)));
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
                                  if(match_cons(u_22, sym_Tuple_1))
                                    {
                                      v_22 = ATgetArgument(u_22, 0);
                                      k_22 :
                                      if(((ATgetType(v_22) == AT_LIST) && ((ATermList) v_22 != ATempty)))
                                        {
                                          q_22 = ATgetFirst((ATermList) v_22);
                                          r_22 = (ATerm) ATgetNext((ATermList) v_22);
                                          l_22 :
                                          if(((ATermList) r_22 == ATempty))
                                            {
                                              {
                                                ATerm n_8 = t;
                                                int o_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = v_26(t);
                                                    LocalPopChoice(o_8);
                                                  }
                                                else
                                                  {
                                                    t = n_8;
                                                    t = w_26(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              t = v_26(t);
                                            }
                                        }
                                      else
                                        {
                                          t = v_26(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(u_22, sym_RealCong_1))
                                        {
                                          v_22 = ATgetArgument(u_22, 0);
                                          t = x_26(t);
                                        }
                                      else
                                        {
                                          if(match_cons(u_22, sym_IntCong_1))
                                            {
                                              v_22 = ATgetArgument(u_22, 0);
                                              t = y_26(t);
                                            }
                                          else
                                            {
                                              if(match_cons(u_22, sym_StrCong_1))
                                                {
                                                  v_22 = ATgetArgument(u_22, 0);
                                                  t = z_26(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(u_22, sym_ModCongNoArgs_1))
                                                    {
                                                      v_22 = ATgetArgument(u_22, 0);
                                                      t = a_27(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(u_22, sym_ModCong_2))
                                                        {
                                                          v_22 = ATgetArgument(u_22, 0);
                                                          w_22 = ATgetArgument(u_22, 1);
                                                          t = b_27(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(u_22, sym_ListCong_2))
                                                            {
                                                              v_22 = ATgetArgument(u_22, 0);
                                                              w_22 = ATgetArgument(u_22, 1);
                                                              t = c_27(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(u_22, sym_ListCongNoTail_1))
                                                                {
                                                                  v_22 = ATgetArgument(u_22, 0);
                                                                  t = d_27(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(u_22, sym_TupleCong_2))
                                                                    {
                                                                      v_22 = ATgetArgument(u_22, 0);
                                                                      w_22 = ATgetArgument(u_22, 1);
                                                                      t = e_27(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(u_22, sym_TupleCong_1))
                                                                        {
                                                                          v_22 = ATgetArgument(u_22, 0);
                                                                          m_22 :
                                                                          if(((ATgetType(v_22) == AT_LIST) && ((ATermList) v_22 != ATempty)))
                                                                            {
                                                                              q_22 = ATgetFirst((ATermList) v_22);
                                                                              r_22 = (ATerm) ATgetNext((ATermList) v_22);
                                                                              n_22 :
                                                                              if(((ATermList) r_22 == ATempty))
                                                                                {
                                                                                  {
                                                                                    ATerm p_8 = t;
                                                                                    int q_8 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = f_27(t);
                                                                                        LocalPopChoice(q_8);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_8;
                                                                                        t = g_27(t);
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_27(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_27(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(u_22, sym_TupleCong_0))
                                                                            {
                                                                              t = h_27(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(u_22, sym_AnnoCong_2))
                                                                                {
                                                                                  v_22 = ATgetArgument(u_22, 0);
                                                                                  w_22 = ATgetArgument(u_22, 1);
                                                                                  o_22 :
                                                                                  if(match_cons(w_22, sym_StrategyCurly_1))
                                                                                    {
                                                                                      s_22 = ATgetArgument(w_22, 0);
                                                                                      t = i_27(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(u_22, sym_ParenStrat_1))
                                                                                    {
                                                                                      v_22 = ATgetArgument(u_22, 0);
                                                                                      t = j_27(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(u_22, sym_StratRuleNoCond_2))
                                                                                        {
                                                                                          v_22 = ATgetArgument(u_22, 0);
                                                                                          w_22 = ATgetArgument(u_22, 1);
                                                                                          t = k_27(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(u_22, sym_RuleNoCond_2))
                                                                                            {
                                                                                              v_22 = ATgetArgument(u_22, 0);
                                                                                              w_22 = ATgetArgument(u_22, 1);
                                                                                              t = l_27(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(u_22, sym_OverlayNoArgs_2))
                                                                                                {
                                                                                                  v_22 = ATgetArgument(u_22, 0);
                                                                                                  w_22 = ATgetArgument(u_22, 1);
                                                                                                  t = p_27(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(u_22, sym_Prim_2))
                                                                                                    {
                                                                                                      v_22 = ATgetArgument(u_22, 0);
                                                                                                      w_22 = ATgetArgument(u_22, 1);
                                                                                                      t = q_27(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(u_22, sym_PrimNoArgs_1))
                                                                                                        {
                                                                                                          v_22 = ATgetArgument(u_22, 0);
                                                                                                          t = r_27(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(u_22, sym_CallNoArgs_1))
                                                                                                            {
                                                                                                              v_22 = ATgetArgument(u_22, 0);
                                                                                                              t = s_27(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(u_22, sym_SDefNoArgs_2))
                                                                                                                {
                                                                                                                  v_22 = ATgetArgument(u_22, 0);
                                                                                                                  w_22 = ATgetArgument(u_22, 1);
                                                                                                                  t = t_27(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(u_22, sym_SRDef_3))
                                                                                                                    {
                                                                                                                      v_22 = ATgetArgument(u_22, 0);
                                                                                                                      w_22 = ATgetArgument(u_22, 1);
                                                                                                                      t_22 = ATgetArgument(u_22, 2);
                                                                                                                      t = u_27(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(u_22, sym_SRDefNoArgs_2))
                                                                                                                        {
                                                                                                                          v_22 = ATgetArgument(u_22, 0);
                                                                                                                          w_22 = ATgetArgument(u_22, 1);
                                                                                                                          t = v_27(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(u_22, sym_RDefNoArgs_2))
                                                                                                                            {
                                                                                                                              v_22 = ATgetArgument(u_22, 0);
                                                                                                                              w_22 = ATgetArgument(u_22, 1);
                                                                                                                              t = w_27(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(u_22, sym_Module_2))
                                                                                                                                {
                                                                                                                                  v_22 = ATgetArgument(u_22, 0);
                                                                                                                                  w_22 = ATgetArgument(u_22, 1);
                                                                                                                                  t = x_27(t);
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
ATerm repeat_2 (ATerm t, ATerm a_94 (ATerm), ATerm b_94 (ATerm))
{
  ATerm i_28 (ATerm t)
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_94(t);
        t = i_28(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = b_94(t);
      }
    return(t);
  }
  t = i_28(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm d_94 (ATerm))
{
  t = repeat_2(t, d_94, _id);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm t_90 (ATerm))
{
  t = t_90(t);
  {
    ATerm u_0 (ATerm t)
    {
      t = topdown_1(t, t_90);
      return(t);
    }
    t = _all(t, u_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym__2))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      {
        ATerm w_28 = NULL,y_28 = NULL;
        ATerm x_28 = NULL;
        t = SSLgetAnnotations(not_null(q_28));
        {
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
        }
        {
          t = not_null(r_28);
          {
            ATerm a_29 = NULL;
            t = b_55(t);
            {
              y_28 = t;
              {
                t = not_null(s_28);
                {
                  ATerm c_29 = NULL;
                  t = c_55(t);
                  {
                    a_29 = t;
                    {
                      ATerm d_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_28), not_null(a_29)), not_null(w_28));
                      {
                        d_29 = t;
                        if(((c_29 != NULL) && (c_29 != d_29)))
                          _fail(d_29);
                        else
                          c_29 = d_29;
                      }
                      t = not_null(c_29);
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
  ATerm l_29 = NULL;
  ATerm t_8;
  t_8 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm m_29 = NULL,n_29 = NULL;
      m_29 = t;
      k_29 :
      if(match_cons(m_29, sym_Program_1))
        {
          n_29 = ATgetArgument(m_29, 0);
          if(((l_29 != NULL) && (l_29 != n_29)))
            _fail(n_29);
          else
            l_29 = n_29;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, v_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_8), not_null(l_29)), term_y_8));
      {
        t = printnl_0(t);
        {
          t = term_d_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym__2))
    {
      s_29 = ATgetArgument(r_29, 0);
      t_29 = ATgetArgument(r_29, 1);
      {
        ATerm g_9;
        g_9 = t;
        t = SSL_printnl(not_null(s_29), not_null(t_29));
        t = g_9;
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
  ATerm f_30 = NULL;
  f_30 = t;
  t = SSL_implode_string(not_null(f_30));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm k_30 = NULL,l_30 = NULL,o_30 = NULL;
        k_30 = t;
        j_30 :
        if(((ATgetType(k_30) == AT_LIST) && ((ATermList) k_30 != ATempty)))
          {
            l_30 = ATgetFirst((ATermList) k_30);
            o_30 = (ATerm) ATgetNext((ATermList) k_30);
            {
              t = not_null(l_30);
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(o_30);
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
  ATerm y_30 = NULL;
  ATerm a_31 = NULL;
  y_30 = t;
  {
    ATerm b_31 = NULL;
    ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
    t = not_null(y_30);
    {
      b_31 = t;
      {
        t = SSL_explode_term(not_null(b_31));
        {
          f_31 = t;
          w_30 :
          if(match_cons(f_31, sym__2))
            {
              g_31 = ATgetArgument(f_31, 0);
              h_31 = ATgetArgument(f_31, 1);
              x_30 :
              if(match_string(g_31, ""))
                {
                  if(((a_31 != NULL) && (a_31 != h_31)))
                    _fail(h_31);
                  else
                    a_31 = h_31;
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
      t = not_null(a_31);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm l_31 (ATerm t)
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_31);
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          t = Nil_0(t);
          t = s_86(t);
        }
      }
    return(t);
  }
  t = l_31(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  t_31 :
  if(match_cons(a_32, sym__2))
    {
      b_32 = ATgetArgument(a_32, 0);
      c_32 = ATgetArgument(a_32, 1);
      {
        t = not_null(b_32);
        {
          ATerm x_0 (ATerm t)
          {
            t = not_null(c_32);
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
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_32 = NULL;
  h_32 = t;
  t = SSL_explode_string(not_null(h_32));
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
ATerm debug_1 (ATerm t, ATerm m_76 (ATerm))
{
  ATerm n_9;
  n_9 = t;
  {
    ATerm n_32 = NULL,p_32 = NULL;
    ATerm o_9;
    o_9 = t;
    {
      ATerm o_32 = NULL;
      t = m_76(t);
      {
        o_32 = t;
        if(((n_32 != NULL) && (n_32 != o_32)))
          _fail(o_32);
        else
          n_32 = o_32;
      }
    }
    t = o_9;
    {
      ATerm q_32 = NULL;
      q_32 = t;
      if(((p_32 != NULL) && (p_32 != q_32)))
        _fail(q_32);
      else
        p_32 = q_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_32)), not_null(n_32)));
        t = printnl_0(t);
      }
    }
  }
  t = n_9;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = SSL_is_string(not_null(u_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_0);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            {
              ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
              d_33 = t;
              c_33 :
              if(match_cons(d_33, sym_Path_1))
                {
                  e_33 = ATgetArgument(d_33, 0);
                  t = not_null(e_33);
                }
              else
                {
                  if(match_cons(d_33, sym_Var_1))
                    {
                      e_33 = ATgetArgument(d_33, 0);
                      {
                        t = not_null(e_33);
                        {
                          ATerm t_9 = t;
                          int u_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(u_9);
                            }
                          else
                            {
                              t = t_9;
                              {
                                ATerm z_0 (ATerm t)
                                {
                                  t = term_v_9;
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
                      if(match_cons(d_33, sym_Prefix_2))
                        {
                          e_33 = ATgetArgument(d_33, 0);
                          f_33 = ATgetArgument(d_33, 1);
                          {
                            ATerm k_33 = NULL,m_33 = NULL;
                            ATerm z_9;
                            z_9 = t;
                            {
                              ATerm l_33 = NULL;
                              t = not_null(e_33);
                              {
                                t = eval_config_0(t);
                                {
                                  l_33 = t;
                                  if(((k_33 != NULL) && (k_33 != l_33)))
                                    _fail(l_33);
                                  else
                                    k_33 = l_33;
                                }
                              }
                            }
                            t = z_9;
                            {
                              ATerm n_33 = NULL;
                              t = not_null(f_33);
                              {
                                t = eval_config_0(t);
                                {
                                  n_33 = t;
                                  if(((m_33 != NULL) && (m_33 != n_33)))
                                    _fail(n_33);
                                  else
                                    m_33 = n_33;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_33), not_null(m_33));
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
  ATerm v_33 = NULL;
  v_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(v_33));
    {
      t = table_get_0(t);
      {
        ATerm a_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_10;
            e_10 = t;
            {
              ATerm x_33 = NULL;
              ATerm y_33 = NULL;
              y_33 = t;
              if(((x_33 != NULL) && (x_33 != y_33)))
                _fail(y_33);
              else
                x_33 = y_33;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_10, not_null(v_33), not_null(x_33));
                t = table_put_0(t);
              }
            }
            t = e_10;
          }
          return(t);
        }
        t = try_1(t, a_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm h_10;
    h_10 = t;
    {
      ATerm c_34 = NULL;
      ATerm d_34 = NULL;
      t = term_i_10;
      {
        t = get_config_0(t);
        {
          d_34 = t;
          if(((c_34 != NULL) && (c_34 != d_34)))
            _fail(d_34);
          else
            c_34 = d_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_34), term_m_10);
        t = geq_0(t);
      }
    }
    t = h_10;
    t = c_73(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym__2))
    {
      i_34 = ATgetArgument(h_34, 0);
      j_34 = ATgetArgument(h_34, 1);
      t = SSL_WriteToTextFile(not_null(i_34), not_null(j_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  q_34 :
  if(match_cons(w_34, sym__2))
    {
      x_34 = ATgetArgument(w_34, 0);
      y_34 = ATgetArgument(w_34, 1);
      t = SSL_WriteToBinaryFile(not_null(x_34), not_null(y_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm h_35 = NULL;
  ATerm p_10;
  p_10 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm q_10 = t;
      int u_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm i_35 = NULL,j_35 = NULL;
            i_35 = t;
            d_35 :
            if(match_cons(i_35, sym_Output_1))
              {
                j_35 = ATgetArgument(i_35, 0);
                if(((h_35 != NULL) && (h_35 != j_35)))
                  _fail(j_35);
                else
                  h_35 = j_35;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_1);
          LocalPopChoice(u_10);
        }
      else
        {
          t = q_10;
          {
            ATerm k_35 = NULL;
            t = term_x_10;
            {
              k_35 = t;
              if(((h_35 != NULL) && (h_35 != k_35)))
                _fail(k_35);
              else
                h_35 = k_35;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_1, _id);
  }
  t = p_10;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(h_35);
        return(t);
      }
      t = split_2(t, f_1, _id);
      return(t);
    }
    t = _2(t, _id, e_1);
    {
      ATerm y_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              ATerm l_35 = NULL;
              l_35 = t;
              g_35 :
              if(!(match_cons(l_35, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_1);
            return(t);
          }
          t = _2(t, g_1, WriteToBinaryFile_0);
          LocalPopChoice(z_10);
        }
      else
        {
          t = y_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm r_35 = NULL,t_35 = NULL,u_35 = NULL,x_35 = NULL;
  ATerm a_11;
  a_11 = t;
  t = dtime_0(t);
  t = a_11;
  {
    t = w_75(t);
    {
      ATerm b_11;
      b_11 = t;
      {
        ATerm s_35 = NULL;
        t = dtime_0(t);
        {
          s_35 = t;
          if(((r_35 != NULL) && (r_35 != s_35)))
            _fail(s_35);
          else
            r_35 = s_35;
        }
      }
      t = b_11;
      {
        t_35 = t;
        q_35 :
        if(match_cons(t_35, sym__2))
          {
            u_35 = ATgetArgument(t_35, 0);
            x_35 = ATgetArgument(t_35, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_35)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(r_35))), not_null(x_35));
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
  ATerm d_36 = NULL;
  d_36 = t;
  t = SSL_ReadFromFile(not_null(d_36));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm i_36 = NULL,k_36 = NULL;
  ATerm c_11;
  c_11 = t;
  {
    ATerm j_36 = NULL;
    t = b_79(t);
    {
      j_36 = t;
      if(((i_36 != NULL) && (i_36 != j_36)))
        _fail(j_36);
      else
        i_36 = j_36;
    }
  }
  t = c_11;
  {
    ATerm l_36 = NULL;
    t = c_79(t);
    {
      l_36 = t;
      if(((k_36 != NULL) && (k_36 != l_36)))
        _fail(l_36);
      else
        k_36 = l_36;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_36), not_null(k_36));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_36 = NULL;
  ATerm d_11;
  d_11 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          ATerm s_36 = NULL,t_36 = NULL;
          s_36 = t;
          p_36 :
          if(match_cons(s_36, sym_Input_1))
            {
              t_36 = ATgetArgument(s_36, 0);
              if(((r_36 != NULL) && (r_36 != t_36)))
                _fail(t_36);
              else
                r_36 = t_36;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_1);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        {
          ATerm u_36 = NULL;
          t = term_g_11;
          {
            u_36 = t;
            if(((r_36 != NULL) && (r_36 != u_36)))
              _fail(u_36);
            else
              r_36 = u_36;
          }
        }
      }
  }
  t = d_11;
  {
    ATerm j_1 (ATerm t)
    {
      t = not_null(r_36);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  t = SSL_string_to_int(not_null(a_37));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  k_37 = t;
  i_37 :
  if(match_string(k_37, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(k_37) == AT_LIST) && ((ATermList) k_37 != ATempty)))
        {
          l_37 = ATgetFirst((ATermList) k_37);
          m_37 = (ATerm) ATgetNext((ATermList) k_37);
          j_37 :
          if(((ATgetType(m_37) == AT_LIST) && ((ATermList) m_37 != ATempty)))
            {
              n_37 = ATgetFirst((ATermList) m_37);
              o_37 = (ATerm) ATgetNext((ATermList) m_37);
              {
                ATerm s_37 = NULL;
                ATerm h_11;
                h_11 = t;
                {
                  t = not_null(l_37);
                  t = h_0(t);
                }
                t = h_11;
                {
                  ATerm t_37 = NULL;
                  t = not_null(n_37);
                  {
                    t = i_0(t);
                    {
                      t_37 = t;
                      if(((s_37 != NULL) && (s_37 != t_37)))
                        _fail(t_37);
                      else
                        s_37 = t_37;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_37)), not_null(s_37));
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
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm m_38 = NULL;
        m_38 = t;
        x_37 :
        if(!(match_string(m_38, "-i")))
          {
            if(!(match_string(m_38, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm p_38 = NULL;
        ATerm k_11;
        k_11 = t;
        {
          ATerm n_38 = NULL;
          ATerm o_38 = NULL;
          o_38 = t;
          if(((n_38 != NULL) && (n_38 != o_38)))
            _fail(o_38);
          else
            n_38 = o_38;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(n_38));
            t = set_config_0(t);
          }
        }
        t = k_11;
        {
          ATerm q_38 = NULL;
          q_38 = t;
          if(((p_38 != NULL) && (p_38 != q_38)))
            _fail(q_38);
          else
            p_38 = q_38;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_38));
        }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_m_11;
        return(t);
      }
      t = ArgOption_3(t, k_1, l_1, m_1);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm n_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm r_38 = NULL;
              r_38 = t;
              a_38 :
              if(!(match_string(r_38, "-o")))
                {
                  if(!(match_string(r_38, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm u_38 = NULL;
              ATerm t_11;
              t_11 = t;
              {
                ATerm s_38 = NULL;
                ATerm t_38 = NULL;
                t_38 = t;
                if(((s_38 != NULL) && (s_38 != t_38)))
                  _fail(t_38);
                else
                  s_38 = t_38;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(s_38));
                  t = set_config_0(t);
                }
              }
              t = t_11;
              {
                ATerm y_38 = NULL;
                y_38 = t;
                if(((u_38 != NULL) && (u_38 != y_38)))
                  _fail(y_38);
                else
                  u_38 = y_38;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_38));
              }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              t = term_y_11;
              return(t);
            }
            t = ArgOption_3(t, n_1, o_1, p_1);
            LocalPopChoice(s_11);
          }
        else
          {
            t = n_11;
            {
              ATerm a_12 = t;
              int d_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    ATerm z_38 = NULL;
                    z_38 = t;
                    d_38 :
                    if(!(match_string(z_38, "-S")))
                      {
                        if(!(match_string(z_38, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = term_f_12;
                    t = set_config_0(t);
                    t = term_g_12;
                    return(t);
                  }
                  ATerm s_1 (ATerm t)
                  {
                    t = term_h_12;
                    return(t);
                  }
                  t = Option_3(t, q_1, r_1, s_1);
                  LocalPopChoice(d_12);
                }
              else
                {
                  t = a_12;
                  {
                    ATerm i_12 = t;
                    int j_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          ATerm a_39 = NULL;
                          a_39 = t;
                          e_38 :
                          if(!(match_string(a_39, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm u_1 (ATerm t)
                        {
                          ATerm e_39 = NULL;
                          ATerm k_12;
                          k_12 = t;
                          {
                            ATerm b_39 = NULL;
                            ATerm c_39 = NULL;
                            t = string_to_int_0(t);
                            {
                              c_39 = t;
                              if(((b_39 != NULL) && (b_39 != c_39)))
                                _fail(c_39);
                              else
                                b_39 = c_39;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(b_39));
                              t = set_config_0(t);
                            }
                          }
                          t = k_12;
                          {
                            ATerm g_39 = NULL;
                            g_39 = t;
                            if(((e_39 != NULL) && (e_39 != g_39)))
                              _fail(g_39);
                            else
                              e_39 = g_39;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_39));
                          }
                          return(t);
                        }
                        ATerm v_1 (ATerm t)
                        {
                          t = term_l_12;
                          return(t);
                        }
                        t = ArgOption_3(t, t_1, u_1, v_1);
                        LocalPopChoice(j_12);
                      }
                    else
                      {
                        t = i_12;
                        {
                          ATerm m_12 = t;
                          int n_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_1 (ATerm t)
                              {
                                ATerm j_39 = NULL;
                                j_39 = t;
                                h_38 :
                                if(!(match_string(j_39, "-k")))
                                  {
                                    if(!(match_string(j_39, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm x_1 (ATerm t)
                              {
                                ATerm t_12;
                                t_12 = t;
                                {
                                  ATerm k_39 = NULL;
                                  ATerm l_39 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    l_39 = t;
                                    if(((k_39 != NULL) && (k_39 != l_39)))
                                      _fail(l_39);
                                    else
                                      k_39 = l_39;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(k_39));
                                    t = set_config_0(t);
                                  }
                                }
                                t = t_12;
                                return(t);
                              }
                              ATerm y_1 (ATerm t)
                              {
                                t = term_v_12;
                                return(t);
                              }
                              t = ArgOption_3(t, w_1, x_1, y_1);
                              LocalPopChoice(n_12);
                            }
                          else
                            {
                              t = m_12;
                              {
                                ATerm w_12 = t;
                                int a_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_1 (ATerm t)
                                    {
                                      ATerm m_39 = NULL;
                                      m_39 = t;
                                      j_38 :
                                      if(!(match_string(m_39, "-v")))
                                        {
                                          if(!(match_string(m_39, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm a_2 (ATerm t)
                                    {
                                      t = term_h_13;
                                      t = set_config_0(t);
                                      t = term_i_13;
                                      return(t);
                                    }
                                    ATerm b_2 (ATerm t)
                                    {
                                      t = term_j_13;
                                      return(t);
                                    }
                                    t = Option_3(t, z_1, a_2, b_2);
                                    LocalPopChoice(a_13);
                                  }
                                else
                                  {
                                    t = w_12;
                                    {
                                      ATerm k_13 = t;
                                      int l_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_2 (ATerm t)
                                          {
                                            ATerm n_39 = NULL;
                                            n_39 = t;
                                            k_38 :
                                            if(!(match_string(n_39, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm d_2 (ATerm t)
                                          {
                                            t = term_n_13;
                                            t = set_config_0(t);
                                            t = term_o_13;
                                            return(t);
                                          }
                                          ATerm e_2 (ATerm t)
                                          {
                                            t = term_p_13;
                                            return(t);
                                          }
                                          t = Option_3(t, c_2, d_2, e_2);
                                          LocalPopChoice(l_13);
                                        }
                                      else
                                        {
                                          t = k_13;
                                          {
                                            ATerm f_2 (ATerm t)
                                            {
                                              ATerm o_39 = NULL;
                                              o_39 = t;
                                              l_38 :
                                              if(!(match_string(o_39, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm g_2 (ATerm t)
                                            {
                                              t = term_r_13;
                                              t = set_config_0(t);
                                              t = term_s_13;
                                              return(t);
                                            }
                                            ATerm h_2 (ATerm t)
                                            {
                                              t = term_y_13;
                                              return(t);
                                            }
                                            t = Option_3(t, f_2, g_2, h_2);
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
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATempty, term_z_13));
  {
    t = printnl_0(t);
    {
      t = term_d_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  t = SSL_TicksToSeconds(not_null(x_39));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
  c_40 = t;
  b_40 :
  if(match_cons(c_40, sym__2))
    {
      d_40 = ATgetArgument(c_40, 0);
      e_40 = ATgetArgument(c_40, 1);
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_40), not_null(e_40));
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = SSL_addr(not_null(d_40), not_null(e_40));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_80 (ATerm), ATerm o_80 (ATerm))
{
  ATerm f_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_80(t);
      LocalPopChoice(h_14);
    }
  else
    {
      t = f_14;
      {
        ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
        l_40 = t;
        k_40 :
        if(((ATgetType(l_40) == AT_LIST) && ((ATermList) l_40 != ATempty)))
          {
            m_40 = ATgetFirst((ATermList) l_40);
            n_40 = (ATerm) ATgetNext((ATermList) l_40);
            {
              ATerm q_40 = NULL;
              ATerm r_40 = NULL;
              t = not_null(n_40);
              {
                t = foldr_2(t, n_80, o_80);
                {
                  r_40 = t;
                  if(((q_40 != NULL) && (q_40 != r_40)))
                    _fail(r_40);
                  else
                    q_40 = r_40;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_40), not_null(q_40));
                t = o_80(t);
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
ATerm crush_2 (ATerm t, ATerm f_82 (ATerm), ATerm g_82 (ATerm))
{
  ATerm y_40 = NULL;
  ATerm a_41 = NULL;
  y_40 = t;
  {
    ATerm b_41 = NULL;
    ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
    t = not_null(y_40);
    {
      b_41 = t;
      {
        t = SSL_explode_term(not_null(b_41));
        {
          d_41 = t;
          x_40 :
          if(match_cons(d_41, sym__2))
            {
              e_41 = ATgetArgument(d_41, 0);
              f_41 = ATgetArgument(d_41, 1);
              if(((a_41 != NULL) && (a_41 != f_41)))
                _fail(f_41);
              else
                a_41 = f_41;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_41);
      t = foldr_2(t, f_82, g_82);
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
    ATerm i_2 (ATerm t)
    {
      t = term_e_12;
      return(t);
    }
    t = crush_2(t, i_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  k_41 :
  if(match_cons(l_41, sym__2))
    {
      m_41 = ATgetArgument(l_41, 0);
      n_41 = ATgetArgument(l_41, 1);
      {
        ATerm j_14;
        j_14 = t;
        {
          ATerm m_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_41), not_null(n_41));
              LocalPopChoice(n_14);
            }
          else
            {
              t = m_14;
              t = SSL_gtr(not_null(m_41), not_null(n_41));
            }
        }
        t = j_14;
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
  ATerm t_41 = NULL;
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
      u_41 = t;
      s_41 :
      if(match_cons(u_41, sym__2))
        {
          v_41 = ATgetArgument(u_41, 0);
          w_41 = ATgetArgument(u_41, 1);
          {
            if(((t_41 != NULL) && (t_41 != v_41)))
              _fail(v_41);
            else
              t_41 = v_41;
            if(((t_41 != NULL) && (t_41 != w_41)))
              _fail(w_41);
            else
              t_41 = w_41;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm q_14;
    q_14 = t;
    {
      ATerm z_41 = NULL;
      ATerm a_42 = NULL;
      t = term_i_10;
      {
        t = get_config_0(t);
        {
          a_42 = t;
          if(((z_41 != NULL) && (z_41 != a_42)))
            _fail(a_42);
          else
            z_41 = a_42;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_41), term_d_9);
        t = geq_0(t);
      }
    }
    t = q_14;
    t = b_73(t);
    return(t);
  }
  t = try_1(t, j_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm e_42 = NULL,g_42 = NULL;
    ATerm r_14;
    r_14 = t;
    {
      ATerm f_42 = NULL;
      t = run_time_0(t);
      {
        f_42 = t;
        if(((e_42 != NULL) && (e_42 != f_42)))
          _fail(f_42);
        else
          e_42 = f_42;
      }
    }
    t = r_14;
    {
      ATerm h_42 = NULL;
      t = term_s_14;
      {
        t = get_config_0(t);
        {
          h_42 = t;
          if(((g_42 != NULL) && (g_42 != h_42)))
            _fail(h_42);
          else
            g_42 = h_42;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_14), not_null(e_42)), term_t_14), not_null(g_42)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_2);
  {
    t = term_e_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_42 = NULL;
  o_42 = t;
  n_42 :
  if(match_cons(o_42, sym_Version_0))
    {
      ATerm v_42 = NULL,x_42 = NULL;
      ATerm v_14;
      v_14 = t;
      {
        ATerm w_42 = NULL;
        t = SSLgetAnnotations(not_null(o_42));
        {
          w_42 = t;
          if(((v_42 != NULL) && (v_42 != w_42)))
            _fail(w_42);
          else
            v_42 = w_42;
        }
      }
      t = v_14;
      {
        ATerm y_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_42));
        {
          y_42 = t;
          if(((x_42 != NULL) && (x_42 != y_42)))
            _fail(y_42);
          else
            x_42 = y_42;
        }
        t = not_null(x_42);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        {
          ATerm e_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_15);
            }
          else
            {
              t = e_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_2);
  t = u_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_43 = NULL;
  d_43 = t;
  t = SSL_table_create(not_null(d_43));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_43 = NULL;
  h_43 = t;
  {
    ATerm i_15;
    i_15 = t;
    {
      t = term_j_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_15, term_k_15, not_null(h_43));
          t = table_put_0(t);
        }
      }
    }
    t = i_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_43 = NULL;
  l_43 = t;
  t = SSL_table_destroy(not_null(l_43));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_43 = NULL;
  p_43 = t;
  t = SSL_exit(not_null(p_43));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  s_43 :
  if(((ATermList) v_43 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_43) == AT_LIST) && ((ATermList) v_43 != ATempty)))
        {
          w_43 = ATgetFirst((ATermList) v_43);
          x_43 = (ATerm) ATgetNext((ATermList) v_43);
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
  ATerm l_15;
  l_15 = t;
  {
    ATerm a_44 = NULL;
    ATerm d_44 = NULL;
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        {
          ATerm b_44 = NULL;
          ATerm c_44 = NULL;
          c_44 = t;
          if(((b_44 != NULL) && (b_44 != c_44)))
            _fail(c_44);
          else
            b_44 = c_44;
          t = (ATerm) ATinsert(ATempty, not_null(b_44));
        }
      }
    {
      d_44 = t;
      if(((a_44 != NULL) && (a_44 != d_44)))
        _fail(d_44);
      else
        a_44 = d_44;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_10, not_null(a_44));
      t = printnl_0(t);
    }
  }
  t = l_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_71 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm g_44 (ATerm t)
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = Cons_2(t, d_86, g_44);
      }
    return(t);
  }
  t = g_44(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  p_44 = t;
  m_44 :
  if(((ATgetType(p_44) == AT_LIST) && ((ATermList) p_44 != ATempty)))
    {
      n_44 = ATgetFirst((ATermList) p_44);
      o_44 = (ATerm) ATgetNext((ATermList) p_44);
      {
        ATerm s_44 = NULL;
        t = not_null(o_44);
        {
          ATerm q_15;
          q_15 = t;
          {
            ATerm t_44 = NULL,v_44 = NULL,x_44 = NULL;
            ATerm r_15;
            r_15 = t;
            {
              ATerm u_44 = NULL;
              t = g_0(t);
              {
                u_44 = t;
                if(((t_44 != NULL) && (t_44 != u_44)))
                  _fail(u_44);
                else
                  t_44 = u_44;
              }
            }
            t = r_15;
            {
              ATerm w_44 = NULL;
              t = not_null(n_44);
              {
                t = f_0(t);
                {
                  w_44 = t;
                  if(((v_44 != NULL) && (v_44 != w_44)))
                    _fail(w_44);
                  else
                    v_44 = w_44;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_44)), not_null(v_44));
                {
                  x_44 = t;
                  if(((s_44 != NULL) && (s_44 != x_44)))
                    _fail(x_44);
                  else
                    s_44 = x_44;
                }
              }
            }
          }
          t = q_15;
          {
            ATerm m_2 (ATerm t)
            {
              t = not_null(s_44);
              return(t);
            }
            t = reverse_acc_2(t, f_0, m_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) p_44 == ATempty))
        {
          {
            t = term_e_13;
            t = g_0(t);
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
ATerm short_description_1 (ATerm t, ATerm u_71 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm i_45 = NULL,j_45 = NULL;
  i_45 = t;
  h_45 :
  if(match_cons(i_45, sym_Program_1))
    {
      j_45 = ATgetArgument(i_45, 0);
      {
        ATerm n_45 = NULL,p_45 = NULL;
        ATerm o_45 = NULL;
        t = SSLgetAnnotations(not_null(i_45));
        {
          o_45 = t;
          if(((n_45 != NULL) && (n_45 != o_45)))
            _fail(o_45);
          else
            n_45 = o_45;
        }
        {
          t = not_null(j_45);
          {
            ATerm r_45 = NULL;
            t = v_62(t);
            {
              p_45 = t;
              {
                ATerm s_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_45)), not_null(n_45));
                {
                  s_45 = t;
                  if(((r_45 != NULL) && (r_45 != s_45)))
                    _fail(s_45);
                  else
                    r_45 = s_45;
                }
                t = not_null(r_45);
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
  ATerm b_46 = NULL;
  ATerm x_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_46 = NULL;
      t = term_s_14;
      {
        t = get_config_0(t);
        {
          c_46 = t;
          if(((b_46 != NULL) && (b_46 != c_46)))
            _fail(c_46);
          else
            b_46 = c_46;
        }
      }
      LocalPopChoice(a_16);
    }
  else
    {
      t = x_15;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            ATerm d_46 = NULL;
            d_46 = t;
            if(((b_46 != NULL) && (b_46 != d_46)))
              _fail(d_46);
            else
              b_46 = d_46;
            return(t);
          }
          t = Program_1(t, p_2);
          return(t);
        }
        t = option_defined_1(t, o_2);
      }
    }
  {
    ATerm q_2 (ATerm t)
    {
      ATerm r_2 (ATerm t)
      {
        t = not_null(b_46);
        return(t);
      }
      t = short_description_1(t, r_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, q_2);
    {
      t = term_d_16;
      {
        t = echo_0(t);
        {
          t = term_i_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm e_46 = NULL;
                  ATerm f_46 = NULL;
                  f_46 = t;
                  if(((e_46 != NULL) && (e_46 != f_46)))
                    _fail(f_46);
                  else
                    e_46 = f_46;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_46)), term_j_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_2);
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm g_46 = NULL;
                    ATerm h_46 = NULL;
                    ATerm u_2 (ATerm t)
                    {
                      t = not_null(b_46);
                      return(t);
                    }
                    t = long_description_1(t, u_2);
                    {
                      h_46 = t;
                      if(((g_46 != NULL) && (g_46 != h_46)))
                        _fail(h_46);
                      else
                        g_46 = h_46;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(g_46)), term_k_16);
                      t = echo_0(t);
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
ATerm debug_0 (ATerm t)
{
  ATerm l_16;
  l_16 = t;
  {
    ATerm n_46 = NULL;
    ATerm o_46 = NULL;
    o_46 = t;
    if(((n_46 != NULL) && (n_46 != o_46)))
      _fail(o_46);
    else
      n_46 = o_46;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATempty, not_null(n_46)));
      t = printnl_0(t);
    }
  }
  t = l_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm m_16;
  m_16 = t;
  {
    t = n_76(t);
    t = debug_0(t);
  }
  t = m_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm v_46 = NULL,w_46 = NULL;
  v_46 = t;
  u_46 :
  if(match_cons(v_46, sym_Undefined_1))
    {
      w_46 = ATgetArgument(v_46, 0);
      {
        ATerm z_46 = NULL,b_47 = NULL;
        ATerm a_47 = NULL;
        t = SSLgetAnnotations(not_null(v_46));
        {
          a_47 = t;
          if(((z_46 != NULL) && (z_46 != a_47)))
            _fail(a_47);
          else
            z_46 = a_47;
        }
        {
          t = not_null(w_46);
          {
            ATerm d_47 = NULL;
            t = w_62(t);
            {
              b_47 = t;
              {
                ATerm e_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_47)), not_null(z_46));
                {
                  e_47 = t;
                  if(((d_47 != NULL) && (d_47 != e_47)))
                    _fail(e_47);
                  else
                    d_47 = e_47;
                }
                t = not_null(d_47);
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
ATerm fetch_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm j_47 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_86, _id);
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        t = Cons_2(t, _id, j_47);
      }
    return(t);
  }
  t = j_47(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_72 (ATerm))
{
  t = fetch_1(t, z_72);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_47 = NULL;
  o_47 = t;
  n_47 :
  if(match_cons(o_47, sym_Help_0))
    {
      ATerm q_47 = NULL,s_47 = NULL;
      ATerm p_16;
      p_16 = t;
      {
        ATerm r_47 = NULL;
        t = SSLgetAnnotations(not_null(o_47));
        {
          r_47 = t;
          if(((q_47 != NULL) && (q_47 != r_47)))
            _fail(r_47);
          else
            q_47 = r_47;
        }
      }
      t = p_16;
      {
        ATerm t_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_47));
        {
          t_47 = t;
          if(((s_47 != NULL) && (s_47 != t_47)))
            _fail(t_47);
          else
            s_47 = t_47;
        }
        t = not_null(s_47);
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
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym__2))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      t = SSL_table_get(not_null(a_48), not_null(b_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  i_48 = t;
  h_48 :
  if(match_cons(i_48, sym__3))
    {
      j_48 = ATgetArgument(i_48, 0);
      k_48 = ATgetArgument(i_48, 1);
      l_48 = ATgetArgument(i_48, 2);
      {
        ATerm r_16;
        r_16 = t;
        {
          ATerm p_48 = NULL;
          ATerm q_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_48), not_null(k_48));
          {
            ATerm w_16 = t;
            int x_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_16);
              }
            else
              {
                t = w_16;
                t = (ATerm) ATempty;
              }
            {
              q_48 = t;
              if(((p_48 != NULL) && (p_48 != q_48)))
                _fail(q_48);
              else
                p_48 = q_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_48), not_null(k_48), (ATerm) ATinsert(CheckATermList(not_null(p_48)), not_null(l_48)));
            t = table_put_0(t);
          }
        }
        t = r_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm u_48 = NULL;
  ATerm v_48 = NULL;
  t = term_e_13;
  {
    t = z_71(t);
    {
      v_48 = t;
      if(((u_48 != NULL) && (u_48 != v_48)))
        _fail(v_48);
      else
        u_48 = v_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_16, term_h_16, not_null(u_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  a_49 :
  if(match_string(b_49, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(b_49) == AT_LIST) && ((ATermList) b_49 != ATempty)))
        {
          c_49 = ATgetFirst((ATermList) b_49);
          d_49 = (ATerm) ATgetNext((ATermList) b_49);
          {
            ATerm g_49 = NULL;
            ATerm y_16;
            y_16 = t;
            {
              t = not_null(c_49);
              t = a_0(t);
            }
            t = y_16;
            {
              ATerm h_49 = NULL;
              t = term_e_13;
              {
                t = b_0(t);
                {
                  h_49 = t;
                  if(((g_49 != NULL) && (g_49 != h_49)))
                    _fail(h_49);
                  else
                    g_49 = h_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_49)), not_null(g_49));
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
    ATerm m_49 = NULL;
    m_49 = t;
    l_49 :
    if(!(match_string(m_49, "--help")))
      {
        if(!(match_string(m_49, "-h")))
          {
            if(!(match_string(m_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_f_17;
    {
      t = set_config_0(t);
      t = term_g_17;
    }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_h_17;
    return(t);
  }
  t = Option_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  o_49 :
  if(((ATgetType(p_49) == AT_LIST) && ((ATermList) p_49 != ATempty)))
    {
      q_49 = ATgetFirst((ATermList) p_49);
      r_49 = (ATerm) ATgetNext((ATermList) p_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm))
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  f_50 :
  if(((ATgetType(g_50) == AT_LIST) && ((ATermList) g_50 != ATempty)))
    {
      h_50 = ATgetFirst((ATermList) g_50);
      i_50 = (ATerm) ATgetNext((ATermList) g_50);
      {
        ATerm p_50 = NULL,w_50 = NULL;
        ATerm q_50 = NULL;
        t = SSLgetAnnotations(not_null(g_50));
        {
          q_50 = t;
          if(((p_50 != NULL) && (p_50 != q_50)))
            _fail(q_50);
          else
            p_50 = q_50;
        }
        {
          t = not_null(h_50);
          {
            ATerm y_50 = NULL;
            t = t_67(t);
            {
              w_50 = t;
              {
                t = not_null(i_50);
                {
                  ATerm a_51 = NULL;
                  t = u_67(t);
                  {
                    y_50 = t;
                    {
                      ATerm b_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_50)), not_null(w_50)), not_null(p_50));
                      {
                        b_51 = t;
                        if(((a_51 != NULL) && (a_51 != b_51)))
                          _fail(b_51);
                        else
                          a_51 = b_51;
                      }
                      t = not_null(a_51);
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
  ATerm l_51 = NULL;
  l_51 = t;
  k_51 :
  if(((ATermList) l_51 == ATempty))
    {
      {
        ATerm n_51 = NULL,p_51 = NULL;
        ATerm i_17;
        i_17 = t;
        {
          ATerm o_51 = NULL;
          t = SSLgetAnnotations(not_null(l_51));
          {
            o_51 = t;
            if(((n_51 != NULL) && (n_51 != o_51)))
              _fail(o_51);
            else
              n_51 = o_51;
          }
        }
        t = i_17;
        {
          ATerm q_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_51));
          {
            q_51 = t;
            if(((p_51 != NULL) && (p_51 != q_51)))
              _fail(q_51);
            else
              p_51 = q_51;
          }
          t = not_null(p_51);
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
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
  w_51 = t;
  v_51 :
  if(match_cons(w_51, sym__2))
    {
      x_51 = ATgetArgument(w_51, 0);
      y_51 = ATgetArgument(w_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_10, not_null(x_51), not_null(y_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm n_17;
  n_17 = t;
  {
    ATerm y_2 (ATerm t)
    {
      t = term_o_17;
      t = x_71(t);
      return(t);
    }
    t = try_1(t, y_2);
  }
  t = n_17;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm h_55 = NULL;
      ATerm p_17;
      p_17 = t;
      {
        ATerm f_55 = NULL;
        ATerm g_55 = NULL;
        g_55 = t;
        if(((f_55 != NULL) && (f_55 != g_55)))
          _fail(g_55);
        else
          f_55 = g_55;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(f_55));
          t = set_config_0(t);
        }
      }
      t = p_17;
      {
        ATerm i_55 = NULL;
        i_55 = t;
        if(((h_55 != NULL) && (h_55 != i_55)))
          _fail(i_55);
        else
          h_55 = i_55;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_55));
      }
      return(t);
    }
    ATerm a_3 (ATerm t)
    {
      ATerm s_17 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_18);
            }
          else
            {
              t = h_18;
              {
                t = x_71(t);
                t = Cons_2(t, _id, a_3);
              }
            }
          LocalPopChoice(g_18);
        }
      else
        {
          t = s_17;
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
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
  ATerm j_18;
  j_18 = t;
  {
    ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
    r_55 = t;
    n_55 :
    if(match_cons(r_55, sym__3))
      {
        s_55 = ATgetArgument(r_55, 0);
        t_55 = ATgetArgument(r_55, 1);
        u_55 = ATgetArgument(r_55, 2);
        {
          if(((o_55 != NULL) && (o_55 != s_55)))
            _fail(s_55);
          else
            o_55 = s_55;
          {
            if(((p_55 != NULL) && (p_55 != t_55)))
              _fail(t_55);
            else
              p_55 = t_55;
            {
              if(((q_55 != NULL) && (q_55 != u_55)))
                _fail(u_55);
              else
                q_55 = u_55;
              t = SSL_table_put(not_null(o_55), not_null(p_55), not_null(q_55));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_71 (ATerm))
{
  ATerm x_55 = NULL;
  ATerm k_18;
  k_18 = t;
  {
    t = term_l_18;
    t = table_put_0(t);
  }
  t = k_18;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm m_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_71(t);
          LocalPopChoice(p_18);
        }
      else
        {
          t = m_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_3);
    {
      ATerm c_3 (ATerm t)
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_18;
            s_18 = t;
            {
              ATerm t_18 = t;
              int u_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_16;
                  t = get_config_0(t);
                  LocalPopChoice(u_18);
                }
              else
                {
                  t = t_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_18;
            {
              t = system_usage_0(t);
              {
                t = term_e_12;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
            {
              ATerm e_3 (ATerm t)
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm y_55 = NULL;
                  y_55 = t;
                  if(((x_55 != NULL) && (x_55 != y_55)))
                    _fail(y_55);
                  else
                    x_55 = y_55;
                  return(t);
                }
                t = Undefined_1(t, f_3);
                return(t);
              }
              t = option_defined_1(t, e_3);
              {
                ATerm g_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_55)), term_v_18);
                  return(t);
                }
                t = say_1(t, g_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_9;
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
        ATerm w_18;
        w_18 = t;
        {
          t = term_g_16;
          t = table_destroy_0(t);
        }
        t = w_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm u_74 (ATerm))
{
  t = parse_options_1(t, r_74);
  {
    t = store_options_0(t);
    {
      t = t_74(t);
      {
        ATerm c_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_74);
            LocalPopChoice(h_19);
          }
        else
          {
            t = c_19;
            {
              ATerm p_19 = t;
              int q_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(q_19);
                }
              else
                {
                  t = p_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_75(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_75);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, h_3, k_75, l_75, i_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm e_75 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      ATerm t_19;
      t_19 = t;
      {
        ATerm b_56 = NULL;
        ATerm c_56 = NULL;
        t = term_s_14;
        {
          t = get_config_0(t);
          {
            c_56 = t;
            if(((b_56 != NULL) && (b_56 != c_56)))
              _fail(c_56);
            else
              b_56 = c_56;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATempty, not_null(b_56)));
          t = printnl_0(t);
        }
      }
      t = t_19;
      return(t);
    }
    t = if_verbose2_1(t, k_3);
    return(t);
  }
  t = iowrap_4(t, c_75, d_75, e_75, j_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_75 (ATerm), ATerm b_75 (ATerm))
{
  t = iowrap_3(t, a_75, b_75, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    t = _2(t, _id, x_74);
    return(t);
  }
  t = iowrap_2(t, l_3, _fail);
  return(t);
}
ATerm stratego_desugar_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm n_3 (ATerm t)
    {
      ATerm k_56 = NULL;
      ATerm s_56 = NULL;
      k_56 = t;
      {
        ATerm u_56 = NULL;
        ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
        t = not_null(k_56);
        {
          u_56 = t;
          {
            t = SSL_explode_term(not_null(u_56));
            {
              w_56 = t;
              h_56 :
              if(match_cons(w_56, sym__2))
                {
                  x_56 = ATgetArgument(w_56, 0);
                  y_56 = ATgetArgument(w_56, 1);
                  i_56 :
                  if(((ATgetType(y_56) == AT_LIST) && ((ATermList) y_56 != ATempty)))
                    {
                      z_56 = ATgetFirst((ATermList) y_56);
                      a_57 = (ATerm) ATgetNext((ATermList) y_56);
                      j_56 :
                      if(((ATermList) a_57 == ATempty))
                        {
                          if(((s_56 != NULL) && (s_56 != z_56)))
                            _fail(z_56);
                          else
                            s_56 = z_56;
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
        t = not_null(s_56);
      }
      return(t);
    }
    t = try_1(t, n_3);
    {
      ATerm o_3 (ATerm t)
      {
        t = repeat_1(t, Desugar_0);
        t = try_1(t, DesugarOnce_0);
        return(t);
      }
      t = topdown_1(t, o_3);
    }
    return(t);
  }
  t = iowrap_1(t, m_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_desugar_0(t);
  return(t);
}
