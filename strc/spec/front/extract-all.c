#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Module_2;
static Symbol sym_Overlay_3;
static Symbol sym_OverlayNoArgs_2;
static Symbol sym_Con4_4;
static Symbol sym_Con3_3;
static Symbol sym_Con_3;
static Symbol sym_Con1_2;
static Symbol sym_ListTail_2;
static Symbol sym_List_1;
static Symbol sym_Tuple_1;
static Symbol sym_As_2;
static Symbol sym_RootApp_1;
static Symbol sym_App_2;
static Symbol sym_Anno_2;
static Symbol sym_Explode_2;
static Symbol sym_OpQ_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Char_1;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_Mod_2;
static Symbol sym_StrategyCurly_1;
static Symbol sym_SVar_1;
static Symbol sym_AM_2;
static Symbol sym_RChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_SRule_1;
static Symbol sym_CallNoArgs_1;
static Symbol sym_ExplodeCong_2;
static Symbol sym_ListCong_2;
static Symbol sym_ListCongNoTail_1;
static Symbol sym_ModCong_2;
static Symbol sym_ModCongNoArgs_1;
static Symbol sym_TupleCong_2;
static Symbol sym_EmptyTupleCong_0;
static Symbol sym_AnnoCong_2;
static Symbol sym_CongQ_2;
static Symbol sym_CharCong_1;
static Symbol sym_RealCong_1;
static Symbol sym_IntCong_1;
static Symbol sym_StrCong_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_Where_1;
static Symbol sym_Rec_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Call_2;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_ParenStrat_1;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_SDefNoArgs_2;
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_StratRule_3;
static Symbol sym_StratRuleNoCond_2;
static Symbol sym_Rule_3;
static Symbol sym_RuleNoCond_2;
static Symbol sym_SRDefT_4;
static Symbol sym_SRDef_3;
static Symbol sym_SRDefNoArgs_2;
static Symbol sym_RDefT_4;
static Symbol sym_RDef_3;
static Symbol sym_RDefNoArgs_2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Module_2;
static Symbol sym_Overlay_3;
static Symbol sym_OverlayNoArgs_2;
static Symbol sym_Con4_4;
static Symbol sym_Con3_3;
static Symbol sym_Con_3;
static Symbol sym_Con1_2;
static Symbol sym_ListTail_2;
static Symbol sym_List_1;
static Symbol sym_Tuple_1;
static Symbol sym_As_2;
static Symbol sym_RootApp_1;
static Symbol sym_App_2;
static Symbol sym_Anno_2;
static Symbol sym_Explode_2;
static Symbol sym_OpQ_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Char_1;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_Mod_2;
static Symbol sym_StrategyCurly_1;
static Symbol sym_SVar_1;
static Symbol sym_AM_2;
static Symbol sym_RChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_SRule_1;
static Symbol sym_CallNoArgs_1;
static Symbol sym_ExplodeCong_2;
static Symbol sym_ListCong_2;
static Symbol sym_ListCongNoTail_1;
static Symbol sym_ModCong_2;
static Symbol sym_ModCongNoArgs_1;
static Symbol sym_TupleCong_2;
static Symbol sym_EmptyTupleCong_0;
static Symbol sym_AnnoCong_2;
static Symbol sym_CongQ_2;
static Symbol sym_CharCong_1;
static Symbol sym_RealCong_1;
static Symbol sym_IntCong_1;
static Symbol sym_StrCong_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_Where_1;
static Symbol sym_Rec_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Call_2;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_ParenStrat_1;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_SDefNoArgs_2;
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_StratRule_3;
static Symbol sym_StratRuleNoCond_2;
static Symbol sym_Rule_3;
static Symbol sym_RuleNoCond_2;
static Symbol sym_SRDefT_4;
static Symbol sym_SRDef_3;
static Symbol sym_SRDefNoArgs_2;
static Symbol sym_RDefT_4;
static Symbol sym_RDef_3;
static Symbol sym_RDefNoArgs_2;
static Symbol sym_InfixApp_3;
static Symbol sym_MA_2;
static Symbol sym_BAM_3;
static Symbol sym_Seqs_1;
static Symbol sym_Choices_1;
static Symbol sym_LChoices_1;
static Symbol sym_Lets_2;
static Symbol sym_Con_3;
static Symbol sym_TupleCong_1;
static Symbol sym_TupleCong_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Anno_2;
static Symbol sym_Hashtable_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_OpQ_2 = ATmakeSymbol("OpQ", 2, ATfalse);
  ATprotectSymbol(sym_OpQ_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_CongQ_2 = ATmakeSymbol("CongQ", 2, ATfalse);
  ATprotectSymbol(sym_CongQ_2);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_OpQ_2 = ATmakeSymbol("OpQ", 2, ATfalse);
  ATprotectSymbol(sym_OpQ_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_CongQ_2 = ATmakeSymbol("CongQ", 2, ATfalse);
  ATprotectSymbol(sym_CongQ_2);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
}
static ATerm term_z_49;
static ATerm term_y_49;
static ATerm term_x_49;
static ATerm term_m_49;
static ATerm term_l_49;
static ATerm term_k_49;
static ATerm term_h_49;
static ATerm term_g_49;
static ATerm term_p_48;
static ATerm term_o_48;
static ATerm term_n_48;
static ATerm term_m_48;
static ATerm term_l_48;
static ATerm term_g_48;
static ATerm term_x_47;
static ATerm term_w_47;
static ATerm term_v_47;
static ATerm term_u_47;
static ATerm term_t_47;
static ATerm term_s_47;
static ATerm term_r_47;
static ATerm term_o_47;
static ATerm term_n_47;
static ATerm term_k_47;
static ATerm term_j_47;
static ATerm term_h_47;
static ATerm term_j_46;
static ATerm term_h_46;
static ATerm term_a_46;
static ATerm term_v_45;
static ATerm term_t_45;
static ATerm term_s_45;
static ATerm term_r_45;
static ATerm term_q_45;
static ATerm term_o_45;
static ATerm term_m_45;
static ATerm term_l_45;
static ATerm term_j_45;
static ATerm term_i_45;
static ATerm term_h_45;
static ATerm term_e_45;
static ATerm term_z_44;
static ATerm term_v_44;
static ATerm term_u_44;
static ATerm term_t_44;
static ATerm term_k_44;
static ATerm term_f_44;
static ATerm term_e_44;
static ATerm term_d_44;
static ATerm term_c_44;
static ATerm term_b_44;
static ATerm term_y_43;
static ATerm term_x_43;
static ATerm term_h_43;
static ATerm term_g_43;
static ATerm term_d_43;
static ATerm term_c_43;
static ATerm term_b_43;
static ATerm term_a_43;
static ATerm term_v_42;
static ATerm term_y_41;
static ATerm term_x_41;
static ATerm term_r_40;
static ATerm term_q_40;
static ATerm term_p_40;
static ATerm term_u_39;
static ATerm term_r_39;
static ATerm term_q_39;
static ATerm term_f_39;
static ATerm term_b_39;
static ATerm term_a_39;
static ATerm term_m_36;
static ATerm term_z_35;
static ATerm term_z_34;
static ATerm term_k_32;
static ATerm term_g_32;
static ATerm term_r_31;
static ATerm term_m_31;
static ATerm term_j_31;
static ATerm term_y_30;
static ATerm term_w_30;
static ATerm term_v_30;
static ATerm term_o_25;
static ATerm term_b_25;
static ATerm term_y_24;
static ATerm term_o_24;
static ATerm term_k_24;
static ATerm term_j_24;
static ATerm term_i_24;
static ATerm term_h_24;
static ATerm term_g_24;
static ATerm term_v_22;
static ATerm term_u_22;
static ATerm term_t_22;
static ATerm term_s_22;
static ATerm term_e_22;
static ATerm term_d_22;
static ATerm term_c_22;
static ATerm term_b_22;
static ATerm term_a_22;
static ATerm term_z_21;
static ATerm term_y_21;
static ATerm term_x_21;
static ATerm term_w_21;
static ATerm term_v_21;
static ATerm term_p_21;
static ATerm term_o_21;
static ATerm term_n_21;
static ATerm term_m_21;
static ATerm term_k_21;
static ATerm term_f_21;
static ATerm term_e_21;
static ATerm term_o_20;
static ATerm term_n_20;
static ATerm term_v_17;
static ATerm term_j_17;
static ATerm term_h_17;
static ATerm term_g_17;
static ATerm term_f_17;
static ATerm term_e_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Call_2, term_c_22, (ATerm) ATempty);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Op_2, term_b_22, (ATerm) ATempty);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Call_2, term_f_21, (ATerm) ATempty);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Call_2, term_h_24, (ATerm) ATempty);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_v_30, (ATerm) ATempty);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_w_30);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("error: redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ExtDefinitions", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym__2, term_a_43, term_b_43);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym__2, term_a_43, term_g_43);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym__2, term_a_43, term_b_44);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(sym__2, term_a_43, term_e_44);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym__2, term_u_44, term_v_44);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym__2, term_j_45, term_n_20);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_20);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym__2, term_r_45, term_j_31);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym__2, term_a_43, term_j_45);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_j_31);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym__2, term_u_47, term_j_31);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym__2, term_l_48, term_j_31);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym__3, term_u_44, term_v_44, (ATerm) ATempty);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym__2, term_a_43, term_l_48);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym__2, term_a_43, term_r_47);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(sym__2, term_g_43, term_j_31);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm v_9 (ATerm u_26, ATerm v_26, ATerm w_26, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm j_131 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_10 (ATerm e_42, ATerm d_42, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm h_149 (ATerm), ATerm i_149 (ATerm), ATerm j_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_149 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm i_151 (ATerm), ATerm t);
static ATerm r_52 (ATerm l_44, ATerm o_44, ATerm t);
static ATerm s_52 (ATerm y_44, ATerm c_45, ATerm d_45, ATerm t);
static ATerm u_52 (ATerm e_46, ATerm f_46, ATerm t);
static ATerm x_52 (ATerm p_46, ATerm q_46, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm g_130 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_10 (ATerm b_36, ATerm c_36, ATerm d_36, ATerm t);
static ATerm k_64 (ATerm z_63, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm l_138 (ATerm), ATerm m_138 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm p_133 (ATerm), ATerm t);
static ATerm s_10 (ATerm o_31, ATerm p_31, ATerm q_31, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_132 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm s_136 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm t_10 (ATerm r_57, ATerm s_57, ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm copy_1_0 (ATerm o_155 (ATerm), ATerm t);
static ATerm u_10 (ATerm p_25, ATerm q_25, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm a_83 (ATerm v_79, ATerm w_79, ATerm z_79, ATerm b_80, ATerm t);
static ATerm c_83 (ATerm u_81, ATerm v_81, ATerm w_81, ATerm x_81, ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_144 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_139 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm d_134 (ATerm), ATerm t);
static ATerm c_10 (ATerm s_73, ATerm t_73, ATerm t);
ATerm end_scope_1_0 (ATerm s_167 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm r_167 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm t_167 (ATerm), ATerm u_167 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm g_10 (ATerm e_28, ATerm f_28, ATerm j_28, ATerm g_28, ATerm i_28, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm e_85 (ATerm j_83, ATerm k_83, ATerm l_83, ATerm m_83, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm b_145 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_87 (ATerm p_86, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_11 (ATerm w_151 (ATerm), ATerm p_68, ATerm o_68, ATerm t);
ATerm genzip_4_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm f_11 (ATerm j_887, ATerm o_887, ATerm o_86, ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm z_91 (ATerm i_90, ATerm j_90, ATerm u_90, ATerm t);
static ATerm j_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm h_11 (ATerm m_167 (ATerm), ATerm n_167 (ATerm), ATerm o_167 (ATerm), ATerm t_89, ATerm q_89, ATerm y_89, ATerm u_89, ATerm r_89, ATerm s_89, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm m_167 (ATerm), ATerm n_167 (ATerm), ATerm o_167 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm t);
ATerm for_3_0 (ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm i_34 (ATerm j_33, ATerm k_33, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
ATerm ExtDefinitions_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm k_11 (ATerm v_167 (ATerm), ATerm r_90, ATerm p_90, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm m_11 (ATerm y_73, ATerm z_73, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm n_11 (ATerm e_152 (ATerm), ATerm f_152 (ATerm), ATerm v_68, ATerm u_68, ATerm t);
static ATerm o_11 (ATerm b_152 (ATerm), ATerm r_68, ATerm q_68, ATerm t);
ATerm foldr_3_0 (ATerm a_155 (ATerm), ATerm b_155 (ATerm), ATerm c_155 (ATerm), ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t);
static ATerm p_11 (ATerm q_50, ATerm r_50, ATerm t);
static ATerm q_11 (ATerm w_48, ATerm x_48, ATerm t);
static ATerm s_11 (ATerm a_140 (ATerm), ATerm o_369, ATerm c_49, ATerm t);
static ATerm r_11 (ATerm s_48, ATerm t_48, ATerm t);
static ATerm q_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm output_1_0 (ATerm v_162 (ATerm), ATerm t);
static ATerm c_104 (ATerm w_103, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_11 (ATerm y_48, ATerm t);
static ATerm u_11 (ATerm y_67, ATerm z_67, ATerm t);
static ATerm v_11 (ATerm s_50, ATerm t_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_105 (ATerm m_104, ATerm t);
static ATerm o_105 (ATerm q_104, ATerm r_104, ATerm s_104, ATerm t);
static ATerm p_105 (ATerm a_105, ATerm b_105, ATerm c_105, ATerm t);
static ATerm w_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_162 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm m_144 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm default_system_usage_2_0 (ATerm u_164 (ATerm), ATerm v_164 (ATerm), ATerm t);
static ATerm x_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_12 (ATerm m_54, ATerm n_54, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_12 (ATerm n_73, ATerm o_73, ATerm m_73, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm t_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_11 (ATerm l_57, ATerm m_57, ATerm t);
ATerm foldr_2_0 (ATerm y_154 (ATerm), ATerm z_154 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_141 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_12 (ATerm c_78, ATerm d_78, ATerm e_78, ATerm t);
ATerm lookup_table_0_1 (ATerm z_74, ATerm t);
ATerm new_hashtable_0_2 (ATerm k_78, ATerm l_78, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_11 (ATerm h_78, ATerm i_78, ATerm t);
static ATerm a_12 (ATerm m_78, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_144 (ATerm), ATerm t);
static ATerm h_12 (ATerm f_78, ATerm g_78, ATerm t);
static ATerm c_12 (ATerm g_75, ATerm h_75, ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm p_164 (ATerm), ATerm t);
static ATerm o_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm parse_options_3_0 (ATerm m_164 (ATerm), ATerm n_164 (ATerm), ATerm o_164 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm p_162 (ATerm), ATerm q_162 (ATerm), ATerm r_162 (ATerm), ATerm s_162 (ATerm), ATerm t_162 (ATerm), ATerm t);
static ATerm k_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm d_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm v_9 (ATerm u_26, ATerm v_26, ATerm w_26, ATerm t)
{
  ATerm c_0 = NULL,t_0 = NULL;
  t = term_e_17;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_17), w_26), term_h_17), v_26), term_g_17), u_26), term_f_17);
  t_0 = t;
  t = SSL_printnl(c_0, t_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_17), w_26), term_h_17), v_26), term_g_17), u_26), term_f_17);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if(((ATgetType(k_17) != AT_INT) || (ATgetInt((ATermInt) k_17) != 0)))
        _fail(t);
      {
        ATerm l_17 = ATgetArgument(t, 1);
        if(((ATgetType(l_17) != AT_INT) || (ATgetInt((ATermInt) l_17) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = h_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL,x_0 = NULL;
        t = c_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_17 = ATgetFirst((ATermList) t);
            ATerm q_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(q_17) == AT_LIST) && !(ATisEmpty(q_17))))
              {
                ATerm r_17 = ATgetFirst((ATermList) q_17);
                ATerm s_17 = (ATerm) ATgetNext((ATermList) q_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm u_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_17;
            }
        }
        t = term_e_17;
        w_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_v_17);
        x_0 = t;
        t = SSL_printnl(w_0, x_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_v_17);
        t = giving_up_0_0(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        {
          ATerm d_1 = NULL,e_1 = NULL;
          t = c_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_17 = ATgetFirst((ATermList) t);
              if(match_cons(w_17, sym__2))
                {
                  d_1 = ATgetArgument(w_17, 0);
                  e_1 = ATgetArgument(w_17, 1);
                }
              else
                _fail(t);
              {
                ATerm x_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(x_17) != AT_LIST) || !(ATisEmpty(x_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATmakeAppl(sym__2, d_1, e_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATmakeAppl(sym__2, d_1, e_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,z_7 = NULL,b_8 = NULL;
  x_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_7 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
      {
        ATerm q_1 = NULL,t_1 = NULL,v_1 = NULL,f_1 = NULL;
        t = SSLgetAnnotations(x_7);
        q_1 = t;
        t = z_7;
        t = f_131(t);
        t_1 = t;
        t = b_8;
        t = f_131(t);
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_1, v_1);
        f_1 = t;
        t = SSLsetAnnotations(f_1, q_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_7 = ATgetArgument(t, 0);
          b_8 = ATgetArgument(t, 1);
          w_7 = ATgetArgument(t, 2);
          {
            ATerm o_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(x_7);
            o_2 = t;
            t = z_7;
            t = h_131(t);
            s_2 = t;
            t = b_8;
            t = h_131(t);
            t_2 = t;
            t = w_7;
            t = f_131(t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, s_2, t_2, u_2);
            g_1 = t;
            t = SSLsetAnnotations(g_1, o_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              z_7 = ATgetArgument(t, 0);
              b_8 = ATgetArgument(t, 1);
              w_7 = ATgetArgument(t, 2);
              v_7 = ATgetArgument(t, 3);
              {
                ATerm e_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,c_7 = NULL,i_1 = NULL;
                t = SSLgetAnnotations(x_7);
                e_6 = t;
                t = z_7;
                t = h_131(t);
                y_6 = t;
                t = b_8;
                t = h_131(t);
                z_6 = t;
                t = w_7;
                t = h_131(t);
                a_7 = t;
                t = v_7;
                t = f_131(t);
                c_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_6, z_6, a_7, c_7);
                i_1 = t;
                t = SSLsetAnnotations(i_1, e_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  z_7 = ATgetArgument(t, 0);
                  b_8 = ATgetArgument(t, 1);
                  w_7 = ATgetArgument(t, 2);
                  v_7 = ATgetArgument(t, 3);
                  {
                    ATerm u_7 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,q_8 = NULL,k_1 = NULL;
                    t = SSLgetAnnotations(x_7);
                    u_7 = t;
                    t = z_7;
                    t = h_131(t);
                    m_8 = t;
                    t = b_8;
                    t = h_131(t);
                    n_8 = t;
                    t = w_7;
                    t = h_131(t);
                    o_8 = t;
                    t = v_7;
                    t = f_131(t);
                    q_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, m_8, n_8, o_8, q_8);
                    k_1 = t;
                    t = SSLsetAnnotations(k_1, u_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      z_7 = ATgetArgument(t, 0);
                      b_8 = ATgetArgument(t, 1);
                      w_7 = ATgetArgument(t, 2);
                      {
                        ATerm b_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,l_1 = NULL;
                        t = SSLgetAnnotations(x_7);
                        b_9 = t;
                        t = z_7;
                        t = h_131(t);
                        f_9 = t;
                        t = b_8;
                        t = h_131(t);
                        g_9 = t;
                        t = w_7;
                        t = h_131(t);
                        h_9 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, f_9, g_9, h_9);
                        l_1 = t;
                        t = SSLsetAnnotations(l_1, b_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          z_7 = ATgetArgument(t, 0);
                          b_8 = ATgetArgument(t, 1);
                          {
                            ATerm r_9 = NULL,u_9 = NULL,w_9 = NULL,p_1 = NULL;
                            t = SSLgetAnnotations(x_7);
                            r_9 = t;
                            t = z_7;
                            t = h_131(t);
                            u_9 = t;
                            t = b_8;
                            t = f_131(t);
                            w_9 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, u_9, w_9);
                            p_1 = t;
                            t = SSLsetAnnotations(p_1, r_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              z_7 = ATgetArgument(t, 0);
                              b_8 = ATgetArgument(t, 1);
                              {
                                ATerm i_10 = NULL,m_10 = NULL,n_10 = NULL,u_1 = NULL;
                                t = SSLgetAnnotations(x_7);
                                i_10 = t;
                                t = z_7;
                                t = h_131(t);
                                m_10 = t;
                                t = b_8;
                                t = f_131(t);
                                n_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, m_10, n_10);
                                u_1 = t;
                                t = SSLsetAnnotations(u_1, i_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  z_7 = ATgetArgument(t, 0);
                                  b_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_11 = NULL,g_11 = NULL,i_11 = NULL,w_1 = NULL;
                                    t = SSLgetAnnotations(x_7);
                                    b_11 = t;
                                    t = z_7;
                                    t = h_131(t);
                                    g_11 = t;
                                    t = b_8;
                                    t = f_131(t);
                                    i_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, g_11, i_11);
                                    w_1 = t;
                                    t = SSLsetAnnotations(w_1, b_11);
                                  }
                                }
                              else
                                {
                                  ATerm l_12 = NULL,s_12 = NULL,t_12 = NULL,y_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      z_7 = ATgetArgument(t, 0);
                                      b_8 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(x_7);
                                  l_12 = t;
                                  t = z_7;
                                  t = h_131(t);
                                  s_12 = t;
                                  t = b_8;
                                  t = f_131(t);
                                  t_12 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, s_12, t_12);
                                  y_1 = t;
                                  t = SSLsetAnnotations(y_1, l_12);
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
ATerm dynrule_sargs_1_0 (ATerm j_131 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,l_10 = NULL,e_11 = NULL;
  ATerm y_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          z_9 = ATgetArgument(t, 0);
          {
            ATerm b_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_18);
      t = z_9;
      if(match_cons(t, sym_DynRuleId_1))
        {
          l_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_10;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_18 = ATgetArgument(t, 0);
          e_11 = ATgetArgument(t, 1);
          {
            ATerm d_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_11;
    }
  else
    {
      t = y_17;
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                z_9 = ATgetArgument(t, 0);
                {
                  ATerm g_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_18);
            t = z_9;
            if(match_cons(t, sym_DynRuleId_1))
              {
                l_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_10;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm h_18 = ATgetArgument(t, 0);
                e_11 = ATgetArgument(t, 1);
                {
                  ATerm i_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = e_11;
          }
        else
          {
            t = e_18;
            if(match_cons(t, sym_AddDynRule_2))
              {
                z_9 = ATgetArgument(t, 0);
                {
                  ATerm j_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = z_9;
            if(match_cons(t, sym_DynRuleId_1))
              {
                l_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_10;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm k_18 = ATgetArgument(t, 0);
                e_11 = ATgetArgument(t, 1);
                {
                  ATerm l_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = e_11;
          }
      }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm d_13 = NULL;
  ATerm n_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_13 = ATgetArgument(t, 0);
          {
            ATerm q_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_18);
      t = d_13;
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_13;
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm k_13 = NULL;
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_13 = ATgetArgument(t, 0);
          {
            ATerm w_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_18);
      t = k_13;
    }
  else
    {
      t = r_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_13;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm x_12 = NULL;
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_18 = ATgetArgument(t, 0);
          x_12 = ATgetArgument(t, 1);
          {
            ATerm a_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_18);
      t = x_12;
      t = map_1_0(i_0, t);
    }
  else
    {
      t = x_18;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_19 = ATgetArgument(t, 0);
          x_12 = ATgetArgument(t, 1);
          {
            ATerm c_19 = ATgetArgument(t, 2);
          }
          {
            ATerm d_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_12;
      t = map_1_0(u_0, t);
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_13 = ATgetArgument(t, 0);
          {
            ATerm h_19 = ATgetArgument(t, 1);
          }
          {
            ATerm j_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_19);
      t = r_13;
    }
  else
    {
      t = e_19;
      if(match_cons(t, sym_SDefT_4))
        {
          r_13 = ATgetArgument(t, 0);
          {
            ATerm k_19 = ATgetArgument(t, 1);
          }
          {
            ATerm l_19 = ATgetArgument(t, 2);
          }
          {
            ATerm m_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_13;
    }
  return(t);
}
static ATerm b_10 (ATerm e_42, ATerm d_42, ATerm t)
{
  t = e_42;
  t = map_1_0(y_0, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(h_1, j_14, k_14, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      l_14 = ATgetArgument(t, 0);
      if((l_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(n_1, u_14, v_14, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      e_15 = ATgetArgument(t, 0);
      if((e_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm n_15 = NULL;
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      if((n_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm h_149 (ATerm), ATerm i_149 (ATerm), ATerm j_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_149 (ATerm), ATerm t)
{
  static ATerm r_15 (ATerm t);
  static ATerm r_15 (ATerm t)
  {
    ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
    y_14 = t;
    {
      ATerm o_19 = t;
      int p_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_149(t);
          LocalPopChoice(p_19);
        }
      else
        {
          t = o_19;
          t = (ATerm) ATempty;
        }
    }
    w_14 = t;
    t = y_14;
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_14 = NULL,y_13 = NULL,z_13 = NULL;
          t = i_149(t);
          z_14 = t;
          t = y_14;
          {
            static ATerm z_0 (ATerm t);
            static ATerm z_0 (ATerm t)
            {
              ATerm p_13 = NULL;
              t = r_15(t);
              p_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_13, z_14);
              t = a_11(k_149, p_13, z_14, t);
              return(t);
            }
            t = j_149(z_0, r_15, a_1, t);
          }
          z_13 = t;
          t = SSL_explode_term(z_13);
          if(match_cons(t, sym__2))
            {
              ATerm w_19 = ATgetArgument(t, 0);
              y_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_13;
          t = foldr_3_0(b_1, c_1, _id, t);
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          {
            ATerm o_14 = NULL;
            t = SSL_explode_term(y_14);
            if(match_cons(t, sym__2))
              {
                ATerm x_19 = ATgetArgument(t, 0);
                o_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_14;
            t = foldr_3_0(j_1, m_1, r_15, t);
          }
        }
    }
    x_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_14, x_14);
    t = o_11(o_1, w_14, x_14, t);
    return(t);
  }
  t = r_15(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      if(match_cons(y_19, sym_SVar_1))
        {
          y_15 = ATgetArgument(y_19, 0);
        }
      else
        _fail(t);
      z_15 = ATgetArgument(t, 1);
      a_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_15;
  t = foldr_3_0(z_1, b_2, d_2, t);
  b_16 = t;
  t = a_16;
  t = foldr_3_0(f_2, i_2, j_2, t);
  c_16 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_15, (ATerm) ATmakeAppl(sym__2, b_16, c_16)));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_16 = NULL,m_16 = NULL,p_16 = NULL,t_16 = NULL,w_16 = NULL;
      i_16 = t;
      if(match_cons(t, sym_Let_2))
        {
          m_16 = ATgetArgument(t, 0);
          p_16 = ATgetArgument(t, 1);
          t = i_16;
          t = b_10(m_16, p_16, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              m_16 = ATgetArgument(t, 0);
              p_16 = ATgetArgument(t, 1);
              t_16 = ATgetArgument(t, 2);
              t = p_16;
              t = map_1_0(k_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  m_16 = ATgetArgument(t, 0);
                  p_16 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, m_16);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_16 = ATgetArgument(t, 0);
                      p_16 = ATgetArgument(t, 1);
                      t_16 = ATgetArgument(t, 2);
                      w_16 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_16;
                  t = map_1_0(l_2, t);
                }
            }
        }
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            t = dynrule_sargs_1_0(m_2, t);
          }
      }
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_20 = ATgetArgument(t, 0);
      if(match_cons(k_20, sym__2))
        {
          t_19 = ATgetArgument(k_20, 0);
          {
            ATerm l_20 = ATgetArgument(k_20, 1);
          }
        }
      else
        _fail(t);
      if((t_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(e_16, f_16, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(g_16, h_16, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm z_17 = NULL;
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_17 = ATgetArgument(t, 0);
          {
            ATerm u_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_20);
      t = z_17;
    }
  else
    {
      t = s_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_17;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm v_18 = NULL;
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_18 = ATgetArgument(t, 0);
          {
            ATerm x_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_20);
      t = v_18;
    }
  else
    {
      t = v_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_18;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = map_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm g_19 = NULL;
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_19 = ATgetArgument(t, 0);
          {
            ATerm a_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_20);
      t = g_19;
    }
  else
    {
      t = y_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_19;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(r_1, s_1, sboundin_3_0, x_1, t);
  return(t);
}
ATerm escape_chars_1_0 (ATerm i_151 (ATerm), ATerm t)
{
  static ATerm h_42 (ATerm t);
  static ATerm h_42 (ATerm t)
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_3 = NULL;
        t = i_151(t);
        a_40 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_39 = ATgetFirst((ATermList) t);
            y_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_40);
        c_39 = t;
        t = y_39;
        t = Cons_2_0(_id, h_42, t);
        z_39 = t;
        t = (ATerm) ATinsert(CheckATermList(z_39), x_39);
        b_3 = t;
        t = SSLsetAnnotations(b_3, c_39);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        {
          ATerm b_42 = NULL,c_42 = NULL,f_42 = NULL;
          f_42 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_42 = ATgetFirst((ATermList) t);
              c_42 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm p_17 = NULL,t_17 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(f_42);
                p_17 = t;
                t = c_42;
                t = h_42(t);
                t_17 = t;
                t = (ATerm) ATinsert(CheckATermList(t_17), b_42);
                c_3 = t;
                t = SSLsetAnnotations(c_3, p_17);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_42;
            }
        }
      }
    return(t);
  }
  t = h_42(t);
  return(t);
}
static ATerm r_52 (ATerm l_44, ATerm o_44, ATerm t)
{
  t = l_44;
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_44 = NULL,s_44 = NULL,w_44 = NULL,x_44 = NULL,f_3 = NULL;
        x_44 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_44 = ATgetFirst((ATermList) t);
            w_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_44);
        r_44 = t;
        t = w_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(w_44), s_44);
        f_3 = t;
        t = SSLsetAnnotations(f_3, r_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_21, l_44);
  return(t);
}
static ATerm s_52 (ATerm y_44, ATerm c_45, ATerm d_45, ATerm t)
{
  ATerm k_45 = NULL,n_45 = NULL;
  t = SSL_explode_string(y_44);
  t = escape_chars_1_0(p_2, t);
  n_45 = t;
  t = SSL_implode_string(n_45);
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, k_45, c_45);
  return(t);
}
static ATerm u_52 (ATerm e_46, ATerm f_46, ATerm t)
{
  t = e_46;
  {
    ATerm h_21 = t;
    if((PushChoice() == 0))
      {
        ATerm i_46 = NULL,k_46 = NULL,l_46 = NULL,n_46 = NULL,g_3 = NULL;
        n_46 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_46 = ATgetFirst((ATermList) t);
            l_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_46);
        i_46 = t;
        t = l_46;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_46), k_46);
        g_3 = t;
        t = SSLsetAnnotations(g_3, i_46);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_e_21, e_46);
  return(t);
}
static ATerm x_52 (ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm t_46 = NULL;
  t = p_46;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_k_21;
          }
        else
          {
            if(match_string(t, "'\\r'"))
              {
                t = term_m_21;
              }
            else
              {
                if(match_string(t, "'\\t'"))
                  {
                    t = term_n_21;
                  }
                else
                  {
                    if(match_string(t, "'\\n'"))
                      {
                        t = term_o_21;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                          _fail(t);
                        t = term_p_21;
                      }
                  }
              }
          }
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          ATerm w_46 = NULL;
          t = SSL_explode_string(p_46);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_21 = ATgetFirst((ATermList) t);
              if(((ATgetType(q_21) != AT_INT) || (ATgetInt((ATermInt) q_21) != 39)))
                _fail(t);
              {
                ATerm r_21 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
                  {
                    w_46 = ATgetFirst((ATermList) r_21);
                    {
                      ATerm s_21 = (ATerm) ATgetNext((ATermList) r_21);
                      if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
                        {
                          ATerm t_21 = ATgetFirst((ATermList) s_21);
                          if(((ATgetType(t_21) != AT_INT) || (ATgetInt((ATermInt) t_21) != 39)))
                            _fail(t);
                          {
                            ATerm u_21 = (ATerm) ATgetNext((ATermList) s_21);
                            if(((ATgetType(u_21) != AT_LIST) || !(ATisEmpty(u_21))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = w_46;
        }
      }
  }
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, t_46);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm p_45 = NULL,u_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_45 = ATgetFirst((ATermList) t);
      u_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_45;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(u_45), term_w_21), term_v_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(u_45), term_v_21), term_v_21);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_45), term_x_21), term_v_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_45), term_y_21), term_v_21);
            }
        }
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_18 = ATgetFirst((ATermList) t);
      u_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_18;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(u_18), term_w_21), term_v_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(u_18), term_v_21), term_v_21);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_18), term_x_21), term_v_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_18), term_y_21), term_v_21);
            }
        }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL;
  if(match_cons(t, sym__2))
    {
      a_48 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, b_48), a_48));
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  if(match_cons(t, sym__2))
    {
      d_48 = ATgetArgument(t, 0);
      e_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, e_48), d_48));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  if(match_cons(t, sym__2))
    {
      h_51 = ATgetArgument(t, 0);
      i_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, i_51), h_51));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL;
  if(match_cons(t, sym__2))
    {
      k_51 = ATgetArgument(t, 0);
      l_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, l_51), k_51));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm x_51 = NULL,c_52 = NULL,i_19 = NULL;
  x_51 = t;
  t = SSL_explode_term(x_51);
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_22 = ATgetArgument(t, 1);
        if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
          {
            c_52 = ATgetFirst((ATermList) g_22);
            {
              ATerm i_22 = (ATerm) ATgetNext((ATermList) g_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(x_51);
  if(match_cons(t, sym__2))
    {
      ATerm j_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_22 = ATgetArgument(t, 1);
        if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
          {
            ATerm m_22 = ATgetFirst((ATermList) l_22);
            ATerm n_22 = (ATerm) ATgetNext((ATermList) l_22);
            if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
              {
                i_19 = ATgetFirst((ATermList) n_22);
                {
                  ATerm p_22 = (ATerm) ATgetNext((ATermList) n_22);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, i_19), c_52));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,g_47 = NULL,i_47 = NULL;
  d_47 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      g_47 = ATgetArgument(t, 0);
      i_47 = ATgetArgument(t, 1);
      {
        ATerm m_18 = NULL,o_18 = NULL;
        t = SSL_explode_string(g_47);
        t = escape_chars_1_0(q_2, t);
        o_18 = t;
        t = SSL_implode_string(o_18);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_18), i_47);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          g_47 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, g_47));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              g_47 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, g_47));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  g_47 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, g_47));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      g_47 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, g_47));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          g_47 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_47), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              g_47 = ATgetArgument(t, 0);
                              i_47 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_47), i_47);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  g_47 = ATgetArgument(t, 0);
                                  i_47 = ATgetArgument(t, 1);
                                  {
                                    static ATerm r_2 (ATerm t);
                                    static ATerm r_2 (ATerm t)
                                    {
                                      t = i_47;
                                      return(t);
                                    }
                                    t = g_47;
                                    t = foldr_2_0(r_2, v_2, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      g_47 = ATgetArgument(t, 0);
                                      t = g_47;
                                      t = foldr_2_0(w_2, x_2, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          g_47 = ATgetArgument(t, 0);
                                          i_47 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_f_21, (ATerm) ATinsert(CheckATermList(i_47), g_47));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              g_47 = ATgetArgument(t, 0);
                                              t = g_47;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  z_46 = ATgetFirst((ATermList) t);
                                                  a_47 = (ATerm) ATgetNext((ATermList) t);
                                                  t = a_47;
                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                    {
                                                      ATerm q_22 = t;
                                                      int r_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = r_52(g_47, d_47, t);
                                                          LocalPopChoice(r_22);
                                                        }
                                                      else
                                                        {
                                                          t = q_22;
                                                          t = z_46;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = r_52(g_47, d_47, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = r_52(g_47, d_47, t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                {
                                                  t = term_s_22;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_AnnoCong_2))
                                                    {
                                                      g_47 = ATgetArgument(t, 0);
                                                      i_47 = ATgetArgument(t, 1);
                                                      t = i_47;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          y_46 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_u_22, (ATerm) ATinsert(ATinsert(ATempty, y_46), g_47));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          g_47 = ATgetArgument(t, 0);
                                                          t = g_47;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              g_47 = ATgetArgument(t, 0);
                                                              i_47 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, g_47, i_47, term_v_22);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  g_47 = ATgetArgument(t, 0);
                                                                  i_47 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, g_47, i_47, term_v_22);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      g_47 = ATgetArgument(t, 0);
                                                                      i_47 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, g_47, (ATerm)ATempty, i_47);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          g_47 = ATgetArgument(t, 0);
                                                                          i_47 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, i_47, g_47);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              g_47 = ATgetArgument(t, 0);
                                                                              i_47 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, g_47, i_47, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  g_47 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, g_47, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      g_47 = ATgetArgument(t, 0);
                                                                                      i_47 = ATgetArgument(t, 1);
                                                                                      c_47 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, g_47, i_47, (ATerm)ATempty, c_47);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          g_47 = ATgetArgument(t, 0);
                                                                                          i_47 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, g_47, (ATerm)ATempty, (ATerm)ATempty, i_47);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              g_47 = ATgetArgument(t, 0);
                                                                                              i_47 = ATgetArgument(t, 1);
                                                                                              c_47 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_47, i_47, (ATerm)ATempty, c_47);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  g_47 = ATgetArgument(t, 0);
                                                                                                  i_47 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_47, (ATerm)ATempty, (ATerm)ATempty, i_47);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      g_47 = ATgetArgument(t, 0);
                                                                                                      i_47 = ATgetArgument(t, 1);
                                                                                                      c_47 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, g_47, i_47, (ATerm)ATempty, c_47);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          g_47 = ATgetArgument(t, 0);
                                                                                                          i_47 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, g_47, (ATerm)ATempty, (ATerm)ATempty, i_47);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          ATerm x_22 = t;
                                                                                                          int b_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Module_2))
                                                                                                                {
                                                                                                                  ATerm e_23 = ATgetArgument(t, 0);
                                                                                                                  i_47 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(b_23);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, i_47);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = x_22;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  g_47 = ATgetArgument(t, 0);
                                                                                                                  i_47 = ATgetArgument(t, 1);
                                                                                                                  t = s_52(g_47, i_47, d_47, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      g_47 = ATgetArgument(t, 0);
                                                                                                                      i_47 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm y_2 (ATerm t);
                                                                                                                        static ATerm y_2 (ATerm t)
                                                                                                                        {
                                                                                                                          t = i_47;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = g_47;
                                                                                                                        t = foldr_2_0(y_2, z_2, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          g_47 = ATgetArgument(t, 0);
                                                                                                                          t = g_47;
                                                                                                                          t = foldr_2_0(a_3, d_3, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              g_47 = ATgetArgument(t, 0);
                                                                                                                              t = g_47;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  z_46 = ATgetFirst((ATermList) t);
                                                                                                                                  a_47 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                  t = a_47;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      ATerm g_23 = t;
                                                                                                                                      int n_23 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = u_52(g_47, d_47, t);
                                                                                                                                          LocalPopChoice(n_23);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = g_23;
                                                                                                                                          t = z_46;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = u_52(g_47, d_47, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = u_52(g_47, d_47, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  g_47 = ATgetArgument(t, 0);
                                                                                                                                  i_47 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm v_51 = NULL;
                                                                                                                                    t = i_47;
                                                                                                                                    t = foldr_2_0(e_3, h_3, t);
                                                                                                                                    v_51 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, g_47, v_51);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      g_47 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, g_47, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          g_47 = ATgetArgument(t, 0);
                                                                                                                                          t = x_52(g_47, d_47, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm o_23 = t;
                                                                                                                                          int u_23 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  g_47 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm v_23 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  c_47 = ATgetArgument(t, 2);
                                                                                                                                                  b_47 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(u_23);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, g_47, c_47, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_47), (ATerm) ATempty));
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = o_23;
                                                                                                                                              {
                                                                                                                                                ATerm x_23 = t;
                                                                                                                                                int e_24 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Con3_3))
                                                                                                                                                      {
                                                                                                                                                        g_47 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm f_24 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        c_47 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(e_24);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, g_47, c_47, term_i_24);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = x_23;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        g_47 = ATgetArgument(t, 0);
                                                                                                                                                        i_47 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, g_47, i_47, term_i_24);
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
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,f_53 = NULL;
  a_53 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      f_53 = ATgetArgument(t, 0);
      z_52 = ATgetArgument(t, 1);
      {
        ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
        t = a_53;
        t = new_0_0(t);
        i_53 = t;
        t = new_0_0(t);
        j_53 = t;
        t = new_0_0(t);
        k_53 = t;
        t = new_0_0(t);
        l_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_53), k_53), j_53), i_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_53), (ATerm) ATmakeAppl(sym_Var_1, k_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_53, (ATerm)ATmakeAppl(sym_Var_1, i_53), (ATerm) ATmakeAppl(sym_Var_1, j_53)), (ATerm) ATmakeAppl(sym_BAM_3, z_52, (ATerm)ATmakeAppl(sym_Var_1, k_53), (ATerm) ATmakeAppl(sym_Var_1, l_53)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_53)), (ATerm) ATmakeAppl(sym_Var_1, j_53))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_53 = ATgetArgument(t, 0);
          {
            ATerm m_53 = NULL,n_53 = NULL,r_53 = NULL,s_53 = NULL;
            t = a_53;
            t = new_0_0(t);
            r_53 = t;
            t = f_53;
            {
              static ATerm i_3 (ATerm t);
              static ATerm i_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((m_53 != NULL) && (m_53 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      m_53 = ATgetArgument(t, 0);
                    if(((n_53 != NULL) && (n_53 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      n_53 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_53);
                return(t);
              }
              t = oncetd_1_0(i_3, t);
            }
            s_53 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_53)), not_null(m_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_53)), (ATerm) ATmakeAppl(sym_Build_1, s_53))));
          }
        }
      else
        {
          ATerm u_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              f_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_53;
          t = new_0_0(t);
          a_54 = t;
          t = new_0_0(t);
          b_54 = t;
          t = f_53;
          {
            static ATerm k_3 (ATerm t);
            static ATerm k_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((u_53 != NULL) && (u_53 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_53 = ATgetArgument(t, 0);
                  if(((z_53 != NULL) && (z_53 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    z_53 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, a_54);
              return(t);
            }
            t = oncetd_1_0(k_3, t);
          }
          c_54 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_54), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_54)), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_54))))), (ATerm)ATmakeAppl(sym_Var_1, a_54), (ATerm) ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_53)), not_null(u_53)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  e_54 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,p_54 = NULL;
        t = e_54;
        t = new_0_0(t);
        j_54 = t;
        t = f_54;
        {
          static ATerm m_3 (ATerm t);
          static ATerm m_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_54 != NULL) && (h_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_54 = ATgetArgument(t, 0);
                if(((i_54 != NULL) && (i_54 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_54 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, j_54), h_54);
            return(t);
          }
          t = pat_td_1_0(m_3, t);
        }
        p_54 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_54), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_54))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_54))))));
        LocalPopChoice(n_24);
      }
    else
      {
        t = l_24;
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_54 = NULL,s_54 = NULL,x_54 = NULL;
              t = e_54;
              t = new_0_0(t);
              s_54 = t;
              t = f_54;
              {
                static ATerm r_3 (ATerm t);
                static ATerm r_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_54 != NULL) && (r_54 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_54 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_54);
                  return(t);
                }
                t = pat_td_1_0(r_3, t);
              }
              x_54 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_54)), not_null(r_54))));
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
              {
                ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
                t = e_54;
                t = new_0_0(t);
                b_55 = t;
                t = f_54;
                {
                  static ATerm s_3 (ATerm t);
                  static ATerm s_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((a_55 != NULL) && (a_55 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          a_55 = ATgetArgument(t, 0);
                        if(((z_54 != NULL) && (z_54 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_54 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, b_55);
                    return(t);
                  }
                  t = pat_td_1_0(s_3, t);
                }
                c_55 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_54)), not_null(a_55)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm g_130 (ATerm), ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_130(t);
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,l_60 = NULL;
        i_60 = t;
        if(match_cons(t, sym_Op_2))
          {
            j_60 = ATgetArgument(t, 0);
            l_60 = ATgetArgument(t, 1);
            {
              ATerm n_19 = NULL,q_19 = NULL,j_3 = NULL;
              t = SSLgetAnnotations(i_60);
              n_19 = t;
              t = l_60;
              {
                static ATerm t_3 (ATerm t);
                static ATerm t_3 (ATerm t)
                {
                  t = pat_td_1_0(g_130, t);
                  return(t);
                }
                t = fetch_1_0(t_3, t);
              }
              q_19 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, j_60, q_19);
              j_3 = t;
              t = SSLsetAnnotations(j_3, n_19);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                j_60 = ATgetArgument(t, 0);
                l_60 = ATgetArgument(t, 1);
                {
                  ATerm u_24 = t;
                  int v_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_20 = NULL,m_20 = NULL,l_3 = NULL;
                      t = SSLgetAnnotations(i_60);
                      j_20 = t;
                      t = l_60;
                      t = pat_td_1_0(g_130, t);
                      m_20 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, j_60, m_20);
                      l_3 = t;
                      t = SSLsetAnnotations(l_3, j_20);
                      LocalPopChoice(v_24);
                    }
                  else
                    {
                      t = u_24;
                      {
                        ATerm g_21 = NULL,l_21 = NULL,n_3 = NULL;
                        t = SSLgetAnnotations(i_60);
                        g_21 = t;
                        t = j_60;
                        t = pat_td_1_0(g_130, t);
                        l_21 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, l_21, l_60);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, g_21);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    j_60 = ATgetArgument(t, 0);
                    l_60 = ATgetArgument(t, 1);
                    h_60 = ATgetArgument(t, 2);
                    {
                      ATerm h_22 = NULL,o_22 = NULL,o_3 = NULL;
                      t = SSLgetAnnotations(i_60);
                      h_22 = t;
                      t = h_60;
                      {
                        static ATerm u_3 (ATerm t);
                        static ATerm u_3 (ATerm t)
                        {
                          t = pat_td_1_0(g_130, t);
                          return(t);
                        }
                        t = fetch_1_0(u_3, t);
                      }
                      o_22 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, j_60, l_60, o_22);
                      o_3 = t;
                      t = SSLsetAnnotations(o_3, h_22);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        j_60 = ATgetArgument(t, 0);
                        l_60 = ATgetArgument(t, 1);
                        h_60 = ATgetArgument(t, 2);
                        {
                          ATerm s_23 = NULL,c_24 = NULL,p_3 = NULL;
                          t = SSLgetAnnotations(i_60);
                          s_23 = t;
                          t = h_60;
                          {
                            static ATerm v_3 (ATerm t);
                            static ATerm v_3 (ATerm t)
                            {
                              t = pat_td_1_0(g_130, t);
                              return(t);
                            }
                            t = fetch_1_0(v_3, t);
                          }
                          c_24 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, j_60, l_60, c_24);
                          p_3 = t;
                          t = SSLsetAnnotations(p_3, s_23);
                        }
                      }
                    else
                      {
                        ATerm m_24 = NULL,p_24 = NULL,q_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            j_60 = ATgetArgument(t, 0);
                            l_60 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(i_60);
                        m_24 = t;
                        t = l_60;
                        t = pat_td_1_0(g_130, t);
                        p_24 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, j_60, p_24);
                        q_3 = t;
                        t = SSLsetAnnotations(q_3, m_24);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL;
  v_60 = t;
  if(match_cons(t, sym_Build_1))
    {
      w_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_60 = NULL,y_60 = NULL,a_61 = NULL,b_61 = NULL;
        t = v_60;
        t = new_0_0(t);
        a_61 = t;
        t = w_60;
        {
          static ATerm w_3 (ATerm t);
          static ATerm w_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((x_60 != NULL) && (x_60 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_60 = ATgetArgument(t, 0);
                if(((y_60 != NULL) && (y_60 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, a_61);
            return(t);
          }
          t = pat_td_1_0(w_3, t);
        }
        b_61 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_60)), not_null(x_60))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_61)))), (ATerm) ATmakeAppl(sym_Build_1, b_61)));
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        {
          ATerm z_24 = t;
          int a_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_61 = NULL,e_61 = NULL,f_61 = NULL;
              t = v_60;
              t = new_0_0(t);
              e_61 = t;
              t = w_60;
              {
                static ATerm z_3 (ATerm t);
                static ATerm z_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((c_61 != NULL) && (c_61 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        c_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, e_61);
                  return(t);
                }
                t = pat_td_1_0(z_3, t);
              }
              f_61 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_61), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_61)))), (ATerm) ATmakeAppl(sym_Build_1, f_61)));
              LocalPopChoice(a_25);
            }
          else
            {
              t = z_24;
              {
                ATerm g_61 = NULL,h_61 = NULL,j_61 = NULL,k_61 = NULL;
                t = v_60;
                t = new_0_0(t);
                j_61 = t;
                t = w_60;
                {
                  static ATerm a_4 (ATerm t);
                  static ATerm a_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((g_61 != NULL) && (g_61 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_61 = ATgetArgument(t, 0);
                        if(((h_61 != NULL) && (h_61 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_61 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, j_61);
                    return(t);
                  }
                  t = pat_td_1_0(a_4, t);
                }
                k_61 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_61), not_null(h_61), (ATerm) ATmakeAppl(sym_Var_1, j_61))), (ATerm) ATmakeAppl(sym_Build_1, k_61)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,v_61 = NULL,w_61 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      v_61 = ATgetArgument(t, 0);
      w_61 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, v_61, w_61);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          v_61 = ATgetArgument(t, 0);
          t = v_61;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_61 = ATgetFirst((ATermList) t);
              s_61 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, r_61, (ATerm) ATmakeAppl(sym_LChoices_1, s_61));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              v_61 = ATgetArgument(t, 0);
              t = v_61;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_61 = ATgetFirst((ATermList) t);
                  s_61 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, r_61, (ATerm) ATmakeAppl(sym_Choices_1, s_61));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_b_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  v_61 = ATgetArgument(t, 0);
                  t = v_61;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_61 = ATgetFirst((ATermList) t);
                      s_61 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_61, (ATerm) ATmakeAppl(sym_Seqs_1, s_61));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_v_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      v_61 = ATgetArgument(t, 0);
                      w_61 = ATgetArgument(t, 1);
                      t_61 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, w_61, (ATerm) ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, t_61), v_61)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          v_61 = ATgetArgument(t, 0);
                          w_61 = ATgetArgument(t, 1);
                          t_61 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, t_61)), v_61), (ATerm) ATmakeAppl(sym_Build_1, w_61)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              v_61 = ATgetArgument(t, 0);
                              w_61 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_61, (ATerm) ATmakeAppl(sym_Match_1, w_61));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  v_61 = ATgetArgument(t, 0);
                                  w_61 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_61), w_61);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      v_61 = ATgetArgument(t, 0);
                                      w_61 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_61), v_61);
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
static ATerm b_4 (ATerm t)
{
  ATerm n_25 = t;
  if((PushChoice() == 0))
    {
      ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,x_3 = NULL;
      d_63 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_63);
      b_63 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_63);
      x_3 = t;
      t = SSLsetAnnotations(x_3, b_63);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_25;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_25;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_63 = ATgetFirst((ATermList) t);
      f_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_63, f_63);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(match_cons(j_26, sym__2))
        {
          k_63 = ATgetArgument(j_26, 0);
          l_63 = ATgetArgument(j_26, 1);
        }
      else
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(match_cons(n_26, sym__2))
          {
            m_63 = ATgetArgument(n_26, 0);
            n_63 = ATgetArgument(n_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_63), k_63), (ATerm) ATinsert(CheckATermList(n_63), l_63));
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_25;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_63 = ATgetFirst((ATermList) t);
      p_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_63, p_63);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,u_63 = NULL,v_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(match_cons(o_26, sym__2))
        {
          q_63 = ATgetArgument(o_26, 0);
          r_63 = ATgetArgument(o_26, 1);
        }
      else
        _fail(t);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(match_cons(p_26, sym__2))
          {
            u_63 = ATgetArgument(p_26, 0);
            v_63 = ATgetArgument(p_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_63), q_63), (ATerm) ATinsert(CheckATermList(v_63), r_63));
  return(t);
}
static ATerm o_10 (ATerm b_36, ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,y_3 = NULL;
  t = d_36;
  t = fetch_1_0(b_4, t);
  t = d_36;
  t = genzip_4_0(d_4, g_4, j_4, LiftPrimArg_0_0, t);
  a_63 = t;
  if(match_cons(t, sym__2))
    {
      w_62 = ATgetArgument(t, 0);
      x_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_63);
  v_62 = t;
  t = w_62;
  t = concat_0_0(t);
  y_62 = t;
  t = x_62;
  t = genzip_4_0(k_4, l_4, m_4, _id, t);
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_62, z_62);
  y_3 = t;
  t = SSLsetAnnotations(y_3, v_62);
  if(match_cons(t, sym__2))
    {
      s_62 = ATgetArgument(t, 0);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(match_cons(q_26, sym__2))
          {
            t_62 = ATgetArgument(q_26, 0);
            u_62 = ATgetArgument(q_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_62, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_62), (ATerm) ATmakeAppl(sym_CallT_3, b_36, c_36, u_62)));
  return(t);
}
static ATerm k_64 (ATerm z_63, ATerm t)
{
  ATerm b_64 = NULL;
  t = z_63;
  {
    ATerm r_26 = t;
    if((PushChoice() == 0))
      {
        ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL,c_4 = NULL;
        e_64 = t;
        if(match_cons(t, sym_Var_1))
          {
            d_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_64);
        c_64 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, d_64);
        c_4 = t;
        t = SSLsetAnnotations(c_4, c_64);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_26;
      }
  }
  t = new_0_0(t);
  b_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, b_64), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_63), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_64)))), (ATerm) ATmakeAppl(sym_Var_1, b_64)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm f_64 = NULL,i_64 = NULL;
  f_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_64 = ATgetArgument(t, 0);
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_64(f_64, t);
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATmakeAppl(sym_Var_1, i_64)));
          }
      }
    }
  else
    {
      t = k_64(f_64, t);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm x_26 = t;
  if((PushChoice() == 0))
    {
      ATerm l_25 = NULL,m_25 = NULL,r_25 = NULL,e_4 = NULL;
      r_25 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_25);
      l_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_25);
      e_4 = t;
      t = SSLsetAnnotations(e_4, l_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_26;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_25;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_25 = ATgetFirst((ATermList) t);
      u_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_25, u_25);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_26 = ATgetArgument(t, 0);
      if(match_cons(y_26, sym__2))
        {
          v_25 = ATgetArgument(y_26, 0);
          w_25 = ATgetArgument(y_26, 1);
        }
      else
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
        if(match_cons(z_26, sym__2))
          {
            x_25 = ATgetArgument(z_26, 0);
            y_25 = ATgetArgument(z_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_25), v_25), (ATerm) ATinsert(CheckATermList(y_25), w_25));
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_25;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_25 = ATgetFirst((ATermList) t);
      a_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_25, a_26);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,g_26 = NULL,h_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(match_cons(a_27, sym__2))
        {
          b_26 = ATgetArgument(a_27, 0);
          c_26 = ATgetArgument(a_27, 1);
        }
      else
        _fail(t);
      {
        ATerm b_27 = ATgetArgument(t, 1);
        if(match_cons(b_27, sym__2))
          {
            g_26 = ATgetArgument(b_27, 0);
            h_26 = ATgetArgument(b_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_26), b_26), (ATerm) ATinsert(CheckATermList(h_26), c_26));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_27 = t;
  if((PushChoice() == 0))
    {
      ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,h_4 = NULL;
      t_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_27);
      r_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_27);
      h_4 = t;
      t = SSLsetAnnotations(h_4, r_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_27;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_25;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_27 = ATgetFirst((ATermList) t);
      v_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(match_cons(d_27, sym__2))
        {
          w_27 = ATgetArgument(d_27, 0);
          x_27 = ATgetArgument(d_27, 1);
        }
      else
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(match_cons(e_27, sym__2))
          {
            y_27 = ATgetArgument(e_27, 0);
            z_27 = ATgetArgument(e_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_27), w_27), (ATerm) ATinsert(CheckATermList(z_27), x_27));
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_25;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm a_28 = NULL,c_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_28 = ATgetFirst((ATermList) t);
      c_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_28, c_28);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm h_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(match_cons(k_27, sym__2))
        {
          h_28 = ATgetArgument(k_27, 0);
          k_28 = ATgetArgument(k_27, 1);
        }
      else
        _fail(t);
      {
        ATerm o_27 = ATgetArgument(t, 1);
        if(match_cons(o_27, sym__2))
          {
            l_28 = ATgetArgument(o_27, 0);
            m_28 = ATgetArgument(o_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_28), h_28), (ATerm) ATinsert(CheckATermList(m_28), k_28));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
  p_67 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_67 = ATgetArgument(t, 0);
      r_67 = ATgetArgument(t, 1);
      o_67 = ATgetArgument(t, 2);
      {
        ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,f_4 = NULL;
        t = o_67;
        t = fetch_1_0(n_4, t);
        t = o_67;
        t = genzip_4_0(p_4, s_4, t_4, LiftPrimArg_0_0, t);
        k_25 = t;
        if(match_cons(t, sym__2))
          {
            g_25 = ATgetArgument(t, 0);
            h_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_25);
        f_25 = t;
        t = g_25;
        t = concat_0_0(t);
        i_25 = t;
        t = h_25;
        t = genzip_4_0(u_4, w_4, z_4, _id, t);
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_25, j_25);
        f_4 = t;
        t = SSLsetAnnotations(f_4, f_25);
        if(match_cons(t, sym__2))
          {
            c_25 = ATgetArgument(t, 0);
            {
              ATerm p_27 = ATgetArgument(t, 1);
              if(match_cons(p_27, sym__2))
                {
                  d_25 = ATgetArgument(p_27, 0);
                  e_25 = ATgetArgument(p_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, c_25, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_25), (ATerm) ATmakeAppl(sym_PrimT_3, q_67, r_67, e_25)));
      }
    }
  else
    {
      ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,q_27 = NULL,i_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          q_67 = ATgetArgument(t, 0);
          r_67 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_67;
      t = fetch_1_0(a_5, t);
      t = r_67;
      t = genzip_4_0(c_5, e_5, f_5, LiftPrimArg_0_0, t);
      q_27 = t;
      if(match_cons(t, sym__2))
        {
          j_27 = ATgetArgument(t, 0);
          l_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_27);
      i_27 = t;
      t = j_27;
      t = concat_0_0(t);
      m_27 = t;
      t = l_27;
      t = genzip_4_0(g_5, i_5, k_5, _id, t);
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_27, n_27);
      i_4 = t;
      t = SSLsetAnnotations(i_4, i_27);
      if(match_cons(t, sym__2))
        {
          f_27 = ATgetArgument(t, 0);
          {
            ATerm b_28 = ATgetArgument(t, 1);
            if(match_cons(b_28, sym__2))
              {
                g_27 = ATgetArgument(b_28, 0);
                h_27 = ATgetArgument(b_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, f_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_27), (ATerm) ATmakeAppl(sym_PrimT_3, q_67, (ATerm)ATempty, h_27)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_138 (ATerm), ATerm m_138 (ATerm), ATerm t)
{
  static ATerm u_67 (ATerm t);
  static ATerm u_67 (ATerm t)
  {
    ATerm d_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_138(t);
        t = u_67(t);
        LocalPopChoice(n_28);
      }
    else
      {
        t = d_28;
        t = m_138(t);
      }
    return(t);
  }
  t = u_67(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm m_68 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
  e_69 = t;
  if(match_cons(t, sym_Con_3))
    {
      m_68 = ATgetArgument(t, 0);
      c_69 = ATgetArgument(t, 1);
      d_69 = ATgetArgument(t, 2);
      {
        ATerm b_29 = NULL,o_4 = NULL;
        t = SSLgetAnnotations(e_69);
        b_29 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, m_68, c_69, d_69);
        o_4 = t;
        t = SSLsetAnnotations(o_4, b_29);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = e_69;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm o_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(n_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_28;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL;
  t_70 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_70 = ATgetArgument(t, 0);
      v_70 = ATgetArgument(t, 1);
      s_70 = ATgetArgument(t, 2);
      {
        ATerm u_29 = NULL,q_4 = NULL;
        t = SSLgetAnnotations(t_70);
        u_29 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, u_70, v_70, s_70);
        q_4 = t;
        t = SSLsetAnnotations(q_4, u_29);
      }
    }
  else
    {
      ATerm o_30 = NULL,r_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          u_70 = ATgetArgument(t, 0);
          v_70 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_70);
      o_30 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, u_70, v_70);
      r_4 = t;
      t = SSLsetAnnotations(r_4, o_30);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm p_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(o_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm b_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      b_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_71;
  if(match_cons(t, sym_StratRule_3))
    {
      e_71 = ATgetArgument(t, 0);
      f_71 = ATgetArgument(t, 1);
      g_71 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_71), (ATerm) ATmakeAppl(sym_Where_1, g_71)), e_71));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          e_71 = ATgetArgument(t, 0);
          f_71 = ATgetArgument(t, 1);
          g_71 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_71;
      t = pureterm_0_0(t);
      t = f_71;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, f_71)), (ATerm) ATmakeAppl(sym_Where_1, g_71)), (ATerm) ATmakeAppl(sym_Match_1, e_71)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_133 (ATerm), ATerm t)
{
  static ATerm e_72 (ATerm t);
  static ATerm e_72 (ATerm t)
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_133(t);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        t = SRTS_one(e_72, t);
      }
    return(t);
  }
  t = e_72(t);
  return(t);
}
static ATerm s_10 (ATerm o_31, ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm f_72 = NULL,j_72 = NULL,m_72 = NULL,n_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
  t = new_0_0(t);
  p_72 = t;
  t = o_31;
  {
    static ATerm q_5 (ATerm t);
    static ATerm q_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm s_28 = ATgetArgument(t, 0);
          if(match_cons(s_28, sym_Var_1))
            {
              if(((n_72 != NULL) && (n_72 != ATgetArgument(s_28, 0))))
                _fail(ATgetArgument(s_28, 0));
              else
                n_72 = ATgetArgument(s_28, 0);
            }
          else
            _fail(t);
          if(((j_72 != NULL) && (j_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_72 = ATgetArgument(t, 1);
          {
            ATerm t_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, n_72);
      return(t);
    }
    t = oncetd_1_0(q_5, t);
  }
  q_72 = t;
  t = p_31;
  {
    static ATerm s_5 (ATerm t);
    static ATerm s_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_28 = ATgetArgument(t, 0);
          if(match_cons(u_28, sym_Var_1))
            {
              if(((n_72 != NULL) && (n_72 != ATgetArgument(u_28, 0))))
                _fail(ATgetArgument(u_28, 0));
              else
                n_72 = ATgetArgument(u_28, 0);
            }
          else
            _fail(t);
          if(((m_72 != NULL) && (m_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_72 = ATgetArgument(t, 1);
          {
            ATerm v_28 = ATgetArgument(t, 2);
            if(match_cons(v_28, sym_CallT_3))
              {
                if(((f_72 != NULL) && (f_72 != ATgetArgument(v_28, 0))))
                  _fail(ATgetArgument(v_28, 0));
                else
                  f_72 = ATgetArgument(v_28, 0);
                {
                  ATerm w_28 = ATgetArgument(v_28, 1);
                  if(((ATgetType(w_28) != AT_LIST) || !(ATisEmpty(w_28))))
                    _fail(t);
                }
                {
                  ATerm c_29 = ATgetArgument(v_28, 2);
                  if(((ATgetType(c_29) != AT_LIST) || !(ATisEmpty(c_29))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_72);
      return(t);
    }
    t = oncetd_1_0(s_5, t);
  }
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_72), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, q_72, r_72, (ATerm) ATmakeAppl(sym_Seq_2, q_31, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(f_72), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_72), not_null(m_72), term_v_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_72)), (ATerm) ATmakeAppl(sym_Var_1, p_72))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_29 = t;
      int g_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_73 = NULL,l_73 = NULL,p_73 = NULL,a_74 = NULL,b_74 = NULL,f_74 = NULL;
          a_74 = t;
          if(match_cons(t, sym_SRule_1))
            {
              b_74 = ATgetArgument(t, 0);
              t = b_74;
              if(match_cons(t, sym_Rule_3))
                {
                  k_73 = ATgetArgument(t, 0);
                  l_73 = ATgetArgument(t, 1);
                  p_73 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_74;
              t = s_10(k_73, l_73, p_73, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm e_31 = NULL,l_31 = NULL,v_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  b_74 = ATgetArgument(t, 0);
                  f_74 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_74);
              e_31 = t;
              t = f_74;
              t = desugarRule_0_0(t);
              l_31 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, b_74, l_31);
              v_4 = t;
              t = SSLsetAnnotations(v_4, e_31);
            }
          LocalPopChoice(g_29);
        }
      else
        {
          t = f_29;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_132 (ATerm), ATerm t)
{
  static ATerm v_5 (ATerm t);
  static ATerm v_5 (ATerm t)
  {
    t = topdown_1_0(l_132, t);
    return(t);
  }
  t = l_132(t);
  t = SRTS_all(v_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
    }
  t = repeat_2_0(y_5, _id, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL;
            p_75 = t;
            if(match_cons(t, sym_CallT_3))
              {
                q_75 = ATgetArgument(t, 0);
                r_75 = ATgetArgument(t, 1);
                s_75 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_75;
            t = o_10(q_75, r_75, s_75, t);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            {
              ATerm p_29 = t;
              int q_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(q_29);
                }
              else
                {
                  t = p_29;
                  {
                    ATerm s_29 = t;
                    int t_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(t_29);
                      }
                    else
                      {
                        t = s_29;
                        {
                          ATerm v_29 = t;
                          int w_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_29 = t;
                              int z_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_76 = NULL,d_76 = NULL,f_76 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      c_76 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_76;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      d_76 = ATgetArgument(t, 0);
                                      t = d_76;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          d_76 = ATgetArgument(t, 0);
                                          f_76 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, d_76, f_76);
                                    }
                                  LocalPopChoice(z_29);
                                }
                              else
                                {
                                  t = y_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(w_29);
                            }
                          else
                            {
                              t = v_29;
                              {
                                ATerm b_30 = t;
                                int c_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(c_30);
                                  }
                                else
                                  {
                                    t = b_30;
                                    t = Desugar_0_0(t);
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
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(w_5, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm y_76 = NULL,b_77 = NULL;
  b_77 = t;
  t = SSL_explode_term(b_77);
  if(match_cons(t, sym__2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_30 = ATgetArgument(t, 1);
        if(((ATgetType(g_30) == AT_LIST) && !(ATisEmpty(g_30))))
          {
            y_76 = ATgetFirst((ATermList) g_30);
            {
              ATerm h_30 = (ATerm) ATgetNext((ATermList) g_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_76;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  w_31 = t;
  t = SSL_explode_term(w_31);
  if(match_cons(t, sym__2))
    {
      ATerm k_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_30 = ATgetArgument(t, 1);
        if(((ATgetType(l_30) == AT_LIST) && !(ATisEmpty(l_30))))
          {
            ATerm m_30 = ATgetFirst((ATermList) l_30);
            u_31 = (ATerm) ATgetNext((ATermList) l_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_e_21;
  v_31 = t;
  t = SSL_mkterm(v_31, u_31);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm s_136 (ATerm), ATerm t)
{
  ATerm p_76 = NULL,q_76 = NULL;
  static ATerm c_77 (ATerm t);
  static ATerm c_77 (ATerm t)
  {
    ATerm p_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_76 = NULL,u_76 = NULL,w_76 = NULL;
        r_76 = t;
        t = map_1_0(z_5, t);
        t = s_136(t);
        u_76 = t;
        t = r_76;
        t = map_1_0(a_6, t);
        t = c_77(t);
        w_76 = t;
        t = (ATerm) ATinsert(CheckATermList(w_76), u_76);
        LocalPopChoice(r_30);
      }
    else
      {
        t = p_30;
        t = map_1_0(c_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = c_77(t);
  q_76 = t;
  t = term_e_21;
  p_76 = t;
  t = SSL_mkterm(p_76, q_76);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm d_77 = NULL;
  d_77 = t;
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
        t = d_77;
        t = new_0_0(t);
        f_77 = t;
        t = new_0_0(t);
        g_77 = t;
        t = new_0_0(t);
        h_77 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_77), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, d_77), (ATerm) ATmakeAppl(sym_Var_1, g_77))), (ATerm) ATmakeAppl(sym_Var_1, h_77)), (ATerm)ATmakeAppl(sym_VarDec_2, f_77, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_30), term_y_30)), g_77, (ATerm)ATmakeAppl(sym_Var_1, g_77), h_77, (ATerm) ATmakeAppl(sym_Var_1, h_77));
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        {
          ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
          t = d_77;
          t = new_0_0(t);
          j_77 = t;
          t = new_0_0(t);
          k_77 = t;
          t = new_0_0(t);
          l_77 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_77), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, d_77), (ATerm) ATmakeAppl(sym_Var_1, k_77))), (ATerm) ATmakeAppl(sym_Var_1, l_77)), (ATerm)ATmakeAppl(sym_VarDec_2, j_77, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_30), term_y_30)), k_77, (ATerm)ATmakeAppl(sym_Var_1, k_77), l_77, (ATerm) ATmakeAppl(sym_Var_1, l_77));
        }
      }
  }
  return(t);
}
static ATerm t_10 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm z_30 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_57, s_57);
      LocalPopChoice(b_31);
    }
  else
    {
      t = z_30;
      t = SSL_subtr(r_57, s_57);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL;
  if(match_cons(t, sym__2))
    {
      m_77 = ATgetArgument(t, 0);
      n_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_77, n_77, (ATerm) ATempty);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm o_77 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      if(((ATgetType(d_31) != AT_INT) || (ATgetInt((ATermInt) d_31) != 0)))
        _fail(t);
      {
        ATerm i_31 = ATgetArgument(t, 1);
      }
      o_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_77;
  return(t);
}
ATerm copy_1_0 (ATerm o_155 (ATerm), ATerm t)
{
  static ATerm j_6 (ATerm t);
  static ATerm j_6 (ATerm t)
  {
    ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
    if(match_cons(t, sym__3))
      {
        p_77 = ATgetArgument(t, 0);
        q_77 = ATgetArgument(t, 1);
        r_77 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_77, term_o_20);
    t = geq_0_0(t);
    t = term_o_20;
    u_77 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_77, term_o_20);
    t = t_10(p_77, u_77, t);
    s_77 = t;
    t = q_77;
    t = o_155(t);
    t_77 = t;
    t = (ATerm) ATmakeAppl(sym__3, s_77, q_77, (ATerm) ATinsert(CheckATermList(r_77), t_77));
    return(t);
  }
  t = for_3_0(f_6, i_6, j_6, t);
  return(t);
}
static ATerm u_10 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,b_78 = NULL;
  t = new_0_0(t);
  x_77 = t;
  t = new_0_0(t);
  y_77 = t;
  t = new_0_0(t);
  b_78 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_77), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_25)), (ATerm) ATmakeAppl(sym_Var_1, y_77))), (ATerm) ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_25)), (ATerm) ATmakeAppl(sym_Var_1, b_78)))), (ATerm)ATmakeAppl(sym_VarDec_2, x_77, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_30), term_y_30)), y_77, (ATerm)ATmakeAppl(sym_Var_1, y_77), b_78, (ATerm) ATmakeAppl(sym_Var_1, b_78));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_78 = ATgetFirst((ATermList) t);
      s_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_78;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_78;
    }
  else
    {
      t = s_78;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm a_83 (ATerm v_79, ATerm w_79, ATerm z_79, ATerm b_80, ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,o_80 = NULL,p_80 = NULL,s_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,c_81 = NULL;
  t = term_o_20;
  c_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_79, term_o_20);
  t = x_11(w_79, c_81, t);
  z_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_80, term_j_31);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_80 = ATgetFirst((ATermList) t);
      o_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_80;
  t = last_0_0(t);
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_80), m_80), o_80);
  t = genzip_4_0(l_6, m_6, o_6, q_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      p_80 = ATgetArgument(t, 0);
      s_80 = ATgetArgument(t, 1);
      u_80 = ATgetArgument(t, 2);
      v_80 = ATgetArgument(t, 3);
      w_80 = ATgetArgument(t, 4);
      x_80 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_80), u_80), o_80);
  t = concat_0_0(t);
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, v_79, term_m_31), s_80, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(y_80), m_80), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_80)), (ATerm) ATmakeAppl(sym_Op_2, v_79, v_80))), (ATerm)ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_80)), (ATerm) ATmakeAppl(sym_Op_2, v_79, x_80))), (ATerm) ATmakeAppl(sym_Seqs_1, p_80)))));
  return(t);
}
static ATerm c_83 (ATerm u_81, ATerm v_81, ATerm w_81, ATerm x_81, ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,i_82 = NULL,j_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  t = x_81;
  t = new_0_0(t);
  d_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_81, (ATerm) ATmakeAppl(sym_Var_1, d_82));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      e_82 = ATgetArgument(t, 0);
      f_82 = ATgetArgument(t, 1);
      i_82 = ATgetArgument(t, 2);
      j_82 = ATgetArgument(t, 3);
      m_82 = ATgetArgument(t, 4);
      n_82 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_82, m_82);
  t = conc_0_0(t);
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, u_81, term_r_31), f_82, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(o_82), d_82), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_82)), (ATerm) ATmakeAppl(sym_Op_2, u_81, j_82))), (ATerm)ATmakeAppl(sym_Op_2, u_81, n_82), (ATerm) ATmakeAppl(sym_Seqs_1, e_82)))));
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      ATerm t_31 = ATgetArgument(t, 1);
      if(((ATgetType(t_31) != AT_LIST) || !(ATisEmpty(t_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,g_81 = NULL,h_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
        {
          d_81 = ATgetFirst((ATermList) x_31);
          e_81 = (ATerm) ATgetNext((ATermList) x_31);
        }
      else
        _fail(t);
      {
        ATerm z_31 = ATgetArgument(t, 1);
        if(((ATgetType(z_31) == AT_LIST) && !(ATisEmpty(z_31))))
          {
            g_81 = ATgetFirst((ATermList) z_31);
            h_81 = (ATerm) ATgetNext((ATermList) z_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_81, g_81), (ATerm) ATmakeAppl(sym__2, e_81, h_81));
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL;
  if(match_cons(t, sym__2))
    {
      n_81 = ATgetArgument(t, 0);
      o_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_81), n_81);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL;
  if(match_cons(t, sym__2))
    {
      p_81 = ATgetArgument(t, 0);
      q_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(p_81, q_81, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL;
  r_82 = t;
  if(match_cons(t, sym__3))
    {
      s_82 = ATgetArgument(t, 0);
      t_82 = ATgetArgument(t, 1);
      u_82 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_82;
  if(match_string(t, "T"))
    {
      t = u_82;
      if(match_cons(t, sym__2))
        {
          v_82 = ATgetArgument(t, 0);
          w_82 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_82;
      if(match_int(t, 0))
        {
          ATerm a_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_83(s_82, v_82, w_82, r_82, t);
              LocalPopChoice(e_32);
            }
          else
            {
              t = a_32;
              {
                ATerm y_82 = NULL;
                t = r_82;
                t = new_0_0(t);
                y_82 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, s_82, term_m_31), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_82), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_82)), (ATerm) ATmakeAppl(sym_Op_2, s_82, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_82)), (ATerm) ATmakeAppl(sym_Op_2, s_82, (ATerm) ATempty))), term_v_22))));
              }
            }
        }
      else
        {
          t = a_83(s_82, v_82, w_82, r_82, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = u_82;
      if(match_cons(t, sym__2))
        {
          v_82 = ATgetArgument(t, 0);
          w_82 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_83(s_82, v_82, w_82, r_82, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_144 (ATerm), ATerm t)
{
  ATerm u_19 = NULL;
  static ATerm t_6 (ATerm t);
  static ATerm t_6 (ATerm t)
  {
    t = w_144(t);
    if(((u_19 != NULL) && (u_19 != t)))
      _fail(t);
    else
      u_19 = t;
    return(t);
  }
  t = fetch_1_0(t_6, t);
  t = not_null(u_19);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm v_19 = NULL,z_19 = NULL,a_20 = NULL;
  t = term_e_17;
  z_19 = t;
  t = (ATerm) ATinsert(ATempty, term_g_32);
  a_20 = t;
  t = SSL_printnl(z_19, a_20);
  t = term_o_20;
  v_19 = t;
  t = SSL_exit(v_19);
  t = (ATerm) ATinsert(ATempty, term_g_32);
  return(t);
}
ATerm debug_1_0 (ATerm y_139 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  b_20 = t;
  t = y_139(t);
  e_20 = t;
  t = term_e_17;
  f_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_20), e_20);
  g_20 = t;
  t = SSL_printnl(f_20, g_20);
  t = b_20;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm p_32 = ATgetArgument(t, 0);
          p_15 = ATgetArgument(t, 1);
          q_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(o_32);
      t = q_15;
      t = foldr_3_0(b_7, d_7, e_7, t);
      t = p_15;
      t = foldr_3_0(f_7, g_7, h_7, t);
    }
  else
    {
      t = n_32;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm q_32 = ATgetArgument(t, 0);
          p_15 = ATgetArgument(t, 1);
          q_15 = ATgetArgument(t, 2);
          {
            ATerm r_32 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_15;
      t = foldr_3_0(i_7, j_7, k_7, t);
      t = p_15;
      t = foldr_3_0(l_7, m_7, n_7, t);
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(v_15, w_15, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm x_15 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(x_15, d_16, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm l_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(l_16, n_16, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm o_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(o_16, q_16, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm s_32 = ATgetArgument(t, 0);
      ATerm u_32 = ATgetArgument(t, 1);
      ATerm v_32 = ATgetArgument(t, 2);
      ATerm x_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_20 = NULL;
      static ATerm u_6 (ATerm t);
      static ATerm u_6 (ATerm t)
      {
        ATerm q_20 = NULL,r_20 = NULL;
        q_20 = t;
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  r_20 = ATgetArgument(t, 0);
                  {
                    ATerm c_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm d_33 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(b_33);
              t = r_20;
              if(((p_20 != NULL) && (p_20 != t)))
                _fail(t);
              else
                p_20 = t;
              t = q_20;
            }
          else
            {
              t = a_33;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  r_20 = ATgetArgument(t, 0);
                  {
                    ATerm e_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm g_33 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm h_33 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = r_20;
              if(((p_20 != NULL) && (p_20 != t)))
                _fail(t);
              else
                p_20 = t;
              t = q_20;
            }
        }
        return(t);
      }
      t = fetch_1_0(u_6, t);
      {
        static ATerm v_6 (ATerm t);
        static ATerm v_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((p_20 != NULL) && (p_20 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_20 = ATgetArgument(t, 0);
              {
                ATerm i_33 = ATgetArgument(t, 1);
              }
              {
                ATerm l_33 = ATgetArgument(t, 2);
              }
              {
                ATerm m_33 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(v_6, t);
      }
      t = not_null(p_20);
      t = debug_1_0(w_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm k_22 = NULL;
        k_22 = t;
        t = map_1_0(x_6, t);
        t = k_22;
        {
          ATerm v_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(o_7, t);
              LocalPopChoice(z_33);
            }
          else
            {
              t = v_33;
              {
                ATerm s_16 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_16 = ATgetFirst((ATermList) t);
                    {
                      ATerm f_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = s_16;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm w_22 = NULL,y_22 = NULL,y_16 = NULL;
  w_22 = t;
  t = SSL_explode_term(w_22);
  if(match_cons(t, sym__2))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_34 = ATgetArgument(t, 1);
        if(((ATgetType(h_34) == AT_LIST) && !(ATisEmpty(h_34))))
          {
            y_22 = ATgetFirst((ATermList) h_34);
            {
              ATerm j_34 = (ATerm) ATgetNext((ATermList) h_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(w_22);
  if(match_cons(t, sym__2))
    {
      ATerm k_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_34 = ATgetArgument(t, 1);
        if(((ATgetType(l_34) == AT_LIST) && !(ATisEmpty(l_34))))
          {
            ATerm m_34 = ATgetFirst((ATermList) l_34);
            ATerm n_34 = (ATerm) ATgetNext((ATermList) l_34);
            if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
              {
                y_16 = ATgetFirst((ATermList) n_34);
                {
                  ATerm o_34 = (ATerm) ATgetNext((ATermList) n_34);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Choice_2, y_22, y_16);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(p_7, q_7, t);
  return(t);
}
ATerm alltd_1_0 (ATerm d_134 (ATerm), ATerm t)
{
  static ATerm z_22 (ATerm t);
  static ATerm z_22 (ATerm t)
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_134(t);
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = SRTS_all(z_22, t);
      }
    return(t);
  }
  t = z_22(t);
  return(t);
}
static ATerm c_10 (ATerm s_73, ATerm t_73, ATerm t)
{
  ATerm a_23 = NULL,c_23 = NULL;
  c_23 = t;
  {
    ATerm r_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_73, t_73);
        t = c_12(s_73, t_73, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_34 = ATgetFirst((ATermList) t);
            a_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_34);
        {
          ATerm d_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, s_73, t_73, a_23);
          t = lookup_table_0_1(s_73, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_12(t_73, a_23, d_23, t);
          t = (ATerm) ATmakeAppl(sym__3, s_73, t_73, a_23);
        }
      }
    else
      {
        t = r_34;
        {
          ATerm f_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_73, t_73);
          t = lookup_table_0_1(s_73, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_11(t_73, f_23, t);
          t = (ATerm) ATmakeAppl(sym__2, s_73, t_73);
        }
      }
  }
  t = c_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm s_167 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,p_23 = NULL;
  k_23 = t;
  t = s_167(t);
  j_23 = t;
  {
    ATerm v_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_23 = NULL;
        t = term_z_34;
        q_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_23, term_z_34);
        t = c_12(j_23, q_23, t);
        {
          ATerm b_35 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_35;
            }
        }
        LocalPopChoice(y_34);
      }
    else
      {
        t = v_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_23 = ATgetFirst((ATermList) t);
      h_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_23, term_z_34, h_23);
  t = lookup_table_0_1(j_23, t);
  p_23 = t;
  t = term_z_34;
  l_23 = t;
  t = p_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(l_23, h_23, m_23, t);
  t = i_23;
  {
    static ATerm r_7 (ATerm t);
    static ATerm r_7 (ATerm t)
    {
      ATerm r_23 = NULL;
      r_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_23, r_23);
      t = c_10(j_23, r_23, t);
      return(t);
    }
    t = map_1_0(r_7, t);
  }
  t = k_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm t)
{
  ATerm c_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_135(t);
      t = x_135(t);
      LocalPopChoice(g_35);
    }
  else
    {
      t = c_35;
      t = x_135(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_167 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,w_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,d_24 = NULL;
  w_23 = t;
  t = r_167(t);
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_23, term_z_34);
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_35 = ATgetArgument(t, 0);
            ATerm m_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_34;
        s_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_23, term_z_34);
        t = c_12(t_23, s_25, t);
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = (ATerm) ATempty;
      }
  }
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_23, term_z_34, (ATerm) ATinsert(CheckATermList(y_23), (ATerm) ATempty));
  t = lookup_table_0_1(t_23, t);
  d_24 = t;
  t = term_z_34;
  z_23 = t;
  t = (ATerm) ATinsert(CheckATermList(y_23), (ATerm) ATempty);
  a_24 = t;
  t = d_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(z_23, a_24, b_24, t);
  t = w_23;
  return(t);
}
ATerm scope_2_0 (ATerm t_167 (ATerm), ATerm u_167 (ATerm), ATerm t)
{
  static ATerm s_7 (ATerm t);
  static ATerm s_7 (ATerm t)
  {
    t = end_scope_1_0(t_167, t);
    return(t);
  }
  t = begin_scope_1_0(t_167, t);
  t = restore_always_2_0(u_167, s_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,i_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  f_26 = t;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_26 = ATgetFirst((ATermList) t);
      m_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_26;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
      {
        ATerm n_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_26;
            if((i_26 != t))
              {
                _fail(t);
              }
            t = e_26;
            LocalPopChoice(o_35);
          }
        else
          {
            t = n_35;
            t = (ATerm) ATmakeAppl(sym__2, i_26, m_26);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, i_26, m_26);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(((ATgetType(p_35) != AT_LIST) || !(ATisEmpty(p_35))))
        _fail(t);
      {
        ATerm q_35 = ATgetArgument(t, 1);
        if(((ATgetType(q_35) != AT_LIST) || !(ATisEmpty(q_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm o_29 = NULL,r_29 = NULL,x_29 = NULL,a_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      if(((ATgetType(r_35) == AT_LIST) && !(ATisEmpty(r_35))))
        {
          o_29 = ATgetFirst((ATermList) r_35);
          r_29 = (ATerm) ATgetNext((ATermList) r_35);
        }
      else
        _fail(t);
      {
        ATerm s_35 = ATgetArgument(t, 1);
        if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
          {
            x_29 = ATgetFirst((ATermList) s_35);
            a_30 = (ATerm) ATgetNext((ATermList) s_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_29, x_29), (ATerm) ATmakeAppl(sym__2, r_29, a_30));
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  if(match_cons(t, sym__2))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_30), d_30);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
  x_28 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_35 = ATgetArgument(t, 0);
            ATerm w_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(u_35);
        t = x_28;
      }
    else
      {
        t = t_35;
        {
          ATerm n_29 = NULL;
          if(match_cons(t, sym__3))
            {
              y_28 = ATgetArgument(t, 0);
              z_28 = ATgetArgument(t, 1);
              a_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, y_28, z_28);
          t = genzip_4_0(t_7, y_7, a_8, _id, t);
          n_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_29, a_29);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  static ATerm c_8 (ATerm t);
  static ATerm c_8 (ATerm t)
  {
    ATerm c_17 = NULL;
    t = u_131(t);
    c_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_17, not_null(j_30));
    t = lookup_0_0(t);
    t = v_131(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((j_30 != NULL) && (j_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_30;
  t = alltd_1_0(c_8, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm x_30 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      x_30 = ATgetArgument(t, 0);
      {
        ATerm y_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_30;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm a_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_31;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_z_35;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(((ATgetType(e_36) != AT_LIST) || !(ATisEmpty(e_36))))
        _fail(t);
      {
        ATerm f_36 = ATgetArgument(t, 1);
        if(((ATgetType(f_36) != AT_LIST) || !(ATisEmpty(f_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm c_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(((ATgetType(g_36) == AT_LIST) && !(ATisEmpty(g_36))))
        {
          c_31 = ATgetFirst((ATermList) g_36);
          f_31 = (ATerm) ATgetNext((ATermList) g_36);
        }
      else
        _fail(t);
      {
        ATerm i_36 = ATgetArgument(t, 1);
        if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
          {
            g_31 = ATgetFirst((ATermList) i_36);
            h_31 = (ATerm) ATgetNext((ATermList) i_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_31, g_31), (ATerm) ATmakeAppl(sym__2, f_31, h_31));
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm k_31 = NULL,n_31 = NULL;
  if(match_cons(t, sym__2))
    {
      k_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_31), k_31);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm y_31 = NULL,c_32 = NULL,d_32 = NULL,f_32 = NULL,i_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      if(match_cons(j_36, sym_VarDec_2))
        {
          y_31 = ATgetArgument(j_36, 0);
          {
            ATerm l_36 = ATgetArgument(j_36, 1);
          }
        }
      else
        _fail(t);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, y_31);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_36, c_32);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, y_31), (ATerm) ATmakeAppl(sym_Defined_2, term_m_36, c_32));
  t = k_11(l_8, f_32, i_32, t);
  t = d_32;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_z_35;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm j_32 = NULL,l_32 = NULL,i_17 = NULL;
  j_32 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm n_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_z_35;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, j_32);
  t = m_11(i_17, j_32, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm p_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_36) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_32;
  return(t);
}
static ATerm g_10 (ATerm e_28, ATerm f_28, ATerm j_28, ATerm g_28, ATerm i_28, ATerm t)
{
  ATerm n_30 = NULL,q_30 = NULL,u_30 = NULL;
  t = g_28;
  t = map_1_0(d_8, t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_30, f_28, i_28);
  t = substitute_2_0(e_8, _id, t);
  q_30 = t;
  {
    static ATerm g_8 (ATerm t);
    static ATerm g_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, j_28, e_28);
      t = genzip_4_0(h_8, i_8, j_8, k_8, t);
      t = q_30;
      t = alltd_1_0(p_8, t);
      if(((u_30 != NULL) && (u_30 != t)))
        _fail(t);
      else
        u_30 = t;
      return(t);
    }
    t = scope_2_0(f_8, g_8, t);
  }
  t = not_null(u_30);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm a_34 = NULL,s_34 = NULL,w_34 = NULL,d_35 = NULL,e_35 = NULL,x_4 = NULL;
  e_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_35);
  a_34 = t;
  t = s_34;
  t = new_0_0(t);
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_35, w_34);
  x_4 = t;
  t = SSLsetAnnotations(x_4, a_34);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm f_35 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,y_4 = NULL;
  f_37 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      c_37 = ATgetArgument(t, 0);
      d_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_37);
  f_35 = t;
  t = c_37;
  t = new_0_0(t);
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_37, d_37);
  y_4 = t;
  t = SSLsetAnnotations(y_4, f_35);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm g_37 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_37 = ATgetArgument(t, 0);
      {
        ATerm q_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, g_37);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm h_37 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_37 = ATgetArgument(t, 0);
      {
        ATerm s_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, h_37);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm m_32 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,y_33 = NULL;
  s_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_36 = ATgetFirst((ATermList) t);
      if(match_cons(t_36, sym_SDefT_4))
        {
          m_32 = ATgetArgument(t_36, 0);
          o_33 = ATgetArgument(t_36, 1);
          p_33 = ATgetArgument(t_36, 2);
          {
            ATerm v_36 = ATgetArgument(t_36, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm u_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_33;
  t = map_1_0(r_8, t);
  q_33 = t;
  t = p_33;
  t = map_1_0(s_8, t);
  r_33 = t;
  t = q_33;
  t = map_1_0(t_8, t);
  t_33 = t;
  t = r_33;
  t = map_1_0(u_8, t);
  u_33 = t;
  t = s_33;
  {
    static ATerm v_8 (ATerm t);
    static ATerm v_8 (ATerm t)
    {
      ATerm i_37 = NULL,r_37 = NULL,u_37 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm w_36 = ATgetArgument(t, 0);
          i_37 = ATgetArgument(t, 1);
          r_37 = ATgetArgument(t, 2);
          u_37 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = g_10(t_33, u_33, i_37, r_37, u_37, t);
      return(t);
    }
    t = map_1_0(v_8, t);
  }
  t = choices_0_0(t);
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_32, q_33, r_33, y_33);
  return(t);
}
static ATerm e_85 (ATerm j_83, ATerm k_83, ATerm l_83, ATerm m_83, ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,b_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_83, k_83);
  t = Definitions_0_0(t);
  y_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_83, l_83);
  b_84 = t;
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      ATerm y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_84);
  z_83 = t;
  t = y_83;
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_84 = NULL,h_84 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_84 = ATgetFirst((ATermList) t);
            h_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_84;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_84;
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        {
          ATerm b_37 = t;
          int j_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(j_37);
            }
          else
            {
              t = b_37;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  a_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_84, l_83);
  b_5 = t;
  t = SSLsetAnnotations(b_5, z_83);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL,m_84 = NULL,n_84 = NULL,p_84 = NULL,r_84 = NULL,x_84 = NULL;
  m_84 = t;
  if(match_cons(t, sym__2))
    {
      n_84 = ATgetArgument(t, 0);
      x_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_84;
  if(match_cons(t, sym__2))
    {
      p_84 = ATgetArgument(t, 0);
      r_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_84;
  if(match_cons(t, sym_Mod_2))
    {
      j_84 = ATgetArgument(t, 0);
      k_84 = ATgetArgument(t, 1);
      {
        ATerm k_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_85 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, j_84, k_84, r_84);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            c_85 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_85, x_84);
            LocalPopChoice(m_37);
          }
        else
          {
            t = k_37;
            t = e_85(p_84, r_84, x_84, m_84, t);
          }
      }
    }
  else
    {
      t = e_85(p_84, r_84, x_84, m_84, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_145 (ATerm), ATerm t)
{
  static ATerm g_86 (ATerm t);
  static ATerm g_86 (ATerm t)
  {
    ATerm b_86 = NULL,e_86 = NULL,f_86 = NULL;
    f_86 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_86 = ATgetFirst((ATermList) t);
        e_86 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_32 = NULL,h_32 = NULL,d_5 = NULL;
          t = SSLgetAnnotations(f_86);
          b_32 = t;
          t = e_86;
          t = g_86(t);
          h_32 = t;
          t = (ATerm) ATinsert(CheckATermList(h_32), b_86);
          d_5 = t;
          t = SSLsetAnnotations(d_5, b_32);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_86;
        t = b_145(t);
      }
    return(t);
  }
  t = g_86(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_85 = NULL,i_85 = NULL,j_85 = NULL;
  g_85 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_85;
    }
  else
    {
      static ATerm w_8 (ATerm t);
      static ATerm w_8 (ATerm t)
      {
        t = not_null(j_85);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_85 = ATgetFirst((ATermList) t);
          if(((j_85 != NULL) && (j_85 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_85;
      t = at_end_1_0(w_8, t);
    }
  return(t);
}
static ATerm b_87 (ATerm p_86, ATerm t)
{
  ATerm q_86 = NULL;
  t = SSL_explode_term(p_86);
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_86;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL;
  w_86 = t;
  if(match_cons(t, sym__2))
    {
      u_86 = ATgetArgument(t, 0);
      v_86 = ATgetArgument(t, 1);
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_8 (ATerm t);
            static ATerm x_8 (ATerm t)
            {
              t = v_86;
              return(t);
            }
            t = u_86;
            t = at_end_1_0(x_8, t);
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            t = b_87(w_86, t);
          }
      }
    }
  else
    {
      t = b_87(w_86, t);
    }
  return(t);
}
static ATerm a_11 (ATerm w_151 (ATerm), ATerm p_68, ATerm o_68, ATerm t)
{
  static ATerm g_88 (ATerm t);
  static ATerm g_88 (ATerm t)
  {
    ATerm u_87 = NULL,x_87 = NULL,a_88 = NULL;
    u_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_87;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_87 = ATgetFirst((ATermList) t);
            a_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_37 = t;
          int v_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_87;
              {
                static ATerm y_8 (ATerm t);
                static ATerm y_8 (ATerm t)
                {
                  t = o_68;
                  return(t);
                }
                t = n_11(w_151, y_8, x_87, a_88, t);
              }
              t = g_88(t);
              LocalPopChoice(v_37);
            }
          else
            {
              t = s_37;
              {
                ATerm t_32 = NULL,w_32 = NULL,h_5 = NULL;
                t = SSLgetAnnotations(u_87);
                t_32 = t;
                t = a_88;
                t = g_88(t);
                w_32 = t;
                t = (ATerm) ATinsert(CheckATermList(w_32), x_87);
                h_5 = t;
                t = SSLsetAnnotations(h_5, t_32);
              }
            }
        }
      }
    return(t);
  }
  t = p_68;
  t = g_88(t);
  return(t);
}
ATerm genzip_4_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm t)
{
  static ATerm t_88 (ATerm t);
  static ATerm t_88 (ATerm t)
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_137(t);
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        {
          ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL,r_88 = NULL,s_88 = NULL,j_5 = NULL;
          t = d_137(t);
          s_88 = t;
          if(match_cons(t, sym__2))
            {
              m_88 = ATgetArgument(t, 0);
              n_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_88);
          l_88 = t;
          t = m_88;
          t = f_137(t);
          o_88 = t;
          t = n_88;
          t = t_88(t);
          r_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_88, r_88);
          j_5 = t;
          t = SSLsetAnnotations(j_5, l_88);
          t = e_137(t);
        }
      }
    return(t);
  }
  t = t_88(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_37 = ATgetArgument(t, 0);
      if(((ATgetType(y_37) != AT_LIST) || !(ATisEmpty(y_37))))
        _fail(t);
      {
        ATerm z_37 = ATgetArgument(t, 1);
        if(((ATgetType(z_37) != AT_LIST) || !(ATisEmpty(z_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,i_89 = NULL,j_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_38 = ATgetArgument(t, 0);
      if(((ATgetType(b_38) == AT_LIST) && !(ATisEmpty(b_38))))
        {
          f_89 = ATgetFirst((ATermList) b_38);
          g_89 = (ATerm) ATgetNext((ATermList) b_38);
        }
      else
        _fail(t);
      {
        ATerm c_38 = ATgetArgument(t, 1);
        if(((ATgetType(c_38) == AT_LIST) && !(ATisEmpty(c_38))))
          {
            i_89 = ATgetFirst((ATermList) c_38);
            j_89 = (ATerm) ATgetNext((ATermList) c_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_89, i_89), (ATerm) ATmakeAppl(sym__2, g_89, j_89));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL;
  if(match_cons(t, sym__2))
    {
      k_89 = ATgetArgument(t, 0);
      l_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_89), k_89);
  return(t);
}
static ATerm f_11 (ATerm j_887, ATerm o_887, ATerm o_86, ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,c_89 = NULL;
  t = SSL_explode_term(o_887);
  if(match_cons(t, sym__2))
    {
      y_88 = ATgetArgument(t, 0);
      a_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_887);
  if(match_cons(t, sym__2))
    {
      if((y_88 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      z_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_88, a_89);
  t = genzip_4_0(z_8, a_9, c_9, _id, t);
  c_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_89, o_86);
  t = conc_0_0(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm d_90 = NULL;
  d_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_90);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,l_5 = NULL;
  h_90 = t;
  if(match_cons(t, sym__2))
    {
      f_90 = ATgetArgument(t, 0);
      g_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_90);
  e_90 = t;
  t = g_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_90, g_90);
  l_5 = t;
  t = SSLsetAnnotations(l_5, e_90);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL;
  l_91 = t;
  if(match_cons(t, sym__2))
    {
      m_91 = ATgetArgument(t, 0);
      n_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_91 = ATgetFirst((ATermList) t);
      p_91 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_91(m_91, n_91, l_91, t);
            LocalPopChoice(f_38);
          }
        else
          {
            t = d_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_91), o_91), p_91);
          }
      }
    }
  else
    {
      t = z_91(m_91, n_91, l_91, t);
    }
  return(t);
}
static ATerm z_91 (ATerm i_90, ATerm j_90, ATerm u_90, ATerm t)
{
  ATerm v_90 = NULL,z_90 = NULL,m_5 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL;
  t = SSLgetAnnotations(u_90);
  v_90 = t;
  t = j_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_91 = ATgetFirst((ATermList) t);
      f_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_91;
  if(match_cons(t, sym__2))
    {
      d_91 = ATgetArgument(t, 0);
      e_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_91;
        if((d_91 != t))
          {
            _fail(t);
          }
        t = f_91;
        LocalPopChoice(i_38);
      }
    else
      {
        t = g_38;
        t = j_90;
        t = f_11(d_91, e_91, f_91, t);
      }
  }
  z_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_90, z_90);
  m_5 = t;
  t = SSLsetAnnotations(m_5, v_90);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm y_91 = NULL;
  if(match_cons(t, sym__2))
    {
      y_91 = ATgetArgument(t, 0);
      if((y_91 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_9, e_9, i_9, t);
      LocalPopChoice(k_38);
    }
  else
    {
      t = j_38;
      {
        ATerm t_91 = NULL,u_91 = NULL,v_91 = NULL;
        t_91 = t;
        if(match_cons(t, sym__2))
          {
            u_91 = ATgetArgument(t, 0);
            v_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_91;
        t = a_11(j_9, u_91, v_91, t);
      }
    }
  return(t);
}
static ATerm h_11 (ATerm m_167 (ATerm), ATerm n_167 (ATerm), ATerm o_167 (ATerm), ATerm t_89, ATerm q_89, ATerm y_89, ATerm u_89, ATerm r_89, ATerm s_89, ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_89, u_89);
  t = m_167(t);
  if(match_cons(t, sym__2))
    {
      b_92 = ATgetArgument(t, 0);
      a_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_92;
  t = n_167(t);
  c_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_92, y_89);
  t = diff_0_0(t);
  d_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_92, q_89);
  t = conc_0_0(t);
  e_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_92, y_89);
  t = conc_0_0(t);
  f_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_89, b_92, r_89);
  t = o_167(t);
  g_92 = t;
  t = (ATerm) ATmakeAppl(sym__5, e_92, f_92, a_92, g_92, s_89);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm m_167 (ATerm), ATerm n_167 (ATerm), ATerm o_167 (ATerm), ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      if(((ATgetType(l_38) == AT_LIST) && !(ATisEmpty(l_38))))
        {
          k_92 = ATgetFirst((ATermList) l_38);
          l_92 = (ATerm) ATgetNext((ATermList) l_38);
        }
      else
        _fail(t);
      m_92 = ATgetArgument(t, 1);
      n_92 = ATgetArgument(t, 2);
      o_92 = ATgetArgument(t, 3);
      p_92 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = h_11(m_167, n_167, o_167, k_92, l_92, m_92, n_92, o_92, p_92, t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm t)
{
  static ATerm q_92 (ATerm t);
  static ATerm q_92 (ATerm t)
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_139(t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = d_139(t);
        t = q_92(t);
      }
    return(t);
  }
  t = q_92(t);
  return(t);
}
ATerm for_3_0 (ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm t)
{
  t = f_139(t);
  t = while_not_2_0(g_139, h_139, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL;
  if(match_cons(t, sym__3))
    {
      a_93 = ATgetArgument(t, 0);
      b_93 = ATgetArgument(t, 1);
      c_93 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, a_93, a_93, b_93, c_93, (ATerm) ATempty);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm q_38 = ATgetArgument(t, 0);
      if(((ATgetType(q_38) != AT_LIST) || !(ATisEmpty(q_38))))
        _fail(t);
      {
        ATerm r_38 = ATgetArgument(t, 1);
      }
      {
        ATerm s_38 = ATgetArgument(t, 2);
      }
      f_93 = ATgetArgument(t, 3);
      g_93 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_93, g_93);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, n_9, o_9, t);
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
      {
        ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL;
        if(match_cons(t, sym__5))
          {
            m_93 = ATgetArgument(t, 0);
            p_93 = ATgetArgument(t, 1);
            q_93 = ATgetArgument(t, 2);
            r_93 = ATgetArgument(t, 3);
            s_93 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = m_93;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_93 = ATgetFirst((ATermList) t);
            o_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, o_93, p_93, q_93, r_93, (ATerm) ATinsert(CheckATermList(s_93), n_93));
      }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(p_9, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm v_38 = ATgetArgument(t, 0);
      j_93 = ATgetArgument(t, 1);
      k_93 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_93), j_93);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm x_33 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  if(match_cons(t, sym__2))
    {
      d_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_34;
  if(match_cons(t, sym_Mod_2))
    {
      x_33 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
      {
        ATerm y_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_34;
            t = v_9(x_33, b_34, e_34, t);
            LocalPopChoice(z_38);
          }
        else
          {
            t = y_38;
            t = i_34(d_34, e_34, t);
          }
      }
    }
  else
    {
      t = i_34(d_34, e_34, t);
    }
  return(t);
}
static ATerm i_34 (ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm n_33 = NULL,w_33 = NULL;
  t = term_e_17;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_17), k_33), term_h_17), j_33), term_f_17);
  w_33 = t;
  t = SSL_printnl(n_33, w_33);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_17), k_33), term_h_17), j_33), term_f_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL;
  t = for_3_0(k_9, l_9, m_9, t);
  v_94 = t;
  if(match_cons(t, sym__2))
    {
      w_94 = ATgetArgument(t, 0);
      x_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_94;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_94;
    }
  else
    {
      ATerm f_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_94 = ATgetFirst((ATermList) t);
          z_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(z_94), y_94);
      t = map_1_0(q_9, t);
      t = term_o_20;
      f_33 = t;
      t = SSL_exit(f_33);
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL;
  if(match_cons(t, sym__2))
    {
      u_95 = ATgetArgument(t, 0);
      v_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(u_95, v_95, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL;
  if(match_cons(t, sym__2))
    {
      w_95 = ATgetArgument(t, 0);
      x_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(w_95, x_95, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm y_95 = NULL;
  if(match_cons(t, sym__2))
    {
      y_95 = ATgetArgument(t, 0);
      if((y_95 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_f_39;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
  f_95 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      i_95 = ATgetArgument(t, 0);
      d_95 = ATgetArgument(t, 1);
      e_95 = ATgetArgument(t, 2);
      {
        ATerm g_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  k_95 = t;
  t = d_95;
  t = foldr_3_0(s_9, t_9, x_9, t);
  g_95 = t;
  t = e_95;
  t = foldr_3_0(y_9, a_10, d_10, t);
  h_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_95, (ATerm) ATmakeAppl(sym__2, g_95, h_95));
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = (ATerm) ATempty;
      }
  }
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_95, (ATerm) ATmakeAppl(sym__2, g_95, h_95));
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = ExtDefinitions_0_0(t);
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        t = (ATerm) ATempty;
      }
  }
  m_95 = t;
  t = i_95;
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = (ATerm) ATempty;
      }
  }
  l_95 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_95, h_95));
  t_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_95, h_95)), l_95);
  t = o_11(e_10, t_95, l_95, t);
  j_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_95, (ATerm) ATmakeAppl(sym__2, g_95, h_95));
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_39, (ATerm) ATinsert(CheckATermList(n_95), f_95));
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_95, (ATerm) ATmakeAppl(sym__2, g_95, h_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_39, (ATerm) ATinsert(CheckATermList(n_95), f_95)));
  t = k_11(f_10, r_95, s_95, t);
  t = (ATerm) ATmakeAppl(sym__2, i_95, (ATerm) ATmakeAppl(sym__2, g_95, h_95));
  p_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_39, (ATerm) ATinsert(CheckATermList(m_95), f_95));
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_95, (ATerm) ATmakeAppl(sym__2, g_95, h_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_39, (ATerm) ATinsert(CheckATermList(m_95), f_95)));
  t = k_11(h_10, p_95, q_95, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_39, j_95);
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_95, (ATerm) ATmakeAppl(sym_Defined_2, term_u_39, j_95));
  t = k_11(j_10, i_95, o_95, t);
  t = k_95;
  return(t);
}
ATerm ExtDefinitions_0_0 (ATerm t)
{
  ATerm j_96 = NULL,l_96 = NULL;
  j_96 = t;
  if(match_cons(t, sym__2))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      l_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_96;
  if(match_cons(t, sym__2))
    {
      ATerm b_40 = ATgetArgument(t, 0);
      ATerm d_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_34 = NULL,a_35 = NULL;
        t = term_b_39;
        a_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_39, j_96);
        t = m_11(a_35, j_96, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_40) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
            x_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_34;
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
        {
          ATerm h_35 = NULL,k_35 = NULL;
          t = term_b_39;
          k_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_39, j_96);
          t = m_11(k_35, j_96, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_40 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_40) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
              h_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_35;
        }
      }
  }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm h_97 = NULL,i_97 = NULL;
  if(match_cons(t, sym__2))
    {
      h_97 = ATgetArgument(t, 0);
      i_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(h_97, i_97, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL;
  if(match_cons(t, sym__2))
    {
      j_97 = ATgetArgument(t, 0);
      k_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(j_97, k_97, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm l_97 = NULL;
  if(match_cons(t, sym__2))
    {
      l_97 = ATgetArgument(t, 0);
      if((l_97 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_f_39;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL;
  s_96 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      v_96 = ATgetArgument(t, 0);
      q_96 = ATgetArgument(t, 1);
      r_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  x_96 = t;
  t = q_96;
  t = foldr_3_0(k_10, p_10, q_10, t);
  t_96 = t;
  t = r_96;
  t = foldr_3_0(r_10, v_10, w_10, t);
  u_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym__2, t_96, u_96));
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = (ATerm) ATempty;
      }
  }
  a_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym__2, t_96, u_96));
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = ExtDefinitions_0_0(t);
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = (ATerm) ATempty;
      }
  }
  z_96 = t;
  t = v_96;
  {
    ATerm m_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(o_40);
      }
    else
      {
        t = m_40;
        t = (ATerm) ATempty;
      }
  }
  y_96 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_96, u_96));
  g_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_96, u_96)), y_96);
  t = o_11(x_10, g_97, y_96, t);
  w_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym__2, t_96, u_96));
  e_97 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_40, (ATerm) ATinsert(CheckATermList(a_97), s_96));
  f_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym__2, t_96, u_96)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_40, (ATerm) ATinsert(CheckATermList(a_97), s_96)));
  t = k_11(y_10, e_97, f_97, t);
  t = (ATerm) ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym__2, t_96, u_96));
  c_97 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_40, (ATerm) ATinsert(CheckATermList(z_96), s_96));
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym__2, t_96, u_96)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_40, (ATerm) ATinsert(CheckATermList(z_96), s_96)));
  t = k_11(z_10, c_97, d_97, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_40, w_96);
  b_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym_Defined_2, term_r_40, w_96));
  t = k_11(c_11, v_96, b_97, t);
  t = x_96;
  return(t);
}
static ATerm k_11 (ATerm v_167 (ATerm), ATerm r_90, ATerm p_90, ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL;
  p_97 = t;
  t = v_167(t);
  m_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_97, r_90, p_90);
  t = d_12(m_97, r_90, p_90, t);
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_97 = NULL;
        t = term_z_34;
        u_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_97, term_z_34);
        t = c_12(m_97, u_97, t);
        {
          ATerm v_40 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_40;
            }
        }
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_97 = ATgetFirst((ATermList) t);
      o_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_97, term_z_34, (ATerm) ATinsert(CheckATermList(o_97), (ATerm) ATinsert(CheckATermList(n_97), r_90)));
  t = lookup_table_0_1(m_97, t);
  t_97 = t;
  t = term_z_34;
  q_97 = t;
  t = (ATerm) ATinsert(CheckATermList(o_97), (ATerm) ATinsert(CheckATermList(n_97), r_90));
  r_97 = t;
  t = t_97;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(q_97, r_97, s_97, t);
  t = p_97;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm h_98 = NULL;
  h_98 = t;
  {
    ATerm w_40 = t;
    int y_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_35 = NULL,a_36 = NULL;
        t = term_f_39;
        a_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_39, h_98);
        t = m_11(a_36, h_98, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm z_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_40) != ATmakeSymbol("v_0", 0, ATtrue)))
              _fail(t);
            x_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_35;
        LocalPopChoice(y_40);
      }
    else
      {
        t = w_40;
        {
          ATerm b_41 = t;
          int c_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_36 = NULL,k_36 = NULL;
              t = term_f_39;
              k_36 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_39, h_98);
              t = m_11(k_36, h_98, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_41) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  h_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_36;
              LocalPopChoice(c_41);
            }
          else
            {
              t = b_41;
              {
                ATerm o_36 = NULL,r_36 = NULL;
                t = term_f_39;
                r_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_39, h_98);
                t = m_11(r_36, h_98, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm e_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_41) != ATmakeSymbol("h_0", 0, ATtrue)))
                      _fail(t);
                    o_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_36;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm m_11 (ATerm y_73, ATerm z_73, ATerm t)
{
  ATerm l_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_73, z_73);
  t = c_12(y_73, z_73, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_98 = ATgetFirst((ATermList) t);
      {
        ATerm f_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_98;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm c_99 = NULL,e_99 = NULL;
  c_99 = t;
  if(match_cons(t, sym__2))
    {
      ATerm g_41 = ATgetArgument(t, 0);
      e_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_99;
  if(match_cons(t, sym__2))
    {
      ATerm h_41 = ATgetArgument(t, 0);
      ATerm i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_41 = t;
    int l_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_37 = NULL,o_37 = NULL;
        t = term_a_39;
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_39, c_99);
        t = m_11(o_37, c_99, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_41) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            l_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_37;
        LocalPopChoice(l_41);
      }
    else
      {
        t = k_41;
        {
          ATerm n_41 = t;
          int p_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_37 = NULL,a_38 = NULL;
              t = term_a_39;
              a_38 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_39, c_99);
              t = m_11(a_38, c_99, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_41) != ATmakeSymbol("k_0", 0, ATtrue)))
                    _fail(t);
                  t_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_37;
              LocalPopChoice(p_41);
            }
          else
            {
              t = n_41;
              {
                ATerm e_38 = NULL,h_38 = NULL;
                t = term_a_39;
                h_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_39, c_99);
                t = m_11(h_38, c_99, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm r_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_41) != ATmakeSymbol("e_0", 0, ATtrue)))
                      _fail(t);
                    e_38 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_38;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL;
  if(match_cons(t, sym__2))
    {
      y_99 = ATgetArgument(t, 0);
      z_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(y_99, z_99, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL;
  if(match_cons(t, sym__2))
    {
      a_100 = ATgetArgument(t, 0);
      b_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(a_100, b_100, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm c_100 = NULL;
  if(match_cons(t, sym__2))
    {
      c_100 = ATgetArgument(t, 0);
      if((c_100 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_f_39;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm k_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL,s_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL;
  m_99 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      p_99 = ATgetArgument(t, 0);
      k_99 = ATgetArgument(t, 1);
      l_99 = ATgetArgument(t, 2);
      {
        ATerm s_41 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  r_99 = t;
  t = k_99;
  t = foldr_3_0(d_11, j_11, l_11, t);
  n_99 = t;
  t = l_99;
  t = foldr_3_0(y_11, b_12, e_12, t);
  o_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_99, (ATerm) ATmakeAppl(sym__2, n_99, o_99));
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = (ATerm) ATempty;
      }
  }
  t_99 = t;
  t = p_99;
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(w_41);
      }
    else
      {
        t = v_41;
        t = (ATerm) ATempty;
      }
  }
  s_99 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_99, o_99));
  x_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_99, o_99)), s_99);
  t = o_11(i_12, x_99, s_99, t);
  q_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_99, (ATerm) ATmakeAppl(sym__2, n_99, o_99));
  v_99 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_41, (ATerm) ATinsert(CheckATermList(t_99), m_99));
  w_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_99, (ATerm) ATmakeAppl(sym__2, n_99, o_99)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_41, (ATerm) ATinsert(CheckATermList(t_99), m_99)));
  t = k_11(j_12, v_99, w_99, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_41, q_99);
  u_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_99, (ATerm) ATmakeAppl(sym_Defined_2, term_y_41, q_99));
  t = k_11(k_12, p_99, u_99, t);
  t = r_99;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL;
  if(match_cons(t, sym__2))
    {
      p_100 = ATgetArgument(t, 0);
      q_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(p_100, q_100, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL;
  if(match_cons(t, sym__2))
    {
      r_100 = ATgetArgument(t, 0);
      s_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(r_100, s_100, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm y_100 = NULL,z_100 = NULL;
  if(match_cons(t, sym__2))
    {
      y_100 = ATgetArgument(t, 0);
      z_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(y_100, z_100, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm a_101 = NULL,b_101 = NULL;
  if(match_cons(t, sym__2))
    {
      a_101 = ATgetArgument(t, 0);
      b_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(a_101, b_101, t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL;
  if(match_cons(t, sym__2))
    {
      i_101 = ATgetArgument(t, 0);
      j_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(i_101, j_101, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm k_101 = NULL,l_101 = NULL;
  if(match_cons(t, sym__2))
    {
      k_101 = ATgetArgument(t, 0);
      l_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(k_101, l_101, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
  e_100 = t;
  {
    ATerm z_41 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            f_100 = ATgetArgument(t, 0);
            g_100 = ATgetArgument(t, 1);
            h_100 = ATgetArgument(t, 2);
            {
              ATerm k_42 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_42);
        {
          ATerm m_100 = NULL,n_100 = NULL;
          t = g_100;
          t = foldr_3_0(m_12, n_12, o_12, t);
          m_100 = t;
          t = h_100;
          t = foldr_3_0(p_12, q_12, r_12, t);
          n_100 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_100, (ATerm) ATmakeAppl(sym__2, m_100, n_100)));
        }
      }
    else
      {
        t = z_41;
        if(match_cons(t, sym_ExtSDef_3))
          {
            f_100 = ATgetArgument(t, 0);
            g_100 = ATgetArgument(t, 1);
            h_100 = ATgetArgument(t, 2);
            {
              ATerm w_100 = NULL,x_100 = NULL;
              t = g_100;
              t = foldr_3_0(u_12, v_12, w_12, t);
              w_100 = t;
              t = h_100;
              t = foldr_3_0(y_12, z_12, a_13, t);
              x_100 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_100, (ATerm) ATmakeAppl(sym__2, w_100, x_100)));
            }
          }
        else
          {
            ATerm f_101 = NULL,g_101 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                f_100 = ATgetArgument(t, 0);
                g_100 = ATgetArgument(t, 1);
                h_100 = ATgetArgument(t, 2);
                {
                  ATerm l_42 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = g_100;
            t = foldr_3_0(b_13, c_13, e_13, t);
            f_101 = t;
            t = h_100;
            t = foldr_3_0(f_13, g_13, h_13, t);
            g_101 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_100, (ATerm) ATmakeAppl(sym__2, f_101, g_101)));
          }
      }
  }
  return(t);
}
static ATerm n_11 (ATerm e_152 (ATerm), ATerm f_152 (ATerm), ATerm v_68, ATerm u_68, ATerm t)
{
  t = f_152(t);
  {
    static ATerm i_13 (ATerm t);
    static ATerm i_13 (ATerm t)
    {
      ATerm m_101 = NULL;
      m_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_68, m_101);
      t = e_152(t);
      return(t);
    }
    t = fetch_1_0(i_13, t);
  }
  t = u_68;
  return(t);
}
static ATerm o_11 (ATerm b_152 (ATerm), ATerm r_68, ATerm q_68, ATerm t)
{
  static ATerm c_102 (ATerm t);
  static ATerm c_102 (ATerm t)
  {
    ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL;
    x_101 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_68;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_101 = ATgetFirst((ATermList) t);
            z_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_42 = t;
          int q_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_101;
              {
                static ATerm j_13 (ATerm t);
                static ATerm j_13 (ATerm t)
                {
                  t = q_68;
                  return(t);
                }
                t = n_11(b_152, j_13, y_101, z_101, t);
              }
              t = c_102(t);
              LocalPopChoice(q_42);
            }
          else
            {
              t = m_42;
              {
                ATerm m_38 = NULL,p_38 = NULL,p_5 = NULL;
                t = SSLgetAnnotations(x_101);
                m_38 = t;
                t = z_101;
                t = c_102(t);
                p_38 = t;
                t = (ATerm) ATinsert(CheckATermList(p_38), y_101);
                p_5 = t;
                t = SSLsetAnnotations(p_5, m_38);
              }
            }
        }
      }
    return(t);
  }
  t = r_68;
  t = c_102(t);
  return(t);
}
ATerm foldr_3_0 (ATerm a_155 (ATerm), ATerm b_155 (ATerm), ATerm c_155 (ATerm), ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  f_102 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_102;
      t = a_155(t);
    }
  else
    {
      ATerm k_102 = NULL,l_102 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_102 = ATgetFirst((ATermList) t);
          h_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_102;
      t = c_155(t);
      k_102 = t;
      t = h_102;
      t = foldr_3_0(a_155, b_155, c_155, t);
      l_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_102, l_102);
      t = b_155(t);
    }
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm p_102 = NULL,q_102 = NULL;
  if(match_cons(t, sym__2))
    {
      p_102 = ATgetArgument(t, 0);
      q_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(n_13, p_102, q_102, t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm r_102 = NULL;
  if(match_cons(t, sym__2))
    {
      r_102 = ATgetArgument(t, 0);
      if((r_102 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      {
        ATerm t_42 = t;
        int u_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(u_42);
          }
        else
          {
            t = t_42;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL;
  o_102 = t;
  t = foldr_3_0(l_13, m_13, DefinitionName_0_0, t);
  m_102 = t;
  t = o_102;
  t = map_1_0(o_13, t);
  n_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_102, n_102, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL,r_5 = NULL;
  x_102 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_102 = ATgetFirst((ATermList) t);
      u_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_102);
  s_102 = t;
  t = t_102;
  t = y_106(t);
  v_102 = t;
  t = u_102;
  t = z_106(t);
  w_102 = t;
  t = (ATerm) ATinsert(CheckATermList(w_102), v_102);
  r_5 = t;
  t = SSLsetAnnotations(r_5, s_102);
  return(t);
}
static ATerm p_11 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm y_102 = NULL;
  t = SSL_fputc(q_50, r_50);
  y_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_102);
  return(t);
}
static ATerm q_11 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm z_102 = NULL;
  t = SSL_write_term_to_stream_text(w_48, x_48);
  z_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_102);
  return(t);
}
static ATerm s_11 (ATerm a_140 (ATerm), ATerm o_369, ATerm c_49, ATerm t)
{
  ATerm a_103 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_369, term_v_42);
  t = w_11(t);
  a_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_103, c_49);
  t = a_140(t);
  t = fclose_0_0(t);
  t = c_49;
  return(t);
}
static ATerm r_11 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm b_103 = NULL;
  t = SSL_write_term_to_stream_baf(s_48, t_48);
  b_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_103);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_42 = ATgetArgument(t, 0);
      if(match_cons(w_42, sym_Stream_1))
        {
          i_103 = ATgetArgument(w_42, 0);
        }
      else
        _fail(t);
      j_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(i_103, j_103, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_42 = ATgetArgument(t, 0);
      if(match_cons(x_42, sym_Stream_1))
        {
          n_103 = ATgetArgument(x_42, 0);
        }
      else
        _fail(t);
      o_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(n_103, o_103, t);
  k_103 = t;
  t = term_o_21;
  l_103 = t;
  t = k_103;
  if(match_cons(t, sym_Stream_1))
    {
      m_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, k_103);
  t = p_11(l_103, m_103, t);
  return(t);
}
ATerm output_1_0 (ATerm v_162 (ATerm), ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL;
  t = v_162(t);
  d_103 = t;
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_103 = NULL,f_103 = NULL;
        t = term_a_43;
        e_103 = t;
        t = term_b_43;
        f_103 = t;
        t = term_c_43;
        t = c_12(e_103, f_103, t);
        LocalPopChoice(z_42);
      }
    else
      {
        t = y_42;
        t = term_d_43;
      }
  }
  c_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_103, d_103);
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_103 = NULL,h_103 = NULL;
        t = term_a_43;
        g_103 = t;
        t = term_g_43;
        h_103 = t;
        t = term_h_43;
        t = c_12(g_103, h_103, t);
        t = (ATerm) ATmakeAppl(sym__2, c_103, d_103);
        LocalPopChoice(f_43);
        if(match_cons(t, sym__2))
          {
            ATerm i_43 = ATgetArgument(t, 0);
            ATerm j_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_11(q_13, c_103, d_103, t);
      }
    else
      {
        t = e_43;
        if(match_cons(t, sym__2))
          {
            ATerm k_43 = ATgetArgument(t, 0);
            ATerm l_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_11(s_13, c_103, d_103, t);
      }
  }
  return(t);
}
static ATerm c_104 (ATerm w_103, ATerm t)
{
  t = SSL_fclose(w_103);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_103 = NULL,a_104 = NULL;
  a_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_103 = ATgetArgument(t, 0);
      {
        ATerm m_43 = t;
        int n_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_103);
            LocalPopChoice(n_43);
          }
        else
          {
            t = m_43;
            t = c_104(a_104, t);
          }
      }
    }
  else
    {
      t = c_104(a_104, t);
    }
  return(t);
}
static ATerm t_11 (ATerm y_48, ATerm t)
{
  t = SSL_read_term_from_stream(y_48);
  return(t);
}
static ATerm u_11 (ATerm y_67, ATerm z_67, ATerm t)
{
  t = SSL_strcat(y_67, z_67);
  return(t);
}
static ATerm v_11 (ATerm s_50, ATerm t_50, ATerm t)
{
  ATerm d_104 = NULL;
  t = SSL_fopen(s_50, t_50);
  d_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_104);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_104 = NULL;
  t = SSL_stdin_stream();
  e_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_104);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_104 = NULL;
  t = SSL_stdout_stream();
  f_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_104);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_104 = NULL;
  t = SSL_stderr_stream();
  g_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_104);
  return(t);
}
static ATerm n_105 (ATerm m_104, ATerm t)
{
  ATerm n_104 = NULL;
  t = SSL_explode_term(m_104);
  if(match_cons(t, sym__2))
    {
      ATerm o_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_43 = ATgetArgument(t, 1);
        if(((ATgetType(p_43) == AT_LIST) && !(ATisEmpty(p_43))))
          {
            n_104 = ATgetFirst((ATermList) p_43);
            {
              ATerm q_43 = (ATerm) ATgetNext((ATermList) p_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_104;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_104;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_104;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_104;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_105 (ATerm q_104, ATerm r_104, ATerm s_104, ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,y_104 = NULL,t_5 = NULL;
  t = SSLgetAnnotations(s_104);
  v_104 = t;
  t = q_104;
  if(match_cons(t, sym_Path_1))
    {
      y_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_104, r_104);
  t_5 = t;
  t = SSLsetAnnotations(t_5, v_104);
  if(match_cons(t, sym__2))
    {
      t_104 = ATgetArgument(t, 0);
      u_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_11(t_104, u_104, t);
  return(t);
}
static ATerm p_105 (ATerm a_105, ATerm b_105, ATerm c_105, ATerm t)
{
  ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL,i_105 = NULL,u_5 = NULL;
  t = SSLgetAnnotations(c_105);
  f_105 = t;
  t = SSL_is_string(a_105);
  i_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_105, b_105);
  u_5 = t;
  t = SSLsetAnnotations(u_5, f_105);
  if(match_cons(t, sym__2))
    {
      d_105 = ATgetArgument(t, 0);
      e_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_11(d_105, e_105, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL;
  k_105 = t;
  if(match_cons(t, sym__2))
    {
      l_105 = ATgetArgument(t, 0);
      m_105 = ATgetArgument(t, 1);
      {
        ATerm r_43 = t;
        int s_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_105(k_105, t);
            LocalPopChoice(s_43);
          }
        else
          {
            t = r_43;
            {
              ATerm t_43 = t;
              int u_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_105(l_105, m_105, k_105, t);
                  LocalPopChoice(u_43);
                }
              else
                {
                  t = t_43;
                  t = p_105(l_105, m_105, k_105, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_105(k_105, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL,y_105 = NULL;
  y_105 = t;
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_105, term_x_43);
        t = w_11(t);
        LocalPopChoice(w_43);
      }
    else
      {
        t = v_43;
        {
          ATerm d_39 = NULL,e_39 = NULL;
          t = term_y_43;
          e_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_43, y_105);
          t = u_11(e_39, y_105, t);
          d_39 = t;
          t = SSL_perror(d_39);
          _fail(t);
        }
      }
  }
  s_105 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(t_105, t);
  r_105 = t;
  t = s_105;
  t = fclose_0_0(t);
  t = r_105;
  return(t);
}
ATerm input_1_0 (ATerm w_162 (ATerm), ATerm t)
{
  ATerm z_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_106 = NULL,c_106 = NULL;
      t = term_a_43;
      b_106 = t;
      t = term_b_44;
      c_106 = t;
      t = term_c_44;
      t = c_12(b_106, c_106, t);
      LocalPopChoice(a_44);
    }
  else
    {
      t = z_43;
      t = term_d_44;
    }
  t = ReadFromFile_0_0(t);
  t = w_162(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_106 = NULL,e_106 = NULL;
  t = term_a_43;
  d_106 = t;
  t = term_e_44;
  e_106 = t;
  t = term_f_44;
  t = c_12(d_106, e_106, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL;
  g_106 = t;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_106;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_44 = ATgetFirst((ATermList) t);
                ATerm j_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_106;
          }
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        t = (ATerm) ATinsert(ATempty, g_106);
      }
  }
  h_106 = t;
  t = term_d_43;
  i_106 = t;
  t = SSL_printnl(i_106, h_106);
  t = g_106;
  return(t);
}
ATerm map_1_0 (ATerm m_144 (ATerm), ATerm t)
{
  static ATerm c_107 (ATerm t);
  static ATerm c_107 (ATerm t)
  {
    ATerm x_106 = NULL,a_107 = NULL,b_107 = NULL;
    x_106 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_106;
      }
    else
      {
        ATerm j_39 = NULL,m_39 = NULL,n_39 = NULL,x_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_107 = ATgetFirst((ATermList) t);
            b_107 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_106);
        j_39 = t;
        t = a_107;
        t = m_144(t);
        m_39 = t;
        t = b_107;
        t = c_107(t);
        n_39 = t;
        t = (ATerm) ATinsert(CheckATermList(n_39), m_39);
        x_5 = t;
        t = SSLsetAnnotations(x_5, j_39);
      }
    return(t);
  }
  t = c_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_107 = ATgetFirst((ATermList) t);
      g_107 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_107 = NULL,l_107 = NULL;
        static ATerm t_13 (ATerm t);
        static ATerm t_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_107)), not_null(l_107));
          return(t);
        }
        t = g_107;
        t = r_0(t);
        if(((k_107 != NULL) && (k_107 != t)))
          _fail(t);
        else
          k_107 = t;
        t = f_107;
        t = p_0(t);
        if(((l_107 != NULL) && (l_107 != t)))
          _fail(t);
        else
          l_107 = t;
        t = g_107;
        t = reverse_acc_2_0(p_0, t_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_31;
      t = r_0(t);
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL,b_6 = NULL;
  v_107 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_107);
  t_107 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_107);
  b_6 = t;
  t = SSLsetAnnotations(b_6, t_107);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm z_107 = NULL;
  z_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_107), term_k_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm u_164 (ATerm), ATerm v_164 (ATerm), ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL;
  ATerm m_44 = t;
  int n_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_107 = NULL,s_107 = NULL;
      t = term_a_43;
      r_107 = t;
      t = term_e_44;
      s_107 = t;
      t = term_f_44;
      t = c_12(r_107, s_107, t);
      LocalPopChoice(n_44);
    }
  else
    {
      t = m_44;
      t = fetch_1_0(u_13, t);
    }
  {
    ATerm p_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_164(t);
        t = echo_0_0(t);
        LocalPopChoice(q_44);
      }
    else
      {
        t = p_44;
      }
  }
  t = term_t_44;
  t = echo_0_0(t);
  t = term_u_44;
  p_107 = t;
  t = term_v_44;
  q_107 = t;
  t = term_z_44;
  t = c_12(p_107, q_107, t);
  t = reverse_acc_2_0(_id, v_13, t);
  t = map_1_0(w_13, t);
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_108 = NULL;
        t = v_164(t);
        a_108 = t;
        t = (ATerm) ATinsert(CheckATermList(a_108), term_e_45);
        t = echo_0_0(t);
        LocalPopChoice(b_45);
      }
    else
      {
        t = a_45;
      }
  }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL,d_6 = NULL;
  i_108 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_108);
  g_108 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_108);
  d_6 = t;
  t = SSLsetAnnotations(d_6, g_108);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_108 = NULL;
  d_108 = t;
  {
    ATerm f_45 = t;
    int g_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_108 = NULL,f_108 = NULL;
        t = term_a_43;
        e_108 = t;
        t = term_e_44;
        f_108 = t;
        t = term_f_44;
        t = c_12(e_108, f_108, t);
        LocalPopChoice(g_45);
      }
    else
      {
        t = f_45;
        t = fetch_1_0(x_13, t);
      }
  }
  t = d_108;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm k_108 = NULL;
  k_108 = t;
  if(match_string(t, "-k"))
    {
      t = k_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_108;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL;
  l_108 = t;
  t = SSL_string_to_int(l_108);
  m_108 = t;
  t = term_h_45;
  n_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_45, m_108);
  t = f_12(n_108, m_108, t);
  t = l_108;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_i_45;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_14, b_14, c_14, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm p_108 = NULL;
  p_108 = t;
  if(match_string(t, "-S"))
    {
      t = p_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_108;
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL;
  t = term_j_45;
  q_108 = t;
  t = term_n_20;
  r_108 = t;
  t = term_l_45;
  t = f_12(q_108, r_108, t);
  t = term_m_45;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL;
  s_108 = t;
  t = SSL_string_to_int(s_108);
  t_108 = t;
  t = term_j_45;
  u_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_45, t_108);
  t = f_12(u_108, t_108, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_108);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_q_45;
  return(t);
}
static ATerm m_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL;
  t = term_r_45;
  v_108 = t;
  t = term_j_31;
  w_108 = t;
  t = term_s_45;
  t = f_12(v_108, w_108, t);
  t = term_t_45;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_v_45;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_14, e_14, f_14, t);
      LocalPopChoice(x_45);
    }
  else
    {
      t = w_45;
      {
        ATerm y_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_14, h_14, i_14, t);
            LocalPopChoice(z_45);
          }
        else
          {
            t = y_45;
            t = Option_3_0(m_14, n_14, p_14, t);
          }
      }
    }
  return(t);
}
static ATerm f_12 (ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm x_108 = NULL,y_108 = NULL;
  t = term_a_43;
  x_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_43, m_54, n_54);
  t = lookup_table_0_1(x_108, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(m_54, n_54, y_108, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_43, m_54, n_54);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_109 = NULL,d_109 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL;
      t = term_j_31;
      t = g_0(t);
      e_109 = t;
      t = term_u_44;
      f_109 = t;
      t = term_v_44;
      g_109 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_44, term_v_44, e_109);
      t = d_12(f_109, g_109, e_109, t);
      _fail(t);
    }
  else
    {
      ATerm j_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_109 = ATgetFirst((ATermList) t);
          d_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_109;
      t = d_0(t);
      t = term_j_31;
      t = f_0(t);
      j_109 = t;
      t = (ATerm) ATinsert(CheckATermList(d_109), j_109);
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm l_109 = NULL;
  l_109 = t;
  if(match_string(t, "-o"))
    {
      t = l_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_109;
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm m_109 = NULL,n_109 = NULL;
  m_109 = t;
  t = term_b_43;
  n_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_43, m_109);
  t = f_12(n_109, m_109, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_109);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_a_46;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_14, r_14, s_14, t);
  return(t);
}
static ATerm d_12 (ATerm n_73, ATerm o_73, ATerm m_73, ATerm t)
{
  ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL,t_109 = NULL;
  p_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_73, o_73);
  {
    ATerm b_46 = t;
    int c_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_46 = ATgetArgument(t, 0);
            ATerm g_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_73, o_73);
        t = c_12(n_73, o_73, t);
        LocalPopChoice(c_46);
      }
    else
      {
        t = b_46;
        t = (ATerm) ATempty;
      }
  }
  q_109 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_73, o_73, (ATerm) ATinsert(CheckATermList(q_109), m_73));
  t = lookup_table_0_1(n_73, t);
  t_109 = t;
  t = (ATerm) ATinsert(CheckATermList(q_109), m_73);
  r_109 = t;
  t = t_109;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(o_73, r_109, s_109, t);
  t = p_109;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL,d_110 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL;
      t = term_j_31;
      t = n_0(t);
      e_110 = t;
      t = term_u_44;
      f_110 = t;
      t = term_v_44;
      g_110 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_44, term_v_44, e_110);
      t = d_12(f_110, g_110, e_110, t);
      _fail(t);
    }
  else
    {
      ATerm k_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_110 = ATgetFirst((ATermList) t);
          b_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_110 = ATgetFirst((ATermList) t);
          d_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_110;
      t = j_0(t);
      t = c_110;
      t = l_0(t);
      k_110 = t;
      t = (ATerm) ATinsert(CheckATermList(d_110), k_110);
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm m_110 = NULL;
  m_110 = t;
  if(match_string(t, "-i"))
    {
      t = m_110;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_110;
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm n_110 = NULL,o_110 = NULL;
  n_110 = t;
  t = term_b_44;
  o_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_44, n_110);
  t = f_12(o_110, n_110, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_110);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_h_46;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_14, a_15, b_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_110 = NULL,q_110 = NULL,r_110 = NULL,s_110 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_31;
  t = whoami_0_0(t);
  p_110 = t;
  t = term_e_17;
  r_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_46), p_110);
  s_110 = t;
  t = SSL_printnl(r_110, s_110);
  t = term_o_20;
  q_110 = t;
  t = SSL_exit(q_110);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_110 = NULL,u_110 = NULL;
  t = term_a_43;
  t_110 = t;
  t = term_e_44;
  u_110 = t;
  t = term_f_44;
  t = c_12(t_110, u_110, t);
  return(t);
}
static ATerm x_11 (ATerm l_57, ATerm m_57, ATerm t)
{
  ATerm m_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_57, m_57);
      LocalPopChoice(o_46);
    }
  else
    {
      t = m_46;
      t = SSL_addr(l_57, m_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_154 (ATerm), ATerm z_154 (ATerm), ATerm t)
{
  ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL;
  w_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_110;
      t = y_154(t);
    }
  else
    {
      ATerm b_111 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_110 = ATgetFirst((ATermList) t);
          y_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_110;
      t = foldr_2_0(y_154, z_154, t);
      b_111 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_110, b_111);
      t = z_154(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm w_39 = NULL,c_40 = NULL;
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(w_39, c_40, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_111 = NULL,s_39 = NULL,t_39 = NULL;
  t = times_0_0(t);
  t_39 = t;
  t = SSL_explode_term(t_39);
  if(match_cons(t, sym__2))
    {
      ATerm r_46 = ATgetArgument(t, 0);
      s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_39;
  t = foldr_2_0(c_15, d_15, t);
  e_111 = t;
  t = SSL_TicksToSeconds(e_111);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL;
  p_111 = t;
  if(match_cons(t, sym__2))
    {
      q_111 = ATgetArgument(t, 0);
      r_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_111;
        if((q_111 != t))
          {
            _fail(t);
          }
        t = p_111;
        LocalPopChoice(u_46);
      }
    else
      {
        t = s_46;
        t = (ATerm) ATmakeAppl(sym__2, q_111, r_111);
        {
          ATerm v_46 = t;
          int x_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_111, r_111);
              LocalPopChoice(x_46);
            }
          else
            {
              t = v_46;
              t = SSL_gtr(q_111, r_111);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_111, r_111);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_141 (ATerm), ATerm t)
{
  ATerm v_111 = NULL;
  v_111 = t;
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL;
        t = term_a_43;
        y_111 = t;
        t = term_j_45;
        z_111 = t;
        t = term_h_47;
        t = c_12(y_111, z_111, t);
        x_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_111, term_o_20);
        t = geq_0_0(t);
        t = v_111;
        t = r_141(t);
        LocalPopChoice(f_47);
      }
    else
      {
        t = e_47;
        t = v_111;
      }
  }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm b_112 = NULL,c_112 = NULL,e_112 = NULL,f_112 = NULL;
  t = run_time_0_0(t);
  b_112 = t;
  t = term_j_31;
  t = whoami_0_0(t);
  c_112 = t;
  t = term_e_17;
  e_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_47), b_112), term_j_47), c_112);
  f_112 = t;
  t = SSL_printnl(e_112, f_112);
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_47), b_112), term_j_47), c_112));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_112 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_20;
  g_112 = t;
  t = SSL_exit(g_112);
  return(t);
}
static ATerm g_12 (ATerm c_78, ATerm d_78, ATerm e_78, ATerm t)
{
  ATerm h_112 = NULL;
  t = SSL_hashtable_put(e_78, c_78, d_78);
  h_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_112);
  return(t);
}
ATerm lookup_table_0_1 (ATerm z_74, ATerm t)
{
  ATerm q_112 = NULL;
  t = table_hashtable_0_0(t);
  q_112 = t;
  {
    ATerm l_47 = t;
    int m_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_40 = NULL;
        t = q_112;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_12(z_74, n_40, t);
        LocalPopChoice(m_47);
      }
    else
      {
        t = l_47;
        {
          ATerm s_40 = NULL;
          t = z_74;
          t = table_create_0_0(t);
          t = q_112;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_12(z_74, s_40, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm k_78, ATerm l_78, ATerm t)
{
  ATerm t_112 = NULL;
  t = SSL_hashtable_create(k_78, l_78);
  t_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_112);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_112 = NULL,v_112 = NULL,w_112 = NULL,y_112 = NULL,z_112 = NULL;
  u_112 = t;
  t = term_n_47;
  y_112 = t;
  t = term_o_47;
  z_112 = t;
  t = u_112;
  t = new_hashtable_0_2(y_112, z_112, t);
  v_112 = t;
  t = u_112;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(u_112, v_112, w_112, t);
  t = u_112;
  return(t);
}
static ATerm z_11 (ATerm h_78, ATerm i_78, ATerm t)
{
  ATerm a_113 = NULL;
  t = SSL_hashtable_remove(i_78, h_78);
  a_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_113);
  return(t);
}
static ATerm a_12 (ATerm m_78, ATerm t)
{
  ATerm b_113 = NULL;
  t = SSL_hashtable_destroy(m_78);
  b_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_113);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_113 = NULL;
  t = SSL_table_hashtable();
  c_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_113);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL,g_113 = NULL;
  d_113 = t;
  t = table_hashtable_0_0(t);
  e_113 = t;
  t = lookup_table_0_1(d_113, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(g_113, t);
  t = e_113;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(d_113, f_113, t);
  t = d_113;
  return(t);
}
ATerm fetch_1_0 (ATerm u_144 (ATerm), ATerm t)
{
  static ATerm d_114 (ATerm t);
  static ATerm d_114 (ATerm t)
  {
    ATerm a_114 = NULL,b_114 = NULL,c_114 = NULL;
    a_114 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_114 = ATgetFirst((ATermList) t);
        c_114 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_47 = t;
      int q_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_40 = NULL,a_41 = NULL,g_6 = NULL;
          t = SSLgetAnnotations(a_114);
          x_40 = t;
          t = b_114;
          t = u_144(t);
          a_41 = t;
          t = (ATerm) ATinsert(CheckATermList(c_114), a_41);
          g_6 = t;
          t = SSLsetAnnotations(g_6, x_40);
          LocalPopChoice(q_47);
        }
      else
        {
          t = p_47;
          {
            ATerm j_41 = NULL,o_41 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(a_114);
            j_41 = t;
            t = c_114;
            t = d_114(t);
            o_41 = t;
            t = (ATerm) ATinsert(CheckATermList(o_41), b_114);
            h_6 = t;
            t = SSLsetAnnotations(h_6, j_41);
          }
        }
    }
    return(t);
  }
  t = d_114(t);
  return(t);
}
static ATerm h_12 (ATerm f_78, ATerm g_78, ATerm t)
{
  t = SSL_hashtable_get(g_78, f_78);
  return(t);
}
static ATerm c_12 (ATerm g_75, ATerm h_75, ATerm t)
{
  ATerm g_114 = NULL;
  t = lookup_table_0_1(g_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_12(h_75, g_114, t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm i_114 = NULL,j_114 = NULL;
  t = term_r_47;
  i_114 = t;
  t = term_j_31;
  j_114 = t;
  t = term_s_47;
  t = f_12(i_114, j_114, t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_t_47;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL;
  t = term_r_47;
  m_114 = t;
  t = term_j_31;
  n_114 = t;
  t = term_s_47;
  t = f_12(m_114, n_114, t);
  t = term_u_47;
  k_114 = t;
  t = term_j_31;
  l_114 = t;
  t = term_v_47;
  t = f_12(k_114, l_114, t);
  t = term_w_47;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_x_47;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_47 = t;
  int z_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_15, h_15, i_15, t);
      LocalPopChoice(z_47);
    }
  else
    {
      t = y_47;
      t = Option_3_0(j_15, k_15, l_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_164 (ATerm), ATerm t)
{
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,x_114 = NULL,y_114 = NULL,k_6 = NULL;
  s_114 = t;
  {
    ATerm c_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_48;
        t = p_164(t);
        LocalPopChoice(f_48);
      }
    else
      {
        t = c_48;
      }
  }
  t = s_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_114 = ATgetFirst((ATermList) t);
      v_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_114);
  t_114 = t;
  t = term_e_44;
  y_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_44, u_114);
  t = f_12(y_114, u_114, t);
  t = v_114;
  {
    static ATerm i_115 (ATerm t);
    static ATerm i_115 (ATerm t)
    {
      ATerm h_48 = t;
      int i_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_48 = t;
          int k_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_115 = NULL;
              b_115 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_115;
              LocalPopChoice(k_48);
            }
          else
            {
              t = j_48;
              t = p_164(t);
              t = Cons_2_0(_id, i_115, t);
            }
          LocalPopChoice(i_48);
        }
      else
        {
          t = h_48;
          {
            ATerm e_115 = NULL,f_115 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_115 = ATgetFirst((ATermList) t);
                f_115 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_115), (ATerm) ATmakeAppl(sym_Undefined_1, e_115));
          }
        }
      return(t);
    }
    t = i_115(t);
  }
  x_114 = t;
  t = (ATerm) ATinsert(CheckATermList(x_114), (ATerm) ATmakeAppl(sym_Program_1, u_114));
  k_6 = t;
  t = SSLsetAnnotations(k_6, t_114);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm v_115 = NULL;
  v_115 = t;
  if(match_string(t, "--help"))
    {
      t = v_115;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_115;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_115;
        }
    }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm w_115 = NULL,x_115 = NULL;
  t = term_l_48;
  w_115 = t;
  t = term_j_31;
  x_115 = t;
  t = term_m_48;
  t = f_12(w_115, x_115, t);
  t = term_n_48;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = term_o_48;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm m_164 (ATerm), ATerm n_164 (ATerm), ATerm o_164 (ATerm), ATerm t)
{
  ATerm n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL;
  p_115 = t;
  t = term_u_44;
  q_115 = t;
  t = term_p_48;
  t = lookup_table_0_1(q_115, t);
  u_115 = t;
  t = term_v_44;
  r_115 = t;
  t = (ATerm) ATempty;
  s_115 = t;
  t = u_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(r_115, s_115, t_115, t);
  t = p_115;
  {
    static ATerm m_15 (ATerm t);
    static ATerm m_15 (ATerm t)
    {
      ATerm q_48 = t;
      int r_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_164(t);
          LocalPopChoice(r_48);
        }
      else
        {
          t = q_48;
          {
            ATerm u_48 = t;
            int v_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_15, s_15, t_15, t);
                LocalPopChoice(v_48);
              }
            else
              {
                t = u_48;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_15, t);
  }
  {
    ATerm z_48 = t;
    int a_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_116 = NULL;
        i_116 = t;
        {
          ATerm b_49 = t;
          int d_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_42 = NULL;
              t = i_116;
              {
                ATerm e_49 = t;
                int f_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_42 = NULL,j_42 = NULL;
                    t = term_a_43;
                    g_42 = t;
                    t = term_l_48;
                    j_42 = t;
                    t = term_g_49;
                    t = c_12(g_42, j_42, t);
                    LocalPopChoice(f_49);
                  }
                else
                  {
                    t = e_49;
                    t = fetch_1_0(u_15, t);
                  }
              }
              t = i_116;
              t = n_164(t);
              t = term_n_20;
              a_42 = t;
              t = SSL_exit(a_42);
              LocalPopChoice(d_49);
            }
          else
            {
              t = b_49;
              {
                ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
                t = term_a_43;
                o_42 = t;
                t = term_r_47;
                p_42 = t;
                t = term_h_49;
                t = c_12(o_42, p_42, t);
                t = i_116;
                t = o_164(t);
                t = term_n_20;
                n_42 = t;
                t = SSL_exit(n_42);
              }
            }
        }
        LocalPopChoice(a_49);
      }
    else
      {
        t = z_48;
        {
          ATerm i_49 = t;
          int j_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL;
              static ATerm j_16 (ATerm t);
              static ATerm j_16 (ATerm t)
              {
                ATerm m_116 = NULL,n_116 = NULL,o_116 = NULL,n_6 = NULL;
                o_116 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_116 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_116);
                m_116 = t;
                t = n_116;
                if(((n_115 != NULL) && (n_115 != t)))
                  _fail(t);
                else
                  n_115 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_116);
                n_6 = t;
                t = SSLsetAnnotations(n_6, m_116);
                return(t);
              }
              t = fetch_1_0(j_16, t);
              t = term_e_17;
              k_116 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_115)), term_k_49);
              l_116 = t;
              t = SSL_printnl(k_116, l_116);
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_115)), term_k_49));
              t = n_164(t);
              t = term_o_20;
              j_116 = t;
              t = SSL_exit(j_116);
              LocalPopChoice(j_49);
            }
          else
            {
              t = i_49;
            }
        }
      }
  }
  o_115 = t;
  t = term_u_44;
  t = table_destroy_0_0(t);
  t = o_115;
  return(t);
}
ATerm option_wrap_5_0 (ATerm p_162 (ATerm), ATerm q_162 (ATerm), ATerm r_162 (ATerm), ATerm s_162 (ATerm), ATerm t_162 (ATerm), ATerm t)
{
  ATerm t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL;
  t = parse_options_3_0(p_162, q_162, r_162, t);
  t_116 = t;
  t = term_l_49;
  t = table_create_0_0(t);
  t = term_l_49;
  u_116 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_49, term_m_49, t_116);
  t = lookup_table_0_1(u_116, t);
  x_116 = t;
  t = term_m_49;
  v_116 = t;
  t = x_116;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(v_116, t_116, w_116, t);
  t = t_116;
  t = s_162(t);
  {
    ATerm n_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_162(t);
        t = report_success_0_0(t);
        LocalPopChoice(o_49);
      }
    else
      {
        t = n_49;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm p_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(q_49);
    }
  else
    {
      t = p_49;
      {
        ATerm r_49 = t;
        int s_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(s_49);
          }
        else
          {
            t = r_49;
            {
              ATerm t_49 = t;
              int u_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_16, v_16, x_16, t);
                  LocalPopChoice(u_49);
                }
              else
                {
                  t = t_49;
                  {
                    ATerm v_49 = t;
                    int w_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(w_49);
                      }
                    else
                      {
                        t = v_49;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = input_1_0(z_16, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm z_116 = NULL,a_117 = NULL;
  t = term_g_43;
  z_116 = t;
  t = term_j_31;
  a_117 = t;
  t = term_x_49;
  t = f_12(z_116, a_117, t);
  t = term_y_49;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_z_49;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = output_1_0(a_17, t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm c_117 = NULL,d_117 = NULL,e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,s_6 = NULL,r_6 = NULL;
  j_117 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_117);
  c_117 = t;
  t = d_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_117 = ATgetFirst((ATermList) t);
      g_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_117);
  e_117 = t;
  t = g_117;
  t = Cons_2_0(b_17, d_17, t);
  h_117 = t;
  t = (ATerm) ATinsert(CheckATermList(h_117), f_117);
  r_6 = t;
  t = SSLsetAnnotations(r_6, e_117);
  i_117 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_117);
  s_6 = t;
  t = SSLsetAnnotations(s_6, c_117);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,p_6 = NULL;
  n_117 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_117);
  k_117 = t;
  t = l_117;
  t = all_defs_0_0(t);
  m_117 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_117);
  p_6 = t;
  t = SSLsetAnnotations(p_6, k_117);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(k_16, default_system_usage_0_0, default_system_about_0_0, _id, r_16, t);
  return(t);
}
