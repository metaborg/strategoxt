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
Symbol sym_NULL_0;
Symbol sym_Cong_2;
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
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_NULL_0 = ATmakeSymbol("NULL", 0, ATfalse);
  ATprotectSymbol(sym_NULL_0);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_f_4;
ATerm term_e_4;
ATerm term_v_3;
ATerm term_r_3;
ATerm term_q_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_l_3;
ATerm term_g_3;
ATerm term_f_3;
ATerm term_e_3;
ATerm term_d_3;
ATerm term_a_3;
ATerm term_m_2;
ATerm term_j_2;
void init_constant_terms (void)
{
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_2));
  term_m_2 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_3));
  term_a_3 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_e_3));
  term_e_3 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_f_3));
  term_f_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(sym_Var_1, term_g_3);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(sym_Op_2, term_n_3, (ATerm) ATempty);
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(sym__2, term_r_3, term_r_3);
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-eval-test", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm a_0 (ATerm));
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_98 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm));
ATerm zip_1 (ATerm, ATerm e_100 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_80 (ATerm), ATerm g_80 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_98 (ATerm));
ATerm MatchVar_1 (ATerm, ATerm k_93 (ATerm));
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_111 (ATerm), ATerm x_111 (ATerm));
ATerm for_3 (ATerm, ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm));
ATerm pattern_match_1 (ATerm, ATerm l_93 (ATerm));
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm u_108 (ATerm), ATerm v_108 (ATerm));
ATerm apply_test_4 (ATerm, ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm));
ATerm test1_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm w_78 (ATerm), ATerm x_78 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_114 (ATerm));
ATerm test_suite_2 (ATerm, ATerm s_108 (ATerm), ATerm t_108 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm u_1 = NULL,v_1 = NULL;
  u_1 = t;
  t_1 :
  if(match_cons(u_1, sym_Var_1))
    {
      v_1 = ATgetArgument(u_1, 0);
      {
        ATerm y_0 = t;
        int z_0 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 = NULL,a_2 = NULL;
            ATerm z_1 = NULL;
            t = SSLgetAnnotations(not_null(u_1));
            {
              z_1 = t;
              if(((y_1 != NULL) && (y_1 != z_1)))
                _fail(z_1);
              else
                y_1 = z_1;
            }
            {
              t = not_null(v_1);
              {
                ATerm c_2 = NULL;
                t = a_0(t);
                {
                  a_2 = t;
                  {
                    ATerm d_2 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_2)), not_null(y_1));
                    {
                      d_2 = t;
                      if(((c_2 != NULL) && (c_2 != d_2)))
                        _fail(d_2);
                      else
                        c_2 = d_2;
                    }
                    t = not_null(c_2);
                  }
                }
              }
            }
            ;
            LocalPopChoice(z_0);
          }
        else
          {
            t = y_0;
            {
              ATerm a_1 = t;
              int b_1 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_2 = NULL,i_2 = NULL;
                  ATerm h_2 = NULL;
                  t = SSLgetAnnotations(not_null(u_1));
                  {
                    h_2 = t;
                    if(((g_2 != NULL) && (g_2 != h_2)))
                      _fail(h_2);
                    else
                      g_2 = h_2;
                  }
                  {
                    t = not_null(v_1);
                    {
                      ATerm k_2 = NULL;
                      t = a_0(t);
                      {
                        i_2 = t;
                        {
                          ATerm l_2 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_2)), not_null(g_2));
                          {
                            l_2 = t;
                            if(((k_2 != NULL) && (k_2 != l_2)))
                              _fail(l_2);
                            else
                              k_2 = l_2;
                          }
                          t = not_null(k_2);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(b_1);
                }
              else
                {
                  t = a_1;
                  {
                    ATerm o_2 = NULL,q_2 = NULL;
                    ATerm p_2 = NULL;
                    t = SSLgetAnnotations(not_null(u_1));
                    {
                      p_2 = t;
                      if(((o_2 != NULL) && (o_2 != p_2)))
                        _fail(p_2);
                      else
                        o_2 = p_2;
                    }
                    {
                      t = not_null(v_1);
                      {
                        ATerm s_2 = NULL;
                        t = a_0(t);
                        {
                          q_2 = t;
                          {
                            ATerm t_2 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_2)), not_null(o_2));
                            {
                              t_2 = t;
                              if(((s_2 != NULL) && (s_2 != t_2)))
                                _fail(t_2);
                              else
                                s_2 = t_2;
                            }
                            t = not_null(s_2);
                          }
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
ATerm concat_0 (ATerm t)
{
  ATerm c_1 = t;
  int d_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_1);
    }
  else
    {
      t = c_1;
      {
        ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
        i_3 = t;
        h_3 :
        if(((ATgetType(i_3) == AT_LIST) && !(ATisEmpty(i_3))))
          {
            j_3 = ATgetFirst((ATermList) i_3);
            k_3 = (ATerm) ATgetNext((ATermList) i_3);
            {
              t = not_null(j_3);
              {
                ATerm b_0 (ATerm t)
                {
                  t = not_null(k_3);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_0);
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
  ATerm u_3 = NULL;
  ATerm w_3 = NULL;
  u_3 = t;
  {
    ATerm x_3 = NULL;
    ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
    t = not_null(u_3);
    {
      x_3 = t;
      {
        t = SSL_explode_term(not_null(x_3));
        {
          z_3 = t;
          s_3 :
          if(match_cons(z_3, sym__2))
            {
              a_4 = ATgetArgument(z_3, 0);
              b_4 = ATgetArgument(z_3, 1);
              t_3 :
              if(match_string(a_4, ""))
                {
                  if(((w_3 != NULL) && (w_3 != b_4)))
                    _fail(b_4);
                  else
                    w_3 = b_4;
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
      t = not_null(w_3);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm j_4 = NULL;
  j_4 = t;
  i_4 :
  if(((ATgetType(j_4) == AT_LIST) && ATisEmpty(j_4)))
    {
      {
        ATerm l_4 = NULL,n_4 = NULL;
        ATerm e_1;
        e_1 = t;
        {
          ATerm m_4 = NULL;
          t = SSLgetAnnotations(not_null(j_4));
          {
            m_4 = t;
            if(((l_4 != NULL) && (l_4 != m_4)))
              _fail(m_4);
            else
              l_4 = m_4;
          }
        }
        t = e_1;
        {
          ATerm o_4 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_4));
          {
            o_4 = t;
            if(((n_4 != NULL) && (n_4 != o_4)))
              _fail(o_4);
            else
              n_4 = o_4;
          }
          t = not_null(n_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_98 (ATerm))
{
  ATerm s_4 (ATerm t)
  {
    ATerm f_1 = t;
    int g_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_4);
        ;
        LocalPopChoice(g_1);
      }
    else
      {
        t = f_1;
        {
          t = Nil_0(t);
          t = m_98(t);
        }
      }
    return(t);
  }
  t = s_4(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym__2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      {
        t = not_null(w_4);
        {
          ATerm c_0 (ATerm t)
          {
            t = not_null(x_4);
            return(t);
          }
          t = at_end_1(t, c_0);
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
  ATerm h_1 = t;
  int i_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(i_1);
    }
  else
    {
      t = h_1;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym__2))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_5)), not_null(e_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
  n_5 = t;
  k_5 :
  if(match_cons(n_5, sym__2))
    {
      o_5 = ATgetArgument(n_5, 0);
      r_5 = ATgetArgument(n_5, 1);
      l_5 :
      if(((ATgetType(o_5) == AT_LIST) && !(ATisEmpty(o_5))))
        {
          p_5 = ATgetFirst((ATermList) o_5);
          q_5 = (ATerm) ATgetNext((ATermList) o_5);
          m_5 :
          if(((ATgetType(r_5) == AT_LIST) && !(ATisEmpty(r_5))))
            {
              s_5 = ATgetFirst((ATermList) r_5);
              t_5 = (ATerm) ATgetNext((ATermList) r_5);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_5), not_null(s_5)), (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(t_5)));
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
ATerm Zip1_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  a_6 :
  if(match_cons(d_6, sym__2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      b_6 :
      if(((ATgetType(e_6) == AT_LIST) && ATisEmpty(e_6)))
        {
          c_6 :
          if(((ATgetType(f_6) == AT_LIST) && ATisEmpty(f_6)))
            {
              t = (ATerm) ATempty;
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
ATerm genzip_4 (ATerm t, ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm))
{
  ATerm h_6 (ATerm t)
  {
    ATerm j_1 = t;
    int k_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_99(t);
        ;
        LocalPopChoice(k_1);
      }
    else
      {
        t = j_1;
        {
          t = a_100(t);
          {
            t = _2(t, c_100, h_6);
            t = b_100(t);
          }
        }
      }
    return(t);
  }
  t = h_6(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm e_100 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_100);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
  s_6 = t;
  q_6 :
  if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
    {
      t_6 = ATgetFirst((ATermList) s_6);
      w_6 = (ATerm) ATgetNext((ATermList) s_6);
      r_6 :
      if(match_cons(t_6, sym__2))
        {
          u_6 = ATgetArgument(t_6, 0);
          v_6 = ATgetArgument(t_6, 1);
          {
            ATerm a_7 = NULL,b_7 = NULL,h_7 = NULL,n_7 = NULL;
            ATerm l_1;
            l_1 = t;
            {
              ATerm c_7 = NULL;
              ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
              t = not_null(v_6);
              {
                c_7 = t;
                {
                  t = SSL_explode_term(not_null(c_7));
                  {
                    e_7 = t;
                    l_6 :
                    if(match_cons(e_7, sym__2))
                      {
                        f_7 = ATgetArgument(e_7, 0);
                        g_7 = ATgetArgument(e_7, 1);
                        {
                          if(((a_7 != NULL) && (a_7 != f_7)))
                            _fail(f_7);
                          else
                            a_7 = f_7;
                          if(((b_7 != NULL) && (b_7 != g_7)))
                            _fail(g_7);
                          else
                            b_7 = g_7;
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
            t = l_1;
            {
              ATerm m_1;
              m_1 = t;
              {
                ATerm i_7 = NULL;
                ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
                t = not_null(u_6);
                {
                  i_7 = t;
                  {
                    t = SSL_explode_term(not_null(i_7));
                    {
                      k_7 = t;
                      o_6 :
                      if(match_cons(k_7, sym__2))
                        {
                          l_7 = ATgetArgument(k_7, 0);
                          m_7 = ATgetArgument(k_7, 1);
                          {
                            if(((a_7 != NULL) && (a_7 != l_7)))
                              _fail(l_7);
                            else
                              a_7 = l_7;
                            if(((h_7 != NULL) && (h_7 != m_7)))
                              _fail(m_7);
                            else
                              h_7 = m_7;
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
              t = m_1;
              {
                ATerm o_7 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(b_7));
                {
                  t = zip_1(t, _id);
                  {
                    o_7 = t;
                    if(((n_7 != NULL) && (n_7 != o_7)))
                      _fail(o_7);
                    else
                      n_7 = o_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_7), not_null(w_6));
                  t = conc_0(t);
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
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym__2))
    {
      y_7 = ATgetArgument(x_7, 0);
      z_7 = ATgetArgument(x_7, 1);
      if(((y_7 != NULL) && (y_7 != z_7)))
        _fail(z_7);
      else
        y_7 = z_7;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_80 (ATerm), ATerm g_80 (ATerm))
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
    {
      j_8 = ATgetFirst((ATermList) i_8);
      k_8 = (ATerm) ATgetNext((ATermList) i_8);
      {
        ATerm o_8 = NULL,q_8 = NULL;
        ATerm p_8 = NULL;
        t = SSLgetAnnotations(not_null(i_8));
        {
          p_8 = t;
          if(((o_8 != NULL) && (o_8 != p_8)))
            _fail(p_8);
          else
            o_8 = p_8;
        }
        {
          t = not_null(j_8);
          {
            ATerm s_8 = NULL;
            t = f_80(t);
            {
              q_8 = t;
              {
                t = not_null(k_8);
                {
                  ATerm u_8 = NULL;
                  t = g_80(t);
                  {
                    s_8 = t;
                    {
                      ATerm v_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_8)), not_null(q_8)), not_null(o_8));
                      {
                        v_8 = t;
                        if(((u_8 != NULL) && (u_8 != v_8)))
                          _fail(v_8);
                        else
                          u_8 = v_8;
                      }
                      t = not_null(u_8);
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
ATerm fetch_1 (ATerm t, ATerm g_98 (ATerm))
{
  ATerm b_9 (ATerm t)
  {
    ATerm n_1 = t;
    int o_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_98, _id);
        ;
        LocalPopChoice(o_1);
      }
    else
      {
        t = n_1;
        t = Cons_2(t, _id, b_9);
      }
    return(t);
  }
  t = b_9(t);
  return(t);
}
ATerm MatchVar_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  i_9 = t;
  f_9 :
  if(match_cons(i_9, sym__2))
    {
      j_9 = ATgetArgument(i_9, 0);
      o_9 = ATgetArgument(i_9, 1);
      g_9 :
      if(((ATgetType(j_9) == AT_LIST) && !(ATisEmpty(j_9))))
        {
          k_9 = ATgetFirst((ATermList) j_9);
          n_9 = (ATerm) ATgetNext((ATermList) j_9);
          h_9 :
          if(match_cons(k_9, sym__2))
            {
              l_9 = ATgetArgument(k_9, 0);
              m_9 = ATgetArgument(k_9, 1);
              {
                t = not_null(l_9);
                {
                  t = k_93(t);
                  {
                    t = not_null(o_9);
                    {
                      ATerm p_1 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm d_0 (ATerm t)
                          {
                            ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
                            t_9 = t;
                            e_9 :
                            if(match_cons(t_9, sym__2))
                              {
                                u_9 = ATgetArgument(t_9, 0);
                                v_9 = ATgetArgument(t_9, 1);
                                {
                                  ATerm w_9 = NULL;
                                  if(((l_9 != NULL) && (l_9 != u_9)))
                                    _fail(u_9);
                                  else
                                    l_9 = u_9;
                                  {
                                    if(((w_9 != NULL) && (w_9 != v_9)))
                                      _fail(v_9);
                                    else
                                      w_9 = v_9;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(w_9));
                                      {
                                        ATerm q_1 = t;
                                        if((PushChoice() == 0))
                                          {
                                            t = eq_0(t);
                                            PopChoice();
                                            _fail(t);
                                          }
                                        else
                                          {
                                            t = q_1;
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
                          t = fetch_1(t, d_0);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = p_1;
                        }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), (ATerm) ATinsert(CheckATermList(not_null(o_9)), (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(m_9))));
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
ATerm UfIdem_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  c_10 = t;
  a_10 :
  if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
    {
      d_10 = ATgetFirst((ATermList) c_10);
      g_10 = (ATerm) ATgetNext((ATermList) c_10);
      b_10 :
      if(match_cons(d_10, sym__2))
        {
          e_10 = ATgetArgument(d_10, 0);
          f_10 = ATgetArgument(d_10, 1);
          {
            ATerm i_10 = NULL;
            if(((e_10 != NULL) && (e_10 != f_10)))
              _fail(f_10);
            else
              e_10 = f_10;
            {
              if(((i_10 != NULL) && (i_10 != g_10)))
                _fail(g_10);
              else
                i_10 = g_10;
              t = not_null(i_10);
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
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm w_111 (ATerm), ATerm x_111 (ATerm))
{
  ATerm k_10 (ATerm t)
  {
    ATerm r_1 = t;
    int s_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_111(t);
        ;
        LocalPopChoice(s_1);
      }
    else
      {
        t = r_1;
        {
          t = x_111(t);
          t = k_10(t);
        }
      }
    return(t);
  }
  t = k_10(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm))
{
  t = z_111(t);
  t = while_not_2(t, a_112, b_112);
  return(t);
}
ATerm pattern_match_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm p_10 = NULL;
    p_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), (ATerm) ATempty);
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
    r_10 = t;
    n_10 :
    if(match_cons(r_10, sym__2))
      {
        s_10 = ATgetArgument(r_10, 0);
        t_10 = ATgetArgument(r_10, 1);
        o_10 :
        if(((ATgetType(s_10) == AT_LIST) && ATisEmpty(s_10)))
          {
            t = not_null(t_10);
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
  ATerm g_0 (ATerm t)
  {
    ATerm w_1 = t;
    int x_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, UfIdem_0, _id);
        ;
        LocalPopChoice(x_1);
      }
    else
      {
        t = w_1;
        {
          ATerm b_2 = t;
          int e_2 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchVar_1(t, l_93);
              ;
              LocalPopChoice(e_2);
            }
          else
            {
              t = b_2;
              t = _2(t, UfDecompose_0, _id);
            }
        }
      }
    return(t);
  }
  t = for_3(t, e_0, f_0, g_0);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm f_2;
  f_2 = t;
  {
    ATerm y_10 = NULL;
    ATerm z_10 = NULL;
    z_10 = t;
    if(((y_10 != NULL) && (y_10 != z_10)))
      _fail(z_10);
    else
      y_10 = z_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_2, (ATerm) ATinsert(ATempty, not_null(y_10)));
      t = printnl_0(t);
    }
  }
  t = f_2;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm c_11 = NULL;
    c_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_m_2);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, h_0);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      {
        ATerm n_2 = t;
        int r_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_11), not_null(j_11));
            ;
            LocalPopChoice(r_2);
          }
        else
          {
            t = n_2;
            t = SSL_addr(not_null(i_11), not_null(j_11));
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
  ATerm i_0 (ATerm t)
  {
    ATerm o_11 = NULL;
    o_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), term_m_2);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, i_0, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm u_108 (ATerm), ATerm v_108 (ATerm))
{
  ATerm u_2;
  u_2 = t;
  {
    t = u_108(t);
    t = debug_0(t);
  }
  t = u_2;
  {
    ATerm v_2 = t;
    int w_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2;
        x_2 = t;
        t = v_108(t);
        t = x_2;
        t = record_success_0(t);
        ;
        LocalPopChoice(w_2);
      }
    else
      {
        t = v_2;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_test_4 (ATerm t, ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL;
  ATerm j_0 (ATerm t)
  {
    ATerm w_11 = NULL;
    ATerm x_11 = NULL;
    ATerm y_2 = t;
    int z_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_109(t);
        t = z_108(t);
        ;
        LocalPopChoice(z_2);
      }
    else
      {
        t = y_2;
        {
          t = term_a_3;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      w_11 = t;
      {
        if(((u_11 != NULL) && (u_11 != w_11)))
          _fail(w_11);
        else
          u_11 = w_11;
        {
          t = b_109(t);
          {
            x_11 = t;
            {
              if(((v_11 != NULL) && (v_11 != x_11)))
                _fail(x_11);
              else
                v_11 = x_11;
              {
                ATerm b_3 = t;
                int c_3 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_11 = NULL;
                    t = not_null(v_11);
                    {
                      y_11 = t;
                      if(((u_11 != NULL) && (u_11 != y_11)))
                        _fail(y_11);
                      else
                        u_11 = y_11;
                    }
                    ;
                    LocalPopChoice(c_3);
                  }
                else
                  {
                    t = b_3;
                    {
                      t = not_null(u_11);
                      {
                        ATerm k_0 (ATerm t)
                        {
                          t = term_d_3;
                          return(t);
                        }
                        t = debug_1(t, k_0);
                        {
                          t = not_null(v_11);
                          {
                            ATerm l_0 (ATerm t)
                            {
                              t = term_e_3;
                              return(t);
                            }
                            t = debug_1(t, l_0);
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
    return(t);
  }
  t = do_test_2(t, y_108, j_0);
  return(t);
}
ATerm test1_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    t = term_f_3;
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = Var_1(t, _id);
      return(t);
    }
    t = pattern_match_1(t, q_0);
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_l_3, (ATerm) ATmakeAppl(sym_Op_2, term_m_3, (ATerm) ATinsert(ATempty, term_o_3))));
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_l_3, (ATerm) ATmakeAppl(sym_Op_2, term_m_3, (ATerm) ATinsert(ATempty, term_o_3))));
    return(t);
  }
  t = apply_test_4(t, m_0, n_0, o_0, p_0);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm d_12 = NULL;
    d_12 = t;
    c_12 :
    if(!(match_int(d_12, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, r_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm w_78 (ATerm), ATerm x_78 (ATerm))
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
            t = w_78(t);
            {
              s_12 = t;
              {
                t = not_null(m_12);
                {
                  ATerm w_12 = NULL;
                  t = x_78(t);
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
ATerm report_test_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_p_3;
      return(t);
    }
    t = debug_1(t, u_0);
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm v_0 (ATerm t)
    {
      t = term_q_3;
      return(t);
    }
    t = debug_1(t, v_0);
    return(t);
  }
  t = _2(t, s_0, t_0);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_v_3;
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
        ATerm y_3;
        y_3 = t;
        t = SSL_printnl(not_null(g_13), not_null(h_13));
        t = y_3;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_114 (ATerm))
{
  ATerm c_4;
  c_4 = t;
  {
    ATerm n_13 = NULL,p_13 = NULL;
    ATerm d_4;
    d_4 = t;
    {
      ATerm o_13 = NULL;
      t = u_114(t);
      {
        o_13 = t;
        if(((n_13 != NULL) && (n_13 != o_13)))
          _fail(o_13);
        else
          n_13 = o_13;
      }
    }
    t = d_4;
    {
      ATerm q_13 = NULL;
      q_13 = t;
      if(((p_13 != NULL) && (p_13 != q_13)))
        _fail(q_13);
      else
        p_13 = q_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), not_null(n_13)));
        t = printnl_0(t);
      }
    }
  }
  t = c_4;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm s_108 (ATerm), ATerm t_108 (ATerm))
{
  t = s_108(t);
  {
    ATerm w_0 (ATerm t)
    {
      t = term_e_4;
      return(t);
    }
    t = debug_1(t, w_0);
    {
      t = init_record_0(t);
      {
        t = t_108(t);
        {
          t = report_test_0(t);
          t = check_for_failures_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = term_f_4;
    return(t);
  }
  t = test_suite_2(t, x_0, test1_0);
  return(t);
}
