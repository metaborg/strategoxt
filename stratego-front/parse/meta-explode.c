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
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_Ins_1;
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
ATerm term_z_18;
ATerm term_k_18;
ATerm term_p_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_o_10;
ATerm term_z_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_m_4;
ATerm term_e_4;
ATerm term_a_4;
ATerm term_z_3;
void init_constant_terms (void)
{
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym_Cong_2, term_z_3, (ATerm) ATempty);
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym_Op_2, term_z_3, (ATerm) ATempty);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_n_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_o_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_o_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_o_12);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_o_12);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__3, term_x_15, term_c_16, (ATerm) ATempty);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm str_explode_0 (ATerm);
ATerm TrmOp_0 (ATerm);
ATerm TrmCons_0 (ATerm);
ATerm TrmNil_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm));
ATerm LstMetaVar_0 (ATerm);
ATerm TrmConc_0 (ATerm);
ATerm Anno_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm TrmAnno_0 (ATerm);
ATerm TrmFromStr_0 (ATerm);
ATerm TrmFromTerm_0 (ATerm);
ATerm TrmStr_0 (ATerm);
ATerm TrmLMetaVar_0 (ATerm);
ATerm TrmMetaVar_0 (ATerm);
ATerm trm_explode_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm m_69 (ATerm));
ATerm MetaExplode_0 (ATerm);
ATerm _2 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_74 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_84 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_87 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_85 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_81 (ATerm), ATerm n_81 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_79 (ATerm), ATerm y_79 (ATerm));
ATerm crush_2 (ATerm, ATerm v_78 (ATerm), ATerm w_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_89 (ATerm));
ATerm map_1 (ATerm, ATerm l_73 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_89 (ATerm));
ATerm Program_1 (ATerm, ATerm t_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm j_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_53 (ATerm), ATerm p_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm k_86 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_85 (ATerm));
ATerm meta_explode_0 (ATerm);
ATerm main_0 (ATerm);
ATerm str_explode_0 (ATerm t)
{
  ATerm d_3 = t;
  int e_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 = NULL,y_2 = NULL;
      w_2 = t;
      v_1 :
      if(match_cons(w_2, sym_meta_var_1))
        {
          y_2 = ATgetArgument(w_2, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_2)), (ATerm) ATempty);
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_3);
    }
  else
    {
      t = d_3;
      {
        ATerm j_3 = t;
        int n_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0(t);
            LocalPopChoice(n_3);
          }
        else
          {
            t = j_3;
            {
              ATerm t_3 = t;
              int u_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromStr_0(t);
                  LocalPopChoice(u_3);
                }
              else
                {
                  t = t_3;
                  {
                    ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
                    ATerm w_3 (ATerm t)
                    {
                      ATerm k_3 = NULL,l_3 = NULL,r_3 = NULL;
                      ATerm v_3;
                      v_3 = t;
                      {
                        ATerm m_3 = NULL;
                        ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
                        t = not_null(c_3);
                        {
                          m_3 = t;
                          {
                            t = SSL_explode_term(not_null(m_3));
                            {
                              o_3 = t;
                              t_2 :
                              if(match_cons(o_3, sym__2))
                                {
                                  p_3 = ATgetArgument(o_3, 0);
                                  q_3 = ATgetArgument(o_3, 1);
                                  {
                                    if(((k_3 != NULL) && (k_3 != p_3)))
                                      _fail(p_3);
                                    else
                                      k_3 = p_3;
                                    if(((l_3 != NULL) && (l_3 != q_3)))
                                      _fail(q_3);
                                    else
                                      l_3 = q_3;
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
                      t = v_3;
                      {
                        ATerm s_3 = NULL;
                        t = not_null(l_3);
                        {
                          t = map_1(t, str_explode_0);
                          {
                            s_3 = t;
                            if(((r_3 != NULL) && (r_3 != s_3)))
                              _fail(s_3);
                            else
                              r_3 = s_3;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(k_3), not_null(r_3));
                      }
                      return(t);
                    }
                    c_3 = t;
                    v_2 :
                    if(((ATgetType(c_3) == AT_LIST) && ATisEmpty(c_3)))
                      {
                        {
                          ATerm x_3 = t;
                          int y_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_a_4;
                              LocalPopChoice(y_3);
                            }
                          else
                            {
                              t = x_3;
                              t = w_3(t);
                            }
                        }
                      }
                    else
                      {
                        if(((ATgetType(c_3) == AT_LIST) && !(ATisEmpty(c_3))))
                          {
                            a_3 = ATgetFirst((ATermList) c_3);
                            b_3 = (ATerm) ATgetNext((ATermList) c_3);
                            {
                              ATerm b_4 = t;
                              int c_4 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_3 = NULL,h_3 = NULL;
                                  ATerm d_4;
                                  d_4 = t;
                                  {
                                    ATerm g_3 = NULL;
                                    t = not_null(a_3);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        g_3 = t;
                                        if(((f_3 != NULL) && (f_3 != g_3)))
                                          _fail(g_3);
                                        else
                                          f_3 = g_3;
                                      }
                                    }
                                  }
                                  t = d_4;
                                  {
                                    ATerm i_3 = NULL;
                                    t = not_null(b_3);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        i_3 = t;
                                        if(((h_3 != NULL) && (h_3 != i_3)))
                                          _fail(i_3);
                                        else
                                          h_3 = i_3;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_Cong_2, term_e_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_3)), not_null(f_3)));
                                  }
                                  LocalPopChoice(c_4);
                                }
                              else
                                {
                                  t = b_4;
                                  t = w_3(t);
                                }
                            }
                          }
                        else
                          {
                            t = w_3(t);
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
  ATerm h_4 = NULL;
  ATerm j_4 = NULL,k_4 = NULL,q_4 = NULL;
  h_4 = t;
  {
    ATerm g_4;
    g_4 = t;
    {
      ATerm l_4 = NULL;
      ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL;
      t = not_null(h_4);
      {
        l_4 = t;
        {
          t = SSL_explode_term(not_null(l_4));
          {
            n_4 = t;
            f_4 :
            if(match_cons(n_4, sym__2))
              {
                o_4 = ATgetArgument(n_4, 0);
                p_4 = ATgetArgument(n_4, 1);
                {
                  if(((j_4 != NULL) && (j_4 != o_4)))
                    _fail(o_4);
                  else
                    j_4 = o_4;
                  if(((k_4 != NULL) && (k_4 != p_4)))
                    _fail(p_4);
                  else
                    k_4 = p_4;
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
    t = g_4;
    {
      ATerm r_4 = NULL;
      t = not_null(k_4);
      {
        t = map_1(t, trm_explode_0);
        {
          r_4 = t;
          if(((q_4 != NULL) && (q_4 != r_4)))
            _fail(r_4);
          else
            q_4 = r_4;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_4), not_null(q_4));
    }
  }
  return(t);
}
ATerm TrmCons_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  z_4 :
  if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
    {
      b_5 = ATgetFirst((ATermList) a_5);
      c_5 = (ATerm) ATgetNext((ATermList) a_5);
      {
        ATerm f_5 = NULL,h_5 = NULL;
        ATerm i_4;
        i_4 = t;
        {
          ATerm g_5 = NULL;
          t = not_null(b_5);
          {
            t = trm_explode_0(t);
            {
              g_5 = t;
              if(((f_5 != NULL) && (f_5 != g_5)))
                _fail(g_5);
              else
                f_5 = g_5;
            }
          }
        }
        t = i_4;
        {
          ATerm i_5 = NULL;
          t = not_null(c_5);
          {
            t = trm_explode_0(t);
            {
              i_5 = t;
              if(((h_5 != NULL) && (h_5 != i_5)))
                _fail(i_5);
              else
                h_5 = i_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Op_2, term_e_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_5)), not_null(f_5)));
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
  ATerm o_5 = NULL;
  o_5 = t;
  n_5 :
  if(((ATgetType(o_5) == AT_LIST) && ATisEmpty(o_5)))
    {
      t = term_m_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm x_5 = NULL;
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
  x_5 = t;
  {
    ATerm c_6 = NULL;
    ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
    t = not_null(x_5);
    {
      c_6 = t;
      {
        t = SSL_explode_term(not_null(c_6));
        {
          e_6 = t;
          t_5 :
          if(match_cons(e_6, sym__2))
            {
              f_6 = ATgetArgument(e_6, 0);
              g_6 = ATgetArgument(e_6, 1);
              u_5 :
              if(match_string(f_6, ""))
                {
                  v_5 :
                  if(((ATgetType(g_6) == AT_LIST) && !(ATisEmpty(g_6))))
                    {
                      h_6 = ATgetFirst((ATermList) g_6);
                      i_6 = (ATerm) ATgetNext((ATermList) g_6);
                      w_5 :
                      if(((ATgetType(i_6) == AT_LIST) && !(ATisEmpty(i_6))))
                        {
                          j_6 = ATgetFirst((ATermList) i_6);
                          k_6 = (ATerm) ATgetNext((ATermList) i_6);
                          {
                            if(((z_5 != NULL) && (z_5 != h_6)))
                              _fail(h_6);
                            else
                              z_5 = h_6;
                            {
                              if(((b_6 != NULL) && (b_6 != j_6)))
                                _fail(j_6);
                              else
                                b_6 = j_6;
                              if(((a_6 != NULL) && (a_6 != k_6)))
                                _fail(k_6);
                              else
                                a_6 = k_6;
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
    t = not_null(b_6);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm u_6 = NULL;
  ATerm w_6 = NULL,x_6 = NULL;
  u_6 = t;
  {
    ATerm y_6 = NULL;
    ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
    t = not_null(u_6);
    {
      y_6 = t;
      {
        t = SSL_explode_term(not_null(y_6));
        {
          a_7 = t;
          r_6 :
          if(match_cons(a_7, sym__2))
            {
              b_7 = ATgetArgument(a_7, 0);
              c_7 = ATgetArgument(a_7, 1);
              s_6 :
              if(match_string(b_7, ""))
                {
                  t_6 :
                  if(((ATgetType(c_7) == AT_LIST) && !(ATisEmpty(c_7))))
                    {
                      d_7 = ATgetFirst((ATermList) c_7);
                      e_7 = (ATerm) ATgetNext((ATermList) c_7);
                      {
                        if(((x_6 != NULL) && (x_6 != d_7)))
                          _fail(d_7);
                        else
                          x_6 = d_7;
                        if(((w_6 != NULL) && (w_6 != e_7)))
                          _fail(e_7);
                        else
                          w_6 = e_7;
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
    t = not_null(x_6);
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm))
{
  ATerm s_4 = t;
  int t_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_79(t);
      LocalPopChoice(t_4);
    }
  else
    {
      t = s_4;
      {
        ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
        m_7 = t;
        l_7 :
        if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
          {
            n_7 = ATgetFirst((ATermList) m_7);
            o_7 = (ATerm) ATgetNext((ATermList) m_7);
            {
              ATerm r_7 = NULL,t_7 = NULL;
              ATerm u_4;
              u_4 = t;
              {
                ATerm s_7 = NULL;
                t = not_null(n_7);
                {
                  t = b_80(t);
                  {
                    s_7 = t;
                    if(((r_7 != NULL) && (r_7 != s_7)))
                      _fail(s_7);
                    else
                      r_7 = s_7;
                  }
                }
              }
              t = u_4;
              {
                ATerm u_7 = NULL;
                t = not_null(o_7);
                {
                  t = foldr_3(t, z_79, a_80, b_80);
                  {
                    u_7 = t;
                    if(((t_7 != NULL) && (t_7 != u_7)))
                      _fail(u_7);
                    else
                      t_7 = u_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), not_null(t_7));
                  t = a_80(t);
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
  ATerm a_8 = NULL,b_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym_meta_listvar_1))
    {
      b_8 = ATgetArgument(a_8, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(b_8)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmConc_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_Conc_2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        t = not_null(k_8);
        {
          ATerm v_4 = t;
          int w_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_8 = NULL;
              ATerm p_8 = NULL;
              t = LstMetaVar_0(t);
              {
                p_8 = t;
                if(((o_8 != NULL) && (o_8 != p_8)))
                  _fail(p_8);
                else
                  o_8 = p_8;
              }
              t = (ATerm) ATinsert(ATempty, not_null(o_8));
              LocalPopChoice(w_4);
            }
          else
            {
              t = v_4;
              {
              }
            }
          {
            ATerm b_0 (ATerm t)
            {
              t = not_null(l_8);
              {
                ATerm x_4 = t;
                int y_4 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TrmLMetaVar_0(t);
                    LocalPopChoice(y_4);
                  }
                else
                  {
                    t = x_4;
                    t = trm_explode_0(t);
                  }
              }
              return(t);
            }
            ATerm d_0 (ATerm t)
            {
              ATerm q_8 = NULL,s_8 = NULL;
              ATerm d_5;
              d_5 = t;
              {
                ATerm r_8 = NULL;
                t = Fst_0(t);
                {
                  r_8 = t;
                  if(((q_8 != NULL) && (q_8 != r_8)))
                    _fail(r_8);
                  else
                    q_8 = r_8;
                }
              }
              t = d_5;
              {
                ATerm t_8 = NULL;
                t = Snd_0(t);
                {
                  t_8 = t;
                  if(((s_8 != NULL) && (s_8 != t_8)))
                    _fail(t_8);
                  else
                    s_8 = t_8;
                }
                t = (ATerm) ATmakeAppl(sym_Op_2, term_e_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_8)), not_null(q_8)));
              }
              return(t);
            }
            t = foldr_3(t, b_0, d_0, trm_explode_0);
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
ATerm Anno_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym_Anno_2))
    {
      k_9 = ATgetArgument(j_9, 0);
      l_9 = ATgetArgument(j_9, 1);
      {
        ATerm e_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_9 = NULL,r_9 = NULL;
            ATerm q_9 = NULL;
            t = SSLgetAnnotations(not_null(j_9));
            {
              q_9 = t;
              if(((p_9 != NULL) && (p_9 != q_9)))
                _fail(q_9);
              else
                p_9 = q_9;
            }
            {
              t = not_null(k_9);
              {
                ATerm t_9 = NULL;
                t = m_0(t);
                {
                  r_9 = t;
                  {
                    t = not_null(l_9);
                    {
                      ATerm v_9 = NULL;
                      t = n_0(t);
                      {
                        t_9 = t;
                        {
                          ATerm w_9 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(r_9), not_null(t_9)), not_null(p_9));
                          {
                            w_9 = t;
                            if(((v_9 != NULL) && (v_9 != w_9)))
                              _fail(w_9);
                            else
                              v_9 = w_9;
                          }
                          t = not_null(v_9);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(j_5);
          }
        else
          {
            t = e_5;
            {
              ATerm a_10 = NULL,c_10 = NULL;
              ATerm b_10 = NULL;
              t = SSLgetAnnotations(not_null(j_9));
              {
                b_10 = t;
                if(((a_10 != NULL) && (a_10 != b_10)))
                  _fail(b_10);
                else
                  a_10 = b_10;
              }
              {
                t = not_null(k_9);
                {
                  ATerm e_10 = NULL;
                  t = m_0(t);
                  {
                    c_10 = t;
                    {
                      t = not_null(l_9);
                      {
                        ATerm g_10 = NULL;
                        t = n_0(t);
                        {
                          e_10 = t;
                          {
                            ATerm h_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(c_10), not_null(e_10)), not_null(a_10));
                            {
                              h_10 = t;
                              if(((g_10 != NULL) && (g_10 != h_10)))
                                _fail(h_10);
                              else
                                g_10 = h_10;
                            }
                            t = not_null(g_10);
                          }
                        }
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
  t = Anno_2(t, trm_explode_0, MetaExplode_0);
  return(t);
}
ATerm TrmFromStr_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_FromStrategy_1))
    {
      v_10 = ATgetArgument(u_10, 0);
      {
        t = not_null(v_10);
        t = MetaExplode_0(t);
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
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  z_10 :
  if(match_cons(a_11, sym_FromTerm_1))
    {
      b_11 = ATgetArgument(a_11, 0);
      {
        t = not_null(b_11);
        t = MetaExplode_0(t);
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
  ATerm f_11 = NULL;
  t = is_string_0(t);
  {
    ATerm g_11 = NULL;
    g_11 = t;
    if(((f_11 != NULL) && (f_11 != g_11)))
      _fail(g_11);
    else
      f_11 = g_11;
    t = (ATerm) ATmakeAppl(sym_Str_1, not_null(f_11));
  }
  return(t);
}
ATerm TrmLMetaVar_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_meta_listvar_1))
    {
      l_11 = ATgetArgument(k_11, 0);
      t = (ATerm) ATmakeAppl(sym_Op_2, term_e_4, (ATerm) ATinsert(ATinsert(ATempty, term_m_4), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(l_11)))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmMetaVar_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym_meta_var_1))
    {
      r_11 = ATgetArgument(q_11, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm trm_explode_0 (ATerm t)
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TrmMetaVar_0(t);
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      {
        ATerm m_5 = t;
        int p_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmLMetaVar_0(t);
            LocalPopChoice(p_5);
          }
        else
          {
            t = m_5;
            {
              ATerm q_5 = t;
              int r_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0(t);
                  LocalPopChoice(r_5);
                }
              else
                {
                  t = q_5;
                  {
                    ATerm s_5 = t;
                    int y_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromTerm_0(t);
                        LocalPopChoice(y_5);
                      }
                    else
                      {
                        t = s_5;
                        {
                          ATerm d_6 = t;
                          int l_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmFromStr_0(t);
                              LocalPopChoice(l_6);
                            }
                          else
                            {
                              t = d_6;
                              {
                                ATerm m_6 = t;
                                int n_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = TrmAnno_0(t);
                                    LocalPopChoice(n_6);
                                  }
                                else
                                  {
                                    t = m_6;
                                    {
                                      ATerm o_6 = t;
                                      int p_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmConc_0(t);
                                          LocalPopChoice(p_6);
                                        }
                                      else
                                        {
                                          t = o_6;
                                          {
                                            ATerm q_6 = t;
                                            int v_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TrmNil_0(t);
                                                LocalPopChoice(v_6);
                                              }
                                            else
                                              {
                                                t = q_6;
                                                {
                                                  ATerm z_6 = t;
                                                  int f_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = TrmCons_0(t);
                                                      LocalPopChoice(f_7);
                                                    }
                                                  else
                                                    {
                                                      t = z_6;
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
ATerm alltd_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm u_11 (ATerm t)
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_69(t);
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        t = _all(t, u_11);
      }
    return(t);
  }
  t = u_11(t);
  return(t);
}
ATerm MetaExplode_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm y_11 = NULL,z_11 = NULL;
    y_11 = t;
    x_11 :
    if(match_cons(y_11, sym_ToTerm_1))
      {
        z_11 = ATgetArgument(y_11, 0);
        {
          t = not_null(z_11);
          t = trm_explode_0(t);
        }
      }
    else
      {
        if(match_cons(y_11, sym_ToStrategy_1))
          {
            z_11 = ATgetArgument(y_11, 0);
            {
              t = not_null(z_11);
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
  t = alltd_1(t, f_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm))
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym__2))
    {
      l_12 = ATgetArgument(k_12, 0);
      m_12 = ATgetArgument(k_12, 1);
      {
        ATerm q_12 = NULL,s_12 = NULL;
        ATerm r_12 = NULL;
        t = SSLgetAnnotations(not_null(k_12));
        {
          r_12 = t;
          if(((q_12 != NULL) && (q_12 != r_12)))
            _fail(r_12);
          else
            q_12 = r_12;
        }
        {
          t = not_null(l_12);
          {
            ATerm u_12 = NULL;
            t = f_52(t);
            {
              s_12 = t;
              {
                t = not_null(m_12);
                {
                  ATerm w_12 = NULL;
                  t = g_52(t);
                  {
                    u_12 = t;
                    {
                      ATerm x_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_12), not_null(u_12)), not_null(q_12));
                      {
                        x_12 = t;
                        if(((w_12 != NULL) && (w_12 != x_12)))
                          _fail(x_12);
                        else
                          w_12 = x_12;
                      }
                      t = not_null(w_12);
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
  ATerm f_13 = NULL;
  ATerm i_7;
  i_7 = t;
  {
    ATerm h_0 (ATerm t)
    {
      ATerm g_13 = NULL,h_13 = NULL;
      g_13 = t;
      e_13 :
      if(match_cons(g_13, sym_Program_1))
        {
          h_13 = ATgetArgument(g_13, 0);
          if(((f_13 != NULL) && (f_13 != h_13)))
            _fail(h_13);
          else
            f_13 = h_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, h_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(f_13)), term_k_7));
      {
        t = printnl_0(t);
        {
          t = term_q_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym__2))
    {
      m_13 = ATgetArgument(l_13, 0);
      n_13 = ATgetArgument(l_13, 1);
      {
        ATerm v_7;
        v_7 = t;
        t = SSL_printnl(not_null(m_13), not_null(n_13));
        t = v_7;
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
  ATerm s_13 = NULL;
  s_13 = t;
  t = SSL_implode_string(not_null(s_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
        x_13 = t;
        w_13 :
        if(((ATgetType(x_13) == AT_LIST) && !(ATisEmpty(x_13))))
          {
            y_13 = ATgetFirst((ATermList) x_13);
            z_13 = (ATerm) ATgetNext((ATermList) x_13);
            {
              t = not_null(y_13);
              {
                ATerm o_0 (ATerm t)
                {
                  t = not_null(z_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_0);
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
  ATerm j_14 = NULL;
  ATerm l_14 = NULL;
  j_14 = t;
  {
    ATerm m_14 = NULL;
    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
    t = not_null(j_14);
    {
      m_14 = t;
      {
        t = SSL_explode_term(not_null(m_14));
        {
          o_14 = t;
          h_14 :
          if(match_cons(o_14, sym__2))
            {
              p_14 = ATgetArgument(o_14, 0);
              q_14 = ATgetArgument(o_14, 1);
              i_14 :
              if(match_string(p_14, ""))
                {
                  if(((l_14 != NULL) && (l_14 != q_14)))
                    _fail(q_14);
                  else
                    l_14 = q_14;
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
      t = not_null(l_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm y_7 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_14);
        LocalPopChoice(c_8);
      }
    else
      {
        t = y_7;
        {
          t = Nil_0(t);
          t = a_74(t);
        }
      }
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym__2))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      {
        t = not_null(y_14);
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(z_14);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  t = SSL_explode_string(not_null(e_15));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_84 (ATerm))
{
  ATerm h_8;
  h_8 = t;
  {
    ATerm j_15 = NULL,l_15 = NULL;
    ATerm m_8;
    m_8 = t;
    {
      ATerm k_15 = NULL;
      t = i_84(t);
      {
        k_15 = t;
        if(((j_15 != NULL) && (j_15 != k_15)))
          _fail(k_15);
        else
          j_15 = k_15;
      }
    }
    t = m_8;
    {
      ATerm m_15 = NULL;
      m_15 = t;
      if(((l_15 != NULL) && (l_15 != m_15)))
        _fail(m_15);
      else
        l_15 = m_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_15)), not_null(j_15)));
        t = printnl_0(t);
      }
    }
  }
  t = h_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  t = SSL_is_string(not_null(q_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(u_8);
    }
  else
    {
      t = n_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              ATerm x_8 = t;
              int y_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(y_8);
                }
              else
                {
                  t = x_8;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_0);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            {
              ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
              z_15 = t;
              y_15 :
              if(match_cons(z_15, sym_Path_1))
                {
                  a_16 = ATgetArgument(z_15, 0);
                  t = not_null(a_16);
                }
              else
                {
                  if(match_cons(z_15, sym_Var_1))
                    {
                      a_16 = ATgetArgument(z_15, 0);
                      {
                        t = not_null(a_16);
                        {
                          ATerm z_8 = t;
                          int a_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_9);
                            }
                          else
                            {
                              t = z_8;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_b_9;
                                  return(t);
                                }
                                t = debug_1(t, r_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_15, sym_Prefix_2))
                        {
                          a_16 = ATgetArgument(z_15, 0);
                          b_16 = ATgetArgument(z_15, 1);
                          {
                            ATerm g_16 = NULL,i_16 = NULL;
                            ATerm c_9;
                            c_9 = t;
                            {
                              ATerm h_16 = NULL;
                              t = not_null(a_16);
                              {
                                t = eval_config_0(t);
                                {
                                  h_16 = t;
                                  if(((g_16 != NULL) && (g_16 != h_16)))
                                    _fail(h_16);
                                  else
                                    g_16 = h_16;
                                }
                              }
                            }
                            t = c_9;
                            {
                              ATerm j_16 = NULL;
                              t = not_null(b_16);
                              {
                                t = eval_config_0(t);
                                {
                                  j_16 = t;
                                  if(((i_16 != NULL) && (i_16 != j_16)))
                                    _fail(j_16);
                                  else
                                    i_16 = j_16;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_16), not_null(i_16));
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
  ATerm r_16 = NULL;
  r_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_9, not_null(r_16));
    {
      t = table_get_0(t);
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm g_9;
              g_9 = t;
              {
                ATerm t_16 = NULL;
                ATerm u_16 = NULL;
                u_16 = t;
                if(((t_16 != NULL) && (t_16 != u_16)))
                  _fail(u_16);
                else
                  t_16 = u_16;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_d_9, not_null(r_16), not_null(t_16));
                  t = table_put_0(t);
                }
              }
              t = g_9;
            }
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm h_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9;
      n_9 = t;
      {
        ATerm y_16 = NULL;
        ATerm z_16 = NULL;
        t = term_o_9;
        {
          t = get_config_0(t);
          {
            z_16 = t;
            if(((y_16 != NULL) && (y_16 != z_16)))
              _fail(z_16);
            else
              y_16 = z_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), term_s_9);
          t = geq_0(t);
        }
      }
      t = n_9;
      t = f_87(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = h_9;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym__2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      t = SSL_WriteToTextFile(not_null(e_17), not_null(f_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym__2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      t = SSL_WriteToBinaryFile(not_null(m_17), not_null(n_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_17 = NULL;
  ATerm u_9;
  u_9 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm x_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 (ATerm t)
          {
            ATerm w_17 = NULL,x_17 = NULL;
            w_17 = t;
            s_17 :
            if(match_cons(w_17, sym_Output_1))
              {
                x_17 = ATgetArgument(w_17, 0);
                if(((v_17 != NULL) && (v_17 != x_17)))
                  _fail(x_17);
                else
                  v_17 = x_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, t_0);
          LocalPopChoice(y_9);
        }
      else
        {
          t = x_9;
          {
            ATerm y_17 = NULL;
            t = term_z_9;
            {
              y_17 = t;
              if(((v_17 != NULL) && (v_17 != y_17)))
                _fail(y_17);
              else
                v_17 = y_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_0, _id);
  }
  t = u_9;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(v_17);
        return(t);
      }
      t = split_2(t, v_0, _id);
      return(t);
    }
    t = _2(t, _id, u_0);
    {
      ATerm d_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              ATerm z_17 = NULL;
              z_17 = t;
              u_17 :
              if(!(match_cons(z_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_0);
            return(t);
          }
          t = _2(t, w_0, WriteToBinaryFile_0);
          LocalPopChoice(f_10);
        }
      else
        {
          t = d_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm f_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  ATerm i_10;
  i_10 = t;
  t = dtime_0(t);
  t = i_10;
  {
    t = m_85(t);
    {
      ATerm j_10;
      j_10 = t;
      {
        ATerm g_18 = NULL;
        t = dtime_0(t);
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
      }
      t = j_10;
      {
        h_18 = t;
        e_18 :
        if(match_cons(h_18, sym__2))
          {
            i_18 = ATgetArgument(h_18, 0);
            j_18 = ATgetArgument(h_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_18))), not_null(j_18));
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
  ATerm p_18 = NULL;
  p_18 = t;
  t = SSL_ReadFromFile(not_null(p_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_81 (ATerm), ATerm n_81 (ATerm))
{
  ATerm u_18 = NULL,w_18 = NULL;
  ATerm k_10;
  k_10 = t;
  {
    ATerm v_18 = NULL;
    t = m_81(t);
    {
      v_18 = t;
      if(((u_18 != NULL) && (u_18 != v_18)))
        _fail(v_18);
      else
        u_18 = v_18;
    }
  }
  t = k_10;
  {
    ATerm x_18 = NULL;
    t = n_81(t);
    {
      x_18 = t;
      if(((w_18 != NULL) && (w_18 != x_18)))
        _fail(x_18);
      else
        w_18 = x_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), not_null(w_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_19 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          ATerm e_19 = NULL,f_19 = NULL;
          e_19 = t;
          b_19 :
          if(match_cons(e_19, sym_Input_1))
            {
              f_19 = ATgetArgument(e_19, 0);
              if(((d_19 != NULL) && (d_19 != f_19)))
                _fail(f_19);
              else
                d_19 = f_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, y_0);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm g_19 = NULL;
          t = term_o_10;
          {
            g_19 = t;
            if(((d_19 != NULL) && (d_19 != g_19)))
              _fail(g_19);
            else
              d_19 = g_19;
          }
        }
      }
  }
  t = l_10;
  {
    ATerm z_0 (ATerm t)
    {
      t = not_null(d_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_0);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_19 = NULL;
  k_19 = t;
  t = SSL_string_to_int(not_null(k_19));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
  s_19 = t;
  q_19 :
  if(match_string(s_19, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
        {
          t_19 = ATgetFirst((ATermList) s_19);
          u_19 = (ATerm) ATgetNext((ATermList) s_19);
          r_19 :
          if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
            {
              v_19 = ATgetFirst((ATermList) u_19);
              w_19 = (ATerm) ATgetNext((ATermList) u_19);
              {
                ATerm a_20 = NULL;
                ATerm p_10;
                p_10 = t;
                {
                  t = not_null(t_19);
                  t = j_0(t);
                }
                t = p_10;
                {
                  ATerm b_20 = NULL;
                  t = not_null(v_19);
                  {
                    t = k_0(t);
                    {
                      b_20 = t;
                      if(((a_20 != NULL) && (a_20 != b_20)))
                        _fail(b_20);
                      else
                        a_20 = b_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_19)), not_null(a_20));
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
      ATerm a_1 (ATerm t)
      {
        ATerm u_20 = NULL;
        u_20 = t;
        f_20 :
        if(!(match_string(u_20, "-i")))
          {
            if(!(match_string(u_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_1 (ATerm t)
      {
        ATerm x_20 = NULL;
        ATerm s_10;
        s_10 = t;
        {
          ATerm v_20 = NULL;
          ATerm w_20 = NULL;
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(v_20));
            t = set_config_0(t);
          }
        }
        t = s_10;
        {
          ATerm y_20 = NULL;
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_20));
        }
        return(t);
      }
      ATerm c_1 (ATerm t)
      {
        t = term_x_10;
        return(t);
      }
      t = ArgOption_3(t, a_1, b_1, c_1);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm y_10 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              ATerm z_20 = NULL;
              z_20 = t;
              i_20 :
              if(!(match_string(z_20, "-o")))
                {
                  if(!(match_string(z_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm e_1 (ATerm t)
            {
              ATerm c_21 = NULL;
              ATerm d_11;
              d_11 = t;
              {
                ATerm a_21 = NULL;
                ATerm b_21 = NULL;
                b_21 = t;
                if(((a_21 != NULL) && (a_21 != b_21)))
                  _fail(b_21);
                else
                  a_21 = b_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_11, not_null(a_21));
                  t = set_config_0(t);
                }
              }
              t = d_11;
              {
                ATerm d_21 = NULL;
                d_21 = t;
                if(((c_21 != NULL) && (c_21 != d_21)))
                  _fail(d_21);
                else
                  c_21 = d_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_21));
              }
              return(t);
            }
            ATerm f_1 (ATerm t)
            {
              t = term_h_11;
              return(t);
            }
            t = ArgOption_3(t, d_1, e_1, f_1);
            LocalPopChoice(c_11);
          }
        else
          {
            t = y_10;
            {
              ATerm i_11 = t;
              int m_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm e_21 = NULL;
                    e_21 = t;
                    l_20 :
                    if(!(match_string(e_21, "-S")))
                      {
                        if(!(match_string(e_21, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm h_1 (ATerm t)
                  {
                    t = term_o_11;
                    t = set_config_0(t);
                    t = term_s_11;
                    return(t);
                  }
                  ATerm i_1 (ATerm t)
                  {
                    t = term_t_11;
                    return(t);
                  }
                  t = Option_3(t, g_1, h_1, i_1);
                  LocalPopChoice(m_11);
                }
              else
                {
                  t = i_11;
                  {
                    ATerm v_11 = t;
                    int w_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_1 (ATerm t)
                        {
                          ATerm f_21 = NULL;
                          f_21 = t;
                          m_20 :
                          if(!(match_string(f_21, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm k_1 (ATerm t)
                        {
                          ATerm i_21 = NULL;
                          ATerm a_12;
                          a_12 = t;
                          {
                            ATerm g_21 = NULL;
                            ATerm h_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              h_21 = t;
                              if(((g_21 != NULL) && (g_21 != h_21)))
                                _fail(h_21);
                              else
                                g_21 = h_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(g_21));
                              t = set_config_0(t);
                            }
                          }
                          t = a_12;
                          {
                            ATerm j_21 = NULL;
                            j_21 = t;
                            if(((i_21 != NULL) && (i_21 != j_21)))
                              _fail(j_21);
                            else
                              i_21 = j_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_21));
                          }
                          return(t);
                        }
                        ATerm l_1 (ATerm t)
                        {
                          t = term_b_12;
                          return(t);
                        }
                        t = ArgOption_3(t, j_1, k_1, l_1);
                        LocalPopChoice(w_11);
                      }
                    else
                      {
                        t = v_11;
                        {
                          ATerm c_12 = t;
                          int d_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_1 (ATerm t)
                              {
                                ATerm k_21 = NULL;
                                k_21 = t;
                                p_20 :
                                if(!(match_string(k_21, "-k")))
                                  {
                                    if(!(match_string(k_21, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm n_1 (ATerm t)
                              {
                                ATerm e_12;
                                e_12 = t;
                                {
                                  ATerm l_21 = NULL;
                                  ATerm m_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    m_21 = t;
                                    if(((l_21 != NULL) && (l_21 != m_21)))
                                      _fail(m_21);
                                    else
                                      l_21 = m_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_f_12, not_null(l_21));
                                    t = set_config_0(t);
                                  }
                                }
                                t = e_12;
                                return(t);
                              }
                              ATerm o_1 (ATerm t)
                              {
                                t = term_g_12;
                                return(t);
                              }
                              t = ArgOption_3(t, m_1, n_1, o_1);
                              LocalPopChoice(d_12);
                            }
                          else
                            {
                              t = c_12;
                              {
                                ATerm h_12 = t;
                                int i_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_1 (ATerm t)
                                    {
                                      ATerm n_21 = NULL;
                                      n_21 = t;
                                      r_20 :
                                      if(!(match_string(n_21, "-v")))
                                        {
                                          if(!(match_string(n_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm q_1 (ATerm t)
                                    {
                                      t = term_p_12;
                                      t = set_config_0(t);
                                      t = term_t_12;
                                      return(t);
                                    }
                                    ATerm r_1 (ATerm t)
                                    {
                                      t = term_v_12;
                                      return(t);
                                    }
                                    t = Option_3(t, p_1, q_1, r_1);
                                    LocalPopChoice(i_12);
                                  }
                                else
                                  {
                                    t = h_12;
                                    {
                                      ATerm y_12 = t;
                                      int z_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_1 (ATerm t)
                                          {
                                            ATerm o_21 = NULL;
                                            o_21 = t;
                                            s_20 :
                                            if(!(match_string(o_21, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_1 (ATerm t)
                                          {
                                            t = term_b_13;
                                            t = set_config_0(t);
                                            t = term_c_13;
                                            return(t);
                                          }
                                          ATerm u_1 (ATerm t)
                                          {
                                            t = term_d_13;
                                            return(t);
                                          }
                                          t = Option_3(t, s_1, t_1, u_1);
                                          LocalPopChoice(z_12);
                                        }
                                      else
                                        {
                                          t = y_12;
                                          {
                                            ATerm w_1 (ATerm t)
                                            {
                                              ATerm p_21 = NULL;
                                              p_21 = t;
                                              t_20 :
                                              if(!(match_string(p_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm x_1 (ATerm t)
                                            {
                                              t = term_j_13;
                                              t = set_config_0(t);
                                              t = term_o_13;
                                              return(t);
                                            }
                                            ATerm y_1 (ATerm t)
                                            {
                                              t = term_p_13;
                                              return(t);
                                            }
                                            t = Option_3(t, w_1, x_1, y_1);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATempty, term_q_13));
  {
    t = printnl_0(t);
    {
      t = term_q_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  t = SSL_TicksToSeconds(not_null(y_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym__2))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      {
        ATerm r_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_22), not_null(f_22));
            LocalPopChoice(t_13);
          }
        else
          {
            t = r_13;
            t = SSL_addr(not_null(e_22), not_null(f_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_79 (ATerm), ATerm y_79 (ATerm))
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_79(t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
        m_22 = t;
        l_22 :
        if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
          {
            n_22 = ATgetFirst((ATermList) m_22);
            o_22 = (ATerm) ATgetNext((ATermList) m_22);
            {
              ATerm r_22 = NULL;
              ATerm s_22 = NULL;
              t = not_null(o_22);
              {
                t = foldr_2(t, x_79, y_79);
                {
                  s_22 = t;
                  if(((r_22 != NULL) && (r_22 != s_22)))
                    _fail(s_22);
                  else
                    r_22 = s_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_22), not_null(r_22));
                t = y_79(t);
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
ATerm crush_2 (ATerm t, ATerm v_78 (ATerm), ATerm w_78 (ATerm))
{
  ATerm z_22 = NULL;
  ATerm b_23 = NULL;
  z_22 = t;
  {
    ATerm c_23 = NULL;
    ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
    t = not_null(z_22);
    {
      c_23 = t;
      {
        t = SSL_explode_term(not_null(c_23));
        {
          s_23 = t;
          y_22 :
          if(match_cons(s_23, sym__2))
            {
              t_23 = ATgetArgument(s_23, 0);
              u_23 = ATgetArgument(s_23, 1);
              if(((b_23 != NULL) && (b_23 != u_23)))
                _fail(u_23);
              else
                b_23 = u_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_23);
      t = foldr_2(t, v_78, w_78);
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
    ATerm z_1 (ATerm t)
    {
      t = term_n_11;
      return(t);
    }
    t = crush_2(t, z_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      {
        ATerm a_14;
        a_14 = t;
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_24), not_null(c_24));
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              t = SSL_gtr(not_null(b_24), not_null(c_24));
            }
        }
        t = a_14;
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
  ATerm i_24 = NULL;
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
      j_24 = t;
      h_24 :
      if(match_cons(j_24, sym__2))
        {
          k_24 = ATgetArgument(j_24, 0);
          l_24 = ATgetArgument(j_24, 1);
          {
            if(((i_24 != NULL) && (i_24 != k_24)))
              _fail(k_24);
            else
              i_24 = k_24;
            if(((i_24 != NULL) && (i_24 != l_24)))
              _fail(l_24);
            else
              i_24 = l_24;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_87 (ATerm))
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14;
      k_14 = t;
      {
        ATerm o_24 = NULL;
        ATerm p_24 = NULL;
        t = term_o_9;
        {
          t = get_config_0(t);
          {
            p_24 = t;
            if(((o_24 != NULL) && (o_24 != p_24)))
              _fail(p_24);
            else
              o_24 = p_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_24), term_q_7);
          t = geq_0(t);
        }
      }
      t = k_14;
      t = e_87(t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm t_24 = NULL,v_24 = NULL;
    ATerm n_14;
    n_14 = t;
    {
      ATerm u_24 = NULL;
      t = run_time_0(t);
      {
        u_24 = t;
        if(((t_24 != NULL) && (t_24 != u_24)))
          _fail(u_24);
        else
          t_24 = u_24;
      }
    }
    t = n_14;
    {
      ATerm w_24 = NULL;
      t = term_r_14;
      {
        t = get_config_0(t);
        {
          w_24 = t;
          if(((v_24 != NULL) && (v_24 != w_24)))
            _fail(w_24);
          else
            v_24 = w_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_14), not_null(t_24)), term_s_14), not_null(v_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_2);
  {
    t = term_n_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_Version_0))
    {
      ATerm k_25 = NULL,m_25 = NULL;
      ATerm v_14;
      v_14 = t;
      {
        ATerm l_25 = NULL;
        t = SSLgetAnnotations(not_null(i_25));
        {
          l_25 = t;
          if(((k_25 != NULL) && (k_25 != l_25)))
            _fail(l_25);
          else
            k_25 = l_25;
        }
      }
      t = v_14;
      {
        ATerm n_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_25));
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
        t = not_null(m_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_85 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_2);
  t = k_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  t = SSL_table_create(not_null(v_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  {
    ATerm f_15;
    f_15 = t;
    {
      t = term_g_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_15, term_h_15, not_null(z_25));
          t = table_put_0(t);
        }
      }
    }
    t = f_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  t = SSL_table_destroy(not_null(d_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = SSL_exit(not_null(h_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(((ATgetType(l_26) == AT_LIST) && ATisEmpty(l_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
        {
          m_26 = ATgetFirst((ATermList) l_26);
          n_26 = (ATerm) ATgetNext((ATermList) l_26);
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
  ATerm i_15;
  i_15 = t;
  {
    ATerm q_26 = NULL;
    ATerm t_26 = NULL;
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          ATerm r_26 = NULL;
          ATerm s_26 = NULL;
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
          t = (ATerm) ATinsert(ATempty, not_null(r_26));
        }
      }
    {
      t_26 = t;
      if(((q_26 != NULL) && (q_26 != t_26)))
        _fail(t_26);
      else
        q_26 = t_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(q_26));
      t = printnl_0(t);
    }
  }
  t = i_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm w_26 (ATerm t)
  {
    ATerm p_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_15);
      }
    else
      {
        t = p_15;
        t = Cons_2(t, l_73, w_26);
      }
    return(t);
  }
  t = w_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  f_27 = t;
  c_27 :
  if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
    {
      d_27 = ATgetFirst((ATermList) f_27);
      e_27 = (ATerm) ATgetNext((ATermList) f_27);
      {
        ATerm i_27 = NULL;
        t = not_null(e_27);
        {
          ATerm s_15;
          s_15 = t;
          {
            ATerm j_27 = NULL,l_27 = NULL,n_27 = NULL;
            ATerm t_15;
            t_15 = t;
            {
              ATerm k_27 = NULL;
              t = i_0(t);
              {
                k_27 = t;
                if(((j_27 != NULL) && (j_27 != k_27)))
                  _fail(k_27);
                else
                  j_27 = k_27;
              }
            }
            t = t_15;
            {
              ATerm m_27 = NULL;
              t = not_null(d_27);
              {
                t = g_0(t);
                {
                  m_27 = t;
                  if(((l_27 != NULL) && (l_27 != m_27)))
                    _fail(m_27);
                  else
                    l_27 = m_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_27)), not_null(l_27));
                {
                  n_27 = t;
                  if(((i_27 != NULL) && (i_27 != n_27)))
                    _fail(n_27);
                  else
                    i_27 = n_27;
                }
              }
            }
          }
          t = s_15;
          {
            ATerm c_2 (ATerm t)
            {
              t = not_null(i_27);
              return(t);
            }
            t = reverse_acc_2(t, g_0, c_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_27) == AT_LIST) && ATisEmpty(f_27)))
        {
          {
            t = term_o_12;
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
  ATerm d_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm y_27 = NULL,z_27 = NULL;
  y_27 = t;
  x_27 :
  if(match_cons(y_27, sym_Program_1))
    {
      z_27 = ATgetArgument(y_27, 0);
      {
        ATerm c_28 = NULL,e_28 = NULL;
        ATerm d_28 = NULL;
        t = SSLgetAnnotations(not_null(y_27));
        {
          d_28 = t;
          if(((c_28 != NULL) && (c_28 != d_28)))
            _fail(d_28);
          else
            c_28 = d_28;
        }
        {
          t = not_null(z_27);
          {
            ATerm g_28 = NULL;
            t = t_58(t);
            {
              e_28 = t;
              {
                ATerm h_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_28)), not_null(c_28));
                {
                  h_28 = t;
                  if(((g_28 != NULL) && (g_28 != h_28)))
                    _fail(h_28);
                  else
                    g_28 = h_28;
                }
                t = not_null(g_28);
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
  ATerm p_28 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_28 = NULL;
      t = term_r_14;
      {
        t = get_config_0(t);
        {
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
        }
      }
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm e_2 (ATerm t)
        {
          ATerm f_2 (ATerm t)
          {
            ATerm r_28 = NULL;
            r_28 = t;
            if(((p_28 != NULL) && (p_28 != r_28)))
              _fail(r_28);
            else
              p_28 = r_28;
            return(t);
          }
          t = Program_1(t, f_2);
          return(t);
        }
        t = fetch_1(t, e_2);
      }
    }
  {
    t = term_w_15;
    {
      t = echo_0(t);
      {
        t = term_d_16;
        {
          t = table_get_0(t);
          {
            ATerm g_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, g_2);
            {
              ATerm h_2 (ATerm t)
              {
                ATerm s_28 = NULL;
                ATerm t_28 = NULL;
                t_28 = t;
                if(((s_28 != NULL) && (s_28 != t_28)))
                  _fail(t_28);
                else
                  s_28 = t_28;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_28)), term_e_16);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, h_2);
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
  ATerm f_16;
  f_16 = t;
  {
    ATerm y_28 = NULL;
    ATerm z_28 = NULL;
    z_28 = t;
    if(((y_28 != NULL) && (y_28 != z_28)))
      _fail(z_28);
    else
      y_28 = z_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATempty, not_null(y_28)));
      t = printnl_0(t);
    }
  }
  t = f_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm j_84 (ATerm))
{
  ATerm k_16;
  k_16 = t;
  {
    t = j_84(t);
    t = debug_0(t);
  }
  t = k_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Undefined_1))
    {
      h_29 = ATgetArgument(g_29, 0);
      {
        ATerm k_29 = NULL,m_29 = NULL;
        ATerm l_29 = NULL;
        t = SSLgetAnnotations(not_null(g_29));
        {
          l_29 = t;
          if(((k_29 != NULL) && (k_29 != l_29)))
            _fail(l_29);
          else
            k_29 = l_29;
        }
        {
          t = not_null(h_29);
          {
            ATerm o_29 = NULL;
            t = u_58(t);
            {
              m_29 = t;
              {
                ATerm p_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_29)), not_null(k_29));
                {
                  p_29 = t;
                  if(((o_29 != NULL) && (o_29 != p_29)))
                    _fail(p_29);
                  else
                    o_29 = p_29;
                }
                t = not_null(o_29);
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
ATerm fetch_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm u_29 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_73, _id);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = Cons_2(t, _id, u_29);
      }
    return(t);
  }
  t = u_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_88 (ATerm))
{
  t = fetch_1(t, h_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  y_29 :
  if(match_cons(z_29, sym_Help_0))
    {
      ATerm b_30 = NULL,d_30 = NULL;
      ATerm n_16;
      n_16 = t;
      {
        ATerm c_30 = NULL;
        t = SSLgetAnnotations(not_null(z_29));
        {
          c_30 = t;
          if(((b_30 != NULL) && (b_30 != c_30)))
            _fail(c_30);
          else
            b_30 = c_30;
        }
      }
      t = n_16;
      {
        ATerm e_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_30));
        {
          e_30 = t;
          if(((d_30 != NULL) && (d_30 != e_30)))
            _fail(e_30);
          else
            d_30 = e_30;
        }
        t = not_null(d_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_65(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  k_30 :
  if(match_cons(l_30, sym__2))
    {
      m_30 = ATgetArgument(l_30, 0);
      n_30 = ATgetArgument(l_30, 1);
      t = SSL_table_get(not_null(m_30), not_null(n_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  u_30 = t;
  t_30 :
  if(match_cons(u_30, sym__3))
    {
      v_30 = ATgetArgument(u_30, 0);
      w_30 = ATgetArgument(u_30, 1);
      x_30 = ATgetArgument(u_30, 2);
      {
        ATerm q_16;
        q_16 = t;
        {
          ATerm b_31 = NULL;
          ATerm g_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_30), not_null(w_30));
          {
            ATerm s_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_16);
              }
            else
              {
                t = s_16;
                t = (ATerm) ATempty;
              }
            {
              g_31 = t;
              if(((b_31 != NULL) && (b_31 != g_31)))
                _fail(g_31);
              else
                b_31 = g_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_30), not_null(w_30), (ATerm) ATinsert(CheckATermList(not_null(b_31)), not_null(x_30)));
            t = table_put_0(t);
          }
        }
        t = q_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_89 (ATerm))
{
  ATerm k_31 = NULL;
  ATerm l_31 = NULL;
  t = term_o_12;
  {
    t = m_89(t);
    {
      l_31 = t;
      if(((k_31 != NULL) && (k_31 != l_31)))
        _fail(l_31);
      else
        k_31 = l_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_15, term_c_16, not_null(k_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_string(r_31, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
        {
          s_31 = ATgetFirst((ATermList) r_31);
          t_31 = (ATerm) ATgetNext((ATermList) r_31);
          {
            ATerm w_31 = NULL;
            ATerm w_16;
            w_16 = t;
            {
              t = not_null(s_31);
              t = a_0(t);
            }
            t = w_16;
            {
              ATerm x_31 = NULL;
              t = term_o_12;
              {
                t = c_0(t);
                {
                  x_31 = t;
                  if(((w_31 != NULL) && (w_31 != x_31)))
                    _fail(x_31);
                  else
                    w_31 = x_31;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_31)), not_null(w_31));
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
  ATerm i_2 (ATerm t)
  {
    ATerm c_32 = NULL;
    c_32 = t;
    b_32 :
    if(!(match_string(c_32, "--help")))
      {
        if(!(match_string(c_32, "-h")))
          {
            if(!(match_string(c_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_a_17;
    {
      t = set_config_0(t);
      t = term_b_17;
    }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_g_17;
    return(t);
  }
  t = Option_3(t, i_2, j_2, k_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
    {
      g_32 = ATgetFirst((ATermList) f_32);
      h_32 = (ATerm) ATgetNext((ATermList) f_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_53 (ATerm), ATerm p_53 (ATerm))
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  q_32 :
  if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
    {
      x_32 = ATgetFirst((ATermList) w_32);
      y_32 = (ATerm) ATgetNext((ATermList) w_32);
      {
        ATerm c_33 = NULL,e_33 = NULL;
        ATerm d_33 = NULL;
        t = SSLgetAnnotations(not_null(w_32));
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
        {
          t = not_null(x_32);
          {
            ATerm g_33 = NULL;
            t = o_53(t);
            {
              e_33 = t;
              {
                t = not_null(y_32);
                {
                  ATerm i_33 = NULL;
                  t = p_53(t);
                  {
                    g_33 = t;
                    {
                      ATerm j_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_33)), not_null(e_33)), not_null(c_33));
                      {
                        j_33 = t;
                        if(((i_33 != NULL) && (i_33 != j_33)))
                          _fail(j_33);
                        else
                          i_33 = j_33;
                      }
                      t = not_null(i_33);
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
  ATerm t_33 = NULL;
  t_33 = t;
  s_33 :
  if(((ATgetType(t_33) == AT_LIST) && ATisEmpty(t_33)))
    {
      {
        ATerm v_33 = NULL,x_33 = NULL;
        ATerm h_17;
        h_17 = t;
        {
          ATerm w_33 = NULL;
          t = SSLgetAnnotations(not_null(t_33));
          {
            w_33 = t;
            if(((v_33 != NULL) && (v_33 != w_33)))
              _fail(w_33);
            else
              v_33 = w_33;
          }
        }
        t = h_17;
        {
          ATerm y_33 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_33));
          {
            y_33 = t;
            if(((x_33 != NULL) && (x_33 != y_33)))
              _fail(y_33);
            else
              x_33 = y_33;
          }
          t = not_null(x_33);
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
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  d_34 :
  if(match_cons(e_34, sym__2))
    {
      f_34 = ATgetArgument(e_34, 0);
      g_34 = ATgetArgument(e_34, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_9, not_null(f_34), not_null(g_34));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm i_17;
  i_17 = t;
  {
    ATerm j_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_17;
        t = k_89(t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = j_17;
        {
        }
      }
  }
  t = i_17;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm o_34 = NULL;
      ATerm q_17;
      q_17 = t;
      {
        ATerm m_34 = NULL;
        ATerm n_34 = NULL;
        n_34 = t;
        if(((m_34 != NULL) && (m_34 != n_34)))
          _fail(n_34);
        else
          m_34 = n_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_14, not_null(m_34));
          t = set_config_0(t);
        }
      }
      t = q_17;
      {
        ATerm p_34 = NULL;
        p_34 = t;
        if(((o_34 != NULL) && (o_34 != p_34)))
          _fail(p_34);
        else
          o_34 = p_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_34));
      }
      return(t);
    }
    ATerm m_2 (ATerm t)
    {
      ATerm r_17 = t;
      int t_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              {
                t = k_89(t);
                t = Cons_2(t, _id, m_2);
              }
            }
          LocalPopChoice(t_17);
        }
      else
        {
          t = r_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_2, m_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  ATerm c_18;
  c_18 = t;
  {
    ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
    y_34 = t;
    u_34 :
    if(match_cons(y_34, sym__3))
      {
        z_34 = ATgetArgument(y_34, 0);
        a_35 = ATgetArgument(y_34, 1);
        b_35 = ATgetArgument(y_34, 2);
        {
          if(((v_34 != NULL) && (v_34 != z_34)))
            _fail(z_34);
          else
            v_34 = z_34;
          {
            if(((w_34 != NULL) && (w_34 != a_35)))
              _fail(a_35);
            else
              w_34 = a_35;
            {
              if(((x_34 != NULL) && (x_34 != b_35)))
                _fail(b_35);
              else
                x_34 = b_35;
              t = SSL_table_put(not_null(v_34), not_null(w_34), not_null(x_34));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_89 (ATerm))
{
  ATerm e_35 = NULL;
  ATerm d_18;
  d_18 = t;
  {
    t = term_k_18;
    t = table_put_0(t);
  }
  t = d_18;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_89(t);
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_2);
    {
      ATerm n_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_18;
          q_18 = t;
          {
            ATerm r_18 = t;
            int s_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_x_16;
                t = get_config_0(t);
                LocalPopChoice(s_18);
              }
            else
              {
                t = r_18;
                t = fetch_1(t, Help_0);
              }
          }
          t = q_18;
          {
            t = system_usage_0(t);
            {
              t = term_n_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(o_18);
        }
      else
        {
          t = n_18;
          {
            ATerm t_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_2 (ATerm t)
                {
                  ATerm p_2 (ATerm t)
                  {
                    ATerm f_35 = NULL;
                    f_35 = t;
                    if(((e_35 != NULL) && (e_35 != f_35)))
                      _fail(f_35);
                    else
                      e_35 = f_35;
                    return(t);
                  }
                  t = Undefined_1(t, p_2);
                  return(t);
                }
                t = fetch_1(t, o_2);
                {
                  ATerm q_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_35)), term_z_18);
                    return(t);
                  }
                  t = say_1(t, q_2);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_q_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(y_18);
              }
            else
              {
                t = t_18;
                {
                }
              }
          }
        }
      {
        ATerm a_19;
        a_19 = t;
        {
          t = term_x_15;
          t = table_destroy_0(t);
        }
        t = a_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm))
{
  t = parse_options_1(t, q_85);
  {
    t = store_options_0(t);
    {
      t = s_85(t);
      {
        ATerm c_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_85);
            LocalPopChoice(h_19);
          }
        else
          {
            t = c_19;
            {
              ATerm i_19 = t;
              int j_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_85(t);
                  t = report_success_0(t);
                  LocalPopChoice(j_19);
                }
              else
                {
                  t = i_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm k_86 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_86(t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, h_86);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, r_2, j_86, k_86, s_2);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm x_2 (ATerm t)
    {
      ATerm n_19;
      n_19 = t;
      {
        ATerm i_35 = NULL;
        ATerm j_35 = NULL;
        t = term_r_14;
        {
          t = get_config_0(t);
          {
            j_35 = t;
            if(((i_35 != NULL) && (i_35 != j_35)))
              _fail(j_35);
            else
              i_35 = j_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATempty, not_null(i_35)));
          t = printnl_0(t);
        }
      }
      t = n_19;
      return(t);
    }
    t = if_verbose2_1(t, x_2);
    return(t);
  }
  t = iowrap_4(t, b_86, c_86, d_86, u_2);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_85 (ATerm), ATerm a_86 (ATerm))
{
  t = iowrap_3(t, z_85, a_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    t = _2(t, _id, w_85);
    return(t);
  }
  t = iowrap_2(t, z_2, _fail);
  return(t);
}
ATerm meta_explode_0 (ATerm t)
{
  t = iowrap_1(t, MetaExplode_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, MetaExplode_0);
  return(t);
}
