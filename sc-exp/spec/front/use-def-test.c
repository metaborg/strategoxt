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
Symbol sym_CharCong_1;
Symbol sym_AnnoCong_2;
Symbol sym_StrategyCurly_1;
Symbol sym_EmptyTupleCong_0;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_WaitStatus_3;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  init_constant_terms();
}
ATerm term_x_21;
ATerm term_w_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_v_20;
ATerm term_c_17;
ATerm term_t_16;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_m_12;
ATerm term_z_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_j_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_x_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_k_4;
void init_constant_terms (void)
{
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_4);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym_Var_1, term_o_4);
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(sym_Match_1, term_s_4);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym_Build_1, term_s_4);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_Var_1, term_e_5);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_Var_1, term_g_5);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_Var_1, term_p_5);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_Var_1, term_o_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_v_5);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_Var_1, term_c_6);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_Build_1, term_j_5);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_5);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Call_2, term_q_6, (ATerm) ATempty);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Build_1, term_r_5);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_Match_1, term_d_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Str_1, term_a_7);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Var_1, term_x_6);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Str_1, term_e_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Var_1, term_g_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_7);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Call_2, term_p_7, (ATerm) ATempty);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Match_1, term_h_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Seq_2, term_q_7, term_u_7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_4, term_w_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Call_2, term_j_8, (ATerm) ATempty);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_LChoice_2, term_q_7, term_k_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_l_8, term_t_4);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_8, term_t_4);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_LChoice_2, term_q_7, term_s_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Var_1, term_d_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Match_1, term_e_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Str_1, term_g_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Build_1, term_e_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_10, term_q_7);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_App_2, term_q_7, term_e_9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Match_1, term_c_7);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Var_1, term_q_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_14);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_o_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm test12_0 (ATerm);
ATerm test11_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm u_55 (ATerm));
ATerm test10_0 (ATerm);
ATerm test9_0 (ATerm);
ATerm test8_0 (ATerm);
ATerm test7_0 (ATerm);
ATerm test6_0 (ATerm);
ATerm test5_0 (ATerm);
ATerm test4_0 (ATerm);
ATerm test3_0 (ATerm);
ATerm apply_test_3 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm test2_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm l_67 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm i_60 (ATerm), ATerm j_60 (ATerm), ATerm k_60 (ATerm));
ATerm lchoice_1 (ATerm, ATerm k_67 (ATerm));
ATerm LChoice_2 (ATerm, ATerm e_60 (ATerm), ATerm f_60 (ATerm));
ATerm try_1 (ATerm, ATerm v_77 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm h_67 (ATerm), ATerm i_67 (ATerm));
ATerm choice_1 (ATerm, ATerm j_67 (ATerm));
ATerm Choice_2 (ATerm, ATerm c_59 (ATerm), ATerm d_59 (ATerm));
ATerm error_0 (ATerm);
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm p_71 (ATerm));
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm d_58 (ATerm), ATerm e_58 (ATerm), ATerm f_58 (ATerm));
ATerm RootApp_1 (ATerm, ATerm c_57 (ATerm));
ATerm App_2 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm o_71 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm a_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm v_59 (ATerm));
ATerm Build_1 (ATerm, ATerm w_59 (ATerm));
ATerm VarScope_1 (ATerm, ATerm g_67 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm n_71 (ATerm));
ATerm DefineUnbound_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm v_58 (ATerm));
ATerm Scope_2 (ATerm, ATerm y_59 (ATerm), ATerm z_59 (ATerm));
ATerm tboundin_3 (ATerm, ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm s_67 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm crush_3 (ATerm, ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm y_78 (ATerm));
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm n_68 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm w_67 (ATerm), ATerm x_67 (ATerm));
ATerm diff_1 (ATerm, ATerm o_67 (ATerm));
ATerm diff_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_74 (ATerm), ATerm k_74 (ATerm));
ATerm free_vars_3 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm map_1 (ATerm, ATerm e_68 (ATerm));
ATerm end_scope_1 (ATerm, ATerm k_71 (ATerm));
ATerm restore_always_2 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm j_71 (ATerm));
ATerm scope_2 (ATerm, ATerm l_71 (ATerm), ATerm m_71 (ATerm));
ATerm def_use_def_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_55 (ATerm), ATerm p_55 (ATerm));
ATerm filter_1 (ATerm, ATerm j_77 (ATerm));
ATerm defs_use_def_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm s_55 (ATerm));
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm));
ATerm apply_and_fail_4 (ATerm, ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm));
ATerm apply_and_fail_3 (ATerm, ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm m_87 (ATerm));
ATerm test1_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm f_54 (ATerm), ATerm g_54 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_90 (ATerm));
ATerm test_suite_2 (ATerm, ATerm t_86 (ATerm), ATerm u_86 (ATerm));
ATerm use_def_test_0 (ATerm);
ATerm main_0 (ATerm);
ATerm test12_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_k_4;
    return(t);
  }
  ATerm d_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, term_l_4, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_n_4, (ATerm) ATinsert(ATempty, term_t_4)), (ATerm)ATmakeAppl(sym_Call_2, term_n_4, (ATerm) ATinsert(ATempty, term_x_4)), term_a_5));
    return(t);
  }
  t = apply_test_3(t, b_0, def_use_def_0, d_0);
  return(t);
}
ATerm test11_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_b_5;
    return(t);
  }
  ATerm g_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, term_j_5), term_f_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_o_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, term_r_5), term_q_5)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, term_j_5), term_f_5))), term_q_5))))));
    return(t);
  }
  t = apply_test_3(t, f_0, def_use_def_0, g_0);
  {
    ATerm i_0 (ATerm t)
    {
      t = term_t_5;
      return(t);
    }
    ATerm k_0 (ATerm t)
    {
      t = Strategies_1(t, defs_use_def_0);
      return(t);
    }
    ATerm m_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_u_5, (ATerm)ATinsert(ATempty, term_b_6), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, term_j_5), term_f_5)), (ATerm)ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, term_d_6), term_f_5))), term_q_5)), (ATerm) ATmakeAppl(sym_Seq_2, term_e_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_o_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, term_r_5), term_q_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_r_6, (ATerm) ATmakeAppl(sym_Op_2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, term_q_5), term_f_5)))), term_t_6))))), term_u_6))))));
      return(t);
    }
    t = apply_test_3(t, i_0, k_0, m_0);
  }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm q_4 = NULL,r_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym_Overlays_1))
    {
      r_4 = ATgetArgument(q_4, 0);
      {
        ATerm u_4 = NULL,w_4 = NULL;
        ATerm v_4 = NULL;
        t = SSLgetAnnotations(not_null(q_4));
        {
          v_4 = t;
          if(((u_4 != NULL) && (u_4 != v_4)))
            _fail(v_4);
          else
            u_4 = v_4;
        }
        {
          t = not_null(r_4);
          {
            ATerm y_4 = NULL;
            t = u_55(t);
            {
              w_4 = t;
              {
                ATerm z_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(w_4)), not_null(u_4));
                {
                  z_4 = t;
                  if(((y_4 != NULL) && (y_4 != z_4)))
                    _fail(z_4);
                  else
                    y_4 = z_4;
                }
                t = not_null(y_4);
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
ATerm test10_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    t = Overlays_1(t, defs_use_def_0);
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_g_5, (ATerm)ATinsert(ATinsert(ATempty, term_x_6), term_o_4), (ATerm) ATmakeAppl(sym_Op_2, term_d_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_7), term_f_7), term_s_4)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_w_6, (ATerm)ATinsert(ATinsert(ATempty, term_x_6), term_o_4), (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, term_b_7), term_s_4)))))));
    return(t);
  }
  t = apply_and_fail_3(t, n_0, o_0, p_0);
  return(t);
}
ATerm test9_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = term_n_7;
    return(t);
  }
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_h_7), term_c_7)), term_y_7)));
    return(t);
  }
  t = apply_test_3(t, r_0, def_use_def_0, s_0);
  {
    ATerm t_0 (ATerm t)
    {
      t = term_b_8;
      return(t);
    }
    ATerm u_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_h_7), term_c_7)), term_a_5)));
      return(t);
    }
    t = apply_and_fail_3(t, t_0, def_use_def_0, u_0);
  }
  return(t);
}
ATerm test8_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_c_8;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_h_7), term_c_7)), term_y_7));
    return(t);
  }
  t = apply_test_3(t, v_0, def_use_def_0, w_0);
  {
    ATerm x_0 (ATerm t)
    {
      t = term_d_8;
      return(t);
    }
    ATerm y_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_RDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_h_7), term_c_7)), term_a_5));
      return(t);
    }
    t = apply_and_fail_3(t, x_0, def_use_def_0, y_0);
  }
  return(t);
}
ATerm test7_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_e_8;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_s_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_s_4))))));
    return(t);
  }
  t = apply_test_3(t, z_0, def_use_def_0, a_1);
  {
    ATerm b_1 (ATerm t)
    {
      t = term_f_8;
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_s_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_s_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, b_1, def_use_def_0, c_1);
    {
      ATerm d_1 (ATerm t)
      {
        t = term_g_8;
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_s_4))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_s_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))))));
        return(t);
      }
      t = apply_and_fail_3(t, d_1, def_use_def_0, e_1);
    }
  }
  return(t);
}
ATerm test6_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_h_8;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_q_8, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_s_4)))));
    return(t);
  }
  t = apply_test_3(t, f_1, def_use_def_0, g_1);
  {
    ATerm h_1 (ATerm t)
    {
      t = term_r_8;
      return(t);
    }
    ATerm i_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_w_8, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_s_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, h_1, def_use_def_0, i_1);
  }
  return(t);
}
ATerm test5_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_y_8;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_s_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_s_4)))));
    return(t);
  }
  t = apply_test_3(t, j_1, def_use_def_0, k_1);
  {
    ATerm l_1 (ATerm t)
    {
      t = term_b_9;
      return(t);
    }
    ATerm m_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_s_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, l_1, def_use_def_0, m_1);
  }
  return(t);
}
ATerm test4_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_f_9, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_9), term_b_10))), term_v_9)))));
    return(t);
  }
  t = apply_and_fail_3(t, n_1, def_use_def_0, o_1);
  {
    ATerm p_1 (ATerm t)
    {
      t = term_c_10;
      return(t);
    }
    ATerm q_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_f_9, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_i_10), term_v_9)))));
      return(t);
    }
    t = apply_test_3(t, p_1, def_use_def_0, q_1);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_j_10;
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_9), term_b_10))), term_v_9))));
        return(t);
      }
      t = apply_and_fail_3(t, r_1, def_use_def_0, s_1);
    }
  }
  return(t);
}
ATerm test3_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_6), (ATerm) ATmakeAppl(sym_Seq_2, term_o_10, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), term_s_4)))))));
    return(t);
  }
  t = apply_test_3(t, t_1, def_use_def_0, u_1);
  {
    ATerm v_1 (ATerm t)
    {
      t = term_p_10;
      return(t);
    }
    ATerm w_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_6), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, term_r_10), term_s_4))), term_c_7))))));
      return(t);
    }
    t = apply_and_fail_3(t, v_1, def_use_def_0, w_1);
  }
  return(t);
}
ATerm apply_test_3 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_87(t);
        t = e_87(t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          t = term_v_10;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    return(t);
  }
  t = do_test_2(t, d_87, x_1);
  return(t);
}
ATerm test2_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_x_10;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), term_s_4)))));
    return(t);
  }
  t = apply_test_3(t, y_1, def_use_def_0, z_1);
  {
    ATerm a_2 (ATerm t)
    {
      t = term_y_10;
      return(t);
    }
    ATerm b_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, term_r_10), term_s_4))), term_c_7)))));
      return(t);
    }
    t = apply_and_fail_3(t, a_2, def_use_def_0, b_2);
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_5 = NULL;
  i_5 = t;
  h_5 :
  if(((ATgetType(i_5) == AT_LIST) && ATisEmpty(i_5)))
    {
      {
        ATerm k_5 = NULL,m_5 = NULL;
        ATerm z_10;
        z_10 = t;
        {
          ATerm l_5 = NULL;
          t = SSLgetAnnotations(not_null(i_5));
          {
            l_5 = t;
            if(((k_5 != NULL) && (k_5 != l_5)))
              _fail(l_5);
            else
              k_5 = l_5;
          }
        }
        t = z_10;
        {
          ATerm n_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_5));
          {
            n_5 = t;
            if(((m_5 != NULL) && (m_5 != n_5)))
              _fail(n_5);
            else
              m_5 = n_5;
          }
          t = not_null(m_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineBound_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm s_5 = NULL;
    s_5 = t;
    {
      ATerm b_11;
      b_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_5)), term_d_11);
        {
          ATerm d_2 (ATerm t)
          {
            t = term_e_11;
            return(t);
          }
          t = assert_1(t, d_2);
        }
      }
      t = b_11;
    }
    return(t);
  }
  t = map_1(t, c_2);
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  x_5 = t;
  w_5 :
  if(match_cons(x_5, sym_Overlay_3))
    {
      y_5 = ATgetArgument(x_5, 0);
      z_5 = ATgetArgument(x_5, 1);
      a_6 = ATgetArgument(x_5, 2);
      {
        ATerm f_11;
        f_11 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_11, not_null(y_5)));
          {
            ATerm e_2 (ATerm t)
            {
              t = term_j_11;
              return(t);
            }
            t = assert_1(t, e_2);
            {
              t = not_null(z_5);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(a_6);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = f_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rdef_ud_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL;
  j_6 = t;
  h_6 :
  if(match_cons(j_6, sym_RDef_3))
    {
      k_6 = ATgetArgument(j_6, 0);
      l_6 = ATgetArgument(j_6, 1);
      m_6 = ATgetArgument(j_6, 2);
      i_6 :
      if(match_cons(m_6, sym_StratRule_3))
        {
          n_6 = ATgetArgument(m_6, 0);
          o_6 = ATgetArgument(m_6, 1);
          p_6 = ATgetArgument(m_6, 2);
          {
            ATerm m_11;
            m_11 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_11, not_null(k_6)));
              {
                ATerm f_2 (ATerm t)
                {
                  t = term_j_11;
                  return(t);
                }
                t = assert_1(t, f_2);
                {
                  t = not_null(n_6);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(o_6);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(p_6);
                          t = unbound_vars_0(t);
                        }
                      }
                    }
                  }
                }
              }
            }
            t = m_11;
          }
        }
      else
        {
          if(match_cons(m_6, sym_Rule_3))
            {
              n_6 = ATgetArgument(m_6, 0);
              o_6 = ATgetArgument(m_6, 1);
              p_6 = ATgetArgument(m_6, 2);
              {
                ATerm o_11;
                o_11 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_11, not_null(k_6)));
                  {
                    ATerm g_2 (ATerm t)
                    {
                      t = term_j_11;
                      return(t);
                    }
                    t = assert_1(t, g_2);
                    {
                      t = not_null(n_6);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(p_6);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(o_6);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = o_11;
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm guardedlchoice_1 (ATerm t, ATerm l_67 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    t = GuardedLChoice_3(t, l_67, l_67, _id);
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, l_67);
    return(t);
  }
  t = abstract_choice_2(t, h_2, i_2);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm i_60 (ATerm), ATerm j_60 (ATerm), ATerm k_60 (ATerm))
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym_GuardedLChoice_3))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      m_7 = ATgetArgument(j_7, 2);
      {
        ATerm r_7 = NULL,t_7 = NULL;
        ATerm s_7 = NULL;
        t = SSLgetAnnotations(not_null(j_7));
        {
          s_7 = t;
          if(((r_7 != NULL) && (r_7 != s_7)))
            _fail(s_7);
          else
            r_7 = s_7;
        }
        {
          t = not_null(k_7);
          {
            ATerm v_7 = NULL;
            t = i_60(t);
            {
              t_7 = t;
              {
                t = not_null(l_7);
                {
                  ATerm x_7 = NULL;
                  t = j_60(t);
                  {
                    v_7 = t;
                    {
                      t = not_null(m_7);
                      {
                        ATerm z_7 = NULL;
                        t = k_60(t);
                        {
                          x_7 = t;
                          {
                            ATerm a_8 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(t_7), not_null(v_7), not_null(x_7)), not_null(r_7));
                            {
                              a_8 = t;
                              if(((z_7 != NULL) && (z_7 != a_8)))
                                _fail(a_8);
                              else
                                z_7 = a_8;
                            }
                            t = not_null(z_7);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm k_67 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    t = LChoice_2(t, k_67, _id);
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = LChoice_2(t, _id, k_67);
    return(t);
  }
  t = abstract_choice_2(t, j_2, k_2);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm e_60 (ATerm), ATerm f_60 (ATerm))
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  n_8 = t;
  m_8 :
  if(match_cons(n_8, sym_LChoice_2))
    {
      o_8 = ATgetArgument(n_8, 0);
      p_8 = ATgetArgument(n_8, 1);
      {
        ATerm t_8 = NULL,v_8 = NULL;
        ATerm u_8 = NULL;
        t = SSLgetAnnotations(not_null(n_8));
        {
          u_8 = t;
          if(((t_8 != NULL) && (t_8 != u_8)))
            _fail(u_8);
          else
            t_8 = u_8;
        }
        {
          t = not_null(o_8);
          {
            ATerm x_8 = NULL;
            t = e_60(t);
            {
              v_8 = t;
              {
                t = not_null(p_8);
                {
                  ATerm z_8 = NULL;
                  t = f_60(t);
                  {
                    x_8 = t;
                    {
                      ATerm a_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(v_8), not_null(x_8)), not_null(t_8));
                      {
                        a_9 = t;
                        if(((z_8 != NULL) && (z_8 != a_9)))
                          _fail(a_9);
                        else
                          z_8 = a_9;
                      }
                      t = not_null(z_8);
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
ATerm try_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm q_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_77(t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = q_11;
      {
      }
    }
  return(t);
}
ATerm isect_Bound_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
      p_9 = t;
      j_9 :
      if(match_cons(p_9, sym__2))
        {
          q_9 = ATgetArgument(p_9, 0);
          r_9 = ATgetArgument(p_9, 1);
          k_9 :
          if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
            {
              s_9 = ATgetFirst((ATermList) r_9);
              u_9 = (ATerm) ATgetNext((ATermList) r_9);
              l_9 :
              if(match_cons(s_9, sym_Defined_1))
                {
                  t_9 = ATgetArgument(s_9, 0);
                  m_9 :
                  if(!(match_cons(q_9, sym_Scopes_0)))
                    {
                      ATerm w_11 = t;
                      int x_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_11;
                          y_11 = t;
                          {
                            ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_e_11, not_null(q_9));
                            {
                              t = table_get_0(t);
                              {
                                w_9 = t;
                                h_9 :
                                if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
                                  {
                                    x_9 = ATgetFirst((ATermList) w_9);
                                    z_9 = (ATerm) ATgetNext((ATermList) w_9);
                                    i_9 :
                                    if(match_cons(x_9, sym_Defined_1))
                                      {
                                        y_9 = ATgetArgument(x_9, 0);
                                        {
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
                          t = y_11;
                          ;
                          LocalPopChoice(x_11);
                        }
                      else
                        {
                          t = w_11;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), (ATerm) ATinsert(ATempty, term_z_11));
                        }
                    }
                }
              else
                {
                  n_9 :
                  if(!(match_cons(q_9, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              o_9 :
              if(!(match_cons(q_9, sym_Scopes_0)))
                {
                  _fail(t);
                }
            }
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, m_2);
    return(t);
  }
  t = map_1(t, l_2);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
  f_10 = t;
  e_10 :
  if(match_cons(f_10, sym__2))
    {
      g_10 = ATgetArgument(f_10, 0);
      h_10 = ATgetArgument(f_10, 1);
      {
        t = not_null(h_10);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
            k_10 = t;
            d_10 :
            if(match_cons(k_10, sym__2))
              {
                l_10 = ATgetArgument(k_10, 0);
                m_10 = ATgetArgument(k_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_10), not_null(l_10), not_null(m_10));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  t = SSL_table_destroy(not_null(s_10));
  return(t);
}
ATerm restore_Bound_0 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  {
    ATerm a_12;
    a_12 = t;
    {
      t = term_e_11;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_11, not_null(w_10));
          t = table_putlist_0(t);
        }
      }
    }
    t = a_12;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  t = SSL_table_keys(not_null(a_11));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm g_11 = NULL;
  g_11 = t;
  {
    t = table_keys_0(t);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm i_11 = NULL;
        ATerm k_11 = NULL;
        i_11 = t;
        {
          ATerm l_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(i_11));
          {
            t = table_get_0(t);
            {
              l_11 = t;
              if(((k_11 != NULL) && (k_11 != l_11)))
                _fail(l_11);
              else
                k_11 = l_11;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_11), not_null(k_11));
        }
        return(t);
      }
      t = map_1(t, o_2);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_e_11;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm h_67 (ATerm), ATerm i_67 (ATerm))
{
  ATerm r_11 = NULL,t_11 = NULL;
  ATerm b_12;
  b_12 = t;
  {
    ATerm s_11 = NULL;
    t = save_Bound_0(t);
    {
      s_11 = t;
      if(((r_11 != NULL) && (r_11 != s_11)))
        _fail(s_11);
      else
        r_11 = s_11;
    }
  }
  t = b_12;
  {
    t = h_67(t);
    {
      ATerm g_12;
      g_12 = t;
      {
        ATerm u_11 = NULL;
        t = save_Bound_0(t);
        {
          u_11 = t;
          {
            if(((t_11 != NULL) && (t_11 != u_11)))
              _fail(u_11);
            else
              t_11 = u_11;
            {
              t = not_null(r_11);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = g_12;
      {
        t = i_67(t);
        {
          ATerm h_12;
          h_12 = t;
          {
            t = not_null(t_11);
            t = isect_Bound_0(t);
          }
          t = h_12;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm j_67 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    t = Choice_2(t, j_67, _id);
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = Choice_2(t, _id, j_67);
    return(t);
  }
  t = abstract_choice_2(t, p_2, q_2);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm c_59 (ATerm), ATerm d_59 (ATerm))
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_Choice_2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      {
        ATerm j_12 = NULL,l_12 = NULL;
        ATerm k_12 = NULL;
        t = SSLgetAnnotations(not_null(d_12));
        {
          k_12 = t;
          if(((j_12 != NULL) && (j_12 != k_12)))
            _fail(k_12);
          else
            j_12 = k_12;
        }
        {
          t = not_null(e_12);
          {
            ATerm n_12 = NULL;
            t = c_59(t);
            {
              l_12 = t;
              {
                t = not_null(f_12);
                {
                  ATerm p_12 = NULL;
                  t = d_59(t);
                  {
                    n_12 = t;
                    {
                      ATerm q_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(l_12), not_null(n_12)), not_null(j_12));
                      {
                        q_12 = t;
                        if(((p_12 != NULL) && (p_12 != q_12)))
                          _fail(q_12);
                        else
                          p_12 = q_12;
                      }
                      t = not_null(p_12);
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
ATerm error_0 (ATerm t)
{
  ATerm i_12;
  i_12 = t;
  {
    ATerm x_12 = NULL;
    ATerm y_12 = NULL;
    y_12 = t;
    if(((x_12 != NULL) && (x_12 != y_12)))
      _fail(y_12);
    else
      x_12 = y_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_12, not_null(x_12));
      t = printnl_0(t);
    }
  }
  t = i_12;
  return(t);
}
ATerm Context_0 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  {
    ATerm o_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_13 = NULL;
        ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm r_2 (ATerm t)
          {
            t = term_j_11;
            return(t);
          }
          t = rewrite_1(t, r_2);
          {
            u_13 = t;
            f_13 :
            if(match_cons(u_13, sym_Defined_2))
              {
                v_13 = ATgetArgument(u_13, 0);
                w_13 = ATgetArgument(u_13, 1);
                g_13 :
                if(match_string(v_13, "j_0"))
                  {
                    if(((t_13 != NULL) && (t_13 != w_13)))
                      _fail(w_13);
                    else
                      t_13 = w_13;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_13)), term_t_12), not_null(t_13)), term_s_12);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = o_12;
        {
          ATerm u_12 = t;
          int v_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_13 = NULL;
              ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm s_2 (ATerm t)
                {
                  t = term_j_11;
                  return(t);
                }
                t = rewrite_1(t, s_2);
                {
                  a_14 = t;
                  i_13 :
                  if(match_cons(a_14, sym_Defined_2))
                    {
                      b_14 = ATgetArgument(a_14, 0);
                      c_14 = ATgetArgument(a_14, 1);
                      j_13 :
                      if(match_string(b_14, "h_0"))
                        {
                          if(((z_13 != NULL) && (z_13 != c_14)))
                            _fail(c_14);
                          else
                            z_13 = c_14;
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_13)), term_t_12), not_null(z_13)), term_w_12);
              ;
              LocalPopChoice(v_12);
            }
          else
            {
              t = u_12;
              {
                ATerm z_12 = t;
                int a_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_14 = NULL;
                    ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm t_2 (ATerm t)
                      {
                        t = term_j_11;
                        return(t);
                      }
                      t = rewrite_1(t, t_2);
                      {
                        g_14 = t;
                        l_13 :
                        if(match_cons(g_14, sym_Defined_2))
                          {
                            h_14 = ATgetArgument(g_14, 0);
                            i_14 = ATgetArgument(g_14, 1);
                            m_13 :
                            if(match_string(h_14, "e_0"))
                              {
                                if(((f_14 != NULL) && (f_14 != i_14)))
                                  _fail(i_14);
                                else
                                  f_14 = i_14;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_13)), term_t_12), not_null(f_14)), term_w_12);
                    ;
                    LocalPopChoice(a_13);
                  }
                else
                  {
                    t = z_12;
                    {
                      ATerm l_14 = NULL;
                      ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
                      t = (ATerm) ATempty;
                      {
                        ATerm u_2 (ATerm t)
                        {
                          t = term_j_11;
                          return(t);
                        }
                        t = rewrite_1(t, u_2);
                        {
                          m_14 = t;
                          o_13 :
                          if(match_cons(m_14, sym_Defined_2))
                            {
                              n_14 = ATgetArgument(m_14, 0);
                              o_14 = ATgetArgument(m_14, 1);
                              p_13 :
                              if(match_string(n_14, "c_0"))
                                {
                                  if(((l_14 != NULL) && (l_14 != o_14)))
                                    _fail(o_14);
                                  else
                                    l_14 = o_14;
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_13)), term_t_12), not_null(l_14)), term_b_13);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Unbound_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym_Var_1))
    {
      a_15 = ATgetArgument(z_14, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_13), not_null(a_15)), term_c_13);
        {
          t = Context_0(t);
          t = error_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(((ATgetType(f_15) == AT_LIST) && !(ATisEmpty(f_15))))
    {
      g_15 = ATgetFirst((ATermList) f_15);
      h_15 = (ATerm) ATgetNext((ATermList) f_15);
      t = not_null(g_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym__2))
    {
      n_15 = ATgetArgument(m_15, 0);
      o_15 = ATgetArgument(m_15, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), not_null(o_15));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm u_15 = NULL;
  ATerm w_15 = NULL;
  u_15 = t;
  {
    ATerm x_15 = NULL;
    t = term_e_13;
    {
      t = p_71(t);
      {
        x_15 = t;
        if(((w_15 != NULL) && (w_15 != x_15)))
          _fail(x_15);
        else
          w_15 = x_15;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), not_null(u_15));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Bound_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Var_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      {
        ATerm h_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_16 = NULL,p_16 = NULL;
            t = not_null(k_16);
            {
              ATerm v_2 (ATerm t)
              {
                t = term_e_11;
                return(t);
              }
              t = rewrite_1(t, v_2);
              {
                o_16 = t;
                d_16 :
                if(match_cons(o_16, sym_Defined_1))
                  {
                    p_16 = ATgetArgument(o_16, 0);
                    e_16 :
                    if(!(match_string(p_16, "q_0")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_16));
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = h_13;
            {
              ATerm n_13 = t;
              int r_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_16 = NULL;
                  t = not_null(k_16);
                  {
                    ATerm w_2 (ATerm t)
                    {
                      t = term_e_11;
                      return(t);
                    }
                    t = rewrite_1(t, w_2);
                    {
                      s_16 = t;
                      g_16 :
                      if(match_cons(s_16, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_z_11;
                  ;
                  LocalPopChoice(r_13);
                }
              else
                {
                  t = n_13;
                  {
                    ATerm v_16 = NULL,w_16 = NULL;
                    t = not_null(k_16);
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = term_e_11;
                        return(t);
                      }
                      t = rewrite_1(t, x_2);
                      {
                        v_16 = t;
                        h_16 :
                        if(match_cons(v_16, sym_Defined_1))
                          {
                            w_16 = ATgetArgument(v_16, 0);
                            i_16 :
                            if(!(match_string(w_16, "l_0")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_16));
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
ATerm use_vars_0 (ATerm t)
{
  ATerm s_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(x_13);
      {
        ATerm y_13 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            ;
            LocalPopChoice(d_14);
          }
        else
          {
            t = y_13;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = s_13;
      {
        ATerm e_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(j_14);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = e_14;
            {
              ATerm k_14 = t;
              int p_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(p_14);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = k_14;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm d_58 (ATerm), ATerm e_58 (ATerm), ATerm f_58 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_Rule_3))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      l_17 = ATgetArgument(i_17, 2);
      {
        ATerm q_17 = NULL,s_17 = NULL;
        ATerm r_17 = NULL;
        t = SSLgetAnnotations(not_null(i_17));
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
        {
          t = not_null(j_17);
          {
            ATerm u_17 = NULL;
            t = d_58(t);
            {
              s_17 = t;
              {
                t = not_null(k_17);
                {
                  ATerm w_17 = NULL;
                  t = e_58(t);
                  {
                    u_17 = t;
                    {
                      t = not_null(l_17);
                      {
                        ATerm y_17 = NULL;
                        t = f_58(t);
                        {
                          w_17 = t;
                          {
                            ATerm z_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(s_17), not_null(u_17), not_null(w_17)), not_null(q_17));
                            {
                              z_17 = t;
                              if(((y_17 != NULL) && (y_17 != z_17)))
                                _fail(z_17);
                              else
                                y_17 = z_17;
                            }
                            t = not_null(y_17);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm c_57 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym_RootApp_1))
    {
      m_18 = ATgetArgument(l_18, 0);
      {
        ATerm p_18 = NULL,r_18 = NULL;
        ATerm q_18 = NULL;
        t = SSLgetAnnotations(not_null(l_18));
        {
          q_18 = t;
          if(((p_18 != NULL) && (p_18 != q_18)))
            _fail(q_18);
          else
            p_18 = q_18;
        }
        {
          t = not_null(m_18);
          {
            ATerm t_18 = NULL;
            t = c_57(t);
            {
              r_18 = t;
              {
                ATerm u_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(r_18)), not_null(p_18));
                {
                  u_18 = t;
                  if(((t_18 != NULL) && (t_18 != u_18)))
                    _fail(u_18);
                  else
                    t_18 = u_18;
                }
                t = not_null(t_18);
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
ATerm App_2 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm))
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym_App_2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      {
        ATerm l_19 = NULL,n_19 = NULL;
        ATerm m_19 = NULL;
        t = SSLgetAnnotations(not_null(f_19));
        {
          m_19 = t;
          if(((l_19 != NULL) && (l_19 != m_19)))
            _fail(m_19);
          else
            l_19 = m_19;
        }
        {
          t = not_null(g_19);
          {
            ATerm p_19 = NULL;
            t = a_57(t);
            {
              n_19 = t;
              {
                t = not_null(h_19);
                {
                  ATerm r_19 = NULL;
                  t = b_57(t);
                  {
                    p_19 = t;
                    {
                      ATerm s_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(n_19), not_null(p_19)), not_null(l_19));
                      {
                        s_19 = t;
                        if(((r_19 != NULL) && (r_19 != s_19)))
                          _fail(s_19);
                        else
                          r_19 = s_19;
                      }
                      t = not_null(r_19);
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
ATerm table_replace_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym__3))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      f_20 = ATgetArgument(c_20, 2);
      {
        ATerm j_20 = NULL;
        ATerm q_14;
        q_14 = t;
        {
          ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(e_20));
          {
            t = table_get_0(t);
            {
              k_20 = t;
              a_20 :
              if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
                {
                  l_20 = ATgetFirst((ATermList) k_20);
                  m_20 = (ATerm) ATgetNext((ATermList) k_20);
                  {
                    if(((j_20 != NULL) && (j_20 != m_20)))
                      _fail(m_20);
                    else
                      j_20 = m_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_20), not_null(e_20), (ATerm) ATinsert(CheckATermList(not_null(j_20)), not_null(f_20)));
                      t = table_put_0(t);
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
        t = q_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm o_71 (ATerm))
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm x_20 = NULL;
        ATerm r_14;
        r_14 = t;
        {
          ATerm y_20 = NULL;
          t = o_71(t);
          {
            y_20 = t;
            {
              if(((x_20 != NULL) && (x_20 != y_20)))
                _fail(y_20);
              else
                x_20 = y_20;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_20), not_null(t_20), not_null(u_20));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = r_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Binding_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym_Var_1))
    {
      e_21 = ATgetArgument(d_21, 0);
      {
        ATerm s_14;
        s_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_21)), term_u_14);
          {
            ATerm y_2 (ATerm t)
            {
              t = term_e_11;
              return(t);
            }
            t = override_key_1(t, y_2);
          }
        }
        t = s_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym_Var_1))
    {
      v_21 = ATgetArgument(u_21, 0);
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_21 = NULL,a_22 = NULL;
            ATerm z_21 = NULL;
            t = SSLgetAnnotations(not_null(u_21));
            {
              z_21 = t;
              if(((y_21 != NULL) && (y_21 != z_21)))
                _fail(z_21);
              else
                y_21 = z_21;
            }
            {
              t = not_null(v_21);
              {
                ATerm c_22 = NULL;
                t = a_0(t);
                {
                  a_22 = t;
                  {
                    ATerm d_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_22)), not_null(y_21));
                    {
                      d_22 = t;
                      if(((c_22 != NULL) && (c_22 != d_22)))
                        _fail(d_22);
                      else
                        c_22 = d_22;
                    }
                    t = not_null(c_22);
                  }
                }
              }
            }
            ;
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
            {
              ATerm x_14 = t;
              int b_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_22 = NULL,i_22 = NULL;
                  ATerm h_22 = NULL;
                  t = SSLgetAnnotations(not_null(u_21));
                  {
                    h_22 = t;
                    if(((g_22 != NULL) && (g_22 != h_22)))
                      _fail(h_22);
                    else
                      g_22 = h_22;
                  }
                  {
                    t = not_null(v_21);
                    {
                      ATerm k_22 = NULL;
                      t = a_0(t);
                      {
                        i_22 = t;
                        {
                          ATerm l_22 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_22)), not_null(g_22));
                          {
                            l_22 = t;
                            if(((k_22 != NULL) && (k_22 != l_22)))
                              _fail(l_22);
                            else
                              k_22 = l_22;
                          }
                          t = not_null(k_22);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(b_15);
                }
              else
                {
                  t = x_14;
                  {
                    ATerm o_22 = NULL,q_22 = NULL;
                    ATerm p_22 = NULL;
                    t = SSLgetAnnotations(not_null(u_21));
                    {
                      p_22 = t;
                      if(((o_22 != NULL) && (o_22 != p_22)))
                        _fail(p_22);
                      else
                        o_22 = p_22;
                    }
                    {
                      t = not_null(v_21);
                      {
                        ATerm s_22 = NULL;
                        t = a_0(t);
                        {
                          q_22 = t;
                          {
                            ATerm t_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_22)), not_null(o_22));
                            {
                              t_22 = t;
                              if(((s_22 != NULL) && (s_22 != t_22)))
                                _fail(t_22);
                              else
                                s_22 = t_22;
                            }
                            t = not_null(s_22);
                          }
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
ATerm bind_vars_0 (ATerm t)
{
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(d_15);
      t = Binding_0(t);
    }
  else
    {
      t = c_15;
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(j_15);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = i_15;
            {
              ATerm k_15 = t;
              int p_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(p_15);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = k_15;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm i_25 = NULL,j_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_Match_1))
    {
      j_25 = ATgetArgument(i_25, 0);
      {
        ATerm m_25 = NULL,o_25 = NULL;
        ATerm n_25 = NULL;
        t = SSLgetAnnotations(not_null(i_25));
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
        {
          t = not_null(j_25);
          {
            ATerm q_25 = NULL;
            t = v_59(t);
            {
              o_25 = t;
              {
                ATerm r_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(o_25)), not_null(m_25));
                {
                  r_25 = t;
                  if(((q_25 != NULL) && (q_25 != r_25)))
                    _fail(r_25);
                  else
                    q_25 = r_25;
                }
                t = not_null(q_25);
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
ATerm Build_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm b_26 = NULL,c_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym_Build_1))
    {
      c_26 = ATgetArgument(b_26, 0);
      {
        ATerm f_26 = NULL,h_26 = NULL;
        ATerm g_26 = NULL;
        t = SSLgetAnnotations(not_null(b_26));
        {
          g_26 = t;
          if(((f_26 != NULL) && (f_26 != g_26)))
            _fail(g_26);
          else
            f_26 = g_26;
        }
        {
          t = not_null(c_26);
          {
            ATerm l_26 = NULL;
            t = w_59(t);
            {
              h_26 = t;
              {
                ATerm m_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(h_26)), not_null(f_26));
                {
                  m_26 = t;
                  if(((l_26 != NULL) && (l_26 != m_26)))
                    _fail(m_26);
                  else
                    l_26 = m_26;
                }
                t = not_null(l_26);
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
ATerm VarScope_1 (ATerm t, ATerm g_67 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    t = term_e_11;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, g_67);
    return(t);
  }
  t = scope_2(t, z_2, a_3);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(r_15);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = q_15;
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(t_15);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = s_15;
            {
              ATerm v_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(y_15);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = v_15;
                  {
                    ATerm z_15 = t;
                    int a_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(a_16);
                        {
                          t = Rule_3(t, bind_vars_0, _id, _id);
                          {
                            t = Rule_3(t, _id, _id, unbound_vars_0);
                            t = Rule_3(t, _id, use_vars_0, _id);
                          }
                        }
                      }
                    else
                      {
                        t = z_15;
                        {
                          ATerm b_16 = t;
                          int c_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(c_16);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = b_16;
                              {
                                ATerm f_16 = t;
                                int m_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(m_16);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = f_16;
                                    {
                                      ATerm n_16 = t;
                                      int q_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(q_16);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = n_16;
                                          t = _all(t, unbound_vars_0);
                                        }
                                    }
                                  }
                              }
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
ATerm sdef_ud_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_SDef_3))
    {
      w_26 = ATgetArgument(v_26, 0);
      x_26 = ATgetArgument(v_26, 1);
      y_26 = ATgetArgument(v_26, 2);
      {
        ATerm r_16;
        r_16 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_16, not_null(w_26)));
          {
            ATerm b_3 (ATerm t)
            {
              t = term_j_11;
              return(t);
            }
            t = assert_1(t, b_3);
            {
              t = not_null(y_26);
              t = unbound_vars_0(t);
            }
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
ATerm table_push_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym__3))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      j_27 = ATgetArgument(g_27, 2);
      {
        ATerm u_16;
        u_16 = t;
        {
          ATerm n_27 = NULL;
          ATerm o_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(i_27));
          {
            ATerm x_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(y_16);
              }
            else
              {
                t = x_16;
                t = (ATerm) ATempty;
              }
            {
              o_27 = t;
              if(((n_27 != NULL) && (n_27 != o_27)))
                _fail(o_27);
              else
                n_27 = o_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_27), not_null(i_27), (ATerm) ATinsert(CheckATermList(not_null(n_27)), not_null(j_27)));
            t = table_put_0(t);
          }
        }
        t = u_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym__2))
    {
      x_27 = ATgetArgument(w_27, 0);
      y_27 = ATgetArgument(w_27, 1);
      {
        ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
        ATerm z_16;
        z_16 = t;
        {
          ATerm e_28 = NULL;
          ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
          t = n_71(t);
          {
            e_28 = t;
            {
              if(((b_28 != NULL) && (b_28 != e_28)))
                _fail(e_28);
              else
                b_28 = e_28;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_28), not_null(x_27), not_null(y_27));
                {
                  t = table_push_0(t);
                  {
                    ATerm a_17 = t;
                    int b_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_c_17);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(b_17);
                      }
                    else
                      {
                        t = a_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      f_28 = t;
                      u_27 :
                      if(((ATgetType(f_28) == AT_LIST) && !(ATisEmpty(f_28))))
                        {
                          g_28 = ATgetFirst((ATermList) f_28);
                          h_28 = (ATerm) ATgetNext((ATermList) f_28);
                          {
                            if(((c_28 != NULL) && (c_28 != g_28)))
                              _fail(g_28);
                            else
                              c_28 = g_28;
                            {
                              if(((d_28 != NULL) && (d_28 != h_28)))
                                _fail(h_28);
                              else
                                d_28 = h_28;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(b_28), term_c_17, (ATerm) ATinsert(CheckATermList(not_null(d_28)), (ATerm) ATinsert(CheckATermList(not_null(c_28)), not_null(x_27))));
                                t = table_put_0(t);
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
        }
        t = z_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineUnbound_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm m_28 = NULL;
    m_28 = t;
    {
      ATerm d_17;
      d_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_28)), term_z_11);
        {
          ATerm d_3 (ATerm t)
          {
            t = term_e_11;
            return(t);
          }
          t = assert_1(t, d_3);
        }
      }
      t = d_17;
    }
    return(t);
  }
  t = map_1(t, c_3);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm v_58 (ATerm))
{
  ATerm u_28 = NULL,x_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym_DynamicRules_1))
    {
      x_28 = ATgetArgument(u_28, 0);
      {
        ATerm a_29 = NULL,c_29 = NULL;
        ATerm b_29 = NULL;
        t = SSLgetAnnotations(not_null(u_28));
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
        {
          t = not_null(x_28);
          {
            ATerm e_29 = NULL;
            t = v_58(t);
            {
              c_29 = t;
              {
                ATerm f_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(c_29)), not_null(a_29));
                {
                  f_29 = t;
                  if(((e_29 != NULL) && (e_29 != f_29)))
                    _fail(f_29);
                  else
                    e_29 = f_29;
                }
                t = not_null(e_29);
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
ATerm Scope_2 (ATerm t, ATerm y_59 (ATerm), ATerm z_59 (ATerm))
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym_Scope_2))
    {
      r_29 = ATgetArgument(q_29, 0);
      s_29 = ATgetArgument(q_29, 1);
      {
        ATerm w_29 = NULL,y_29 = NULL;
        ATerm x_29 = NULL;
        t = SSLgetAnnotations(not_null(q_29));
        {
          x_29 = t;
          if(((w_29 != NULL) && (w_29 != x_29)))
            _fail(x_29);
          else
            w_29 = x_29;
        }
        {
          t = not_null(r_29);
          {
            ATerm a_30 = NULL;
            t = y_59(t);
            {
              y_29 = t;
              {
                t = not_null(s_29);
                {
                  ATerm v_30 = NULL;
                  t = z_59(t);
                  {
                    a_30 = t;
                    {
                      ATerm w_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(y_29), not_null(a_30)), not_null(w_29));
                      {
                        w_30 = t;
                        if(((v_30 != NULL) && (v_30 != w_30)))
                          _fail(w_30);
                        else
                          v_30 = w_30;
                      }
                      t = not_null(v_30);
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
ATerm tboundin_3 (ATerm t, ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm))
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, g_81, e_81);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      t = DynamicRules_1(t, e_81);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym_DynamicRules_1))
    {
      l_31 = ATgetArgument(k_31, 0);
      {
        t = not_null(l_31);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,h_32 = NULL,i_32 = NULL,k_32 = NULL;
  h_32 = t;
  w_31 :
  if(match_cons(h_32, sym_LRule_1))
    {
      i_32 = ATgetArgument(h_32, 0);
      x_31 :
      if(match_cons(i_32, sym_Rule_3))
        {
          y_31 = ATgetArgument(i_32, 0);
          z_31 = ATgetArgument(i_32, 1);
          a_32 = ATgetArgument(i_32, 2);
          {
            t = not_null(y_31);
            t = tvars_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(h_32, sym_Scope_2))
        {
          i_32 = ATgetArgument(h_32, 0);
          k_32 = ATgetArgument(h_32, 1);
          t = not_null(i_32);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym_Var_1))
    {
      v_32 = ATgetArgument(u_32, 0);
      t = (ATerm) ATinsert(ATempty, not_null(v_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym__2))
    {
      b_33 = ATgetArgument(a_33, 0);
      c_33 = ATgetArgument(a_33, 1);
      {
        t = not_null(b_33);
        {
          ATerm g_33 (ATerm t)
          {
            ATerm g_17 = t;
            int m_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_33);
                ;
                LocalPopChoice(m_17);
              }
            else
              {
                t = g_17;
                {
                  ATerm n_17 = t;
                  int o_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(c_33);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_67, e_3);
                      t = g_33(t);
                      ;
                      LocalPopChoice(o_17);
                    }
                  else
                    {
                      t = n_17;
                      t = Cons_2(t, _id, g_33);
                    }
                }
              }
            return(t);
          }
          t = g_33(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  ATerm p_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_70(t);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = p_17;
      {
        ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
        l_33 = t;
        k_33 :
        if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
          {
            m_33 = ATgetFirst((ATermList) l_33);
            n_33 = (ATerm) ATgetNext((ATermList) l_33);
            {
              ATerm q_33 = NULL,s_33 = NULL;
              ATerm v_17;
              v_17 = t;
              {
                ATerm r_33 = NULL;
                t = not_null(m_33);
                {
                  t = g_70(t);
                  {
                    r_33 = t;
                    if(((q_33 != NULL) && (q_33 != r_33)))
                      _fail(r_33);
                    else
                      q_33 = r_33;
                  }
                }
              }
              t = v_17;
              {
                ATerm t_33 = NULL;
                t = not_null(n_33);
                {
                  t = foldr_3(t, e_70, f_70, g_70);
                  {
                    t_33 = t;
                    if(((s_33 != NULL) && (s_33 != t_33)))
                      _fail(t_33);
                    else
                      s_33 = t_33;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(s_33));
                  t = f_70(t);
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
ATerm crush_3 (ATerm t, ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm y_78 (ATerm))
{
  ATerm b_34 = NULL;
  ATerm d_34 = NULL;
  b_34 = t;
  {
    ATerm e_34 = NULL;
    ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
    t = not_null(b_34);
    {
      e_34 = t;
      {
        t = SSL_explode_term(not_null(e_34));
        {
          g_34 = t;
          a_34 :
          if(match_cons(g_34, sym__2))
            {
              h_34 = ATgetArgument(g_34, 0);
              i_34 = ATgetArgument(g_34, 1);
              if(((d_34 != NULL) && (d_34 != i_34)))
                _fail(i_34);
              else
                d_34 = i_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_34);
      t = foldr_3(t, w_78, x_78, y_78);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym__2))
    {
      p_34 = ATgetArgument(o_34, 0);
      q_34 = ATgetArgument(o_34, 1);
      if(((p_34 != NULL) && (p_34 != q_34)))
        _fail(q_34);
      else
        p_34 = q_34;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm t_34 (ATerm t)
  {
    ATerm x_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_68, _id);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = x_17;
        t = Cons_2(t, _id, t_34);
      }
    return(t);
  }
  t = t_34(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm w_67 (ATerm), ATerm x_67 (ATerm))
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  w_34 :
  if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
    {
      y_34 = ATgetFirst((ATermList) x_34);
      z_34 = (ATerm) ATgetNext((ATermList) x_34);
      {
        t = x_67(t);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm c_35 = NULL;
            c_35 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_34), not_null(c_35));
              t = w_67(t);
            }
            return(t);
          }
          t = fetch_1(t, f_3);
        }
        t = not_null(z_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm o_67 (ATerm))
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym__2))
    {
      j_35 = ATgetArgument(i_35, 0);
      k_35 = ATgetArgument(i_35, 1);
      {
        t = not_null(j_35);
        {
          ATerm o_35 (ATerm t)
          {
            ATerm b_18 = t;
            int c_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(c_18);
              }
            else
              {
                t = b_18;
                {
                  ATerm d_18 = t;
                  int e_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(k_35);
                        return(t);
                      }
                      t = HdMember_p__2(t, o_67, g_3);
                      t = o_35(t);
                      ;
                      LocalPopChoice(e_18);
                    }
                  else
                    {
                      t = d_18;
                      t = Cons_2(t, _id, o_35);
                    }
                }
              }
            return(t);
          }
          t = o_35(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_0 (ATerm t)
{
  t = diff_1(t, eq_0);
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_74 (ATerm), ATerm k_74 (ATerm))
{
  ATerm r_35 = NULL,t_35 = NULL;
  ATerm f_18;
  f_18 = t;
  {
    ATerm s_35 = NULL;
    t = j_74(t);
    {
      s_35 = t;
      if(((r_35 != NULL) && (r_35 != s_35)))
        _fail(s_35);
      else
        r_35 = s_35;
    }
  }
  t = f_18;
  {
    ATerm u_35 = NULL;
    t = k_74(t);
    {
      u_35 = t;
      if(((t_35 != NULL) && (t_35 != u_35)))
        _fail(u_35);
      else
        t_35 = u_35;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_35), not_null(t_35));
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_36 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_84(t);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_35 = NULL;
              ATerm n_18;
              n_18 = t;
              {
                ATerm z_35 = NULL;
                t = h_84(t);
                {
                  z_35 = t;
                  if(((y_35 != NULL) && (y_35 != z_35)))
                    _fail(z_35);
                  else
                    y_35 = z_35;
                }
              }
              t = n_18;
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm j_3 (ATerm t)
                  {
                    t = not_null(y_35);
                    return(t);
                  }
                  t = split_2(t, a_36, j_3);
                  t = diff_0(t);
                  return(t);
                }
                ATerm i_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = i_84(t, h_3, a_36, i_3);
                {
                  ATerm k_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, k_3, union_0, _id);
                }
              }
              ;
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm l_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, l_3, union_0, a_36);
              }
            }
        }
      }
    return(t);
  }
  t = a_36(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm o_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = o_18;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, m_3, tboundin_3);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  d_36 :
  if(((ATgetType(e_36) == AT_LIST) && !(ATisEmpty(e_36))))
    {
      f_36 = ATgetFirst((ATermList) e_36);
      g_36 = (ATerm) ATgetNext((ATermList) e_36);
      t = not_null(g_36);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym__2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      {
        ATerm v_18;
        v_18 = t;
        {
          ATerm r_36 = NULL;
          ATerm s_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_36), not_null(o_36));
          {
            ATerm w_18 = t;
            int x_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(x_18);
              }
            else
              {
                t = w_18;
                t = (ATerm) ATempty;
              }
            {
              s_36 = t;
              if(((r_36 != NULL) && (r_36 != s_36)))
                _fail(s_36);
              else
                r_36 = s_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_36), not_null(o_36), not_null(r_36));
            t = table_put_0(t);
          }
        }
        t = v_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_68 (ATerm))
{
  ATerm v_36 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = Cons_2(t, e_68, v_36);
      }
    return(t);
  }
  t = v_36(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  ATerm a_19;
  a_19 = t;
  {
    ATerm d_37 = NULL;
    ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
    t = k_71(t);
    {
      d_37 = t;
      {
        if(((c_37 != NULL) && (c_37 != d_37)))
          _fail(d_37);
        else
          c_37 = d_37;
        {
          ATerm b_19 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_37), term_c_17);
              t = table_get_0(t);
              ;
              LocalPopChoice(c_19);
            }
          else
            {
              t = b_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            e_37 = t;
            z_36 :
            if(((ATgetType(e_37) == AT_LIST) && !(ATisEmpty(e_37))))
              {
                f_37 = ATgetFirst((ATermList) e_37);
                g_37 = (ATerm) ATgetNext((ATermList) e_37);
                {
                  if(((b_37 != NULL) && (b_37 != f_37)))
                    _fail(f_37);
                  else
                    b_37 = f_37;
                  {
                    if(((a_37 != NULL) && (a_37 != g_37)))
                      _fail(g_37);
                    else
                      a_37 = g_37;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(c_37), term_c_17, not_null(a_37));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_37);
                          {
                            ATerm n_3 (ATerm t)
                            {
                              ATerm h_37 = NULL;
                              h_37 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_37), not_null(h_37));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_3);
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
          }
        }
      }
    }
  }
  t = a_19;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm))
{
  ATerm d_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_78(t);
      t = l_78(t);
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = d_19;
      {
        t = l_78(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  ATerm j_19;
  j_19 = t;
  {
    ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
    r_37 = t;
    n_37 :
    if(match_cons(r_37, sym__3))
      {
        s_37 = ATgetArgument(r_37, 0);
        t_37 = ATgetArgument(r_37, 1);
        u_37 = ATgetArgument(r_37, 2);
        {
          if(((o_37 != NULL) && (o_37 != s_37)))
            _fail(s_37);
          else
            o_37 = s_37;
          {
            if(((p_37 != NULL) && (p_37 != t_37)))
              _fail(t_37);
            else
              p_37 = t_37;
            {
              if(((q_37 != NULL) && (q_37 != u_37)))
                _fail(u_37);
              else
                q_37 = u_37;
              t = SSL_table_put(not_null(o_37), not_null(p_37), not_null(q_37));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_19;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      t = SSL_table_get(not_null(z_37), not_null(a_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_71 (ATerm))
{
  ATerm i_38 = NULL;
  ATerm k_19;
  k_19 = t;
  {
    ATerm j_38 = NULL;
    ATerm k_38 = NULL;
    t = j_71(t);
    {
      j_38 = t;
      {
        if(((i_38 != NULL) && (i_38 != j_38)))
          _fail(j_38);
        else
          i_38 = j_38;
        {
          ATerm l_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), term_c_17);
          {
            ATerm o_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(q_19);
              }
            else
              {
                t = o_19;
                t = (ATerm) ATempty;
              }
            {
              l_38 = t;
              if(((k_38 != NULL) && (k_38 != l_38)))
                _fail(l_38);
              else
                k_38 = l_38;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_38), term_c_17, (ATerm) ATinsert(CheckATermList(not_null(k_38)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_19;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm l_71 (ATerm), ATerm m_71 (ATerm))
{
  t = begin_scope_1(t, l_71);
  {
    ATerm o_3 (ATerm t)
    {
      t = end_scope_1(t, l_71);
      return(t);
    }
    t = restore_always_2(t, m_71, o_3);
  }
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      t = term_e_11;
      return(t);
    }
    ATerm s_3 (ATerm t)
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_19;
          v_19 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = v_19;
          t = sdef_ud_0(t);
          ;
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                ;
                LocalPopChoice(x_19);
              }
            else
              {
                t = w_19;
                t = overlay_ud_0(t);
              }
          }
        }
      return(t);
    }
    t = scope_2(t, r_3, s_3);
    return(t);
  }
  t = scope_2(t, p_3, q_3);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_55 (ATerm), ATerm p_55 (ATerm))
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  t_38 :
  if(((ATgetType(u_38) == AT_LIST) && !(ATisEmpty(u_38))))
    {
      v_38 = ATgetFirst((ATermList) u_38);
      w_38 = (ATerm) ATgetNext((ATermList) u_38);
      {
        ATerm a_39 = NULL,c_39 = NULL;
        ATerm b_39 = NULL;
        t = SSLgetAnnotations(not_null(u_38));
        {
          b_39 = t;
          if(((a_39 != NULL) && (a_39 != b_39)))
            _fail(b_39);
          else
            a_39 = b_39;
        }
        {
          t = not_null(v_38);
          {
            ATerm e_39 = NULL;
            t = o_55(t);
            {
              c_39 = t;
              {
                t = not_null(w_38);
                {
                  ATerm g_39 = NULL;
                  t = p_55(t);
                  {
                    e_39 = t;
                    {
                      ATerm m_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_39)), not_null(c_39)), not_null(a_39));
                      {
                        m_39 = t;
                        if(((g_39 != NULL) && (g_39 != m_39)))
                          _fail(m_39);
                        else
                          g_39 = m_39;
                      }
                      t = not_null(g_39);
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
ATerm filter_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 (ATerm t)
            {
              t = filter_1(t, j_77);
              return(t);
            }
            t = Cons_2(t, j_77, t_3);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            {
              ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
              u_39 = t;
              t_39 :
              if(((ATgetType(u_39) == AT_LIST) && !(ATisEmpty(u_39))))
                {
                  v_39 = ATgetFirst((ATermList) u_39);
                  w_39 = (ATerm) ATgetNext((ATermList) u_39);
                  {
                    t = not_null(w_39);
                    t = filter_1(t, j_77);
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
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm i_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = i_20;
      {
        ATerm o_20;
        o_20 = t;
        {
          ATerm u_3 (ATerm t)
          {
            ATerm p_20 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_20;
              }
            return(t);
          }
          t = filter_1(t, u_3);
          t = Nil_0(t);
        }
        t = o_20;
      }
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm g_40 = NULL,h_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym_Strategies_1))
    {
      h_40 = ATgetArgument(g_40, 0);
      {
        ATerm k_40 = NULL,m_40 = NULL;
        ATerm l_40 = NULL;
        t = SSLgetAnnotations(not_null(g_40));
        {
          l_40 = t;
          if(((k_40 != NULL) && (k_40 != l_40)))
            _fail(l_40);
          else
            k_40 = l_40;
        }
        {
          t = not_null(h_40);
          {
            ATerm o_40 = NULL;
            t = s_55(t);
            {
              m_40 = t;
              {
                ATerm p_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(m_40)), not_null(k_40));
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
ATerm debug_0 (ATerm t)
{
  ATerm q_20;
  q_20 = t;
  {
    ATerm v_40 = NULL;
    ATerm w_40 = NULL;
    w_40 = t;
    if(((v_40 != NULL) && (v_40 != w_40)))
      _fail(w_40);
    else
      v_40 = w_40;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_12, (ATerm) ATinsert(ATempty, not_null(v_40)));
      t = printnl_0(t);
    }
  }
  t = q_20;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm z_40 = NULL;
    z_40 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_40), term_v_20);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, v_3);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  e_41 = t;
  d_41 :
  if(match_cons(e_41, sym__2))
    {
      f_41 = ATgetArgument(e_41, 0);
      g_41 = ATgetArgument(e_41, 1);
      {
        ATerm w_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_41), not_null(g_41));
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = w_20;
            t = SSL_addr(not_null(f_41), not_null(g_41));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm record_success_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm l_41 = NULL;
    l_41 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_41), term_v_20);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, w_3, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm))
{
  ATerm a_21;
  a_21 = t;
  {
    t = v_86(t);
    t = debug_0(t);
  }
  t = a_21;
  {
    ATerm b_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_21;
        g_21 = t;
        t = w_86(t);
        t = g_21;
        t = record_success_0(t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = b_21;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_and_fail_4 (ATerm t, ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_87(t);
        {
          ATerm j_21 = t;
          if((PushChoice() == 0))
            {
              t = o_87(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_21;
            }
        }
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        {
          t = term_k_21;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    return(t);
  }
  t = do_test_2(t, n_87, x_3);
  return(t);
}
ATerm apply_and_fail_3 (ATerm t, ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm m_87 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    t = term_e_13;
    return(t);
  }
  t = apply_and_fail_4(t, k_87, l_87, m_87, y_3);
  return(t);
}
ATerm test1_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_l_21;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = Strategies_1(t, defs_use_def_0);
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_i_8, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), term_s_4)))))), (ATerm) ATmakeAppl(sym_SDef_3, term_o_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_s_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4)))))), (ATerm) ATmakeAppl(sym_SDef_3, term_c_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_s_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_h_7), term_c_7))), term_s_4)))))));
    return(t);
  }
  t = apply_and_fail_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm p_41 = NULL;
    p_41 = t;
    o_41 :
    if(!(match_int(p_41, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, c_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm f_54 (ATerm), ATerm g_54 (ATerm))
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  v_41 :
  if(match_cons(w_41, sym__2))
    {
      x_41 = ATgetArgument(w_41, 0);
      y_41 = ATgetArgument(w_41, 1);
      {
        ATerm c_42 = NULL,e_42 = NULL;
        ATerm d_42 = NULL;
        t = SSLgetAnnotations(not_null(w_41));
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
        {
          t = not_null(x_41);
          {
            ATerm h_42 = NULL;
            t = f_54(t);
            {
              e_42 = t;
              {
                t = not_null(y_41);
                {
                  ATerm j_42 = NULL;
                  t = g_54(t);
                  {
                    h_42 = t;
                    {
                      ATerm k_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_42), not_null(h_42)), not_null(c_42));
                      {
                        k_42 = t;
                        if(((j_42 != NULL) && (j_42 != k_42)))
                          _fail(k_42);
                        else
                          j_42 = k_42;
                      }
                      t = not_null(j_42);
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
ATerm report_test_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      t = term_m_21;
      return(t);
    }
    t = debug_1(t, f_4);
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      t = term_n_21;
      return(t);
    }
    t = debug_1(t, g_4);
    return(t);
  }
  t = _2(t, d_4, e_4);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  s_42 = t;
  r_42 :
  if(match_cons(s_42, sym__2))
    {
      t_42 = ATgetArgument(s_42, 0);
      u_42 = ATgetArgument(s_42, 1);
      {
        ATerm q_21;
        q_21 = t;
        t = SSL_printnl(not_null(t_42), not_null(u_42));
        t = q_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm r_90 (ATerm))
{
  ATerm r_21;
  r_21 = t;
  {
    ATerm a_43 = NULL,c_43 = NULL;
    ATerm s_21;
    s_21 = t;
    {
      ATerm b_43 = NULL;
      t = r_90(t);
      {
        b_43 = t;
        if(((a_43 != NULL) && (a_43 != b_43)))
          _fail(b_43);
        else
          a_43 = b_43;
      }
    }
    t = s_21;
    {
      ATerm d_43 = NULL;
      d_43 = t;
      if(((c_43 != NULL) && (c_43 != d_43)))
        _fail(d_43);
      else
        c_43 = d_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_43)), not_null(a_43)));
        t = printnl_0(t);
      }
    }
  }
  t = r_21;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm t_86 (ATerm), ATerm u_86 (ATerm))
{
  t = t_86(t);
  {
    ATerm h_4 (ATerm t)
    {
      t = term_w_21;
      return(t);
    }
    t = debug_1(t, h_4);
    {
      t = init_record_0(t);
      {
        t = u_86(t);
        {
          t = report_test_0(t);
          t = check_for_failures_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm use_def_test_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    t = term_x_21;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = test1_0(t);
    {
      t = test2_0(t);
      {
        t = test3_0(t);
        {
          t = test4_0(t);
          {
            t = test5_0(t);
            {
              t = test6_0(t);
              {
                t = test7_0(t);
                {
                  t = test8_0(t);
                  {
                    t = test9_0(t);
                    {
                      t = test10_0(t);
                      {
                        t = test11_0(t);
                        t = test12_0(t);
                      }
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
  t = test_suite_2(t, i_4, j_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = use_def_test_0(t);
  return(t);
}
