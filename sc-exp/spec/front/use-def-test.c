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
Symbol sym_OpDeclQ_2;
Symbol sym_OpDeclInj_1;
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
Symbol sym_OpQ_2;
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
Symbol sym_SRDefT_4;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
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
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
Symbol sym_CongQ_2;
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
Symbol sym_SDefT_4;
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
  sym_OpDeclQ_2 = ATmakeSymbol("OpDeclQ", 2, ATfalse);
  ATprotectSymbol(sym_OpDeclQ_2);
  sym_OpDeclInj_1 = ATmakeSymbol("OpDeclInj", 1, ATfalse);
  ATprotectSymbol(sym_OpDeclInj_1);
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
  sym_OpQ_2 = ATmakeSymbol("OpQ", 2, ATfalse);
  ATprotectSymbol(sym_OpQ_2);
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
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
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
  sym_CongQ_2 = ATmakeSymbol("CongQ", 2, ATfalse);
  ATprotectSymbol(sym_CongQ_2);
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
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
ATerm term_n_32;
ATerm term_m_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_d_31;
ATerm term_l_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_e_17;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_z_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_r_4;
void init_constant_terms (void)
{
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_4);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_Var_1, term_v_4);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym_Match_1, term_w_4);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym_Build_1, term_w_4);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_Var_1, term_d_5);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_Var_1, term_f_5);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_Var_1, term_i_5);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_Var_1, term_h_5);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_n_5);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_Var_1, term_d_6);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_Build_1, term_g_5);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, (ATerm) ATempty);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Build_1, term_k_5);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Match_1, term_e_6);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Str_1, term_o_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Var_1, term_l_8);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Str_1, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Var_1, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Call_2, term_p_10, (ATerm) ATempty);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Match_1, term_t_9);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Seq_2, term_q_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_4, term_s_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_11);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Call_2, term_d_12, (ATerm) ATempty);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_LChoice_2, term_q_10, term_h_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Seq_2, term_l_12, term_x_4);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Seq_2, term_h_12, term_x_4);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_LChoice_2, term_q_10, term_x_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Var_1, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Match_1, term_j_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Str_1, term_e_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Build_1, term_j_13);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_14, term_q_10);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_App_2, term_q_10, term_j_13);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Match_1, term_q_8);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Var_1, term_r_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_23);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_h_32);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm test12_0_0 (ATerm);
ATerm test11_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm j_58 (ATerm), ATerm);
ATerm test10_0_0 (ATerm);
ATerm test9_0_0 (ATerm);
ATerm test8_0_0 (ATerm);
ATerm test7_0_0 (ATerm);
ATerm test6_0_0 (ATerm);
ATerm test5_0_0 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm apply_test_3_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm);
ATerm test2_0_0 (ATerm);
ATerm Nil_0_0 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm guardedlchoice_1_0 (ATerm r_70 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm);
ATerm lchoice_1_0 (ATerm q_70 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm);
ATerm try_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm restore_Bound_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm);
ATerm choice_1_0 (ATerm p_70 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm Context_0_0 (ATerm);
ATerm Unbound_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm x_74 (ATerm), ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm x_60 (ATerm), ATerm y_60 (ATerm), ATerm z_60 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm w_59 (ATerm), ATerm);
ATerm App_2_0 (ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm override_key_1_0 (ATerm w_74 (ATerm), ATerm);
ATerm Binding_0_0 (ATerm);
ATerm Var_1_0 (ATerm a_0 (ATerm), ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm x_62 (ATerm), ATerm);
ATerm Build_1_0 (ATerm y_62 (ATerm), ATerm);
ATerm VarScope_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm DefineBound_0_0 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm assert_1_0 (ATerm v_74 (ATerm), ATerm);
ATerm DefineUnbound_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm x_61 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Add1_0_0 (ATerm);
ATerm union_1_0 (ATerm y_70 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm crush_3_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm);
ATerm eq_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm);
ATerm diff_1_0 (ATerm u_70 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm split_2_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm);
ATerm free_vars_3_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm);
ATerm end_scope_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm begin_scope_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm scope_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_58 (ATerm), ATerm e_58 (ATerm), ATerm);
ATerm filter_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm defs_use_def_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm h_58 (ATerm), ATerm);
ATerm debug_0_0 (ATerm);
ATerm record_failure_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm record_success_0_0 (ATerm);
ATerm do_test_2_0 (ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm);
ATerm apply_and_fail_4_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm);
ATerm apply_and_fail_3_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm);
ATerm test1_0_0 (ATerm);
ATerm check_for_failures_0_0 (ATerm);
ATerm _2_0 (ATerm u_56 (ATerm), ATerm v_56 (ATerm), ATerm);
ATerm report_test_0_0 (ATerm);
ATerm init_record_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm debug_1_0 (ATerm z_93 (ATerm), ATerm);
ATerm test_suite_2_0 (ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm);
ATerm use_def_test_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_r_4;
    return(t);
  }
  ATerm d_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDefT_4, term_s_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_u_4, (ATerm) ATinsert(ATempty, term_x_4)), (ATerm)ATmakeAppl(sym_Call_2, term_u_4, (ATerm) ATinsert(ATempty, term_y_4)), term_z_4));
    return(t);
  }
  t = apply_test_3_0(c_0, def_use_def_0_0, d_0, t);
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = term_a_5;
    return(t);
  }
  ATerm g_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_g_5), term_e_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_h_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_k_5), term_j_5)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_g_5), term_e_5))), term_j_5))))));
    return(t);
  }
  t = apply_test_3_0(e_0, def_use_def_0_0, g_0, t);
  {
    ATerm i_0 (ATerm t)
    {
      t = term_l_5;
      return(t);
    }
    ATerm k_0 (ATerm t)
    {
      t = Strategies_1_0(defs_use_def_0_0, t);
      return(t);
    }
    ATerm l_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_m_5, (ATerm)ATinsert(ATempty, term_c_6), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_g_5), term_e_5)), (ATerm)ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_e_6), term_e_5))), term_j_5)), (ATerm) ATmakeAppl(sym_Seq_2, term_f_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_h_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_k_5), term_j_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_a_7, (ATerm) ATmakeAppl(sym_Op_2, term_b_7, (ATerm) ATinsert(ATinsert(ATempty, term_j_5), term_e_5)))), term_c_7))))), term_d_7))))));
      return(t);
    }
    t = apply_test_3_0(i_0, k_0, l_0, t);
  }
  return(t);
}
ATerm Overlays_1_0 (ATerm j_58 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  ATerm y_5 (ATerm t)
  {
    ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,u_5 = NULL;
    ATerm a_6 (ATerm t)
    {
      ATerm v_5 = NULL,w_5 = NULL;
      t = not_null(u_5);
      if(((v_5 != NULL) && (v_5 != t)))
        _fail(t);
      else
        v_5 = t;
      t = not_null(u_5);
      {
        ATerm x_5 = NULL;
        ATerm b_6 (ATerm t)
        {
          t = not_null(x_5);
          if(((w_5 != NULL) && (w_5 != t)))
            _fail(t);
          else
            w_5 = t;
          t = not_null(x_5);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(v_5)), not_null(s_5));
        if(((x_5 != NULL) && (x_5 != t)))
          _fail(t);
        else
          x_5 = t;
        t = b_6(t);
        t = not_null(w_5);
      }
      return(t);
    }
    t = not_null(o_5);
    if(((q_5 != NULL) && (q_5 != t)))
      _fail(t);
    else
      q_5 = t;
    t = not_null(p_5);
    if(((r_5 != NULL) && (r_5 != t)))
      _fail(t);
    else
      r_5 = t;
    t = not_null(o_5);
    {
      ATerm t_5 = NULL;
      ATerm z_5 (ATerm t)
      {
        t = not_null(t_5);
        if(((s_5 != NULL) && (s_5 != t)))
          _fail(t);
        else
          s_5 = t;
        t = not_null(t_5);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_5));
      if(((t_5 != NULL) && (t_5 != t)))
        _fail(t);
      else
        t_5 = t;
      t = z_5(t);
      t = not_null(r_5);
      t = j_58(t);
      if(((u_5 != NULL) && (u_5 != t)))
        _fail(t);
      else
        u_5 = t;
      t = a_6(t);
    }
    return(t);
  }
  if(((o_5 != NULL) && (o_5 != t)))
    _fail(t);
  else
    o_5 = t;
  t = not_null(o_5);
  if(match_cons(t, sym_Overlays_1))
    {
      p_5 = ATgetArgument(t, 0);
      t = y_5(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = term_e_7;
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    t = Overlays_1_0(defs_use_def_0_0, t);
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_f_5, (ATerm)ATinsert(ATinsert(ATempty, term_l_8), term_v_4), (ATerm) ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), term_r_9), term_w_4)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_k_8, (ATerm)ATinsert(ATinsert(ATempty, term_l_8), term_v_4), (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, term_p_8), term_w_4)))))));
    return(t);
  }
  t = apply_and_fail_3_0(n_0, o_0, q_0, t);
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = term_u_9;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4)), (ATerm)ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_t_9), term_q_8)), term_t_10)));
    return(t);
  }
  t = apply_test_3_0(r_0, def_use_def_0_0, t_0, t);
  {
    ATerm u_0 (ATerm t)
    {
      t = term_u_10;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4)), (ATerm)ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_t_9), term_q_8)), term_z_4)));
      return(t);
    }
    t = apply_and_fail_3_0(u_0, def_use_def_0_0, v_0, t);
  }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = term_v_10;
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4)), (ATerm)ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_t_9), term_q_8)), term_t_10));
    return(t);
  }
  t = apply_test_3_0(x_0, def_use_def_0_0, y_0, t);
  {
    ATerm z_0 (ATerm t)
    {
      t = term_w_10;
      return(t);
    }
    ATerm a_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4)), (ATerm)ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_t_9), term_q_8)), term_z_4));
      return(t);
    }
    t = apply_and_fail_3_0(z_0, def_use_def_0_0, a_1, t);
  }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATempty, term_q_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATinsert(ATempty, term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATempty, term_w_4))))));
    return(t);
  }
  t = apply_test_3_0(b_1, def_use_def_0_0, c_1, t);
  {
    ATerm d_1 (ATerm t)
    {
      t = term_k_11;
      return(t);
    }
    ATerm e_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATempty, term_w_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATinsert(ATempty, term_w_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4)))));
      return(t);
    }
    t = apply_and_fail_3_0(d_1, def_use_def_0_0, e_1, t);
    {
      ATerm f_1 (ATerm t)
      {
        t = term_l_11;
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATempty, term_w_4))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATinsert(ATempty, term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))))));
        return(t);
      }
      t = apply_and_fail_3_0(f_1, def_use_def_0_0, g_1, t);
    }
  }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_m_11;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_m_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATempty, term_w_4)))));
    return(t);
  }
  t = apply_test_3_0(h_1, def_use_def_0_0, i_1, t);
  {
    ATerm j_1 (ATerm t)
    {
      t = term_n_12;
      return(t);
    }
    ATerm k_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_y_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATempty, term_w_4)))));
      return(t);
    }
    t = apply_and_fail_3_0(j_1, def_use_def_0_0, k_1, t);
  }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_f_13;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATinsert(ATempty, term_w_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATempty, term_w_4)))));
    return(t);
  }
  t = apply_test_3_0(l_1, def_use_def_0_0, m_1, t);
  {
    ATerm n_1 (ATerm t)
    {
      t = term_g_13;
      return(t);
    }
    ATerm o_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATinsert(ATempty, term_w_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4)))));
      return(t);
    }
    t = apply_and_fail_3_0(n_1, def_use_def_0_0, o_1, t);
  }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_k_13, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_i_13), term_k_14))), term_i_14)))));
    return(t);
  }
  t = apply_and_fail_3_0(p_1, def_use_def_0_0, q_1, t);
  {
    ATerm r_1 (ATerm t)
    {
      t = term_l_14;
      return(t);
    }
    ATerm s_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_k_13, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_m_14), term_i_14)))));
      return(t);
    }
    t = apply_test_3_0(r_1, def_use_def_0_0, s_1, t);
    {
      ATerm t_1 (ATerm t)
      {
        t = term_n_14;
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_i_13), term_k_14))), term_i_14))));
        return(t);
      }
      t = apply_and_fail_3_0(t_1, def_use_def_0_0, u_1, t);
    }
  }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    t = term_o_14;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_8), (ATerm) ATmakeAppl(sym_Seq_2, term_p_14, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATempty, term_q_8))), term_w_4)))))));
    return(t);
  }
  t = apply_test_3_0(v_1, def_use_def_0_0, w_1, t);
  {
    ATerm x_1 (ATerm t)
    {
      t = term_q_14;
      return(t);
    }
    ATerm y_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_8), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, term_s_14), term_w_4))), term_q_8))))));
      return(t);
    }
    t = apply_and_fail_3_0(x_1, def_use_def_0_0, y_1, t);
  }
  return(t);
}
ATerm apply_test_3_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_90(t);
        t = m_90(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = term_v_14;
        t = debug_0_0(t);
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(l_90, z_1, t);
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_w_14;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATempty, term_q_8))), term_w_4)))));
    return(t);
  }
  t = apply_test_3_0(a_2, def_use_def_0_0, b_2, t);
  {
    ATerm c_2 (ATerm t)
    {
      t = term_x_14;
      return(t);
    }
    ATerm d_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, term_s_14), term_w_4))), term_q_8)))));
      return(t);
    }
    t = apply_and_fail_3_0(c_2, def_use_def_0_0, d_2, t);
  }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm g_6 = NULL;
  ATerm m_6 (ATerm t)
  {
    ATerm h_6 = NULL,i_6 = NULL,k_6 = NULL;
    t = not_null(g_6);
    if(((h_6 != NULL) && (h_6 != t)))
      _fail(t);
    else
      h_6 = t;
    t = not_null(g_6);
    {
      ATerm y_14;
      y_14 = t;
      {
        ATerm j_6 = NULL;
        ATerm n_6 (ATerm t)
        {
          t = not_null(j_6);
          if(((i_6 != NULL) && (i_6 != t)))
            _fail(t);
          else
            i_6 = t;
          t = not_null(j_6);
          return(t);
        }
        t = SSLgetAnnotations(not_null(h_6));
        if(((j_6 != NULL) && (j_6 != t)))
          _fail(t);
        else
          j_6 = t;
        t = n_6(t);
      }
      t = y_14;
      {
        ATerm l_6 = NULL;
        ATerm o_6 (ATerm t)
        {
          t = not_null(l_6);
          if(((k_6 != NULL) && (k_6 != t)))
            _fail(t);
          else
            k_6 = t;
          t = not_null(l_6);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(i_6));
        if(((l_6 != NULL) && (l_6 != t)))
          _fail(t);
        else
          l_6 = t;
        t = o_6(t);
        t = not_null(k_6);
      }
    }
    return(t);
  }
  if(((g_6 != NULL) && (g_6 != t)))
    _fail(t);
  else
    g_6 = t;
  t = not_null(g_6);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm overlay_ud_0_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  ATerm y_6 (ATerm t)
  {
    ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
    t = not_null(s_6);
    if(((v_6 != NULL) && (v_6 != t)))
      _fail(t);
    else
      v_6 = t;
    t = not_null(t_6);
    if(((w_6 != NULL) && (w_6 != t)))
      _fail(t);
    else
      w_6 = t;
    t = not_null(u_6);
    if(((x_6 != NULL) && (x_6 != t)))
      _fail(t);
    else
      x_6 = t;
    t = not_null(r_6);
    {
      ATerm z_14;
      z_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_15, not_null(v_6)));
      {
        ATerm e_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = assert_1_0(e_2, t);
        t = not_null(w_6);
        t = DefineBound_0_0(t);
        t = not_null(x_6);
        t = use_vars_0_0(t);
      }
      t = z_14;
    }
    return(t);
  }
  if(((r_6 != NULL) && (r_6 != t)))
    _fail(t);
  else
    r_6 = t;
  t = not_null(r_6);
  if(match_cons(t, sym_Overlay_3))
    {
      s_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
      u_6 = ATgetArgument(t, 2);
      t = y_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  ATerm h_8 (ATerm t)
  {
    ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
    t = not_null(k_7);
    if(((r_7 != NULL) && (r_7 != t)))
      _fail(t);
    else
      r_7 = t;
    t = not_null(l_7);
    if(((q_7 != NULL) && (q_7 != t)))
      _fail(t);
    else
      q_7 = t;
    t = not_null(m_7);
    if(((s_7 != NULL) && (s_7 != t)))
      _fail(t);
    else
      s_7 = t;
    t = not_null(g_7);
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = not_null(h_7);
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    t = not_null(i_7);
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    t = not_null(j_7);
    {
      ATerm c_15;
      c_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_15, not_null(r_7)));
      {
        ATerm f_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = assert_1_0(f_2, t);
        t = not_null(s_7);
        t = declared_vars_0_0(t);
        t = DefineBound_0_0(t);
        t = not_null(t_7);
        t = unbound_vars_0_0(t);
        t = not_null(u_7);
        t = unbound_vars_0_0(t);
        t = not_null(v_7);
        t = unbound_vars_0_0(t);
      }
      t = c_15;
    }
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
    t = not_null(k_7);
    if(((x_7 != NULL) && (x_7 != t)))
      _fail(t);
    else
      x_7 = t;
    t = not_null(l_7);
    if(((w_7 != NULL) && (w_7 != t)))
      _fail(t);
    else
      w_7 = t;
    t = not_null(m_7);
    if(((y_7 != NULL) && (y_7 != t)))
      _fail(t);
    else
      y_7 = t;
    t = not_null(g_7);
    if(((z_7 != NULL) && (z_7 != t)))
      _fail(t);
    else
      z_7 = t;
    t = not_null(h_7);
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
    t = not_null(i_7);
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = not_null(j_7);
    {
      ATerm e_15;
      e_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_15, not_null(x_7)));
      {
        ATerm g_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = assert_1_0(g_2, t);
        t = not_null(y_7);
        t = declared_vars_0_0(t);
        t = DefineBound_0_0(t);
        t = not_null(z_7);
        t = bind_vars_0_0(t);
        t = not_null(a_8);
        t = unbound_vars_0_0(t);
        t = not_null(b_8);
        t = use_vars_0_0(t);
      }
      t = e_15;
    }
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
    t = not_null(k_7);
    if(((d_8 != NULL) && (d_8 != t)))
      _fail(t);
    else
      d_8 = t;
    t = not_null(l_7);
    if(((c_8 != NULL) && (c_8 != t)))
      _fail(t);
    else
      c_8 = t;
    t = not_null(n_7);
    if(((e_8 != NULL) && (e_8 != t)))
      _fail(t);
    else
      e_8 = t;
    t = not_null(o_7);
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    t = not_null(p_7);
    if(((f_8 != NULL) && (f_8 != t)))
      _fail(t);
    else
      f_8 = t;
    t = not_null(j_7);
    {
      ATerm d_17;
      d_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_17, not_null(d_8)));
      {
        ATerm h_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = assert_1_0(h_2, t);
        t = not_null(e_8);
        t = bind_vars_0_0(t);
        t = not_null(f_8);
        t = unbound_vars_0_0(t);
        t = not_null(g_8);
        t = use_vars_0_0(t);
      }
      t = d_17;
    }
    return(t);
  }
  if(((j_7 != NULL) && (j_7 != t)))
    _fail(t);
  else
    j_7 = t;
  t = not_null(j_7);
  if(match_cons(t, sym_RDefT_4))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
      m_7 = ATgetArgument(t, 2);
      f_7 = ATgetArgument(t, 3);
      t = not_null(f_7);
      if(match_cons(t, sym_StratRule_3))
        {
          g_7 = ATgetArgument(t, 0);
          h_7 = ATgetArgument(t, 1);
          i_7 = ATgetArgument(t, 2);
          t = h_8(t);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              g_7 = ATgetArgument(t, 0);
              h_7 = ATgetArgument(t, 1);
              i_7 = ATgetArgument(t, 2);
              t = i_8(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          k_7 = ATgetArgument(t, 0);
          l_7 = ATgetArgument(t, 1);
          m_7 = ATgetArgument(t, 2);
          t = not_null(m_7);
          if(match_cons(t, sym_Rule_3))
            {
              n_7 = ATgetArgument(t, 0);
              o_7 = ATgetArgument(t, 1);
              p_7 = ATgetArgument(t, 2);
              t = j_8(t);
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
ATerm guardedlchoice_1_0 (ATerm r_70 (ATerm), ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = GuardedLChoice_3_0(r_70, r_70, _id, t);
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = GuardedLChoice_3_0(_id, _id, r_70, t);
    return(t);
  }
  t = abstract_choice_2_0(i_2, j_2, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
  ATerm j_9 (ATerm t)
  {
    ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,b_9 = NULL;
    ATerm l_9 (ATerm t)
    {
      ATerm c_9 = NULL,d_9 = NULL;
      ATerm m_9 (ATerm t)
      {
        ATerm e_9 = NULL,f_9 = NULL;
        ATerm n_9 (ATerm t)
        {
          ATerm g_9 = NULL,h_9 = NULL;
          t = not_null(f_9);
          if(((g_9 != NULL) && (g_9 != t)))
            _fail(t);
          else
            g_9 = t;
          t = not_null(f_9);
          {
            ATerm i_9 = NULL;
            ATerm o_9 (ATerm t)
            {
              t = not_null(i_9);
              if(((h_9 != NULL) && (h_9 != t)))
                _fail(t);
              else
                h_9 = t;
              t = not_null(i_9);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(c_9), not_null(e_9), not_null(g_9)), not_null(z_8));
            if(((i_9 != NULL) && (i_9 != t)))
              _fail(t);
            else
              i_9 = t;
            t = o_9(t);
            t = not_null(h_9);
          }
          return(t);
        }
        t = not_null(d_9);
        if(((e_9 != NULL) && (e_9 != t)))
          _fail(t);
        else
          e_9 = t;
        t = not_null(y_8);
        t = m_63(t);
        if(((f_9 != NULL) && (f_9 != t)))
          _fail(t);
        else
          f_9 = t;
        t = n_9(t);
        return(t);
      }
      t = not_null(b_9);
      if(((c_9 != NULL) && (c_9 != t)))
        _fail(t);
      else
        c_9 = t;
      t = not_null(x_8);
      t = l_63(t);
      if(((d_9 != NULL) && (d_9 != t)))
        _fail(t);
      else
        d_9 = t;
      t = m_9(t);
      return(t);
    }
    t = not_null(r_8);
    if(((v_8 != NULL) && (v_8 != t)))
      _fail(t);
    else
      v_8 = t;
    t = not_null(s_8);
    if(((w_8 != NULL) && (w_8 != t)))
      _fail(t);
    else
      w_8 = t;
    t = not_null(t_8);
    if(((x_8 != NULL) && (x_8 != t)))
      _fail(t);
    else
      x_8 = t;
    t = not_null(u_8);
    if(((y_8 != NULL) && (y_8 != t)))
      _fail(t);
    else
      y_8 = t;
    t = not_null(r_8);
    {
      ATerm a_9 = NULL;
      ATerm k_9 (ATerm t)
      {
        t = not_null(a_9);
        if(((z_8 != NULL) && (z_8 != t)))
          _fail(t);
        else
          z_8 = t;
        t = not_null(a_9);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_8));
      if(((a_9 != NULL) && (a_9 != t)))
        _fail(t);
      else
        a_9 = t;
      t = k_9(t);
      t = not_null(w_8);
      t = k_63(t);
      if(((b_9 != NULL) && (b_9 != t)))
        _fail(t);
      else
        b_9 = t;
      t = l_9(t);
    }
    return(t);
  }
  if(((r_8 != NULL) && (r_8 != t)))
    _fail(t);
  else
    r_8 = t;
  t = not_null(r_8);
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
      u_8 = ATgetArgument(t, 2);
      t = j_9(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lchoice_1_0 (ATerm q_70 (ATerm), ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = LChoice_2_0(q_70, _id, t);
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = LChoice_2_0(_id, q_70, t);
    return(t);
  }
  t = abstract_choice_2_0(k_2, l_2, t);
  return(t);
}
ATerm LChoice_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  ATerm j_10 (ATerm t)
  {
    ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,d_10 = NULL;
    ATerm l_10 (ATerm t)
    {
      ATerm e_10 = NULL,f_10 = NULL;
      ATerm m_10 (ATerm t)
      {
        ATerm g_10 = NULL,h_10 = NULL;
        t = not_null(f_10);
        if(((g_10 != NULL) && (g_10 != t)))
          _fail(t);
        else
          g_10 = t;
        t = not_null(f_10);
        {
          ATerm i_10 = NULL;
          ATerm n_10 (ATerm t)
          {
            t = not_null(i_10);
            if(((h_10 != NULL) && (h_10 != t)))
              _fail(t);
            else
              h_10 = t;
            t = not_null(i_10);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(e_10), not_null(g_10)), not_null(b_10));
          if(((i_10 != NULL) && (i_10 != t)))
            _fail(t);
          else
            i_10 = t;
          t = n_10(t);
          t = not_null(h_10);
        }
        return(t);
      }
      t = not_null(d_10);
      if(((e_10 != NULL) && (e_10 != t)))
        _fail(t);
      else
        e_10 = t;
      t = not_null(a_10);
      t = h_63(t);
      if(((f_10 != NULL) && (f_10 != t)))
        _fail(t);
      else
        f_10 = t;
      t = m_10(t);
      return(t);
    }
    t = not_null(v_9);
    if(((y_9 != NULL) && (y_9 != t)))
      _fail(t);
    else
      y_9 = t;
    t = not_null(w_9);
    if(((z_9 != NULL) && (z_9 != t)))
      _fail(t);
    else
      z_9 = t;
    t = not_null(x_9);
    if(((a_10 != NULL) && (a_10 != t)))
      _fail(t);
    else
      a_10 = t;
    t = not_null(v_9);
    {
      ATerm c_10 = NULL;
      ATerm k_10 (ATerm t)
      {
        t = not_null(c_10);
        if(((b_10 != NULL) && (b_10 != t)))
          _fail(t);
        else
          b_10 = t;
        t = not_null(c_10);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_9));
      if(((c_10 != NULL) && (c_10 != t)))
        _fail(t);
      else
        c_10 = t;
      t = k_10(t);
      t = not_null(z_9);
      t = g_63(t);
      if(((d_10 != NULL) && (d_10 != t)))
        _fail(t);
      else
        d_10 = t;
      t = l_10(t);
    }
    return(t);
  }
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  t = not_null(v_9);
  if(match_cons(t, sym_LChoice_2))
    {
      w_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
      t = j_10(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_81(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
    }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
      ATerm i_11 (ATerm t)
      {
        ATerm d_11 = NULL;
        t = not_null(y_10);
        if(((d_11 != NULL) && (d_11 != t)))
          _fail(t);
        else
          d_11 = t;
        t = not_null(x_10);
        {
          ATerm q_17 = t;
          int r_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_17;
              y_17 = t;
              {
                ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, term_z_17, not_null(d_11));
                t = table_get_0_0(t);
                if(((e_11 != NULL) && (e_11 != t)))
                  _fail(t);
                else
                  e_11 = t;
                t = not_null(e_11);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_11 = ATgetFirst((ATermList) t);
                    h_11 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(f_11);
                    if(match_cons(t, sym_Defined_1))
                      {
                        g_11 = ATgetArgument(t, 0);
                        t = not_null(e_11);
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
              t = y_17;
              ;
              LocalPopChoice(r_17);
            }
          else
            {
              t = q_17;
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), (ATerm) ATinsert(ATempty, term_g_18));
            }
        }
        return(t);
      }
      if(((x_10 != NULL) && (x_10 != t)))
        _fail(t);
      else
        x_10 = t;
      t = not_null(x_10);
      if(match_cons(t, sym__2))
        {
          y_10 = ATgetArgument(t, 0);
          z_10 = ATgetArgument(t, 1);
          t = not_null(z_10);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_11 = ATgetFirst((ATermList) t);
              c_11 = (ATerm) ATgetNext((ATermList) t);
              t = not_null(a_11);
              if(match_cons(t, sym_Defined_1))
                {
                  b_11 = ATgetArgument(t, 0);
                  t = not_null(y_10);
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm h_18 = t;
                      int i_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(x_10);
                          ;
                          LocalPopChoice(i_18);
                        }
                      else
                        {
                          t = h_18;
                          t = i_11(t);
                        }
                    }
                  else
                    {
                      t = i_11(t);
                    }
                }
              else
                {
                  t = not_null(y_10);
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = not_null(x_10);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              t = not_null(y_10);
              if(match_cons(t, sym_Scopes_0))
                {
                  t = not_null(x_10);
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
    t = try_1_0(n_2, t);
    return(t);
  }
  t = map_1_0(m_2, t);
  t = restore_Bound_0_0(t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  ATerm x_11 (ATerm t)
  {
    ATerm q_11 = NULL,r_11 = NULL;
    t = not_null(o_11);
    if(((r_11 != NULL) && (r_11 != t)))
      _fail(t);
    else
      r_11 = t;
    t = not_null(p_11);
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    t = not_null(q_11);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
        ATerm y_11 (ATerm t)
        {
          ATerm v_11 = NULL,w_11 = NULL;
          t = not_null(t_11);
          if(((v_11 != NULL) && (v_11 != t)))
            _fail(t);
          else
            v_11 = t;
          t = not_null(u_11);
          if(((w_11 != NULL) && (w_11 != t)))
            _fail(t);
          else
            w_11 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(r_11), not_null(v_11), not_null(w_11));
          t = table_put_0_0(t);
          return(t);
        }
        if(((s_11 != NULL) && (s_11 != t)))
          _fail(t);
        else
          s_11 = t;
        t = not_null(s_11);
        if(match_cons(t, sym__2))
          {
            t_11 = ATgetArgument(t, 0);
            u_11 = ATgetArgument(t, 1);
            t = y_11(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1_0(o_2, t);
    }
    return(t);
  }
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  t = not_null(n_11);
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
      t = x_11(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_12 = NULL;
  ATerm c_12 (ATerm t)
  {
    ATerm b_12 = NULL;
    t = not_null(a_12);
    if(((b_12 != NULL) && (b_12 != t)))
      _fail(t);
    else
      b_12 = t;
    t = not_null(a_12);
    t = SSL_table_destroy(not_null(b_12));
    return(t);
  }
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = c_12(t);
  return(t);
}
ATerm restore_Bound_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  ATerm g_12 (ATerm t)
  {
    ATerm f_12 = NULL;
    t = not_null(e_12);
    if(((f_12 != NULL) && (f_12 != t)))
      _fail(t);
    else
      f_12 = t;
    t = not_null(e_12);
    {
      ATerm j_18;
      j_18 = t;
      t = term_z_17;
      t = table_destroy_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_z_17, not_null(f_12));
      t = table_putlist_0_0(t);
      t = j_18;
    }
    return(t);
  }
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = g_12(t);
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm i_12 = NULL;
  ATerm k_12 (ATerm t)
  {
    ATerm j_12 = NULL;
    t = not_null(i_12);
    if(((j_12 != NULL) && (j_12 != t)))
      _fail(t);
    else
      j_12 = t;
    t = not_null(i_12);
    t = SSL_table_keys(not_null(j_12));
    return(t);
  }
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = k_12(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_12 = NULL;
  ATerm u_12 (ATerm t)
  {
    ATerm p_12 = NULL;
    t = not_null(o_12);
    if(((p_12 != NULL) && (p_12 != t)))
      _fail(t);
    else
      p_12 = t;
    t = not_null(o_12);
    t = table_keys_0_0(t);
    {
      ATerm p_2 (ATerm t)
      {
        ATerm q_12 = NULL;
        ATerm v_12 (ATerm t)
        {
          ATerm r_12 = NULL,s_12 = NULL;
          t = not_null(q_12);
          if(((r_12 != NULL) && (r_12 != t)))
            _fail(t);
          else
            r_12 = t;
          t = not_null(q_12);
          {
            ATerm t_12 = NULL;
            ATerm w_12 (ATerm t)
            {
              t = not_null(t_12);
              if(((s_12 != NULL) && (s_12 != t)))
                _fail(t);
              else
                s_12 = t;
              t = not_null(t_12);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), not_null(r_12));
            t = table_get_0_0(t);
            if(((t_12 != NULL) && (t_12 != t)))
              _fail(t);
            else
              t_12 = t;
            t = w_12(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), not_null(s_12));
          }
          return(t);
        }
        if(((q_12 != NULL) && (q_12 != t)))
          _fail(t);
        else
          q_12 = t;
        t = v_12(t);
        return(t);
      }
      t = map_1_0(p_2, t);
    }
    return(t);
  }
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  t = u_12(t);
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = term_z_17;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,b_13 = NULL;
  ATerm k_18;
  k_18 = t;
  {
    ATerm a_13 = NULL;
    ATerm d_13 (ATerm t)
    {
      t = not_null(a_13);
      if(((z_12 != NULL) && (z_12 != t)))
        _fail(t);
      else
        z_12 = t;
      t = not_null(a_13);
      return(t);
    }
    t = save_Bound_0_0(t);
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = d_13(t);
  }
  t = k_18;
  t = n_70(t);
  {
    ATerm l_18;
    l_18 = t;
    {
      ATerm c_13 = NULL;
      ATerm e_13 (ATerm t)
      {
        t = not_null(c_13);
        if(((b_13 != NULL) && (b_13 != t)))
          _fail(t);
        else
          b_13 = t;
        t = not_null(z_12);
        t = restore_Bound_0_0(t);
        return(t);
      }
      t = save_Bound_0_0(t);
      if(((c_13 != NULL) && (c_13 != t)))
        _fail(t);
      else
        c_13 = t;
      t = e_13(t);
    }
    t = l_18;
    t = o_70(t);
    {
      ATerm m_18;
      m_18 = t;
      t = not_null(b_13);
      t = isect_Bound_0_0(t);
      t = m_18;
    }
  }
  return(t);
}
ATerm choice_1_0 (ATerm p_70 (ATerm), ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    t = Choice_2_0(p_70, _id, t);
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = Choice_2_0(_id, p_70, t);
    return(t);
  }
  t = abstract_choice_2_0(q_2, r_2, t);
  return(t);
}
ATerm Choice_2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  ATerm z_13 (ATerm t)
  {
    ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,t_13 = NULL;
    ATerm b_14 (ATerm t)
    {
      ATerm u_13 = NULL,v_13 = NULL;
      ATerm c_14 (ATerm t)
      {
        ATerm w_13 = NULL,x_13 = NULL;
        t = not_null(v_13);
        if(((w_13 != NULL) && (w_13 != t)))
          _fail(t);
        else
          w_13 = t;
        t = not_null(v_13);
        {
          ATerm y_13 = NULL;
          ATerm d_14 (ATerm t)
          {
            t = not_null(y_13);
            if(((x_13 != NULL) && (x_13 != t)))
              _fail(t);
            else
              x_13 = t;
            t = not_null(y_13);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(u_13), not_null(w_13)), not_null(r_13));
          if(((y_13 != NULL) && (y_13 != t)))
            _fail(t);
          else
            y_13 = t;
          t = d_14(t);
          t = not_null(x_13);
        }
        return(t);
      }
      t = not_null(t_13);
      if(((u_13 != NULL) && (u_13 != t)))
        _fail(t);
      else
        u_13 = t;
      t = not_null(q_13);
      t = f_62(t);
      if(((v_13 != NULL) && (v_13 != t)))
        _fail(t);
      else
        v_13 = t;
      t = c_14(t);
      return(t);
    }
    t = not_null(l_13);
    if(((o_13 != NULL) && (o_13 != t)))
      _fail(t);
    else
      o_13 = t;
    t = not_null(m_13);
    if(((p_13 != NULL) && (p_13 != t)))
      _fail(t);
    else
      p_13 = t;
    t = not_null(n_13);
    if(((q_13 != NULL) && (q_13 != t)))
      _fail(t);
    else
      q_13 = t;
    t = not_null(l_13);
    {
      ATerm s_13 = NULL;
      ATerm a_14 (ATerm t)
      {
        t = not_null(s_13);
        if(((r_13 != NULL) && (r_13 != t)))
          _fail(t);
        else
          r_13 = t;
        t = not_null(s_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_13));
      if(((s_13 != NULL) && (s_13 != t)))
        _fail(t);
      else
        s_13 = t;
      t = a_14(t);
      t = not_null(p_13);
      t = e_62(t);
      if(((t_13 != NULL) && (t_13 != t)))
        _fail(t);
      else
        t_13 = t;
      t = b_14(t);
    }
    return(t);
  }
  if(((l_13 != NULL) && (l_13 != t)))
    _fail(t);
  else
    l_13 = t;
  t = not_null(l_13);
  if(match_cons(t, sym_Choice_2))
    {
      m_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
      t = z_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm n_18;
  n_18 = t;
  {
    ATerm f_14 = NULL;
    ATerm g_14 = NULL;
    ATerm h_14 (ATerm t)
    {
      t = not_null(g_14);
      if(((f_14 != NULL) && (f_14 != t)))
        _fail(t);
      else
        f_14 = t;
      t = not_null(g_14);
      return(t);
    }
    if(((g_14 != NULL) && (g_14 != t)))
      _fail(t);
    else
      g_14 = t;
    t = h_14(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_18, not_null(f_14));
    t = printnl_0_0(t);
  }
  t = n_18;
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm g_15 = NULL;
  ATerm r_16 (ATerm t)
  {
    ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
    t = not_null(g_15);
    if(((h_15 != NULL) && (h_15 != t)))
      _fail(t);
    else
      h_15 = t;
    t = not_null(g_15);
    if(((i_15 != NULL) && (i_15 != t)))
      _fail(t);
    else
      i_15 = t;
    t = not_null(g_15);
    {
      ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
      ATerm x_16 (ATerm t)
      {
        t = not_null(m_15);
        if(((j_15 != NULL) && (j_15 != t)))
          _fail(t);
        else
          j_15 = t;
        t = not_null(k_15);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm s_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = rewrite_1_0(s_2, t);
        if(((k_15 != NULL) && (k_15 != t)))
          _fail(t);
        else
          k_15 = t;
        t = not_null(k_15);
        if(match_cons(t, sym_Defined_2))
          {
            l_15 = ATgetArgument(t, 0);
            m_15 = ATgetArgument(t, 1);
            t = not_null(l_15);
            if(match_string(t, "p_0"))
              {
                t = x_16(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_15)), term_h_19), not_null(j_15)), term_p_18);
    }
    return(t);
  }
  ATerm s_16 (ATerm t)
  {
    ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
    t = not_null(g_15);
    if(((n_15 != NULL) && (n_15 != t)))
      _fail(t);
    else
      n_15 = t;
    t = not_null(g_15);
    if(((o_15 != NULL) && (o_15 != t)))
      _fail(t);
    else
      o_15 = t;
    t = not_null(g_15);
    {
      ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
      ATerm y_16 (ATerm t)
      {
        t = not_null(s_15);
        if(((p_15 != NULL) && (p_15 != t)))
          _fail(t);
        else
          p_15 = t;
        t = not_null(q_15);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm t_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = rewrite_1_0(t_2, t);
        if(((q_15 != NULL) && (q_15 != t)))
          _fail(t);
        else
          q_15 = t;
        t = not_null(q_15);
        if(match_cons(t, sym_Defined_2))
          {
            r_15 = ATgetArgument(t, 0);
            s_15 = ATgetArgument(t, 1);
            t = not_null(r_15);
            if(match_string(t, "m_0"))
              {
                t = y_16(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_15)), term_h_19), not_null(p_15)), term_i_19);
    }
    return(t);
  }
  ATerm t_16 (ATerm t)
  {
    ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
    t = not_null(g_15);
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    t = not_null(g_15);
    if(((u_15 != NULL) && (u_15 != t)))
      _fail(t);
    else
      u_15 = t;
    t = not_null(g_15);
    {
      ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
      ATerm z_16 (ATerm t)
      {
        t = not_null(y_15);
        if(((v_15 != NULL) && (v_15 != t)))
          _fail(t);
        else
          v_15 = t;
        t = not_null(w_15);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm u_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = rewrite_1_0(u_2, t);
        if(((w_15 != NULL) && (w_15 != t)))
          _fail(t);
        else
          w_15 = t;
        t = not_null(w_15);
        if(match_cons(t, sym_Defined_2))
          {
            x_15 = ATgetArgument(t, 0);
            y_15 = ATgetArgument(t, 1);
            t = not_null(x_15);
            if(match_string(t, "j_0"))
              {
                t = z_16(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_15)), term_h_19), not_null(v_15)), term_i_19);
    }
    return(t);
  }
  ATerm u_16 (ATerm t)
  {
    ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
    t = not_null(g_15);
    if(((z_15 != NULL) && (z_15 != t)))
      _fail(t);
    else
      z_15 = t;
    t = not_null(g_15);
    if(((a_16 != NULL) && (a_16 != t)))
      _fail(t);
    else
      a_16 = t;
    t = not_null(g_15);
    {
      ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
      ATerm a_17 (ATerm t)
      {
        t = not_null(e_16);
        if(((b_16 != NULL) && (b_16 != t)))
          _fail(t);
        else
          b_16 = t;
        t = not_null(c_16);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm v_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = rewrite_1_0(v_2, t);
        if(((c_16 != NULL) && (c_16 != t)))
          _fail(t);
        else
          c_16 = t;
        t = not_null(c_16);
        if(match_cons(t, sym_Defined_2))
          {
            d_16 = ATgetArgument(t, 0);
            e_16 = ATgetArgument(t, 1);
            t = not_null(d_16);
            if(match_string(t, "h_0"))
              {
                t = a_17(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_16)), term_h_19), not_null(b_16)), term_i_19);
    }
    return(t);
  }
  ATerm v_16 (ATerm t)
  {
    ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
    t = not_null(g_15);
    if(((f_16 != NULL) && (f_16 != t)))
      _fail(t);
    else
      f_16 = t;
    t = not_null(g_15);
    if(((g_16 != NULL) && (g_16 != t)))
      _fail(t);
    else
      g_16 = t;
    t = not_null(g_15);
    {
      ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
      ATerm b_17 (ATerm t)
      {
        t = not_null(k_16);
        if(((h_16 != NULL) && (h_16 != t)))
          _fail(t);
        else
          h_16 = t;
        t = not_null(i_16);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm w_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = rewrite_1_0(w_2, t);
        if(((i_16 != NULL) && (i_16 != t)))
          _fail(t);
        else
          i_16 = t;
        t = not_null(i_16);
        if(match_cons(t, sym_Defined_2))
          {
            j_16 = ATgetArgument(t, 0);
            k_16 = ATgetArgument(t, 1);
            t = not_null(j_16);
            if(match_string(t, "f_0"))
              {
                t = b_17(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_16)), term_h_19), not_null(h_16)), term_j_19);
    }
    return(t);
  }
  ATerm w_16 (ATerm t)
  {
    ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
    t = not_null(g_15);
    if(((l_16 != NULL) && (l_16 != t)))
      _fail(t);
    else
      l_16 = t;
    t = not_null(g_15);
    if(((m_16 != NULL) && (m_16 != t)))
      _fail(t);
    else
      m_16 = t;
    t = not_null(g_15);
    {
      ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
      ATerm c_17 (ATerm t)
      {
        t = not_null(q_16);
        if(((n_16 != NULL) && (n_16 != t)))
          _fail(t);
        else
          n_16 = t;
        t = not_null(o_16);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm x_2 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = rewrite_1_0(x_2, t);
        if(((o_16 != NULL) && (o_16 != t)))
          _fail(t);
        else
          o_16 = t;
        t = not_null(o_16);
        if(match_cons(t, sym_Defined_2))
          {
            p_16 = ATgetArgument(t, 0);
            q_16 = ATgetArgument(t, 1);
            t = not_null(p_16);
            if(match_string(t, "b_0"))
              {
                t = c_17(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_16)), term_h_19), not_null(n_16)), term_j_19);
    }
    return(t);
  }
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_16(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        {
          ATerm m_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_16(t);
              ;
              LocalPopChoice(n_19);
            }
          else
            {
              t = m_19;
              {
                ATerm m_20 = t;
                int n_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = t_16(t);
                    ;
                    LocalPopChoice(n_20);
                  }
                else
                  {
                    t = m_20;
                    {
                      ATerm o_20 = t;
                      int p_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_16(t);
                          ;
                          LocalPopChoice(p_20);
                        }
                      else
                        {
                          t = o_20;
                          {
                            ATerm q_20 = t;
                            int f_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_16(t);
                                ;
                                LocalPopChoice(f_21);
                              }
                            else
                              {
                                t = q_20;
                                t = w_16(t);
                              }
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
ATerm Unbound_0_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  ATerm i_17 (ATerm t)
  {
    ATerm h_17 = NULL;
    t = not_null(g_17);
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_21), not_null(h_17)), term_g_21);
    t = Context_0_0(t);
    t = error_0_0(t);
    return(t);
  }
  if(((f_17 != NULL) && (f_17 != t)))
    _fail(t);
  else
    f_17 = t;
  t = not_null(f_17);
  if(match_cons(t, sym_Var_1))
    {
      g_17 = ATgetArgument(t, 0);
      t = i_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  ATerm p_17 (ATerm t)
  {
    ATerm o_17 = NULL;
    t = not_null(m_17);
    if(((o_17 != NULL) && (o_17 != t)))
      _fail(t);
    else
      o_17 = t;
    t = not_null(o_17);
    return(t);
  }
  if(((l_17 != NULL) && (l_17 != t)))
    _fail(t);
  else
    l_17 = t;
  t = not_null(l_17);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_17 = ATgetFirst((ATermList) t);
      n_17 = (ATerm) ATgetNext((ATermList) t);
      t = p_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  ATerm x_17 (ATerm t)
  {
    ATerm v_17 = NULL,w_17 = NULL;
    t = not_null(t_17);
    if(((v_17 != NULL) && (v_17 != t)))
      _fail(t);
    else
      v_17 = t;
    t = not_null(u_17);
    if(((w_17 != NULL) && (w_17 != t)))
      _fail(t);
    else
      w_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), not_null(w_17));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((s_17 != NULL) && (s_17 != t)))
    _fail(t);
  else
    s_17 = t;
  t = not_null(s_17);
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
      t = x_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm x_74 (ATerm), ATerm t)
{
  ATerm a_18 = NULL;
  ATerm e_18 (ATerm t)
  {
    ATerm b_18 = NULL,c_18 = NULL;
    t = not_null(a_18);
    if(((b_18 != NULL) && (b_18 != t)))
      _fail(t);
    else
      b_18 = t;
    t = not_null(a_18);
    {
      ATerm d_18 = NULL;
      ATerm f_18 (ATerm t)
      {
        t = not_null(d_18);
        if(((c_18 != NULL) && (c_18 != t)))
          _fail(t);
        else
          c_18 = t;
        t = not_null(d_18);
        return(t);
      }
      t = term_i_21;
      t = x_74(t);
      if(((d_18 != NULL) && (d_18 != t)))
        _fail(t);
      else
        d_18 = t;
      t = f_18(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), not_null(b_18));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((a_18 != NULL) && (a_18 != t)))
    _fail(t);
  else
    a_18 = t;
  t = e_18(t);
  return(t);
}
ATerm Bound_0_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL;
  ATerm d_19 (ATerm t)
  {
    ATerm s_18 = NULL,t_18 = NULL;
    t = not_null(q_18);
    if(((t_18 != NULL) && (t_18 != t)))
      _fail(t);
    else
      t_18 = t;
    t = not_null(r_18);
    if(((s_18 != NULL) && (s_18 != t)))
      _fail(t);
    else
      s_18 = t;
    t = not_null(q_18);
    {
      ATerm u_18 = NULL,v_18 = NULL;
      t = not_null(t_18);
      {
        ATerm y_2 (ATerm t)
        {
          t = term_z_17;
          return(t);
        }
        t = rewrite_1_0(y_2, t);
        if(((u_18 != NULL) && (u_18 != t)))
          _fail(t);
        else
          u_18 = t;
        t = not_null(u_18);
        if(match_cons(t, sym_Defined_1))
          {
            v_18 = ATgetArgument(t, 0);
            t = not_null(v_18);
            if(match_string(t, "w_0"))
              {
                t = not_null(u_18);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_18));
    }
    return(t);
  }
  ATerm e_19 (ATerm t)
  {
    ATerm w_18 = NULL,x_18 = NULL;
    t = not_null(q_18);
    if(((x_18 != NULL) && (x_18 != t)))
      _fail(t);
    else
      x_18 = t;
    t = not_null(r_18);
    if(((w_18 != NULL) && (w_18 != t)))
      _fail(t);
    else
      w_18 = t;
    t = not_null(q_18);
    {
      ATerm y_18 = NULL;
      ATerm g_19 (ATerm t)
      {
        t = not_null(y_18);
        _fail(t);
        return(t);
      }
      t = not_null(x_18);
      {
        ATerm z_2 (ATerm t)
        {
          t = term_z_17;
          return(t);
        }
        t = rewrite_1_0(z_2, t);
        if(((y_18 != NULL) && (y_18 != t)))
          _fail(t);
        else
          y_18 = t;
        t = not_null(y_18);
        if(match_cons(t, sym_Undefined_0))
          {
            t = g_19(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_g_18;
    }
    return(t);
  }
  ATerm f_19 (ATerm t)
  {
    ATerm z_18 = NULL,a_19 = NULL;
    t = not_null(q_18);
    if(((a_19 != NULL) && (a_19 != t)))
      _fail(t);
    else
      a_19 = t;
    t = not_null(r_18);
    if(((z_18 != NULL) && (z_18 != t)))
      _fail(t);
    else
      z_18 = t;
    t = not_null(q_18);
    {
      ATerm b_19 = NULL,c_19 = NULL;
      t = not_null(a_19);
      {
        ATerm a_3 (ATerm t)
        {
          t = term_z_17;
          return(t);
        }
        t = rewrite_1_0(a_3, t);
        if(((b_19 != NULL) && (b_19 != t)))
          _fail(t);
        else
          b_19 = t;
        t = not_null(b_19);
        if(match_cons(t, sym_Defined_1))
          {
            c_19 = ATgetArgument(t, 0);
            t = not_null(c_19);
            if(match_string(t, "s_0"))
              {
                t = not_null(b_19);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_18));
    }
    return(t);
  }
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  t = not_null(q_18);
  if(match_cons(t, sym_Var_1))
    {
      r_18 = ATgetArgument(t, 0);
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_19(t);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            {
              ATerm e_22 = t;
              int f_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_19(t);
                  ;
                  LocalPopChoice(f_22);
                }
              else
                {
                  t = e_22;
                  t = f_19(t);
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
ATerm use_vars_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(h_22);
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = Unbound_0_0(t);
            _fail(t);
          }
      }
    }
  else
    {
      t = g_22;
      {
        ATerm x_22 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(h_23);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = x_22;
            {
              ATerm i_23 = t;
              int n_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(n_23);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = i_23;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm x_60 (ATerm), ATerm y_60 (ATerm), ATerm z_60 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  ATerm g_20 (ATerm t)
  {
    ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,y_19 = NULL;
    ATerm i_20 (ATerm t)
    {
      ATerm z_19 = NULL,a_20 = NULL;
      ATerm j_20 (ATerm t)
      {
        ATerm b_20 = NULL,c_20 = NULL;
        ATerm k_20 (ATerm t)
        {
          ATerm d_20 = NULL,e_20 = NULL;
          t = not_null(c_20);
          if(((d_20 != NULL) && (d_20 != t)))
            _fail(t);
          else
            d_20 = t;
          t = not_null(c_20);
          {
            ATerm f_20 = NULL;
            ATerm l_20 (ATerm t)
            {
              t = not_null(f_20);
              if(((e_20 != NULL) && (e_20 != t)))
                _fail(t);
              else
                e_20 = t;
              t = not_null(f_20);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(z_19), not_null(b_20), not_null(d_20)), not_null(w_19));
            if(((f_20 != NULL) && (f_20 != t)))
              _fail(t);
            else
              f_20 = t;
            t = l_20(t);
            t = not_null(e_20);
          }
          return(t);
        }
        t = not_null(a_20);
        if(((b_20 != NULL) && (b_20 != t)))
          _fail(t);
        else
          b_20 = t;
        t = not_null(v_19);
        t = z_60(t);
        if(((c_20 != NULL) && (c_20 != t)))
          _fail(t);
        else
          c_20 = t;
        t = k_20(t);
        return(t);
      }
      t = not_null(y_19);
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      t = not_null(u_19);
      t = y_60(t);
      if(((a_20 != NULL) && (a_20 != t)))
        _fail(t);
      else
        a_20 = t;
      t = j_20(t);
      return(t);
    }
    t = not_null(o_19);
    if(((s_19 != NULL) && (s_19 != t)))
      _fail(t);
    else
      s_19 = t;
    t = not_null(p_19);
    if(((t_19 != NULL) && (t_19 != t)))
      _fail(t);
    else
      t_19 = t;
    t = not_null(q_19);
    if(((u_19 != NULL) && (u_19 != t)))
      _fail(t);
    else
      u_19 = t;
    t = not_null(r_19);
    if(((v_19 != NULL) && (v_19 != t)))
      _fail(t);
    else
      v_19 = t;
    t = not_null(o_19);
    {
      ATerm x_19 = NULL;
      ATerm h_20 (ATerm t)
      {
        t = not_null(x_19);
        if(((w_19 != NULL) && (w_19 != t)))
          _fail(t);
        else
          w_19 = t;
        t = not_null(x_19);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_19));
      if(((x_19 != NULL) && (x_19 != t)))
        _fail(t);
      else
        x_19 = t;
      t = h_20(t);
      t = not_null(t_19);
      t = x_60(t);
      if(((y_19 != NULL) && (y_19 != t)))
        _fail(t);
      else
        y_19 = t;
      t = i_20(t);
    }
    return(t);
  }
  if(((o_19 != NULL) && (o_19 != t)))
    _fail(t);
  else
    o_19 = t;
  t = not_null(o_19);
  if(match_cons(t, sym_Rule_3))
    {
      p_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
      r_19 = ATgetArgument(t, 2);
      t = g_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RootApp_1_0 (ATerm w_59 (ATerm), ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL;
  ATerm b_21 (ATerm t)
  {
    ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,x_20 = NULL;
    ATerm d_21 (ATerm t)
    {
      ATerm y_20 = NULL,z_20 = NULL;
      t = not_null(x_20);
      if(((y_20 != NULL) && (y_20 != t)))
        _fail(t);
      else
        y_20 = t;
      t = not_null(x_20);
      {
        ATerm a_21 = NULL;
        ATerm e_21 (ATerm t)
        {
          t = not_null(a_21);
          if(((z_20 != NULL) && (z_20 != t)))
            _fail(t);
          else
            z_20 = t;
          t = not_null(a_21);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(y_20)), not_null(v_20));
        if(((a_21 != NULL) && (a_21 != t)))
          _fail(t);
        else
          a_21 = t;
        t = e_21(t);
        t = not_null(z_20);
      }
      return(t);
    }
    t = not_null(r_20);
    if(((t_20 != NULL) && (t_20 != t)))
      _fail(t);
    else
      t_20 = t;
    t = not_null(s_20);
    if(((u_20 != NULL) && (u_20 != t)))
      _fail(t);
    else
      u_20 = t;
    t = not_null(r_20);
    {
      ATerm w_20 = NULL;
      ATerm c_21 (ATerm t)
      {
        t = not_null(w_20);
        if(((v_20 != NULL) && (v_20 != t)))
          _fail(t);
        else
          v_20 = t;
        t = not_null(w_20);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_20));
      if(((w_20 != NULL) && (w_20 != t)))
        _fail(t);
      else
        w_20 = t;
      t = c_21(t);
      t = not_null(u_20);
      t = w_59(t);
      if(((x_20 != NULL) && (x_20 != t)))
        _fail(t);
      else
        x_20 = t;
      t = d_21(t);
    }
    return(t);
  }
  if(((r_20 != NULL) && (r_20 != t)))
    _fail(t);
  else
    r_20 = t;
  t = not_null(r_20);
  if(match_cons(t, sym_RootApp_1))
    {
      s_20 = ATgetArgument(t, 0);
      t = b_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm App_2_0 (ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  ATerm z_21 (ATerm t)
  {
    ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,t_21 = NULL;
    ATerm b_22 (ATerm t)
    {
      ATerm u_21 = NULL,v_21 = NULL;
      ATerm c_22 (ATerm t)
      {
        ATerm w_21 = NULL,x_21 = NULL;
        t = not_null(v_21);
        if(((w_21 != NULL) && (w_21 != t)))
          _fail(t);
        else
          w_21 = t;
        t = not_null(v_21);
        {
          ATerm y_21 = NULL;
          ATerm d_22 (ATerm t)
          {
            t = not_null(y_21);
            if(((x_21 != NULL) && (x_21 != t)))
              _fail(t);
            else
              x_21 = t;
            t = not_null(y_21);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(u_21), not_null(w_21)), not_null(r_21));
          if(((y_21 != NULL) && (y_21 != t)))
            _fail(t);
          else
            y_21 = t;
          t = d_22(t);
          t = not_null(x_21);
        }
        return(t);
      }
      t = not_null(t_21);
      if(((u_21 != NULL) && (u_21 != t)))
        _fail(t);
      else
        u_21 = t;
      t = not_null(q_21);
      t = v_59(t);
      if(((v_21 != NULL) && (v_21 != t)))
        _fail(t);
      else
        v_21 = t;
      t = c_22(t);
      return(t);
    }
    t = not_null(l_21);
    if(((o_21 != NULL) && (o_21 != t)))
      _fail(t);
    else
      o_21 = t;
    t = not_null(m_21);
    if(((p_21 != NULL) && (p_21 != t)))
      _fail(t);
    else
      p_21 = t;
    t = not_null(n_21);
    if(((q_21 != NULL) && (q_21 != t)))
      _fail(t);
    else
      q_21 = t;
    t = not_null(l_21);
    {
      ATerm s_21 = NULL;
      ATerm a_22 (ATerm t)
      {
        t = not_null(s_21);
        if(((r_21 != NULL) && (r_21 != t)))
          _fail(t);
        else
          r_21 = t;
        t = not_null(s_21);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_21));
      if(((s_21 != NULL) && (s_21 != t)))
        _fail(t);
      else
        s_21 = t;
      t = a_22(t);
      t = not_null(p_21);
      t = u_59(t);
      if(((t_21 != NULL) && (t_21 != t)))
        _fail(t);
      else
        t_21 = t;
      t = b_22(t);
    }
    return(t);
  }
  if(((l_21 != NULL) && (l_21 != t)))
    _fail(t);
  else
    l_21 = t;
  t = not_null(l_21);
  if(match_cons(t, sym_App_2))
    {
      m_21 = ATgetArgument(t, 0);
      n_21 = ATgetArgument(t, 1);
      t = z_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
  ATerm t_22 (ATerm t)
  {
    ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
    t = not_null(j_22);
    if(((m_22 != NULL) && (m_22 != t)))
      _fail(t);
    else
      m_22 = t;
    t = not_null(k_22);
    if(((n_22 != NULL) && (n_22 != t)))
      _fail(t);
    else
      n_22 = t;
    t = not_null(l_22);
    if(((o_22 != NULL) && (o_22 != t)))
      _fail(t);
    else
      o_22 = t;
    t = not_null(i_22);
    {
      ATerm o_23;
      o_23 = t;
      {
        ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
        ATerm u_22 (ATerm t)
        {
          t = not_null(s_22);
          if(((p_22 != NULL) && (p_22 != t)))
            _fail(t);
          else
            p_22 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(m_22), not_null(n_22), (ATerm) ATinsert(CheckATermList(not_null(p_22)), not_null(o_22)));
          t = table_put_0_0(t);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_22), not_null(n_22));
        t = table_get_0_0(t);
        if(((q_22 != NULL) && (q_22 != t)))
          _fail(t);
        else
          q_22 = t;
        t = not_null(q_22);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_22 = ATgetFirst((ATermList) t);
            s_22 = (ATerm) ATgetNext((ATermList) t);
            t = u_22(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = o_23;
    }
    return(t);
  }
  if(((i_22 != NULL) && (i_22 != t)))
    _fail(t);
  else
    i_22 = t;
  t = not_null(i_22);
  if(match_cons(t, sym__3))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
      l_22 = ATgetArgument(t, 2);
      t = t_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1_0 (ATerm w_74 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  ATerm f_23 (ATerm t)
  {
    ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
    t = not_null(z_22);
    if(((b_23 != NULL) && (b_23 != t)))
      _fail(t);
    else
      b_23 = t;
    t = not_null(a_23);
    if(((c_23 != NULL) && (c_23 != t)))
      _fail(t);
    else
      c_23 = t;
    t = not_null(y_22);
    {
      ATerm p_23;
      p_23 = t;
      {
        ATerm e_23 = NULL;
        ATerm g_23 (ATerm t)
        {
          t = not_null(e_23);
          if(((d_23 != NULL) && (d_23 != t)))
            _fail(t);
          else
            d_23 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(d_23), not_null(b_23), not_null(c_23));
          t = table_replace_0_0(t);
          return(t);
        }
        t = w_74(t);
        if(((e_23 != NULL) && (e_23 != t)))
          _fail(t);
        else
          e_23 = t;
        t = g_23(t);
      }
      t = p_23;
    }
    return(t);
  }
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  t = not_null(y_22);
  if(match_cons(t, sym__2))
    {
      z_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
      t = f_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  ATerm m_23 (ATerm t)
  {
    ATerm l_23 = NULL;
    t = not_null(k_23);
    if(((l_23 != NULL) && (l_23 != t)))
      _fail(t);
    else
      l_23 = t;
    t = not_null(j_23);
    {
      ATerm q_23;
      q_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_23)), term_s_23);
      {
        ATerm b_3 (ATerm t)
        {
          t = term_z_17;
          return(t);
        }
        t = override_key_1_0(b_3, t);
      }
      t = q_23;
    }
    return(t);
  }
  if(((j_23 != NULL) && (j_23 != t)))
    _fail(t);
  else
    j_23 = t;
  t = not_null(j_23);
  if(match_cons(t, sym_Var_1))
    {
      k_23 = ATgetArgument(t, 0);
      t = m_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm a_0 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  ATerm o_27 (ATerm t)
  {
    ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,g_24 = NULL;
    ATerm s_27 (ATerm t)
    {
      ATerm h_24 = NULL,i_24 = NULL;
      t = not_null(g_24);
      if(((h_24 != NULL) && (h_24 != t)))
        _fail(t);
      else
        h_24 = t;
      t = not_null(g_24);
      {
        ATerm q_26 = NULL;
        ATerm t_27 (ATerm t)
        {
          t = not_null(q_26);
          if(((i_24 != NULL) && (i_24 != t)))
            _fail(t);
          else
            i_24 = t;
          t = not_null(q_26);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_24)), not_null(e_24));
        if(((q_26 != NULL) && (q_26 != t)))
          _fail(t);
        else
          q_26 = t;
        t = t_27(t);
        t = not_null(i_24);
      }
      return(t);
    }
    t = not_null(a_24);
    if(((c_24 != NULL) && (c_24 != t)))
      _fail(t);
    else
      c_24 = t;
    t = not_null(b_24);
    if(((d_24 != NULL) && (d_24 != t)))
      _fail(t);
    else
      d_24 = t;
    t = not_null(a_24);
    {
      ATerm f_24 = NULL;
      ATerm r_27 (ATerm t)
      {
        t = not_null(f_24);
        if(((e_24 != NULL) && (e_24 != t)))
          _fail(t);
        else
          e_24 = t;
        t = not_null(f_24);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_24));
      if(((f_24 != NULL) && (f_24 != t)))
        _fail(t);
      else
        f_24 = t;
      t = r_27(t);
      t = not_null(d_24);
      t = a_0(t);
      if(((g_24 != NULL) && (g_24 != t)))
        _fail(t);
      else
        g_24 = t;
      t = s_27(t);
    }
    return(t);
  }
  ATerm p_27 (ATerm t)
  {
    ATerm r_26 = NULL,w_26 = NULL,x_26 = NULL,c_27 = NULL;
    ATerm v_27 (ATerm t)
    {
      ATerm d_27 = NULL,e_27 = NULL;
      t = not_null(c_27);
      if(((d_27 != NULL) && (d_27 != t)))
        _fail(t);
      else
        d_27 = t;
      t = not_null(c_27);
      {
        ATerm f_27 = NULL;
        ATerm w_27 (ATerm t)
        {
          t = not_null(f_27);
          if(((e_27 != NULL) && (e_27 != t)))
            _fail(t);
          else
            e_27 = t;
          t = not_null(f_27);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_27)), not_null(x_26));
        if(((f_27 != NULL) && (f_27 != t)))
          _fail(t);
        else
          f_27 = t;
        t = w_27(t);
        t = not_null(e_27);
      }
      return(t);
    }
    t = not_null(a_24);
    if(((r_26 != NULL) && (r_26 != t)))
      _fail(t);
    else
      r_26 = t;
    t = not_null(b_24);
    if(((w_26 != NULL) && (w_26 != t)))
      _fail(t);
    else
      w_26 = t;
    t = not_null(a_24);
    {
      ATerm b_27 = NULL;
      ATerm u_27 (ATerm t)
      {
        t = not_null(b_27);
        if(((x_26 != NULL) && (x_26 != t)))
          _fail(t);
        else
          x_26 = t;
        t = not_null(b_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_26));
      if(((b_27 != NULL) && (b_27 != t)))
        _fail(t);
      else
        b_27 = t;
      t = u_27(t);
      t = not_null(w_26);
      t = a_0(t);
      if(((c_27 != NULL) && (c_27 != t)))
        _fail(t);
      else
        c_27 = t;
      t = v_27(t);
    }
    return(t);
  }
  ATerm q_27 (ATerm t)
  {
    ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,k_27 = NULL;
    ATerm y_27 (ATerm t)
    {
      ATerm l_27 = NULL,m_27 = NULL;
      t = not_null(k_27);
      if(((l_27 != NULL) && (l_27 != t)))
        _fail(t);
      else
        l_27 = t;
      t = not_null(k_27);
      {
        ATerm n_27 = NULL;
        ATerm z_27 (ATerm t)
        {
          t = not_null(n_27);
          if(((m_27 != NULL) && (m_27 != t)))
            _fail(t);
          else
            m_27 = t;
          t = not_null(n_27);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_27)), not_null(i_27));
        if(((n_27 != NULL) && (n_27 != t)))
          _fail(t);
        else
          n_27 = t;
        t = z_27(t);
        t = not_null(m_27);
      }
      return(t);
    }
    t = not_null(a_24);
    if(((g_27 != NULL) && (g_27 != t)))
      _fail(t);
    else
      g_27 = t;
    t = not_null(b_24);
    if(((h_27 != NULL) && (h_27 != t)))
      _fail(t);
    else
      h_27 = t;
    t = not_null(a_24);
    {
      ATerm j_27 = NULL;
      ATerm x_27 (ATerm t)
      {
        t = not_null(j_27);
        if(((i_27 != NULL) && (i_27 != t)))
          _fail(t);
        else
          i_27 = t;
        t = not_null(j_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_27));
      if(((j_27 != NULL) && (j_27 != t)))
        _fail(t);
      else
        j_27 = t;
      t = x_27(t);
      t = not_null(h_27);
      t = a_0(t);
      if(((k_27 != NULL) && (k_27 != t)))
        _fail(t);
      else
        k_27 = t;
      t = y_27(t);
    }
    return(t);
  }
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  t = not_null(a_24);
  if(match_cons(t, sym_Var_1))
    {
      b_24 = ATgetArgument(t, 0);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_27(t);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            {
              ATerm v_23 = t;
              int w_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_27(t);
                  ;
                  LocalPopChoice(w_23);
                }
              else
                {
                  t = v_23;
                  t = q_27(t);
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
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(y_23);
      t = Binding_0_0(t);
    }
  else
    {
      t = x_23;
      {
        ATerm z_23 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(j_24);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = z_23;
            {
              ATerm k_24 = t;
              int l_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(l_24);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = k_24;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm x_62 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  ATerm t_28 (ATerm t)
  {
    ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,p_28 = NULL;
    ATerm v_28 (ATerm t)
    {
      ATerm q_28 = NULL,r_28 = NULL;
      t = not_null(p_28);
      if(((q_28 != NULL) && (q_28 != t)))
        _fail(t);
      else
        q_28 = t;
      t = not_null(p_28);
      {
        ATerm s_28 = NULL;
        ATerm w_28 (ATerm t)
        {
          t = not_null(s_28);
          if(((r_28 != NULL) && (r_28 != t)))
            _fail(t);
          else
            r_28 = t;
          t = not_null(s_28);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(q_28)), not_null(l_28));
        if(((s_28 != NULL) && (s_28 != t)))
          _fail(t);
        else
          s_28 = t;
        t = w_28(t);
        t = not_null(r_28);
      }
      return(t);
    }
    t = not_null(h_28);
    if(((j_28 != NULL) && (j_28 != t)))
      _fail(t);
    else
      j_28 = t;
    t = not_null(i_28);
    if(((k_28 != NULL) && (k_28 != t)))
      _fail(t);
    else
      k_28 = t;
    t = not_null(h_28);
    {
      ATerm m_28 = NULL;
      ATerm u_28 (ATerm t)
      {
        t = not_null(m_28);
        if(((l_28 != NULL) && (l_28 != t)))
          _fail(t);
        else
          l_28 = t;
        t = not_null(m_28);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_28));
      if(((m_28 != NULL) && (m_28 != t)))
        _fail(t);
      else
        m_28 = t;
      t = u_28(t);
      t = not_null(k_28);
      t = x_62(t);
      if(((p_28 != NULL) && (p_28 != t)))
        _fail(t);
      else
        p_28 = t;
      t = v_28(t);
    }
    return(t);
  }
  if(((h_28 != NULL) && (h_28 != t)))
    _fail(t);
  else
    h_28 = t;
  t = not_null(h_28);
  if(match_cons(t, sym_Match_1))
    {
      i_28 = ATgetArgument(t, 0);
      t = t_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1_0 (ATerm y_62 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL;
  ATerm m_29 (ATerm t)
  {
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,i_29 = NULL;
    ATerm o_29 (ATerm t)
    {
      ATerm j_29 = NULL,k_29 = NULL;
      t = not_null(i_29);
      if(((j_29 != NULL) && (j_29 != t)))
        _fail(t);
      else
        j_29 = t;
      t = not_null(i_29);
      {
        ATerm l_29 = NULL;
        ATerm p_29 (ATerm t)
        {
          t = not_null(l_29);
          if(((k_29 != NULL) && (k_29 != t)))
            _fail(t);
          else
            k_29 = t;
          t = not_null(l_29);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(j_29)), not_null(g_29));
        if(((l_29 != NULL) && (l_29 != t)))
          _fail(t);
        else
          l_29 = t;
        t = p_29(t);
        t = not_null(k_29);
      }
      return(t);
    }
    t = not_null(c_29);
    if(((e_29 != NULL) && (e_29 != t)))
      _fail(t);
    else
      e_29 = t;
    t = not_null(d_29);
    if(((f_29 != NULL) && (f_29 != t)))
      _fail(t);
    else
      f_29 = t;
    t = not_null(c_29);
    {
      ATerm h_29 = NULL;
      ATerm n_29 (ATerm t)
      {
        t = not_null(h_29);
        if(((g_29 != NULL) && (g_29 != t)))
          _fail(t);
        else
          g_29 = t;
        t = not_null(h_29);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_29));
      if(((h_29 != NULL) && (h_29 != t)))
        _fail(t);
      else
        h_29 = t;
      t = n_29(t);
      t = not_null(f_29);
      t = y_62(t);
      if(((i_29 != NULL) && (i_29 != t)))
        _fail(t);
      else
        i_29 = t;
      t = o_29(t);
    }
    return(t);
  }
  if(((c_29 != NULL) && (c_29 != t)))
    _fail(t);
  else
    c_29 = t;
  t = not_null(c_29);
  if(match_cons(t, sym_Build_1))
    {
      d_29 = ATgetArgument(t, 0);
      t = m_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm VarScope_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    t = term_z_17;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = Scope_2_0(DefineUnbound_0_0, m_70, t);
    return(t);
  }
  t = scope_2_0(c_3, d_3, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(n_24);
      t = VarScope_1_0(unbound_vars_0_0, t);
    }
  else
    {
      t = m_24;
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(p_24);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = o_24;
            {
              ATerm q_24 = t;
              int r_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(r_24);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = q_24;
                  {
                    ATerm s_24 = t;
                    int t_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(t_24);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = s_24;
                        {
                          ATerm u_24 = t;
                          int v_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(v_24);
                              t = choice_1_0(unbound_vars_0_0, t);
                            }
                          else
                            {
                              t = u_24;
                              {
                                ATerm w_24 = t;
                                int x_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(x_24);
                                    t = lchoice_1_0(unbound_vars_0_0, t);
                                  }
                                else
                                  {
                                    t = w_24;
                                    {
                                      ATerm y_24 = t;
                                      int z_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(z_24);
                                          t = guardedlchoice_1_0(unbound_vars_0_0, t);
                                        }
                                      else
                                        {
                                          t = y_24;
                                          t = SRTS_all(unbound_vars_0_0, t);
                                        }
                                    }
                                  }
                              }
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
ATerm DefineBound_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm r_29 = NULL;
    ATerm t_29 (ATerm t)
    {
      ATerm s_29 = NULL;
      t = not_null(r_29);
      if(((s_29 != NULL) && (s_29 != t)))
        _fail(t);
      else
        s_29 = t;
      t = not_null(r_29);
      {
        ATerm a_25;
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_29)), term_c_25);
        {
          ATerm f_3 (ATerm t)
          {
            t = term_z_17;
            return(t);
          }
          t = assert_1_0(f_3, t);
        }
        t = a_25;
      }
      return(t);
    }
    if(((r_29 != NULL) && (r_29 != t)))
      _fail(t);
    else
      r_29 = t;
    t = t_29(t);
    return(t);
  }
  t = map_1_0(e_3, t);
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  ATerm j_30 (ATerm t)
  {
    ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
    t = not_null(z_29);
    if(((d_30 != NULL) && (d_30 != t)))
      _fail(t);
    else
      d_30 = t;
    t = not_null(a_30);
    if(((c_30 != NULL) && (c_30 != t)))
      _fail(t);
    else
      c_30 = t;
    t = not_null(b_30);
    if(((e_30 != NULL) && (e_30 != t)))
      _fail(t);
    else
      e_30 = t;
    t = not_null(x_29);
    if(((f_30 != NULL) && (f_30 != t)))
      _fail(t);
    else
      f_30 = t;
    t = not_null(y_29);
    {
      ATerm d_25;
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_25, not_null(d_30)));
      {
        ATerm g_3 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = assert_1_0(g_3, t);
        t = not_null(e_30);
        t = declared_vars_0_0(t);
        t = DefineBound_0_0(t);
        t = not_null(f_30);
        t = unbound_vars_0_0(t);
      }
      t = d_25;
    }
    return(t);
  }
  ATerm k_30 (ATerm t)
  {
    ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
    t = not_null(z_29);
    if(((h_30 != NULL) && (h_30 != t)))
      _fail(t);
    else
      h_30 = t;
    t = not_null(a_30);
    if(((g_30 != NULL) && (g_30 != t)))
      _fail(t);
    else
      g_30 = t;
    t = not_null(b_30);
    if(((i_30 != NULL) && (i_30 != t)))
      _fail(t);
    else
      i_30 = t;
    t = not_null(y_29);
    {
      ATerm f_25;
      f_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_25, not_null(h_30)));
      {
        ATerm h_3 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = assert_1_0(h_3, t);
        t = not_null(i_30);
        t = unbound_vars_0_0(t);
      }
      t = f_25;
    }
    return(t);
  }
  if(((y_29 != NULL) && (y_29 != t)))
    _fail(t);
  else
    y_29 = t;
  t = not_null(y_29);
  if(match_cons(t, sym_SDefT_4))
    {
      z_29 = ATgetArgument(t, 0);
      a_30 = ATgetArgument(t, 1);
      b_30 = ATgetArgument(t, 2);
      x_29 = ATgetArgument(t, 3);
      t = j_30(t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_29 = ATgetArgument(t, 0);
          a_30 = ATgetArgument(t, 1);
          b_30 = ATgetArgument(t, 2);
          t = k_30(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,s_30 = NULL,t_30 = NULL;
  ATerm z_30 (ATerm t)
  {
    ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
    t = not_null(p_30);
    if(((v_30 != NULL) && (v_30 != t)))
      _fail(t);
    else
      v_30 = t;
    t = not_null(s_30);
    if(((w_30 != NULL) && (w_30 != t)))
      _fail(t);
    else
      w_30 = t;
    t = not_null(t_30);
    if(((u_30 != NULL) && (u_30 != t)))
      _fail(t);
    else
      u_30 = t;
    t = not_null(o_30);
    {
      ATerm h_25;
      h_25 = t;
      {
        ATerm x_30 = NULL;
        ATerm y_30 = NULL;
        ATerm a_31 (ATerm t)
        {
          t = not_null(y_30);
          if(((x_30 != NULL) && (x_30 != t)))
            _fail(t);
          else
            x_30 = t;
          t = not_null(y_30);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_30), not_null(w_30));
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
              t = (ATerm) ATempty;
            }
          if(((y_30 != NULL) && (y_30 != t)))
            _fail(t);
          else
            y_30 = t;
          t = a_31(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(v_30), not_null(w_30), (ATerm) ATinsert(CheckATermList(not_null(x_30)), not_null(u_30)));
        t = table_put_0_0(t);
      }
      t = h_25;
    }
    return(t);
  }
  if(((o_30 != NULL) && (o_30 != t)))
    _fail(t);
  else
    o_30 = t;
  t = not_null(o_30);
  if(match_cons(t, sym__3))
    {
      p_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
      t_30 = ATgetArgument(t, 2);
      t = z_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1_0 (ATerm v_74 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  ATerm s_31 (ATerm t)
  {
    ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
    t = not_null(h_31);
    if(((j_31 != NULL) && (j_31 != t)))
      _fail(t);
    else
      j_31 = t;
    t = not_null(i_31);
    if(((k_31 != NULL) && (k_31 != t)))
      _fail(t);
    else
      k_31 = t;
    t = not_null(g_31);
    {
      ATerm k_25;
      k_25 = t;
      {
        ATerm o_31 = NULL;
        ATerm t_31 (ATerm t)
        {
          ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
          ATerm u_31 (ATerm t)
          {
            t = not_null(q_31);
            if(((m_31 != NULL) && (m_31 != t)))
              _fail(t);
            else
              m_31 = t;
            t = not_null(r_31);
            if(((n_31 != NULL) && (n_31 != t)))
              _fail(t);
            else
              n_31 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_31), term_l_25, (ATerm) ATinsert(CheckATermList(not_null(n_31)), (ATerm) ATinsert(CheckATermList(not_null(m_31)), not_null(j_31))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(o_31);
          if(((l_31 != NULL) && (l_31 != t)))
            _fail(t);
          else
            l_31 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(l_31), not_null(j_31), not_null(k_31));
          t = table_push_0_0(t);
          {
            ATerm m_25 = t;
            int n_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), term_l_25);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(n_25);
              }
            else
              {
                t = m_25;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((p_31 != NULL) && (p_31 != t)))
              _fail(t);
            else
              p_31 = t;
            t = not_null(p_31);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_31 = ATgetFirst((ATermList) t);
                r_31 = (ATerm) ATgetNext((ATermList) t);
                t = u_31(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = v_74(t);
        if(((o_31 != NULL) && (o_31 != t)))
          _fail(t);
        else
          o_31 = t;
        t = t_31(t);
      }
      t = k_25;
    }
    return(t);
  }
  if(((g_31 != NULL) && (g_31 != t)))
    _fail(t);
  else
    g_31 = t;
  t = not_null(g_31);
  if(match_cons(t, sym__2))
    {
      h_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
      t = s_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineUnbound_0_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm w_31 = NULL;
    ATerm r_32 (ATerm t)
    {
      ATerm q_32 = NULL;
      t = not_null(w_31);
      if(((q_32 != NULL) && (q_32 != t)))
        _fail(t);
      else
        q_32 = t;
      t = not_null(w_31);
      {
        ATerm o_25;
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_32)), term_g_18);
        {
          ATerm j_3 (ATerm t)
          {
            t = term_z_17;
            return(t);
          }
          t = assert_1_0(j_3, t);
        }
        t = o_25;
      }
      return(t);
    }
    if(((w_31 != NULL) && (w_31 != t)))
      _fail(t);
    else
      w_31 = t;
    t = r_32(t);
    return(t);
  }
  t = map_1_0(i_3, t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm x_61 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  ATerm t_33 (ATerm t)
  {
    ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,p_33 = NULL;
    ATerm v_33 (ATerm t)
    {
      ATerm q_33 = NULL,r_33 = NULL;
      t = not_null(p_33);
      if(((q_33 != NULL) && (q_33 != t)))
        _fail(t);
      else
        q_33 = t;
      t = not_null(p_33);
      {
        ATerm s_33 = NULL;
        ATerm c_34 (ATerm t)
        {
          t = not_null(s_33);
          if(((r_33 != NULL) && (r_33 != t)))
            _fail(t);
          else
            r_33 = t;
          t = not_null(s_33);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(q_33)), not_null(h_33));
        if(((s_33 != NULL) && (s_33 != t)))
          _fail(t);
        else
          s_33 = t;
        t = c_34(t);
        t = not_null(r_33);
      }
      return(t);
    }
    t = not_null(d_33);
    if(((f_33 != NULL) && (f_33 != t)))
      _fail(t);
    else
      f_33 = t;
    t = not_null(e_33);
    if(((g_33 != NULL) && (g_33 != t)))
      _fail(t);
    else
      g_33 = t;
    t = not_null(d_33);
    {
      ATerm i_33 = NULL;
      ATerm u_33 (ATerm t)
      {
        t = not_null(i_33);
        if(((h_33 != NULL) && (h_33 != t)))
          _fail(t);
        else
          h_33 = t;
        t = not_null(i_33);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_33));
      if(((i_33 != NULL) && (i_33 != t)))
        _fail(t);
      else
        i_33 = t;
      t = u_33(t);
      t = not_null(g_33);
      t = x_61(t);
      if(((p_33 != NULL) && (p_33 != t)))
        _fail(t);
      else
        p_33 = t;
      t = v_33(t);
    }
    return(t);
  }
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  t = not_null(d_33);
  if(match_cons(t, sym_DynamicRules_1))
    {
      e_33 = ATgetArgument(t, 0);
      t = t_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDefT_4_0 (ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  ATerm i_35 (ATerm t)
  {
    ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,y_34 = NULL;
    ATerm k_35 (ATerm t)
    {
      ATerm z_34 = NULL,a_35 = NULL;
      ATerm l_35 (ATerm t)
      {
        ATerm b_35 = NULL,c_35 = NULL;
        ATerm m_35 (ATerm t)
        {
          ATerm d_35 = NULL,e_35 = NULL;
          ATerm n_35 (ATerm t)
          {
            ATerm f_35 = NULL,g_35 = NULL;
            t = not_null(e_35);
            if(((f_35 != NULL) && (f_35 != t)))
              _fail(t);
            else
              f_35 = t;
            t = not_null(e_35);
            {
              ATerm h_35 = NULL;
              ATerm o_35 (ATerm t)
              {
                t = not_null(h_35);
                if(((g_35 != NULL) && (g_35 != t)))
                  _fail(t);
                else
                  g_35 = t;
                t = not_null(h_35);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(z_34), not_null(b_35), not_null(d_35), not_null(f_35)), not_null(w_34));
              if(((h_35 != NULL) && (h_35 != t)))
                _fail(t);
              else
                h_35 = t;
              t = o_35(t);
              t = not_null(g_35);
            }
            return(t);
          }
          t = not_null(c_35);
          if(((d_35 != NULL) && (d_35 != t)))
            _fail(t);
          else
            d_35 = t;
          t = not_null(v_34);
          t = r_61(t);
          if(((e_35 != NULL) && (e_35 != t)))
            _fail(t);
          else
            e_35 = t;
          t = n_35(t);
          return(t);
        }
        t = not_null(a_35);
        if(((b_35 != NULL) && (b_35 != t)))
          _fail(t);
        else
          b_35 = t;
        t = not_null(u_34);
        t = q_61(t);
        if(((c_35 != NULL) && (c_35 != t)))
          _fail(t);
        else
          c_35 = t;
        t = m_35(t);
        return(t);
      }
      t = not_null(y_34);
      if(((z_34 != NULL) && (z_34 != t)))
        _fail(t);
      else
        z_34 = t;
      t = not_null(t_34);
      t = p_61(t);
      if(((a_35 != NULL) && (a_35 != t)))
        _fail(t);
      else
        a_35 = t;
      t = l_35(t);
      return(t);
    }
    t = not_null(m_34);
    if(((r_34 != NULL) && (r_34 != t)))
      _fail(t);
    else
      r_34 = t;
    t = not_null(n_34);
    if(((s_34 != NULL) && (s_34 != t)))
      _fail(t);
    else
      s_34 = t;
    t = not_null(o_34);
    if(((t_34 != NULL) && (t_34 != t)))
      _fail(t);
    else
      t_34 = t;
    t = not_null(p_34);
    if(((u_34 != NULL) && (u_34 != t)))
      _fail(t);
    else
      u_34 = t;
    t = not_null(q_34);
    if(((v_34 != NULL) && (v_34 != t)))
      _fail(t);
    else
      v_34 = t;
    t = not_null(m_34);
    {
      ATerm x_34 = NULL;
      ATerm j_35 (ATerm t)
      {
        t = not_null(x_34);
        if(((w_34 != NULL) && (w_34 != t)))
          _fail(t);
        else
          w_34 = t;
        t = not_null(x_34);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_34));
      if(((x_34 != NULL) && (x_34 != t)))
        _fail(t);
      else
        x_34 = t;
      t = j_35(t);
      t = not_null(s_34);
      t = o_61(t);
      if(((y_34 != NULL) && (y_34 != t)))
        _fail(t);
      else
        y_34 = t;
      t = k_35(t);
    }
    return(t);
  }
  if(((m_34 != NULL) && (m_34 != t)))
    _fail(t);
  else
    m_34 = t;
  t = not_null(m_34);
  if(match_cons(t, sym_RDefT_4))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
      p_34 = ATgetArgument(t, 2);
      q_34 = ATgetArgument(t, 3);
      t = i_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  ATerm t_36 (ATerm t)
  {
    ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,j_36 = NULL;
    ATerm v_36 (ATerm t)
    {
      ATerm k_36 = NULL,l_36 = NULL;
      ATerm w_36 (ATerm t)
      {
        ATerm m_36 = NULL,n_36 = NULL;
        ATerm x_36 (ATerm t)
        {
          ATerm o_36 = NULL,p_36 = NULL;
          ATerm y_36 (ATerm t)
          {
            ATerm q_36 = NULL,r_36 = NULL;
            t = not_null(p_36);
            if(((q_36 != NULL) && (q_36 != t)))
              _fail(t);
            else
              q_36 = t;
            t = not_null(p_36);
            {
              ATerm s_36 = NULL;
              ATerm z_36 (ATerm t)
              {
                t = not_null(s_36);
                if(((r_36 != NULL) && (r_36 != t)))
                  _fail(t);
                else
                  r_36 = t;
                t = not_null(s_36);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(k_36), not_null(m_36), not_null(o_36), not_null(q_36)), not_null(h_36));
              if(((s_36 != NULL) && (s_36 != t)))
                _fail(t);
              else
                s_36 = t;
              t = z_36(t);
              t = not_null(r_36);
            }
            return(t);
          }
          t = not_null(n_36);
          if(((o_36 != NULL) && (o_36 != t)))
            _fail(t);
          else
            o_36 = t;
          t = not_null(g_36);
          t = l_65(t);
          if(((p_36 != NULL) && (p_36 != t)))
            _fail(t);
          else
            p_36 = t;
          t = y_36(t);
          return(t);
        }
        t = not_null(l_36);
        if(((m_36 != NULL) && (m_36 != t)))
          _fail(t);
        else
          m_36 = t;
        t = not_null(f_36);
        t = k_65(t);
        if(((n_36 != NULL) && (n_36 != t)))
          _fail(t);
        else
          n_36 = t;
        t = x_36(t);
        return(t);
      }
      t = not_null(j_36);
      if(((k_36 != NULL) && (k_36 != t)))
        _fail(t);
      else
        k_36 = t;
      t = not_null(e_36);
      t = j_65(t);
      if(((l_36 != NULL) && (l_36 != t)))
        _fail(t);
      else
        l_36 = t;
      t = w_36(t);
      return(t);
    }
    t = not_null(x_35);
    if(((c_36 != NULL) && (c_36 != t)))
      _fail(t);
    else
      c_36 = t;
    t = not_null(y_35);
    if(((d_36 != NULL) && (d_36 != t)))
      _fail(t);
    else
      d_36 = t;
    t = not_null(z_35);
    if(((e_36 != NULL) && (e_36 != t)))
      _fail(t);
    else
      e_36 = t;
    t = not_null(a_36);
    if(((f_36 != NULL) && (f_36 != t)))
      _fail(t);
    else
      f_36 = t;
    t = not_null(b_36);
    if(((g_36 != NULL) && (g_36 != t)))
      _fail(t);
    else
      g_36 = t;
    t = not_null(x_35);
    {
      ATerm i_36 = NULL;
      ATerm u_36 (ATerm t)
      {
        t = not_null(i_36);
        if(((h_36 != NULL) && (h_36 != t)))
          _fail(t);
        else
          h_36 = t;
        t = not_null(i_36);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_36));
      if(((i_36 != NULL) && (i_36 != t)))
        _fail(t);
      else
        i_36 = t;
      t = u_36(t);
      t = not_null(d_36);
      t = i_65(t);
      if(((j_36 != NULL) && (j_36 != t)))
        _fail(t);
      else
        j_36 = t;
      t = v_36(t);
    }
    return(t);
  }
  if(((x_35 != NULL) && (x_35 != t)))
    _fail(t);
  else
    x_35 = t;
  t = not_null(x_35);
  if(match_cons(t, sym_SDefT_4))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
      a_36 = ATgetArgument(t, 2);
      b_36 = ATgetArgument(t, 3);
      t = t_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2_0 (ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  ATerm u_37 (ATerm t)
  {
    ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,o_37 = NULL;
    ATerm w_37 (ATerm t)
    {
      ATerm p_37 = NULL,q_37 = NULL;
      ATerm x_37 (ATerm t)
      {
        ATerm r_37 = NULL,s_37 = NULL;
        t = not_null(q_37);
        if(((r_37 != NULL) && (r_37 != t)))
          _fail(t);
        else
          r_37 = t;
        t = not_null(q_37);
        {
          ATerm t_37 = NULL;
          ATerm y_37 (ATerm t)
          {
            t = not_null(t_37);
            if(((s_37 != NULL) && (s_37 != t)))
              _fail(t);
            else
              s_37 = t;
            t = not_null(t_37);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(p_37), not_null(r_37)), not_null(m_37));
          if(((t_37 != NULL) && (t_37 != t)))
            _fail(t);
          else
            t_37 = t;
          t = y_37(t);
          t = not_null(s_37);
        }
        return(t);
      }
      t = not_null(o_37);
      if(((p_37 != NULL) && (p_37 != t)))
        _fail(t);
      else
        p_37 = t;
      t = not_null(l_37);
      t = b_63(t);
      if(((q_37 != NULL) && (q_37 != t)))
        _fail(t);
      else
        q_37 = t;
      t = x_37(t);
      return(t);
    }
    t = not_null(g_37);
    if(((j_37 != NULL) && (j_37 != t)))
      _fail(t);
    else
      j_37 = t;
    t = not_null(h_37);
    if(((k_37 != NULL) && (k_37 != t)))
      _fail(t);
    else
      k_37 = t;
    t = not_null(i_37);
    if(((l_37 != NULL) && (l_37 != t)))
      _fail(t);
    else
      l_37 = t;
    t = not_null(g_37);
    {
      ATerm n_37 = NULL;
      ATerm v_37 (ATerm t)
      {
        t = not_null(n_37);
        if(((m_37 != NULL) && (m_37 != t)))
          _fail(t);
        else
          m_37 = t;
        t = not_null(n_37);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_37));
      if(((n_37 != NULL) && (n_37 != t)))
        _fail(t);
      else
        n_37 = t;
      t = v_37(t);
      t = not_null(k_37);
      t = a_63(t);
      if(((o_37 != NULL) && (o_37 != t)))
        _fail(t);
      else
        o_37 = t;
      t = w_37(t);
    }
    return(t);
  }
  if(((g_37 != NULL) && (g_37 != t)))
    _fail(t);
  else
    g_37 = t;
  t = not_null(g_37);
  if(match_cons(t, sym_Scope_2))
    {
      h_37 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
      t = u_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(o_84, m_84, t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(o_84, o_84, o_84, m_84, t);
            ;
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            {
              ATerm t_25 = t;
              int u_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(o_84, o_84, o_84, m_84, t);
                  ;
                  LocalPopChoice(u_25);
                }
              else
                {
                  t = t_25;
                  t = DynamicRules_1_0(m_84, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
  ATerm k_38 (ATerm t)
  {
    ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
    t = not_null(c_38);
    if(((g_38 != NULL) && (g_38 != t)))
      _fail(t);
    else
      g_38 = t;
    t = not_null(d_38);
    if(((h_38 != NULL) && (h_38 != t)))
      _fail(t);
    else
      h_38 = t;
    t = not_null(e_38);
    if(((j_38 != NULL) && (j_38 != t)))
      _fail(t);
    else
      j_38 = t;
    t = not_null(f_38);
    if(((i_38 != NULL) && (i_38 != t)))
      _fail(t);
    else
      i_38 = t;
    t = not_null(j_38);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((b_38 != NULL) && (b_38 != t)))
    _fail(t);
  else
    b_38 = t;
  t = not_null(b_38);
  if(match_cons(t, sym_RDefT_4))
    {
      c_38 = ATgetArgument(t, 0);
      d_38 = ATgetArgument(t, 1);
      e_38 = ATgetArgument(t, 2);
      f_38 = ATgetArgument(t, 3);
      t = k_38(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
    ATerm t_38 (ATerm t)
    {
      ATerm r_38 = NULL;
      t = not_null(q_38);
      if(((r_38 != NULL) && (r_38 != t)))
        _fail(t);
      else
        r_38 = t;
      t = not_null(r_38);
      return(t);
    }
    ATerm u_38 (ATerm t)
    {
      ATerm s_38 = NULL;
      t = not_null(q_38);
      if(((s_38 != NULL) && (s_38 != t)))
        _fail(t);
      else
        s_38 = t;
      t = not_null(s_38);
      return(t);
    }
    if(((p_38 != NULL) && (p_38 != t)))
      _fail(t);
    else
      p_38 = t;
    t = not_null(p_38);
    if(match_cons(t, sym_VarDec_2))
      {
        q_38 = ATgetArgument(t, 0);
        o_38 = ATgetArgument(t, 1);
        t = t_38(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            q_38 = ATgetArgument(t, 0);
            t = u_38(t);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1_0(k_3, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  ATerm g_39 (ATerm t)
  {
    ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
    t = not_null(y_38);
    if(((c_39 != NULL) && (c_39 != t)))
      _fail(t);
    else
      c_39 = t;
    t = not_null(z_38);
    if(((d_39 != NULL) && (d_39 != t)))
      _fail(t);
    else
      d_39 = t;
    t = not_null(a_39);
    if(((f_39 != NULL) && (f_39 != t)))
      _fail(t);
    else
      f_39 = t;
    t = not_null(b_39);
    if(((e_39 != NULL) && (e_39 != t)))
      _fail(t);
    else
      e_39 = t;
    t = not_null(f_39);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((x_38 != NULL) && (x_38 != t)))
    _fail(t);
  else
    x_38 = t;
  t = not_null(x_38);
  if(match_cons(t, sym_SDefT_4))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
      a_39 = ATgetArgument(t, 2);
      b_39 = ATgetArgument(t, 3);
      t = g_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  ATerm m_39 (ATerm t)
  {
    ATerm l_39 = NULL;
    t = not_null(k_39);
    if(((l_39 != NULL) && (l_39 != t)))
      _fail(t);
    else
      l_39 = t;
    t = not_null(l_39);
    t = tvars_0_0(t);
    return(t);
  }
  if(((j_39 != NULL) && (j_39 != t)))
    _fail(t);
  else
    j_39 = t;
  t = not_null(j_39);
  if(match_cons(t, sym_DynamicRules_1))
    {
      k_39 = ATgetArgument(t, 0);
      t = m_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  ATerm e_40 (ATerm t)
  {
    ATerm x_39 = NULL,z_39 = NULL,a_40 = NULL;
    t = not_null(r_39);
    if(((a_40 != NULL) && (a_40 != t)))
      _fail(t);
    else
      a_40 = t;
    t = not_null(s_39);
    if(((x_39 != NULL) && (x_39 != t)))
      _fail(t);
    else
      x_39 = t;
    t = not_null(t_39);
    if(((z_39 != NULL) && (z_39 != t)))
      _fail(t);
    else
      z_39 = t;
    t = not_null(a_40);
    t = tvars_0_0(t);
    return(t);
  }
  ATerm f_40 (ATerm t)
  {
    ATerm c_40 = NULL,d_40 = NULL;
    t = not_null(v_39);
    if(((d_40 != NULL) && (d_40 != t)))
      _fail(t);
    else
      d_40 = t;
    t = not_null(w_39);
    if(((c_40 != NULL) && (c_40 != t)))
      _fail(t);
    else
      c_40 = t;
    t = not_null(d_40);
    return(t);
  }
  if(((u_39 != NULL) && (u_39 != t)))
    _fail(t);
  else
    u_39 = t;
  t = not_null(u_39);
  if(match_cons(t, sym_LRule_1))
    {
      v_39 = ATgetArgument(t, 0);
      t = not_null(v_39);
      if(match_cons(t, sym_Rule_3))
        {
          r_39 = ATgetArgument(t, 0);
          s_39 = ATgetArgument(t, 1);
          t_39 = ATgetArgument(t, 2);
          t = e_40(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_39 = ATgetArgument(t, 0);
          w_39 = ATgetArgument(t, 1);
          t = f_40(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Add1_0_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  ATerm l_40 (ATerm t)
  {
    ATerm k_40 = NULL;
    t = not_null(j_40);
    if(((k_40 != NULL) && (k_40 != t)))
      _fail(t);
    else
      k_40 = t;
    t = (ATerm) ATinsert(ATempty, not_null(k_40));
    return(t);
  }
  if(((i_40 != NULL) && (i_40 != t)))
    _fail(t);
  else
    i_40 = t;
  t = not_null(i_40);
  if(match_cons(t, sym_Var_1))
    {
      j_40 = ATgetArgument(t, 0);
      t = l_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  ATerm t_40 (ATerm t)
  {
    ATerm r_40 = NULL,s_40 = NULL;
    t = not_null(p_40);
    if(((s_40 != NULL) && (s_40 != t)))
      _fail(t);
    else
      s_40 = t;
    t = not_null(q_40);
    if(((r_40 != NULL) && (r_40 != t)))
      _fail(t);
    else
      r_40 = t;
    t = not_null(s_40);
    {
      ATerm u_40 (ATerm t)
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(r_40);
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_3 (ATerm t)
                  {
                    t = not_null(r_40);
                    return(t);
                  }
                  t = HdMember_p__2_0(y_70, l_3, t);
                  t = u_40(t);
                  ;
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  t = Cons_2_0(_id, u_40, t);
                }
            }
          }
        return(t);
      }
      t = u_40(t);
    }
    return(t);
  }
  if(((o_40 != NULL) && (o_40 != t)))
    _fail(t);
  else
    o_40 = t;
  t = not_null(o_40);
  if(match_cons(t, sym__2))
    {
      p_40 = ATgetArgument(t, 0);
      q_40 = ATgetArgument(t, 1);
      t = t_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = m_73(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
        ATerm i_41 (ATerm t)
        {
          ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,g_41 = NULL;
          t = not_null(a_41);
          if(((c_41 != NULL) && (c_41 != t)))
            _fail(t);
          else
            c_41 = t;
          t = not_null(b_41);
          if(((d_41 != NULL) && (d_41 != t)))
            _fail(t);
          else
            d_41 = t;
          t = not_null(z_40);
          {
            ATerm b_26;
            b_26 = t;
            {
              ATerm f_41 = NULL;
              ATerm o_41 (ATerm t)
              {
                t = not_null(f_41);
                if(((e_41 != NULL) && (e_41 != t)))
                  _fail(t);
                else
                  e_41 = t;
                t = not_null(f_41);
                return(t);
              }
              t = not_null(c_41);
              t = o_73(t);
              if(((f_41 != NULL) && (f_41 != t)))
                _fail(t);
              else
                f_41 = t;
              t = o_41(t);
            }
            t = b_26;
            {
              ATerm h_41 = NULL;
              ATerm p_41 (ATerm t)
              {
                t = not_null(h_41);
                if(((g_41 != NULL) && (g_41 != t)))
                  _fail(t);
                else
                  g_41 = t;
                t = not_null(h_41);
                return(t);
              }
              t = not_null(d_41);
              t = foldr_3_0(m_73, n_73, o_73, t);
              if(((h_41 != NULL) && (h_41 != t)))
                _fail(t);
              else
                h_41 = t;
              t = p_41(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_41), not_null(g_41));
              t = n_73(t);
            }
          }
          return(t);
        }
        if(((z_40 != NULL) && (z_40 != t)))
          _fail(t);
        else
          z_40 = t;
        t = not_null(z_40);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_41 = ATgetFirst((ATermList) t);
            b_41 = (ATerm) ATgetNext((ATermList) t);
            t = i_41(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t)
{
  ATerm u_41 = NULL;
  ATerm h_42 (ATerm t)
  {
    ATerm w_41 = NULL,x_41 = NULL;
    t = not_null(u_41);
    if(((w_41 != NULL) && (w_41 != t)))
      _fail(t);
    else
      w_41 = t;
    t = not_null(u_41);
    {
      ATerm y_41 = NULL;
      ATerm n_42 (ATerm t)
      {
        ATerm z_41 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
        ATerm o_42 (ATerm t)
        {
          t = not_null(g_42);
          if(((x_41 != NULL) && (x_41 != t)))
            _fail(t);
          else
            x_41 = t;
          t = not_null(e_42);
          return(t);
        }
        t = not_null(y_41);
        if(((z_41 != NULL) && (z_41 != t)))
          _fail(t);
        else
          z_41 = t;
        t = not_null(y_41);
        t = SSL_explode_term(not_null(z_41));
        if(((e_42 != NULL) && (e_42 != t)))
          _fail(t);
        else
          e_42 = t;
        t = not_null(e_42);
        if(match_cons(t, sym__2))
          {
            f_42 = ATgetArgument(t, 0);
            g_42 = ATgetArgument(t, 1);
            t = o_42(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(w_41);
      if(((y_41 != NULL) && (y_41 != t)))
        _fail(t);
      else
        y_41 = t;
      t = n_42(t);
      t = not_null(x_41);
      t = foldr_3_0(e_82, f_82, g_82, t);
    }
    return(t);
  }
  if(((u_41 != NULL) && (u_41 != t)))
    _fail(t);
  else
    u_41 = t;
  t = h_42(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  ATerm v_42 (ATerm t)
  {
    ATerm u_42 = NULL;
    t = not_null(s_42);
    if(((u_42 != NULL) && (u_42 != t)))
      _fail(t);
    else
      u_42 = t;
    t = not_null(t_42);
    if(((u_42 != NULL) && (u_42 != t)))
      _fail(t);
    else
      u_42 = t;
    t = not_null(r_42);
    return(t);
  }
  if(((r_42 != NULL) && (r_42 != t)))
    _fail(t);
  else
    r_42 = t;
  t = not_null(r_42);
  if(match_cons(t, sym__2))
    {
      s_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
      t = v_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm w_42 (ATerm t)
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_71, _id, t);
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = Cons_2_0(_id, w_42, t);
      }
    return(t);
  }
  t = w_42(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  ATerm h_43 (ATerm t)
  {
    ATerm d_43 = NULL,e_43 = NULL;
    t = not_null(b_43);
    if(((e_43 != NULL) && (e_43 != t)))
      _fail(t);
    else
      e_43 = t;
    t = not_null(c_43);
    if(((d_43 != NULL) && (d_43 != t)))
      _fail(t);
    else
      d_43 = t;
    t = not_null(a_43);
    t = d_71(t);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm f_43 = NULL;
        ATerm i_43 (ATerm t)
        {
          ATerm g_43 = NULL;
          t = not_null(f_43);
          if(((g_43 != NULL) && (g_43 != t)))
            _fail(t);
          else
            g_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_43), not_null(g_43));
          t = c_71(t);
          return(t);
        }
        if(((f_43 != NULL) && (f_43 != t)))
          _fail(t);
        else
          f_43 = t;
        t = i_43(t);
        return(t);
      }
      t = fetch_1_0(m_3, t);
    }
    t = not_null(d_43);
    return(t);
  }
  if(((a_43 != NULL) && (a_43 != t)))
    _fail(t);
  else
    a_43 = t;
  t = not_null(a_43);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_43 = ATgetFirst((ATermList) t);
      c_43 = (ATerm) ATgetNext((ATermList) t);
      t = h_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  ATerm q_43 (ATerm t)
  {
    ATerm o_43 = NULL,p_43 = NULL;
    t = not_null(m_43);
    if(((p_43 != NULL) && (p_43 != t)))
      _fail(t);
    else
      p_43 = t;
    t = not_null(n_43);
    if(((o_43 != NULL) && (o_43 != t)))
      _fail(t);
    else
      o_43 = t;
    t = not_null(p_43);
    {
      ATerm r_43 (ATerm t)
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            {
              ATerm g_26 = t;
              int h_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = not_null(o_43);
                    return(t);
                  }
                  t = HdMember_p__2_0(u_70, n_3, t);
                  t = r_43(t);
                  ;
                  LocalPopChoice(h_26);
                }
              else
                {
                  t = g_26;
                  t = Cons_2_0(_id, r_43, t);
                }
            }
          }
        return(t);
      }
      t = r_43(t);
    }
    return(t);
  }
  if(((l_43 != NULL) && (l_43 != t)))
    _fail(t);
  else
    l_43 = t;
  t = not_null(l_43);
  if(match_cons(t, sym__2))
    {
      m_43 = ATgetArgument(t, 0);
      n_43 = ATgetArgument(t, 1);
      t = q_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  t = diff_1_0(eq_0_0, t);
  return(t);
}
ATerm split_2_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t)
{
  ATerm u_43 = NULL,w_43 = NULL;
  ATerm i_26;
  i_26 = t;
  {
    ATerm v_43 = NULL;
    ATerm y_43 (ATerm t)
    {
      t = not_null(v_43);
      if(((u_43 != NULL) && (u_43 != t)))
        _fail(t);
      else
        u_43 = t;
      t = not_null(v_43);
      return(t);
    }
    t = r_77(t);
    if(((v_43 != NULL) && (v_43 != t)))
      _fail(t);
    else
      v_43 = t;
    t = y_43(t);
  }
  t = i_26;
  {
    ATerm x_43 = NULL;
    ATerm z_43 (ATerm t)
    {
      t = not_null(x_43);
      if(((w_43 != NULL) && (w_43 != t)))
        _fail(t);
      else
        w_43 = t;
      t = not_null(x_43);
      return(t);
    }
    t = s_77(t);
    if(((x_43 != NULL) && (x_43 != t)))
      _fail(t);
    else
      x_43 = t;
    t = z_43(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(w_43));
  }
  return(t);
}
ATerm free_vars_3_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm d_44 (ATerm t)
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_87(t);
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_44 = NULL;
              ATerm n_26;
              n_26 = t;
              {
                ATerm c_44 = NULL;
                ATerm e_44 (ATerm t)
                {
                  t = not_null(c_44);
                  if(((b_44 != NULL) && (b_44 != t)))
                    _fail(t);
                  else
                    b_44 = t;
                  t = not_null(c_44);
                  return(t);
                }
                t = p_87(t);
                if(((c_44 != NULL) && (c_44 != t)))
                  _fail(t);
                else
                  c_44 = t;
                t = e_44(t);
              }
              t = n_26;
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm q_3 (ATerm t)
                  {
                    t = not_null(b_44);
                    return(t);
                  }
                  t = split_2_0(d_44, q_3, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm p_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = q_87(o_3, d_44, p_3, t);
                {
                  ATerm r_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(r_3, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              {
                ATerm s_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(s_3, union_0_0, d_44, t);
              }
            }
        }
      }
    return(t);
  }
  t = d_44(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              {
                ATerm u_26 = t;
                int v_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(v_26);
                  }
                else
                  {
                    t = u_26;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(Add1_0_0, t_3, tboundin_3_0, t);
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  ATerm l_44 (ATerm t)
  {
    ATerm k_44 = NULL;
    t = not_null(j_44);
    if(((k_44 != NULL) && (k_44 != t)))
      _fail(t);
    else
      k_44 = t;
    t = not_null(k_44);
    return(t);
  }
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  t = not_null(h_44);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_44 = ATgetFirst((ATermList) t);
      j_44 = (ATerm) ATgetNext((ATermList) t);
      t = l_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  ATerm x_44 (ATerm t)
  {
    ATerm s_44 = NULL,t_44 = NULL;
    t = not_null(q_44);
    if(((s_44 != NULL) && (s_44 != t)))
      _fail(t);
    else
      s_44 = t;
    t = not_null(r_44);
    if(((t_44 != NULL) && (t_44 != t)))
      _fail(t);
    else
      t_44 = t;
    t = not_null(p_44);
    {
      ATerm y_26;
      y_26 = t;
      {
        ATerm v_44 = NULL;
        ATerm w_44 = NULL;
        ATerm y_44 (ATerm t)
        {
          t = not_null(w_44);
          if(((v_44 != NULL) && (v_44 != t)))
            _fail(t);
          else
            v_44 = t;
          t = not_null(w_44);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_44), not_null(t_44));
        {
          ATerm z_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(a_27);
            }
          else
            {
              t = z_26;
              t = (ATerm) ATempty;
            }
          if(((w_44 != NULL) && (w_44 != t)))
            _fail(t);
          else
            w_44 = t;
          t = y_44(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_44), not_null(t_44), not_null(v_44));
        t = table_put_0_0(t);
      }
      t = y_26;
    }
    return(t);
  }
  if(((p_44 != NULL) && (p_44 != t)))
    _fail(t);
  else
    p_44 = t;
  t = not_null(p_44);
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      r_44 = ATgetArgument(t, 1);
      t = x_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  ATerm z_44 (ATerm t)
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = Cons_2_0(k_71, z_44, t);
      }
    return(t);
  }
  t = z_44(t);
  return(t);
}
ATerm end_scope_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  ATerm c_28;
  c_28 = t;
  {
    ATerm h_45 = NULL;
    ATerm n_45 (ATerm t)
    {
      ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
      ATerm o_45 (ATerm t)
      {
        t = not_null(j_45);
        if(((f_45 != NULL) && (f_45 != t)))
          _fail(t);
        else
          f_45 = t;
        t = not_null(k_45);
        if(((e_45 != NULL) && (e_45 != t)))
          _fail(t);
        else
          e_45 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(g_45), term_l_25, not_null(e_45));
        t = table_put_0_0(t);
        t = not_null(f_45);
        {
          ATerm u_3 (ATerm t)
          {
            ATerm l_45 = NULL;
            ATerm p_45 (ATerm t)
            {
              ATerm m_45 = NULL;
              t = not_null(l_45);
              if(((m_45 != NULL) && (m_45 != t)))
                _fail(t);
              else
                m_45 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_45), not_null(m_45));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((l_45 != NULL) && (l_45 != t)))
              _fail(t);
            else
              l_45 = t;
            t = p_45(t);
            return(t);
          }
          t = map_1_0(u_3, t);
        }
        return(t);
      }
      t = not_null(h_45);
      if(((g_45 != NULL) && (g_45 != t)))
        _fail(t);
      else
        g_45 = t;
      t = not_null(h_45);
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_45), term_l_25);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((i_45 != NULL) && (i_45 != t)))
          _fail(t);
        else
          i_45 = t;
        t = not_null(i_45);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_45 = ATgetFirst((ATermList) t);
            k_45 = (ATerm) ATgetNext((ATermList) t);
            t = o_45(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = s_74(t);
    if(((h_45 != NULL) && (h_45 != t)))
      _fail(t);
    else
      h_45 = t;
    t = n_45(t);
  }
  t = c_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_81(t);
      t = t_81(t);
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      t = t_81(t);
      _fail(t);
    }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
  ATerm n_28;
  n_28 = t;
  {
    ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
    ATerm z_45 (ATerm t)
    {
      t = not_null(w_45);
      if(((s_45 != NULL) && (s_45 != t)))
        _fail(t);
      else
        s_45 = t;
      t = not_null(x_45);
      if(((t_45 != NULL) && (t_45 != t)))
        _fail(t);
      else
        t_45 = t;
      t = not_null(y_45);
      if(((u_45 != NULL) && (u_45 != t)))
        _fail(t);
      else
        u_45 = t;
      t = not_null(v_45);
      t = SSL_table_put(not_null(s_45), not_null(t_45), not_null(u_45));
      return(t);
    }
    if(((v_45 != NULL) && (v_45 != t)))
      _fail(t);
    else
      v_45 = t;
    t = not_null(v_45);
    if(match_cons(t, sym__3))
      {
        w_45 = ATgetArgument(t, 0);
        x_45 = ATgetArgument(t, 1);
        y_45 = ATgetArgument(t, 2);
        t = z_45(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = n_28;
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  ATerm h_46 (ATerm t)
  {
    ATerm f_46 = NULL,g_46 = NULL;
    t = not_null(d_46);
    if(((f_46 != NULL) && (f_46 != t)))
      _fail(t);
    else
      f_46 = t;
    t = not_null(e_46);
    if(((g_46 != NULL) && (g_46 != t)))
      _fail(t);
    else
      g_46 = t;
    t = not_null(c_46);
    t = SSL_table_get(not_null(f_46), not_null(g_46));
    return(t);
  }
  if(((c_46 != NULL) && (c_46 != t)))
    _fail(t);
  else
    c_46 = t;
  t = not_null(c_46);
  if(match_cons(t, sym__2))
    {
      d_46 = ATgetArgument(t, 0);
      e_46 = ATgetArgument(t, 1);
      t = h_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm k_46 = NULL;
  ATerm o_28;
  o_28 = t;
  {
    ATerm l_46 = NULL;
    ATerm o_46 (ATerm t)
    {
      ATerm m_46 = NULL;
      t = not_null(l_46);
      if(((k_46 != NULL) && (k_46 != t)))
        _fail(t);
      else
        k_46 = t;
      t = not_null(l_46);
      {
        ATerm n_46 = NULL;
        ATerm p_46 (ATerm t)
        {
          t = not_null(n_46);
          if(((m_46 != NULL) && (m_46 != t)))
            _fail(t);
          else
            m_46 = t;
          t = not_null(n_46);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_46), term_l_25);
        {
          ATerm x_28 = t;
          int y_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(y_28);
            }
          else
            {
              t = x_28;
              t = (ATerm) ATempty;
            }
          if(((n_46 != NULL) && (n_46 != t)))
            _fail(t);
          else
            n_46 = t;
          t = p_46(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(k_46), term_l_25, (ATerm) ATinsert(CheckATermList(not_null(m_46)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = r_74(t);
    if(((l_46 != NULL) && (l_46 != t)))
      _fail(t);
    else
      l_46 = t;
    t = o_46(t);
  }
  t = o_28;
  return(t);
}
ATerm scope_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm t)
{
  t = begin_scope_1_0(t_74, t);
  {
    ATerm v_3 (ATerm t)
    {
      t = end_scope_1_0(t_74, t);
      return(t);
    }
    t = restore_always_2_0(u_74, v_3, t);
  }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = term_b_15;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm y_3 (ATerm t)
    {
      t = term_z_17;
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      ATerm z_28;
      z_28 = t;
      t = tvars_0_0(t);
      t = DefineUnbound_0_0(t);
      t = z_28;
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = sdef_ud_0_0(t);
            ;
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            {
              ATerm q_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = rdef_ud_0_0(t);
                  ;
                  LocalPopChoice(u_29);
                }
              else
                {
                  t = q_29;
                  t = overlay_ud_0_0(t);
                }
            }
          }
      }
      return(t);
    }
    t = scope_2_0(y_3, z_3, t);
    return(t);
  }
  t = scope_2_0(w_3, x_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm d_58 (ATerm), ATerm e_58 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  ATerm k_47 (ATerm t)
  {
    ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,e_47 = NULL;
    ATerm m_47 (ATerm t)
    {
      ATerm f_47 = NULL,g_47 = NULL;
      ATerm n_47 (ATerm t)
      {
        ATerm h_47 = NULL,i_47 = NULL;
        t = not_null(g_47);
        if(((h_47 != NULL) && (h_47 != t)))
          _fail(t);
        else
          h_47 = t;
        t = not_null(g_47);
        {
          ATerm j_47 = NULL;
          ATerm o_47 (ATerm t)
          {
            t = not_null(j_47);
            if(((i_47 != NULL) && (i_47 != t)))
              _fail(t);
            else
              i_47 = t;
            t = not_null(j_47);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_47)), not_null(f_47)), not_null(c_47));
          if(((j_47 != NULL) && (j_47 != t)))
            _fail(t);
          else
            j_47 = t;
          t = o_47(t);
          t = not_null(i_47);
        }
        return(t);
      }
      t = not_null(e_47);
      if(((f_47 != NULL) && (f_47 != t)))
        _fail(t);
      else
        f_47 = t;
      t = not_null(b_47);
      t = e_58(t);
      if(((g_47 != NULL) && (g_47 != t)))
        _fail(t);
      else
        g_47 = t;
      t = n_47(t);
      return(t);
    }
    t = not_null(w_46);
    if(((z_46 != NULL) && (z_46 != t)))
      _fail(t);
    else
      z_46 = t;
    t = not_null(x_46);
    if(((a_47 != NULL) && (a_47 != t)))
      _fail(t);
    else
      a_47 = t;
    t = not_null(y_46);
    if(((b_47 != NULL) && (b_47 != t)))
      _fail(t);
    else
      b_47 = t;
    t = not_null(w_46);
    {
      ATerm d_47 = NULL;
      ATerm l_47 (ATerm t)
      {
        t = not_null(d_47);
        if(((c_47 != NULL) && (c_47 != t)))
          _fail(t);
        else
          c_47 = t;
        t = not_null(d_47);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_46));
      if(((d_47 != NULL) && (d_47 != t)))
        _fail(t);
      else
        d_47 = t;
      t = l_47(t);
      t = not_null(a_47);
      t = d_58(t);
      if(((e_47 != NULL) && (e_47 != t)))
        _fail(t);
      else
        e_47 = t;
      t = m_47(t);
    }
    return(t);
  }
  if(((w_46 != NULL) && (w_46 != t)))
    _fail(t);
  else
    w_46 = t;
  t = not_null(w_46);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_46 = ATgetFirst((ATermList) t);
      y_46 = (ATerm) ATgetNext((ATermList) t);
      t = k_47(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              t = filter_1_0(r_80, t);
              return(t);
            }
            t = Cons_2_0(r_80, a_4, t);
            ;
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            {
              ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
              ATerm v_47 (ATerm t)
              {
                ATerm u_47 = NULL;
                t = not_null(t_47);
                if(((u_47 != NULL) && (u_47 != t)))
                  _fail(t);
                else
                  u_47 = t;
                t = not_null(u_47);
                t = filter_1_0(r_80, t);
                return(t);
              }
              if(((r_47 != NULL) && (r_47 != t)))
                _fail(t);
              else
                r_47 = t;
              t = not_null(r_47);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_47 = ATgetFirst((ATermList) t);
                  t_47 = (ATerm) ATgetNext((ATermList) t);
                  t = v_47(t);
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
ATerm defs_use_def_0_0 (ATerm t)
{
  ATerm n_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = n_30;
      {
        ATerm r_30;
        r_30 = t;
        {
          ATerm b_4 (ATerm t)
          {
            ATerm b_31 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_31;
              }
            return(t);
          }
          t = filter_1_0(b_4, t);
          t = Nil_0_0(t);
        }
        t = r_30;
      }
    }
  return(t);
}
ATerm Strategies_1_0 (ATerm h_58 (ATerm), ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL;
  ATerm l_48 (ATerm t)
  {
    ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,h_48 = NULL;
    ATerm n_48 (ATerm t)
    {
      ATerm i_48 = NULL,j_48 = NULL;
      t = not_null(h_48);
      if(((i_48 != NULL) && (i_48 != t)))
        _fail(t);
      else
        i_48 = t;
      t = not_null(h_48);
      {
        ATerm k_48 = NULL;
        ATerm o_48 (ATerm t)
        {
          t = not_null(k_48);
          if(((j_48 != NULL) && (j_48 != t)))
            _fail(t);
          else
            j_48 = t;
          t = not_null(k_48);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(i_48)), not_null(f_48));
        if(((k_48 != NULL) && (k_48 != t)))
          _fail(t);
        else
          k_48 = t;
        t = o_48(t);
        t = not_null(j_48);
      }
      return(t);
    }
    t = not_null(b_48);
    if(((d_48 != NULL) && (d_48 != t)))
      _fail(t);
    else
      d_48 = t;
    t = not_null(c_48);
    if(((e_48 != NULL) && (e_48 != t)))
      _fail(t);
    else
      e_48 = t;
    t = not_null(b_48);
    {
      ATerm g_48 = NULL;
      ATerm m_48 (ATerm t)
      {
        t = not_null(g_48);
        if(((f_48 != NULL) && (f_48 != t)))
          _fail(t);
        else
          f_48 = t;
        t = not_null(g_48);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_48));
      if(((g_48 != NULL) && (g_48 != t)))
        _fail(t);
      else
        g_48 = t;
      t = m_48(t);
      t = not_null(e_48);
      t = h_58(t);
      if(((h_48 != NULL) && (h_48 != t)))
        _fail(t);
      else
        h_48 = t;
      t = n_48(t);
    }
    return(t);
  }
  if(((b_48 != NULL) && (b_48 != t)))
    _fail(t);
  else
    b_48 = t;
  t = not_null(b_48);
  if(match_cons(t, sym_Strategies_1))
    {
      c_48 = ATgetArgument(t, 0);
      t = l_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm c_31;
  c_31 = t;
  {
    ATerm q_48 = NULL;
    ATerm r_48 = NULL;
    ATerm s_48 (ATerm t)
    {
      t = not_null(r_48);
      if(((q_48 != NULL) && (q_48 != t)))
        _fail(t);
      else
        q_48 = t;
      t = not_null(r_48);
      return(t);
    }
    if(((r_48 != NULL) && (r_48 != t)))
      _fail(t);
    else
      r_48 = t;
    t = s_48(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_18, (ATerm) ATinsert(ATempty, not_null(q_48)));
    t = printnl_0_0(t);
  }
  t = c_31;
  return(t);
}
ATerm record_failure_0_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm u_48 = NULL;
    ATerm w_48 (ATerm t)
    {
      ATerm v_48 = NULL;
      t = not_null(u_48);
      if(((v_48 != NULL) && (v_48 != t)))
        _fail(t);
      else
        v_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_48), term_d_31);
      t = add_0_0(t);
      return(t);
    }
    if(((u_48 != NULL) && (u_48 != t)))
      _fail(t);
    else
      u_48 = t;
    t = w_48(t);
    return(t);
  }
  t = _2_0(_id, c_4, t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  ATerm e_49 (ATerm t)
  {
    ATerm c_49 = NULL,d_49 = NULL;
    t = not_null(a_49);
    if(((c_49 != NULL) && (c_49 != t)))
      _fail(t);
    else
      c_49 = t;
    t = not_null(b_49);
    if(((d_49 != NULL) && (d_49 != t)))
      _fail(t);
    else
      d_49 = t;
    t = not_null(z_48);
    {
      ATerm e_31 = t;
      int f_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(c_49), not_null(d_49));
          ;
          LocalPopChoice(f_31);
        }
      else
        {
          t = e_31;
          t = SSL_addr(not_null(c_49), not_null(d_49));
        }
    }
    return(t);
  }
  if(((z_48 != NULL) && (z_48 != t)))
    _fail(t);
  else
    z_48 = t;
  t = not_null(z_48);
  if(match_cons(t, sym__2))
    {
      a_49 = ATgetArgument(t, 0);
      b_49 = ATgetArgument(t, 1);
      t = e_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm record_success_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm g_49 = NULL;
    ATerm i_49 (ATerm t)
    {
      ATerm h_49 = NULL;
      t = not_null(g_49);
      if(((h_49 != NULL) && (h_49 != t)))
        _fail(t);
      else
        h_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_49), term_d_31);
      t = add_0_0(t);
      return(t);
    }
    if(((g_49 != NULL) && (g_49 != t)))
      _fail(t);
    else
      g_49 = t;
    t = i_49(t);
    return(t);
  }
  t = _2_0(d_4, _id, t);
  return(t);
}
ATerm do_test_2_0 (ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm t)
{
  ATerm v_31;
  v_31 = t;
  t = d_90(t);
  t = debug_0_0(t);
  t = v_31;
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_31;
        z_31 = t;
        t = e_90(t);
        t = z_31;
        t = record_success_0_0(t);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = record_failure_0_0(t);
      }
  }
  return(t);
}
ATerm apply_and_fail_4_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_90(t);
        {
          ATerm c_32 = t;
          if((PushChoice() == 0))
            {
              t = w_90(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_32;
            }
        }
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        t = term_d_32;
        t = debug_0_0(t);
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(v_90, e_4, t);
  return(t);
}
ATerm apply_and_fail_3_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    t = term_i_21;
    return(t);
  }
  t = apply_and_fail_4_0(s_90, t_90, u_90, f_4, t);
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = term_e_32;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = Strategies_1_0(defs_use_def_0_0, t);
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_z_11, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATempty, term_q_8))), term_w_4)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_o_10, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATinsert(ATempty, term_w_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_t_9), term_q_8))), term_w_4)))))));
    return(t);
  }
  t = apply_and_fail_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm check_for_failures_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm k_49 = NULL;
    if(((k_49 != NULL) && (k_49 != t)))
      _fail(t);
    else
      k_49 = t;
    t = not_null(k_49);
    if(match_int(t, 0))
      {
        t = not_null(k_49);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = _2_0(_id, j_4, t);
  return(t);
}
ATerm _2_0 (ATerm u_56 (ATerm), ATerm v_56 (ATerm), ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  ATerm h_50 (ATerm t)
  {
    ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,b_50 = NULL;
    ATerm j_50 (ATerm t)
    {
      ATerm c_50 = NULL,d_50 = NULL;
      ATerm k_50 (ATerm t)
      {
        ATerm e_50 = NULL,f_50 = NULL;
        t = not_null(d_50);
        if(((e_50 != NULL) && (e_50 != t)))
          _fail(t);
        else
          e_50 = t;
        t = not_null(d_50);
        {
          ATerm g_50 = NULL;
          ATerm l_50 (ATerm t)
          {
            t = not_null(g_50);
            if(((f_50 != NULL) && (f_50 != t)))
              _fail(t);
            else
              f_50 = t;
            t = not_null(g_50);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_50), not_null(e_50)), not_null(z_49));
          if(((g_50 != NULL) && (g_50 != t)))
            _fail(t);
          else
            g_50 = t;
          t = l_50(t);
          t = not_null(f_50);
        }
        return(t);
      }
      t = not_null(b_50);
      if(((c_50 != NULL) && (c_50 != t)))
        _fail(t);
      else
        c_50 = t;
      t = not_null(y_49);
      t = v_56(t);
      if(((d_50 != NULL) && (d_50 != t)))
        _fail(t);
      else
        d_50 = t;
      t = k_50(t);
      return(t);
    }
    t = not_null(t_49);
    if(((w_49 != NULL) && (w_49 != t)))
      _fail(t);
    else
      w_49 = t;
    t = not_null(u_49);
    if(((x_49 != NULL) && (x_49 != t)))
      _fail(t);
    else
      x_49 = t;
    t = not_null(v_49);
    if(((y_49 != NULL) && (y_49 != t)))
      _fail(t);
    else
      y_49 = t;
    t = not_null(t_49);
    {
      ATerm a_50 = NULL;
      ATerm i_50 (ATerm t)
      {
        t = not_null(a_50);
        if(((z_49 != NULL) && (z_49 != t)))
          _fail(t);
        else
          z_49 = t;
        t = not_null(a_50);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_49));
      if(((a_50 != NULL) && (a_50 != t)))
        _fail(t);
      else
        a_50 = t;
      t = i_50(t);
      t = not_null(x_49);
      t = u_56(t);
      if(((b_50 != NULL) && (b_50 != t)))
        _fail(t);
      else
        b_50 = t;
      t = j_50(t);
    }
    return(t);
  }
  if(((t_49 != NULL) && (t_49 != t)))
    _fail(t);
  else
    t_49 = t;
  t = not_null(t_49);
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      v_49 = ATgetArgument(t, 1);
      t = h_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm report_test_0_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      t = term_f_32;
      return(t);
    }
    t = debug_1_0(m_4, t);
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      t = term_g_32;
      return(t);
    }
    t = debug_1_0(n_4, t);
    return(t);
  }
  t = _2_0(k_4, l_4, t);
  return(t);
}
ATerm init_record_0_0 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  ATerm t_50 (ATerm t)
  {
    ATerm r_50 = NULL,s_50 = NULL;
    t = not_null(p_50);
    if(((r_50 != NULL) && (r_50 != t)))
      _fail(t);
    else
      r_50 = t;
    t = not_null(q_50);
    if(((s_50 != NULL) && (s_50 != t)))
      _fail(t);
    else
      s_50 = t;
    t = not_null(o_50);
    {
      ATerm j_32;
      j_32 = t;
      t = SSL_printnl(not_null(r_50), not_null(s_50));
      t = j_32;
    }
    return(t);
  }
  if(((o_50 != NULL) && (o_50 != t)))
    _fail(t);
  else
    o_50 = t;
  t = not_null(o_50);
  if(match_cons(t, sym__2))
    {
      p_50 = ATgetArgument(t, 0);
      q_50 = ATgetArgument(t, 1);
      t = t_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm z_93 (ATerm), ATerm t)
{
  ATerm k_32;
  k_32 = t;
  {
    ATerm w_50 = NULL,y_50 = NULL;
    ATerm l_32;
    l_32 = t;
    {
      ATerm x_50 = NULL;
      ATerm a_51 (ATerm t)
      {
        t = not_null(x_50);
        if(((w_50 != NULL) && (w_50 != t)))
          _fail(t);
        else
          w_50 = t;
        t = not_null(x_50);
        return(t);
      }
      t = z_93(t);
      if(((x_50 != NULL) && (x_50 != t)))
        _fail(t);
      else
        x_50 = t;
      t = a_51(t);
    }
    t = l_32;
    {
      ATerm z_50 = NULL;
      ATerm b_51 (ATerm t)
      {
        t = not_null(z_50);
        if(((y_50 != NULL) && (y_50 != t)))
          _fail(t);
        else
          y_50 = t;
        t = not_null(z_50);
        return(t);
      }
      if(((z_50 != NULL) && (z_50 != t)))
        _fail(t);
      else
        z_50 = t;
      t = b_51(t);
      t = (ATerm) ATmakeAppl(sym__2, term_o_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_50)), not_null(w_50)));
      t = printnl_0_0(t);
    }
  }
  t = k_32;
  return(t);
}
ATerm test_suite_2_0 (ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm t)
{
  t = b_90(t);
  {
    ATerm o_4 (ATerm t)
    {
      t = term_m_32;
      return(t);
    }
    t = debug_1_0(o_4, t);
    t = init_record_0_0(t);
    t = c_90(t);
    t = report_test_0_0(t);
    t = check_for_failures_0_0(t);
  }
  return(t);
}
ATerm use_def_test_0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    t = term_n_32;
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = test1_0_0(t);
    t = test2_0_0(t);
    t = test3_0_0(t);
    t = test4_0_0(t);
    t = test5_0_0(t);
    t = test6_0_0(t);
    t = test7_0_0(t);
    t = test8_0_0(t);
    t = test9_0_0(t);
    t = test10_0_0(t);
    t = test11_0_0(t);
    t = test12_0_0(t);
    return(t);
  }
  t = test_suite_2_0(p_4, q_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_0_0(t);
  return(t);
}
