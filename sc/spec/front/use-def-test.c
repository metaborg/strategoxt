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
ATerm term_c_23;
ATerm term_b_23;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_o_21;
ATerm term_j_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_j_11;
ATerm term_d_11;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
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
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_h_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_v_5;
ATerm term_r_5;
ATerm term_q_5;
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
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_q_5);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_Var_1, term_v_5);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Build_1, term_g_5);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_6);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_5);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_Call_2, term_c_6, (ATerm) ATempty);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_Build_1, term_k_5);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Match_1, term_y_5);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_Str_1, term_x_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Var_1, term_p_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Str_1, term_b_7);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Var_1, term_r_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Call_2, term_v_7, (ATerm) ATempty);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Match_1, term_s_7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_7, term_x_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_4, term_y_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Call_2, term_i_8, (ATerm) ATempty);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_LChoice_2, term_w_7, term_j_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_8, term_x_4);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_8, term_x_4);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_LChoice_2, term_w_7, term_n_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Var_1, term_x_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Match_1, term_y_8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Str_1, term_e_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Build_1, term_y_8);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_9, term_w_7);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_App_2, term_w_7, term_y_8);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Match_1, term_z_6);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Var_1, term_r_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_14);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_o_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm test12_0 (ATerm);
ATerm test11_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm h_58 (ATerm));
ATerm test10_0 (ATerm);
ATerm test9_0 (ATerm);
ATerm test8_0 (ATerm);
ATerm test7_0 (ATerm);
ATerm test6_0 (ATerm);
ATerm test5_0 (ATerm);
ATerm test4_0 (ATerm);
ATerm test3_0 (ATerm);
ATerm apply_test_3 (ATerm, ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm));
ATerm test2_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm p_70 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm), ATerm k_63 (ATerm));
ATerm lchoice_1 (ATerm, ATerm o_70 (ATerm));
ATerm LChoice_2 (ATerm, ATerm e_63 (ATerm), ATerm f_63 (ATerm));
ATerm try_1 (ATerm, ATerm b_81 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm));
ATerm choice_1 (ATerm, ATerm n_70 (ATerm));
ATerm Choice_2 (ATerm, ATerm c_62 (ATerm), ATerm d_62 (ATerm));
ATerm error_0 (ATerm);
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm v_74 (ATerm));
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm));
ATerm RootApp_1 (ATerm, ATerm u_59 (ATerm));
ATerm App_2 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm u_74 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm a_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm v_62 (ATerm));
ATerm Build_1 (ATerm, ATerm w_62 (ATerm));
ATerm VarScope_1 (ATerm, ATerm k_70 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm t_74 (ATerm));
ATerm DefineUnbound_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm v_61 (ATerm));
ATerm RDefT_4 (ATerm, ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm o_61 (ATerm), ATerm p_61 (ATerm));
ATerm SDefT_4 (ATerm, ATerm g_65 (ATerm), ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm j_65 (ATerm));
ATerm Scope_2 (ATerm, ATerm y_62 (ATerm), ATerm z_62 (ATerm));
ATerm tboundin_3 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm w_70 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm m_73 (ATerm));
ATerm crush_3 (ATerm, ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm e_82 (ATerm));
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm s_71 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm a_71 (ATerm), ATerm b_71 (ATerm));
ATerm diff_1 (ATerm, ATerm s_70 (ATerm));
ATerm diff_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm));
ATerm free_vars_3 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm map_1 (ATerm, ATerm i_71 (ATerm));
ATerm end_scope_1 (ATerm, ATerm q_74 (ATerm));
ATerm restore_always_2 (ATerm, ATerm q_81 (ATerm), ATerm r_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm p_74 (ATerm));
ATerm scope_2 (ATerm, ATerm r_74 (ATerm), ATerm s_74 (ATerm));
ATerm def_use_def_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm));
ATerm filter_1 (ATerm, ATerm p_80 (ATerm));
ATerm defs_use_def_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm f_58 (ATerm));
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm b_90 (ATerm), ATerm c_90 (ATerm));
ATerm apply_and_fail_4 (ATerm, ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm w_90 (ATerm));
ATerm apply_and_fail_3 (ATerm, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm));
ATerm test1_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_93 (ATerm));
ATerm test_suite_2 (ATerm, ATerm z_89 (ATerm), ATerm a_90 (ATerm));
ATerm use_def_test_0 (ATerm);
ATerm main_0 (ATerm);
ATerm test12_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_r_4;
    return(t);
  }
  ATerm d_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDefT_4, term_s_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_u_4, (ATerm) ATinsert(ATempty, term_x_4)), (ATerm)ATmakeAppl(sym_Call_2, term_u_4, (ATerm) ATinsert(ATempty, term_y_4)), term_z_4));
    return(t);
  }
  t = apply_test_3(t, b_0, def_use_def_0, d_0);
  return(t);
}
ATerm test11_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_a_5;
    return(t);
  }
  ATerm g_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_g_5), term_e_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_h_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_k_5), term_j_5)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_g_5), term_e_5))), term_j_5))))));
    return(t);
  }
  t = apply_test_3(t, f_0, def_use_def_0, g_0);
  {
    ATerm i_0 (ATerm t)
    {
      t = term_l_5;
      return(t);
    }
    ATerm k_0 (ATerm t)
    {
      t = Strategies_1(t, defs_use_def_0);
      return(t);
    }
    ATerm m_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_m_5, (ATerm)ATinsert(ATempty, term_r_5), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_g_5), term_e_5)), (ATerm)ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_y_5), term_e_5))), term_j_5)), (ATerm) ATmakeAppl(sym_Seq_2, term_z_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_b_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_h_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_5, (ATerm) ATinsert(ATinsert(ATempty, term_k_5), term_j_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_d_6, (ATerm) ATmakeAppl(sym_Op_2, term_e_6, (ATerm) ATinsert(ATinsert(ATempty, term_j_5), term_e_5)))), term_h_6))))), term_m_6))))));
      return(t);
    }
    t = apply_test_3(t, i_0, k_0, m_0);
  }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm o_5 = NULL,p_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym_Overlays_1))
    {
      p_5 = ATgetArgument(o_5, 0);
      {
        ATerm s_5 = NULL,u_5 = NULL;
        ATerm t_5 = NULL;
        t = SSLgetAnnotations(not_null(o_5));
        {
          t_5 = t;
          if(((s_5 != NULL) && (s_5 != t_5)))
            _fail(t_5);
          else
            s_5 = t_5;
        }
        {
          t = not_null(p_5);
          {
            ATerm w_5 = NULL;
            t = h_58(t);
            {
              u_5 = t;
              {
                ATerm x_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(u_5)), not_null(s_5));
                {
                  x_5 = t;
                  if(((w_5 != NULL) && (w_5 != x_5)))
                    _fail(x_5);
                  else
                    w_5 = x_5;
                }
                t = not_null(w_5);
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
    t = term_n_6;
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = Overlays_1(t, defs_use_def_0);
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_f_5, (ATerm)ATinsert(ATinsert(ATempty, term_p_6), term_v_4), (ATerm) ATmakeAppl(sym_Op_2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), term_q_7), term_w_4)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_o_6, (ATerm)ATinsert(ATinsert(ATempty, term_p_6), term_v_4), (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_y_6), term_w_4)))))));
    return(t);
  }
  t = apply_and_fail_3(t, n_0, p_0, q_0);
  return(t);
}
ATerm test9_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = term_t_7;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4)), (ATerm)ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_s_7), term_z_6)), term_z_7)));
    return(t);
  }
  t = apply_test_3(t, s_0, def_use_def_0, t_0);
  {
    ATerm u_0 (ATerm t)
    {
      t = term_a_8;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4)), (ATerm)ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_s_7), term_z_6)), term_z_4)));
      return(t);
    }
    t = apply_and_fail_3(t, u_0, def_use_def_0, v_0);
  }
  return(t);
}
ATerm test8_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = term_b_8;
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4)), (ATerm)ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_s_7), term_z_6)), term_z_7));
    return(t);
  }
  t = apply_test_3(t, x_0, def_use_def_0, y_0);
  {
    ATerm z_0 (ATerm t)
    {
      t = term_c_8;
      return(t);
    }
    ATerm a_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4)), (ATerm)ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_s_7), term_z_6)), term_z_4));
      return(t);
    }
    t = apply_and_fail_3(t, z_0, def_use_def_0, a_1);
  }
  return(t);
}
ATerm test7_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_d_8;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATempty, term_z_6))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATempty, term_w_4))))));
    return(t);
  }
  t = apply_test_3(t, b_1, def_use_def_0, c_1);
  {
    ATerm d_1 (ATerm t)
    {
      t = term_e_8;
      return(t);
    }
    ATerm e_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATempty, term_w_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_w_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, d_1, def_use_def_0, e_1);
    {
      ATerm f_1 (ATerm t)
      {
        t = term_f_8;
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATempty, term_w_4))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))))));
        return(t);
      }
      t = apply_and_fail_3(t, f_1, def_use_def_0, g_1);
    }
  }
  return(t);
}
ATerm test6_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_g_8;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_l_8, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATempty, term_w_4)))));
    return(t);
  }
  t = apply_test_3(t, h_1, def_use_def_0, i_1);
  {
    ATerm j_1 (ATerm t)
    {
      t = term_m_8;
      return(t);
    }
    ATerm k_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_o_8, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATempty, term_w_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, j_1, def_use_def_0, k_1);
  }
  return(t);
}
ATerm test5_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_p_8;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_w_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATempty, term_w_4)))));
    return(t);
  }
  t = apply_test_3(t, l_1, def_use_def_0, m_1);
  {
    ATerm n_1 (ATerm t)
    {
      t = term_v_8;
      return(t);
    }
    ATerm o_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_w_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, n_1, def_use_def_0, o_1);
  }
  return(t);
}
ATerm test4_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    t = term_w_8;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_c_9, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_8), term_k_9))), term_g_9)))));
    return(t);
  }
  t = apply_and_fail_3(t, p_1, def_use_def_0, q_1);
  {
    ATerm r_1 (ATerm t)
    {
      t = term_l_9;
      return(t);
    }
    ATerm s_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_c_9, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_m_9), term_g_9)))));
      return(t);
    }
    t = apply_test_3(t, r_1, def_use_def_0, s_1);
    {
      ATerm t_1 (ATerm t)
      {
        t = term_n_9;
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_8), term_k_9))), term_g_9))));
        return(t);
      }
      t = apply_and_fail_3(t, t_1, def_use_def_0, u_1);
    }
  }
  return(t);
}
ATerm test3_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    t = term_o_9;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_p_6), (ATerm) ATmakeAppl(sym_Seq_2, term_p_9, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATempty, term_z_6))), term_w_4)))))));
    return(t);
  }
  t = apply_test_3(t, v_1, def_use_def_0, w_1);
  {
    ATerm x_1 (ATerm t)
    {
      t = term_q_9;
      return(t);
    }
    ATerm y_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_p_6), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_s_9), term_w_4))), term_z_6))))));
      return(t);
    }
    t = apply_and_fail_3(t, x_1, def_use_def_0, y_1);
  }
  return(t);
}
ATerm apply_test_3 (ATerm t, ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm t_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_90(t);
        t = k_90(t);
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = t_9;
        {
          t = term_z_9;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    return(t);
  }
  t = do_test_2(t, j_90, z_1);
  return(t);
}
ATerm test2_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATempty, term_z_6))), term_w_4)))));
    return(t);
  }
  t = apply_test_3(t, a_2, def_use_def_0, b_2);
  {
    ATerm c_2 (ATerm t)
    {
      t = term_e_10;
      return(t);
    }
    ATerm d_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_s_9), term_w_4))), term_z_6)))));
      return(t);
    }
    t = apply_and_fail_3(t, c_2, def_use_def_0, d_2);
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm g_6 = NULL;
  g_6 = t;
  f_6 :
  if(((ATgetType(g_6) == AT_LIST) && ATisEmpty(g_6)))
    {
      {
        ATerm i_6 = NULL,k_6 = NULL;
        ATerm g_10;
        g_10 = t;
        {
          ATerm j_6 = NULL;
          t = SSLgetAnnotations(not_null(g_6));
          {
            j_6 = t;
            if(((i_6 != NULL) && (i_6 != j_6)))
              _fail(j_6);
            else
              i_6 = j_6;
          }
        }
        t = g_10;
        {
          ATerm l_6 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_6));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym_Overlay_3))
    {
      s_6 = ATgetArgument(r_6, 0);
      t_6 = ATgetArgument(r_6, 1);
      u_6 = ATgetArgument(r_6, 2);
      {
        ATerm j_10;
        j_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_10, not_null(s_6)));
          {
            ATerm e_2 (ATerm t)
            {
              t = term_l_10;
              return(t);
            }
            t = assert_1(t, e_2);
            {
              t = not_null(t_6);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(u_6);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = j_10;
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
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  j_7 = t;
  c_7 :
  if(match_cons(j_7, sym_RDefT_4))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      m_7 = ATgetArgument(j_7, 2);
      f_7 = ATgetArgument(j_7, 3);
      d_7 :
      if(match_cons(f_7, sym_StratRule_3))
        {
          g_7 = ATgetArgument(f_7, 0);
          h_7 = ATgetArgument(f_7, 1);
          i_7 = ATgetArgument(f_7, 2);
          {
            ATerm m_10;
            m_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_10, not_null(k_7)));
              {
                ATerm f_2 (ATerm t)
                {
                  t = term_l_10;
                  return(t);
                }
                t = assert_1(t, f_2);
                {
                  t = not_null(m_7);
                  {
                    t = declared_vars_0(t);
                    {
                      t = DefineBound_0(t);
                      {
                        t = not_null(g_7);
                        {
                          t = unbound_vars_0(t);
                          {
                            t = not_null(h_7);
                            {
                              t = unbound_vars_0(t);
                              {
                                t = not_null(i_7);
                                t = unbound_vars_0(t);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = m_10;
          }
        }
      else
        {
          if(match_cons(f_7, sym_Rule_3))
            {
              g_7 = ATgetArgument(f_7, 0);
              h_7 = ATgetArgument(f_7, 1);
              i_7 = ATgetArgument(f_7, 2);
              {
                ATerm o_10;
                o_10 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_11, not_null(k_7)));
                  {
                    ATerm g_2 (ATerm t)
                    {
                      t = term_l_10;
                      return(t);
                    }
                    t = assert_1(t, g_2);
                    {
                      t = not_null(m_7);
                      {
                        t = declared_vars_0(t);
                        {
                          t = DefineBound_0(t);
                          {
                            t = not_null(g_7);
                            {
                              t = bind_vars_0(t);
                              {
                                t = not_null(i_7);
                                {
                                  t = unbound_vars_0(t);
                                  {
                                    t = not_null(h_7);
                                    t = use_vars_0(t);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = o_10;
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
      if(match_cons(j_7, sym_RDef_3))
        {
          k_7 = ATgetArgument(j_7, 0);
          l_7 = ATgetArgument(j_7, 1);
          m_7 = ATgetArgument(j_7, 2);
          e_7 :
          if(match_cons(m_7, sym_Rule_3))
            {
              n_7 = ATgetArgument(m_7, 0);
              o_7 = ATgetArgument(m_7, 1);
              p_7 = ATgetArgument(m_7, 2);
              {
                ATerm i_11;
                i_11 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_11, not_null(k_7)));
                  {
                    ATerm h_2 (ATerm t)
                    {
                      t = term_l_10;
                      return(t);
                    }
                    t = assert_1(t, h_2);
                    {
                      t = not_null(n_7);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(p_7);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(o_7);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = i_11;
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
ATerm guardedlchoice_1 (ATerm t, ATerm p_70 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = GuardedLChoice_3(t, p_70, p_70, _id);
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, p_70);
    return(t);
  }
  t = abstract_choice_2(t, i_2, j_2);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm), ATerm k_63 (ATerm))
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym_GuardedLChoice_3))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      u_8 = ATgetArgument(r_8, 2);
      {
        ATerm z_8 = NULL,b_9 = NULL;
        ATerm a_9 = NULL;
        t = SSLgetAnnotations(not_null(r_8));
        {
          a_9 = t;
          if(((z_8 != NULL) && (z_8 != a_9)))
            _fail(a_9);
          else
            z_8 = a_9;
        }
        {
          t = not_null(s_8);
          {
            ATerm d_9 = NULL;
            t = i_63(t);
            {
              b_9 = t;
              {
                t = not_null(t_8);
                {
                  ATerm f_9 = NULL;
                  t = j_63(t);
                  {
                    d_9 = t;
                    {
                      t = not_null(u_8);
                      {
                        ATerm h_9 = NULL;
                        t = k_63(t);
                        {
                          f_9 = t;
                          {
                            ATerm i_9 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(b_9), not_null(d_9), not_null(f_9)), not_null(z_8));
                            {
                              i_9 = t;
                              if(((h_9 != NULL) && (h_9 != i_9)))
                                _fail(i_9);
                              else
                                h_9 = i_9;
                            }
                            t = not_null(h_9);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    t = LChoice_2(t, o_70, _id);
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = LChoice_2(t, _id, o_70);
    return(t);
  }
  t = abstract_choice_2(t, k_2, l_2);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm e_63 (ATerm), ATerm f_63 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_LChoice_2))
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
            t = e_63(t);
            {
              d_10 = t;
              {
                t = not_null(x_9);
                {
                  ATerm h_10 = NULL;
                  t = f_63(t);
                  {
                    f_10 = t;
                    {
                      ATerm i_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(d_10), not_null(f_10)), not_null(b_10));
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
ATerm try_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm k_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_81(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = k_11;
      {
      }
    }
  return(t);
}
ATerm isect_Bound_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
      x_10 = t;
      r_10 :
      if(match_cons(x_10, sym__2))
        {
          y_10 = ATgetArgument(x_10, 0);
          z_10 = ATgetArgument(x_10, 1);
          s_10 :
          if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
            {
              a_11 = ATgetFirst((ATermList) z_10);
              c_11 = (ATerm) ATgetNext((ATermList) z_10);
              t_10 :
              if(match_cons(a_11, sym_Defined_1))
                {
                  b_11 = ATgetArgument(a_11, 0);
                  u_10 :
                  if(!(match_cons(y_10, sym_Scopes_0)))
                    {
                      ATerm r_11 = t;
                      int v_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_11;
                          w_11 = t;
                          {
                            ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_x_11, not_null(y_10));
                            {
                              t = table_get_0(t);
                              {
                                e_11 = t;
                                p_10 :
                                if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
                                  {
                                    f_11 = ATgetFirst((ATermList) e_11);
                                    h_11 = (ATerm) ATgetNext((ATermList) e_11);
                                    q_10 :
                                    if(match_cons(f_11, sym_Defined_1))
                                      {
                                        g_11 = ATgetArgument(f_11, 0);
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
                          t = w_11;
                          ;
                          LocalPopChoice(v_11);
                        }
                      else
                        {
                          t = r_11;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_10), (ATerm) ATinsert(ATempty, term_y_11));
                        }
                    }
                }
              else
                {
                  v_10 :
                  if(!(match_cons(y_10, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              w_10 :
              if(!(match_cons(y_10, sym_Scopes_0)))
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
    t = try_1(t, n_2);
    return(t);
  }
  t = map_1(t, m_2);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym__2))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      {
        t = not_null(p_11);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
            s_11 = t;
            l_11 :
            if(match_cons(s_11, sym__2))
              {
                t_11 = ATgetArgument(s_11, 0);
                u_11 = ATgetArgument(s_11, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(o_11), not_null(t_11), not_null(u_11));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_2);
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
  ATerm a_12 = NULL;
  a_12 = t;
  t = SSL_table_destroy(not_null(a_12));
  return(t);
}
ATerm restore_Bound_0 (ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  {
    ATerm z_11;
    z_11 = t;
    {
      t = term_x_11;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_11, not_null(e_12));
          t = table_putlist_0(t);
        }
      }
    }
    t = z_11;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  t = SSL_table_keys(not_null(i_12));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  {
    t = table_keys_0(t);
    {
      ATerm p_2 (ATerm t)
      {
        ATerm q_12 = NULL;
        ATerm s_12 = NULL;
        q_12 = t;
        {
          ATerm t_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), not_null(q_12));
          {
            t = table_get_0(t);
            {
              t_12 = t;
              if(((s_12 != NULL) && (s_12 != t_12)))
                _fail(t_12);
              else
                s_12 = t_12;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), not_null(s_12));
        }
        return(t);
      }
      t = map_1(t, p_2);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_x_11;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm))
{
  ATerm z_12 = NULL,b_13 = NULL;
  ATerm b_12;
  b_12 = t;
  {
    ATerm a_13 = NULL;
    t = save_Bound_0(t);
    {
      a_13 = t;
      if(((z_12 != NULL) && (z_12 != a_13)))
        _fail(a_13);
      else
        z_12 = a_13;
    }
  }
  t = b_12;
  {
    t = l_70(t);
    {
      ATerm c_12;
      c_12 = t;
      {
        ATerm c_13 = NULL;
        t = save_Bound_0(t);
        {
          c_13 = t;
          {
            if(((b_13 != NULL) && (b_13 != c_13)))
              _fail(c_13);
            else
              b_13 = c_13;
            {
              t = not_null(z_12);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = c_12;
      {
        t = m_70(t);
        {
          ATerm d_12;
          d_12 = t;
          {
            t = not_null(b_13);
            t = isect_Bound_0(t);
          }
          t = d_12;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm n_70 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    t = Choice_2(t, n_70, _id);
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = Choice_2(t, _id, n_70);
    return(t);
  }
  t = abstract_choice_2(t, q_2, r_2);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm c_62 (ATerm), ATerm d_62 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_Choice_2))
    {
      m_13 = ATgetArgument(l_13, 0);
      n_13 = ATgetArgument(l_13, 1);
      {
        ATerm r_13 = NULL,t_13 = NULL;
        ATerm s_13 = NULL;
        t = SSLgetAnnotations(not_null(l_13));
        {
          s_13 = t;
          if(((r_13 != NULL) && (r_13 != s_13)))
            _fail(s_13);
          else
            r_13 = s_13;
        }
        {
          t = not_null(m_13);
          {
            ATerm v_13 = NULL;
            t = c_62(t);
            {
              t_13 = t;
              {
                t = not_null(n_13);
                {
                  ATerm x_13 = NULL;
                  t = d_62(t);
                  {
                    v_13 = t;
                    {
                      ATerm y_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(t_13), not_null(v_13)), not_null(r_13));
                      {
                        y_13 = t;
                        if(((x_13 != NULL) && (x_13 != y_13)))
                          _fail(y_13);
                        else
                          x_13 = y_13;
                      }
                      t = not_null(x_13);
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
  ATerm f_12;
  f_12 = t;
  {
    ATerm f_14 = NULL;
    ATerm g_14 = NULL;
    g_14 = t;
    if(((f_14 != NULL) && (f_14 != g_14)))
      _fail(g_14);
    else
      f_14 = g_14;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_12, not_null(f_14));
      t = printnl_0(t);
    }
  }
  t = f_12;
  return(t);
}
ATerm Context_0 (ATerm t)
{
  ATerm g_15 = NULL;
  g_15 = t;
  {
    ATerm h_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_15 = NULL;
        ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm s_2 (ATerm t)
          {
            t = term_l_10;
            return(t);
          }
          t = rewrite_1(t, s_2);
          {
            k_15 = t;
            p_14 :
            if(match_cons(k_15, sym_Defined_2))
              {
                l_15 = ATgetArgument(k_15, 0);
                m_15 = ATgetArgument(k_15, 1);
                q_14 :
                if(match_string(l_15, "o_0"))
                  {
                    if(((j_15 != NULL) && (j_15 != m_15)))
                      _fail(m_15);
                    else
                      j_15 = m_15;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_15)), term_l_12), not_null(j_15)), term_k_12);
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = h_12;
        {
          ATerm m_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_15 = NULL;
              ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm t_2 (ATerm t)
                {
                  t = term_l_10;
                  return(t);
                }
                t = rewrite_1(t, t_2);
                {
                  q_15 = t;
                  s_14 :
                  if(match_cons(q_15, sym_Defined_2))
                    {
                      r_15 = ATgetArgument(q_15, 0);
                      s_15 = ATgetArgument(q_15, 1);
                      t_14 :
                      if(match_string(r_15, "l_0"))
                        {
                          if(((p_15 != NULL) && (p_15 != s_15)))
                            _fail(s_15);
                          else
                            p_15 = s_15;
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_15)), term_l_12), not_null(p_15)), term_p_12);
              ;
              LocalPopChoice(n_12);
            }
          else
            {
              t = m_12;
              {
                ATerm r_12 = t;
                int u_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_15 = NULL;
                    ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm u_2 (ATerm t)
                      {
                        t = term_l_10;
                        return(t);
                      }
                      t = rewrite_1(t, u_2);
                      {
                        w_15 = t;
                        v_14 :
                        if(match_cons(w_15, sym_Defined_2))
                          {
                            x_15 = ATgetArgument(w_15, 0);
                            y_15 = ATgetArgument(w_15, 1);
                            w_14 :
                            if(match_string(x_15, "j_0"))
                              {
                                if(((v_15 != NULL) && (v_15 != y_15)))
                                  _fail(y_15);
                                else
                                  v_15 = y_15;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_15)), term_l_12), not_null(v_15)), term_p_12);
                    ;
                    LocalPopChoice(u_12);
                  }
                else
                  {
                    t = r_12;
                    {
                      ATerm v_12 = t;
                      int w_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_16 = NULL;
                          ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
                          t = (ATerm) ATempty;
                          {
                            ATerm v_2 (ATerm t)
                            {
                              t = term_l_10;
                              return(t);
                            }
                            t = rewrite_1(t, v_2);
                            {
                              c_16 = t;
                              y_14 :
                              if(match_cons(c_16, sym_Defined_2))
                                {
                                  d_16 = ATgetArgument(c_16, 0);
                                  e_16 = ATgetArgument(c_16, 1);
                                  z_14 :
                                  if(match_string(d_16, "h_0"))
                                    {
                                      if(((b_16 != NULL) && (b_16 != e_16)))
                                        _fail(e_16);
                                      else
                                        b_16 = e_16;
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
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_15)), term_l_12), not_null(b_16)), term_p_12);
                          ;
                          LocalPopChoice(w_12);
                        }
                      else
                        {
                          t = v_12;
                          {
                            ATerm x_12 = t;
                            int y_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_16 = NULL;
                                ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
                                t = (ATerm) ATempty;
                                {
                                  ATerm w_2 (ATerm t)
                                  {
                                    t = term_l_10;
                                    return(t);
                                  }
                                  t = rewrite_1(t, w_2);
                                  {
                                    i_16 = t;
                                    b_15 :
                                    if(match_cons(i_16, sym_Defined_2))
                                      {
                                        j_16 = ATgetArgument(i_16, 0);
                                        k_16 = ATgetArgument(i_16, 1);
                                        c_15 :
                                        if(match_string(j_16, "e_0"))
                                          {
                                            if(((h_16 != NULL) && (h_16 != k_16)))
                                              _fail(k_16);
                                            else
                                              h_16 = k_16;
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
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_15)), term_l_12), not_null(h_16)), term_d_13);
                                ;
                                LocalPopChoice(y_12);
                              }
                            else
                              {
                                t = x_12;
                                {
                                  ATerm n_16 = NULL;
                                  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
                                  t = (ATerm) ATempty;
                                  {
                                    ATerm x_2 (ATerm t)
                                    {
                                      t = term_l_10;
                                      return(t);
                                    }
                                    t = rewrite_1(t, x_2);
                                    {
                                      o_16 = t;
                                      e_15 :
                                      if(match_cons(o_16, sym_Defined_2))
                                        {
                                          p_16 = ATgetArgument(o_16, 0);
                                          q_16 = ATgetArgument(o_16, 1);
                                          f_15 :
                                          if(match_string(p_16, "c_0"))
                                            {
                                              if(((n_16 != NULL) && (n_16 != q_16)))
                                                _fail(q_16);
                                              else
                                                n_16 = q_16;
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
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_15)), term_l_12), not_null(n_16)), term_d_13);
                                }
                              }
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
ATerm Unbound_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym_Var_1))
    {
      g_17 = ATgetArgument(f_17, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_13), not_null(g_17)), term_e_13);
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
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
    {
      m_17 = ATgetFirst((ATermList) l_17);
      n_17 = (ATerm) ATgetNext((ATermList) l_17);
      t = not_null(m_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym__2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(u_17));
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
ATerm rewrite_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm a_18 = NULL;
  ATerm c_18 = NULL;
  a_18 = t;
  {
    ATerm d_18 = NULL;
    t = term_g_13;
    {
      t = v_74(t);
      {
        d_18 = t;
        if(((c_18 != NULL) && (c_18 != d_18)))
          _fail(d_18);
        else
          c_18 = d_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), not_null(a_18));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Bound_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_Var_1))
    {
      r_18 = ATgetArgument(q_18, 0);
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_18 = NULL,v_18 = NULL;
            t = not_null(q_18);
            {
              ATerm y_2 (ATerm t)
              {
                t = term_x_11;
                return(t);
              }
              t = rewrite_1(t, y_2);
              {
                u_18 = t;
                j_18 :
                if(match_cons(u_18, sym_Defined_1))
                  {
                    v_18 = ATgetArgument(u_18, 0);
                    k_18 :
                    if(!(match_string(v_18, "w_0")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_18));
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            {
              ATerm j_13 = t;
              int o_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_18 = NULL;
                  t = not_null(q_18);
                  {
                    ATerm z_2 (ATerm t)
                    {
                      t = term_x_11;
                      return(t);
                    }
                    t = rewrite_1(t, z_2);
                    {
                      y_18 = t;
                      m_18 :
                      if(match_cons(y_18, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_y_11;
                  ;
                  LocalPopChoice(o_13);
                }
              else
                {
                  t = j_13;
                  {
                    ATerm b_19 = NULL,c_19 = NULL;
                    t = not_null(q_18);
                    {
                      ATerm a_3 (ATerm t)
                      {
                        t = term_x_11;
                        return(t);
                      }
                      t = rewrite_1(t, a_3);
                      {
                        b_19 = t;
                        n_18 :
                        if(match_cons(b_19, sym_Defined_1))
                          {
                            c_19 = ATgetArgument(b_19, 0);
                            o_18 :
                            if(!(match_string(c_19, "r_0")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_18));
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
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(q_13);
      {
        ATerm u_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = u_13;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = p_13;
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(a_14);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = z_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(c_14);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = b_14;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_Rule_3))
    {
      p_19 = ATgetArgument(o_19, 0);
      q_19 = ATgetArgument(o_19, 1);
      r_19 = ATgetArgument(o_19, 2);
      {
        ATerm w_19 = NULL,y_19 = NULL;
        ATerm x_19 = NULL;
        t = SSLgetAnnotations(not_null(o_19));
        {
          x_19 = t;
          if(((w_19 != NULL) && (w_19 != x_19)))
            _fail(x_19);
          else
            w_19 = x_19;
        }
        {
          t = not_null(p_19);
          {
            ATerm a_20 = NULL;
            t = v_60(t);
            {
              y_19 = t;
              {
                t = not_null(q_19);
                {
                  ATerm c_20 = NULL;
                  t = w_60(t);
                  {
                    a_20 = t;
                    {
                      t = not_null(r_19);
                      {
                        ATerm e_20 = NULL;
                        t = x_60(t);
                        {
                          c_20 = t;
                          {
                            ATerm f_20 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(y_19), not_null(a_20), not_null(c_20)), not_null(w_19));
                            {
                              f_20 = t;
                              if(((e_20 != NULL) && (e_20 != f_20)))
                                _fail(f_20);
                              else
                                e_20 = f_20;
                            }
                            t = not_null(e_20);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm r_20 = NULL,s_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym_RootApp_1))
    {
      s_20 = ATgetArgument(r_20, 0);
      {
        ATerm v_20 = NULL,x_20 = NULL;
        ATerm w_20 = NULL;
        t = SSLgetAnnotations(not_null(r_20));
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
        {
          t = not_null(s_20);
          {
            ATerm z_20 = NULL;
            t = u_59(t);
            {
              x_20 = t;
              {
                ATerm a_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(x_20)), not_null(v_20));
                {
                  a_21 = t;
                  if(((z_20 != NULL) && (z_20 != a_21)))
                    _fail(a_21);
                  else
                    z_20 = a_21;
                }
                t = not_null(z_20);
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
ATerm App_2 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm))
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym_App_2))
    {
      m_21 = ATgetArgument(l_21, 0);
      n_21 = ATgetArgument(l_21, 1);
      {
        ATerm r_21 = NULL,t_21 = NULL;
        ATerm s_21 = NULL;
        t = SSLgetAnnotations(not_null(l_21));
        {
          s_21 = t;
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
        }
        {
          t = not_null(m_21);
          {
            ATerm v_21 = NULL;
            t = s_59(t);
            {
              t_21 = t;
              {
                t = not_null(n_21);
                {
                  ATerm x_21 = NULL;
                  t = t_59(t);
                  {
                    v_21 = t;
                    {
                      ATerm y_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(t_21), not_null(v_21)), not_null(r_21));
                      {
                        y_21 = t;
                        if(((x_21 != NULL) && (x_21 != y_21)))
                          _fail(y_21);
                        else
                          x_21 = y_21;
                      }
                      t = not_null(x_21);
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
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym__3))
    {
      j_22 = ATgetArgument(i_22, 0);
      k_22 = ATgetArgument(i_22, 1);
      l_22 = ATgetArgument(i_22, 2);
      {
        ATerm p_22 = NULL;
        ATerm d_14;
        d_14 = t;
        {
          ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), not_null(k_22));
          {
            t = table_get_0(t);
            {
              q_22 = t;
              g_22 :
              if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
                {
                  r_22 = ATgetFirst((ATermList) q_22);
                  s_22 = (ATerm) ATgetNext((ATermList) q_22);
                  {
                    if(((p_22 != NULL) && (p_22 != s_22)))
                      _fail(s_22);
                    else
                      p_22 = s_22;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(j_22), not_null(k_22), (ATerm) ATinsert(CheckATermList(not_null(p_22)), not_null(l_22)));
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
        t = d_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym__2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm d_23 = NULL;
        ATerm e_14;
        e_14 = t;
        {
          ATerm e_23 = NULL;
          t = u_74(t);
          {
            e_23 = t;
            {
              if(((d_23 != NULL) && (d_23 != e_23)))
                _fail(e_23);
              else
                d_23 = e_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_23), not_null(z_22), not_null(a_23));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = e_14;
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
  ATerm j_23 = NULL,k_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym_Var_1))
    {
      k_23 = ATgetArgument(j_23, 0);
      {
        ATerm h_14;
        h_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_23)), term_j_14);
          {
            ATerm b_3 (ATerm t)
            {
              t = term_x_11;
              return(t);
            }
            t = override_key_1(t, b_3);
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
ATerm Var_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_Var_1))
    {
      b_24 = ATgetArgument(a_24, 0);
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_24 = NULL,g_24 = NULL;
            ATerm f_24 = NULL;
            t = SSLgetAnnotations(not_null(a_24));
            {
              f_24 = t;
              if(((e_24 != NULL) && (e_24 != f_24)))
                _fail(f_24);
              else
                e_24 = f_24;
            }
            {
              t = not_null(b_24);
              {
                ATerm p_26 = NULL;
                t = a_0(t);
                {
                  g_24 = t;
                  {
                    ATerm u_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(g_24)), not_null(e_24));
                    {
                      u_26 = t;
                      if(((p_26 != NULL) && (p_26 != u_26)))
                        _fail(u_26);
                      else
                        p_26 = u_26;
                    }
                    t = not_null(p_26);
                  }
                }
              }
            }
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            {
              ATerm m_14 = t;
              int n_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_27 = NULL,c_27 = NULL;
                  ATerm b_27 = NULL;
                  t = SSLgetAnnotations(not_null(a_24));
                  {
                    b_27 = t;
                    if(((a_27 != NULL) && (a_27 != b_27)))
                      _fail(b_27);
                    else
                      a_27 = b_27;
                  }
                  {
                    t = not_null(b_24);
                    {
                      ATerm e_27 = NULL;
                      t = a_0(t);
                      {
                        c_27 = t;
                        {
                          ATerm f_27 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_27)), not_null(a_27));
                          {
                            f_27 = t;
                            if(((e_27 != NULL) && (e_27 != f_27)))
                              _fail(f_27);
                            else
                              e_27 = f_27;
                          }
                          t = not_null(e_27);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(n_14);
                }
              else
                {
                  t = m_14;
                  {
                    ATerm i_27 = NULL,k_27 = NULL;
                    ATerm j_27 = NULL;
                    t = SSLgetAnnotations(not_null(a_24));
                    {
                      j_27 = t;
                      if(((i_27 != NULL) && (i_27 != j_27)))
                        _fail(j_27);
                      else
                        i_27 = j_27;
                    }
                    {
                      t = not_null(b_24);
                      {
                        ATerm m_27 = NULL;
                        t = a_0(t);
                        {
                          k_27 = t;
                          {
                            ATerm n_27 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_27)), not_null(i_27));
                            {
                              n_27 = t;
                              if(((m_27 != NULL) && (m_27 != n_27)))
                                _fail(n_27);
                              else
                                m_27 = n_27;
                            }
                            t = not_null(m_27);
                          }
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
  ATerm o_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(r_14);
      t = Binding_0(t);
    }
  else
    {
      t = o_14;
      {
        ATerm u_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(x_14);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = u_14;
            {
              ATerm a_15 = t;
              int d_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(d_15);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = a_15;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym_Match_1))
    {
      i_28 = ATgetArgument(h_28, 0);
      {
        ATerm n_28 = NULL,p_28 = NULL;
        ATerm o_28 = NULL;
        t = SSLgetAnnotations(not_null(h_28));
        {
          o_28 = t;
          if(((n_28 != NULL) && (n_28 != o_28)))
            _fail(o_28);
          else
            n_28 = o_28;
        }
        {
          t = not_null(i_28);
          {
            ATerm r_28 = NULL;
            t = v_62(t);
            {
              p_28 = t;
              {
                ATerm s_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(p_28)), not_null(n_28));
                {
                  s_28 = t;
                  if(((r_28 != NULL) && (r_28 != s_28)))
                    _fail(s_28);
                  else
                    r_28 = s_28;
                }
                t = not_null(r_28);
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
ATerm Build_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm c_29 = NULL,d_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym_Build_1))
    {
      d_29 = ATgetArgument(c_29, 0);
      {
        ATerm g_29 = NULL,i_29 = NULL;
        ATerm h_29 = NULL;
        t = SSLgetAnnotations(not_null(c_29));
        {
          h_29 = t;
          if(((g_29 != NULL) && (g_29 != h_29)))
            _fail(h_29);
          else
            g_29 = h_29;
        }
        {
          t = not_null(d_29);
          {
            ATerm k_29 = NULL;
            t = w_62(t);
            {
              i_29 = t;
              {
                ATerm l_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(i_29)), not_null(g_29));
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
ATerm VarScope_1 (ATerm t, ATerm k_70 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, k_70);
    return(t);
  }
  t = scope_2(t, c_3, d_3);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(i_15);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = h_15;
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(o_15);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = n_15;
            {
              ATerm t_15 = t;
              int u_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(u_15);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = t_15;
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
                          ATerm f_16 = t;
                          int g_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(g_16);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = f_16;
                              {
                                ATerm l_16 = t;
                                int m_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(m_16);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = l_16;
                                    {
                                      ATerm r_16 = t;
                                      int s_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(s_16);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = r_16;
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
ATerm DefineBound_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm r_29 = NULL;
    r_29 = t;
    {
      ATerm t_16;
      t_16 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_29)), term_v_16);
        {
          ATerm f_3 (ATerm t)
          {
            t = term_x_11;
            return(t);
          }
          t = assert_1(t, f_3);
        }
      }
      t = t_16;
    }
    return(t);
  }
  t = map_1(t, e_3);
  return(t);
}
ATerm sdef_ud_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  y_29 = t;
  w_29 :
  if(match_cons(y_29, sym_SDefT_4))
    {
      z_29 = ATgetArgument(y_29, 0);
      a_30 = ATgetArgument(y_29, 1);
      b_30 = ATgetArgument(y_29, 2);
      x_29 = ATgetArgument(y_29, 3);
      {
        ATerm w_16;
        w_16 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_16, not_null(z_29)));
          {
            ATerm g_3 (ATerm t)
            {
              t = term_l_10;
              return(t);
            }
            t = assert_1(t, g_3);
            {
              t = not_null(b_30);
              {
                t = declared_vars_0(t);
                {
                  t = DefineBound_0(t);
                  {
                    t = not_null(x_29);
                    t = unbound_vars_0(t);
                  }
                }
              }
            }
          }
        }
        t = w_16;
      }
    }
  else
    {
      if(match_cons(y_29, sym_SDef_3))
        {
          z_29 = ATgetArgument(y_29, 0);
          a_30 = ATgetArgument(y_29, 1);
          b_30 = ATgetArgument(y_29, 2);
          {
            ATerm y_16;
            y_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_16, not_null(z_29)));
              {
                ATerm h_3 (ATerm t)
                {
                  t = term_l_10;
                  return(t);
                }
                t = assert_1(t, h_3);
                {
                  t = not_null(b_30);
                  t = unbound_vars_0(t);
                }
              }
            }
            t = y_16;
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  q_30 = t;
  n_30 :
  if(match_cons(q_30, sym__3))
    {
      r_30 = ATgetArgument(q_30, 0);
      s_30 = ATgetArgument(q_30, 1);
      t_30 = ATgetArgument(q_30, 2);
      {
        ATerm a_17;
        a_17 = t;
        {
          ATerm x_30 = NULL;
          ATerm y_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_30), not_null(s_30));
          {
            ATerm b_17 = t;
            int c_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_17);
              }
            else
              {
                t = b_17;
                t = (ATerm) ATempty;
              }
            {
              y_30 = t;
              if(((x_30 != NULL) && (x_30 != y_30)))
                _fail(y_30);
              else
                x_30 = y_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_30), not_null(s_30), (ATerm) ATinsert(CheckATermList(not_null(x_30)), not_null(t_30)));
            t = table_put_0(t);
          }
        }
        t = a_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym__2))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      {
        ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
        ATerm d_17;
        d_17 = t;
        {
          ATerm o_31 = NULL;
          ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
          t = t_74(t);
          {
            o_31 = t;
            {
              if(((l_31 != NULL) && (l_31 != o_31)))
                _fail(o_31);
              else
                l_31 = o_31;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_31), not_null(h_31), not_null(i_31));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_17 = t;
                    int i_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), term_j_17);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(i_17);
                      }
                    else
                      {
                        t = h_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_31 = t;
                      e_31 :
                      if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
                        {
                          q_31 = ATgetFirst((ATermList) p_31);
                          r_31 = (ATerm) ATgetNext((ATermList) p_31);
                          {
                            if(((m_31 != NULL) && (m_31 != q_31)))
                              _fail(q_31);
                            else
                              m_31 = q_31;
                            {
                              if(((n_31 != NULL) && (n_31 != r_31)))
                                _fail(r_31);
                              else
                                n_31 = r_31;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_31), term_j_17, (ATerm) ATinsert(CheckATermList(not_null(n_31)), (ATerm) ATinsert(CheckATermList(not_null(m_31)), not_null(h_31))));
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
        t = d_17;
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
  ATerm i_3 (ATerm t)
  {
    ATerm p_32 = NULL;
    p_32 = t;
    {
      ATerm o_17;
      o_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_32)), term_y_11);
        {
          ATerm j_3 (ATerm t)
          {
            t = term_x_11;
            return(t);
          }
          t = assert_1(t, j_3);
        }
      }
      t = o_17;
    }
    return(t);
  }
  t = map_1(t, i_3);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm d_33 = NULL,e_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym_DynamicRules_1))
    {
      e_33 = ATgetArgument(d_33, 0);
      {
        ATerm n_33 = NULL,p_33 = NULL;
        ATerm o_33 = NULL;
        t = SSLgetAnnotations(not_null(d_33));
        {
          o_33 = t;
          if(((n_33 != NULL) && (n_33 != o_33)))
            _fail(o_33);
          else
            n_33 = o_33;
        }
        {
          t = not_null(e_33);
          {
            ATerm r_33 = NULL;
            t = v_61(t);
            {
              p_33 = t;
              {
                ATerm s_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(p_33)), not_null(n_33));
                {
                  s_33 = t;
                  if(((r_33 != NULL) && (r_33 != s_33)))
                    _fail(s_33);
                  else
                    r_33 = s_33;
                }
                t = not_null(r_33);
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
ATerm RDefT_4 (ATerm t, ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm o_61 (ATerm), ATerm p_61 (ATerm))
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  m_34 = t;
  l_34 :
  if(match_cons(m_34, sym_RDefT_4))
    {
      n_34 = ATgetArgument(m_34, 0);
      o_34 = ATgetArgument(m_34, 1);
      p_34 = ATgetArgument(m_34, 2);
      q_34 = ATgetArgument(m_34, 3);
      {
        ATerm w_34 = NULL,y_34 = NULL;
        ATerm x_34 = NULL;
        t = SSLgetAnnotations(not_null(m_34));
        {
          x_34 = t;
          if(((w_34 != NULL) && (w_34 != x_34)))
            _fail(x_34);
          else
            w_34 = x_34;
        }
        {
          t = not_null(n_34);
          {
            ATerm a_35 = NULL;
            t = m_61(t);
            {
              y_34 = t;
              {
                t = not_null(o_34);
                {
                  ATerm c_35 = NULL;
                  t = n_61(t);
                  {
                    a_35 = t;
                    {
                      t = not_null(p_34);
                      {
                        ATerm e_35 = NULL;
                        t = o_61(t);
                        {
                          c_35 = t;
                          {
                            t = not_null(q_34);
                            {
                              ATerm g_35 = NULL;
                              t = p_61(t);
                              {
                                e_35 = t;
                                {
                                  ATerm h_35 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(y_34), not_null(a_35), not_null(c_35), not_null(e_35)), not_null(w_34));
                                  {
                                    h_35 = t;
                                    if(((g_35 != NULL) && (g_35 != h_35)))
                                      _fail(h_35);
                                    else
                                      g_35 = h_35;
                                  }
                                  t = not_null(g_35);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDefT_4 (ATerm t, ATerm g_65 (ATerm), ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm j_65 (ATerm))
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_SDefT_4))
    {
      y_35 = ATgetArgument(x_35, 0);
      z_35 = ATgetArgument(x_35, 1);
      a_36 = ATgetArgument(x_35, 2);
      b_36 = ATgetArgument(x_35, 3);
      {
        ATerm h_36 = NULL,j_36 = NULL;
        ATerm i_36 = NULL;
        t = SSLgetAnnotations(not_null(x_35));
        {
          i_36 = t;
          if(((h_36 != NULL) && (h_36 != i_36)))
            _fail(i_36);
          else
            h_36 = i_36;
        }
        {
          t = not_null(y_35);
          {
            ATerm l_36 = NULL;
            t = g_65(t);
            {
              j_36 = t;
              {
                t = not_null(z_35);
                {
                  ATerm n_36 = NULL;
                  t = h_65(t);
                  {
                    l_36 = t;
                    {
                      t = not_null(a_36);
                      {
                        ATerm p_36 = NULL;
                        t = i_65(t);
                        {
                          n_36 = t;
                          {
                            t = not_null(b_36);
                            {
                              ATerm r_36 = NULL;
                              t = j_65(t);
                              {
                                p_36 = t;
                                {
                                  ATerm s_36 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(j_36), not_null(l_36), not_null(n_36), not_null(p_36)), not_null(h_36));
                                  {
                                    s_36 = t;
                                    if(((r_36 != NULL) && (r_36 != s_36)))
                                      _fail(s_36);
                                    else
                                      r_36 = s_36;
                                  }
                                  t = not_null(r_36);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Scope_2 (ATerm t, ATerm y_62 (ATerm), ATerm z_62 (ATerm))
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym_Scope_2))
    {
      h_37 = ATgetArgument(g_37, 0);
      i_37 = ATgetArgument(g_37, 1);
      {
        ATerm m_37 = NULL,o_37 = NULL;
        ATerm n_37 = NULL;
        t = SSLgetAnnotations(not_null(g_37));
        {
          n_37 = t;
          if(((m_37 != NULL) && (m_37 != n_37)))
            _fail(n_37);
          else
            m_37 = n_37;
        }
        {
          t = not_null(h_37);
          {
            ATerm q_37 = NULL;
            t = y_62(t);
            {
              o_37 = t;
              {
                t = not_null(i_37);
                {
                  ATerm s_37 = NULL;
                  t = z_62(t);
                  {
                    q_37 = t;
                    {
                      ATerm t_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(o_37), not_null(q_37)), not_null(m_37));
                      {
                        t_37 = t;
                        if(((s_37 != NULL) && (s_37 != t_37)))
                          _fail(t_37);
                        else
                          s_37 = t_37;
                      }
                      t = not_null(s_37);
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
ATerm tboundin_3 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, m_84, k_84);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, m_84, m_84, m_84, k_84);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm x_17 = t;
              int y_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, m_84, m_84, m_84, k_84);
                  ;
                  LocalPopChoice(y_17);
                }
              else
                {
                  t = x_17;
                  t = DynamicRules_1(t, k_84);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
  b_38 = t;
  a_38 :
  if(match_cons(b_38, sym_RDefT_4))
    {
      c_38 = ATgetArgument(b_38, 0);
      d_38 = ATgetArgument(b_38, 1);
      e_38 = ATgetArgument(b_38, 2);
      f_38 = ATgetArgument(b_38, 3);
      {
        t = not_null(e_38);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
    p_38 = t;
    n_38 :
    if(match_cons(p_38, sym_VarDec_2))
      {
        q_38 = ATgetArgument(p_38, 0);
        o_38 = ATgetArgument(p_38, 1);
        t = not_null(q_38);
      }
    else
      {
        if(match_cons(p_38, sym_DefaultVarDec_1))
          {
            q_38 = ATgetArgument(p_38, 0);
            t = not_null(q_38);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, k_3);
  return(t);
}
ATerm Bind6_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym_SDefT_4))
    {
      y_38 = ATgetArgument(x_38, 0);
      z_38 = ATgetArgument(x_38, 1);
      a_39 = ATgetArgument(x_38, 2);
      b_39 = ATgetArgument(x_38, 3);
      {
        t = not_null(a_39);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  j_39 = t;
  i_39 :
  if(match_cons(j_39, sym_DynamicRules_1))
    {
      k_39 = ATgetArgument(j_39, 0);
      {
        t = not_null(k_39);
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
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,x_39 = NULL;
  u_39 = t;
  p_39 :
  if(match_cons(u_39, sym_LRule_1))
    {
      v_39 = ATgetArgument(u_39, 0);
      q_39 :
      if(match_cons(v_39, sym_Rule_3))
        {
          r_39 = ATgetArgument(v_39, 0);
          s_39 = ATgetArgument(v_39, 1);
          t_39 = ATgetArgument(v_39, 2);
          {
            t = not_null(r_39);
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
      if(match_cons(u_39, sym_Scope_2))
        {
          v_39 = ATgetArgument(u_39, 0);
          x_39 = ATgetArgument(u_39, 1);
          t = not_null(v_39);
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
  ATerm i_40 = NULL,j_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym_Var_1))
    {
      j_40 = ATgetArgument(i_40, 0);
      t = (ATerm) ATinsert(ATempty, not_null(j_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm w_70 (ATerm))
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  n_40 :
  if(match_cons(o_40, sym__2))
    {
      p_40 = ATgetArgument(o_40, 0);
      q_40 = ATgetArgument(o_40, 1);
      {
        t = not_null(p_40);
        {
          ATerm u_40 (ATerm t)
          {
            ATerm z_17 = t;
            int b_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_40);
                ;
                LocalPopChoice(b_18);
              }
            else
              {
                t = z_17;
                {
                  ATerm e_18 = t;
                  int f_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_3 (ATerm t)
                      {
                        t = not_null(q_40);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_70, l_3);
                      t = u_40(t);
                      ;
                      LocalPopChoice(f_18);
                    }
                  else
                    {
                      t = e_18;
                      t = Cons_2(t, _id, u_40);
                    }
                }
              }
            return(t);
          }
          t = u_40(t);
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
ATerm foldr_3 (ATerm t, ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm m_73 (ATerm))
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_73(t);
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
        ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
        z_40 = t;
        y_40 :
        if(((ATgetType(z_40) == AT_LIST) && !(ATisEmpty(z_40))))
          {
            a_41 = ATgetFirst((ATermList) z_40);
            b_41 = (ATerm) ATgetNext((ATermList) z_40);
            {
              ATerm e_41 = NULL,g_41 = NULL;
              ATerm i_18;
              i_18 = t;
              {
                ATerm f_41 = NULL;
                t = not_null(a_41);
                {
                  t = m_73(t);
                  {
                    f_41 = t;
                    if(((e_41 != NULL) && (e_41 != f_41)))
                      _fail(f_41);
                    else
                      e_41 = f_41;
                  }
                }
              }
              t = i_18;
              {
                ATerm m_41 = NULL;
                t = not_null(b_41);
                {
                  t = foldr_3(t, k_73, l_73, m_73);
                  {
                    m_41 = t;
                    if(((g_41 != NULL) && (g_41 != m_41)))
                      _fail(m_41);
                    else
                      g_41 = m_41;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_41), not_null(g_41));
                  t = l_73(t);
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
ATerm crush_3 (ATerm t, ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm e_82 (ATerm))
{
  ATerm v_41 = NULL;
  ATerm x_41 = NULL;
  v_41 = t;
  {
    ATerm c_42 = NULL;
    ATerm e_42 = NULL,f_42 = NULL,l_42 = NULL;
    t = not_null(v_41);
    {
      c_42 = t;
      {
        t = SSL_explode_term(not_null(c_42));
        {
          e_42 = t;
          u_41 :
          if(match_cons(e_42, sym__2))
            {
              f_42 = ATgetArgument(e_42, 0);
              l_42 = ATgetArgument(e_42, 1);
              if(((x_41 != NULL) && (x_41 != l_42)))
                _fail(l_42);
              else
                x_41 = l_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_41);
      t = foldr_3(t, c_82, d_82, e_82);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  q_42 :
  if(match_cons(r_42, sym__2))
    {
      s_42 = ATgetArgument(r_42, 0);
      t_42 = ATgetArgument(r_42, 1);
      if(((s_42 != NULL) && (s_42 != t_42)))
        _fail(t_42);
      else
        s_42 = t_42;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm w_42 (ATerm t)
  {
    ATerm l_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_71, _id);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = l_18;
        t = Cons_2(t, _id, w_42);
      }
    return(t);
  }
  t = w_42(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_71 (ATerm), ATerm b_71 (ATerm))
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(((ATgetType(a_43) == AT_LIST) && !(ATisEmpty(a_43))))
    {
      b_43 = ATgetFirst((ATermList) a_43);
      c_43 = (ATerm) ATgetNext((ATermList) a_43);
      {
        t = b_71(t);
        {
          ATerm m_3 (ATerm t)
          {
            ATerm f_43 = NULL;
            f_43 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_43), not_null(f_43));
              t = a_71(t);
            }
            return(t);
          }
          t = fetch_1(t, m_3);
        }
        t = not_null(c_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym__2))
    {
      m_43 = ATgetArgument(l_43, 0);
      n_43 = ATgetArgument(l_43, 1);
      {
        t = not_null(m_43);
        {
          ATerm r_43 (ATerm t)
          {
            ATerm t_18 = t;
            int w_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(w_18);
              }
            else
              {
                t = t_18;
                {
                  ATerm x_18 = t;
                  int z_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_3 (ATerm t)
                      {
                        t = not_null(n_43);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_70, n_3);
                      t = r_43(t);
                      ;
                      LocalPopChoice(z_18);
                    }
                  else
                    {
                      t = x_18;
                      t = Cons_2(t, _id, r_43);
                    }
                }
              }
            return(t);
          }
          t = r_43(t);
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
ATerm split_2 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm))
{
  ATerm u_43 = NULL,w_43 = NULL;
  ATerm a_19;
  a_19 = t;
  {
    ATerm v_43 = NULL;
    t = p_77(t);
    {
      v_43 = t;
      if(((u_43 != NULL) && (u_43 != v_43)))
        _fail(v_43);
      else
        u_43 = v_43;
    }
  }
  t = a_19;
  {
    ATerm x_43 = NULL;
    t = q_77(t);
    {
      x_43 = t;
      if(((w_43 != NULL) && (w_43 != x_43)))
        _fail(x_43);
      else
        w_43 = x_43;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(w_43));
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_44 (ATerm t)
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_87(t);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
          ATerm f_19 = t;
          int g_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_44 = NULL;
              ATerm h_19;
              h_19 = t;
              {
                ATerm c_44 = NULL;
                t = n_87(t);
                {
                  c_44 = t;
                  if(((b_44 != NULL) && (b_44 != c_44)))
                    _fail(c_44);
                  else
                    b_44 = c_44;
                }
              }
              t = h_19;
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm q_3 (ATerm t)
                  {
                    t = not_null(b_44);
                    return(t);
                  }
                  t = split_2(t, d_44, q_3);
                  t = diff_0(t);
                  return(t);
                }
                ATerm p_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = o_87(t, o_3, d_44, p_3);
                {
                  ATerm r_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, r_3, union_0, _id);
                }
              }
              ;
              LocalPopChoice(g_19);
            }
          else
            {
              t = f_19;
              {
                ATerm s_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, s_3, union_0, d_44);
              }
            }
        }
      }
    return(t);
  }
  t = d_44(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              {
                ATerm m_19 = t;
                int s_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(s_19);
                  }
                else
                  {
                    t = m_19;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, t_3, tboundin_3);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(((ATgetType(h_44) == AT_LIST) && !(ATisEmpty(h_44))))
    {
      i_44 = ATgetFirst((ATermList) h_44);
      j_44 = (ATerm) ATgetNext((ATermList) h_44);
      t = not_null(j_44);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym__2))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      {
        ATerm t_19;
        t_19 = t;
        {
          ATerm v_44 = NULL;
          ATerm w_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_44), not_null(r_44));
          {
            ATerm u_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(v_19);
              }
            else
              {
                t = u_19;
                t = (ATerm) ATempty;
              }
            {
              w_44 = t;
              if(((v_44 != NULL) && (v_44 != w_44)))
                _fail(w_44);
              else
                v_44 = w_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_44), not_null(r_44), not_null(v_44));
            t = table_put_0(t);
          }
        }
        t = t_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm z_44 (ATerm t)
  {
    ATerm z_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = z_19;
        t = Cons_2(t, i_71, z_44);
      }
    return(t);
  }
  t = z_44(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  ATerm d_20;
  d_20 = t;
  {
    ATerm h_45 = NULL;
    ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
    t = q_74(t);
    {
      h_45 = t;
      {
        if(((g_45 != NULL) && (g_45 != h_45)))
          _fail(h_45);
        else
          g_45 = h_45;
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_45), term_j_17);
              t = table_get_0(t);
              ;
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_45 = t;
            d_45 :
            if(((ATgetType(i_45) == AT_LIST) && !(ATisEmpty(i_45))))
              {
                j_45 = ATgetFirst((ATermList) i_45);
                k_45 = (ATerm) ATgetNext((ATermList) i_45);
                {
                  if(((f_45 != NULL) && (f_45 != j_45)))
                    _fail(j_45);
                  else
                    f_45 = j_45;
                  {
                    if(((e_45 != NULL) && (e_45 != k_45)))
                      _fail(k_45);
                    else
                      e_45 = k_45;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_45), term_j_17, not_null(e_45));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_45);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              ATerm l_45 = NULL;
                              l_45 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_45), not_null(l_45));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, u_3);
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
  t = d_20;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm q_81 (ATerm), ATerm r_81 (ATerm))
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_81(t);
      t = r_81(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        t = r_81(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
    v_45 = t;
    r_45 :
    if(match_cons(v_45, sym__3))
      {
        w_45 = ATgetArgument(v_45, 0);
        x_45 = ATgetArgument(v_45, 1);
        y_45 = ATgetArgument(v_45, 2);
        {
          if(((s_45 != NULL) && (s_45 != w_45)))
            _fail(w_45);
          else
            s_45 = w_45;
          {
            if(((t_45 != NULL) && (t_45 != x_45)))
              _fail(x_45);
            else
              t_45 = x_45;
            {
              if(((u_45 != NULL) && (u_45 != y_45)))
                _fail(y_45);
              else
                u_45 = y_45;
              t = SSL_table_put(not_null(s_45), not_null(t_45), not_null(u_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_20;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  b_46 :
  if(match_cons(c_46, sym__2))
    {
      d_46 = ATgetArgument(c_46, 0);
      e_46 = ATgetArgument(c_46, 1);
      t = SSL_table_get(not_null(d_46), not_null(e_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm k_46 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm l_46 = NULL;
    ATerm m_46 = NULL;
    t = p_74(t);
    {
      l_46 = t;
      {
        if(((k_46 != NULL) && (k_46 != l_46)))
          _fail(l_46);
        else
          k_46 = l_46;
        {
          ATerm n_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_46), term_j_17);
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
                t = (ATerm) ATempty;
              }
            {
              n_46 = t;
              if(((m_46 != NULL) && (m_46 != n_46)))
                _fail(n_46);
              else
                m_46 = n_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_46), term_j_17, (ATerm) ATinsert(CheckATermList(not_null(m_46)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_20;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm r_74 (ATerm), ATerm s_74 (ATerm))
{
  t = begin_scope_1(t, r_74);
  {
    ATerm v_3 (ATerm t)
    {
      t = end_scope_1(t, r_74);
      return(t);
    }
    t = restore_always_2(t, s_74, v_3);
  }
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = term_l_10;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm y_3 (ATerm t)
    {
      t = term_x_11;
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      ATerm o_20;
      o_20 = t;
      {
        t = tvars_0(t);
        t = DefineUnbound_0(t);
      }
      t = o_20;
      {
        ATerm p_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = sdef_ud_0(t);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = p_20;
            {
              ATerm u_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = rdef_ud_0(t);
                  ;
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = u_20;
                  t = overlay_ud_0(t);
                }
            }
          }
      }
      return(t);
    }
    t = scope_2(t, y_3, z_3);
    return(t);
  }
  t = scope_2(t, w_3, x_3);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm))
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  v_46 :
  if(((ATgetType(w_46) == AT_LIST) && !(ATisEmpty(w_46))))
    {
      x_46 = ATgetFirst((ATermList) w_46);
      y_46 = (ATerm) ATgetNext((ATermList) w_46);
      {
        ATerm c_47 = NULL,e_47 = NULL;
        ATerm d_47 = NULL;
        t = SSLgetAnnotations(not_null(w_46));
        {
          d_47 = t;
          if(((c_47 != NULL) && (c_47 != d_47)))
            _fail(d_47);
          else
            c_47 = d_47;
        }
        {
          t = not_null(x_46);
          {
            ATerm g_47 = NULL;
            t = b_58(t);
            {
              e_47 = t;
              {
                t = not_null(y_46);
                {
                  ATerm i_47 = NULL;
                  t = c_58(t);
                  {
                    g_47 = t;
                    {
                      ATerm j_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_47)), not_null(e_47)), not_null(c_47));
                      {
                        j_47 = t;
                        if(((i_47 != NULL) && (i_47 != j_47)))
                          _fail(j_47);
                        else
                          i_47 = j_47;
                      }
                      t = not_null(i_47);
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
ATerm filter_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              t = filter_1(t, p_80);
              return(t);
            }
            t = Cons_2(t, p_80, a_4);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            {
              ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
              r_47 = t;
              q_47 :
              if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
                {
                  s_47 = ATgetFirst((ATermList) r_47);
                  t_47 = (ATerm) ATgetNext((ATermList) r_47);
                  {
                    t = not_null(t_47);
                    t = filter_1(t, p_80);
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
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm h_21;
        h_21 = t;
        {
          ATerm b_4 (ATerm t)
          {
            ATerm i_21 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_21;
              }
            return(t);
          }
          t = filter_1(t, b_4);
          t = Nil_0(t);
        }
        t = h_21;
      }
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm b_48 = NULL,c_48 = NULL;
  b_48 = t;
  a_48 :
  if(match_cons(b_48, sym_Strategies_1))
    {
      c_48 = ATgetArgument(b_48, 0);
      {
        ATerm f_48 = NULL,h_48 = NULL;
        ATerm g_48 = NULL;
        t = SSLgetAnnotations(not_null(b_48));
        {
          g_48 = t;
          if(((f_48 != NULL) && (f_48 != g_48)))
            _fail(g_48);
          else
            f_48 = g_48;
        }
        {
          t = not_null(c_48);
          {
            ATerm j_48 = NULL;
            t = f_58(t);
            {
              h_48 = t;
              {
                ATerm k_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(h_48)), not_null(f_48));
                {
                  k_48 = t;
                  if(((j_48 != NULL) && (j_48 != k_48)))
                    _fail(k_48);
                  else
                    j_48 = k_48;
                }
                t = not_null(j_48);
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
  ATerm j_21;
  j_21 = t;
  {
    ATerm q_48 = NULL;
    ATerm r_48 = NULL;
    r_48 = t;
    if(((q_48 != NULL) && (q_48 != r_48)))
      _fail(r_48);
    else
      q_48 = r_48;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATempty, not_null(q_48)));
      t = printnl_0(t);
    }
  }
  t = j_21;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm u_48 = NULL;
    u_48 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_48), term_o_21);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, c_4);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  z_48 = t;
  y_48 :
  if(match_cons(z_48, sym__2))
    {
      a_49 = ATgetArgument(z_48, 0);
      b_49 = ATgetArgument(z_48, 1);
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_49), not_null(b_49));
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            t = SSL_addr(not_null(a_49), not_null(b_49));
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
  ATerm d_4 (ATerm t)
  {
    ATerm g_49 = NULL;
    g_49 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_49), term_o_21);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, d_4, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm b_90 (ATerm), ATerm c_90 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    t = b_90(t);
    t = debug_0(t);
  }
  t = u_21;
  {
    ATerm w_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22;
        a_22 = t;
        t = c_90(t);
        t = a_22;
        t = record_success_0(t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = w_21;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_and_fail_4 (ATerm t, ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm w_90 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_90(t);
        {
          ATerm d_22 = t;
          if((PushChoice() == 0))
            {
              t = u_90(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_22;
            }
        }
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        {
          t = term_e_22;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    return(t);
  }
  t = do_test_2(t, t_90, e_4);
  return(t);
}
ATerm apply_and_fail_3 (ATerm t, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    t = term_g_13;
    return(t);
  }
  t = apply_and_fail_4(t, q_90, r_90, s_90, f_4);
  return(t);
}
ATerm test1_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = term_f_22;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = Strategies_1(t, defs_use_def_0);
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_h_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATempty, term_z_6))), term_w_4)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_u_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_w_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_b_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), term_w_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, term_s_7), term_z_6))), term_w_4)))))));
    return(t);
  }
  t = apply_and_fail_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm m_49 = NULL;
    m_49 = t;
    l_49 :
    if(!(match_int(m_49, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, j_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_cons(t_49, sym__2))
    {
      u_49 = ATgetArgument(t_49, 0);
      v_49 = ATgetArgument(t_49, 1);
      {
        ATerm z_49 = NULL,b_50 = NULL;
        ATerm a_50 = NULL;
        t = SSLgetAnnotations(not_null(t_49));
        {
          a_50 = t;
          if(((z_49 != NULL) && (z_49 != a_50)))
            _fail(a_50);
          else
            z_49 = a_50;
        }
        {
          t = not_null(u_49);
          {
            ATerm d_50 = NULL;
            t = s_56(t);
            {
              b_50 = t;
              {
                t = not_null(v_49);
                {
                  ATerm f_50 = NULL;
                  t = t_56(t);
                  {
                    d_50 = t;
                    {
                      ATerm g_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_50), not_null(d_50)), not_null(z_49));
                      {
                        g_50 = t;
                        if(((f_50 != NULL) && (f_50 != g_50)))
                          _fail(g_50);
                        else
                          f_50 = g_50;
                      }
                      t = not_null(f_50);
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
  ATerm k_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      t = term_m_22;
      return(t);
    }
    t = debug_1(t, m_4);
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      t = term_n_22;
      return(t);
    }
    t = debug_1(t, n_4);
    return(t);
  }
  t = _2(t, k_4, l_4);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  o_50 = t;
  n_50 :
  if(match_cons(o_50, sym__2))
    {
      p_50 = ATgetArgument(o_50, 0);
      q_50 = ATgetArgument(o_50, 1);
      {
        ATerm u_22;
        u_22 = t;
        t = SSL_printnl(not_null(p_50), not_null(q_50));
        t = u_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_93 (ATerm))
{
  ATerm v_22;
  v_22 = t;
  {
    ATerm w_50 = NULL,y_50 = NULL;
    ATerm w_22;
    w_22 = t;
    {
      ATerm x_50 = NULL;
      t = x_93(t);
      {
        x_50 = t;
        if(((w_50 != NULL) && (w_50 != x_50)))
          _fail(x_50);
        else
          w_50 = x_50;
      }
    }
    t = w_22;
    {
      ATerm z_50 = NULL;
      z_50 = t;
      if(((y_50 != NULL) && (y_50 != z_50)))
        _fail(z_50);
      else
        y_50 = z_50;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_50)), not_null(w_50)));
        t = printnl_0(t);
      }
    }
  }
  t = v_22;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm z_89 (ATerm), ATerm a_90 (ATerm))
{
  t = z_89(t);
  {
    ATerm o_4 (ATerm t)
    {
      t = term_b_23;
      return(t);
    }
    t = debug_1(t, o_4);
    {
      t = init_record_0(t);
      {
        t = a_90(t);
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
  ATerm p_4 (ATerm t)
  {
    t = term_c_23;
    return(t);
  }
  ATerm q_4 (ATerm t)
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
  t = test_suite_2(t, p_4, q_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = use_def_test_0(t);
  return(t);
}
