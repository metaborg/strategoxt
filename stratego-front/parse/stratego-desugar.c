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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_m_14;
ATerm term_g_14;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_x_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_d_9;
ATerm term_o_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_d_6;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_i_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_l_3;
ATerm term_k_3;
ATerm term_j_3;
ATerm term_i_3;
void init_constant_terms (void)
{
  ATprotect(&(term_i_3));
  term_i_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_4);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_5);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_Call_2, term_d_5, (ATerm) ATempty);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_4);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_5);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_Call_2, term_r_5, (ATerm) ATempty);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATempty);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_s_7);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_7);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_f_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_f_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_f_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, (ATerm) ATempty);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm r_54 (ATerm), ATerm s_54 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm d_54 (ATerm), ATerm e_54 (ATerm));
ATerm SVar_1 (ATerm, ATerm i_56 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm e_59 (ATerm), ATerm f_59 (ATerm));
ATerm SDef_3 (ATerm, ATerm a_59 (ATerm), ATerm b_59 (ATerm), ATerm c_59 (ATerm));
ATerm RDef_3 (ATerm, ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm s_55 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm d_59 (ATerm));
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_90 (ATerm));
ATerm at_last_1 (ATerm, ATerm p_82 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_1 (ATerm, ATerm d_74 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm o_89 (ATerm), ATerm p_89 (ATerm));
ATerm repeat_1 (ATerm, ATerm r_89 (ATerm));
ATerm topdown_1 (ATerm, ATerm h_86 (ATerm));
ATerm _2 (ATerm, ATerm c_52 (ATerm), ATerm d_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_72 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_69 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm crush_2 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_69 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_71 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_71 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_82 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_68 (ATerm));
ATerm map_1 (ATerm, ATerm r_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_68 (ATerm));
ATerm Program_1 (ATerm, ATerm q_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_69 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_68 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_64 (ATerm), ATerm o_64 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_68 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_68 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_70 (ATerm), ATerm u_70 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_70 (ATerm));
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_i_3);
                }
              else
                {
                  if(match_int(r_4, 110))
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_j_3);
                    }
                  else
                    {
                      if(match_int(r_4, 92))
                        {
                          t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_k_3);
                        }
                      else
                        {
                          if(match_int(r_4, 34))
                            {
                              t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_l_3);
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
        ATerm m_3 = t;
        int n_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, b_5);
            LocalPopChoice(n_3);
          }
        else
          {
            t = m_3;
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
ATerm Op_2 (ATerm t, ATerm r_54 (ATerm), ATerm s_54 (ATerm))
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
            t = r_54(t);
            {
              g_6 = t;
              {
                t = not_null(a_6);
                {
                  ATerm k_6 = NULL;
                  t = s_54(t);
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
ATerm OpDecl_2 (ATerm t, ATerm d_54 (ATerm), ATerm e_54 (ATerm))
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
            t = d_54(t);
            {
              f_7 = t;
              {
                t = not_null(z_6);
                {
                  ATerm j_7 = NULL;
                  t = e_54(t);
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
ATerm SVar_1 (ATerm t, ATerm i_56 (ATerm))
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
            t = i_56(t);
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
        ATerm o_3 = t;
        int p_3 = stack_ptr;
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
            LocalPopChoice(p_3);
          }
        else
          {
            t = o_3;
            {
              ATerm q_3 = t;
              int r_3 = stack_ptr;
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
                  LocalPopChoice(r_3);
                }
              else
                {
                  t = q_3;
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
ATerm VarDec_2 (ATerm t, ATerm e_59 (ATerm), ATerm f_59 (ATerm))
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
            t = e_59(t);
            {
              w_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm a_11 = NULL;
                  t = f_59(t);
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
ATerm SDef_3 (ATerm t, ATerm a_59 (ATerm), ATerm b_59 (ATerm), ATerm c_59 (ATerm))
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
            t = a_59(t);
            {
              y_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm c_12 = NULL;
                  t = b_59(t);
                  {
                    a_12 = t;
                    {
                      t = not_null(r_11);
                      {
                        ATerm e_12 = NULL;
                        t = c_59(t);
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
ATerm RDef_3 (ATerm t, ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm s_55 (ATerm))
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
            t = q_55(t);
            {
              d_13 = t;
              {
                t = not_null(v_12);
                {
                  ATerm h_13 = NULL;
                  t = r_55(t);
                  {
                    f_13 = t;
                    {
                      t = not_null(w_12);
                      {
                        ATerm j_13 = NULL;
                        t = s_55(t);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm d_59 (ATerm))
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
            t = d_59(t);
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
  ATerm s_3 = t;
  int t_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
      LocalPopChoice(t_3);
    }
  else
    {
      t = s_3;
      {
        ATerm u_3 = t;
        int v_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
            LocalPopChoice(v_3);
          }
        else
          {
            t = u_3;
            {
              ATerm w_3 = t;
              int x_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
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
                        t = VarDec_2(t, RemoveLeadingPrime_0, _id);
                        LocalPopChoice(z_3);
                      }
                    else
                      {
                        t = y_3;
                        {
                          ATerm a_4 = t;
                          int b_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, RemoveLeadingPrime_0);
                              LocalPopChoice(b_4);
                            }
                          else
                            {
                              t = a_4;
                              {
                                ATerm c_4 = t;
                                int d_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SVar_1(t, RemoveLeadingPrime_0);
                                    LocalPopChoice(d_4);
                                  }
                                else
                                  {
                                    t = c_4;
                                    {
                                      ATerm e_4 = t;
                                      int f_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                          LocalPopChoice(f_4);
                                        }
                                      else
                                        {
                                          t = e_4;
                                          {
                                            ATerm g_4 = t;
                                            int i_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2(t, RemoveLeadingPrime_0, _id);
                                                LocalPopChoice(i_4);
                                              }
                                            else
                                              {
                                                t = g_4;
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
ATerm try_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_90(t);
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm i_15 (ATerm t)
  {
    ATerm t_4 = t;
    int u_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = p_82(t);
        LocalPopChoice(u_4);
      }
    else
      {
        t = t_4;
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
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
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
ATerm unquote_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm j_16 = NULL;
  t = explode_string_0(t);
  {
    j_16 = t;
    {
      t = Hd_0(t);
      {
        t = d_74(t);
        {
          t = not_null(j_16);
          {
            t = last_0(t);
            {
              t = d_74(t);
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
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  ATerm j_21 (ATerm t)
  {
    t = not_null(k_18);
    {
      ATerm x_4 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_4;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_y_4, not_null(k_18));
    return(t);
  }
  ATerm k_21 (ATerm t)
  {
    t = not_null(g_18);
    return(t);
  }
  ATerm l_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(k_18)));
    return(t);
  }
  ATerm m_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(k_18)));
    return(t);
  }
  ATerm n_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_18)));
    return(t);
  }
  ATerm o_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_18)), (ATerm) ATempty);
    return(t);
  }
  ATerm p_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_18)), not_null(l_18));
    return(t);
  }
  ATerm q_21 (ATerm t)
  {
    t = not_null(k_18);
    {
      ATerm d_0 (ATerm t)
      {
        t = not_null(l_18);
        return(t);
      }
      ATerm g_0 (ATerm t)
      {
        ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
        q_19 = t;
        v_17 :
        if(match_cons(q_19, sym__2))
          {
            r_19 = ATgetArgument(q_19, 0);
            s_19 = ATgetArgument(q_19, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_a_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), not_null(r_19)));
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
  ATerm r_21 (ATerm t)
  {
    t = not_null(k_18);
    {
      ATerm h_0 (ATerm t)
      {
        t = term_e_5;
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
        w_19 = t;
        x_17 :
        if(match_cons(w_19, sym__2))
          {
            x_19 = ATgetArgument(w_19, 0);
            y_19 = ATgetArgument(w_19, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_a_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_19)), not_null(x_19)));
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
  ATerm s_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_5, (ATerm) ATinsert(CheckATermList(not_null(l_18)), not_null(k_18)));
    return(t);
  }
  ATerm t_21 (ATerm t)
  {
    t = not_null(k_18);
    return(t);
  }
  ATerm u_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(k_18), not_null(l_18), term_p_5);
    return(t);
  }
  ATerm v_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_18), not_null(l_18), term_p_5);
    return(t);
  }
  ATerm w_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(k_18), (ATerm)ATempty, not_null(l_18));
    return(t);
  }
  ATerm x_21 (ATerm t)
  {
    ATerm m_20 = NULL;
    ATerm n_20 = NULL;
    t = not_null(k_18);
    {
      t = un_double_quote_0(t);
      {
        n_20 = t;
        if(((m_20 != NULL) && (m_20 != n_20)))
          _fail(n_20);
        else
          m_20 = n_20;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(m_20), not_null(l_18));
    return(t);
  }
  ATerm y_21 (ATerm t)
  {
    ATerm p_20 = NULL;
    ATerm q_20 = NULL;
    t = not_null(k_18);
    {
      t = un_double_quote_0(t);
      {
        q_20 = t;
        if(((p_20 != NULL) && (p_20 != q_20)))
          _fail(q_20);
        else
          p_20 = q_20;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(p_20), (ATerm) ATempty);
    return(t);
  }
  ATerm z_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(k_18), (ATerm) ATempty);
    return(t);
  }
  ATerm a_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_18), (ATerm)ATempty, not_null(l_18));
    return(t);
  }
  ATerm b_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(k_18), not_null(l_18), not_null(i_18));
    return(t);
  }
  ATerm c_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(k_18), (ATerm)ATempty, not_null(l_18));
    return(t);
  }
  ATerm d_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(k_18), (ATerm)ATempty, not_null(l_18));
    return(t);
  }
  ATerm e_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_18));
    return(t);
  }
  j_18 = t;
  a_18 :
  if(match_cons(j_18, sym_SortNoArgs_1))
    {
      k_18 = ATgetArgument(j_18, 0);
      t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(k_18), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(j_18, sym_Con_2))
        {
          k_18 = ATgetArgument(j_18, 0);
          l_18 = ATgetArgument(j_18, 1);
          b_18 :
          if(match_cons(l_18, sym_Con2_2))
            {
              f_18 = ATgetArgument(l_18, 0);
              e_18 = ATgetArgument(l_18, 1);
              t = (ATerm) ATmakeAppl(sym_Con_3, not_null(k_18), not_null(f_18), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_18)), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(l_18, sym_Con1_1))
                {
                  f_18 = ATgetArgument(l_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(k_18), not_null(f_18), term_s_5);
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(j_18, sym_ListTail_2))
            {
              k_18 = ATgetArgument(j_18, 0);
              l_18 = ATgetArgument(j_18, 1);
              {
                t = not_null(k_18);
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = not_null(l_18);
                    return(t);
                  }
                  ATerm p_0 (ATerm t)
                  {
                    ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
                    v_18 = t;
                    r_17 :
                    if(match_cons(v_18, sym__2))
                      {
                        w_18 = ATgetArgument(v_18, 0);
                        x_18 = ATgetArgument(v_18, 1);
                        t = (ATerm) ATmakeAppl(sym_Op_2, term_z_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_18)), not_null(w_18)));
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
              if(match_cons(j_18, sym_List_1))
                {
                  k_18 = ATgetArgument(j_18, 0);
                  {
                    t = not_null(k_18);
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = term_t_5;
                        return(t);
                      }
                      ATerm r_0 (ATerm t)
                      {
                        ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
                        b_19 = t;
                        t_17 :
                        if(match_cons(b_19, sym__2))
                          {
                            c_19 = ATgetArgument(b_19, 0);
                            d_19 = ATgetArgument(b_19, 1);
                            t = (ATerm) ATmakeAppl(sym_Op_2, term_z_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_19)), not_null(c_19)));
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
                  if(match_cons(j_18, sym_Tuple_1))
                    {
                      k_18 = ATgetArgument(j_18, 0);
                      c_18 :
                      if(((ATgetType(k_18) == AT_LIST) && ((ATermList) k_18 != ATempty)))
                        {
                          g_18 = ATgetFirst((ATermList) k_18);
                          h_18 = (ATerm) ATgetNext((ATermList) k_18);
                          d_18 :
                          if(((ATermList) h_18 == ATempty))
                            {
                              {
                                ATerm u_5 = t;
                                int v_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = j_21(t);
                                    LocalPopChoice(v_5);
                                  }
                                else
                                  {
                                    t = u_5;
                                    t = k_21(t);
                                  }
                              }
                            }
                          else
                            {
                              t = j_21(t);
                            }
                        }
                      else
                        {
                          t = j_21(t);
                        }
                    }
                  else
                    {
                      if(match_cons(j_18, sym_RealCong_1))
                        {
                          k_18 = ATgetArgument(j_18, 0);
                          t = l_21(t);
                        }
                      else
                        {
                          if(match_cons(j_18, sym_IntCong_1))
                            {
                              k_18 = ATgetArgument(j_18, 0);
                              t = m_21(t);
                            }
                          else
                            {
                              if(match_cons(j_18, sym_StrCong_1))
                                {
                                  k_18 = ATgetArgument(j_18, 0);
                                  t = n_21(t);
                                }
                              else
                                {
                                  if(match_cons(j_18, sym_ModCongNoArgs_1))
                                    {
                                      k_18 = ATgetArgument(j_18, 0);
                                      t = o_21(t);
                                    }
                                  else
                                    {
                                      if(match_cons(j_18, sym_ModCong_2))
                                        {
                                          k_18 = ATgetArgument(j_18, 0);
                                          l_18 = ATgetArgument(j_18, 1);
                                          t = p_21(t);
                                        }
                                      else
                                        {
                                          if(match_cons(j_18, sym_ListCong_2))
                                            {
                                              k_18 = ATgetArgument(j_18, 0);
                                              l_18 = ATgetArgument(j_18, 1);
                                              t = q_21(t);
                                            }
                                          else
                                            {
                                              if(match_cons(j_18, sym_ListCongNoTail_1))
                                                {
                                                  k_18 = ATgetArgument(j_18, 0);
                                                  t = r_21(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(j_18, sym_TupleCong_2))
                                                    {
                                                      k_18 = ATgetArgument(j_18, 0);
                                                      l_18 = ATgetArgument(j_18, 1);
                                                      t = s_21(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(j_18, sym_ParenStrat_1))
                                                        {
                                                          k_18 = ATgetArgument(j_18, 0);
                                                          t = t_21(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(j_18, sym_StratRuleNoCond_2))
                                                            {
                                                              k_18 = ATgetArgument(j_18, 0);
                                                              l_18 = ATgetArgument(j_18, 1);
                                                              t = u_21(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(j_18, sym_RuleNoCond_2))
                                                                {
                                                                  k_18 = ATgetArgument(j_18, 0);
                                                                  l_18 = ATgetArgument(j_18, 1);
                                                                  t = v_21(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(j_18, sym_OverlayNoArgs_2))
                                                                    {
                                                                      k_18 = ATgetArgument(j_18, 0);
                                                                      l_18 = ATgetArgument(j_18, 1);
                                                                      t = w_21(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(j_18, sym_Prim_2))
                                                                        {
                                                                          k_18 = ATgetArgument(j_18, 0);
                                                                          l_18 = ATgetArgument(j_18, 1);
                                                                          t = x_21(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(j_18, sym_PrimNoArgs_1))
                                                                            {
                                                                              k_18 = ATgetArgument(j_18, 0);
                                                                              t = y_21(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(j_18, sym_CallNoArgs_1))
                                                                                {
                                                                                  k_18 = ATgetArgument(j_18, 0);
                                                                                  t = z_21(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(j_18, sym_SDefNoArgs_2))
                                                                                    {
                                                                                      k_18 = ATgetArgument(j_18, 0);
                                                                                      l_18 = ATgetArgument(j_18, 1);
                                                                                      t = a_22(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(j_18, sym_SRDef_3))
                                                                                        {
                                                                                          k_18 = ATgetArgument(j_18, 0);
                                                                                          l_18 = ATgetArgument(j_18, 1);
                                                                                          i_18 = ATgetArgument(j_18, 2);
                                                                                          t = b_22(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(j_18, sym_SRDefNoArgs_2))
                                                                                            {
                                                                                              k_18 = ATgetArgument(j_18, 0);
                                                                                              l_18 = ATgetArgument(j_18, 1);
                                                                                              t = c_22(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(j_18, sym_RDefNoArgs_2))
                                                                                                {
                                                                                                  k_18 = ATgetArgument(j_18, 0);
                                                                                                  l_18 = ATgetArgument(j_18, 1);
                                                                                                  t = d_22(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(j_18, sym_Module_2))
                                                                                                    {
                                                                                                      k_18 = ATgetArgument(j_18, 0);
                                                                                                      l_18 = ATgetArgument(j_18, 1);
                                                                                                      t = e_22(t);
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
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm o_89 (ATerm), ATerm p_89 (ATerm))
{
  ATerm l_22 (ATerm t)
  {
    ATerm w_5 = t;
    int b_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_89(t);
        t = l_22(t);
        LocalPopChoice(b_6);
      }
    else
      {
        t = w_5;
        t = p_89(t);
      }
    return(t);
  }
  t = l_22(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm r_89 (ATerm))
{
  t = repeat_2(t, r_89, _id);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_86 (ATerm))
{
  t = h_86(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = topdown_1(t, h_86);
      return(t);
    }
    t = _all(t, s_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_52 (ATerm), ATerm d_52 (ATerm))
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        ATerm y_22 = NULL,a_23 = NULL;
        ATerm z_22 = NULL;
        t = SSLgetAnnotations(not_null(s_22));
        {
          z_22 = t;
          if(((y_22 != NULL) && (y_22 != z_22)))
            _fail(z_22);
          else
            y_22 = z_22;
        }
        {
          t = not_null(t_22);
          {
            ATerm c_23 = NULL;
            t = c_52(t);
            {
              a_23 = t;
              {
                t = not_null(u_22);
                {
                  ATerm e_23 = NULL;
                  t = d_52(t);
                  {
                    c_23 = t;
                    {
                      ATerm f_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_23), not_null(c_23)), not_null(y_22));
                      {
                        f_23 = t;
                        if(((e_23 != NULL) && (e_23 != f_23)))
                          _fail(f_23);
                        else
                          e_23 = f_23;
                      }
                      t = not_null(e_23);
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
  ATerm n_23 = NULL;
  ATerm c_6;
  c_6 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm o_23 = NULL,p_23 = NULL;
      o_23 = t;
      m_23 :
      if(match_cons(o_23, sym_Program_1))
        {
          p_23 = ATgetArgument(o_23, 0);
          if(((n_23 != NULL) && (n_23 != p_23)))
            _fail(p_23);
          else
            n_23 = p_23;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, t_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_6), not_null(n_23)), term_h_6));
      {
        t = printnl_0(t);
        {
          t = term_m_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym__2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      {
        ATerm n_6;
        n_6 = t;
        t = SSL_printnl(not_null(u_23), not_null(v_23));
        t = n_6;
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
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym__2))
    {
      c_24 = ATgetArgument(b_24, 0);
      d_24 = ATgetArgument(b_24, 1);
      {
        t = not_null(c_24);
        {
          ATerm u_0 (ATerm t)
          {
            t = not_null(d_24);
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
ATerm debug_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm o_6;
  o_6 = t;
  {
    ATerm j_24 = NULL,l_24 = NULL;
    ATerm p_6;
    p_6 = t;
    {
      ATerm k_24 = NULL;
      t = f_72(t);
      {
        k_24 = t;
        if(((j_24 != NULL) && (j_24 != k_24)))
          _fail(k_24);
        else
          j_24 = k_24;
      }
    }
    t = p_6;
    {
      ATerm m_24 = NULL;
      m_24 = t;
      if(((l_24 != NULL) && (l_24 != m_24)))
        _fail(m_24);
      else
        l_24 = m_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_24)), not_null(j_24)));
        t = printnl_0(t);
      }
    }
  }
  t = o_6;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_is_string(not_null(q_24));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      {
        ATerm s_6 = t;
        int t_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            LocalPopChoice(t_6);
          }
        else
          {
            t = s_6;
            {
              ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
              z_24 = t;
              y_24 :
              if(match_cons(z_24, sym_Path_1))
                {
                  a_25 = ATgetArgument(z_24, 0);
                  t = not_null(a_25);
                }
              else
                {
                  if(match_cons(z_24, sym_Var_1))
                    {
                      a_25 = ATgetArgument(z_24, 0);
                      {
                        t = not_null(a_25);
                        {
                          ATerm u_6 = t;
                          int v_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_6);
                            }
                          else
                            {
                              t = u_6;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_a_7;
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
                      if(match_cons(z_24, sym_Prefix_2))
                        {
                          a_25 = ATgetArgument(z_24, 0);
                          b_25 = ATgetArgument(z_24, 1);
                          {
                            ATerm g_25 = NULL,p_25 = NULL;
                            ATerm b_7;
                            b_7 = t;
                            {
                              ATerm o_25 = NULL;
                              t = not_null(a_25);
                              {
                                t = eval_config_0(t);
                                {
                                  o_25 = t;
                                  if(((g_25 != NULL) && (g_25 != o_25)))
                                    _fail(o_25);
                                  else
                                    g_25 = o_25;
                                }
                              }
                            }
                            t = b_7;
                            {
                              ATerm q_25 = NULL;
                              t = not_null(b_25);
                              {
                                t = eval_config_0(t);
                                {
                                  q_25 = t;
                                  if(((p_25 != NULL) && (p_25 != q_25)))
                                    _fail(q_25);
                                  else
                                    p_25 = q_25;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), not_null(p_25));
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
  ATerm y_25 = NULL;
  y_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(y_25));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_7;
            g_7 = t;
            {
              ATerm a_26 = NULL;
              ATerm e_26 = NULL;
              e_26 = t;
              if(((a_26 != NULL) && (a_26 != e_26)))
                _fail(e_26);
              else
                a_26 = e_26;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_7, not_null(y_25), not_null(a_26));
                t = table_put_0(t);
              }
            }
            t = g_7;
          }
          return(t);
        }
        t = try_1(t, x_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm i_7;
    i_7 = t;
    {
      ATerm i_26 = NULL;
      ATerm j_26 = NULL;
      t = term_l_7;
      {
        t = get_config_0(t);
        {
          j_26 = t;
          if(((i_26 != NULL) && (i_26 != j_26)))
            _fail(j_26);
          else
            i_26 = j_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_26), term_m_7);
        t = geq_0(t);
      }
    }
    t = i_7;
    t = p_69(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATempty, term_n_7));
  {
    t = printnl_0(t);
    {
      t = term_m_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  t = SSL_TicksToSeconds(not_null(m_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym__2))
    {
      s_26 = ATgetArgument(r_26, 0);
      t_26 = ATgetArgument(r_26, 1);
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_26), not_null(t_26));
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            t = SSL_addr(not_null(s_26), not_null(t_26));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_76(t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
        b_27 = t;
        a_27 :
        if(((ATgetType(b_27) == AT_LIST) && ((ATermList) b_27 != ATempty)))
          {
            c_27 = ATgetFirst((ATermList) b_27);
            d_27 = (ATerm) ATgetNext((ATermList) b_27);
            {
              ATerm g_27 = NULL;
              ATerm h_27 = NULL;
              t = not_null(d_27);
              {
                t = foldr_2(t, c_76, d_76);
                {
                  h_27 = t;
                  if(((g_27 != NULL) && (g_27 != h_27)))
                    _fail(h_27);
                  else
                    g_27 = h_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_27), not_null(g_27));
                t = d_76(t);
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
ATerm crush_2 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm))
{
  ATerm o_27 = NULL;
  ATerm q_27 = NULL;
  o_27 = t;
  {
    ATerm r_27 = NULL;
    ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
    t = not_null(o_27);
    {
      r_27 = t;
      {
        t = SSL_explode_term(not_null(r_27));
        {
          t_27 = t;
          n_27 :
          if(match_cons(t_27, sym__2))
            {
              u_27 = ATgetArgument(t_27, 0);
              v_27 = ATgetArgument(t_27, 1);
              if(((q_27 != NULL) && (q_27 != v_27)))
                _fail(v_27);
              else
                q_27 = v_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_27);
      t = foldr_2(t, u_77, v_77);
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
      t = term_s_7;
      return(t);
    }
    t = crush_2(t, z_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym__2))
    {
      c_28 = ATgetArgument(b_28, 0);
      d_28 = ATgetArgument(b_28, 1);
      {
        ATerm t_7;
        t_7 = t;
        {
          ATerm x_7 = t;
          int y_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_28), not_null(d_28));
              LocalPopChoice(y_7);
            }
          else
            {
              t = x_7;
              t = SSL_gtr(not_null(c_28), not_null(d_28));
            }
        }
        t = t_7;
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
  ATerm r_28 = NULL;
  ATerm c_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
      s_28 = t;
      i_28 :
      if(match_cons(s_28, sym__2))
        {
          t_28 = ATgetArgument(s_28, 0);
          u_28 = ATgetArgument(s_28, 1);
          {
            if(((r_28 != NULL) && (r_28 != t_28)))
              _fail(t_28);
            else
              r_28 = t_28;
            if(((r_28 != NULL) && (r_28 != u_28)))
              _fail(u_28);
            else
              r_28 = u_28;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_8);
    }
  else
    {
      t = c_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_69 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm g_8;
    g_8 = t;
    {
      ATerm z_28 = NULL;
      ATerm a_29 = NULL;
      t = term_l_7;
      {
        t = get_config_0(t);
        {
          a_29 = t;
          if(((z_28 != NULL) && (z_28 != a_29)))
            _fail(a_29);
          else
            z_28 = a_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), term_m_6);
        t = geq_0(t);
      }
    }
    t = g_8;
    t = o_69(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm e_29 = NULL,i_29 = NULL;
    ATerm h_8;
    h_8 = t;
    {
      ATerm h_29 = NULL;
      t = run_time_0(t);
      {
        h_29 = t;
        if(((e_29 != NULL) && (e_29 != h_29)))
          _fail(h_29);
        else
          e_29 = h_29;
      }
    }
    t = h_8;
    {
      ATerm j_29 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          j_29 = t;
          if(((i_29 != NULL) && (i_29 != j_29)))
            _fail(j_29);
          else
            i_29 = j_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_8), not_null(e_29)), term_j_8), not_null(i_29)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_1);
  {
    t = term_s_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,c_30 = NULL;
  u_29 = t;
  n_29 :
  if(match_cons(u_29, sym__2))
    {
      v_29 = ATgetArgument(u_29, 0);
      c_30 = ATgetArgument(u_29, 1);
      t = SSL_WriteToTextFile(not_null(v_29), not_null(c_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_cons(i_30, sym__2))
    {
      j_30 = ATgetArgument(i_30, 0);
      k_30 = ATgetArgument(i_30, 1);
      t = SSL_WriteToBinaryFile(not_null(j_30), not_null(k_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_30 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm u_30 = NULL,v_30 = NULL;
            u_30 = t;
            q_30 :
            if(match_cons(u_30, sym_Output_1))
              {
                v_30 = ATgetArgument(u_30, 0);
                if(((t_30 != NULL) && (t_30 != v_30)))
                  _fail(v_30);
                else
                  t_30 = v_30;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_1);
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
          {
            ATerm w_30 = NULL;
            t = term_o_8;
            {
              w_30 = t;
              if(((t_30 != NULL) && (t_30 != w_30)))
                _fail(w_30);
              else
                t_30 = w_30;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_1, _id);
  }
  t = l_8;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(t_30);
        return(t);
      }
      t = split_2(t, f_1, _id);
      return(t);
    }
    t = _2(t, _id, e_1);
    {
      ATerm p_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              ATerm x_30 = NULL;
              x_30 = t;
              s_30 :
              if(!(match_cons(x_30, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_1);
            return(t);
          }
          t = _2(t, g_1, WriteToBinaryFile_0);
          LocalPopChoice(q_8);
        }
      else
        {
          t = p_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm d_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  ATerm r_8;
  r_8 = t;
  t = dtime_0(t);
  t = r_8;
  {
    t = p_71(t);
    {
      ATerm s_8;
      s_8 = t;
      {
        ATerm e_31 = NULL;
        t = dtime_0(t);
        {
          e_31 = t;
          if(((d_31 != NULL) && (d_31 != e_31)))
            _fail(e_31);
          else
            d_31 = e_31;
        }
      }
      t = s_8;
      {
        f_31 = t;
        c_31 :
        if(match_cons(f_31, sym__2))
          {
            g_31 = ATgetArgument(f_31, 0);
            h_31 = ATgetArgument(f_31, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_31)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_31))), not_null(h_31));
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
  ATerm n_31 = NULL;
  n_31 = t;
  t = SSL_ReadFromFile(not_null(n_31));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  ATerm s_31 = NULL,u_31 = NULL;
  ATerm t_8;
  t_8 = t;
  {
    ATerm t_31 = NULL;
    t = q_74(t);
    {
      t_31 = t;
      if(((s_31 != NULL) && (s_31 != t_31)))
        _fail(t_31);
      else
        s_31 = t_31;
    }
  }
  t = t_8;
  {
    ATerm v_31 = NULL;
    t = r_74(t);
    {
      v_31 = t;
      if(((u_31 != NULL) && (u_31 != v_31)))
        _fail(v_31);
      else
        u_31 = v_31;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_31), not_null(u_31));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_32 = NULL;
  ATerm u_8;
  u_8 = t;
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          ATerm c_32 = NULL,d_32 = NULL;
          c_32 = t;
          z_31 :
          if(match_cons(c_32, sym_Input_1))
            {
              d_32 = ATgetArgument(c_32, 0);
              if(((b_32 != NULL) && (b_32 != d_32)))
                _fail(d_32);
              else
                b_32 = d_32;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_1);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        {
          ATerm e_32 = NULL;
          t = term_d_9;
          {
            e_32 = t;
            if(((b_32 != NULL) && (b_32 != e_32)))
              _fail(e_32);
            else
              b_32 = e_32;
          }
        }
      }
  }
  t = u_8;
  {
    ATerm j_1 (ATerm t)
    {
      t = not_null(b_32);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym_Version_0))
    {
      ATerm p_32 = NULL,r_32 = NULL;
      ATerm g_9;
      g_9 = t;
      {
        ATerm q_32 = NULL;
        t = SSLgetAnnotations(not_null(l_32));
        {
          q_32 = t;
          if(((p_32 != NULL) && (p_32 != q_32)))
            _fail(q_32);
          else
            p_32 = q_32;
        }
      }
      t = g_9;
      {
        ATerm s_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_32));
        {
          s_32 = t;
          if(((r_32 != NULL) && (r_32 != s_32)))
            _fail(s_32);
          else
            r_32 = s_32;
        }
        t = not_null(r_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm h_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = h_9;
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_1);
  t = n_71(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  t = SSL_table_create(not_null(c_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_33 = NULL;
  h_33 = t;
  {
    ATerm t_9;
    t_9 = t;
    {
      t = term_w_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_9, term_x_9, not_null(h_33));
          t = table_put_0(t);
        }
      }
    }
    t = t_9;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  t = SSL_string_to_int(not_null(l_33));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,z_33 = NULL;
  t_33 = t;
  r_33 :
  if(match_string(t_33, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_33) == AT_LIST) && ((ATermList) t_33 != ATempty)))
        {
          u_33 = ATgetFirst((ATermList) t_33);
          v_33 = (ATerm) ATgetNext((ATermList) t_33);
          s_33 :
          if(((ATgetType(v_33) == AT_LIST) && ((ATermList) v_33 != ATempty)))
            {
              w_33 = ATgetFirst((ATermList) v_33);
              z_33 = (ATerm) ATgetNext((ATermList) v_33);
              {
                ATerm d_34 = NULL;
                ATerm y_9;
                y_9 = t;
                {
                  t = not_null(u_33);
                  t = j_0(t);
                }
                t = y_9;
                {
                  ATerm e_34 = NULL;
                  t = not_null(w_33);
                  {
                    t = k_0(t);
                    {
                      e_34 = t;
                      if(((d_34 != NULL) && (d_34 != e_34)))
                        _fail(e_34);
                      else
                        d_34 = e_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_33)), not_null(d_34));
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
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm v_34 = NULL;
        v_34 = t;
        i_34 :
        if(!(match_string(v_34, "-i")))
          {
            if(!(match_string(v_34, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        ATerm a_35 = NULL;
        ATerm b_10;
        b_10 = t;
        {
          ATerm w_34 = NULL;
          ATerm z_34 = NULL;
          z_34 = t;
          if(((w_34 != NULL) && (w_34 != z_34)))
            _fail(z_34);
          else
            w_34 = z_34;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_c_10, not_null(w_34));
            t = set_config_0(t);
          }
        }
        t = b_10;
        {
          ATerm b_35 = NULL;
          b_35 = t;
          if(((a_35 != NULL) && (a_35 != b_35)))
            _fail(b_35);
          else
            a_35 = b_35;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_35));
        }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_d_10;
        return(t);
      }
      t = ArgOption_3(t, l_1, m_1, n_1);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm c_35 = NULL;
              c_35 = t;
              l_34 :
              if(!(match_string(c_35, "-o")))
                {
                  if(!(match_string(c_35, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              ATerm h_35 = NULL;
              ATerm g_10;
              g_10 = t;
              {
                ATerm e_35 = NULL;
                ATerm f_35 = NULL;
                f_35 = t;
                if(((e_35 != NULL) && (e_35 != f_35)))
                  _fail(f_35);
                else
                  e_35 = f_35;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(e_35));
                  t = set_config_0(t);
                }
              }
              t = g_10;
              {
                ATerm i_35 = NULL;
                i_35 = t;
                if(((h_35 != NULL) && (h_35 != i_35)))
                  _fail(i_35);
                else
                  h_35 = i_35;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_35));
              }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              t = term_i_10;
              return(t);
            }
            t = ArgOption_3(t, o_1, p_1, q_1);
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            {
              ATerm j_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    ATerm j_35 = NULL;
                    j_35 = t;
                    o_34 :
                    if(!(match_string(j_35, "-S")))
                      {
                        if(!(match_string(j_35, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm s_1 (ATerm t)
                  {
                    t = term_l_10;
                    t = set_config_0(t);
                    t = term_m_10;
                    return(t);
                  }
                  ATerm t_1 (ATerm t)
                  {
                    t = term_r_10;
                    return(t);
                  }
                  t = Option_3(t, r_1, s_1, t_1);
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = j_10;
                  {
                    ATerm s_10 = t;
                    int t_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_1 (ATerm t)
                        {
                          ATerm k_35 = NULL;
                          k_35 = t;
                          p_34 :
                          if(!(match_string(k_35, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm v_1 (ATerm t)
                        {
                          ATerm n_35 = NULL;
                          ATerm x_10;
                          x_10 = t;
                          {
                            ATerm l_35 = NULL;
                            ATerm m_35 = NULL;
                            t = string_to_int_0(t);
                            {
                              m_35 = t;
                              if(((l_35 != NULL) && (l_35 != m_35)))
                                _fail(m_35);
                              else
                                l_35 = m_35;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_l_7, not_null(l_35));
                              t = set_config_0(t);
                            }
                          }
                          t = x_10;
                          {
                            ATerm o_35 = NULL;
                            o_35 = t;
                            if(((n_35 != NULL) && (n_35 != o_35)))
                              _fail(o_35);
                            else
                              n_35 = o_35;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_35));
                          }
                          return(t);
                        }
                        ATerm w_1 (ATerm t)
                        {
                          t = term_z_10;
                          return(t);
                        }
                        t = ArgOption_3(t, u_1, v_1, w_1);
                        LocalPopChoice(t_10);
                      }
                    else
                      {
                        t = s_10;
                        {
                          ATerm c_11 = t;
                          int d_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_1 (ATerm t)
                              {
                                ATerm p_35 = NULL;
                                p_35 = t;
                                s_34 :
                                if(!(match_string(p_35, "-v")))
                                  {
                                    if(!(match_string(p_35, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm y_1 (ATerm t)
                              {
                                t = term_g_11;
                                t = set_config_0(t);
                                t = term_h_11;
                                return(t);
                              }
                              ATerm z_1 (ATerm t)
                              {
                                t = term_i_11;
                                return(t);
                              }
                              t = Option_3(t, x_1, y_1, z_1);
                              LocalPopChoice(d_11);
                            }
                          else
                            {
                              t = c_11;
                              {
                                ATerm j_11 = t;
                                int k_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_2 (ATerm t)
                                    {
                                      ATerm q_35 = NULL;
                                      q_35 = t;
                                      t_34 :
                                      if(!(match_string(q_35, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm b_2 (ATerm t)
                                    {
                                      t = term_m_11;
                                      t = set_config_0(t);
                                      t = term_s_11;
                                      return(t);
                                    }
                                    ATerm c_2 (ATerm t)
                                    {
                                      t = term_t_11;
                                      return(t);
                                    }
                                    t = Option_3(t, a_2, b_2, c_2);
                                    LocalPopChoice(k_11);
                                  }
                                else
                                  {
                                    t = j_11;
                                    {
                                      ATerm d_2 (ATerm t)
                                      {
                                        ATerm r_35 = NULL;
                                        r_35 = t;
                                        u_34 :
                                        if(!(match_string(r_35, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm e_2 (ATerm t)
                                      {
                                        t = term_v_11;
                                        t = set_config_0(t);
                                        t = term_z_11;
                                        return(t);
                                      }
                                      ATerm f_2 (ATerm t)
                                      {
                                        t = term_b_12;
                                        return(t);
                                      }
                                      t = Option_3(t, d_2, e_2, f_2);
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
  ATerm z_35 = NULL;
  z_35 = t;
  t = SSL_table_destroy(not_null(z_35));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  t = SSL_exit(not_null(d_36));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  t = SSL_implode_string(not_null(h_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_82 (ATerm))
{
  ATerm k_36 (ATerm t)
  {
    ATerm d_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_36);
        LocalPopChoice(g_12);
      }
    else
      {
        t = d_12;
        {
          t = Nil_0(t);
          t = g_82(t);
        }
      }
    return(t);
  }
  t = k_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
        n_36 = t;
        m_36 :
        if(((ATgetType(n_36) == AT_LIST) && ((ATermList) n_36 != ATempty)))
          {
            o_36 = ATgetFirst((ATermList) n_36);
            p_36 = (ATerm) ATgetNext((ATermList) n_36);
            {
              t = not_null(o_36);
              {
                ATerm g_2 (ATerm t)
                {
                  t = not_null(p_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_2);
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
  ATerm y_36 = NULL;
  y_36 = t;
  t = SSL_explode_string(not_null(y_36));
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
ATerm long_description_1 (ATerm t, ATerm o_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm f_37 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = Cons_2(t, r_81, f_37);
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  o_37 = t;
  l_37 :
  if(((ATgetType(o_37) == AT_LIST) && ((ATermList) o_37 != ATempty)))
    {
      m_37 = ATgetFirst((ATermList) o_37);
      n_37 = (ATerm) ATgetNext((ATermList) o_37);
      {
        ATerm r_37 = NULL;
        t = not_null(n_37);
        {
          ATerm l_12;
          l_12 = t;
          {
            ATerm s_37 = NULL,u_37 = NULL,w_37 = NULL;
            ATerm m_12;
            m_12 = t;
            {
              ATerm t_37 = NULL;
              t = i_0(t);
              {
                t_37 = t;
                if(((s_37 != NULL) && (s_37 != t_37)))
                  _fail(t_37);
                else
                  s_37 = t_37;
              }
            }
            t = m_12;
            {
              ATerm v_37 = NULL;
              t = not_null(m_37);
              {
                t = f_0(t);
                {
                  v_37 = t;
                  if(((u_37 != NULL) && (u_37 != v_37)))
                    _fail(v_37);
                  else
                    u_37 = v_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_37)), not_null(u_37));
                {
                  w_37 = t;
                  if(((r_37 != NULL) && (r_37 != w_37)))
                    _fail(w_37);
                  else
                    r_37 = w_37;
                }
              }
            }
          }
          t = l_12;
          {
            ATerm h_2 (ATerm t)
            {
              t = not_null(r_37);
              return(t);
            }
            t = reverse_acc_2(t, f_0, h_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_37 == ATempty))
        {
          {
            t = term_f_11;
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
ATerm short_description_1 (ATerm t, ATerm n_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Program_1))
    {
      j_38 = ATgetArgument(i_38, 0);
      {
        ATerm m_38 = NULL,o_38 = NULL;
        ATerm n_38 = NULL;
        t = SSLgetAnnotations(not_null(i_38));
        {
          n_38 = t;
          if(((m_38 != NULL) && (m_38 != n_38)))
            _fail(n_38);
          else
            m_38 = n_38;
        }
        {
          t = not_null(j_38);
          {
            ATerm q_38 = NULL;
            t = q_59(t);
            {
              o_38 = t;
              {
                ATerm r_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(o_38)), not_null(m_38));
                {
                  r_38 = t;
                  if(((q_38 != NULL) && (q_38 != r_38)))
                    _fail(r_38);
                  else
                    q_38 = r_38;
                }
                t = not_null(q_38);
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
  ATerm a_39 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm k_2 (ATerm t)
    {
      ATerm b_39 = NULL;
      b_39 = t;
      if(((a_39 != NULL) && (a_39 != b_39)))
        _fail(b_39);
      else
        a_39 = b_39;
      return(t);
    }
    t = Program_1(t, k_2);
    return(t);
  }
  t = option_defined_1(t, j_2);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm c_39 = NULL;
      ATerm d_39 = NULL;
      t = term_f_11;
      {
        ATerm m_2 (ATerm t)
        {
          t = not_null(a_39);
          return(t);
        }
        t = short_description_1(t, m_2);
        {
          t = concat_strings_0(t);
          {
            d_39 = t;
            if(((c_39 != NULL) && (c_39 != d_39)))
              _fail(d_39);
            else
              c_39 = d_39;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATempty, not_null(c_39)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATempty, term_n_12));
      {
        t = printnl_0(t);
        {
          t = term_q_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_2 (ATerm t)
                {
                  ATerm e_39 = NULL;
                  e_39 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_39)), term_r_12));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_2);
                {
                  ATerm o_2 (ATerm t)
                  {
                    ATerm g_39 = NULL;
                    ATerm h_39 = NULL;
                    t = term_f_11;
                    {
                      ATerm p_2 (ATerm t)
                      {
                        t = not_null(a_39);
                        return(t);
                      }
                      t = long_description_1(t, p_2);
                      {
                        t = concat_strings_0(t);
                        {
                          h_39 = t;
                          if(((g_39 != NULL) && (g_39 != h_39)))
                            _fail(h_39);
                          else
                            g_39 = h_39;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_39)), term_x_12));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_2);
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
ATerm Undefined_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm r_39 = NULL,s_39 = NULL;
  r_39 = t;
  q_39 :
  if(match_cons(r_39, sym_Undefined_1))
    {
      s_39 = ATgetArgument(r_39, 0);
      {
        ATerm v_39 = NULL,x_39 = NULL;
        ATerm w_39 = NULL;
        t = SSLgetAnnotations(not_null(r_39));
        {
          w_39 = t;
          if(((v_39 != NULL) && (v_39 != w_39)))
            _fail(w_39);
          else
            v_39 = w_39;
        }
        {
          t = not_null(s_39);
          {
            ATerm z_39 = NULL;
            t = r_59(t);
            {
              x_39 = t;
              {
                ATerm a_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_39)), not_null(v_39));
                {
                  a_40 = t;
                  if(((z_39 != NULL) && (z_39 != a_40)))
                    _fail(a_40);
                  else
                    z_39 = a_40;
                }
                t = not_null(z_39);
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
ATerm fetch_1 (ATerm t, ATerm a_82 (ATerm))
{
  ATerm f_40 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_82, _id);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = Cons_2(t, _id, f_40);
      }
    return(t);
  }
  t = f_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_69 (ATerm))
{
  t = fetch_1(t, m_69);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_cons(k_40, sym_Help_0))
    {
      ATerm m_40 = NULL,o_40 = NULL;
      ATerm a_13;
      a_13 = t;
      {
        ATerm n_40 = NULL;
        t = SSLgetAnnotations(not_null(k_40));
        {
          n_40 = t;
          if(((m_40 != NULL) && (m_40 != n_40)))
            _fail(n_40);
          else
            m_40 = n_40;
        }
      }
      t = a_13;
      {
        ATerm p_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_40));
        {
          p_40 = t;
          if(((o_40 != NULL) && (o_40 != p_40)))
            _fail(p_40);
          else
            o_40 = p_40;
        }
        t = not_null(o_40);
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
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym__2))
    {
      w_40 = ATgetArgument(v_40, 0);
      x_40 = ATgetArgument(v_40, 1);
      t = SSL_table_get(not_null(w_40), not_null(x_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
  e_41 = t;
  d_41 :
  if(match_cons(e_41, sym__3))
    {
      f_41 = ATgetArgument(e_41, 0);
      g_41 = ATgetArgument(e_41, 1);
      h_41 = ATgetArgument(e_41, 2);
      {
        ATerm e_13;
        e_13 = t;
        {
          ATerm l_41 = NULL;
          ATerm m_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_41), not_null(g_41));
          {
            ATerm g_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_13);
              }
            else
              {
                t = g_13;
                t = (ATerm) ATempty;
              }
            {
              m_41 = t;
              if(((l_41 != NULL) && (l_41 != m_41)))
                _fail(m_41);
              else
                l_41 = m_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_41), not_null(g_41), (ATerm) ATinsert(CheckATermList(not_null(l_41)), not_null(h_41)));
            t = table_put_0(t);
          }
        }
        t = e_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_68 (ATerm))
{
  ATerm s_41 = NULL;
  ATerm t_41 = NULL;
  t = term_f_11;
  {
    t = s_68(t);
    {
      t_41 = t;
      if(((s_41 != NULL) && (s_41 != t_41)))
        _fail(t_41);
      else
        s_41 = t_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, not_null(s_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_string(z_41, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(z_41) == AT_LIST) && ((ATermList) z_41 != ATempty)))
        {
          a_42 = ATgetFirst((ATermList) z_41);
          b_42 = (ATerm) ATgetNext((ATermList) z_41);
          {
            ATerm e_42 = NULL;
            ATerm l_13;
            l_13 = t;
            {
              t = not_null(a_42);
              t = a_0(t);
            }
            t = l_13;
            {
              ATerm f_42 = NULL;
              t = term_f_11;
              {
                t = b_0(t);
                {
                  f_42 = t;
                  if(((e_42 != NULL) && (e_42 != f_42)))
                    _fail(f_42);
                  else
                    e_42 = f_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_42)), not_null(e_42));
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
  ATerm q_2 (ATerm t)
  {
    ATerm k_42 = NULL;
    k_42 = t;
    j_42 :
    if(!(match_string(k_42, "--help")))
      {
        if(!(match_string(k_42, "-h")))
          {
            if(!(match_string(k_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_m_13;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_n_13;
    return(t);
  }
  t = Option_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
  n_42 = t;
  m_42 :
  if(((ATgetType(n_42) == AT_LIST) && ((ATermList) n_42 != ATempty)))
    {
      o_42 = ATgetFirst((ATermList) n_42);
      p_42 = (ATerm) ATgetNext((ATermList) n_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_64 (ATerm), ATerm o_64 (ATerm))
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  z_42 = t;
  y_42 :
  if(((ATgetType(z_42) == AT_LIST) && ((ATermList) z_42 != ATempty)))
    {
      a_43 = ATgetFirst((ATermList) z_42);
      b_43 = (ATerm) ATgetNext((ATermList) z_42);
      {
        ATerm g_43 = NULL,i_43 = NULL;
        ATerm h_43 = NULL;
        t = SSLgetAnnotations(not_null(z_42));
        {
          h_43 = t;
          if(((g_43 != NULL) && (g_43 != h_43)))
            _fail(h_43);
          else
            g_43 = h_43;
        }
        {
          t = not_null(a_43);
          {
            ATerm k_43 = NULL;
            t = n_64(t);
            {
              i_43 = t;
              {
                t = not_null(b_43);
                {
                  ATerm m_43 = NULL;
                  t = o_64(t);
                  {
                    k_43 = t;
                    {
                      ATerm n_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_43)), not_null(i_43)), not_null(g_43));
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
  ATerm x_43 = NULL;
  x_43 = t;
  w_43 :
  if(((ATermList) x_43 == ATempty))
    {
      {
        ATerm z_43 = NULL,b_44 = NULL;
        ATerm o_13;
        o_13 = t;
        {
          ATerm a_44 = NULL;
          t = SSLgetAnnotations(not_null(x_43));
          {
            a_44 = t;
            if(((z_43 != NULL) && (z_43 != a_44)))
              _fail(a_44);
            else
              z_43 = a_44;
          }
        }
        t = o_13;
        {
          ATerm c_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_43));
          {
            c_44 = t;
            if(((b_44 != NULL) && (b_44 != c_44)))
              _fail(c_44);
            else
              b_44 = c_44;
          }
          t = not_null(b_44);
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
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
  i_44 = t;
  h_44 :
  if(match_cons(i_44, sym__2))
    {
      j_44 = ATgetArgument(i_44, 0);
      k_44 = ATgetArgument(i_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_7, not_null(j_44), not_null(k_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm p_13;
  p_13 = t;
  {
    ATerm t_2 (ATerm t)
    {
      t = term_q_13;
      t = q_68(t);
      return(t);
    }
    t = try_1(t, t_2);
  }
  t = p_13;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm s_44 = NULL;
      ATerm r_13;
      r_13 = t;
      {
        ATerm q_44 = NULL;
        ATerm r_44 = NULL;
        r_44 = t;
        if(((q_44 != NULL) && (q_44 != r_44)))
          _fail(r_44);
        else
          q_44 = r_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_8, not_null(q_44));
          t = set_config_0(t);
        }
      }
      t = r_13;
      {
        ATerm t_44 = NULL;
        t_44 = t;
        if(((s_44 != NULL) && (s_44 != t_44)))
          _fail(t_44);
        else
          s_44 = t_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_44));
      }
      return(t);
    }
    ATerm v_2 (ATerm t)
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_13);
            }
          else
            {
              t = u_13;
              {
                t = q_68(t);
                t = Cons_2(t, _id, v_2);
              }
            }
          LocalPopChoice(t_13);
        }
      else
        {
          t = s_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_2, v_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  ATerm z_13;
  z_13 = t;
  {
    ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
    c_45 = t;
    y_44 :
    if(match_cons(c_45, sym__3))
      {
        d_45 = ATgetArgument(c_45, 0);
        e_45 = ATgetArgument(c_45, 1);
        f_45 = ATgetArgument(c_45, 2);
        {
          if(((z_44 != NULL) && (z_44 != d_45)))
            _fail(d_45);
          else
            z_44 = d_45;
          {
            if(((a_45 != NULL) && (a_45 != e_45)))
              _fail(e_45);
            else
              a_45 = e_45;
            {
              if(((b_45 != NULL) && (b_45 != f_45)))
                _fail(f_45);
              else
                b_45 = f_45;
              t = SSL_table_put(not_null(z_44), not_null(a_45), not_null(b_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm i_45 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    t = term_g_14;
    t = table_put_0(t);
  }
  t = d_14;
  {
    ATerm w_2 (ATerm t)
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_68(t);
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_2);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_s_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            {
              ATerm y_2 (ATerm t)
              {
                ATerm z_2 (ATerm t)
                {
                  ATerm j_45 = NULL;
                  j_45 = t;
                  if(((i_45 != NULL) && (i_45 != j_45)))
                    _fail(j_45);
                  else
                    i_45 = j_45;
                  return(t);
                }
                t = Undefined_1(t, z_2);
                return(t);
              }
              t = option_defined_1(t, y_2);
              {
                ATerm l_14;
                l_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_45)), term_m_14));
                  t = printnl_0(t);
                }
                t = l_14;
                {
                  t = system_usage_0(t);
                  {
                    t = term_m_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_2);
      {
        ATerm n_14;
        n_14 = t;
        {
          t = term_o_12;
          t = table_destroy_0(t);
        }
        t = n_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_71(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, a_3);
  {
    t = store_options_0(t);
    {
      t = e_71(t);
      {
        ATerm t_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_71);
            LocalPopChoice(w_14);
          }
        else
          {
            t = t_14;
            {
              ATerm z_14 = t;
              int c_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, b_71);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(c_15);
                }
              else
                {
                  t = z_14;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm c_3 (ATerm t)
    {
      ATerm d_15;
      d_15 = t;
      {
        ATerm m_45 = NULL;
        ATerm n_45 = NULL;
        t = term_i_8;
        {
          t = get_config_0(t);
          {
            n_45 = t;
            if(((m_45 != NULL) && (m_45 != n_45)))
              _fail(n_45);
            else
              m_45 = n_45;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATempty, not_null(m_45)));
          t = printnl_0(t);
        }
      }
      t = d_15;
      return(t);
    }
    t = if_verbose2_1(t, c_3);
    return(t);
  }
  t = iowrap_4(t, v_70, w_70, x_70, b_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm))
{
  t = iowrap_3(t, t_70, u_70, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_70 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    t = _2(t, _id, q_70);
    return(t);
  }
  t = iowrap_2(t, e_3, _fail);
  return(t);
}
ATerm stratego_desugar_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      ATerm v_45 = NULL;
      ATerm x_45 = NULL;
      v_45 = t;
      {
        ATerm y_45 = NULL;
        ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
        t = not_null(v_45);
        {
          y_45 = t;
          {
            t = SSL_explode_term(not_null(y_45));
            {
              a_46 = t;
              s_45 :
              if(match_cons(a_46, sym__2))
                {
                  b_46 = ATgetArgument(a_46, 0);
                  c_46 = ATgetArgument(a_46, 1);
                  t_45 :
                  if(((ATgetType(c_46) == AT_LIST) && ((ATermList) c_46 != ATempty)))
                    {
                      d_46 = ATgetFirst((ATermList) c_46);
                      e_46 = (ATerm) ATgetNext((ATermList) c_46);
                      u_45 :
                      if(((ATermList) e_46 == ATempty))
                        {
                          if(((x_45 != NULL) && (x_45 != d_46)))
                            _fail(d_46);
                          else
                            x_45 = d_46;
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
        t = not_null(x_45);
      }
      return(t);
    }
    t = try_1(t, g_3);
    {
      ATerm h_3 (ATerm t)
      {
        t = repeat_1(t, Desugar_0);
        t = try_1(t, DesugarOnce_0);
        return(t);
      }
      t = topdown_1(t, h_3);
    }
    return(t);
  }
  t = iowrap_1(t, f_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_desugar_0(t);
  return(t);
}
