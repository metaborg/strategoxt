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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
Symbol sym_CUT_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  init_constant_terms();
}
ATerm term_d_20;
ATerm term_d_19;
ATerm term_t_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_t_14;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_z_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_a_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_n_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_w_3;
ATerm term_v_3;
ATerm term_t_3;
ATerm term_r_3;
void init_constant_terms (void)
{
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_6);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_6);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Call_2, term_i_6, (ATerm) ATempty);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Call_2, term_n_6, (ATerm) ATempty);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Op_2, term_h_6, (ATerm) ATempty);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Call_2, term_e_7, (ATerm) ATempty);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_n_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_n_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_n_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_n_12);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym__3, term_t_16, term_u_16, (ATerm) ATempty);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm t_63 (ATerm), ATerm u_63 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm f_63 (ATerm), ATerm g_63 (ATerm));
ATerm SVar_1 (ATerm, ATerm m_66 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm x_68 (ATerm), ATerm y_68 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm d_69 (ATerm));
ATerm RDef_3 (ATerm, ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm o_65 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm w_68 (ATerm));
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_69 (ATerm));
ATerm at_last_1 (ATerm, ATerm a_78 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm q_86 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm b_87 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm x_69 (ATerm), ATerm y_69 (ATerm));
ATerm repeat_1 (ATerm, ATerm a_70 (ATerm));
ATerm topdown_1 (ATerm, ATerm x_70 (ATerm));
ATerm _2 (ATerm, ATerm b_56 (ATerm), ATerm c_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_77 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm w_90 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_89 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_85 (ATerm), ATerm e_85 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm crush_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_90 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_89 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_92 (ATerm));
ATerm map_1 (ATerm, ATerm a_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_92 (ATerm));
ATerm Program_1 (ATerm, ATerm i_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_88 (ATerm));
ATerm Undefined_1 (ATerm, ATerm j_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_91 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_93 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_57 (ATerm), ATerm l_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_89 (ATerm), ATerm r_89 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_89 (ATerm));
ATerm stratego_desugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm l_4 = NULL,m_4 = NULL;
  g_4 = t;
  {
    ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
    t = not_null(g_4);
    {
      t = explode_string_0(t);
      {
        o_4 = t;
        s_3 :
        if(((ATgetType(o_4) == AT_LIST) && !(ATisEmpty(o_4))))
          {
            p_4 = ATgetFirst((ATermList) o_4);
            q_4 = (ATerm) ATgetNext((ATermList) o_4);
            u_3 :
            if(match_int(p_4, 39))
              {
                ATerm r_4 = NULL;
                if(((l_4 != NULL) && (l_4 != q_4)))
                  _fail(q_4);
                else
                  l_4 = q_4;
                {
                  t = not_null(l_4);
                  {
                    t = implode_string_0(t);
                    {
                      r_4 = t;
                      if(((m_4 != NULL) && (m_4 != r_4)))
                        _fail(r_4);
                      else
                        m_4 = r_4;
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
    t = not_null(m_4);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm t_63 (ATerm), ATerm u_63 (ATerm))
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Op_2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      {
        ATerm l_5 = NULL,n_5 = NULL;
        ATerm m_5 = NULL;
        t = SSLgetAnnotations(not_null(f_5));
        {
          m_5 = t;
          if(((l_5 != NULL) && (l_5 != m_5)))
            _fail(m_5);
          else
            l_5 = m_5;
        }
        {
          t = not_null(g_5);
          {
            ATerm p_5 = NULL;
            t = t_63(t);
            {
              n_5 = t;
              {
                t = not_null(h_5);
                {
                  ATerm r_5 = NULL;
                  t = u_63(t);
                  {
                    p_5 = t;
                    {
                      ATerm s_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(n_5), not_null(p_5)), not_null(l_5));
                      {
                        s_5 = t;
                        if(((r_5 != NULL) && (r_5 != s_5)))
                          _fail(s_5);
                        else
                          r_5 = s_5;
                      }
                      t = not_null(r_5);
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
ATerm OpDecl_2 (ATerm t, ATerm f_63 (ATerm), ATerm g_63 (ATerm))
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_OpDecl_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        ATerm k_6 = NULL,m_6 = NULL;
        ATerm l_6 = NULL;
        t = SSLgetAnnotations(not_null(e_6));
        {
          l_6 = t;
          if(((k_6 != NULL) && (k_6 != l_6)))
            _fail(l_6);
          else
            k_6 = l_6;
        }
        {
          t = not_null(f_6);
          {
            ATerm o_6 = NULL;
            t = f_63(t);
            {
              m_6 = t;
              {
                t = not_null(g_6);
                {
                  ATerm q_6 = NULL;
                  t = g_63(t);
                  {
                    o_6 = t;
                    {
                      ATerm r_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(m_6), not_null(o_6)), not_null(k_6));
                      {
                        r_6 = t;
                        if(((q_6 != NULL) && (q_6 != r_6)))
                          _fail(r_6);
                        else
                          q_6 = r_6;
                      }
                      t = not_null(q_6);
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
ATerm SVar_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_SVar_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      {
        ATerm g_7 = NULL,i_7 = NULL;
        ATerm h_7 = NULL;
        t = SSLgetAnnotations(not_null(c_7));
        {
          h_7 = t;
          if(((g_7 != NULL) && (g_7 != h_7)))
            _fail(h_7);
          else
            g_7 = h_7;
        }
        {
          t = not_null(d_7);
          {
            ATerm k_7 = NULL;
            t = m_66(t);
            {
              i_7 = t;
              {
                ATerm l_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(i_7)), not_null(g_7));
                {
                  l_7 = t;
                  if(((k_7 != NULL) && (k_7 != l_7)))
                    _fail(l_7);
                  else
                    k_7 = l_7;
                }
                t = not_null(k_7);
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
  ATerm d_8 = NULL,e_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym_Var_1))
    {
      e_8 = ATgetArgument(d_8, 0);
      {
        ATerm n_3 = t;
        int o_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 = NULL,j_8 = NULL;
            ATerm i_8 = NULL;
            t = SSLgetAnnotations(not_null(d_8));
            {
              i_8 = t;
              if(((h_8 != NULL) && (h_8 != i_8)))
                _fail(i_8);
              else
                h_8 = i_8;
            }
            {
              t = not_null(e_8);
              {
                ATerm l_8 = NULL;
                t = m_0(t);
                {
                  j_8 = t;
                  {
                    ATerm m_8 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_8)), not_null(h_8));
                    {
                      m_8 = t;
                      if(((l_8 != NULL) && (l_8 != m_8)))
                        _fail(m_8);
                      else
                        l_8 = m_8;
                    }
                    t = not_null(l_8);
                  }
                }
              }
            }
            LocalPopChoice(o_3);
          }
        else
          {
            t = n_3;
            {
              ATerm p_3 = t;
              int q_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_8 = NULL,r_8 = NULL;
                  ATerm q_8 = NULL;
                  t = SSLgetAnnotations(not_null(d_8));
                  {
                    q_8 = t;
                    if(((p_8 != NULL) && (p_8 != q_8)))
                      _fail(q_8);
                    else
                      p_8 = q_8;
                  }
                  {
                    t = not_null(e_8);
                    {
                      ATerm t_8 = NULL;
                      t = m_0(t);
                      {
                        r_8 = t;
                        {
                          ATerm u_8 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_8)), not_null(p_8));
                          {
                            u_8 = t;
                            if(((t_8 != NULL) && (t_8 != u_8)))
                              _fail(u_8);
                            else
                              t_8 = u_8;
                          }
                          t = not_null(t_8);
                        }
                      }
                    }
                  }
                  LocalPopChoice(q_3);
                }
              else
                {
                  t = p_3;
                  {
                    ATerm x_8 = NULL,z_8 = NULL;
                    ATerm y_8 = NULL;
                    t = SSLgetAnnotations(not_null(d_8));
                    {
                      y_8 = t;
                      if(((x_8 != NULL) && (x_8 != y_8)))
                        _fail(y_8);
                      else
                        x_8 = y_8;
                    }
                    {
                      t = not_null(e_8);
                      {
                        ATerm b_9 = NULL;
                        t = m_0(t);
                        {
                          z_8 = t;
                          {
                            ATerm c_9 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_8)), not_null(x_8));
                            {
                              c_9 = t;
                              if(((b_9 != NULL) && (b_9 != c_9)))
                                _fail(c_9);
                              else
                                b_9 = c_9;
                            }
                            t = not_null(b_9);
                          }
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
ATerm VarDec_2 (ATerm t, ATerm x_68 (ATerm), ATerm y_68 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_VarDec_2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        ATerm b_10 = NULL,d_10 = NULL;
        ATerm c_10 = NULL;
        t = SSLgetAnnotations(not_null(v_9));
        {
          c_10 = t;
          if(((b_10 != NULL) && (b_10 != c_10)))
            _fail(c_10);
          else
            b_10 = c_10;
        }
        {
          t = not_null(w_9);
          {
            ATerm f_10 = NULL;
            t = x_68(t);
            {
              d_10 = t;
              {
                t = not_null(x_9);
                {
                  ATerm h_10 = NULL;
                  t = y_68(t);
                  {
                    f_10 = t;
                    {
                      ATerm i_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_10), not_null(f_10)), not_null(b_10));
                      {
                        i_10 = t;
                        if(((h_10 != NULL) && (h_10 != i_10)))
                          _fail(i_10);
                        else
                          h_10 = i_10;
                      }
                      t = not_null(h_10);
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
ATerm SDef_3 (ATerm t, ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm d_69 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_SDef_3))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      y_10 = ATgetArgument(v_10, 2);
      {
        ATerm d_11 = NULL,f_11 = NULL;
        ATerm e_11 = NULL;
        t = SSLgetAnnotations(not_null(v_10));
        {
          e_11 = t;
          if(((d_11 != NULL) && (d_11 != e_11)))
            _fail(e_11);
          else
            d_11 = e_11;
        }
        {
          t = not_null(w_10);
          {
            ATerm h_11 = NULL;
            t = b_69(t);
            {
              f_11 = t;
              {
                t = not_null(x_10);
                {
                  ATerm j_11 = NULL;
                  t = c_69(t);
                  {
                    h_11 = t;
                    {
                      t = not_null(y_10);
                      {
                        ATerm l_11 = NULL;
                        t = d_69(t);
                        {
                          j_11 = t;
                          {
                            ATerm m_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(f_11), not_null(h_11), not_null(j_11)), not_null(d_11));
                            {
                              m_11 = t;
                              if(((l_11 != NULL) && (l_11 != m_11)))
                                _fail(m_11);
                              else
                                l_11 = m_11;
                            }
                            t = not_null(l_11);
                          }
                        }
                      }
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
ATerm RDef_3 (ATerm t, ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm o_65 (ATerm))
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  a_12 = t;
  z_11 :
  if(match_cons(a_12, sym_RDef_3))
    {
      b_12 = ATgetArgument(a_12, 0);
      c_12 = ATgetArgument(a_12, 1);
      d_12 = ATgetArgument(a_12, 2);
      {
        ATerm i_12 = NULL,k_12 = NULL;
        ATerm j_12 = NULL;
        t = SSLgetAnnotations(not_null(a_12));
        {
          j_12 = t;
          if(((i_12 != NULL) && (i_12 != j_12)))
            _fail(j_12);
          else
            i_12 = j_12;
        }
        {
          t = not_null(b_12);
          {
            ATerm m_12 = NULL;
            t = m_65(t);
            {
              k_12 = t;
              {
                t = not_null(c_12);
                {
                  ATerm o_12 = NULL;
                  t = n_65(t);
                  {
                    m_12 = t;
                    {
                      t = not_null(d_12);
                      {
                        ATerm q_12 = NULL;
                        t = o_65(t);
                        {
                          o_12 = t;
                          {
                            ATerm r_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(k_12), not_null(m_12), not_null(o_12)), not_null(i_12));
                            {
                              r_12 = t;
                              if(((q_12 != NULL) && (q_12 != r_12)))
                                _fail(r_12);
                              else
                                q_12 = r_12;
                            }
                            t = not_null(q_12);
                          }
                        }
                      }
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
ATerm DefaultVarDec_1 (ATerm t, ATerm w_68 (ATerm))
{
  ATerm d_13 = NULL,e_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_DefaultVarDec_1))
    {
      e_13 = ATgetArgument(d_13, 0);
      {
        ATerm h_13 = NULL,j_13 = NULL;
        ATerm i_13 = NULL;
        t = SSLgetAnnotations(not_null(d_13));
        {
          i_13 = t;
          if(((h_13 != NULL) && (h_13 != i_13)))
            _fail(i_13);
          else
            h_13 = i_13;
        }
        {
          t = not_null(e_13);
          {
            ATerm l_13 = NULL;
            t = w_68(t);
            {
              j_13 = t;
              {
                ATerm m_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(j_13)), not_null(h_13));
                {
                  m_13 = t;
                  if(((l_13 != NULL) && (l_13 != m_13)))
                    _fail(m_13);
                  else
                    l_13 = m_13;
                }
                t = not_null(l_13);
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
ATerm string_to_real_0 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  t = SSL_string_to_real(not_null(s_13));
  return(t);
}
ATerm UnEscape_tab_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  a_14 = t;
  w_13 :
  if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
    {
      b_14 = ATgetFirst((ATermList) a_14);
      c_14 = (ATerm) ATgetNext((ATermList) a_14);
      x_13 :
      if(match_int(b_14, 92))
        {
          y_13 :
          if(((ATgetType(c_14) == AT_LIST) && !(ATisEmpty(c_14))))
            {
              d_14 = ATgetFirst((ATermList) c_14);
              e_14 = (ATerm) ATgetNext((ATermList) c_14);
              z_13 :
              if(match_int(d_14, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_14)), term_r_3);
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
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  m_14 = t;
  i_14 :
  if(((ATgetType(m_14) == AT_LIST) && !(ATisEmpty(m_14))))
    {
      n_14 = ATgetFirst((ATermList) m_14);
      o_14 = (ATerm) ATgetNext((ATermList) m_14);
      j_14 :
      if(match_int(n_14, 92))
        {
          k_14 :
          if(((ATgetType(o_14) == AT_LIST) && !(ATisEmpty(o_14))))
            {
              p_14 = ATgetFirst((ATermList) o_14);
              q_14 = (ATerm) ATgetNext((ATermList) o_14);
              l_14 :
              if(match_int(p_14, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_14)), term_t_3);
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
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  y_14 = t;
  u_14 :
  if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
    {
      z_14 = ATgetFirst((ATermList) y_14);
      a_15 = (ATerm) ATgetNext((ATermList) y_14);
      v_14 :
      if(match_int(z_14, 92))
        {
          w_14 :
          if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
            {
              b_15 = ATgetFirst((ATermList) a_15);
              c_15 = (ATerm) ATgetNext((ATermList) a_15);
              x_14 :
              if(match_int(b_15, 92))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_15)), term_v_3);
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
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  k_15 = t;
  g_15 :
  if(((ATgetType(k_15) == AT_LIST) && !(ATisEmpty(k_15))))
    {
      l_15 = ATgetFirst((ATermList) k_15);
      m_15 = (ATerm) ATgetNext((ATermList) k_15);
      h_15 :
      if(match_int(l_15, 92))
        {
          i_15 :
          if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
            {
              n_15 = ATgetFirst((ATermList) m_15);
              o_15 = (ATerm) ATgetNext((ATermList) m_15);
              j_15 :
              if(match_int(n_15, 34))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_15)), term_w_3);
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
  ATerm x_3 = t;
  int y_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
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
            t = UnEscape_backslash_0(t);
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
                  t = UnEscape_linefeed_0(t);
                  LocalPopChoice(c_4);
                }
              else
                {
                  t = b_4;
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
  ATerm d_4 = t;
  int e_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_0(t);
      LocalPopChoice(e_4);
    }
  else
    {
      t = d_4;
      {
      }
    }
  {
    ATerm f_4 = t;
    int h_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        LocalPopChoice(h_4);
      }
    else
      {
        t = f_4;
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
ATerm DesugarOnce_0 (ATerm t)
{
  ATerm i_4 = t;
  int j_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
      b_16 = t;
      a_16 :
      if(match_cons(b_16, sym_Str_1))
        {
          c_16 = ATgetArgument(b_16, 0);
          {
            ATerm g_16 = NULL;
            ATerm i_16 = NULL;
            t = not_null(c_16);
            {
              ATerm b_0 (ATerm t)
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm h_16 = NULL;
                  h_16 = t;
                  w_15 :
                  if(!(match_int(h_16, 34)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = unquote_chars_1(t, c_0);
                return(t);
              }
              t = string_as_chars_1(t, b_0);
              {
                t = string_as_chars_1(t, unescape_chars_0);
                {
                  i_16 = t;
                  if(((g_16 != NULL) && (g_16 != i_16)))
                    _fail(i_16);
                  else
                    g_16 = i_16;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(g_16));
          }
        }
      else
        {
          if(match_cons(b_16, sym_Real_1))
            {
              c_16 = ATgetArgument(b_16, 0);
              {
                ATerm k_16 = NULL;
                ATerm l_16 = NULL;
                t = not_null(c_16);
                {
                  t = string_to_real_0(t);
                  {
                    l_16 = t;
                    if(((k_16 != NULL) && (k_16 != l_16)))
                      _fail(l_16);
                    else
                      k_16 = l_16;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(k_16));
              }
            }
          else
            {
              if(match_cons(b_16, sym_Int_1))
                {
                  c_16 = ATgetArgument(b_16, 0);
                  {
                    ATerm n_16 = NULL;
                    ATerm o_16 = NULL;
                    t = not_null(c_16);
                    {
                      t = string_to_int_0(t);
                      {
                        o_16 = t;
                        if(((n_16 != NULL) && (n_16 != o_16)))
                          _fail(o_16);
                        else
                          n_16 = o_16;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Int_1, not_null(n_16));
                  }
                }
              else
                {
                  if(match_cons(b_16, sym_Con_3))
                    {
                      c_16 = ATgetArgument(b_16, 0);
                      d_16 = ATgetArgument(b_16, 1);
                      e_16 = ATgetArgument(b_16, 2);
                      {
                        t = not_null(e_16);
                        t = is_string_0(t);
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(c_16), not_null(d_16), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_16)), (ATerm) ATempty));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
        }
      LocalPopChoice(j_4);
    }
  else
    {
      t = i_4;
      {
        ATerm k_4 = t;
        int n_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
            LocalPopChoice(n_4);
          }
        else
          {
            t = k_4;
            {
              ATerm s_4 = t;
              int t_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
                  LocalPopChoice(t_4);
                }
              else
                {
                  t = s_4;
                  {
                    ATerm u_4 = t;
                    int v_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
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
                              t = VarDec_2(t, RemoveLeadingPrime_0, _id);
                              LocalPopChoice(x_4);
                            }
                          else
                            {
                              t = w_4;
                              {
                                ATerm y_4 = t;
                                int z_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1(t, RemoveLeadingPrime_0);
                                    LocalPopChoice(z_4);
                                  }
                                else
                                  {
                                    t = y_4;
                                    {
                                      ATerm a_5 = t;
                                      int b_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1(t, RemoveLeadingPrime_0);
                                          LocalPopChoice(b_5);
                                        }
                                      else
                                        {
                                          t = a_5;
                                          {
                                            ATerm c_5 = t;
                                            int d_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                                LocalPopChoice(d_5);
                                              }
                                            else
                                              {
                                                t = c_5;
                                                t = Op_2(t, RemoveLeadingPrime_0, _id);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm try_1 (ATerm t, ATerm i_69 (ATerm))
{
  ATerm i_5 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_69(t);
      LocalPopChoice(j_5);
    }
  else
    {
      t = i_5;
      {
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm z_16 (ATerm t)
  {
    ATerm k_5 = t;
    int o_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = a_78(t);
        LocalPopChoice(o_5);
      }
    else
      {
        t = k_5;
        t = Cons_2(t, _id, z_16);
      }
    return(t);
  }
  t = z_16(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(((ATgetType(c_17) == AT_LIST) && !(ATisEmpty(c_17))))
    {
      d_17 = ATgetFirst((ATermList) c_17);
      e_17 = (ATerm) ATgetNext((ATermList) c_17);
      t = not_null(e_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  j_17 :
  if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
    {
      m_17 = ATgetFirst((ATermList) l_17);
      n_17 = (ATerm) ATgetNext((ATermList) l_17);
      k_17 :
      if(((ATgetType(n_17) == AT_LIST) && ATisEmpty(n_17)))
        {
          t = not_null(m_17);
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
  ATerm q_5 = t;
  int t_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(t_5);
    }
  else
    {
      t = q_5;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
    {
      u_17 = ATgetFirst((ATermList) t_17);
      v_17 = (ATerm) ATgetNext((ATermList) t_17);
      t = not_null(u_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm u_5;
  u_5 = t;
  {
    t = Hd_0(t);
    t = q_86(t);
  }
  t = u_5;
  {
    ATerm v_5;
    v_5 = t;
    {
      t = last_0(t);
      t = q_86(t);
    }
    t = v_5;
    {
      t = Tl_0(t);
      t = at_last_1(t, Tl_0);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm a_18 = NULL;
    a_18 = t;
    z_17 :
    if(!(match_int(a_18, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, e_0);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm b_87 (ATerm))
{
  t = explode_string_0(t);
  {
    t = b_87(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      ATerm c_18 = NULL;
      c_18 = t;
      b_18 :
      if(!(match_int(c_18, 34)))
        {
          _fail(t);
        }
      return(t);
    }
    t = unquote_chars_1(t, n_0);
    return(t);
  }
  t = string_as_chars_1(t, f_0);
  return(t);
}
ATerm DesugarCharGeneric_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  k_18 = t;
  e_18 :
  if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
    {
      l_18 = ATgetFirst((ATermList) k_18);
      m_18 = (ATerm) ATgetNext((ATermList) k_18);
      f_18 :
      if(match_int(l_18, 39))
        {
          g_18 :
          if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
            {
              n_18 = ATgetFirst((ATermList) m_18);
              o_18 = (ATerm) ATgetNext((ATermList) m_18);
              h_18 :
              if(((ATgetType(o_18) == AT_LIST) && !(ATisEmpty(o_18))))
                {
                  p_18 = ATgetFirst((ATermList) o_18);
                  q_18 = (ATerm) ATgetNext((ATermList) o_18);
                  i_18 :
                  if(match_int(p_18, 39))
                    {
                      j_18 :
                      if(((ATgetType(q_18) == AT_LIST) && ATisEmpty(q_18)))
                        {
                          t = not_null(n_18);
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
  ATerm z_18 = NULL;
  z_18 = t;
  y_18 :
  if(match_string(z_18, "'\\ '"))
    {
      t = term_w_5;
    }
  else
    {
      if(match_string(z_18, "'\\r'"))
        {
          t = term_x_5;
        }
      else
        {
          if(match_string(z_18, "'\\t'"))
            {
              t = term_r_3;
            }
          else
            {
              if(match_string(z_18, "'\\n'"))
                {
                  t = term_t_3;
                }
              else
                {
                  if(match_string(z_18, "'\\''"))
                    {
                      t = term_y_5;
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
  ATerm m_19 = NULL;
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  m_19 = t;
  {
    ATerm r_19 = NULL;
    ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
    t = not_null(m_19);
    {
      r_19 = t;
      {
        t = SSL_explode_term(not_null(r_19));
        {
          t_19 = t;
          i_19 :
          if(match_cons(t_19, sym__2))
            {
              u_19 = ATgetArgument(t_19, 0);
              v_19 = ATgetArgument(t_19, 1);
              j_19 :
              if(match_string(u_19, ""))
                {
                  k_19 :
                  if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
                    {
                      w_19 = ATgetFirst((ATermList) v_19);
                      x_19 = (ATerm) ATgetNext((ATermList) v_19);
                      l_19 :
                      if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
                        {
                          y_19 = ATgetFirst((ATermList) x_19);
                          z_19 = (ATerm) ATgetNext((ATermList) x_19);
                          {
                            if(((o_19 != NULL) && (o_19 != w_19)))
                              _fail(w_19);
                            else
                              o_19 = w_19;
                            {
                              if(((q_19 != NULL) && (q_19 != y_19)))
                                _fail(y_19);
                              else
                                q_19 = y_19;
                              if(((p_19 != NULL) && (p_19 != z_19)))
                                _fail(z_19);
                              else
                                p_19 = z_19;
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
    t = not_null(q_19);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm j_20 = NULL;
  ATerm l_20 = NULL,m_20 = NULL;
  j_20 = t;
  {
    ATerm n_20 = NULL;
    ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
    t = not_null(j_20);
    {
      n_20 = t;
      {
        t = SSL_explode_term(not_null(n_20));
        {
          p_20 = t;
          g_20 :
          if(match_cons(p_20, sym__2))
            {
              q_20 = ATgetArgument(p_20, 0);
              r_20 = ATgetArgument(p_20, 1);
              h_20 :
              if(match_string(q_20, ""))
                {
                  i_20 :
                  if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
                    {
                      s_20 = ATgetFirst((ATermList) r_20);
                      t_20 = (ATerm) ATgetNext((ATermList) r_20);
                      {
                        if(((m_20 != NULL) && (m_20 != s_20)))
                          _fail(s_20);
                        else
                          m_20 = s_20;
                        if(((l_20 != NULL) && (l_20 != t_20)))
                          _fail(t_20);
                        else
                          l_20 = t_20;
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
    t = not_null(m_20);
  }
  return(t);
}
ATerm Desugar_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  ATerm o_30 (ATerm t)
  {
    t = not_null(i_23);
    {
      ATerm z_5 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_5;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_a_6, not_null(i_23));
    return(t);
  }
  ATerm p_30 (ATerm t)
  {
    t = not_null(d_23);
    return(t);
  }
  ATerm q_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(i_23)));
    return(t);
  }
  ATerm r_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(i_23)));
    return(t);
  }
  ATerm s_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(i_23)));
    return(t);
  }
  ATerm t_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_23)), (ATerm) ATempty);
    return(t);
  }
  ATerm u_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_23)), not_null(j_23));
    return(t);
  }
  ATerm v_30 (ATerm t)
  {
    t = not_null(i_23);
    {
      ATerm o_0 (ATerm t)
      {
        t = not_null(j_23);
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
        z_27 = t;
        p_22 :
        if(match_cons(z_27, sym__2))
          {
            a_28 = ATgetArgument(z_27, 0);
            b_28 = ATgetArgument(z_27, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_28)), not_null(a_28)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, o_0, p_0);
    }
    return(t);
  }
  ATerm w_30 (ATerm t)
  {
    t = not_null(i_23);
    {
      ATerm q_0 (ATerm t)
      {
        t = term_j_6;
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
        f_28 = t;
        r_22 :
        if(match_cons(f_28, sym__2))
          {
            g_28 = ATgetArgument(f_28, 0);
            h_28 = ATgetArgument(f_28, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_28)), not_null(g_28)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, q_0, r_0);
    }
    return(t);
  }
  ATerm x_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_n_6, (ATerm) ATinsert(CheckATermList(not_null(j_23)), not_null(i_23)));
    return(t);
  }
  ATerm y_30 (ATerm t)
  {
    t = not_null(i_23);
    {
      ATerm p_6 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_6;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_n_6, not_null(i_23));
    return(t);
  }
  ATerm z_30 (ATerm t)
  {
    t = not_null(d_23);
    return(t);
  }
  ATerm a_31 (ATerm t)
  {
    t = term_s_6;
    return(t);
  }
  ATerm b_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_23)), not_null(i_23)));
    return(t);
  }
  ATerm c_31 (ATerm t)
  {
    t = not_null(i_23);
    return(t);
  }
  ATerm d_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(i_23), not_null(j_23), term_v_6);
    return(t);
  }
  ATerm e_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_23), not_null(j_23), term_v_6);
    return(t);
  }
  ATerm f_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(i_23), (ATerm)ATempty, not_null(j_23));
    return(t);
  }
  ATerm g_31 (ATerm t)
  {
    ATerm e_29 = NULL;
    ATerm g_29 = NULL;
    t = not_null(i_23);
    {
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          ATerm f_29 = NULL;
          f_29 = t;
          s_22 :
          if(!(match_int(f_29, 34)))
            {
              _fail(t);
            }
          return(t);
        }
        t = unquote_chars_1(t, t_0);
        return(t);
      }
      t = string_as_chars_1(t, s_0);
      {
        g_29 = t;
        if(((e_29 != NULL) && (e_29 != g_29)))
          _fail(g_29);
        else
          e_29 = g_29;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(e_29), not_null(j_23));
    return(t);
  }
  ATerm h_31 (ATerm t)
  {
    ATerm i_29 = NULL;
    ATerm k_29 = NULL;
    t = not_null(i_23);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          ATerm j_29 = NULL;
          j_29 = t;
          u_22 :
          if(!(match_int(j_29, 34)))
            {
              _fail(t);
            }
          return(t);
        }
        t = unquote_chars_1(t, v_0);
        return(t);
      }
      t = string_as_chars_1(t, u_0);
      {
        k_29 = t;
        if(((i_29 != NULL) && (i_29 != k_29)))
          _fail(k_29);
        else
          i_29 = k_29;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(i_29), (ATerm) ATempty);
    return(t);
  }
  ATerm i_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(i_23), (ATerm) ATempty);
    return(t);
  }
  ATerm j_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_23), (ATerm)ATempty, not_null(j_23));
    return(t);
  }
  ATerm k_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(i_23), not_null(j_23), not_null(g_23));
    return(t);
  }
  ATerm l_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(i_23), (ATerm)ATempty, not_null(j_23));
    return(t);
  }
  ATerm m_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(i_23), (ATerm)ATempty, not_null(j_23));
    return(t);
  }
  ATerm n_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(j_23));
    return(t);
  }
  h_23 = t;
  w_22 :
  if(match_cons(h_23, sym_Anno_2))
    {
      i_23 = ATgetArgument(h_23, 0);
      j_23 = ATgetArgument(h_23, 1);
      {
        ATerm m_23 = NULL;
        ATerm r_23 = NULL;
        t = not_null(j_23);
        {
          ATerm w_0 (ATerm t)
          {
            t = term_w_6;
            return(t);
          }
          ATerm x_0 (ATerm t)
          {
            ATerm n_23 = NULL,p_23 = NULL;
            ATerm x_6;
            x_6 = t;
            {
              ATerm o_23 = NULL;
              t = Fst_0(t);
              {
                o_23 = t;
                if(((n_23 != NULL) && (n_23 != o_23)))
                  _fail(o_23);
                else
                  n_23 = o_23;
              }
            }
            t = x_6;
            {
              ATerm q_23 = NULL;
              t = Snd_0(t);
              {
                q_23 = t;
                if(((p_23 != NULL) && (p_23 != q_23)))
                  _fail(q_23);
                else
                  p_23 = q_23;
              }
              t = (ATerm) ATmakeAppl(sym_Op_2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_23)), not_null(n_23)));
            }
            return(t);
          }
          t = foldr_2(t, w_0, x_0);
          {
            r_23 = t;
            if(((m_23 != NULL) && (m_23 != r_23)))
              _fail(r_23);
            else
              m_23 = r_23;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(i_23), not_null(m_23));
      }
    }
  else
    {
      if(match_cons(h_23, sym_SortNoArgs_1))
        {
          i_23 = ATgetArgument(h_23, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(i_23), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(h_23, sym_Char_1))
            {
              i_23 = ATgetArgument(h_23, 0);
              {
                ATerm u_23 = NULL;
                ATerm v_23 = NULL;
                t = not_null(i_23);
                {
                  ATerm y_6 = t;
                  int z_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = DesugarChar_0(t);
                      LocalPopChoice(z_6);
                    }
                  else
                    {
                      t = y_6;
                      {
                        t = explode_string_0(t);
                        t = DesugarCharGeneric_0(t);
                      }
                    }
                  {
                    v_23 = t;
                    if(((u_23 != NULL) && (u_23 != v_23)))
                      _fail(v_23);
                    else
                      u_23 = v_23;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(u_23));
              }
            }
          else
            {
              if(match_cons(h_23, sym_Con4_4))
                {
                  i_23 = ATgetArgument(h_23, 0);
                  j_23 = ATgetArgument(h_23, 1);
                  g_23 = ATgetArgument(h_23, 2);
                  c_23 = ATgetArgument(h_23, 3);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(i_23), not_null(g_23), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_23)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(h_23, sym_Con3_3))
                    {
                      i_23 = ATgetArgument(h_23, 0);
                      j_23 = ATgetArgument(h_23, 1);
                      g_23 = ATgetArgument(h_23, 2);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(i_23), not_null(g_23), term_f_7);
                    }
                  else
                    {
                      if(match_cons(h_23, sym_Con1_2))
                        {
                          i_23 = ATgetArgument(h_23, 0);
                          j_23 = ATgetArgument(h_23, 1);
                          t = (ATerm) ATmakeAppl(sym_Con_3, not_null(i_23), not_null(j_23), term_f_7);
                        }
                      else
                        {
                          if(match_cons(h_23, sym_ListTail_2))
                            {
                              i_23 = ATgetArgument(h_23, 0);
                              j_23 = ATgetArgument(h_23, 1);
                              {
                                t = not_null(i_23);
                                {
                                  ATerm y_0 (ATerm t)
                                  {
                                    t = not_null(j_23);
                                    return(t);
                                  }
                                  ATerm z_0 (ATerm t)
                                  {
                                    ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
                                    g_24 = t;
                                    l_22 :
                                    if(match_cons(g_24, sym__2))
                                      {
                                        h_24 = ATgetArgument(g_24, 0);
                                        i_24 = ATgetArgument(g_24, 1);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_24)), not_null(h_24)));
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = foldr_2(t, y_0, z_0);
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(h_23, sym_List_1))
                                {
                                  i_23 = ATgetArgument(h_23, 0);
                                  {
                                    t = not_null(i_23);
                                    {
                                      ATerm a_1 (ATerm t)
                                      {
                                        t = term_w_6;
                                        return(t);
                                      }
                                      ATerm b_1 (ATerm t)
                                      {
                                        ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
                                        k_27 = t;
                                        n_22 :
                                        if(match_cons(k_27, sym__2))
                                          {
                                            l_27 = ATgetArgument(k_27, 0);
                                            m_27 = ATgetArgument(k_27, 1);
                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_27)), not_null(l_27)));
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = foldr_2(t, a_1, b_1);
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(h_23, sym_Tuple_1))
                                    {
                                      i_23 = ATgetArgument(h_23, 0);
                                      x_22 :
                                      if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
                                        {
                                          d_23 = ATgetFirst((ATermList) i_23);
                                          e_23 = (ATerm) ATgetNext((ATermList) i_23);
                                          y_22 :
                                          if(((ATgetType(e_23) == AT_LIST) && ATisEmpty(e_23)))
                                            {
                                              {
                                                ATerm j_7 = t;
                                                int m_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_30(t);
                                                    LocalPopChoice(m_7);
                                                  }
                                                else
                                                  {
                                                    t = j_7;
                                                    t = p_30(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              t = o_30(t);
                                            }
                                        }
                                      else
                                        {
                                          t = o_30(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(h_23, sym_RealCong_1))
                                        {
                                          i_23 = ATgetArgument(h_23, 0);
                                          t = q_30(t);
                                        }
                                      else
                                        {
                                          if(match_cons(h_23, sym_IntCong_1))
                                            {
                                              i_23 = ATgetArgument(h_23, 0);
                                              t = r_30(t);
                                            }
                                          else
                                            {
                                              if(match_cons(h_23, sym_StrCong_1))
                                                {
                                                  i_23 = ATgetArgument(h_23, 0);
                                                  t = s_30(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(h_23, sym_ModCongNoArgs_1))
                                                    {
                                                      i_23 = ATgetArgument(h_23, 0);
                                                      t = t_30(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(h_23, sym_ModCong_2))
                                                        {
                                                          i_23 = ATgetArgument(h_23, 0);
                                                          j_23 = ATgetArgument(h_23, 1);
                                                          t = u_30(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(h_23, sym_ListCong_2))
                                                            {
                                                              i_23 = ATgetArgument(h_23, 0);
                                                              j_23 = ATgetArgument(h_23, 1);
                                                              t = v_30(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(h_23, sym_ListCongNoTail_1))
                                                                {
                                                                  i_23 = ATgetArgument(h_23, 0);
                                                                  t = w_30(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(h_23, sym_TupleCong_2))
                                                                    {
                                                                      i_23 = ATgetArgument(h_23, 0);
                                                                      j_23 = ATgetArgument(h_23, 1);
                                                                      t = x_30(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(h_23, sym_TupleCong_1))
                                                                        {
                                                                          i_23 = ATgetArgument(h_23, 0);
                                                                          z_22 :
                                                                          if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
                                                                            {
                                                                              d_23 = ATgetFirst((ATermList) i_23);
                                                                              e_23 = (ATerm) ATgetNext((ATermList) i_23);
                                                                              a_23 :
                                                                              if(((ATgetType(e_23) == AT_LIST) && ATisEmpty(e_23)))
                                                                                {
                                                                                  {
                                                                                    ATerm n_7 = t;
                                                                                    int o_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = y_30(t);
                                                                                        LocalPopChoice(o_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = n_7;
                                                                                        t = z_30(t);
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_30(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_30(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(h_23, sym_TupleCong_0))
                                                                            {
                                                                              t = a_31(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(h_23, sym_AnnoCong_2))
                                                                                {
                                                                                  i_23 = ATgetArgument(h_23, 0);
                                                                                  j_23 = ATgetArgument(h_23, 1);
                                                                                  b_23 :
                                                                                  if(match_cons(j_23, sym_StrategyCurly_1))
                                                                                    {
                                                                                      f_23 = ATgetArgument(j_23, 0);
                                                                                      t = b_31(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(h_23, sym_ParenStrat_1))
                                                                                    {
                                                                                      i_23 = ATgetArgument(h_23, 0);
                                                                                      t = c_31(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(h_23, sym_StratRuleNoCond_2))
                                                                                        {
                                                                                          i_23 = ATgetArgument(h_23, 0);
                                                                                          j_23 = ATgetArgument(h_23, 1);
                                                                                          t = d_31(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(h_23, sym_RuleNoCond_2))
                                                                                            {
                                                                                              i_23 = ATgetArgument(h_23, 0);
                                                                                              j_23 = ATgetArgument(h_23, 1);
                                                                                              t = e_31(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(h_23, sym_OverlayNoArgs_2))
                                                                                                {
                                                                                                  i_23 = ATgetArgument(h_23, 0);
                                                                                                  j_23 = ATgetArgument(h_23, 1);
                                                                                                  t = f_31(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(h_23, sym_Prim_2))
                                                                                                    {
                                                                                                      i_23 = ATgetArgument(h_23, 0);
                                                                                                      j_23 = ATgetArgument(h_23, 1);
                                                                                                      t = g_31(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(h_23, sym_PrimNoArgs_1))
                                                                                                        {
                                                                                                          i_23 = ATgetArgument(h_23, 0);
                                                                                                          t = h_31(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(h_23, sym_CallNoArgs_1))
                                                                                                            {
                                                                                                              i_23 = ATgetArgument(h_23, 0);
                                                                                                              t = i_31(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(h_23, sym_SDefNoArgs_2))
                                                                                                                {
                                                                                                                  i_23 = ATgetArgument(h_23, 0);
                                                                                                                  j_23 = ATgetArgument(h_23, 1);
                                                                                                                  t = j_31(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(h_23, sym_SRDef_3))
                                                                                                                    {
                                                                                                                      i_23 = ATgetArgument(h_23, 0);
                                                                                                                      j_23 = ATgetArgument(h_23, 1);
                                                                                                                      g_23 = ATgetArgument(h_23, 2);
                                                                                                                      t = k_31(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(h_23, sym_SRDefNoArgs_2))
                                                                                                                        {
                                                                                                                          i_23 = ATgetArgument(h_23, 0);
                                                                                                                          j_23 = ATgetArgument(h_23, 1);
                                                                                                                          t = l_31(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(h_23, sym_RDefNoArgs_2))
                                                                                                                            {
                                                                                                                              i_23 = ATgetArgument(h_23, 0);
                                                                                                                              j_23 = ATgetArgument(h_23, 1);
                                                                                                                              t = m_31(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(h_23, sym_Module_2))
                                                                                                                                {
                                                                                                                                  i_23 = ATgetArgument(h_23, 0);
                                                                                                                                  j_23 = ATgetArgument(h_23, 1);
                                                                                                                                  t = n_31(t);
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
ATerm repeat_2 (ATerm t, ATerm x_69 (ATerm), ATerm y_69 (ATerm))
{
  ATerm y_31 (ATerm t)
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_69(t);
        t = y_31(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = y_69(t);
      }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm a_70 (ATerm))
{
  t = repeat_2(t, a_70, _id);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm x_70 (ATerm))
{
  t = x_70(t);
  {
    ATerm c_1 (ATerm t)
    {
      t = topdown_1(t, x_70);
      return(t);
    }
    t = _all(t, c_1);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm b_56 (ATerm), ATerm c_56 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym__2))
    {
      g_32 = ATgetArgument(f_32, 0);
      h_32 = ATgetArgument(f_32, 1);
      {
        ATerm l_32 = NULL,n_32 = NULL;
        ATerm m_32 = NULL;
        t = SSLgetAnnotations(not_null(f_32));
        {
          m_32 = t;
          if(((l_32 != NULL) && (l_32 != m_32)))
            _fail(m_32);
          else
            l_32 = m_32;
        }
        {
          t = not_null(g_32);
          {
            ATerm p_32 = NULL;
            t = b_56(t);
            {
              n_32 = t;
              {
                t = not_null(h_32);
                {
                  ATerm r_32 = NULL;
                  t = c_56(t);
                  {
                    p_32 = t;
                    {
                      ATerm s_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_32), not_null(p_32)), not_null(l_32));
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
  ATerm a_33 = NULL;
  ATerm r_7;
  r_7 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm b_33 = NULL,c_33 = NULL;
      b_33 = t;
      z_32 :
      if(match_cons(b_33, sym_Program_1))
        {
          c_33 = ATgetArgument(b_33, 0);
          if(((a_33 != NULL) && (a_33 != c_33)))
            _fail(c_33);
          else
            a_33 = c_33;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, d_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_7), not_null(a_33)), term_t_7));
      {
        t = printnl_0(t);
        {
          t = term_v_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  f_33 :
  if(match_cons(g_33, sym__2))
    {
      h_33 = ATgetArgument(g_33, 0);
      i_33 = ATgetArgument(g_33, 1);
      {
        ATerm w_7;
        w_7 = t;
        t = SSL_printnl(not_null(h_33), not_null(i_33));
        t = w_7;
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
  ATerm n_33 = NULL;
  n_33 = t;
  t = SSL_implode_string(not_null(n_33));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
        s_33 = t;
        r_33 :
        if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
          {
            t_33 = ATgetFirst((ATermList) s_33);
            u_33 = (ATerm) ATgetNext((ATermList) s_33);
            {
              t = not_null(t_33);
              {
                ATerm e_1 (ATerm t)
                {
                  t = not_null(u_33);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_1);
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
  ATerm f_34 = NULL;
  ATerm h_34 = NULL;
  f_34 = t;
  {
    ATerm i_34 = NULL;
    ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
    t = not_null(f_34);
    {
      i_34 = t;
      {
        t = SSL_explode_term(not_null(i_34));
        {
          k_34 = t;
          d_34 :
          if(match_cons(k_34, sym__2))
            {
              l_34 = ATgetArgument(k_34, 0);
              m_34 = ATgetArgument(k_34, 1);
              e_34 :
              if(match_string(l_34, ""))
                {
                  if(((h_34 != NULL) && (h_34 != m_34)))
                    _fail(m_34);
                  else
                    h_34 = m_34;
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
      t = not_null(h_34);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm q_34 (ATerm t)
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_34);
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
        {
          t = Nil_0(t);
          t = p_77(t);
        }
      }
    return(t);
  }
  t = q_34(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym__2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      {
        t = not_null(u_34);
        {
          ATerm f_1 (ATerm t)
          {
            t = not_null(v_34);
            return(t);
          }
          t = at_end_1(t, f_1);
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
  ATerm b_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = b_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_35 = NULL;
  c_35 = t;
  t = SSL_explode_string(not_null(c_35));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm g_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = g_8;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm n_8;
  n_8 = t;
  {
    ATerm h_35 = NULL,j_35 = NULL;
    ATerm o_8;
    o_8 = t;
    {
      ATerm i_35 = NULL;
      t = z_87(t);
      {
        i_35 = t;
        if(((h_35 != NULL) && (h_35 != i_35)))
          _fail(i_35);
        else
          h_35 = i_35;
      }
    }
    t = o_8;
    {
      ATerm k_35 = NULL;
      k_35 = t;
      if(((j_35 != NULL) && (j_35 != k_35)))
        _fail(k_35);
      else
        j_35 = k_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_35)), not_null(h_35)));
        t = printnl_0(t);
      }
    }
  }
  t = n_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  t = SSL_is_string(not_null(o_35));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_8);
    }
  else
    {
      t = s_8;
      {
        ATerm w_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              ATerm d_9 = t;
              int e_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(e_9);
                }
              else
                {
                  t = d_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, g_1);
            LocalPopChoice(a_9);
          }
        else
          {
            t = w_8;
            {
              ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
              x_35 = t;
              w_35 :
              if(match_cons(x_35, sym_Path_1))
                {
                  y_35 = ATgetArgument(x_35, 0);
                  t = not_null(y_35);
                }
              else
                {
                  if(match_cons(x_35, sym_Var_1))
                    {
                      y_35 = ATgetArgument(x_35, 0);
                      {
                        t = not_null(y_35);
                        {
                          ATerm f_9 = t;
                          int g_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_9);
                            }
                          else
                            {
                              t = f_9;
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = term_h_9;
                                  return(t);
                                }
                                t = debug_1(t, h_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_35, sym_Prefix_2))
                        {
                          y_35 = ATgetArgument(x_35, 0);
                          z_35 = ATgetArgument(x_35, 1);
                          {
                            ATerm e_36 = NULL,g_36 = NULL;
                            ATerm i_9;
                            i_9 = t;
                            {
                              ATerm f_36 = NULL;
                              t = not_null(y_35);
                              {
                                t = eval_config_0(t);
                                {
                                  f_36 = t;
                                  if(((e_36 != NULL) && (e_36 != f_36)))
                                    _fail(f_36);
                                  else
                                    e_36 = f_36;
                                }
                              }
                            }
                            t = i_9;
                            {
                              ATerm h_36 = NULL;
                              t = not_null(z_35);
                              {
                                t = eval_config_0(t);
                                {
                                  h_36 = t;
                                  if(((g_36 != NULL) && (g_36 != h_36)))
                                    _fail(h_36);
                                  else
                                    g_36 = h_36;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_36), not_null(g_36));
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
  ATerm u_36 = NULL;
  u_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(u_36));
    {
      t = table_get_0(t);
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm m_9;
              m_9 = t;
              {
                ATerm w_36 = NULL;
                ATerm x_36 = NULL;
                x_36 = t;
                if(((w_36 != NULL) && (w_36 != x_36)))
                  _fail(x_36);
                else
                  w_36 = x_36;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_j_9, not_null(u_36), not_null(w_36));
                  t = table_put_0(t);
                }
              }
              t = m_9;
            }
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_90 (ATerm))
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_9;
      p_9 = t;
      {
        ATerm b_37 = NULL;
        ATerm c_37 = NULL;
        t = term_q_9;
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
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_37), term_r_9);
          t = geq_0(t);
        }
      }
      t = p_9;
      t = w_90(t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym__2))
    {
      h_37 = ATgetArgument(g_37, 0);
      i_37 = ATgetArgument(g_37, 1);
      t = SSL_WriteToTextFile(not_null(h_37), not_null(i_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym__2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      t = SSL_WriteToBinaryFile(not_null(p_37), not_null(q_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_37 = NULL;
  ATerm s_9;
  s_9 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm t_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm z_37 = NULL,a_38 = NULL;
            z_37 = t;
            v_37 :
            if(match_cons(z_37, sym_Output_1))
              {
                a_38 = ATgetArgument(z_37, 0);
                if(((y_37 != NULL) && (y_37 != a_38)))
                  _fail(a_38);
                else
                  y_37 = a_38;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, j_1);
          LocalPopChoice(y_9);
        }
      else
        {
          t = t_9;
          {
            ATerm b_38 = NULL;
            t = term_z_9;
            {
              b_38 = t;
              if(((y_37 != NULL) && (y_37 != b_38)))
                _fail(b_38);
              else
                y_37 = b_38;
            }
          }
        }
      return(t);
    }
    t = _2(t, i_1, _id);
  }
  t = s_9;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = not_null(y_37);
        return(t);
      }
      t = split_2(t, l_1, _id);
      return(t);
    }
    t = _2(t, _id, k_1);
    {
      ATerm a_10 = t;
      int e_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm n_1 (ATerm t)
            {
              ATerm c_38 = NULL;
              c_38 = t;
              x_37 :
              if(!(match_cons(c_38, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, n_1);
            return(t);
          }
          t = _2(t, m_1, WriteToBinaryFile_0);
          LocalPopChoice(e_10);
        }
      else
        {
          t = a_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm d_89 (ATerm))
{
  ATerm i_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  ATerm g_10;
  g_10 = t;
  t = dtime_0(t);
  t = g_10;
  {
    t = d_89(t);
    {
      ATerm j_10;
      j_10 = t;
      {
        ATerm j_38 = NULL;
        t = dtime_0(t);
        {
          j_38 = t;
          if(((i_38 != NULL) && (i_38 != j_38)))
            _fail(j_38);
          else
            i_38 = j_38;
        }
      }
      t = j_10;
      {
        k_38 = t;
        h_38 :
        if(match_cons(k_38, sym__2))
          {
            l_38 = ATgetArgument(k_38, 0);
            m_38 = ATgetArgument(k_38, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_38)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_38))), not_null(m_38));
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
  ATerm s_38 = NULL;
  s_38 = t;
  t = SSL_ReadFromFile(not_null(s_38));
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_85 (ATerm), ATerm e_85 (ATerm))
{
  ATerm x_38 = NULL,z_38 = NULL;
  ATerm k_10;
  k_10 = t;
  {
    ATerm y_38 = NULL;
    t = d_85(t);
    {
      y_38 = t;
      if(((x_38 != NULL) && (x_38 != y_38)))
        _fail(y_38);
      else
        x_38 = y_38;
    }
  }
  t = k_10;
  {
    ATerm a_39 = NULL;
    t = e_85(t);
    {
      a_39 = t;
      if(((z_38 != NULL) && (z_38 != a_39)))
        _fail(a_39);
      else
        z_38 = a_39;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), not_null(z_38));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_39 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_1 (ATerm t)
        {
          ATerm h_39 = NULL,i_39 = NULL;
          h_39 = t;
          e_39 :
          if(match_cons(h_39, sym_Input_1))
            {
              i_39 = ATgetArgument(h_39, 0);
              if(((g_39 != NULL) && (g_39 != i_39)))
                _fail(i_39);
              else
                g_39 = i_39;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, o_1);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm j_39 = NULL;
          t = term_o_10;
          {
            j_39 = t;
            if(((g_39 != NULL) && (g_39 != j_39)))
              _fail(j_39);
            else
              g_39 = j_39;
          }
        }
      }
  }
  t = l_10;
  {
    ATerm p_1 (ATerm t)
    {
      t = not_null(g_39);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  t = SSL_string_to_int(not_null(n_39));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  v_39 = t;
  t_39 :
  if(match_string(v_39, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
        {
          w_39 = ATgetFirst((ATermList) v_39);
          x_39 = (ATerm) ATgetNext((ATermList) v_39);
          u_39 :
          if(((ATgetType(x_39) == AT_LIST) && !(ATisEmpty(x_39))))
            {
              y_39 = ATgetFirst((ATermList) x_39);
              z_39 = (ATerm) ATgetNext((ATermList) x_39);
              {
                ATerm d_40 = NULL;
                ATerm p_10;
                p_10 = t;
                {
                  t = not_null(w_39);
                  t = j_0(t);
                }
                t = p_10;
                {
                  ATerm e_40 = NULL;
                  t = not_null(y_39);
                  {
                    t = k_0(t);
                    {
                      e_40 = t;
                      if(((d_40 != NULL) && (d_40 != e_40)))
                        _fail(e_40);
                      else
                        d_40 = e_40;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_39)), not_null(d_40));
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
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm e_41 = NULL;
        e_41 = t;
        i_40 :
        if(!(match_string(e_41, "-i")))
          {
            if(!(match_string(e_41, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        ATerm h_41 = NULL;
        ATerm s_10;
        s_10 = t;
        {
          ATerm f_41 = NULL;
          ATerm g_41 = NULL;
          g_41 = t;
          if(((f_41 != NULL) && (f_41 != g_41)))
            _fail(g_41);
          else
            f_41 = g_41;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_t_10, not_null(f_41));
            t = set_config_0(t);
          }
        }
        t = s_10;
        {
          ATerm i_41 = NULL;
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_41));
        }
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_z_10;
        return(t);
      }
      t = ArgOption_3(t, q_1, r_1, s_1);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              ATerm j_41 = NULL;
              j_41 = t;
              l_40 :
              if(!(match_string(j_41, "-o")))
                {
                  if(!(match_string(j_41, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              ATerm m_41 = NULL;
              ATerm c_11;
              c_11 = t;
              {
                ATerm k_41 = NULL;
                ATerm l_41 = NULL;
                l_41 = t;
                if(((k_41 != NULL) && (k_41 != l_41)))
                  _fail(l_41);
                else
                  k_41 = l_41;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_11, not_null(k_41));
                  t = set_config_0(t);
                }
              }
              t = c_11;
              {
                ATerm n_41 = NULL;
                n_41 = t;
                if(((m_41 != NULL) && (m_41 != n_41)))
                  _fail(n_41);
                else
                  m_41 = n_41;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_41));
              }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_i_11;
              return(t);
            }
            t = ArgOption_3(t, t_1, u_1, v_1);
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm k_11 = t;
              int n_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm o_41 = NULL;
                    o_41 = t;
                    o_40 :
                    if(!(match_string(o_41, "-S")))
                      {
                        if(!(match_string(o_41, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = term_p_11;
                    t = set_config_0(t);
                    t = term_q_11;
                    return(t);
                  }
                  ATerm y_1 (ATerm t)
                  {
                    t = term_r_11;
                    return(t);
                  }
                  t = Option_3(t, w_1, x_1, y_1);
                  LocalPopChoice(n_11);
                }
              else
                {
                  t = k_11;
                  {
                    ATerm s_11 = t;
                    int t_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          ATerm p_41 = NULL;
                          p_41 = t;
                          p_40 :
                          if(!(match_string(p_41, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_2 (ATerm t)
                        {
                          ATerm s_41 = NULL;
                          ATerm u_11;
                          u_11 = t;
                          {
                            ATerm q_41 = NULL;
                            ATerm r_41 = NULL;
                            t = string_to_int_0(t);
                            {
                              r_41 = t;
                              if(((q_41 != NULL) && (q_41 != r_41)))
                                _fail(r_41);
                              else
                                q_41 = r_41;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_9, not_null(q_41));
                              t = set_config_0(t);
                            }
                          }
                          t = u_11;
                          {
                            ATerm t_41 = NULL;
                            t_41 = t;
                            if(((s_41 != NULL) && (s_41 != t_41)))
                              _fail(t_41);
                            else
                              s_41 = t_41;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_41));
                          }
                          return(t);
                        }
                        ATerm b_2 (ATerm t)
                        {
                          t = term_v_11;
                          return(t);
                        }
                        t = ArgOption_3(t, z_1, a_2, b_2);
                        LocalPopChoice(t_11);
                      }
                    else
                      {
                        t = s_11;
                        {
                          ATerm w_11 = t;
                          int x_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_2 (ATerm t)
                              {
                                ATerm u_41 = NULL;
                                u_41 = t;
                                z_40 :
                                if(!(match_string(u_41, "-k")))
                                  {
                                    if(!(match_string(u_41, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm d_2 (ATerm t)
                              {
                                ATerm y_11;
                                y_11 = t;
                                {
                                  ATerm v_41 = NULL;
                                  ATerm w_41 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    w_41 = t;
                                    if(((v_41 != NULL) && (v_41 != w_41)))
                                      _fail(w_41);
                                    else
                                      v_41 = w_41;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(v_41));
                                    t = set_config_0(t);
                                  }
                                }
                                t = y_11;
                                return(t);
                              }
                              ATerm e_2 (ATerm t)
                              {
                                t = term_f_12;
                                return(t);
                              }
                              t = ArgOption_3(t, c_2, d_2, e_2);
                              LocalPopChoice(x_11);
                            }
                          else
                            {
                              t = w_11;
                              {
                                ATerm g_12 = t;
                                int h_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_2 (ATerm t)
                                    {
                                      ATerm x_41 = NULL;
                                      x_41 = t;
                                      b_41 :
                                      if(!(match_string(x_41, "-v")))
                                        {
                                          if(!(match_string(x_41, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm g_2 (ATerm t)
                                    {
                                      t = term_p_12;
                                      t = set_config_0(t);
                                      t = term_s_12;
                                      return(t);
                                    }
                                    ATerm h_2 (ATerm t)
                                    {
                                      t = term_t_12;
                                      return(t);
                                    }
                                    t = Option_3(t, f_2, g_2, h_2);
                                    LocalPopChoice(h_12);
                                  }
                                else
                                  {
                                    t = g_12;
                                    {
                                      ATerm u_12 = t;
                                      int v_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_2 (ATerm t)
                                          {
                                            ATerm y_41 = NULL;
                                            y_41 = t;
                                            c_41 :
                                            if(!(match_string(y_41, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_2 (ATerm t)
                                          {
                                            t = term_x_12;
                                            t = set_config_0(t);
                                            t = term_y_12;
                                            return(t);
                                          }
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_z_12;
                                            return(t);
                                          }
                                          t = Option_3(t, i_2, j_2, k_2);
                                          LocalPopChoice(v_12);
                                        }
                                      else
                                        {
                                          t = u_12;
                                          {
                                            ATerm l_2 (ATerm t)
                                            {
                                              ATerm z_41 = NULL;
                                              z_41 = t;
                                              d_41 :
                                              if(!(match_string(z_41, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm m_2 (ATerm t)
                                            {
                                              t = term_b_13;
                                              t = set_config_0(t);
                                              t = term_f_13;
                                              return(t);
                                            }
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_g_13;
                                              return(t);
                                            }
                                            t = Option_3(t, l_2, m_2, n_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATempty, term_k_13));
  {
    t = printnl_0(t);
    {
      t = term_v_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  t = SSL_TicksToSeconds(not_null(i_42));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,q_42 = NULL;
  n_42 = t;
  m_42 :
  if(match_cons(n_42, sym__2))
    {
      o_42 = ATgetArgument(n_42, 0);
      q_42 = ATgetArgument(n_42, 1);
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_42), not_null(q_42));
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = SSL_addr(not_null(o_42), not_null(q_42));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_83(t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
        z_42 = t;
        y_42 :
        if(((ATgetType(z_42) == AT_LIST) && !(ATisEmpty(z_42))))
          {
            a_43 = ATgetFirst((ATermList) z_42);
            b_43 = (ATerm) ATgetNext((ATermList) z_42);
            {
              ATerm e_43 = NULL;
              ATerm f_43 = NULL;
              t = not_null(b_43);
              {
                t = foldr_2(t, o_83, p_83);
                {
                  f_43 = t;
                  if(((e_43 != NULL) && (e_43 != f_43)))
                    _fail(f_43);
                  else
                    e_43 = f_43;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_43), not_null(e_43));
                t = p_83(t);
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
ATerm crush_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
{
  ATerm m_43 = NULL;
  ATerm o_43 = NULL;
  m_43 = t;
  {
    ATerm p_43 = NULL;
    ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
    t = not_null(m_43);
    {
      p_43 = t;
      {
        t = SSL_explode_term(not_null(p_43));
        {
          r_43 = t;
          l_43 :
          if(match_cons(r_43, sym__2))
            {
              s_43 = ATgetArgument(r_43, 0);
              t_43 = ATgetArgument(r_43, 1);
              if(((o_43 != NULL) && (o_43 != t_43)))
                _fail(t_43);
              else
                o_43 = t_43;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_43);
      t = foldr_2(t, m_82, n_82);
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
    ATerm o_2 (ATerm t)
    {
      t = term_o_11;
      return(t);
    }
    t = crush_2(t, o_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  c_44 = t;
  b_44 :
  if(match_cons(c_44, sym__2))
    {
      d_44 = ATgetArgument(c_44, 0);
      e_44 = ATgetArgument(c_44, 1);
      {
        ATerm r_13;
        r_13 = t;
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_44), not_null(e_44));
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              t = SSL_gtr(not_null(d_44), not_null(e_44));
            }
        }
        t = r_13;
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
  ATerm k_44 = NULL;
  ATerm v_13 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
      l_44 = t;
      j_44 :
      if(match_cons(l_44, sym__2))
        {
          m_44 = ATgetArgument(l_44, 0);
          n_44 = ATgetArgument(l_44, 1);
          {
            if(((k_44 != NULL) && (k_44 != m_44)))
              _fail(m_44);
            else
              k_44 = m_44;
            if(((k_44 != NULL) && (k_44 != n_44)))
              _fail(n_44);
            else
              k_44 = n_44;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_14);
    }
  else
    {
      t = v_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_90 (ATerm))
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_14;
      r_14 = t;
      {
        ATerm q_44 = NULL;
        ATerm r_44 = NULL;
        t = term_q_9;
        {
          t = get_config_0(t);
          {
            r_44 = t;
            if(((q_44 != NULL) && (q_44 != r_44)))
              _fail(r_44);
            else
              q_44 = r_44;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_44), term_v_7);
          t = geq_0(t);
        }
      }
      t = r_14;
      t = v_90(t);
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm v_44 = NULL,y_44 = NULL;
    ATerm s_14;
    s_14 = t;
    {
      ATerm x_44 = NULL;
      t = run_time_0(t);
      {
        x_44 = t;
        if(((v_44 != NULL) && (v_44 != x_44)))
          _fail(x_44);
        else
          v_44 = x_44;
      }
    }
    t = s_14;
    {
      ATerm z_44 = NULL;
      t = term_t_14;
      {
        t = get_config_0(t);
        {
          z_44 = t;
          if(((y_44 != NULL) && (y_44 != z_44)))
            _fail(z_44);
          else
            y_44 = z_44;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_15), not_null(v_44)), term_d_15), not_null(y_44)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_2);
  {
    t = term_o_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_45 = NULL;
  i_45 = t;
  f_45 :
  if(match_cons(i_45, sym_Version_0))
    {
      ATerm k_45 = NULL,r_45 = NULL;
      ATerm f_15;
      f_15 = t;
      {
        ATerm l_45 = NULL;
        t = SSLgetAnnotations(not_null(i_45));
        {
          l_45 = t;
          if(((k_45 != NULL) && (k_45 != l_45)))
            _fail(l_45);
          else
            k_45 = l_45;
        }
      }
      t = f_15;
      {
        ATerm t_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_45));
        {
          t_45 = t;
          if(((r_45 != NULL) && (r_45 != t_45)))
            _fail(t_45);
          else
            r_45 = t_45;
        }
        t = not_null(r_45);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_89 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        {
          ATerm r_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_15);
            }
          else
            {
              t = r_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, q_2);
  t = b_89(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_45 = NULL;
  y_45 = t;
  t = SSL_table_create(not_null(y_45));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_46 = NULL;
  c_46 = t;
  {
    ATerm t_15;
    t_15 = t;
    {
      t = term_u_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_15, term_v_15, not_null(c_46));
          t = table_put_0(t);
        }
      }
    }
    t = t_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  t = SSL_table_destroy(not_null(g_46));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  t = SSL_exit(not_null(k_46));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  n_46 :
  if(((ATgetType(o_46) == AT_LIST) && ATisEmpty(o_46)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_46) == AT_LIST) && !(ATisEmpty(o_46))))
        {
          p_46 = ATgetFirst((ATermList) o_46);
          q_46 = (ATerm) ATgetNext((ATermList) o_46);
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
  ATerm x_15;
  x_15 = t;
  {
    ATerm t_46 = NULL;
    ATerm w_46 = NULL;
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        {
          ATerm u_46 = NULL;
          ATerm v_46 = NULL;
          v_46 = t;
          if(((u_46 != NULL) && (u_46 != v_46)))
            _fail(v_46);
          else
            u_46 = v_46;
          t = (ATerm) ATinsert(ATempty, not_null(u_46));
        }
      }
    {
      w_46 = t;
      if(((t_46 != NULL) && (t_46 != w_46)))
        _fail(w_46);
      else
        t_46 = w_46;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(t_46));
      t = printnl_0(t);
    }
  }
  t = x_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_92 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm z_46 (ATerm t)
  {
    ATerm f_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = f_16;
        t = Cons_2(t, a_77, z_46);
      }
    return(t);
  }
  t = z_46(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
  i_47 = t;
  f_47 :
  if(((ATgetType(i_47) == AT_LIST) && !(ATisEmpty(i_47))))
    {
      g_47 = ATgetFirst((ATermList) i_47);
      h_47 = (ATerm) ATgetNext((ATermList) i_47);
      {
        ATerm l_47 = NULL;
        t = not_null(h_47);
        {
          ATerm m_16;
          m_16 = t;
          {
            ATerm m_47 = NULL,o_47 = NULL,q_47 = NULL;
            ATerm p_16;
            p_16 = t;
            {
              ATerm n_47 = NULL;
              t = i_0(t);
              {
                n_47 = t;
                if(((m_47 != NULL) && (m_47 != n_47)))
                  _fail(n_47);
                else
                  m_47 = n_47;
              }
            }
            t = p_16;
            {
              ATerm p_47 = NULL;
              t = not_null(g_47);
              {
                t = h_0(t);
                {
                  p_47 = t;
                  if(((o_47 != NULL) && (o_47 != p_47)))
                    _fail(p_47);
                  else
                    o_47 = p_47;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_47)), not_null(o_47));
                {
                  q_47 = t;
                  if(((l_47 != NULL) && (l_47 != q_47)))
                    _fail(q_47);
                  else
                    l_47 = q_47;
                }
              }
            }
          }
          t = m_16;
          {
            ATerm r_2 (ATerm t)
            {
              t = not_null(l_47);
              return(t);
            }
            t = reverse_acc_2(t, h_0, r_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_47) == AT_LIST) && ATisEmpty(i_47)))
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
  ATerm s_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_92 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm k_48 = NULL,l_48 = NULL;
  k_48 = t;
  j_48 :
  if(match_cons(k_48, sym_Program_1))
    {
      l_48 = ATgetArgument(k_48, 0);
      {
        ATerm t_48 = NULL,v_48 = NULL;
        ATerm u_48 = NULL;
        t = SSLgetAnnotations(not_null(k_48));
        {
          u_48 = t;
          if(((t_48 != NULL) && (t_48 != u_48)))
            _fail(u_48);
          else
            t_48 = u_48;
        }
        {
          t = not_null(l_48);
          {
            ATerm x_48 = NULL;
            t = i_62(t);
            {
              v_48 = t;
              {
                ATerm y_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_48)), not_null(t_48));
                {
                  y_48 = t;
                  if(((x_48 != NULL) && (x_48 != y_48)))
                    _fail(y_48);
                  else
                    x_48 = y_48;
                }
                t = not_null(x_48);
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
  ATerm g_49 = NULL;
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_49 = NULL;
      t = term_t_14;
      {
        t = get_config_0(t);
        {
          m_49 = t;
          if(((g_49 != NULL) && (g_49 != m_49)))
            _fail(m_49);
          else
            g_49 = m_49;
        }
      }
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm t_2 (ATerm t)
        {
          ATerm u_2 (ATerm t)
          {
            ATerm n_49 = NULL;
            n_49 = t;
            if(((g_49 != NULL) && (g_49 != n_49)))
              _fail(n_49);
            else
              g_49 = n_49;
            return(t);
          }
          t = Program_1(t, u_2);
          return(t);
        }
        t = fetch_1(t, t_2);
      }
    }
  {
    t = term_s_16;
    {
      t = echo_0(t);
      {
        t = term_v_16;
        {
          t = table_get_0(t);
          {
            ATerm v_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, v_2);
            {
              ATerm w_2 (ATerm t)
              {
                ATerm o_49 = NULL;
                ATerm p_49 = NULL;
                p_49 = t;
                if(((o_49 != NULL) && (o_49 != p_49)))
                  _fail(p_49);
                else
                  o_49 = p_49;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_49)), term_w_16);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, w_2);
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
  ATerm x_16;
  x_16 = t;
  {
    ATerm y_49 = NULL;
    ATerm z_49 = NULL;
    z_49 = t;
    if(((y_49 != NULL) && (y_49 != z_49)))
      _fail(z_49);
    else
      y_49 = z_49;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATempty, not_null(y_49)));
      t = printnl_0(t);
    }
  }
  t = x_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm y_16;
  y_16 = t;
  {
    t = a_88(t);
    t = debug_0(t);
  }
  t = y_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_62 (ATerm))
{
  ATerm g_50 = NULL,h_50 = NULL;
  g_50 = t;
  f_50 :
  if(match_cons(g_50, sym_Undefined_1))
    {
      h_50 = ATgetArgument(g_50, 0);
      {
        ATerm k_50 = NULL,m_50 = NULL;
        ATerm l_50 = NULL;
        t = SSLgetAnnotations(not_null(g_50));
        {
          l_50 = t;
          if(((k_50 != NULL) && (k_50 != l_50)))
            _fail(l_50);
          else
            k_50 = l_50;
        }
        {
          t = not_null(h_50);
          {
            ATerm o_50 = NULL;
            t = j_62(t);
            {
              m_50 = t;
              {
                ATerm q_50 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_50)), not_null(k_50));
                {
                  q_50 = t;
                  if(((o_50 != NULL) && (o_50 != q_50)))
                    _fail(q_50);
                  else
                    o_50 = q_50;
                }
                t = not_null(o_50);
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
ATerm fetch_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm v_50 (ATerm t)
  {
    ATerm a_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_77, _id);
        LocalPopChoice(f_17);
      }
    else
      {
        t = a_17;
        t = Cons_2(t, _id, v_50);
      }
    return(t);
  }
  t = v_50(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_91 (ATerm))
{
  t = fetch_1(t, y_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_51 = NULL;
  a_51 = t;
  z_50 :
  if(match_cons(a_51, sym_Help_0))
    {
      ATerm c_51 = NULL,e_51 = NULL;
      ATerm g_17;
      g_17 = t;
      {
        ATerm d_51 = NULL;
        t = SSLgetAnnotations(not_null(a_51));
        {
          d_51 = t;
          if(((c_51 != NULL) && (c_51 != d_51)))
            _fail(d_51);
          else
            c_51 = d_51;
        }
      }
      t = g_17;
      {
        ATerm f_51 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_51));
        {
          f_51 = t;
          if(((e_51 != NULL) && (e_51 != f_51)))
            _fail(f_51);
          else
            e_51 = f_51;
        }
        t = not_null(e_51);
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
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  k_51 :
  if(match_cons(o_51, sym__2))
    {
      p_51 = ATgetArgument(o_51, 0);
      q_51 = ATgetArgument(o_51, 1);
      t = SSL_table_get(not_null(p_51), not_null(q_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
  x_51 = t;
  w_51 :
  if(match_cons(x_51, sym__3))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      a_52 = ATgetArgument(x_51, 2);
      {
        ATerm h_17;
        h_17 = t;
        {
          ATerm e_52 = NULL;
          ATerm f_52 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_51), not_null(z_51));
          {
            ATerm i_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_17);
              }
            else
              {
                t = i_17;
                t = (ATerm) ATempty;
              }
            {
              f_52 = t;
              if(((e_52 != NULL) && (e_52 != f_52)))
                _fail(f_52);
              else
                e_52 = f_52;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_51), not_null(z_51), (ATerm) ATinsert(CheckATermList(not_null(e_52)), not_null(a_52)));
            t = table_put_0(t);
          }
        }
        t = h_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_93 (ATerm))
{
  ATerm j_52 = NULL;
  ATerm k_52 = NULL;
  t = term_n_12;
  {
    t = d_93(t);
    {
      k_52 = t;
      if(((j_52 != NULL) && (j_52 != k_52)))
        _fail(k_52);
      else
        j_52 = k_52;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_16, term_u_16, not_null(j_52));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  p_52 :
  if(match_string(q_52, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(q_52) == AT_LIST) && !(ATisEmpty(q_52))))
        {
          r_52 = ATgetFirst((ATermList) q_52);
          s_52 = (ATerm) ATgetNext((ATermList) q_52);
          {
            ATerm c_53 = NULL;
            ATerm p_17;
            p_17 = t;
            {
              t = not_null(r_52);
              t = a_0(t);
            }
            t = p_17;
            {
              ATerm d_53 = NULL;
              t = term_n_12;
              {
                t = d_0(t);
                {
                  d_53 = t;
                  if(((c_53 != NULL) && (c_53 != d_53)))
                    _fail(d_53);
                  else
                    c_53 = d_53;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_52)), not_null(c_53));
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
  ATerm x_2 (ATerm t)
  {
    ATerm i_53 = NULL;
    i_53 = t;
    h_53 :
    if(!(match_string(i_53, "--help")))
      {
        if(!(match_string(i_53, "-h")))
          {
            if(!(match_string(i_53, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_r_17;
    {
      t = set_config_0(t);
      t = term_w_17;
    }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_x_17;
    return(t);
  }
  t = Option_3(t, x_2, y_2, z_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
  l_53 = t;
  k_53 :
  if(((ATgetType(l_53) == AT_LIST) && !(ATisEmpty(l_53))))
    {
      m_53 = ATgetFirst((ATermList) l_53);
      n_53 = (ATerm) ATgetNext((ATermList) l_53);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_53)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_53)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_57 (ATerm), ATerm l_57 (ATerm))
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
  x_53 = t;
  w_53 :
  if(((ATgetType(x_53) == AT_LIST) && !(ATisEmpty(x_53))))
    {
      y_53 = ATgetFirst((ATermList) x_53);
      z_53 = (ATerm) ATgetNext((ATermList) x_53);
      {
        ATerm d_54 = NULL,f_54 = NULL;
        ATerm e_54 = NULL;
        t = SSLgetAnnotations(not_null(x_53));
        {
          e_54 = t;
          if(((d_54 != NULL) && (d_54 != e_54)))
            _fail(e_54);
          else
            d_54 = e_54;
        }
        {
          t = not_null(y_53);
          {
            ATerm h_54 = NULL;
            t = k_57(t);
            {
              f_54 = t;
              {
                t = not_null(z_53);
                {
                  ATerm j_54 = NULL;
                  t = l_57(t);
                  {
                    h_54 = t;
                    {
                      ATerm k_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_54)), not_null(f_54)), not_null(d_54));
                      {
                        k_54 = t;
                        if(((j_54 != NULL) && (j_54 != k_54)))
                          _fail(k_54);
                        else
                          j_54 = k_54;
                      }
                      t = not_null(j_54);
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
  ATerm u_54 = NULL;
  u_54 = t;
  t_54 :
  if(((ATgetType(u_54) == AT_LIST) && ATisEmpty(u_54)))
    {
      {
        ATerm w_54 = NULL,y_54 = NULL;
        ATerm y_17;
        y_17 = t;
        {
          ATerm x_54 = NULL;
          t = SSLgetAnnotations(not_null(u_54));
          {
            x_54 = t;
            if(((w_54 != NULL) && (w_54 != x_54)))
              _fail(x_54);
            else
              w_54 = x_54;
          }
        }
        t = y_17;
        {
          ATerm z_54 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_54));
          {
            z_54 = t;
            if(((y_54 != NULL) && (y_54 != z_54)))
              _fail(z_54);
            else
              y_54 = z_54;
          }
          t = not_null(y_54);
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
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  e_55 :
  if(match_cons(f_55, sym__2))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_9, not_null(g_55), not_null(h_55));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_93 (ATerm))
{
  ATerm d_18;
  d_18 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_18;
        t = b_93(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
        }
      }
  }
  t = d_18;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm p_55 = NULL;
      ATerm u_18;
      u_18 = t;
      {
        ATerm n_55 = NULL;
        ATerm o_55 = NULL;
        o_55 = t;
        if(((n_55 != NULL) && (n_55 != o_55)))
          _fail(o_55);
        else
          n_55 = o_55;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_14, not_null(n_55));
          t = set_config_0(t);
        }
      }
      t = u_18;
      {
        ATerm q_55 = NULL;
        q_55 = t;
        if(((p_55 != NULL) && (p_55 != q_55)))
          _fail(q_55);
        else
          p_55 = q_55;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_55));
      }
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      ATerm v_18 = t;
      int w_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_19);
            }
          else
            {
              t = x_18;
              {
                t = b_93(t);
                t = Cons_2(t, _id, b_3);
              }
            }
          LocalPopChoice(w_18);
        }
      else
        {
          t = v_18;
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
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  ATerm b_19;
  b_19 = t;
  {
    ATerm z_55 = NULL,a_56 = NULL,d_56 = NULL,e_56 = NULL;
    z_55 = t;
    v_55 :
    if(match_cons(z_55, sym__3))
      {
        a_56 = ATgetArgument(z_55, 0);
        d_56 = ATgetArgument(z_55, 1);
        e_56 = ATgetArgument(z_55, 2);
        {
          if(((w_55 != NULL) && (w_55 != a_56)))
            _fail(a_56);
          else
            w_55 = a_56;
          {
            if(((x_55 != NULL) && (x_55 != d_56)))
              _fail(d_56);
            else
              x_55 = d_56;
            {
              if(((y_55 != NULL) && (y_55 != e_56)))
                _fail(e_56);
              else
                y_55 = e_56;
              t = SSL_table_put(not_null(w_55), not_null(x_55), not_null(y_55));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_93 (ATerm))
{
  ATerm h_56 = NULL;
  ATerm c_19;
  c_19 = t;
  {
    t = term_d_19;
    t = table_put_0(t);
  }
  t = c_19;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm e_19 = t;
      int f_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_93(t);
          LocalPopChoice(f_19);
        }
      else
        {
          t = e_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_3);
    {
      ATerm g_19 = t;
      int h_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_19;
          n_19 = t;
          {
            ATerm s_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_17;
                t = get_config_0(t);
                LocalPopChoice(a_20);
              }
            else
              {
                t = s_19;
                t = fetch_1(t, Help_0);
              }
          }
          t = n_19;
          {
            t = system_usage_0(t);
            {
              t = term_o_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_19);
        }
      else
        {
          t = g_19;
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm i_56 = NULL;
                    i_56 = t;
                    if(((h_56 != NULL) && (h_56 != i_56)))
                      _fail(i_56);
                    else
                      h_56 = i_56;
                    return(t);
                  }
                  t = Undefined_1(t, e_3);
                  return(t);
                }
                t = fetch_1(t, d_3);
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_56)), term_d_20);
                    return(t);
                  }
                  t = say_1(t, f_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_v_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(c_20);
              }
            else
              {
                t = b_20;
                {
                }
              }
          }
        }
      {
        ATerm e_20;
        e_20 = t;
        {
          t = term_t_16;
          t = table_destroy_0(t);
        }
        t = e_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm))
{
  t = parse_options_1(t, h_89);
  {
    t = store_options_0(t);
    {
      t = j_89(t);
      {
        ATerm f_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_89);
            LocalPopChoice(k_20);
          }
        else
          {
            t = f_20;
            {
              ATerm o_20 = t;
              int u_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_89(t);
                  t = report_success_0(t);
                  LocalPopChoice(u_20);
                }
              else
                {
                  t = o_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_89(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_89);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, g_3, a_90, b_90, h_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm j_3 (ATerm t)
    {
      ATerm x_20;
      x_20 = t;
      {
        ATerm l_56 = NULL;
        ATerm m_56 = NULL;
        t = term_t_14;
        {
          t = get_config_0(t);
          {
            m_56 = t;
            if(((l_56 != NULL) && (l_56 != m_56)))
              _fail(m_56);
            else
              l_56 = m_56;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATempty, not_null(l_56)));
          t = printnl_0(t);
        }
      }
      t = x_20;
      return(t);
    }
    t = if_verbose2_1(t, j_3);
    return(t);
  }
  t = iowrap_4(t, s_89, t_89, u_89, i_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  t = iowrap_3(t, q_89, r_89, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_89 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    t = _2(t, _id, n_89);
    return(t);
  }
  t = iowrap_2(t, k_3, _fail);
  return(t);
}
ATerm stratego_desugar_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_56 = NULL;
        ATerm w_56 = NULL;
        u_56 = t;
        {
          ATerm x_56 = NULL;
          ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
          t = not_null(u_56);
          {
            x_56 = t;
            {
              t = SSL_explode_term(not_null(x_56));
              {
                z_56 = t;
                r_56 :
                if(match_cons(z_56, sym__2))
                  {
                    a_57 = ATgetArgument(z_56, 0);
                    b_57 = ATgetArgument(z_56, 1);
                    s_56 :
                    if(((ATgetType(b_57) == AT_LIST) && !(ATisEmpty(b_57))))
                      {
                        c_57 = ATgetFirst((ATermList) b_57);
                        d_57 = (ATerm) ATgetNext((ATermList) b_57);
                        t_56 :
                        if(((ATgetType(d_57) == AT_LIST) && ATisEmpty(d_57)))
                          {
                            if(((w_56 != NULL) && (w_56 != c_57)))
                              _fail(c_57);
                            else
                              w_56 = c_57;
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
          t = not_null(w_56);
        }
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        {
        }
      }
    {
      ATerm m_3 (ATerm t)
      {
        t = repeat_2(t, Desugar_0, _id);
        {
          ATerm a_21 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = DesugarOnce_0(t);
              LocalPopChoice(b_21);
            }
          else
            {
              t = a_21;
              {
              }
            }
        }
        return(t);
      }
      t = topdown_1(t, m_3);
    }
    return(t);
  }
  t = iowrap_1(t, l_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_desugar_0(t);
  return(t);
}
