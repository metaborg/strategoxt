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
ATerm term_w_7;
ATerm term_v_7;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_t_3;
ATerm term_s_3;
void init_constant_terms (void)
{
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_Var_1, term_b_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Op_2, term_j_6, (ATerm) ATempty);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym__2, term_n_6, term_n_6);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-eval-test", 0, ATtrue));
}
ATerm Var_1_0 (ATerm a_0 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm Nil_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm zip_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_98 (ATerm), ATerm);
ATerm MatchVar_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm while_not_2_0 (ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm for_3_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm);
ATerm pattern_match_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm debug_0_0 (ATerm);
ATerm record_failure_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm record_success_0_0 (ATerm);
ATerm do_test_2_0 (ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm);
ATerm apply_test_4_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm);
ATerm test1_0_0 (ATerm);
ATerm check_for_failures_0_0 (ATerm);
ATerm _2_0 (ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm);
ATerm report_test_0_0 (ATerm);
ATerm init_record_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm debug_1_0 (ATerm u_114 (ATerm), ATerm);
ATerm test_suite_2_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Var_1_0 (ATerm a_0 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL;
  ATerm u_2 (ATerm t)
  {
    ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL;
    ATerm y_2 (ATerm t)
    {
      ATerm b_2 = NULL,c_2 = NULL;
      t = not_null(a_2);
      if(((b_2 != NULL) && (b_2 != t)))
        _fail(t);
      else
        b_2 = t;
      t = not_null(a_2);
      {
        ATerm d_2 = NULL;
        ATerm z_2 (ATerm t)
        {
          t = not_null(d_2);
          if(((c_2 != NULL) && (c_2 != t)))
            _fail(t);
          else
            c_2 = t;
          t = not_null(d_2);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_2)), not_null(y_1));
        if(((d_2 != NULL) && (d_2 != t)))
          _fail(t);
        else
          d_2 = t;
        t = z_2(t);
        t = not_null(c_2);
      }
      return(t);
    }
    t = not_null(u_1);
    if(((w_1 != NULL) && (w_1 != t)))
      _fail(t);
    else
      w_1 = t;
    t = not_null(v_1);
    if(((x_1 != NULL) && (x_1 != t)))
      _fail(t);
    else
      x_1 = t;
    t = not_null(u_1);
    {
      ATerm z_1 = NULL;
      ATerm x_2 (ATerm t)
      {
        t = not_null(z_1);
        if(((y_1 != NULL) && (y_1 != t)))
          _fail(t);
        else
          y_1 = t;
        t = not_null(z_1);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_1));
      if(((z_1 != NULL) && (z_1 != t)))
        _fail(t);
      else
        z_1 = t;
      t = x_2(t);
      t = not_null(x_1);
      t = a_0(t);
      if(((a_2 != NULL) && (a_2 != t)))
        _fail(t);
      else
        a_2 = t;
      t = y_2(t);
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,i_2 = NULL;
    ATerm b_3 (ATerm t)
    {
      ATerm j_2 = NULL,k_2 = NULL;
      t = not_null(i_2);
      if(((j_2 != NULL) && (j_2 != t)))
        _fail(t);
      else
        j_2 = t;
      t = not_null(i_2);
      {
        ATerm l_2 = NULL;
        ATerm c_3 (ATerm t)
        {
          t = not_null(l_2);
          if(((k_2 != NULL) && (k_2 != t)))
            _fail(t);
          else
            k_2 = t;
          t = not_null(l_2);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_2)), not_null(g_2));
        if(((l_2 != NULL) && (l_2 != t)))
          _fail(t);
        else
          l_2 = t;
        t = c_3(t);
        t = not_null(k_2);
      }
      return(t);
    }
    t = not_null(u_1);
    if(((e_2 != NULL) && (e_2 != t)))
      _fail(t);
    else
      e_2 = t;
    t = not_null(v_1);
    if(((f_2 != NULL) && (f_2 != t)))
      _fail(t);
    else
      f_2 = t;
    t = not_null(u_1);
    {
      ATerm h_2 = NULL;
      ATerm a_3 (ATerm t)
      {
        t = not_null(h_2);
        if(((g_2 != NULL) && (g_2 != t)))
          _fail(t);
        else
          g_2 = t;
        t = not_null(h_2);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_2));
      if(((h_2 != NULL) && (h_2 != t)))
        _fail(t);
      else
        h_2 = t;
      t = a_3(t);
      t = not_null(f_2);
      t = a_0(t);
      if(((i_2 != NULL) && (i_2 != t)))
        _fail(t);
      else
        i_2 = t;
      t = b_3(t);
    }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,q_2 = NULL;
    ATerm e_3 (ATerm t)
    {
      ATerm r_2 = NULL,s_2 = NULL;
      t = not_null(q_2);
      if(((r_2 != NULL) && (r_2 != t)))
        _fail(t);
      else
        r_2 = t;
      t = not_null(q_2);
      {
        ATerm t_2 = NULL;
        ATerm f_3 (ATerm t)
        {
          t = not_null(t_2);
          if(((s_2 != NULL) && (s_2 != t)))
            _fail(t);
          else
            s_2 = t;
          t = not_null(t_2);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_2)), not_null(o_2));
        if(((t_2 != NULL) && (t_2 != t)))
          _fail(t);
        else
          t_2 = t;
        t = f_3(t);
        t = not_null(s_2);
      }
      return(t);
    }
    t = not_null(u_1);
    if(((m_2 != NULL) && (m_2 != t)))
      _fail(t);
    else
      m_2 = t;
    t = not_null(v_1);
    if(((n_2 != NULL) && (n_2 != t)))
      _fail(t);
    else
      n_2 = t;
    t = not_null(u_1);
    {
      ATerm p_2 = NULL;
      ATerm d_3 (ATerm t)
      {
        t = not_null(p_2);
        if(((o_2 != NULL) && (o_2 != t)))
          _fail(t);
        else
          o_2 = t;
        t = not_null(p_2);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_2));
      if(((p_2 != NULL) && (p_2 != t)))
        _fail(t);
      else
        p_2 = t;
      t = d_3(t);
      t = not_null(n_2);
      t = a_0(t);
      if(((q_2 != NULL) && (q_2 != t)))
        _fail(t);
      else
        q_2 = t;
      t = e_3(t);
    }
    return(t);
  }
  if(((u_1 != NULL) && (u_1 != t)))
    _fail(t);
  else
    u_1 = t;
  t = not_null(u_1);
  if(match_cons(t, sym_Var_1))
    {
      v_1 = ATgetArgument(t, 0);
      {
        ATerm a_1 = t;
        int b_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_2(t);
            ;
            LocalPopChoice(b_1);
          }
        else
          {
            t = a_1;
            {
              ATerm c_1 = t;
              int d_1 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_2(t);
                  ;
                  LocalPopChoice(d_1);
                }
              else
                {
                  t = c_1;
                  t = w_2(t);
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
ATerm concat_0_0 (ATerm t)
{
  ATerm e_1 = t;
  int f_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(f_1);
    }
  else
    {
      t = e_1;
      {
        ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
        ATerm o_3 (ATerm t)
        {
          ATerm l_3 = NULL,m_3 = NULL;
          t = not_null(j_3);
          if(((l_3 != NULL) && (l_3 != t)))
            _fail(t);
          else
            l_3 = t;
          t = not_null(k_3);
          if(((m_3 != NULL) && (m_3 != t)))
            _fail(t);
          else
            m_3 = t;
          t = not_null(l_3);
          {
            ATerm b_0 (ATerm t)
            {
              t = not_null(m_3);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(b_0, t);
          }
          return(t);
        }
        if(((i_3 != NULL) && (i_3 != t)))
          _fail(t);
        else
          i_3 = t;
        t = not_null(i_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_3 = ATgetFirst((ATermList) t);
            k_3 = (ATerm) ATgetNext((ATermList) t);
            t = o_3(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  ATerm c_4 (ATerm t)
  {
    ATerm v_3 = NULL,w_3 = NULL;
    t = not_null(u_3);
    if(((v_3 != NULL) && (v_3 != t)))
      _fail(t);
    else
      v_3 = t;
    t = not_null(u_3);
    {
      ATerm x_3 = NULL;
      ATerm d_4 (ATerm t)
      {
        ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
        ATerm e_4 (ATerm t)
        {
          t = not_null(b_4);
          if(((w_3 != NULL) && (w_3 != t)))
            _fail(t);
          else
            w_3 = t;
          t = not_null(z_3);
          return(t);
        }
        t = not_null(x_3);
        if(((y_3 != NULL) && (y_3 != t)))
          _fail(t);
        else
          y_3 = t;
        t = not_null(x_3);
        t = SSL_explode_term(not_null(y_3));
        if(((z_3 != NULL) && (z_3 != t)))
          _fail(t);
        else
          z_3 = t;
        t = not_null(z_3);
        if(match_cons(t, sym__2))
          {
            a_4 = ATgetArgument(t, 0);
            b_4 = ATgetArgument(t, 1);
            t = not_null(a_4);
            if(match_string(t, ""))
              {
                t = e_4(t);
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
      t = not_null(v_3);
      if(((x_3 != NULL) && (x_3 != t)))
        _fail(t);
      else
        x_3 = t;
      t = d_4(t);
      t = not_null(w_3);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((u_3 != NULL) && (u_3 != t)))
    _fail(t);
  else
    u_3 = t;
  t = c_4(t);
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm j_4 = NULL;
  ATerm p_4 (ATerm t)
  {
    ATerm k_4 = NULL,l_4 = NULL,n_4 = NULL;
    t = not_null(j_4);
    if(((k_4 != NULL) && (k_4 != t)))
      _fail(t);
    else
      k_4 = t;
    t = not_null(j_4);
    {
      ATerm g_1;
      g_1 = t;
      {
        ATerm m_4 = NULL;
        ATerm q_4 (ATerm t)
        {
          t = not_null(m_4);
          if(((l_4 != NULL) && (l_4 != t)))
            _fail(t);
          else
            l_4 = t;
          t = not_null(m_4);
          return(t);
        }
        t = SSLgetAnnotations(not_null(k_4));
        if(((m_4 != NULL) && (m_4 != t)))
          _fail(t);
        else
          m_4 = t;
        t = q_4(t);
      }
      t = g_1;
      {
        ATerm o_4 = NULL;
        ATerm r_4 (ATerm t)
        {
          t = not_null(o_4);
          if(((n_4 != NULL) && (n_4 != t)))
            _fail(t);
          else
            n_4 = t;
          t = not_null(o_4);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(l_4));
        if(((o_4 != NULL) && (o_4 != t)))
          _fail(t);
        else
          o_4 = t;
        t = r_4(t);
        t = not_null(n_4);
      }
    }
    return(t);
  }
  if(((j_4 != NULL) && (j_4 != t)))
    _fail(t);
  else
    j_4 = t;
  t = not_null(j_4);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_4(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm h_1 = t;
    int i_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_4, t);
        ;
        LocalPopChoice(i_1);
      }
    else
      {
        t = h_1;
        t = Nil_0_0(t);
        t = m_98(t);
      }
    return(t);
  }
  t = s_4(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  ATerm a_5 (ATerm t)
  {
    ATerm y_4 = NULL,z_4 = NULL;
    t = not_null(w_4);
    if(((z_4 != NULL) && (z_4 != t)))
      _fail(t);
    else
      z_4 = t;
    t = not_null(x_4);
    if(((y_4 != NULL) && (y_4 != t)))
      _fail(t);
    else
      y_4 = t;
    t = not_null(z_4);
    {
      ATerm c_0 (ATerm t)
      {
        t = not_null(y_4);
        return(t);
      }
      t = at_end_1_0(c_0, t);
    }
    return(t);
  }
  if(((v_4 != NULL) && (v_4 != t)))
    _fail(t);
  else
    v_4 = t;
  t = not_null(v_4);
  if(match_cons(t, sym__2))
    {
      w_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
      t = a_5(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_1 = t;
  int k_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(k_1);
    }
  else
    {
      t = j_1;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  ATerm i_5 (ATerm t)
  {
    ATerm g_5 = NULL,h_5 = NULL;
    t = not_null(e_5);
    if(((g_5 != NULL) && (g_5 != t)))
      _fail(t);
    else
      g_5 = t;
    t = not_null(f_5);
    if(((h_5 != NULL) && (h_5 != t)))
      _fail(t);
    else
      h_5 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(h_5)), not_null(g_5));
    return(t);
  }
  if(((d_5 != NULL) && (d_5 != t)))
    _fail(t);
  else
    d_5 = t;
  t = not_null(d_5);
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
      t = i_5(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
  ATerm y_5 (ATerm t)
  {
    ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
    t = not_null(p_5);
    if(((u_5 != NULL) && (u_5 != t)))
      _fail(t);
    else
      u_5 = t;
    t = not_null(q_5);
    if(((w_5 != NULL) && (w_5 != t)))
      _fail(t);
    else
      w_5 = t;
    t = not_null(s_5);
    if(((v_5 != NULL) && (v_5 != t)))
      _fail(t);
    else
      v_5 = t;
    t = not_null(t_5);
    if(((x_5 != NULL) && (x_5 != t)))
      _fail(t);
    else
      x_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_5), not_null(v_5)), (ATerm) ATmakeAppl(sym__2, not_null(w_5), not_null(x_5)));
    return(t);
  }
  if(((n_5 != NULL) && (n_5 != t)))
    _fail(t);
  else
    n_5 = t;
  t = not_null(n_5);
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      r_5 = ATgetArgument(t, 1);
      t = not_null(o_5);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_5 = ATgetFirst((ATermList) t);
          q_5 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(r_5);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_5 = ATgetFirst((ATermList) t);
              t_5 = (ATerm) ATgetNext((ATermList) t);
              t = y_5(t);
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
ATerm Zip1_0_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  ATerm g_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((d_6 != NULL) && (d_6 != t)))
    _fail(t);
  else
    d_6 = t;
  t = not_null(d_6);
  if(match_cons(t, sym__2))
    {
      e_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
      t = not_null(e_6);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(f_6);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = g_6(t);
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
ATerm genzip_4_0 (ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm l_1 = t;
    int m_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_99(t);
        ;
        LocalPopChoice(m_1);
      }
    else
      {
        t = l_1;
        t = a_100(t);
        t = _2_0(c_100, h_6, t);
        t = b_100(t);
      }
    return(t);
  }
  t = h_6(t);
  return(t);
}
ATerm zip_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, e_100, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
  ATerm p_7 (ATerm t)
  {
    ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,h_7 = NULL,n_7 = NULL;
    t = not_null(u_6);
    if(((x_6 != NULL) && (x_6 != t)))
      _fail(t);
    else
      x_6 = t;
    t = not_null(v_6);
    if(((y_6 != NULL) && (y_6 != t)))
      _fail(t);
    else
      y_6 = t;
    t = not_null(w_6);
    if(((z_6 != NULL) && (z_6 != t)))
      _fail(t);
    else
      z_6 = t;
    t = not_null(s_6);
    {
      ATerm n_1;
      n_1 = t;
      {
        ATerm c_7 = NULL;
        ATerm q_7 (ATerm t)
        {
          ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
          ATerm r_7 (ATerm t)
          {
            t = not_null(f_7);
            if(((a_7 != NULL) && (a_7 != t)))
              _fail(t);
            else
              a_7 = t;
            t = not_null(g_7);
            if(((b_7 != NULL) && (b_7 != t)))
              _fail(t);
            else
              b_7 = t;
            t = not_null(e_7);
            return(t);
          }
          t = not_null(c_7);
          if(((d_7 != NULL) && (d_7 != t)))
            _fail(t);
          else
            d_7 = t;
          t = not_null(c_7);
          t = SSL_explode_term(not_null(d_7));
          if(((e_7 != NULL) && (e_7 != t)))
            _fail(t);
          else
            e_7 = t;
          t = not_null(e_7);
          if(match_cons(t, sym__2))
            {
              f_7 = ATgetArgument(t, 0);
              g_7 = ATgetArgument(t, 1);
              t = r_7(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(y_6);
        if(((c_7 != NULL) && (c_7 != t)))
          _fail(t);
        else
          c_7 = t;
        t = q_7(t);
      }
      t = n_1;
      {
        ATerm o_1;
        o_1 = t;
        {
          ATerm i_7 = NULL;
          ATerm s_7 (ATerm t)
          {
            ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
            ATerm t_7 (ATerm t)
            {
              t = not_null(l_7);
              if(((a_7 != NULL) && (a_7 != t)))
                _fail(t);
              else
                a_7 = t;
              t = not_null(m_7);
              if(((h_7 != NULL) && (h_7 != t)))
                _fail(t);
              else
                h_7 = t;
              t = not_null(k_7);
              return(t);
            }
            t = not_null(i_7);
            if(((j_7 != NULL) && (j_7 != t)))
              _fail(t);
            else
              j_7 = t;
            t = not_null(i_7);
            t = SSL_explode_term(not_null(j_7));
            if(((k_7 != NULL) && (k_7 != t)))
              _fail(t);
            else
              k_7 = t;
            t = not_null(k_7);
            if(match_cons(t, sym__2))
              {
                l_7 = ATgetArgument(t, 0);
                m_7 = ATgetArgument(t, 1);
                t = t_7(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(x_6);
          if(((i_7 != NULL) && (i_7 != t)))
            _fail(t);
          else
            i_7 = t;
          t = s_7(t);
        }
        t = o_1;
        {
          ATerm o_7 = NULL;
          ATerm u_7 (ATerm t)
          {
            t = not_null(o_7);
            if(((n_7 != NULL) && (n_7 != t)))
              _fail(t);
            else
              n_7 = t;
            t = not_null(o_7);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(b_7));
          t = zip_1_0(_id, t);
          if(((o_7 != NULL) && (o_7 != t)))
            _fail(t);
          else
            o_7 = t;
          t = u_7(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_7), not_null(z_6));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((s_6 != NULL) && (s_6 != t)))
    _fail(t);
  else
    s_6 = t;
  t = not_null(s_6);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_6 = ATgetFirst((ATermList) t);
      w_6 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(t_6);
      if(match_cons(t, sym__2))
        {
          u_6 = ATgetArgument(t, 0);
          v_6 = ATgetArgument(t, 1);
          t = p_7(t);
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
ATerm eq_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  ATerm b_8 (ATerm t)
  {
    ATerm a_8 = NULL;
    t = not_null(y_7);
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = not_null(z_7);
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = not_null(x_7);
    return(t);
  }
  if(((x_7 != NULL) && (x_7 != t)))
    _fail(t);
  else
    x_7 = t;
  t = not_null(x_7);
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
      t = b_8(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  ATerm w_8 (ATerm t)
  {
    ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,q_8 = NULL;
    ATerm y_8 (ATerm t)
    {
      ATerm r_8 = NULL,s_8 = NULL;
      ATerm z_8 (ATerm t)
      {
        ATerm t_8 = NULL,u_8 = NULL;
        t = not_null(s_8);
        if(((t_8 != NULL) && (t_8 != t)))
          _fail(t);
        else
          t_8 = t;
        t = not_null(s_8);
        {
          ATerm v_8 = NULL;
          ATerm a_9 (ATerm t)
          {
            t = not_null(v_8);
            if(((u_8 != NULL) && (u_8 != t)))
              _fail(t);
            else
              u_8 = t;
            t = not_null(v_8);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_8)), not_null(r_8)), not_null(o_8));
          if(((v_8 != NULL) && (v_8 != t)))
            _fail(t);
          else
            v_8 = t;
          t = a_9(t);
          t = not_null(u_8);
        }
        return(t);
      }
      t = not_null(q_8);
      if(((r_8 != NULL) && (r_8 != t)))
        _fail(t);
      else
        r_8 = t;
      t = not_null(n_8);
      t = g_80(t);
      if(((s_8 != NULL) && (s_8 != t)))
        _fail(t);
      else
        s_8 = t;
      t = z_8(t);
      return(t);
    }
    t = not_null(i_8);
    if(((l_8 != NULL) && (l_8 != t)))
      _fail(t);
    else
      l_8 = t;
    t = not_null(j_8);
    if(((m_8 != NULL) && (m_8 != t)))
      _fail(t);
    else
      m_8 = t;
    t = not_null(k_8);
    if(((n_8 != NULL) && (n_8 != t)))
      _fail(t);
    else
      n_8 = t;
    t = not_null(i_8);
    {
      ATerm p_8 = NULL;
      ATerm x_8 (ATerm t)
      {
        t = not_null(p_8);
        if(((o_8 != NULL) && (o_8 != t)))
          _fail(t);
        else
          o_8 = t;
        t = not_null(p_8);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_8));
      if(((p_8 != NULL) && (p_8 != t)))
        _fail(t);
      else
        p_8 = t;
      t = x_8(t);
      t = not_null(m_8);
      t = f_80(t);
      if(((q_8 != NULL) && (q_8 != t)))
        _fail(t);
      else
        q_8 = t;
      t = y_8(t);
    }
    return(t);
  }
  if(((i_8 != NULL) && (i_8 != t)))
    _fail(t);
  else
    i_8 = t;
  t = not_null(i_8);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_8 = ATgetFirst((ATermList) t);
      k_8 = (ATerm) ATgetNext((ATermList) t);
      t = w_8(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  ATerm b_9 (ATerm t)
  {
    ATerm p_1 = t;
    int q_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_98, _id, t);
        ;
        LocalPopChoice(q_1);
      }
    else
      {
        t = p_1;
        t = Cons_2_0(_id, b_9, t);
      }
    return(t);
  }
  t = b_9(t);
  return(t);
}
ATerm MatchVar_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  ATerm x_9 (ATerm t)
  {
    ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
    t = not_null(l_9);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = not_null(m_9);
    if(((s_9 != NULL) && (s_9 != t)))
      _fail(t);
    else
      s_9 = t;
    t = not_null(n_9);
    if(((p_9 != NULL) && (p_9 != t)))
      _fail(t);
    else
      p_9 = t;
    t = not_null(o_9);
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    t = not_null(i_9);
    t = not_null(r_9);
    t = k_93(t);
    t = not_null(q_9);
    {
      ATerm r_1 = t;
      if((PushChoice() == 0))
        {
          ATerm d_0 (ATerm t)
          {
            ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
            ATerm y_9 (ATerm t)
            {
              ATerm w_9 = NULL;
              t = not_null(u_9);
              if(((r_9 != NULL) && (r_9 != t)))
                _fail(t);
              else
                r_9 = t;
              t = not_null(v_9);
              if(((w_9 != NULL) && (w_9 != t)))
                _fail(t);
              else
                w_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_9), not_null(w_9));
              {
                ATerm s_1 = t;
                if((PushChoice() == 0))
                  {
                    t = eq_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_1;
                  }
              }
              return(t);
            }
            if(((t_9 != NULL) && (t_9 != t)))
              _fail(t);
            else
              t_9 = t;
            t = not_null(t_9);
            if(match_cons(t, sym__2))
              {
                u_9 = ATgetArgument(t, 0);
                v_9 = ATgetArgument(t, 1);
                t = y_9(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(d_0, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_1;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), (ATerm) ATinsert(CheckATermList(not_null(q_9)), (ATerm) ATmakeAppl(sym__2, not_null(r_9), not_null(s_9))));
    return(t);
  }
  if(((i_9 != NULL) && (i_9 != t)))
    _fail(t);
  else
    i_9 = t;
  t = not_null(i_9);
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
      t = not_null(j_9);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_9 = ATgetFirst((ATermList) t);
          n_9 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(k_9);
          if(match_cons(t, sym__2))
            {
              l_9 = ATgetArgument(t, 0);
              m_9 = ATgetArgument(t, 1);
              t = x_9(t);
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
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  ATerm j_10 (ATerm t)
  {
    ATerm h_10 = NULL,i_10 = NULL;
    t = not_null(e_10);
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    t = not_null(f_10);
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    t = not_null(g_10);
    if(((i_10 != NULL) && (i_10 != t)))
      _fail(t);
    else
      i_10 = t;
    t = not_null(i_10);
    return(t);
  }
  if(((c_10 != NULL) && (c_10 != t)))
    _fail(t);
  else
    c_10 = t;
  t = not_null(c_10);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_10 = ATgetFirst((ATermList) t);
      g_10 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(d_10);
      if(match_cons(t, sym__2))
        {
          e_10 = ATgetArgument(t, 0);
          f_10 = ATgetArgument(t, 1);
          t = j_10(t);
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
ATerm while_not_2_0 (ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm k_10 (ATerm t)
  {
    ATerm t_1 = t;
    int g_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_111(t);
        ;
        LocalPopChoice(g_3);
      }
    else
      {
        t = t_1;
        t = x_111(t);
        t = k_10(t);
      }
    return(t);
  }
  t = k_10(t);
  return(t);
}
ATerm for_3_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t)
{
  t = z_111(t);
  t = while_not_2_0(a_112, b_112, t);
  return(t);
}
ATerm pattern_match_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm p_10 = NULL;
    ATerm v_10 (ATerm t)
    {
      ATerm q_10 = NULL;
      t = not_null(p_10);
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), (ATerm) ATempty);
      return(t);
    }
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    t = v_10(t);
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
    ATerm w_10 (ATerm t)
    {
      ATerm u_10 = NULL;
      t = not_null(t_10);
      if(((u_10 != NULL) && (u_10 != t)))
        _fail(t);
      else
        u_10 = t;
      t = not_null(u_10);
      return(t);
    }
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    t = not_null(r_10);
    if(match_cons(t, sym__2))
      {
        s_10 = ATgetArgument(t, 0);
        t_10 = ATgetArgument(t, 1);
        t = not_null(s_10);
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_10(t);
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
    ATerm h_3 = t;
    int n_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(UfIdem_0_0, _id, t);
        ;
        LocalPopChoice(n_3);
      }
    else
      {
        t = h_3;
        {
          ATerm p_3 = t;
          int q_3 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchVar_1_0(l_93, t);
              ;
              LocalPopChoice(q_3);
            }
          else
            {
              t = p_3;
              t = _2_0(UfDecompose_0_0, _id, t);
            }
        }
      }
    return(t);
  }
  t = for_3_0(e_0, f_0, g_0, t);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm r_3;
  r_3 = t;
  {
    ATerm y_10 = NULL;
    ATerm z_10 = NULL;
    ATerm a_11 (ATerm t)
    {
      t = not_null(z_10);
      if(((y_10 != NULL) && (y_10 != t)))
        _fail(t);
      else
        y_10 = t;
      t = not_null(z_10);
      return(t);
    }
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    t = a_11(t);
    t = (ATerm) ATmakeAppl(sym__2, term_s_3, (ATerm) ATinsert(ATempty, not_null(y_10)));
    t = printnl_0_0(t);
  }
  t = r_3;
  return(t);
}
ATerm record_failure_0_0 (ATerm t)
{
  ATerm i_0 (ATerm t)
  {
    ATerm c_11 = NULL;
    ATerm e_11 (ATerm t)
    {
      ATerm d_11 = NULL;
      t = not_null(c_11);
      if(((d_11 != NULL) && (d_11 != t)))
        _fail(t);
      else
        d_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_t_3);
      t = add_0_0(t);
      return(t);
    }
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = e_11(t);
    return(t);
  }
  t = _2_0(_id, i_0, t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  ATerm m_11 (ATerm t)
  {
    ATerm k_11 = NULL,l_11 = NULL;
    t = not_null(i_11);
    if(((k_11 != NULL) && (k_11 != t)))
      _fail(t);
    else
      k_11 = t;
    t = not_null(j_11);
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(h_11);
    {
      ATerm f_4 = t;
      int g_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(k_11), not_null(l_11));
          ;
          LocalPopChoice(g_4);
        }
      else
        {
          t = f_4;
          t = SSL_addr(not_null(k_11), not_null(l_11));
        }
    }
    return(t);
  }
  if(((h_11 != NULL) && (h_11 != t)))
    _fail(t);
  else
    h_11 = t;
  t = not_null(h_11);
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
      t = m_11(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm record_success_0_0 (ATerm t)
{
  ATerm k_0 (ATerm t)
  {
    ATerm o_11 = NULL;
    ATerm q_11 (ATerm t)
    {
      ATerm p_11 = NULL;
      t = not_null(o_11);
      if(((p_11 != NULL) && (p_11 != t)))
        _fail(t);
      else
        p_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), term_t_3);
      t = add_0_0(t);
      return(t);
    }
    if(((o_11 != NULL) && (o_11 != t)))
      _fail(t);
    else
      o_11 = t;
    t = q_11(t);
    return(t);
  }
  t = _2_0(k_0, _id, t);
  return(t);
}
ATerm do_test_2_0 (ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm t)
{
  ATerm h_4;
  h_4 = t;
  t = u_108(t);
  t = debug_0_0(t);
  t = h_4;
  {
    ATerm i_4 = t;
    int t_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4;
        u_4 = t;
        t = v_108(t);
        t = u_4;
        t = record_success_0_0(t);
        ;
        LocalPopChoice(t_4);
      }
    else
      {
        t = i_4;
        t = record_failure_0_0(t);
      }
  }
  return(t);
}
ATerm apply_test_4_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  ATerm l_0 (ATerm t)
  {
    ATerm w_11 = NULL;
    ATerm z_11 (ATerm t)
    {
      ATerm x_11 = NULL;
      ATerm a_12 (ATerm t)
      {
        t = not_null(x_11);
        if(((v_11 != NULL) && (v_11 != t)))
          _fail(t);
        else
          v_11 = t;
        t = not_null(x_11);
        {
          ATerm b_5 = t;
          int c_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_11 = NULL;
              ATerm b_12 (ATerm t)
              {
                t = not_null(y_11);
                if(((u_11 != NULL) && (u_11 != t)))
                  _fail(t);
                else
                  u_11 = t;
                t = not_null(y_11);
                return(t);
              }
              t = not_null(v_11);
              if(((y_11 != NULL) && (y_11 != t)))
                _fail(t);
              else
                y_11 = t;
              t = b_12(t);
              ;
              LocalPopChoice(c_5);
            }
          else
            {
              t = b_5;
              t = not_null(u_11);
              {
                ATerm m_0 (ATerm t)
                {
                  t = term_j_5;
                  return(t);
                }
                t = debug_1_0(m_0, t);
                t = not_null(v_11);
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = term_k_5;
                    return(t);
                  }
                  t = debug_1_0(n_0, t);
                  _fail(t);
                }
              }
            }
        }
        return(t);
      }
      t = not_null(w_11);
      if(((u_11 != NULL) && (u_11 != t)))
        _fail(t);
      else
        u_11 = t;
      t = not_null(w_11);
      t = b_109(t);
      if(((x_11 != NULL) && (x_11 != t)))
        _fail(t);
      else
        x_11 = t;
      t = a_12(t);
      return(t);
    }
    ATerm l_5 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_109(t);
        t = z_108(t);
        ;
        LocalPopChoice(m_5);
      }
    else
      {
        t = l_5;
        t = term_z_5;
        t = debug_0_0(t);
        _fail(t);
      }
    if(((w_11 != NULL) && (w_11 != t)))
      _fail(t);
    else
      w_11 = t;
    t = z_11(t);
    return(t);
  }
  t = do_test_2_0(y_108, l_0, t);
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    t = term_a_6;
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = Var_1_0(_id, t);
      return(t);
    }
    t = pattern_match_1_0(s_0, t);
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATmakeAppl(sym_Op_2, term_i_6, (ATerm) ATinsert(ATempty, term_k_6))));
    return(t);
  }
  ATerm r_0 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATmakeAppl(sym_Op_2, term_i_6, (ATerm) ATinsert(ATempty, term_k_6))));
    return(t);
  }
  t = apply_test_4_0(o_0, p_0, q_0, r_0, t);
  return(t);
}
ATerm check_for_failures_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm d_12 = NULL;
    if(((d_12 != NULL) && (d_12 != t)))
      _fail(t);
    else
      d_12 = t;
    t = not_null(d_12);
    if(match_int(t, 0))
      {
        t = not_null(d_12);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = _2_0(_id, t_0, t);
  return(t);
}
ATerm _2_0 (ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  ATerm y_12 (ATerm t)
  {
    ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,s_12 = NULL;
    ATerm a_13 (ATerm t)
    {
      ATerm t_12 = NULL,u_12 = NULL;
      ATerm b_13 (ATerm t)
      {
        ATerm v_12 = NULL,w_12 = NULL;
        t = not_null(u_12);
        if(((v_12 != NULL) && (v_12 != t)))
          _fail(t);
        else
          v_12 = t;
        t = not_null(u_12);
        {
          ATerm x_12 = NULL;
          ATerm c_13 (ATerm t)
          {
            t = not_null(x_12);
            if(((w_12 != NULL) && (w_12 != t)))
              _fail(t);
            else
              w_12 = t;
            t = not_null(x_12);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_12), not_null(v_12)), not_null(q_12));
          if(((x_12 != NULL) && (x_12 != t)))
            _fail(t);
          else
            x_12 = t;
          t = c_13(t);
          t = not_null(w_12);
        }
        return(t);
      }
      t = not_null(s_12);
      if(((t_12 != NULL) && (t_12 != t)))
        _fail(t);
      else
        t_12 = t;
      t = not_null(p_12);
      t = x_78(t);
      if(((u_12 != NULL) && (u_12 != t)))
        _fail(t);
      else
        u_12 = t;
      t = b_13(t);
      return(t);
    }
    t = not_null(k_12);
    if(((n_12 != NULL) && (n_12 != t)))
      _fail(t);
    else
      n_12 = t;
    t = not_null(l_12);
    if(((o_12 != NULL) && (o_12 != t)))
      _fail(t);
    else
      o_12 = t;
    t = not_null(m_12);
    if(((p_12 != NULL) && (p_12 != t)))
      _fail(t);
    else
      p_12 = t;
    t = not_null(k_12);
    {
      ATerm r_12 = NULL;
      ATerm z_12 (ATerm t)
      {
        t = not_null(r_12);
        if(((q_12 != NULL) && (q_12 != t)))
          _fail(t);
        else
          q_12 = t;
        t = not_null(r_12);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_12));
      if(((r_12 != NULL) && (r_12 != t)))
        _fail(t);
      else
        r_12 = t;
      t = z_12(t);
      t = not_null(o_12);
      t = w_78(t);
      if(((s_12 != NULL) && (s_12 != t)))
        _fail(t);
      else
        s_12 = t;
      t = a_13(t);
    }
    return(t);
  }
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = not_null(k_12);
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
      t = y_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm report_test_0_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      t = term_l_6;
      return(t);
    }
    t = debug_1_0(w_0, t);
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = term_m_6;
      return(t);
    }
    t = debug_1_0(x_0, t);
    return(t);
  }
  t = _2_0(u_0, v_0, t);
  return(t);
}
ATerm init_record_0_0 (ATerm t)
{
  t = term_o_6;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  ATerm k_13 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL;
    t = not_null(g_13);
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = not_null(h_13);
    if(((j_13 != NULL) && (j_13 != t)))
      _fail(t);
    else
      j_13 = t;
    t = not_null(f_13);
    {
      ATerm p_6;
      p_6 = t;
      t = SSL_printnl(not_null(i_13), not_null(j_13));
      t = p_6;
    }
    return(t);
  }
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  t = not_null(f_13);
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
      t = k_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  ATerm q_6;
  q_6 = t;
  {
    ATerm n_13 = NULL,p_13 = NULL;
    ATerm r_6;
    r_6 = t;
    {
      ATerm o_13 = NULL;
      ATerm r_13 (ATerm t)
      {
        t = not_null(o_13);
        if(((n_13 != NULL) && (n_13 != t)))
          _fail(t);
        else
          n_13 = t;
        t = not_null(o_13);
        return(t);
      }
      t = u_114(t);
      if(((o_13 != NULL) && (o_13 != t)))
        _fail(t);
      else
        o_13 = t;
      t = r_13(t);
    }
    t = r_6;
    {
      ATerm q_13 = NULL;
      ATerm s_13 (ATerm t)
      {
        t = not_null(q_13);
        if(((p_13 != NULL) && (p_13 != t)))
          _fail(t);
        else
          p_13 = t;
        t = not_null(q_13);
        return(t);
      }
      if(((q_13 != NULL) && (q_13 != t)))
        _fail(t);
      else
        q_13 = t;
      t = s_13(t);
      t = (ATerm) ATmakeAppl(sym__2, term_s_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), not_null(n_13)));
      t = printnl_0_0(t);
    }
  }
  t = q_6;
  return(t);
}
ATerm test_suite_2_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm t)
{
  t = s_108(t);
  {
    ATerm y_0 (ATerm t)
    {
      t = term_v_7;
      return(t);
    }
    t = debug_1_0(y_0, t);
    t = init_record_0_0(t);
    t = t_108(t);
    t = report_test_0_0(t);
    t = check_for_failures_0_0(t);
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_w_7;
    return(t);
  }
  t = test_suite_2_0(z_0, test1_0_0, t);
  return(t);
}
