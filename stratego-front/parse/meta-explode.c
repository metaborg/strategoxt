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
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_Ins_1;
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
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Ins_1 = ATmakeSymbol("Ins", 1, ATfalse);
  ATprotectSymbol(sym_Ins_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_t_18;
ATerm term_g_18;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_q_10;
ATerm term_e_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_o_9;
ATerm term_i_9;
ATerm term_o_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_k_5;
ATerm term_f_5;
ATerm term_x_4;
ATerm term_s_4;
void init_constant_terms (void)
{
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym_Cong_2, term_s_4, (ATerm) ATempty);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_Op_2, term_s_4, (ATerm) ATempty);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_t_9, term_q_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_t_12);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_t_12);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_z_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_b_17, term_t_12);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__3, term_y_15, term_z_15, (ATerm) ATempty);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm str_explode_0 (ATerm);
ATerm TrmOp_0 (ATerm);
ATerm TrmCons_0 (ATerm);
ATerm TrmNil_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm LstMetaVar_0 (ATerm);
ATerm TrmConc_0 (ATerm);
ATerm Anno_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm TrmAnno_0 (ATerm);
ATerm TrmFromStr_0 (ATerm);
ATerm TrmFromTerm_0 (ATerm);
ATerm TrmStr_0 (ATerm);
ATerm TrmLMetaVar_0 (ATerm);
ATerm TrmMetaVar_0 (ATerm);
ATerm trm_explode_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm i_89 (ATerm));
ATerm meta_explode_0 (ATerm);
ATerm _2 (ATerm, ATerm e_51 (ATerm), ATerm f_51 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_83 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm w_72 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_70 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_72 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm y_76 (ATerm), ATerm z_76 (ATerm));
ATerm crush_2 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_69 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_68 (ATerm));
ATerm map_1 (ATerm, ATerm o_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_68 (ATerm));
ATerm Program_1 (ATerm, ATerm y_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm x_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_69 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_91 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_68 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_64 (ATerm), ATerm e_64 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_68 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_68 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm v_71 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_71 (ATerm), ATerm l_71 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_71 (ATerm));
ATerm main_0 (ATerm);
ATerm str_explode_0 (ATerm t)
{
  ATerm a_4 = t;
  int c_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL;
      r_2 = t;
      g_1 :
      if(match_cons(r_2, sym_meta_var_1))
        {
          s_2 = ATgetArgument(r_2, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_2)), (ATerm) ATempty);
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_4);
    }
  else
    {
      t = a_4;
      {
        ATerm g_4 = t;
        int m_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0(t);
            LocalPopChoice(m_4);
          }
        else
          {
            t = g_4;
            {
              ATerm n_4 = t;
              int o_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromStr_0(t);
                  LocalPopChoice(o_4);
                }
              else
                {
                  t = n_4;
                  {
                    ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
                    ATerm q_3 (ATerm t)
                    {
                      ATerm e_3 = NULL,f_3 = NULL,l_3 = NULL;
                      ATerm p_4;
                      p_4 = t;
                      {
                        ATerm g_3 = NULL;
                        ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
                        t = not_null(w_2);
                        {
                          g_3 = t;
                          {
                            t = SSL_explode_term(not_null(g_3));
                            {
                              i_3 = t;
                              o_2 :
                              if(match_cons(i_3, sym__2))
                                {
                                  j_3 = ATgetArgument(i_3, 0);
                                  k_3 = ATgetArgument(i_3, 1);
                                  {
                                    if(((e_3 != NULL) && (e_3 != j_3)))
                                      _fail(j_3);
                                    else
                                      e_3 = j_3;
                                    if(((f_3 != NULL) && (f_3 != k_3)))
                                      _fail(k_3);
                                    else
                                      f_3 = k_3;
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
                      t = p_4;
                      {
                        ATerm m_3 = NULL;
                        t = not_null(f_3);
                        {
                          t = map_1(t, str_explode_0);
                          {
                            m_3 = t;
                            if(((l_3 != NULL) && (l_3 != m_3)))
                              _fail(m_3);
                            else
                              l_3 = m_3;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(e_3), not_null(l_3));
                      }
                      return(t);
                    }
                    w_2 = t;
                    q_2 :
                    if(((ATgetType(w_2) == AT_LIST) && ATisEmpty(w_2)))
                      {
                        {
                          ATerm q_4 = t;
                          int r_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_x_4;
                              LocalPopChoice(r_4);
                            }
                          else
                            {
                              t = q_4;
                              t = q_3(t);
                            }
                        }
                      }
                    else
                      {
                        if(((ATgetType(w_2) == AT_LIST) && !(ATisEmpty(w_2))))
                          {
                            u_2 = ATgetFirst((ATermList) w_2);
                            v_2 = (ATerm) ATgetNext((ATermList) w_2);
                            {
                              ATerm y_4 = t;
                              int d_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_2 = NULL,b_3 = NULL;
                                  ATerm e_5;
                                  e_5 = t;
                                  {
                                    ATerm a_3 = NULL;
                                    t = not_null(u_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        a_3 = t;
                                        if(((z_2 != NULL) && (z_2 != a_3)))
                                          _fail(a_3);
                                        else
                                          z_2 = a_3;
                                      }
                                    }
                                  }
                                  t = e_5;
                                  {
                                    ATerm c_3 = NULL;
                                    t = not_null(v_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        c_3 = t;
                                        if(((b_3 != NULL) && (b_3 != c_3)))
                                          _fail(c_3);
                                        else
                                          b_3 = c_3;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_Cong_2, term_f_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_3)), not_null(z_2)));
                                  }
                                  LocalPopChoice(d_5);
                                }
                              else
                                {
                                  t = y_4;
                                  t = q_3(t);
                                }
                            }
                          }
                        else
                          {
                            t = q_3(t);
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
ATerm TrmOp_0 (ATerm t)
{
  ATerm b_4 = NULL;
  ATerm d_4 = NULL,e_4 = NULL,k_4 = NULL;
  b_4 = t;
  {
    ATerm g_5;
    g_5 = t;
    {
      ATerm f_4 = NULL;
      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
      t = not_null(b_4);
      {
        f_4 = t;
        {
          t = SSL_explode_term(not_null(f_4));
          {
            h_4 = t;
            z_3 :
            if(match_cons(h_4, sym__2))
              {
                i_4 = ATgetArgument(h_4, 0);
                j_4 = ATgetArgument(h_4, 1);
                {
                  if(((d_4 != NULL) && (d_4 != i_4)))
                    _fail(i_4);
                  else
                    d_4 = i_4;
                  if(((e_4 != NULL) && (e_4 != j_4)))
                    _fail(j_4);
                  else
                    e_4 = j_4;
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
    t = g_5;
    {
      ATerm l_4 = NULL;
      t = not_null(e_4);
      {
        t = map_1(t, trm_explode_0);
        {
          l_4 = t;
          if(((k_4 != NULL) && (k_4 != l_4)))
            _fail(l_4);
          else
            k_4 = l_4;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_4), not_null(k_4));
    }
  }
  return(t);
}
ATerm TrmCons_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  u_4 = t;
  t_4 :
  if(((ATgetType(u_4) == AT_LIST) && !(ATisEmpty(u_4))))
    {
      v_4 = ATgetFirst((ATermList) u_4);
      w_4 = (ATerm) ATgetNext((ATermList) u_4);
      {
        ATerm z_4 = NULL,b_5 = NULL;
        ATerm j_5;
        j_5 = t;
        {
          ATerm a_5 = NULL;
          t = not_null(v_4);
          {
            t = trm_explode_0(t);
            {
              a_5 = t;
              if(((z_4 != NULL) && (z_4 != a_5)))
                _fail(a_5);
              else
                z_4 = a_5;
            }
          }
        }
        t = j_5;
        {
          ATerm c_5 = NULL;
          t = not_null(w_4);
          {
            t = trm_explode_0(t);
            {
              c_5 = t;
              if(((b_5 != NULL) && (b_5 != c_5)))
                _fail(c_5);
              else
                b_5 = c_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Op_2, term_f_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_5)), not_null(z_4)));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmNil_0 (ATerm t)
{
  ATerm i_5 = NULL;
  i_5 = t;
  h_5 :
  if(((ATgetType(i_5) == AT_LIST) && ATisEmpty(i_5)))
    {
      t = term_k_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
  r_5 = t;
  {
    ATerm w_5 = NULL;
    ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
    t = not_null(r_5);
    {
      w_5 = t;
      {
        t = SSL_explode_term(not_null(w_5));
        {
          y_5 = t;
          n_5 :
          if(match_cons(y_5, sym__2))
            {
              z_5 = ATgetArgument(y_5, 0);
              a_6 = ATgetArgument(y_5, 1);
              o_5 :
              if(match_string(z_5, ""))
                {
                  p_5 :
                  if(((ATgetType(a_6) == AT_LIST) && !(ATisEmpty(a_6))))
                    {
                      b_6 = ATgetFirst((ATermList) a_6);
                      c_6 = (ATerm) ATgetNext((ATermList) a_6);
                      q_5 :
                      if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
                        {
                          d_6 = ATgetFirst((ATermList) c_6);
                          e_6 = (ATerm) ATgetNext((ATermList) c_6);
                          {
                            if(((t_5 != NULL) && (t_5 != b_6)))
                              _fail(b_6);
                            else
                              t_5 = b_6;
                            {
                              if(((v_5 != NULL) && (v_5 != d_6)))
                                _fail(d_6);
                              else
                                v_5 = d_6;
                              if(((u_5 != NULL) && (u_5 != e_6)))
                                _fail(e_6);
                              else
                                u_5 = e_6;
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
    t = not_null(v_5);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm o_6 = NULL;
  ATerm q_6 = NULL,r_6 = NULL;
  o_6 = t;
  {
    ATerm s_6 = NULL;
    ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
    t = not_null(o_6);
    {
      s_6 = t;
      {
        t = SSL_explode_term(not_null(s_6));
        {
          u_6 = t;
          l_6 :
          if(match_cons(u_6, sym__2))
            {
              v_6 = ATgetArgument(u_6, 0);
              w_6 = ATgetArgument(u_6, 1);
              m_6 :
              if(match_string(v_6, ""))
                {
                  n_6 :
                  if(((ATgetType(w_6) == AT_LIST) && !(ATisEmpty(w_6))))
                    {
                      x_6 = ATgetFirst((ATermList) w_6);
                      y_6 = (ATerm) ATgetNext((ATermList) w_6);
                      {
                        if(((r_6 != NULL) && (r_6 != x_6)))
                          _fail(x_6);
                        else
                          r_6 = x_6;
                        if(((q_6 != NULL) && (q_6 != y_6)))
                          _fail(y_6);
                        else
                          q_6 = y_6;
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
    t = not_null(r_6);
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm l_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_77(t);
      LocalPopChoice(m_5);
    }
  else
    {
      t = l_5;
      {
        ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
        g_7 = t;
        f_7 :
        if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
          {
            h_7 = ATgetFirst((ATermList) g_7);
            i_7 = (ATerm) ATgetNext((ATermList) g_7);
            {
              ATerm l_7 = NULL,n_7 = NULL;
              ATerm s_5;
              s_5 = t;
              {
                ATerm m_7 = NULL;
                t = not_null(h_7);
                {
                  t = c_77(t);
                  {
                    m_7 = t;
                    if(((l_7 != NULL) && (l_7 != m_7)))
                      _fail(m_7);
                    else
                      l_7 = m_7;
                  }
                }
              }
              t = s_5;
              {
                ATerm o_7 = NULL;
                t = not_null(i_7);
                {
                  t = foldr_3(t, a_77, b_77, c_77);
                  {
                    o_7 = t;
                    if(((n_7 != NULL) && (n_7 != o_7)))
                      _fail(o_7);
                    else
                      n_7 = o_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_7), not_null(n_7));
                  t = b_77(t);
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
  return(t);
}
ATerm LstMetaVar_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym_meta_listvar_1))
    {
      v_7 = ATgetArgument(u_7, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(v_7)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmConc_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym_Conc_2))
    {
      e_8 = ATgetArgument(d_8, 0);
      f_8 = ATgetArgument(d_8, 1);
      {
        t = not_null(e_8);
        {
          ATerm a_0 (ATerm t)
          {
            ATerm i_8 = NULL;
            ATerm j_8 = NULL;
            t = LstMetaVar_0(t);
            {
              j_8 = t;
              if(((i_8 != NULL) && (i_8 != j_8)))
                _fail(j_8);
              else
                i_8 = j_8;
            }
            t = (ATerm) ATinsert(ATempty, not_null(i_8));
            return(t);
          }
          t = try_1(t, a_0);
          {
            ATerm b_0 (ATerm t)
            {
              t = not_null(f_8);
              {
                ATerm x_5 = t;
                int f_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TrmLMetaVar_0(t);
                    LocalPopChoice(f_6);
                  }
                else
                  {
                    t = x_5;
                    t = trm_explode_0(t);
                  }
              }
              return(t);
            }
            ATerm m_0 (ATerm t)
            {
              ATerm k_8 = NULL,m_8 = NULL;
              ATerm g_6;
              g_6 = t;
              {
                ATerm l_8 = NULL;
                t = Fst_0(t);
                {
                  l_8 = t;
                  if(((k_8 != NULL) && (k_8 != l_8)))
                    _fail(l_8);
                  else
                    k_8 = l_8;
                }
              }
              t = g_6;
              {
                ATerm n_8 = NULL;
                t = Snd_0(t);
                {
                  n_8 = t;
                  if(((m_8 != NULL) && (m_8 != n_8)))
                    _fail(n_8);
                  else
                    m_8 = n_8;
                }
                t = (ATerm) ATmakeAppl(sym_Op_2, term_f_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), not_null(k_8)));
              }
              return(t);
            }
            t = foldr_3(t, b_0, m_0, trm_explode_0);
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
ATerm Anno_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Anno_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        ATerm h_6 = t;
        int i_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 = NULL,l_9 = NULL;
            ATerm k_9 = NULL;
            t = SSLgetAnnotations(not_null(d_9));
            {
              k_9 = t;
              if(((j_9 != NULL) && (j_9 != k_9)))
                _fail(k_9);
              else
                j_9 = k_9;
            }
            {
              t = not_null(e_9);
              {
                ATerm n_9 = NULL;
                t = k_0(t);
                {
                  l_9 = t;
                  {
                    t = not_null(f_9);
                    {
                      ATerm p_9 = NULL;
                      t = l_0(t);
                      {
                        n_9 = t;
                        {
                          ATerm q_9 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(l_9), not_null(n_9)), not_null(j_9));
                          {
                            q_9 = t;
                            if(((p_9 != NULL) && (p_9 != q_9)))
                              _fail(q_9);
                            else
                              p_9 = q_9;
                          }
                          t = not_null(p_9);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(i_6);
          }
        else
          {
            t = h_6;
            {
              ATerm u_9 = NULL,w_9 = NULL;
              ATerm v_9 = NULL;
              t = SSLgetAnnotations(not_null(d_9));
              {
                v_9 = t;
                if(((u_9 != NULL) && (u_9 != v_9)))
                  _fail(v_9);
                else
                  u_9 = v_9;
              }
              {
                t = not_null(e_9);
                {
                  ATerm y_9 = NULL;
                  t = k_0(t);
                  {
                    w_9 = t;
                    {
                      t = not_null(f_9);
                      {
                        ATerm a_10 = NULL;
                        t = l_0(t);
                        {
                          y_9 = t;
                          {
                            ATerm b_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(w_9), not_null(y_9)), not_null(u_9));
                            {
                              b_10 = t;
                              if(((a_10 != NULL) && (a_10 != b_10)))
                                _fail(b_10);
                              else
                                a_10 = b_10;
                            }
                            t = not_null(a_10);
                          }
                        }
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
ATerm TrmAnno_0 (ATerm t)
{
  t = Anno_2(t, trm_explode_0, meta_explode_0);
  return(t);
}
ATerm TrmFromStr_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_FromStrategy_1))
    {
      p_10 = ATgetArgument(o_10, 0);
      {
        t = not_null(p_10);
        t = meta_explode_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmFromTerm_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_FromTerm_1))
    {
      v_10 = ATgetArgument(u_10, 0);
      {
        t = not_null(v_10);
        t = meta_explode_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmStr_0 (ATerm t)
{
  ATerm z_10 = NULL;
  t = is_string_0(t);
  {
    ATerm a_11 = NULL;
    a_11 = t;
    if(((z_10 != NULL) && (z_10 != a_11)))
      _fail(a_11);
    else
      z_10 = a_11;
    t = (ATerm) ATmakeAppl(sym_Str_1, not_null(z_10));
  }
  return(t);
}
ATerm TrmLMetaVar_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym_meta_listvar_1))
    {
      f_11 = ATgetArgument(e_11, 0);
      t = (ATerm) ATmakeAppl(sym_Op_2, term_f_5, (ATerm) ATinsert(ATinsert(ATempty, term_k_5), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(f_11)))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmMetaVar_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_meta_var_1))
    {
      l_11 = ATgetArgument(k_11, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm trm_explode_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TrmMetaVar_0(t);
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      {
        ATerm p_6 = t;
        int t_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmLMetaVar_0(t);
            LocalPopChoice(t_6);
          }
        else
          {
            t = p_6;
            {
              ATerm z_6 = t;
              int a_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0(t);
                  LocalPopChoice(a_7);
                }
              else
                {
                  t = z_6;
                  {
                    ATerm b_7 = t;
                    int c_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromTerm_0(t);
                        LocalPopChoice(c_7);
                      }
                    else
                      {
                        t = b_7;
                        {
                          ATerm d_7 = t;
                          int e_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmFromStr_0(t);
                              LocalPopChoice(e_7);
                            }
                          else
                            {
                              t = d_7;
                              {
                                ATerm j_7 = t;
                                int k_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = TrmAnno_0(t);
                                    LocalPopChoice(k_7);
                                  }
                                else
                                  {
                                    t = j_7;
                                    {
                                      ATerm p_7 = t;
                                      int q_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmConc_0(t);
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
                                                t = TrmNil_0(t);
                                                LocalPopChoice(s_7);
                                              }
                                            else
                                              {
                                                t = r_7;
                                                {
                                                  ATerm w_7 = t;
                                                  int x_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = TrmCons_0(t);
                                                      LocalPopChoice(x_7);
                                                    }
                                                  else
                                                    {
                                                      t = w_7;
                                                      t = TrmOp_0(t);
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm alltd_1 (ATerm t, ATerm i_89 (ATerm))
{
  ATerm o_11 (ATerm t)
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_89(t);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = _all(t, o_11);
      }
    return(t);
  }
  t = o_11(t);
  return(t);
}
ATerm meta_explode_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm s_11 = NULL,t_11 = NULL;
    s_11 = t;
    r_11 :
    if(match_cons(s_11, sym_ToTerm_1))
      {
        t_11 = ATgetArgument(s_11, 0);
        {
          t = not_null(t_11);
          t = trm_explode_0(t);
        }
      }
    else
      {
        if(match_cons(s_11, sym_ToStrategy_1))
          {
            t_11 = ATgetArgument(s_11, 0);
            {
              t = not_null(t_11);
              t = str_explode_0(t);
            }
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = alltd_1(t, n_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm e_51 (ATerm), ATerm f_51 (ATerm))
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym__2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm k_12 = NULL,m_12 = NULL;
        ATerm l_12 = NULL;
        t = SSLgetAnnotations(not_null(e_12));
        {
          l_12 = t;
          if(((k_12 != NULL) && (k_12 != l_12)))
            _fail(l_12);
          else
            k_12 = l_12;
        }
        {
          t = not_null(f_12);
          {
            ATerm o_12 = NULL;
            t = e_51(t);
            {
              m_12 = t;
              {
                t = not_null(g_12);
                {
                  ATerm q_12 = NULL;
                  t = f_51(t);
                  {
                    o_12 = t;
                    {
                      ATerm r_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_12), not_null(o_12)), not_null(k_12));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm z_12 = NULL;
  ATerm a_8;
  a_8 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm a_13 = NULL,b_13 = NULL;
      a_13 = t;
      y_12 :
      if(match_cons(a_13, sym_Program_1))
        {
          b_13 = ATgetArgument(a_13, 0);
          if(((z_12 != NULL) && (z_12 != b_13)))
            _fail(b_13);
          else
            z_12 = b_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, o_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_8), not_null(z_12)), term_g_8));
      {
        t = printnl_0(t);
        {
          t = term_o_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym__2))
    {
      g_13 = ATgetArgument(f_13, 0);
      h_13 = ATgetArgument(f_13, 1);
      {
        ATerm p_8;
        p_8 = t;
        t = SSL_printnl(not_null(g_13), not_null(h_13));
        t = p_8;
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
  ATerm m_13 = NULL;
  m_13 = t;
  t = SSL_implode_string(not_null(m_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
        r_13 = t;
        q_13 :
        if(((ATgetType(r_13) == AT_LIST) && !(ATisEmpty(r_13))))
          {
            s_13 = ATgetFirst((ATermList) r_13);
            t_13 = (ATerm) ATgetNext((ATermList) r_13);
            {
              t = not_null(s_13);
              {
                ATerm p_0 (ATerm t)
                {
                  t = not_null(t_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_0);
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
  ATerm d_14 = NULL;
  ATerm f_14 = NULL;
  d_14 = t;
  {
    ATerm g_14 = NULL;
    ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
    t = not_null(d_14);
    {
      g_14 = t;
      {
        t = SSL_explode_term(not_null(g_14));
        {
          i_14 = t;
          b_14 :
          if(match_cons(i_14, sym__2))
            {
              j_14 = ATgetArgument(i_14, 0);
              k_14 = ATgetArgument(i_14, 1);
              c_14 :
              if(match_string(j_14, ""))
                {
                  if(((f_14 != NULL) && (f_14 != k_14)))
                    _fail(k_14);
                  else
                    f_14 = k_14;
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
      t = not_null(f_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm o_14 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_14);
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        {
          t = Nil_0(t);
          t = d_83(t);
        }
      }
    return(t);
  }
  t = o_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      {
        t = not_null(s_14);
        {
          ATerm q_0 (ATerm t)
          {
            t = not_null(t_14);
            return(t);
          }
          t = at_end_1(t, q_0);
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
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = SSL_explode_string(not_null(y_14));
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
ATerm debug_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm w_8;
  w_8 = t;
  {
    ATerm d_15 = NULL,f_15 = NULL;
    ATerm x_8;
    x_8 = t;
    {
      ATerm e_15 = NULL;
      t = w_72(t);
      {
        e_15 = t;
        if(((d_15 != NULL) && (d_15 != e_15)))
          _fail(e_15);
        else
          d_15 = e_15;
      }
    }
    t = x_8;
    {
      ATerm g_15 = NULL;
      g_15 = t;
      if(((f_15 != NULL) && (f_15 != g_15)))
        _fail(g_15);
      else
        f_15 = g_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_15)), not_null(d_15)));
        t = printnl_0(t);
      }
    }
  }
  t = w_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_15 = NULL;
  k_15 = t;
  t = SSL_is_string(not_null(k_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_0);
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            {
              ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
              t_15 = t;
              s_15 :
              if(match_cons(t_15, sym_Path_1))
                {
                  u_15 = ATgetArgument(t_15, 0);
                  t = not_null(u_15);
                }
              else
                {
                  if(match_cons(t_15, sym_Var_1))
                    {
                      u_15 = ATgetArgument(t_15, 0);
                      {
                        t = not_null(u_15);
                        {
                          ATerm g_9 = t;
                          int h_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_9);
                            }
                          else
                            {
                              t = g_9;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_i_9;
                                  return(t);
                                }
                                t = debug_1(t, s_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_15, sym_Prefix_2))
                        {
                          u_15 = ATgetArgument(t_15, 0);
                          v_15 = ATgetArgument(t_15, 1);
                          {
                            ATerm a_16 = NULL,c_16 = NULL;
                            ATerm m_9;
                            m_9 = t;
                            {
                              ATerm b_16 = NULL;
                              t = not_null(u_15);
                              {
                                t = eval_config_0(t);
                                {
                                  b_16 = t;
                                  if(((a_16 != NULL) && (a_16 != b_16)))
                                    _fail(b_16);
                                  else
                                    a_16 = b_16;
                                }
                              }
                            }
                            t = m_9;
                            {
                              ATerm d_16 = NULL;
                              t = not_null(v_15);
                              {
                                t = eval_config_0(t);
                                {
                                  d_16 = t;
                                  if(((c_16 != NULL) && (c_16 != d_16)))
                                    _fail(d_16);
                                  else
                                    c_16 = d_16;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), not_null(c_16));
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
  ATerm l_16 = NULL;
  l_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(l_16));
    {
      t = table_get_0(t);
      {
        ATerm t_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_9;
            r_9 = t;
            {
              ATerm n_16 = NULL;
              ATerm o_16 = NULL;
              o_16 = t;
              if(((n_16 != NULL) && (n_16 != o_16)))
                _fail(o_16);
              else
                n_16 = o_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_9, not_null(l_16), not_null(n_16));
                t = table_put_0(t);
              }
            }
            t = r_9;
          }
          return(t);
        }
        t = try_1(t, t_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_70 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm s_9;
    s_9 = t;
    {
      ATerm s_16 = NULL;
      ATerm t_16 = NULL;
      t = term_t_9;
      {
        t = get_config_0(t);
        {
          t_16 = t;
          if(((s_16 != NULL) && (s_16 != t_16)))
            _fail(t_16);
          else
            s_16 = t_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), term_x_9);
        t = geq_0(t);
      }
    }
    t = s_9;
    t = a_70(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym__2))
    {
      y_16 = ATgetArgument(x_16, 0);
      z_16 = ATgetArgument(x_16, 1);
      t = SSL_WriteToTextFile(not_null(y_16), not_null(z_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym__2))
    {
      g_17 = ATgetArgument(f_17, 0);
      h_17 = ATgetArgument(f_17, 1);
      t = SSL_WriteToBinaryFile(not_null(g_17), not_null(h_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_17 = NULL;
  ATerm z_9;
  z_9 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm c_10 = t;
      int d_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm q_17 = NULL,r_17 = NULL;
            q_17 = t;
            m_17 :
            if(match_cons(q_17, sym_Output_1))
              {
                r_17 = ATgetArgument(q_17, 0);
                if(((p_17 != NULL) && (p_17 != r_17)))
                  _fail(r_17);
                else
                  p_17 = r_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, w_0);
          LocalPopChoice(d_10);
        }
      else
        {
          t = c_10;
          {
            ATerm s_17 = NULL;
            t = term_e_10;
            {
              s_17 = t;
              if(((p_17 != NULL) && (p_17 != s_17)))
                _fail(s_17);
              else
                p_17 = s_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, v_0, _id);
  }
  t = z_9;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_0 (ATerm t)
      {
        t = not_null(p_17);
        return(t);
      }
      t = split_2(t, y_0, _id);
      return(t);
    }
    t = _2(t, _id, x_0);
    {
      ATerm f_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              ATerm t_17 = NULL;
              t_17 = t;
              o_17 :
              if(!(match_cons(t_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, a_1);
            return(t);
          }
          t = _2(t, z_0, WriteToBinaryFile_0);
          LocalPopChoice(g_10);
        }
      else
        {
          t = f_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm z_17 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  ATerm h_10;
  h_10 = t;
  t = dtime_0(t);
  t = h_10;
  {
    t = g_72(t);
    {
      ATerm i_10;
      i_10 = t;
      {
        ATerm a_18 = NULL;
        t = dtime_0(t);
        {
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
        }
      }
      t = i_10;
      {
        b_18 = t;
        y_17 :
        if(match_cons(b_18, sym__2))
          {
            c_18 = ATgetArgument(b_18, 0);
            d_18 = ATgetArgument(b_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_17))), not_null(d_18));
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
  ATerm j_18 = NULL;
  j_18 = t;
  t = SSL_ReadFromFile(not_null(j_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm o_18 = NULL,q_18 = NULL;
  ATerm j_10;
  j_10 = t;
  {
    ATerm p_18 = NULL;
    t = m_75(t);
    {
      p_18 = t;
      if(((o_18 != NULL) && (o_18 != p_18)))
        _fail(p_18);
      else
        o_18 = p_18;
    }
  }
  t = j_10;
  {
    ATerm r_18 = NULL;
    t = n_75(t);
    {
      r_18 = t;
      if(((q_18 != NULL) && (q_18 != r_18)))
        _fail(r_18);
      else
        q_18 = r_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(q_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_18 = NULL;
  ATerm k_10;
  k_10 = t;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          ATerm y_18 = NULL,z_18 = NULL;
          y_18 = t;
          v_18 :
          if(match_cons(y_18, sym_Input_1))
            {
              z_18 = ATgetArgument(y_18, 0);
              if(((x_18 != NULL) && (x_18 != z_18)))
                _fail(z_18);
              else
                x_18 = z_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, b_1);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        {
          ATerm a_19 = NULL;
          t = term_q_10;
          {
            a_19 = t;
            if(((x_18 != NULL) && (x_18 != a_19)))
              _fail(a_19);
            else
              x_18 = a_19;
          }
        }
      }
  }
  t = k_10;
  {
    ATerm c_1 (ATerm t)
    {
      t = not_null(x_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, c_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_string_to_int(not_null(e_19));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  m_19 = t;
  k_19 :
  if(match_string(m_19, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
        {
          n_19 = ATgetFirst((ATermList) m_19);
          o_19 = (ATerm) ATgetNext((ATermList) m_19);
          l_19 :
          if(((ATgetType(o_19) == AT_LIST) && !(ATisEmpty(o_19))))
            {
              p_19 = ATgetFirst((ATermList) o_19);
              q_19 = (ATerm) ATgetNext((ATermList) o_19);
              {
                ATerm u_19 = NULL;
                ATerm r_10;
                r_10 = t;
                {
                  t = not_null(n_19);
                  t = h_0(t);
                }
                t = r_10;
                {
                  ATerm v_19 = NULL;
                  t = not_null(p_19);
                  {
                    t = i_0(t);
                    {
                      v_19 = t;
                      if(((u_19 != NULL) && (u_19 != v_19)))
                        _fail(v_19);
                      else
                        u_19 = v_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_19)), not_null(u_19));
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
  ATerm s_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm o_20 = NULL;
        o_20 = t;
        z_19 :
        if(!(match_string(o_20, "-i")))
          {
            if(!(match_string(o_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        ATerm r_20 = NULL;
        ATerm x_10;
        x_10 = t;
        {
          ATerm p_20 = NULL;
          ATerm q_20 = NULL;
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(p_20));
            t = set_config_0(t);
          }
        }
        t = x_10;
        {
          ATerm s_20 = NULL;
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_20));
        }
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        t = term_b_11;
        return(t);
      }
      t = ArgOption_3(t, d_1, e_1, f_1);
      LocalPopChoice(w_10);
    }
  else
    {
      t = s_10;
      {
        ATerm c_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm t_20 = NULL;
              t_20 = t;
              c_20 :
              if(!(match_string(t_20, "-o")))
                {
                  if(!(match_string(t_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              ATerm w_20 = NULL;
              ATerm h_11;
              h_11 = t;
              {
                ATerm u_20 = NULL;
                ATerm v_20 = NULL;
                v_20 = t;
                if(((u_20 != NULL) && (u_20 != v_20)))
                  _fail(v_20);
                else
                  u_20 = v_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(u_20));
                  t = set_config_0(t);
                }
              }
              t = h_11;
              {
                ATerm x_20 = NULL;
                x_20 = t;
                if(((w_20 != NULL) && (w_20 != x_20)))
                  _fail(x_20);
                else
                  w_20 = x_20;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_20));
              }
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              t = term_m_11;
              return(t);
            }
            t = ArgOption_3(t, h_1, i_1, j_1);
            LocalPopChoice(g_11);
          }
        else
          {
            t = c_11;
            {
              ATerm n_11 = t;
              int p_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_1 (ATerm t)
                  {
                    ATerm y_20 = NULL;
                    y_20 = t;
                    f_20 :
                    if(!(match_string(y_20, "-S")))
                      {
                        if(!(match_string(y_20, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm l_1 (ATerm t)
                  {
                    t = term_u_11;
                    t = set_config_0(t);
                    t = term_v_11;
                    return(t);
                  }
                  ATerm m_1 (ATerm t)
                  {
                    t = term_w_11;
                    return(t);
                  }
                  t = Option_3(t, k_1, l_1, m_1);
                  LocalPopChoice(p_11);
                }
              else
                {
                  t = n_11;
                  {
                    ATerm x_11 = t;
                    int y_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_1 (ATerm t)
                        {
                          ATerm z_20 = NULL;
                          z_20 = t;
                          g_20 :
                          if(!(match_string(z_20, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm o_1 (ATerm t)
                        {
                          ATerm c_21 = NULL;
                          ATerm z_11;
                          z_11 = t;
                          {
                            ATerm a_21 = NULL;
                            ATerm b_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              b_21 = t;
                              if(((a_21 != NULL) && (a_21 != b_21)))
                                _fail(b_21);
                              else
                                a_21 = b_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(a_21));
                              t = set_config_0(t);
                            }
                          }
                          t = z_11;
                          {
                            ATerm d_21 = NULL;
                            d_21 = t;
                            if(((c_21 != NULL) && (c_21 != d_21)))
                              _fail(d_21);
                            else
                              c_21 = d_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_21));
                          }
                          return(t);
                        }
                        ATerm p_1 (ATerm t)
                        {
                          t = term_a_12;
                          return(t);
                        }
                        t = ArgOption_3(t, n_1, o_1, p_1);
                        LocalPopChoice(y_11);
                      }
                    else
                      {
                        t = x_11;
                        {
                          ATerm b_12 = t;
                          int c_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_1 (ATerm t)
                              {
                                ATerm e_21 = NULL;
                                e_21 = t;
                                j_20 :
                                if(!(match_string(e_21, "-k")))
                                  {
                                    if(!(match_string(e_21, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm r_1 (ATerm t)
                              {
                                ATerm h_12;
                                h_12 = t;
                                {
                                  ATerm f_21 = NULL;
                                  ATerm g_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    g_21 = t;
                                    if(((f_21 != NULL) && (f_21 != g_21)))
                                      _fail(g_21);
                                    else
                                      f_21 = g_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_i_12, not_null(f_21));
                                    t = set_config_0(t);
                                  }
                                }
                                t = h_12;
                                return(t);
                              }
                              ATerm s_1 (ATerm t)
                              {
                                t = term_j_12;
                                return(t);
                              }
                              t = ArgOption_3(t, q_1, r_1, s_1);
                              LocalPopChoice(c_12);
                            }
                          else
                            {
                              t = b_12;
                              {
                                ATerm n_12 = t;
                                int p_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_1 (ATerm t)
                                    {
                                      ATerm h_21 = NULL;
                                      h_21 = t;
                                      l_20 :
                                      if(!(match_string(h_21, "-v")))
                                        {
                                          if(!(match_string(h_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm u_1 (ATerm t)
                                    {
                                      t = term_u_12;
                                      t = set_config_0(t);
                                      t = term_v_12;
                                      return(t);
                                    }
                                    ATerm v_1 (ATerm t)
                                    {
                                      t = term_w_12;
                                      return(t);
                                    }
                                    t = Option_3(t, t_1, u_1, v_1);
                                    LocalPopChoice(p_12);
                                  }
                                else
                                  {
                                    t = n_12;
                                    {
                                      ATerm x_12 = t;
                                      int c_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_1 (ATerm t)
                                          {
                                            ATerm i_21 = NULL;
                                            i_21 = t;
                                            m_20 :
                                            if(!(match_string(i_21, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm x_1 (ATerm t)
                                          {
                                            t = term_i_13;
                                            t = set_config_0(t);
                                            t = term_j_13;
                                            return(t);
                                          }
                                          ATerm y_1 (ATerm t)
                                          {
                                            t = term_k_13;
                                            return(t);
                                          }
                                          t = Option_3(t, w_1, x_1, y_1);
                                          LocalPopChoice(c_13);
                                        }
                                      else
                                        {
                                          t = x_12;
                                          {
                                            ATerm z_1 (ATerm t)
                                            {
                                              ATerm j_21 = NULL;
                                              j_21 = t;
                                              n_20 :
                                              if(!(match_string(j_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm a_2 (ATerm t)
                                            {
                                              t = term_n_13;
                                              t = set_config_0(t);
                                              t = term_o_13;
                                              return(t);
                                            }
                                            ATerm b_2 (ATerm t)
                                            {
                                              t = term_p_13;
                                              return(t);
                                            }
                                            t = Option_3(t, z_1, a_2, b_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATempty, term_u_13));
  {
    t = printnl_0(t);
    {
      t = term_o_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  t = SSL_TicksToSeconds(not_null(s_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym__2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_21), not_null(z_21));
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = SSL_addr(not_null(y_21), not_null(z_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_76 (ATerm), ATerm z_76 (ATerm))
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_76(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
        g_22 = t;
        f_22 :
        if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
          {
            h_22 = ATgetFirst((ATermList) g_22);
            i_22 = (ATerm) ATgetNext((ATermList) g_22);
            {
              ATerm l_22 = NULL;
              ATerm m_22 = NULL;
              t = not_null(i_22);
              {
                t = foldr_2(t, y_76, z_76);
                {
                  m_22 = t;
                  if(((l_22 != NULL) && (l_22 != m_22)))
                    _fail(m_22);
                  else
                    l_22 = m_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(l_22));
                t = z_76(t);
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
ATerm crush_2 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm))
{
  ATerm t_22 = NULL;
  ATerm v_22 = NULL;
  t_22 = t;
  {
    ATerm w_22 = NULL;
    ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
    t = not_null(t_22);
    {
      w_22 = t;
      {
        t = SSL_explode_term(not_null(w_22));
        {
          y_22 = t;
          s_22 :
          if(match_cons(y_22, sym__2))
            {
              z_22 = ATgetArgument(y_22, 0);
              a_23 = ATgetArgument(y_22, 1);
              if(((v_22 != NULL) && (v_22 != a_23)))
                _fail(a_23);
              else
                v_22 = a_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_22);
      t = foldr_2(t, q_78, r_78);
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
    ATerm c_2 (ATerm t)
    {
      t = term_q_11;
      return(t);
    }
    t = crush_2(t, c_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym__2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      {
        ATerm z_13;
        z_13 = t;
        {
          ATerm a_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_23), not_null(i_23));
              LocalPopChoice(e_14);
            }
          else
            {
              t = a_14;
              t = SSL_gtr(not_null(h_23), not_null(i_23));
            }
        }
        t = z_13;
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
  ATerm o_23 = NULL;
  ATerm h_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
      p_23 = t;
      n_23 :
      if(match_cons(p_23, sym__2))
        {
          q_23 = ATgetArgument(p_23, 0);
          r_23 = ATgetArgument(p_23, 1);
          {
            if(((o_23 != NULL) && (o_23 != q_23)))
              _fail(q_23);
            else
              o_23 = q_23;
            if(((o_23 != NULL) && (o_23 != r_23)))
              _fail(r_23);
            else
              o_23 = r_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_14);
    }
  else
    {
      t = h_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm m_14;
    m_14 = t;
    {
      ATerm u_23 = NULL;
      ATerm v_23 = NULL;
      t = term_t_9;
      {
        t = get_config_0(t);
        {
          v_23 = t;
          if(((u_23 != NULL) && (u_23 != v_23)))
            _fail(v_23);
          else
            u_23 = v_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), term_o_8);
        t = geq_0(t);
      }
    }
    t = m_14;
    t = z_69(t);
    return(t);
  }
  t = try_1(t, d_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm z_23 = NULL,b_24 = NULL;
    ATerm n_14;
    n_14 = t;
    {
      ATerm a_24 = NULL;
      t = run_time_0(t);
      {
        a_24 = t;
        if(((z_23 != NULL) && (z_23 != a_24)))
          _fail(a_24);
        else
          z_23 = a_24;
      }
    }
    t = n_14;
    {
      ATerm c_24 = NULL;
      t = term_p_14;
      {
        t = get_config_0(t);
        {
          c_24 = t;
          if(((b_24 != NULL) && (b_24 != c_24)))
            _fail(c_24);
          else
            b_24 = c_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_14), not_null(z_23)), term_u_14), not_null(b_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_2);
  {
    t = term_q_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  i_24 :
  if(match_cons(j_24, sym_Version_0))
    {
      ATerm l_24 = NULL,n_24 = NULL;
      ATerm w_14;
      w_14 = t;
      {
        ATerm m_24 = NULL;
        t = SSLgetAnnotations(not_null(j_24));
        {
          m_24 = t;
          if(((l_24 != NULL) && (l_24 != m_24)))
            _fail(m_24);
          else
            l_24 = m_24;
        }
      }
      t = w_14;
      {
        ATerm o_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_24));
        {
          o_24 = t;
          if(((n_24 != NULL) && (n_24 != o_24)))
            _fail(o_24);
          else
            n_24 = o_24;
        }
        t = not_null(n_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm x_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = x_14;
        {
          ATerm a_15 = t;
          int b_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_15);
            }
          else
            {
              t = a_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_2);
  t = e_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = SSL_table_create(not_null(t_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  {
    ATerm c_15;
    c_15 = t;
    {
      t = term_h_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_15, term_i_15, not_null(x_24));
          t = table_put_0(t);
        }
      }
    }
    t = c_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  t = SSL_table_destroy(not_null(b_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  t = SSL_exit(not_null(m_25));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(((ATgetType(q_25) == AT_LIST) && ATisEmpty(q_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_25) == AT_LIST) && !(ATisEmpty(q_25))))
        {
          r_25 = ATgetFirst((ATermList) q_25);
          s_25 = (ATerm) ATgetNext((ATermList) q_25);
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
  ATerm j_15;
  j_15 = t;
  {
    ATerm v_25 = NULL;
    ATerm y_25 = NULL;
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        {
          ATerm w_25 = NULL;
          ATerm x_25 = NULL;
          x_25 = t;
          if(((w_25 != NULL) && (w_25 != x_25)))
            _fail(x_25);
          else
            w_25 = x_25;
          t = (ATerm) ATinsert(ATempty, not_null(w_25));
        }
      }
    {
      y_25 = t;
      if(((v_25 != NULL) && (v_25 != y_25)))
        _fail(y_25);
      else
        v_25 = y_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(v_25));
      t = printnl_0(t);
    }
  }
  t = j_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm b_26 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        t = Cons_2(t, o_82, b_26);
      }
    return(t);
  }
  t = b_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  n_26 = t;
  k_26 :
  if(((ATgetType(n_26) == AT_LIST) && !(ATisEmpty(n_26))))
    {
      l_26 = ATgetFirst((ATermList) n_26);
      m_26 = (ATerm) ATgetNext((ATermList) n_26);
      {
        ATerm q_26 = NULL;
        t = not_null(m_26);
        {
          ATerm p_15;
          p_15 = t;
          {
            ATerm r_26 = NULL,t_26 = NULL,v_26 = NULL;
            ATerm q_15;
            q_15 = t;
            {
              ATerm s_26 = NULL;
              t = g_0(t);
              {
                s_26 = t;
                if(((r_26 != NULL) && (r_26 != s_26)))
                  _fail(s_26);
                else
                  r_26 = s_26;
              }
            }
            t = q_15;
            {
              ATerm u_26 = NULL;
              t = not_null(l_26);
              {
                t = f_0(t);
                {
                  u_26 = t;
                  if(((t_26 != NULL) && (t_26 != u_26)))
                    _fail(u_26);
                  else
                    t_26 = u_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_26)), not_null(t_26));
                {
                  v_26 = t;
                  if(((q_26 != NULL) && (q_26 != v_26)))
                    _fail(v_26);
                  else
                    q_26 = v_26;
                }
              }
            }
          }
          t = p_15;
          {
            ATerm g_2 (ATerm t)
            {
              t = not_null(q_26);
              return(t);
            }
            t = reverse_acc_2(t, f_0, g_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_26) == AT_LIST) && ATisEmpty(n_26)))
        {
          {
            t = term_t_12;
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
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm h_27 = NULL,i_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_Program_1))
    {
      i_27 = ATgetArgument(h_27, 0);
      {
        ATerm l_27 = NULL,n_27 = NULL;
        ATerm m_27 = NULL;
        t = SSLgetAnnotations(not_null(h_27));
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
        {
          t = not_null(i_27);
          {
            ATerm p_27 = NULL;
            t = y_58(t);
            {
              n_27 = t;
              {
                ATerm q_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_27)), not_null(l_27));
                {
                  q_27 = t;
                  if(((p_27 != NULL) && (p_27 != q_27)))
                    _fail(q_27);
                  else
                    p_27 = q_27;
                }
                t = not_null(p_27);
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
  ATerm z_27 = NULL;
  ATerm r_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_28 = NULL;
      t = term_p_14;
      {
        t = get_config_0(t);
        {
          a_28 = t;
          if(((z_27 != NULL) && (z_27 != a_28)))
            _fail(a_28);
          else
            z_27 = a_28;
        }
      }
      LocalPopChoice(w_15);
    }
  else
    {
      t = r_15;
      {
        ATerm i_2 (ATerm t)
        {
          ATerm j_2 (ATerm t)
          {
            ATerm b_28 = NULL;
            b_28 = t;
            if(((z_27 != NULL) && (z_27 != b_28)))
              _fail(b_28);
            else
              z_27 = b_28;
            return(t);
          }
          t = Program_1(t, j_2);
          return(t);
        }
        t = option_defined_1(t, i_2);
      }
    }
  {
    ATerm k_2 (ATerm t)
    {
      ATerm l_2 (ATerm t)
      {
        t = not_null(z_27);
        return(t);
      }
      t = short_description_1(t, l_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, k_2);
    {
      t = term_x_15;
      {
        t = echo_0(t);
        {
          t = term_e_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_2 (ATerm t)
                {
                  ATerm c_28 = NULL;
                  ATerm d_28 = NULL;
                  d_28 = t;
                  if(((c_28 != NULL) && (c_28 != d_28)))
                    _fail(d_28);
                  else
                    c_28 = d_28;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_28)), term_f_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_2);
                {
                  ATerm n_2 (ATerm t)
                  {
                    ATerm e_28 = NULL;
                    ATerm f_28 = NULL;
                    ATerm p_2 (ATerm t)
                    {
                      t = not_null(z_27);
                      return(t);
                    }
                    t = long_description_1(t, p_2);
                    {
                      f_28 = t;
                      if(((e_28 != NULL) && (e_28 != f_28)))
                        _fail(f_28);
                      else
                        e_28 = f_28;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(e_28)), term_g_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_2);
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
  ATerm h_16;
  h_16 = t;
  {
    ATerm l_28 = NULL;
    ATerm m_28 = NULL;
    m_28 = t;
    if(((l_28 != NULL) && (l_28 != m_28)))
      _fail(m_28);
    else
      l_28 = m_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATempty, not_null(l_28)));
      t = printnl_0(t);
    }
  }
  t = h_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm i_16;
  i_16 = t;
  {
    t = x_72(t);
    t = debug_0(t);
  }
  t = i_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  z_28 :
  if(match_cons(a_29, sym_Undefined_1))
    {
      b_29 = ATgetArgument(a_29, 0);
      {
        ATerm g_29 = NULL,i_29 = NULL;
        ATerm h_29 = NULL;
        t = SSLgetAnnotations(not_null(a_29));
        {
          h_29 = t;
          if(((g_29 != NULL) && (g_29 != h_29)))
            _fail(h_29);
          else
            g_29 = h_29;
        }
        {
          t = not_null(b_29);
          {
            ATerm k_29 = NULL;
            t = z_58(t);
            {
              i_29 = t;
              {
                ATerm l_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_29)), not_null(g_29));
                {
                  l_29 = t;
                  if(((k_29 != NULL) && (k_29 != l_29)))
                    _fail(l_29);
                  else
                    k_29 = l_29;
                }
                t = not_null(k_29);
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
ATerm fetch_1 (ATerm t, ATerm x_82 (ATerm))
{
  ATerm q_29 (ATerm t)
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_82, _id);
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = Cons_2(t, _id, q_29);
      }
    return(t);
  }
  t = q_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_69 (ATerm))
{
  t = fetch_1(t, j_69);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  w_29 :
  if(match_cons(x_29, sym_Help_0))
    {
      ATerm z_29 = NULL,b_30 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm a_30 = NULL;
        t = SSLgetAnnotations(not_null(x_29));
        {
          a_30 = t;
          if(((z_29 != NULL) && (z_29 != a_30)))
            _fail(a_30);
          else
            z_29 = a_30;
        }
      }
      t = m_16;
      {
        ATerm c_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_29));
        {
          c_30 = t;
          if(((b_30 != NULL) && (b_30 != c_30)))
            _fail(c_30);
          else
            b_30 = c_30;
        }
        t = not_null(b_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_91(t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t_30 :
  if(match_cons(u_30, sym__2))
    {
      v_30 = ATgetArgument(u_30, 0);
      w_30 = ATgetArgument(u_30, 1);
      t = SSL_table_get(not_null(v_30), not_null(w_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym__3))
    {
      f_31 = ATgetArgument(e_31, 0);
      g_31 = ATgetArgument(e_31, 1);
      h_31 = ATgetArgument(e_31, 2);
      {
        ATerm r_16;
        r_16 = t;
        {
          ATerm l_31 = NULL;
          ATerm m_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), not_null(g_31));
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                t = (ATerm) ATempty;
              }
            {
              m_31 = t;
              if(((l_31 != NULL) && (l_31 != m_31)))
                _fail(m_31);
              else
                l_31 = m_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_31), not_null(g_31), (ATerm) ATinsert(CheckATermList(not_null(l_31)), not_null(h_31)));
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
ATerm register_usage_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm q_31 = NULL;
  ATerm r_31 = NULL;
  t = term_t_12;
  {
    t = j_68(t);
    {
      r_31 = t;
      if(((q_31 != NULL) && (q_31 != r_31)))
        _fail(r_31);
      else
        q_31 = r_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_15, term_z_15, not_null(q_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_string(x_31, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
        {
          y_31 = ATgetFirst((ATermList) x_31);
          z_31 = (ATerm) ATgetNext((ATermList) x_31);
          {
            ATerm c_32 = NULL;
            ATerm a_17;
            a_17 = t;
            {
              t = not_null(y_31);
              t = c_0(t);
            }
            t = a_17;
            {
              ATerm d_32 = NULL;
              t = term_t_12;
              {
                t = d_0(t);
                {
                  d_32 = t;
                  if(((c_32 != NULL) && (c_32 != d_32)))
                    _fail(d_32);
                  else
                    c_32 = d_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_31)), not_null(c_32));
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
    ATerm i_32 = NULL;
    i_32 = t;
    h_32 :
    if(!(match_string(i_32, "--help")))
      {
        if(!(match_string(i_32, "-h")))
          {
            if(!(match_string(i_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_c_17;
    {
      t = set_config_0(t);
      t = term_d_17;
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_i_17;
    return(t);
  }
  t = Option_3(t, t_2, x_2, y_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  k_32 :
  if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
    {
      m_32 = ATgetFirst((ATermList) l_32);
      n_32 = (ATerm) ATgetNext((ATermList) l_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_64 (ATerm), ATerm e_64 (ATerm))
{
  ATerm x_32 = NULL,y_32 = NULL,b_33 = NULL;
  x_32 = t;
  w_32 :
  if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
    {
      y_32 = ATgetFirst((ATermList) x_32);
      b_33 = (ATerm) ATgetNext((ATermList) x_32);
      {
        ATerm k_33 = NULL,m_33 = NULL;
        ATerm l_33 = NULL;
        t = SSLgetAnnotations(not_null(x_32));
        {
          l_33 = t;
          if(((k_33 != NULL) && (k_33 != l_33)))
            _fail(l_33);
          else
            k_33 = l_33;
        }
        {
          t = not_null(y_32);
          {
            ATerm o_33 = NULL;
            t = d_64(t);
            {
              m_33 = t;
              {
                t = not_null(b_33);
                {
                  ATerm q_33 = NULL;
                  t = e_64(t);
                  {
                    o_33 = t;
                    {
                      ATerm r_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_33)), not_null(m_33)), not_null(k_33));
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
  ATerm b_34 = NULL;
  b_34 = t;
  a_34 :
  if(((ATgetType(b_34) == AT_LIST) && ATisEmpty(b_34)))
    {
      {
        ATerm d_34 = NULL,f_34 = NULL;
        ATerm j_17;
        j_17 = t;
        {
          ATerm e_34 = NULL;
          t = SSLgetAnnotations(not_null(b_34));
          {
            e_34 = t;
            if(((d_34 != NULL) && (d_34 != e_34)))
              _fail(e_34);
            else
              d_34 = e_34;
          }
        }
        t = j_17;
        {
          ATerm g_34 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_34));
          {
            g_34 = t;
            if(((f_34 != NULL) && (f_34 != g_34)))
              _fail(g_34);
            else
              f_34 = g_34;
          }
          t = not_null(f_34);
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
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym__2))
    {
      p_34 = ATgetArgument(o_34, 0);
      q_34 = ATgetArgument(o_34, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_9, not_null(p_34), not_null(q_34));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_68 (ATerm))
{
  ATerm k_17;
  k_17 = t;
  {
    ATerm d_3 (ATerm t)
    {
      t = term_l_17;
      t = h_68(t);
      return(t);
    }
    t = try_1(t, d_3);
  }
  t = k_17;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm y_34 = NULL;
      ATerm n_17;
      n_17 = t;
      {
        ATerm w_34 = NULL;
        ATerm x_34 = NULL;
        x_34 = t;
        if(((w_34 != NULL) && (w_34 != x_34)))
          _fail(x_34);
        else
          w_34 = x_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_14, not_null(w_34));
          t = set_config_0(t);
        }
      }
      t = n_17;
      {
        ATerm z_34 = NULL;
        z_34 = t;
        if(((y_34 != NULL) && (y_34 != z_34)))
          _fail(z_34);
        else
          y_34 = z_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_34));
      }
      return(t);
    }
    ATerm n_3 (ATerm t)
    {
      ATerm u_17 = t;
      int v_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_17 = t;
          int x_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_17);
            }
          else
            {
              t = w_17;
              {
                t = h_68(t);
                t = Cons_2(t, _id, n_3);
              }
            }
          LocalPopChoice(v_17);
        }
      else
        {
          t = u_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_3, n_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  ATerm e_18;
  e_18 = t;
  {
    ATerm i_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
    i_35 = t;
    e_35 :
    if(match_cons(i_35, sym__3))
      {
        l_35 = ATgetArgument(i_35, 0);
        m_35 = ATgetArgument(i_35, 1);
        n_35 = ATgetArgument(i_35, 2);
        {
          if(((f_35 != NULL) && (f_35 != l_35)))
            _fail(l_35);
          else
            f_35 = l_35;
          {
            if(((g_35 != NULL) && (g_35 != m_35)))
              _fail(m_35);
            else
              g_35 = m_35;
            {
              if(((h_35 != NULL) && (h_35 != n_35)))
                _fail(n_35);
              else
                h_35 = n_35;
              t = SSL_table_put(not_null(f_35), not_null(g_35), not_null(h_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_68 (ATerm))
{
  ATerm r_35 = NULL;
  ATerm f_18;
  f_18 = t;
  {
    t = term_g_18;
    t = table_put_0(t);
  }
  t = f_18;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_68(t);
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_3);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_18;
            m_18 = t;
            {
              ATerm n_18 = t;
              int s_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_b_17;
                  t = get_config_0(t);
                  LocalPopChoice(s_18);
                }
              else
                {
                  t = n_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_18;
            {
              t = system_usage_0(t);
              {
                t = term_q_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm s_35 = NULL;
                  s_35 = t;
                  if(((r_35 != NULL) && (r_35 != s_35)))
                    _fail(s_35);
                  else
                    r_35 = s_35;
                  return(t);
                }
                t = Undefined_1(t, s_3);
                return(t);
              }
              t = option_defined_1(t, r_3);
              {
                ATerm t_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_35)), term_t_18);
                  return(t);
                }
                t = say_1(t, t_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_3);
      {
        ATerm u_18;
        u_18 = t;
        {
          t = term_y_15;
          t = table_destroy_0(t);
        }
        t = u_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm))
{
  t = parse_options_1(t, b_71);
  {
    t = store_options_0(t);
    {
      t = d_71(t);
      {
        ATerm w_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_71);
            LocalPopChoice(b_19);
          }
        else
          {
            t = w_18;
            {
              ATerm c_19 = t;
              int d_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_71(t);
                  t = report_success_0(t);
                  LocalPopChoice(d_19);
                }
              else
                {
                  t = c_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm v_71 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_71(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_71);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_3, u_71, v_71, v_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm h_19;
      h_19 = t;
      {
        ATerm w_35 = NULL;
        ATerm x_35 = NULL;
        t = term_p_14;
        {
          t = get_config_0(t);
          {
            x_35 = t;
            if(((w_35 != NULL) && (w_35 != x_35)))
              _fail(x_35);
            else
              w_35 = x_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATempty, not_null(w_35)));
          t = printnl_0(t);
        }
      }
      t = h_19;
      return(t);
    }
    t = if_verbose2_1(t, x_3);
    return(t);
  }
  t = iowrap_4(t, m_71, n_71, o_71, w_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_71 (ATerm), ATerm l_71 (ATerm))
{
  t = iowrap_3(t, k_71, l_71, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    t = _2(t, _id, h_71);
    return(t);
  }
  t = iowrap_2(t, y_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iowrap_1(t, meta_explode_0);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      t = meta_explode_0(t);
    }
  return(t);
}
